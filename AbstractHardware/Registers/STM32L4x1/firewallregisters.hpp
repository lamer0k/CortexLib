/*******************************************************************************
* Filename      : firewallregisters.hpp
*
* Details       : Firewall. This header file is auto-generated for STM32L4x1
*                 device.
*
*
*******************************************************************************/

#if !defined(FIREWALLREGISTERS_HPP)
#define FIREWALLREGISTERS_HPP

#include "firewallfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FIREWALL
{
  struct FIREWALLCSSABase {} ;

  struct CSSA : public RegisterBase<0x40011C00, 32, ReadWriteMode>
  {
    using ADD = FIREWALL_CSSA_ADD_Values<FIREWALL::CSSA, 8, 16, ReadWriteMode, FIREWALLCSSABase> ;
    using FieldValues = FIREWALL_CSSA_ADD_Values<FIREWALL::CSSA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSSAPack  = Register<0x40011C00, 32, ReadWriteMode, FIREWALLCSSABase, T...> ;

  struct FIREWALLCSLBase {} ;

  struct CSL : public RegisterBase<0x40011C04, 32, ReadWriteMode>
  {
    using LENG = FIREWALL_CSL_LENG_Values<FIREWALL::CSL, 8, 14, ReadWriteMode, FIREWALLCSLBase> ;
    using FieldValues = FIREWALL_CSL_LENG_Values<FIREWALL::CSL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSLPack  = Register<0x40011C04, 32, ReadWriteMode, FIREWALLCSLBase, T...> ;

  struct FIREWALLNVDSSABase {} ;

  struct NVDSSA : public RegisterBase<0x40011C08, 32, ReadWriteMode>
  {
    using ADD = FIREWALL_NVDSSA_ADD_Values<FIREWALL::NVDSSA, 8, 16, ReadWriteMode, FIREWALLNVDSSABase> ;
    using FieldValues = FIREWALL_NVDSSA_ADD_Values<FIREWALL::NVDSSA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using NVDSSAPack  = Register<0x40011C08, 32, ReadWriteMode, FIREWALLNVDSSABase, T...> ;

  struct FIREWALLNVDSLBase {} ;

  struct NVDSL : public RegisterBase<0x40011C0C, 32, ReadWriteMode>
  {
    using LENG = FIREWALL_NVDSL_LENG_Values<FIREWALL::NVDSL, 8, 14, ReadWriteMode, FIREWALLNVDSLBase> ;
    using FieldValues = FIREWALL_NVDSL_LENG_Values<FIREWALL::NVDSL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using NVDSLPack  = Register<0x40011C0C, 32, ReadWriteMode, FIREWALLNVDSLBase, T...> ;

  struct FIREWALLVDSSABase {} ;

  struct VDSSA : public RegisterBase<0x40011C10, 32, ReadWriteMode>
  {
    using ADD = FIREWALL_VDSSA_ADD_Values<FIREWALL::VDSSA, 6, 10, ReadWriteMode, FIREWALLVDSSABase> ;
    using FieldValues = FIREWALL_VDSSA_ADD_Values<FIREWALL::VDSSA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VDSSAPack  = Register<0x40011C10, 32, ReadWriteMode, FIREWALLVDSSABase, T...> ;

  struct FIREWALLVDSLBase {} ;

  struct VDSL : public RegisterBase<0x40011C14, 32, ReadWriteMode>
  {
    using LENG = FIREWALL_VDSL_LENG_Values<FIREWALL::VDSL, 6, 10, ReadWriteMode, FIREWALLVDSLBase> ;
    using FieldValues = FIREWALL_VDSL_LENG_Values<FIREWALL::VDSL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VDSLPack  = Register<0x40011C14, 32, ReadWriteMode, FIREWALLVDSLBase, T...> ;

  struct FIREWALLCRBase {} ;

  struct CR : public RegisterBase<0x40011C20, 32, ReadWriteMode>
  {
    using VDE = FIREWALL_CR_VDE_Values<FIREWALL::CR, 2, 1, ReadWriteMode, FIREWALLCRBase> ;
    using VDS = FIREWALL_CR_VDS_Values<FIREWALL::CR, 1, 1, ReadWriteMode, FIREWALLCRBase> ;
    using FPA = FIREWALL_CR_FPA_Values<FIREWALL::CR, 0, 1, ReadWriteMode, FIREWALLCRBase> ;
    using FieldValues = FIREWALL_CR_FPA_Values<FIREWALL::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40011C20, 32, ReadWriteMode, FIREWALLCRBase, T...> ;

} ;

#endif //#if !defined(FIREWALLREGISTERS_HPP)
