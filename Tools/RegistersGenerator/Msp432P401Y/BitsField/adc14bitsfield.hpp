/*******************************************************************************
* Filename      : adc14bitsfield.hpp
*
* Details       : Enumerations related with ADC14 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(ADC14ENUMS_HPP)
#define ADC14ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14SC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ENC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14ENC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14ON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCMSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14MSC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14MSC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCSHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14BUSY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14BUSY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCCONSEQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CONSEQ_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14CONSEQ_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using ADC14CONSEQ_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using ADC14CONSEQ_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCISSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ISSH_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14ISSH_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCSHP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SHP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14SHP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCSHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCPDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14PDIV_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14PDIV_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using ADC14PDIV_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using ADC14PDIV_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCPWRMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14PWRMD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14PWRMD_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCREFBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14REFBURST_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14REFBURST_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14DF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RES_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14RES_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using ADC14RES_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using ADC14RES_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCCSTARTADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCBATMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14BATMAP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14BATMAP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCTCMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TCMAP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14TCMAP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCTL_ADCCHMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CH0MAP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14CH0MAP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCLO_ADCLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCHI_ADCHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14IE0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCINIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14INIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCLOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14LOIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14LOIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCHIIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14HIIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14HIIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCOVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14OVIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14OVIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCTOVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TOVIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14TOVIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIER_ADCRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RDYIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14RDYIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14IFG0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCINIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14INIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCLOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14LOIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14LOIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCHIIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14HIIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14HIIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14OVIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14OVIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCTOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TOVIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14TOVIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIFGR_ADCRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RDYIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14RDYIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14IFG0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCINIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14INIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14INIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCLOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14LOIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14LOIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCHIIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14HIIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14HIIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14OVIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14OVIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCTOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14TOVIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14TOVIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCCLRIFGR_CLRADCRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14RDYIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRADC14RDYIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCIV_ADCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCEOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14EOS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCVRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCDIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14DIF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCWINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14WINC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMCTL_ADCWINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using ADC14WINCTH_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC_ADCMEM_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC14ENUMS_HPP)
