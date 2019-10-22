/*******************************************************************************
* Filename      : pssregisters.hpp
*
* Details       : PSS. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(PSSREGISTERS_HPP)
#define PSSREGISTERS_HPP

#include "pssbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PSS
{
  struct PSSPSSKEYBase {} ;

  struct PSSKEY : public RegisterBase<0x40010800, 32, ReadWriteMode>
  {
    using PSSKEYField = PSS_PSSKEY_PSSKEY_Values<PSS::PSSKEY, 0, 16, ReadWriteMode, PSSPSSKEYBase> ;
  } ;

  template<typename... T> 
  using PSSKEYPack  = Register<0x40010800, 32, ReadWriteMode, PSSPSSKEYBase, T...> ;

  struct PSSPSSCTL0Base {} ;

  struct PSSCTL0 : public RegisterBase<0x40010804, 32, ReadWriteMode>
  {
    using SVSMHOFF = PSS_PSSCTL_SVSMHOFF_Values<PSS::PSSCTL0, 0, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using SVSMHLP = PSS_PSSCTL_SVSMHLP_Values<PSS::PSSCTL0, 1, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using SVSMHS = PSS_PSSCTL_SVSMHS_Values<PSS::PSSCTL0, 2, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using SVSMHTH = PSS_PSSCTL_SVSMHTH_Values<PSS::PSSCTL0, 3, 3, ReadWriteMode, PSSPSSCTL0Base> ;
    using SVMHOE = PSS_PSSCTL_SVMHOE_Values<PSS::PSSCTL0, 6, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using SVMHOUTPOLAL = PSS_PSSCTL_SVMHOUTPOLAL_Values<PSS::PSSCTL0, 7, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using DCDC_FORCE = PSS_PSSCTL_DCDC_FORCE_Values<PSS::PSSCTL0, 10, 1, ReadWriteMode, PSSPSSCTL0Base> ;
    using VCORETRAN = PSS_PSSCTL_VCORETRAN_Values<PSS::PSSCTL0, 12, 2, ReadWriteMode, PSSPSSCTL0Base> ;
  } ;

  template<typename... T> 
  using PSSCTL0Pack  = Register<0x40010804, 32, ReadWriteMode, PSSPSSCTL0Base, T...> ;

  struct PSSPSSIEBase {} ;

  struct PSSIE : public RegisterBase<0x40010834, 32, ReadWriteMode>
  {
    using SVSMHIE = PSS_PSSIE_SVSMHIE_Values<PSS::PSSIE, 1, 1, ReadWriteMode, PSSPSSIEBase> ;
  } ;

  template<typename... T> 
  using PSSIEPack  = Register<0x40010834, 32, ReadWriteMode, PSSPSSIEBase, T...> ;

  struct PSSPSSIFGBase {} ;

  struct PSSIFG : public RegisterBase<0x40010838, 32, ReadMode>
  {
    using SVSMHIFG = PSS_PSSIFG_SVSMHIFG_Values<PSS::PSSIFG, 1, 1, ReadMode, PSSPSSIFGBase> ;
  } ;

  template<typename... T> 
  using PSSIFGPack  = Register<0x40010838, 32, ReadMode, PSSPSSIFGBase, T...> ;

  struct PSSPSSCLRIFGBase {} ;

  struct PSSCLRIFG : public RegisterBase<0x4001083C, 32, ReadWriteMode>
  {
    using CLRSVSMHIFG = PSS_PSSCLRIFG_CLRSVSMHIFG_Values<PSS::PSSCLRIFG, 1, 1, WriteMode, PSSPSSCLRIFGBase> ;
  } ;

  template<typename... T> 
  using PSSCLRIFGPack  = Register<0x4001083C, 32, ReadWriteMode, PSSPSSCLRIFGBase, T...> ;

} ;

#endif //#if !defined(PSSREGISTERS_HPP)
