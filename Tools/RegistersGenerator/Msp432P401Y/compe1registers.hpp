/*******************************************************************************
* Filename      : compe1registers.hpp
*
* Details       : COMP_E1. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(COMPE1REGISTERS_HPP)
#define COMPE1REGISTERS_HPP

#include "compe1bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP_E1
{
  struct COMP_E1CExCTL0Base {} ;

  struct CExCTL0 : public RegisterBase<0x40003800, 16, ReadWriteMode>
  {
    using CEIPSEL = COMP_E_CExCTL_CEIPSEL_Values<COMP_E1::CExCTL0, 0, 4, ReadWriteMode, COMP_E1CExCTL0Base> ;
    using CEIPEN = COMP_E_CExCTL_CEIPEN_Values<COMP_E1::CExCTL0, 7, 1, ReadWriteMode, COMP_E1CExCTL0Base> ;
    using CEIMSEL = COMP_E_CExCTL_CEIMSEL_Values<COMP_E1::CExCTL0, 8, 4, ReadWriteMode, COMP_E1CExCTL0Base> ;
    using CEIMEN = COMP_E_CExCTL_CEIMEN_Values<COMP_E1::CExCTL0, 15, 1, ReadWriteMode, COMP_E1CExCTL0Base> ;
  } ;

  template<typename... T> 
  using CExCTL0Pack  = Register<0x40003800, 16, ReadWriteMode, COMP_E1CExCTL0Base, T...> ;

  struct COMP_E1CExCTL1Base {} ;

  struct CExCTL1 : public RegisterBase<0x40003802, 16, ReadWriteMode>
  {
    using CEOUT = COMP_E_CExCTL_CEOUT_Values<COMP_E1::CExCTL1, 0, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEOUTPOL = COMP_E_CExCTL_CEOUTPOL_Values<COMP_E1::CExCTL1, 1, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEF = COMP_E_CExCTL_CEF_Values<COMP_E1::CExCTL1, 2, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEIES = COMP_E_CExCTL_CEIES_Values<COMP_E1::CExCTL1, 3, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CESHORT = COMP_E_CExCTL_CESHORT_Values<COMP_E1::CExCTL1, 4, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEEX = COMP_E_CExCTL_CEEX_Values<COMP_E1::CExCTL1, 5, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEFDLY = COMP_E_CExCTL_CEFDLY_Values<COMP_E1::CExCTL1, 6, 2, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEPWRMD = COMP_E_CExCTL_CEPWRMD_Values<COMP_E1::CExCTL1, 8, 2, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEON = COMP_E_CExCTL_CEON_Values<COMP_E1::CExCTL1, 10, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEMRVL = COMP_E_CExCTL_CEMRVL_Values<COMP_E1::CExCTL1, 11, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
    using CEMRVS = COMP_E_CExCTL_CEMRVS_Values<COMP_E1::CExCTL1, 12, 1, ReadWriteMode, COMP_E1CExCTL1Base> ;
  } ;

  template<typename... T> 
  using CExCTL1Pack  = Register<0x40003802, 16, ReadWriteMode, COMP_E1CExCTL1Base, T...> ;

  struct COMP_E1CExCTL2Base {} ;

  struct CExCTL2 : public RegisterBase<0x40003804, 16, ReadWriteMode>
  {
    using CEREF0 = COMP_E_CExCTL_CEREF_Values<COMP_E1::CExCTL2, 0, 5, ReadWriteMode, COMP_E1CExCTL2Base> ;
    using CERSEL = COMP_E_CExCTL_CERSEL_Values<COMP_E1::CExCTL2, 5, 1, ReadWriteMode, COMP_E1CExCTL2Base> ;
    using CERS = COMP_E_CExCTL_CERS_Values<COMP_E1::CExCTL2, 6, 2, ReadWriteMode, COMP_E1CExCTL2Base> ;
    using CEREF1 = COMP_E_CExCTL_CEREF_Values<COMP_E1::CExCTL2, 8, 5, ReadWriteMode, COMP_E1CExCTL2Base> ;
    using CEREFL = COMP_E_CExCTL_CEREFL_Values<COMP_E1::CExCTL2, 13, 2, ReadWriteMode, COMP_E1CExCTL2Base> ;
    using CEREFACC = COMP_E_CExCTL_CEREFACC_Values<COMP_E1::CExCTL2, 15, 1, ReadWriteMode, COMP_E1CExCTL2Base> ;
  } ;

  template<typename... T> 
  using CExCTL2Pack  = Register<0x40003804, 16, ReadWriteMode, COMP_E1CExCTL2Base, T...> ;

  struct COMP_E1CExCTL3Base {} ;

  struct CExCTL3 : public RegisterBase<0x40003806, 16, ReadWriteMode>
  {
    using CEPD0 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 0, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD1 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 1, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD2 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 2, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD3 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 3, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD4 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 4, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD5 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 5, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD6 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 6, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD7 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 7, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD8 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 8, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD9 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 9, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD10 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 10, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD11 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 11, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD12 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 12, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD13 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 13, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD14 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 14, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
    using CEPD15 = COMP_E_CExCTL_CEPD_Values<COMP_E1::CExCTL3, 15, 1, ReadWriteMode, COMP_E1CExCTL3Base> ;
  } ;

  template<typename... T> 
  using CExCTL3Pack  = Register<0x40003806, 16, ReadWriteMode, COMP_E1CExCTL3Base, T...> ;

  struct COMP_E1CExINTBase {} ;

  struct CExINT : public RegisterBase<0x4000380C, 16, ReadWriteMode>
  {
    using CEIFG = COMP_E_CExINT_CEIFG_Values<COMP_E1::CExINT, 0, 1, ReadWriteMode, COMP_E1CExINTBase> ;
    using CEIIFG = COMP_E_CExINT_CEIIFG_Values<COMP_E1::CExINT, 1, 1, ReadWriteMode, COMP_E1CExINTBase> ;
    using CERDYIFG = COMP_E_CExINT_CERDYIFG_Values<COMP_E1::CExINT, 4, 1, ReadWriteMode, COMP_E1CExINTBase> ;
    using CEIE = COMP_E_CExINT_CEIE_Values<COMP_E1::CExINT, 8, 1, ReadWriteMode, COMP_E1CExINTBase> ;
    using CEIIE = COMP_E_CExINT_CEIIE_Values<COMP_E1::CExINT, 9, 1, ReadWriteMode, COMP_E1CExINTBase> ;
    using CERDYIE = COMP_E_CExINT_CERDYIE_Values<COMP_E1::CExINT, 12, 1, ReadWriteMode, COMP_E1CExINTBase> ;
  } ;

  template<typename... T> 
  using CExINTPack  = Register<0x4000380C, 16, ReadWriteMode, COMP_E1CExINTBase, T...> ;

  struct COMP_E1CExIVBase {} ;

  struct CExIV : public RegisterBase<0x4000380E, 16, ReadMode>
  {
    using CEIV = COMP_E_CExIV_CEIV_Values<COMP_E1::CExIV, 0, 16, ReadMode, COMP_E1CExIVBase> ;
  } ;

  template<typename... T> 
  using CExIVPack  = Register<0x4000380E, 16, ReadMode, COMP_E1CExIVBase, T...> ;

} ;

#endif //#if !defined(COMPE1REGISTERS_HPP)
