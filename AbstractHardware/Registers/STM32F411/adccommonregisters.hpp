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

#include "adccommonbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AdcCommon
{
  struct Csr : public RegisterBase<0x40012300, 32, ReadMode>
  {
    using Ovr3 = AdcCommonCsrOvrValues<AdcCommon::Csr, 21, 1, ReadMode, AdcCommonCsrOvrValuesBase> ;
    using Strt3 = AdcCommonCsrStrtValues<AdcCommon::Csr, 20, 1, ReadMode, AdcCommonCsrStrtValuesBase> ;
    using Jstrt3 = AdcCommonCsrJstrtValues<AdcCommon::Csr, 19, 1, ReadMode, AdcCommonCsrJstrtValuesBase> ;
    using Jeoc3 = AdcCommonCsrJeocValues<AdcCommon::Csr, 18, 1, ReadMode, AdcCommonCsrJeocValuesBase> ;
    using Eoc3 = AdcCommonCsrEocValues<AdcCommon::Csr, 17, 1, ReadMode, AdcCommonCsrEocValuesBase> ;
    using Awd3 = AdcCommonCsrAwdValues<AdcCommon::Csr, 16, 1, ReadMode, AdcCommonCsrAwdValuesBase> ;
    using Ovr2 = AdcCommonCsrOvrValues<AdcCommon::Csr, 13, 1, ReadMode, AdcCommonCsrOvrValuesBase> ;
    using Strt2 = AdcCommonCsrStrtValues<AdcCommon::Csr, 12, 1, ReadMode, AdcCommonCsrStrtValuesBase> ;
    using Jstrt2 = AdcCommonCsrJstrtValues<AdcCommon::Csr, 11, 1, ReadMode, AdcCommonCsrJstrtValuesBase> ;
    using Jeoc2 = AdcCommonCsrJeocValues<AdcCommon::Csr, 10, 1, ReadMode, AdcCommonCsrJeocValuesBase> ;
    using Eoc2 = AdcCommonCsrEocValues<AdcCommon::Csr, 9, 1, ReadMode, AdcCommonCsrEocValuesBase> ;
    using Awd2 = AdcCommonCsrAwdValues<AdcCommon::Csr, 8, 1, ReadMode, AdcCommonCsrAwdValuesBase> ;
    using Ovr1 = AdcCommonCsrOvrValues<AdcCommon::Csr, 5, 1, ReadMode, AdcCommonCsrOvrValuesBase> ;
    using Strt1 = AdcCommonCsrStrtValues<AdcCommon::Csr, 4, 1, ReadMode, AdcCommonCsrStrtValuesBase> ;
    using Jstrt1 = AdcCommonCsrJstrtValues<AdcCommon::Csr, 3, 1, ReadMode, AdcCommonCsrJstrtValuesBase> ;
    using Jeoc1 = AdcCommonCsrJeocValues<AdcCommon::Csr, 2, 1, ReadMode, AdcCommonCsrJeocValuesBase> ;
    using Eoc1 = AdcCommonCsrEocValues<AdcCommon::Csr, 1, 1, ReadMode, AdcCommonCsrEocValuesBase> ;
    using Awd1 = AdcCommonCsrAwdValues<AdcCommon::Csr, 0, 1, ReadMode, AdcCommonCsrAwdValuesBase> ;
  } ;

  template<typename... T> 
  using CsrPack  = Register<0x40012300, 32, ReadMode, AdcCommonCsrOvrValuesBase, T...> ;

  struct Ccr : public RegisterBase<0x40012304, 32, ReadWriteMode>
  {
    using Tsvrefe = AdcCommonCcrTsvrefeValues<AdcCommon::Ccr, 23, 1, ReadWriteMode, AdcCommonCcrTsvrefeValuesBase> ;
    using Vbate = AdcCommonCcrVbateValues<AdcCommon::Ccr, 22, 1, ReadWriteMode, AdcCommonCcrVbateValuesBase> ;
    using Adcpre = AdcCommonCcrAdcpreValues<AdcCommon::Ccr, 16, 2, ReadWriteMode, AdcCommonCcrAdcpreValuesBase> ;
    using Dma = AdcCommonCcrDmaValues<AdcCommon::Ccr, 14, 2, ReadWriteMode, AdcCommonCcrDmaValuesBase> ;
    using Dds = AdcCommonCcrDdsValues<AdcCommon::Ccr, 13, 1, ReadWriteMode, AdcCommonCcrDdsValuesBase> ;
    using Delay = AdcCommonCcrDelayValues<AdcCommon::Ccr, 8, 4, ReadWriteMode, AdcCommonCcrDelayValuesBase> ;
  } ;

  template<typename... T> 
  using CcrPack  = Register<0x40012304, 32, ReadWriteMode, AdcCommonCcrTsvrefeValuesBase, T...> ;

} ;

#endif //#if !defined(ADCCOMMONREGISTERS_HPP)
