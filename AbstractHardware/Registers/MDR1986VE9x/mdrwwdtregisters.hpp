/*******************************************************************************
* Filename      : mdrwwdtregisters.hpp
*
* Details       : Window Watchdog Timer. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRWWDTREGISTERS_HPP)
#define MDRWWDTREGISTERS_HPP

#include "mdrwwdtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_WWDT
{
  struct MDR_WWDTCRBase {} ;

  struct CR : public RegisterBase<0x40060000, 32, ReadWriteMode>
  {
    using T = MDR_WWDT_CR_T_Values<MDR_WWDT::CR, 0, 7, ReadWriteMode, MDR_WWDTCRBase> ;
    using WDGA = MDR_WWDT_CR_WDGA_Values<MDR_WWDT::CR, 7, 1, ReadWriteMode, MDR_WWDTCRBase> ;
    using FieldValues = MDR_WWDT_CR_WDGA_Values<MDR_WWDT::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40060000, 32, ReadWriteMode, MDR_WWDTCRBase, T...> ;

  struct MDR_WWDTCFRBase {} ;

  struct CFR : public RegisterBase<0x40060004, 32, ReadWriteMode>
  {
    using W = MDR_WWDT_CFR_W_Values<MDR_WWDT::CFR, 0, 7, ReadWriteMode, MDR_WWDTCFRBase> ;
    using WGTB = MDR_WWDT_CFR_WGTB_Values<MDR_WWDT::CFR, 7, 2, ReadWriteMode, MDR_WWDTCFRBase> ;
    using EWI = MDR_WWDT_CFR_EWI_Values<MDR_WWDT::CFR, 9, 1, ReadWriteMode, MDR_WWDTCFRBase> ;
    using FieldValues = MDR_WWDT_CFR_EWI_Values<MDR_WWDT::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40060004, 32, ReadWriteMode, MDR_WWDTCFRBase, T...> ;

  struct MDR_WWDTSRBase {} ;

  struct SR : public RegisterBase<0x40060008, 32, ReadWriteMode>
  {
    using EWIF = MDR_WWDT_SR_EWIF_Values<MDR_WWDT::SR, 0, 1, ReadWriteMode, MDR_WWDTSRBase> ;
    using FieldValues = MDR_WWDT_SR_EWIF_Values<MDR_WWDT::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40060008, 32, ReadWriteMode, MDR_WWDTSRBase, T...> ;

} ;

#endif //#if !defined(MDRWWDTREGISTERS_HPP)
