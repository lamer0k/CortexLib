/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32F0x1 device.
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
    using VREFINTRDY = PWR_CSR_VREFINTRDY_Values<PWR::CSR, 3, 1, ReadMode, PWRCSRBase> ;
    using EWUP1 = PWR_CSR_EWUP1_Values<PWR::CSR, 8, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP2 = PWR_CSR_EWUP2_Values<PWR::CSR, 9, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP3 = PWR_CSR_EWUP3_Values<PWR::CSR, 10, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP4 = PWR_CSR_EWUP4_Values<PWR::CSR, 11, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP5 = PWR_CSR_EWUP5_Values<PWR::CSR, 12, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP6 = PWR_CSR_EWUP6_Values<PWR::CSR, 13, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP7 = PWR_CSR_EWUP7_Values<PWR::CSR, 14, 1, ReadWriteMode, PWRCSRBase> ;
    using EWUP8 = PWR_CSR_EWUP8_Values<PWR::CSR, 15, 1, ReadWriteMode, PWRCSRBase> ;
    using FieldValues = PWR_CSR_EWUP8_Values<PWR::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40007004, 32, ReadWriteMode, PWRCSRBase, T...> ;

} ;

#endif //#if !defined(PWRREGISTERS_HPP)
