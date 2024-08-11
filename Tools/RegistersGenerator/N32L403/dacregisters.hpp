/*******************************************************************************
* Filename      : dacregisters.hpp
*
* Details       : digital to analog converter. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "dacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DAC
{
  struct DACDAC_CTRLBase {} ;

  struct DAC_CTRL : public RegisterBase<0x40007400, 32, ReadWriteMode>
  {
    using CHEN = DAC_DAC_CTRL_CHEN_Values<DAC::DAC_CTRL, 0, 1, ReadWriteMode, DACDAC_CTRLBase> ;
    using BEN = DAC_DAC_CTRL_BEN_Values<DAC::DAC_CTRL, 1, 1, ReadWriteMode, DACDAC_CTRLBase> ;
    using TEN = DAC_DAC_CTRL_TEN_Values<DAC::DAC_CTRL, 2, 1, ReadWriteMode, DACDAC_CTRLBase> ;
    using TSEL = DAC_DAC_CTRL_TSEL_Values<DAC::DAC_CTRL, 3, 3, ReadWriteMode, DACDAC_CTRLBase> ;
    using WEN = DAC_DAC_CTRL_WEN_Values<DAC::DAC_CTRL, 6, 2, ReadWriteMode, DACDAC_CTRLBase> ;
    using MASEL = DAC_DAC_CTRL_MASEL_Values<DAC::DAC_CTRL, 8, 4, ReadWriteMode, DACDAC_CTRLBase> ;
    using DMAEN = DAC_DAC_CTRL_DMAEN_Values<DAC::DAC_CTRL, 12, 1, ReadWriteMode, DACDAC_CTRLBase> ;
    using FieldValues = DAC_DAC_CTRL_DMAEN_Values<DAC::DAC_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_CTRLPack  = Register<0x40007400, 32, ReadWriteMode, DACDAC_CTRLBase, T...> ;

  struct DACDAC_SOTTRBase {} ;

  struct DAC_SOTTR : public RegisterBase<0x40007404, 32, WriteMode>
  {
    using TR1EN = DAC_DAC_SOTTR_TR1EN_Values<DAC::DAC_SOTTR, 0, 1, WriteMode, DACDAC_SOTTRBase> ;
    using FieldValues = DAC_DAC_SOTTR_TR1EN_Values<DAC::DAC_SOTTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SOTTRPack  = Register<0x40007404, 32, WriteMode, DACDAC_SOTTRBase, T...> ;

  struct DACDAC_DR12CHBase {} ;

  struct DAC_DR12CH : public RegisterBase<0x40007408, 32, ReadWriteMode>
  {
    using DACCHD = DAC_DAC_DR12CH_DACCHD_Values<DAC::DAC_DR12CH, 0, 12, ReadWriteMode, DACDAC_DR12CHBase> ;
    using FieldValues = DAC_DAC_DR12CH_DACCHD_Values<DAC::DAC_DR12CH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DR12CHPack  = Register<0x40007408, 32, ReadWriteMode, DACDAC_DR12CHBase, T...> ;

  struct DACDAC_DL12CHBase {} ;

  struct DAC_DL12CH : public RegisterBase<0x4000740C, 32, ReadWriteMode>
  {
    using DACCHD = DAC_DAC_DL12CH_DACCHD_Values<DAC::DAC_DL12CH, 4, 12, ReadWriteMode, DACDAC_DL12CHBase> ;
    using FieldValues = DAC_DAC_DL12CH_DACCHD_Values<DAC::DAC_DL12CH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DL12CHPack  = Register<0x4000740C, 32, ReadWriteMode, DACDAC_DL12CHBase, T...> ;

  struct DACDAC_DR8CHBase {} ;

  struct DAC_DR8CH : public RegisterBase<0x40007410, 32, ReadWriteMode>
  {
    using DACCHD = DAC_DAC_DR8CH_DACCHD_Values<DAC::DAC_DR8CH, 0, 8, ReadWriteMode, DACDAC_DR8CHBase> ;
    using FieldValues = DAC_DAC_DR8CH_DACCHD_Values<DAC::DAC_DR8CH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DR8CHPack  = Register<0x40007410, 32, ReadWriteMode, DACDAC_DR8CHBase, T...> ;

  struct DACDAC_DATOBase {} ;

  struct DAC_DATO : public RegisterBase<0x4000742C, 32, ReadWriteMode>
  {
    using DACCHDO = DAC_DAC_DATO_DACCHDO_Values<DAC::DAC_DATO, 0, 12, ReadWriteMode, DACDAC_DATOBase> ;
    using FieldValues = DAC_DAC_DATO_DACCHDO_Values<DAC::DAC_DATO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DATOPack  = Register<0x4000742C, 32, ReadWriteMode, DACDAC_DATOBase, T...> ;

} ;

