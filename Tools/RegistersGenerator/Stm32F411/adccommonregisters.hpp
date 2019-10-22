/*******************************************************************************
* Filename      : adccommonregisters.hpp
*
* Details       : ADC common registers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADCCOMMONREGISTERS_HPP)
#define ADCCOMMONREGISTERS_HPP

#include "adccommonfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC_Common
{
  struct ADC_CommonCSRBase {} ;

  struct CSR : public RegisterBase<0x40012300, 32, ReadMode>
  {
    using OVR3 = ADC_Common_CSR_OVR3_Values<ADC_Common::CSR, 21, 1, ReadMode, ADC_CommonCSRBase> ;
    using STRT3 = ADC_Common_CSR_STRT3_Values<ADC_Common::CSR, 20, 1, ReadMode, ADC_CommonCSRBase> ;
    using JSTRT3 = ADC_Common_CSR_JSTRT3_Values<ADC_Common::CSR, 19, 1, ReadMode, ADC_CommonCSRBase> ;
    using JEOC3 = ADC_Common_CSR_JEOC3_Values<ADC_Common::CSR, 18, 1, ReadMode, ADC_CommonCSRBase> ;
    using EOC3 = ADC_Common_CSR_EOC3_Values<ADC_Common::CSR, 17, 1, ReadMode, ADC_CommonCSRBase> ;
    using AWD3 = ADC_Common_CSR_AWD3_Values<ADC_Common::CSR, 16, 1, ReadMode, ADC_CommonCSRBase> ;
    using OVR2 = ADC_Common_CSR_OVR2_Values<ADC_Common::CSR, 13, 1, ReadMode, ADC_CommonCSRBase> ;
    using STRT2 = ADC_Common_CSR_STRT2_Values<ADC_Common::CSR, 12, 1, ReadMode, ADC_CommonCSRBase> ;
    using JSTRT2 = ADC_Common_CSR_JSTRT2_Values<ADC_Common::CSR, 11, 1, ReadMode, ADC_CommonCSRBase> ;
    using JEOC2 = ADC_Common_CSR_JEOC2_Values<ADC_Common::CSR, 10, 1, ReadMode, ADC_CommonCSRBase> ;
    using EOC2 = ADC_Common_CSR_EOC2_Values<ADC_Common::CSR, 9, 1, ReadMode, ADC_CommonCSRBase> ;
    using AWD2 = ADC_Common_CSR_AWD2_Values<ADC_Common::CSR, 8, 1, ReadMode, ADC_CommonCSRBase> ;
    using OVR1 = ADC_Common_CSR_OVR1_Values<ADC_Common::CSR, 5, 1, ReadMode, ADC_CommonCSRBase> ;
    using STRT1 = ADC_Common_CSR_STRT1_Values<ADC_Common::CSR, 4, 1, ReadMode, ADC_CommonCSRBase> ;
    using JSTRT1 = ADC_Common_CSR_JSTRT1_Values<ADC_Common::CSR, 3, 1, ReadMode, ADC_CommonCSRBase> ;
    using JEOC1 = ADC_Common_CSR_JEOC1_Values<ADC_Common::CSR, 2, 1, ReadMode, ADC_CommonCSRBase> ;
    using EOC1 = ADC_Common_CSR_EOC1_Values<ADC_Common::CSR, 1, 1, ReadMode, ADC_CommonCSRBase> ;
    using AWD1 = ADC_Common_CSR_AWD1_Values<ADC_Common::CSR, 0, 1, ReadMode, ADC_CommonCSRBase> ;
    using FieldValues = ADC_Common_CSR_AWD1_Values<ADC_Common::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40012300, 32, ReadMode, ADC_CommonCSRBase, T...> ;

  struct ADC_CommonCCRBase {} ;

  struct CCR : public RegisterBase<0x40012304, 32, ReadWriteMode>
  {
    using TSVREFE = ADC_Common_CCR_TSVREFE_Values<ADC_Common::CCR, 23, 1, ReadWriteMode, ADC_CommonCCRBase> ;
    using VBATE = ADC_Common_CCR_VBATE_Values<ADC_Common::CCR, 22, 1, ReadWriteMode, ADC_CommonCCRBase> ;
    using ADCPRE = ADC_Common_CCR_ADCPRE_Values<ADC_Common::CCR, 16, 2, ReadWriteMode, ADC_CommonCCRBase> ;
    using DMA = ADC_Common_CCR_DMA_Values<ADC_Common::CCR, 14, 2, ReadWriteMode, ADC_CommonCCRBase> ;
    using DDS = ADC_Common_CCR_DDS_Values<ADC_Common::CCR, 13, 1, ReadWriteMode, ADC_CommonCCRBase> ;
    using DELAY = ADC_Common_CCR_DELAY_Values<ADC_Common::CCR, 8, 4, ReadWriteMode, ADC_CommonCCRBase> ;
    using FieldValues = ADC_Common_CCR_DELAY_Values<ADC_Common::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x40012304, 32, ReadWriteMode, ADC_CommonCCRBase, T...> ;

} ;

#endif //#if !defined(ADCCOMMONREGISTERS_HPP)
