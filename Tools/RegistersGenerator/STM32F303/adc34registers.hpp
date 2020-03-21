/*******************************************************************************
* Filename      : adc34registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC34REGISTERS_HPP)
#define ADC34REGISTERS_HPP

#include "adc34fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC3_4
{
  struct ADC3_4CSRBase {} ;

  struct CSR : public RegisterBase<0x50000700, 32, ReadMode>
  {
    using ADDRDY_MST = ADC3_4_CSR_ADDRDY_MST_Values<ADC3_4::CSR, 0, 1, ReadMode, ADC3_4CSRBase> ;
    using EOSMP_MST = ADC3_4_CSR_EOSMP_MST_Values<ADC3_4::CSR, 1, 1, ReadMode, ADC3_4CSRBase> ;
    using EOC_MST = ADC3_4_CSR_EOC_MST_Values<ADC3_4::CSR, 2, 1, ReadMode, ADC3_4CSRBase> ;
    using EOS_MST = ADC3_4_CSR_EOS_MST_Values<ADC3_4::CSR, 3, 1, ReadMode, ADC3_4CSRBase> ;
    using OVR_MST = ADC3_4_CSR_OVR_MST_Values<ADC3_4::CSR, 4, 1, ReadMode, ADC3_4CSRBase> ;
    using JEOC_MST = ADC3_4_CSR_JEOC_MST_Values<ADC3_4::CSR, 5, 1, ReadMode, ADC3_4CSRBase> ;
    using JEOS_MST = ADC3_4_CSR_JEOS_MST_Values<ADC3_4::CSR, 6, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD1_MST = ADC3_4_CSR_AWD1_MST_Values<ADC3_4::CSR, 7, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD2_MST = ADC3_4_CSR_AWD2_MST_Values<ADC3_4::CSR, 8, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD3_MST = ADC3_4_CSR_AWD3_MST_Values<ADC3_4::CSR, 9, 1, ReadMode, ADC3_4CSRBase> ;
    using JQOVF_MST = ADC3_4_CSR_JQOVF_MST_Values<ADC3_4::CSR, 10, 1, ReadMode, ADC3_4CSRBase> ;
    using ADRDY_SLV = ADC3_4_CSR_ADRDY_SLV_Values<ADC3_4::CSR, 16, 1, ReadMode, ADC3_4CSRBase> ;
    using EOSMP_SLV = ADC3_4_CSR_EOSMP_SLV_Values<ADC3_4::CSR, 17, 1, ReadMode, ADC3_4CSRBase> ;
    using EOC_SLV = ADC3_4_CSR_EOC_SLV_Values<ADC3_4::CSR, 18, 1, ReadMode, ADC3_4CSRBase> ;
    using EOS_SLV = ADC3_4_CSR_EOS_SLV_Values<ADC3_4::CSR, 19, 1, ReadMode, ADC3_4CSRBase> ;
    using OVR_SLV = ADC3_4_CSR_OVR_SLV_Values<ADC3_4::CSR, 20, 1, ReadMode, ADC3_4CSRBase> ;
    using JEOC_SLV = ADC3_4_CSR_JEOC_SLV_Values<ADC3_4::CSR, 21, 1, ReadMode, ADC3_4CSRBase> ;
    using JEOS_SLV = ADC3_4_CSR_JEOS_SLV_Values<ADC3_4::CSR, 22, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD1_SLV = ADC3_4_CSR_AWD1_SLV_Values<ADC3_4::CSR, 23, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD2_SLV = ADC3_4_CSR_AWD2_SLV_Values<ADC3_4::CSR, 24, 1, ReadMode, ADC3_4CSRBase> ;
    using AWD3_SLV = ADC3_4_CSR_AWD3_SLV_Values<ADC3_4::CSR, 25, 1, ReadMode, ADC3_4CSRBase> ;
    using JQOVF_SLV = ADC3_4_CSR_JQOVF_SLV_Values<ADC3_4::CSR, 26, 1, ReadMode, ADC3_4CSRBase> ;
    using FieldValues = ADC3_4_CSR_JQOVF_SLV_Values<ADC3_4::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x50000700, 32, ReadMode, ADC3_4CSRBase, T...> ;

  struct ADC3_4CCRBase {} ;

  struct CCR : public RegisterBase<0x50000708, 32, ReadWriteMode>
  {
    using MULT = ADC3_4_CCR_MULT_Values<ADC3_4::CCR, 0, 5, ReadWriteMode, ADC3_4CCRBase> ;
    using DELAY = ADC3_4_CCR_DELAY_Values<ADC3_4::CCR, 8, 4, ReadWriteMode, ADC3_4CCRBase> ;
    using DMACFG = ADC3_4_CCR_DMACFG_Values<ADC3_4::CCR, 13, 1, ReadWriteMode, ADC3_4CCRBase> ;
    using MDMA = ADC3_4_CCR_MDMA_Values<ADC3_4::CCR, 14, 2, ReadWriteMode, ADC3_4CCRBase> ;
    using CKMODE = ADC3_4_CCR_CKMODE_Values<ADC3_4::CCR, 16, 2, ReadWriteMode, ADC3_4CCRBase> ;
    using VREFEN = ADC3_4_CCR_VREFEN_Values<ADC3_4::CCR, 22, 1, ReadWriteMode, ADC3_4CCRBase> ;
    using TSEN = ADC3_4_CCR_TSEN_Values<ADC3_4::CCR, 23, 1, ReadWriteMode, ADC3_4CCRBase> ;
    using VBATEN = ADC3_4_CCR_VBATEN_Values<ADC3_4::CCR, 24, 1, ReadWriteMode, ADC3_4CCRBase> ;
    using FieldValues = ADC3_4_CCR_VBATEN_Values<ADC3_4::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x50000708, 32, ReadWriteMode, ADC3_4CCRBase, T...> ;

  struct ADC3_4CDRBase {} ;

  struct CDR : public RegisterBase<0x5000070C, 32, ReadMode>
  {
    using RDATA_SLV = ADC3_4_CDR_RDATA_SLV_Values<ADC3_4::CDR, 16, 16, ReadMode, ADC3_4CDRBase> ;
    using RDATA_MST = ADC3_4_CDR_RDATA_MST_Values<ADC3_4::CDR, 0, 16, ReadMode, ADC3_4CDRBase> ;
    using FieldValues = ADC3_4_CDR_RDATA_MST_Values<ADC3_4::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x5000070C, 32, ReadMode, ADC3_4CDRBase, T...> ;

} ;

#endif //#if !defined(ADC34REGISTERS_HPP)
