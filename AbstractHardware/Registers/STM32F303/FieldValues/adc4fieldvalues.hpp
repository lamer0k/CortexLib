/*******************************************************************************
* Filename      : adc4fieldvalues.hpp
*
* Details       : Enumerations related with ADC4 peripheral. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC4ENUMS_HPP)
#define ADC4ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_JQOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_JQOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_JQOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_AWD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_AWD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_AWD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_AWD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_AWD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_AWD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_AWD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_AWD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_AWD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_JEOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_JEOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_JEOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_JEOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_JEOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_EOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_EOSMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_EOSMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_EOSMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_ISR_ADRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_ISR_ADRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_ISR_ADRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_JQOVFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_JQOVFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_JQOVFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_AWD3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_AWD3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_AWD3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_AWD2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_AWD2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_AWD2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_AWD1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_AWD1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_AWD1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_JEOSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_JEOSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_JEOSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_EOSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_EOSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_EOSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_EOSMPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_EOSMPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_EOSMPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_IER_ADRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_IER_ADRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_IER_ADRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADCAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADCAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADCALDIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADCALDIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADCALDIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_DEEPPWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_DEEPPWD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_DEEPPWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADVREGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADVREGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADVREGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_JADSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_JADSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_JADSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADSTP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_JADSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_JADSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_JADSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CR_ADEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CR_ADEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CR_ADEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_AWDCH1CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_CFGR_AWDCH1CH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_JAUTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_JAUTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_JAUTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_JAWD1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_JAWD1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_JAWD1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_AWD1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_AWD1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_AWD1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_AWD1SGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_AWD1SGL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_AWD1SGL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_JQM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_JQM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_JQM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_JDISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_JDISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_JDISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_DISCNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_CFGR_DISCNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_DISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_DISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_AUTOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_AUTOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_AUTOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_AUTDLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_AUTDLY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_AUTDLY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_CONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_OVRMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_OVRMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_OVRMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_EXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_EXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_CFGR_EXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_CFGR_EXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_CFGR_EXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_ALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_ALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_RES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_RES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_CFGR_RES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_CFGR_RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_DMACFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_DMACFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_DMACFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CFGR_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_CFGR_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_CFGR_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP9_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP8_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP7_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP6_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP5_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP4_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP3_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR1_SMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR1_SMP1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP18_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP17_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP16_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP15_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP14_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP13_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP12_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP11_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SMPR2_SMP10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SMPR2_SMP10_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR1_HT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR1_LT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR2_HT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR2_LT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR3_HT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_TR3_LT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR1_SQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR1_SQ4_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR1_SQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR1_SQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR1_SQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR1_SQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR1_SQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR1_SQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR1_L3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR1_L3_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR2_SQ9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR2_SQ9_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR2_SQ8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR2_SQ8_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR2_SQ7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR2_SQ7_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR2_SQ6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR2_SQ6_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR2_SQ5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR2_SQ5_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR3_SQ14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR3_SQ14_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR3_SQ13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR3_SQ13_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR3_SQ12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR3_SQ12_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR3_SQ11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR3_SQ11_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR3_SQ10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR3_SQ10_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR4_SQ16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR4_SQ16_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_SQR4_SQ15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_SQR4_SQ15_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_DR_regularDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JSQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_JSQR_JSQ4_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JSQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_JSQR_JSQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JSQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_JSQR_JSQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JSQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_JSQR_JSQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_JSQR_JEXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JSQR_JL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_JSQR_JL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_JSQR_JL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_JSQR_JL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_JSQR_JL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR1_OFFSET1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR1_OFFSET1_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR1_OFFSET1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR1_OFFSET1_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_OFR1_OFFSET1_CH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR1_OFFSET1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR2_OFFSET2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR2_OFFSET2_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR2_OFFSET2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR2_OFFSET2_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_OFR2_OFFSET2_CH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR2_OFFSET2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR3_OFFSET3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR3_OFFSET3_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR3_OFFSET3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR3_OFFSET3_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_OFR3_OFFSET3_CH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR3_OFFSET3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR4_OFFSET4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR4_OFFSET4_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR4_OFFSET4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR4_OFFSET4_CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC4_OFR4_OFFSET4_CH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_OFR4_OFFSET4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JDR1_JDATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JDR2_JDATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JDR3_JDATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_JDR4_JDATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_AWD2CR_AWD2CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_AWD3CR_AWD3CH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_DIFSEL_DIFSEL_1_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_DIFSEL_DIFSEL_16_18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC4_DIFSEL_DIFSEL_16_18_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CALFACT_CALFACT_D_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC4_CALFACT_CALFACT_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC4ENUMS_HPP)
