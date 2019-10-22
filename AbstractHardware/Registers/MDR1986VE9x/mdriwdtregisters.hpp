/*******************************************************************************
* Filename      : mdriwdtregisters.hpp
*
* Details       : Independent Watchdog Timer. This header file is auto-generated
*                 for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRIWDTREGISTERS_HPP)
#define MDRIWDTREGISTERS_HPP

#include "mdriwdtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_IWDT
{
  struct MDR_IWDTKRBase {} ;

  struct KR : public RegisterBase<0x40068000, 32, WriteMode>
  {
    using KEY = MDR_IWDT_KR_KEY_Values<MDR_IWDT::KR, 0, 16, WriteMode, MDR_IWDTKRBase> ;
    using FieldValues = MDR_IWDT_KR_KEY_Values<MDR_IWDT::KR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KRPack  = Register<0x40068000, 32, WriteMode, MDR_IWDTKRBase, T...> ;

  struct MDR_IWDTPRBase {} ;

  struct PR : public RegisterBase<0x40068004, 32, ReadWriteMode>
  {
    using PRField = MDR_IWDT_PR_PR_Values<MDR_IWDT::PR, 0, 3, ReadWriteMode, MDR_IWDTPRBase> ;
    using FieldValues = MDR_IWDT_PR_PR_Values<MDR_IWDT::PR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRPack  = Register<0x40068004, 32, ReadWriteMode, MDR_IWDTPRBase, T...> ;

  struct MDR_IWDTRLRBase {} ;

  struct RLR : public RegisterBase<0x40068008, 32, ReadWriteMode>
  {
    using PRL = MDR_IWDT_RLR_PRL_Values<MDR_IWDT::RLR, 0, 12, ReadWriteMode, MDR_IWDTRLRBase> ;
    using FieldValues = MDR_IWDT_RLR_PRL_Values<MDR_IWDT::RLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLRPack  = Register<0x40068008, 32, ReadWriteMode, MDR_IWDTRLRBase, T...> ;

  struct MDR_IWDTSRBase {} ;

  struct SR : public RegisterBase<0x4006800C, 32, ReadMode>
  {
    using PVU = MDR_IWDT_SR_PVU_Values<MDR_IWDT::SR, 0, 1, ReadMode, MDR_IWDTSRBase> ;
    using RVU = MDR_IWDT_SR_RVU_Values<MDR_IWDT::SR, 1, 1, ReadMode, MDR_IWDTSRBase> ;
    using FieldValues = MDR_IWDT_SR_RVU_Values<MDR_IWDT::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4006800C, 32, ReadMode, MDR_IWDTSRBase, T...> ;

} ;

#endif //#if !defined(MDRIWDTREGISTERS_HPP)
