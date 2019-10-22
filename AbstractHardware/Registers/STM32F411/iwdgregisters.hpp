/*******************************************************************************
* Filename      : iwdgregisters.hpp
*
* Details       : Independent watchdog. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(IWDGREGISTERS_HPP)
#define IWDGREGISTERS_HPP

#include "iwdgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct IWDG
{
  struct IWDGKRBase {} ;

  struct KR : public RegisterBase<0x40003000, 32, WriteMode>
  {
    using KEY = IWDG_KR_KEY_Values<IWDG::KR, 0, 16, WriteMode, IWDGKRBase> ;
    using FieldValues = IWDG_KR_KEY_Values<IWDG::KR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KRPack  = Register<0x40003000, 32, WriteMode, IWDGKRBase, T...> ;

  struct IWDGPRBase {} ;

  struct PR : public RegisterBase<0x40003004, 32, ReadWriteMode>
  {
    using PRField = IWDG_PR_PR_Values<IWDG::PR, 0, 3, ReadWriteMode, IWDGPRBase> ;
    using FieldValues = IWDG_PR_PR_Values<IWDG::PR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRPack  = Register<0x40003004, 32, ReadWriteMode, IWDGPRBase, T...> ;

  struct IWDGRLRBase {} ;

  struct RLR : public RegisterBase<0x40003008, 32, ReadWriteMode>
  {
    using RL = IWDG_RLR_RL_Values<IWDG::RLR, 0, 12, ReadWriteMode, IWDGRLRBase> ;
    using FieldValues = IWDG_RLR_RL_Values<IWDG::RLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLRPack  = Register<0x40003008, 32, ReadWriteMode, IWDGRLRBase, T...> ;

  struct IWDGSRBase {} ;

  struct SR : public RegisterBase<0x4000300C, 32, ReadMode>
  {
    using RVU = IWDG_SR_RVU_Values<IWDG::SR, 1, 1, ReadMode, IWDGSRBase> ;
    using PVU = IWDG_SR_PVU_Values<IWDG::SR, 0, 1, ReadMode, IWDGSRBase> ;
    using FieldValues = IWDG_SR_PVU_Values<IWDG::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4000300C, 32, ReadMode, IWDGSRBase, T...> ;

} ;

#endif //#if !defined(IWDGREGISTERS_HPP)
