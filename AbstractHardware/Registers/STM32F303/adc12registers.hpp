/*******************************************************************************
* Filename      : adc12registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(ADC12REGISTERS_HPP)
#define ADC12REGISTERS_HPP

#include "adc12fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC1_2
{
  struct ADC1_2CSRBase {} ;

  struct CSR : public RegisterBase<0x50000300, 32, ReadMode>
  {
    using ADDRDY_MST = ADC1_2_CSR_ADDRDY_MST_Values<ADC1_2::CSR, 0, 1, ReadMode, ADC1_2CSRBase> ;
    using EOSMP_MST = ADC1_2_CSR_EOSMP_MST_Values<ADC1_2::CSR, 1, 1, ReadMode, ADC1_2CSRBase> ;
    using EOC_MST = ADC1_2_CSR_EOC_MST_Values<ADC1_2::CSR, 2, 1, ReadMode, ADC1_2CSRBase> ;
    using EOS_MST = ADC1_2_CSR_EOS_MST_Values<ADC1_2::CSR, 3, 1, ReadMode, ADC1_2CSRBase> ;
    using OVR_MST = ADC1_2_CSR_OVR_MST_Values<ADC1_2::CSR, 4, 1, ReadMode, ADC1_2CSRBase> ;
    using JEOC_MST = ADC1_2_CSR_JEOC_MST_Values<ADC1_2::CSR, 5, 1, ReadMode, ADC1_2CSRBase> ;
    using JEOS_MST = ADC1_2_CSR_JEOS_MST_Values<ADC1_2::CSR, 6, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD1_MST = ADC1_2_CSR_AWD1_MST_Values<ADC1_2::CSR, 7, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD2_MST = ADC1_2_CSR_AWD2_MST_Values<ADC1_2::CSR, 8, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD3_MST = ADC1_2_CSR_AWD3_MST_Values<ADC1_2::CSR, 9, 1, ReadMode, ADC1_2CSRBase> ;
    using JQOVF_MST = ADC1_2_CSR_JQOVF_MST_Values<ADC1_2::CSR, 10, 1, ReadMode, ADC1_2CSRBase> ;
    using ADRDY_SLV = ADC1_2_CSR_ADRDY_SLV_Values<ADC1_2::CSR, 16, 1, ReadMode, ADC1_2CSRBase> ;
    using EOSMP_SLV = ADC1_2_CSR_EOSMP_SLV_Values<ADC1_2::CSR, 17, 1, ReadMode, ADC1_2CSRBase> ;
    using EOC_SLV = ADC1_2_CSR_EOC_SLV_Values<ADC1_2::CSR, 18, 1, ReadMode, ADC1_2CSRBase> ;
    using EOS_SLV = ADC1_2_CSR_EOS_SLV_Values<ADC1_2::CSR, 19, 1, ReadMode, ADC1_2CSRBase> ;
    using OVR_SLV = ADC1_2_CSR_OVR_SLV_Values<ADC1_2::CSR, 20, 1, ReadMode, ADC1_2CSRBase> ;
    using JEOC_SLV = ADC1_2_CSR_JEOC_SLV_Values<ADC1_2::CSR, 21, 1, ReadMode, ADC1_2CSRBase> ;
    using JEOS_SLV = ADC1_2_CSR_JEOS_SLV_Values<ADC1_2::CSR, 22, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD1_SLV = ADC1_2_CSR_AWD1_SLV_Values<ADC1_2::CSR, 23, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD2_SLV = ADC1_2_CSR_AWD2_SLV_Values<ADC1_2::CSR, 24, 1, ReadMode, ADC1_2CSRBase> ;
    using AWD3_SLV = ADC1_2_CSR_AWD3_SLV_Values<ADC1_2::CSR, 25, 1, ReadMode, ADC1_2CSRBase> ;
    using JQOVF_SLV = ADC1_2_CSR_JQOVF_SLV_Values<ADC1_2::CSR, 26, 1, ReadMode, ADC1_2CSRBase> ;
    using FieldValues = ADC1_2_CSR_JQOVF_SLV_Values<ADC1_2::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x50000300, 32, ReadMode, ADC1_2CSRBase, T...> ;

  struct ADC1_2CCRBase {} ;

  struct CCR : public RegisterBase<0x50000308, 32, ReadWriteMode>
  {
    using MULT = ADC1_2_CCR_MULT_Values<ADC1_2::CCR, 0, 5, ReadWriteMode, ADC1_2CCRBase> ;
    using DELAY = ADC1_2_CCR_DELAY_Values<ADC1_2::CCR, 8, 4, ReadWriteMode, ADC1_2CCRBase> ;
    using DMACFG = ADC1_2_CCR_DMACFG_Values<ADC1_2::CCR, 13, 1, ReadWriteMode, ADC1_2CCRBase> ;
    using MDMA = ADC1_2_CCR_MDMA_Values<ADC1_2::CCR, 14, 2, ReadWriteMode, ADC1_2CCRBase> ;
    using CKMODE = ADC1_2_CCR_CKMODE_Values<ADC1_2::CCR, 16, 2, ReadWriteMode, ADC1_2CCRBase> ;
    using VREFEN = ADC1_2_CCR_VREFEN_Values<ADC1_2::CCR, 22, 1, ReadWriteMode, ADC1_2CCRBase> ;
    using TSEN = ADC1_2_CCR_TSEN_Values<ADC1_2::CCR, 23, 1, ReadWriteMode, ADC1_2CCRBase> ;
    using VBATEN = ADC1_2_CCR_VBATEN_Values<ADC1_2::CCR, 24, 1, ReadWriteMode, ADC1_2CCRBase> ;
    using FieldValues = ADC1_2_CCR_VBATEN_Values<ADC1_2::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x50000308, 32, ReadWriteMode, ADC1_2CCRBase, T...> ;

  struct ADC1_2CDRBase {} ;

  struct CDR : public RegisterBase<0x5000030C, 32, ReadMode>
  {
    using RDATA_SLV = ADC1_2_CDR_RDATA_SLV_Values<ADC1_2::CDR, 16, 16, ReadMode, ADC1_2CDRBase> ;
    using RDATA_MST = ADC1_2_CDR_RDATA_MST_Values<ADC1_2::CDR, 0, 16, ReadMode, ADC1_2CDRBase> ;
    using FieldValues = ADC1_2_CDR_RDATA_MST_Values<ADC1_2::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x5000030C, 32, ReadMode, ADC1_2CDRBase, T...> ;

} ;

#endif //#if !defined(ADC12REGISTERS_HPP)
