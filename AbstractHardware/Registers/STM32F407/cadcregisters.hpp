/*******************************************************************************
* Filename      : cadcregisters.hpp
*
* Details       : Common ADC registers. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(CADCREGISTERS_HPP)
#define CADCREGISTERS_HPP

#include "cadcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct C_ADC
{
  struct C_ADCCSRBase {} ;

  struct CSR : public RegisterBase<0x40012300, 32, ReadMode>
  {
    using OVR3 = C_ADC_CSR_OVR3_Values<C_ADC::CSR, 21, 1, ReadMode, C_ADCCSRBase> ;
    using STRT3 = C_ADC_CSR_STRT3_Values<C_ADC::CSR, 20, 1, ReadMode, C_ADCCSRBase> ;
    using JSTRT3 = C_ADC_CSR_JSTRT3_Values<C_ADC::CSR, 19, 1, ReadMode, C_ADCCSRBase> ;
    using JEOC3 = C_ADC_CSR_JEOC3_Values<C_ADC::CSR, 18, 1, ReadMode, C_ADCCSRBase> ;
    using EOC3 = C_ADC_CSR_EOC3_Values<C_ADC::CSR, 17, 1, ReadMode, C_ADCCSRBase> ;
    using AWD3 = C_ADC_CSR_AWD3_Values<C_ADC::CSR, 16, 1, ReadMode, C_ADCCSRBase> ;
    using OVR2 = C_ADC_CSR_OVR2_Values<C_ADC::CSR, 13, 1, ReadMode, C_ADCCSRBase> ;
    using STRT2 = C_ADC_CSR_STRT2_Values<C_ADC::CSR, 12, 1, ReadMode, C_ADCCSRBase> ;
    using JSTRT2 = C_ADC_CSR_JSTRT2_Values<C_ADC::CSR, 11, 1, ReadMode, C_ADCCSRBase> ;
    using JEOC2 = C_ADC_CSR_JEOC2_Values<C_ADC::CSR, 10, 1, ReadMode, C_ADCCSRBase> ;
    using EOC2 = C_ADC_CSR_EOC2_Values<C_ADC::CSR, 9, 1, ReadMode, C_ADCCSRBase> ;
    using AWD2 = C_ADC_CSR_AWD2_Values<C_ADC::CSR, 8, 1, ReadMode, C_ADCCSRBase> ;
    using OVR1 = C_ADC_CSR_OVR1_Values<C_ADC::CSR, 5, 1, ReadMode, C_ADCCSRBase> ;
    using STRT1 = C_ADC_CSR_STRT1_Values<C_ADC::CSR, 4, 1, ReadMode, C_ADCCSRBase> ;
    using JSTRT1 = C_ADC_CSR_JSTRT1_Values<C_ADC::CSR, 3, 1, ReadMode, C_ADCCSRBase> ;
    using JEOC1 = C_ADC_CSR_JEOC1_Values<C_ADC::CSR, 2, 1, ReadMode, C_ADCCSRBase> ;
    using EOC1 = C_ADC_CSR_EOC1_Values<C_ADC::CSR, 1, 1, ReadMode, C_ADCCSRBase> ;
    using AWD1 = C_ADC_CSR_AWD1_Values<C_ADC::CSR, 0, 1, ReadMode, C_ADCCSRBase> ;
    using FieldValues = C_ADC_CSR_AWD1_Values<C_ADC::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40012300, 32, ReadMode, C_ADCCSRBase, T...> ;

  struct C_ADCCCRBase {} ;

  struct CCR : public RegisterBase<0x40012304, 32, ReadWriteMode>
  {
    using TSVREFE = C_ADC_CCR_TSVREFE_Values<C_ADC::CCR, 23, 1, ReadWriteMode, C_ADCCCRBase> ;
    using VBATE = C_ADC_CCR_VBATE_Values<C_ADC::CCR, 22, 1, ReadWriteMode, C_ADCCCRBase> ;
    using ADCPRE = C_ADC_CCR_ADCPRE_Values<C_ADC::CCR, 16, 2, ReadWriteMode, C_ADCCCRBase> ;
    using DMA = C_ADC_CCR_DMA_Values<C_ADC::CCR, 14, 2, ReadWriteMode, C_ADCCCRBase> ;
    using DDS = C_ADC_CCR_DDS_Values<C_ADC::CCR, 13, 1, ReadWriteMode, C_ADCCCRBase> ;
    using DELAY = C_ADC_CCR_DELAY_Values<C_ADC::CCR, 8, 4, ReadWriteMode, C_ADCCCRBase> ;
    using MULT = C_ADC_CCR_MULT_Values<C_ADC::CCR, 0, 5, ReadWriteMode, C_ADCCCRBase> ;
    using FieldValues = C_ADC_CCR_MULT_Values<C_ADC::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x40012304, 32, ReadWriteMode, C_ADCCCRBase, T...> ;

  struct C_ADCCDRBase {} ;

  struct CDR : public RegisterBase<0x40012308, 32, ReadMode>
  {
    using DATA2 = C_ADC_CDR_DATA2_Values<C_ADC::CDR, 16, 16, ReadMode, C_ADCCDRBase> ;
    using DATA1 = C_ADC_CDR_DATA1_Values<C_ADC::CDR, 0, 16, ReadMode, C_ADCCDRBase> ;
    using FieldValues = C_ADC_CDR_DATA1_Values<C_ADC::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x40012308, 32, ReadMode, C_ADCCDRBase, T...> ;

} ;

#endif //#if !defined(CADCREGISTERS_HPP)
