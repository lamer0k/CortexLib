/*******************************************************************************
* Filename      : fwdgtregisters.hpp
*
* Details       : free watchdog timer. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(FWDGTREGISTERS_HPP)
#define FWDGTREGISTERS_HPP

#include "fwdgtfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FWDGT
{
  struct FWDGTCTLBase {} ;

  struct CTL : public RegisterBase<0x40003000, 32, WriteMode>
  {
    using CMD = FWDGT_CTL_CMD_Values<FWDGT::CTL, 0, 16, WriteMode, FWDGTCTLBase> ;
    using FieldValues = FWDGT_CTL_CMD_Values<FWDGT::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40003000, 32, WriteMode, FWDGTCTLBase, T...> ;

  struct FWDGTPSCBase {} ;

  struct PSC : public RegisterBase<0x40003004, 32, ReadWriteMode>
  {
    using PSCField = FWDGT_PSC_PSC_Values<FWDGT::PSC, 0, 3, ReadWriteMode, FWDGTPSCBase> ;
    using FieldValues = FWDGT_PSC_PSC_Values<FWDGT::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40003004, 32, ReadWriteMode, FWDGTPSCBase, T...> ;

  struct FWDGTRLDBase {} ;

  struct RLD : public RegisterBase<0x40003008, 32, ReadWriteMode>
  {
    using RLDField = FWDGT_RLD_RLD_Values<FWDGT::RLD, 0, 12, ReadWriteMode, FWDGTRLDBase> ;
    using FieldValues = FWDGT_RLD_RLD_Values<FWDGT::RLD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLDPack  = Register<0x40003008, 32, ReadWriteMode, FWDGTRLDBase, T...> ;

  struct FWDGTSTATBase {} ;

  struct STAT : public RegisterBase<0x4000300C, 32, ReadMode>
  {
    using PUD = FWDGT_STAT_PUD_Values<FWDGT::STAT, 0, 1, ReadMode, FWDGTSTATBase> ;
    using RUD = FWDGT_STAT_RUD_Values<FWDGT::STAT, 1, 1, ReadMode, FWDGTSTATBase> ;
    using FieldValues = FWDGT_STAT_RUD_Values<FWDGT::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x4000300C, 32, ReadMode, FWDGTSTATBase, T...> ;

} ;

#endif //#if !defined(FWDGTREGISTERS_HPP)
