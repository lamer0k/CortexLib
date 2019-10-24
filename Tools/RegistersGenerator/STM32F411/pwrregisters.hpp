/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(PWRREGISTERS_HPP)
#define PWRREGISTERS_HPP

#include "pwrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PWR
{
  struct PWRCRBase {} ;

  struct CR : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using VOS = PWR_CR_VOS_Values<PWR::CR, 14, 2, ReadWriteMode, PWRCRBase> ;
    using ADCDC1 = PWR_CR_ADCDC1_Values<PWR::CR, 13, 1, ReadWriteMode, PWRCRBase> ;
    using FPDS = PWR_CR_FPDS_Values<PWR::CR, 9, 1, ReadWriteMode, PWRCRBase> ;
    using DBP = PWR_CR_DBP_Values<PWR::CR, 8, 1, ReadWriteMode, PWRCRBase> ;
    using PLS = PWR_CR_PLS_Values<PWR::CR, 5, 3, ReadWriteMode, PWRCRBase> ;
    using PVDE = PWR_CR_PVDE_Values<PWR::CR, 4, 1, ReadWriteMode, PWRCRBase> ;
    using CSBF = PWR_CR_CSBF_Values<PWR::CR, 3, 1, ReadWriteMode, PWRCRBase> ;
    using CWUF = PWR_CR_CWUF_Values<PWR::CR, 2, 1, ReadWriteMode, PWRCRBase> ;
    using PDDS = PWR_CR_PDDS_Values<PWR::CR, 1, 1, ReadWriteMode, PWRCRBase> ;
    using LPDS = PWR_CR_LPDS_Values<PWR::CR, 0, 1, ReadWriteMode, PWRCRBase> ;
    using FieldValues = PWR_CR_LPDS_Values<PWR::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007000, 32, ReadWriteMode, PWRCRBase, T...> ;

  struct PWRCSRBase {} ;

  struct CSR : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using WUF = PWR_CSR_WUF_Values<PWR::CSR, 0, 1, ReadMode, PWRCSRBase> ;
    using SBF = PWR_CSR_SBF_Values<PWR::CSR, 1, 1, ReadMode, PWRCSRBase> ;
    using PVDO = PWR_CSR_PVDO_Values<PWR::CSR, 2, 1, ReadMode, PWRCSRBase> ;
    using BRR = PWR_CSR_BRR_Values<PWR::CSR, 3, 1, ReadMode, PWRCSRBase> ;
    using EWUP = PWR_CSR_EWUP_Values<PWR::CSR, 8, 1, ReadWriteMode, PWRCSRBase> ;
    using BRE = PWR_CSR_BRE_Values<PWR::CSR, 9, 1, ReadWriteMode, PWRCSRBase> ;
    using VOSRDY = PWR_CSR_VOSRDY_Values<PWR::CSR, 14, 1, ReadWriteMode, PWRCSRBase> ;
    using FieldValues = PWR_CSR_VOSRDY_Values<PWR::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40007004, 32, ReadWriteMode, PWRCSRBase, T...> ;

} ;

#endif //#if !defined(PWRREGISTERS_HPP)
