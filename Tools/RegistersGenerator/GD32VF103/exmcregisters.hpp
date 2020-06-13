/*******************************************************************************
* Filename      : exmcregisters.hpp
*
* Details       : External memory controller. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(EXMCREGISTERS_HPP)
#define EXMCREGISTERS_HPP

#include "exmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXMC
{
  struct EXMCSNCTL0Base {} ;

  struct SNCTL0 : public RegisterBase<0xA0000000, 32, ReadWriteMode>
  {
    using ASYNCWAIT = EXMC_SNCTL0_ASYNCWAIT_Values<EXMC::SNCTL0, 15, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRWTEN = EXMC_SNCTL0_NRWTEN_Values<EXMC::SNCTL0, 13, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using WREN = EXMC_SNCTL0_WREN_Values<EXMC::SNCTL0, 12, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRWTPOL = EXMC_SNCTL0_NRWTPOL_Values<EXMC::SNCTL0, 9, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using NREN = EXMC_SNCTL0_NREN_Values<EXMC::SNCTL0, 6, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRW = EXMC_SNCTL0_NRW_Values<EXMC::SNCTL0, 4, 2, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRTP = EXMC_SNCTL0_NRTP_Values<EXMC::SNCTL0, 2, 2, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRMUX = EXMC_SNCTL0_NRMUX_Values<EXMC::SNCTL0, 1, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using NRBKEN = EXMC_SNCTL0_NRBKEN_Values<EXMC::SNCTL0, 0, 1, ReadWriteMode, EXMCSNCTL0Base> ;
    using FieldValues = EXMC_SNCTL0_NRBKEN_Values<EXMC::SNCTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SNCTL0Pack  = Register<0xA0000000, 32, ReadWriteMode, EXMCSNCTL0Base, T...> ;

  struct EXMCSNTCFG0Base {} ;

  struct SNTCFG0 : public RegisterBase<0xA0000004, 32, ReadWriteMode>
  {
    using BUSLAT = EXMC_SNTCFG0_BUSLAT_Values<EXMC::SNTCFG0, 16, 4, ReadWriteMode, EXMCSNTCFG0Base> ;
    using DSET = EXMC_SNTCFG0_DSET_Values<EXMC::SNTCFG0, 8, 8, ReadWriteMode, EXMCSNTCFG0Base> ;
    using AHLD = EXMC_SNTCFG0_AHLD_Values<EXMC::SNTCFG0, 4, 4, ReadWriteMode, EXMCSNTCFG0Base> ;
    using ASET = EXMC_SNTCFG0_ASET_Values<EXMC::SNTCFG0, 0, 4, ReadWriteMode, EXMCSNTCFG0Base> ;
    using FieldValues = EXMC_SNTCFG0_ASET_Values<EXMC::SNTCFG0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SNTCFG0Pack  = Register<0xA0000004, 32, ReadWriteMode, EXMCSNTCFG0Base, T...> ;

  struct EXMCSNCTL1Base {} ;

  struct SNCTL1 : public RegisterBase<0xA0000008, 32, ReadWriteMode>
  {
    using ASYNCWAIT = EXMC_SNCTL1_ASYNCWAIT_Values<EXMC::SNCTL1, 15, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRWTEN = EXMC_SNCTL1_NRWTEN_Values<EXMC::SNCTL1, 13, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using WREN = EXMC_SNCTL1_WREN_Values<EXMC::SNCTL1, 12, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRWTPOL = EXMC_SNCTL1_NRWTPOL_Values<EXMC::SNCTL1, 9, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using NREN = EXMC_SNCTL1_NREN_Values<EXMC::SNCTL1, 6, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRW = EXMC_SNCTL1_NRW_Values<EXMC::SNCTL1, 4, 2, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRTP = EXMC_SNCTL1_NRTP_Values<EXMC::SNCTL1, 2, 2, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRMUX = EXMC_SNCTL1_NRMUX_Values<EXMC::SNCTL1, 1, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using NRBKEN = EXMC_SNCTL1_NRBKEN_Values<EXMC::SNCTL1, 0, 1, ReadWriteMode, EXMCSNCTL1Base> ;
    using FieldValues = EXMC_SNCTL1_NRBKEN_Values<EXMC::SNCTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SNCTL1Pack  = Register<0xA0000008, 32, ReadWriteMode, EXMCSNCTL1Base, T...> ;

} ;

#endif //#if !defined(EXMCREGISTERS_HPP)
