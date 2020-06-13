/*******************************************************************************
* Filename      : dacregisters.hpp
*
* Details       : Digital-to-analog converter. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(DACREGISTERS_HPP)
#define DACREGISTERS_HPP

#include "dacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DAC
{
  struct DACCTLBase {} ;

  struct CTL : public RegisterBase<0x40007400, 32, ReadWriteMode>
  {
    using DEN0 = DAC_CTL_DEN0_Values<DAC::CTL, 0, 1, ReadWriteMode, DACCTLBase> ;
    using DBOFF0 = DAC_CTL_DBOFF0_Values<DAC::CTL, 1, 1, ReadWriteMode, DACCTLBase> ;
    using DTEN0 = DAC_CTL_DTEN0_Values<DAC::CTL, 2, 1, ReadWriteMode, DACCTLBase> ;
    using DTSEL0 = DAC_CTL_DTSEL0_Values<DAC::CTL, 3, 3, ReadWriteMode, DACCTLBase> ;
    using DWM0 = DAC_CTL_DWM0_Values<DAC::CTL, 6, 2, ReadWriteMode, DACCTLBase> ;
    using DWBW0 = DAC_CTL_DWBW0_Values<DAC::CTL, 8, 4, ReadWriteMode, DACCTLBase> ;
    using DDMAEN0 = DAC_CTL_DDMAEN0_Values<DAC::CTL, 12, 1, ReadWriteMode, DACCTLBase> ;
    using DEN1 = DAC_CTL_DEN1_Values<DAC::CTL, 16, 1, ReadWriteMode, DACCTLBase> ;
    using DBOFF1 = DAC_CTL_DBOFF1_Values<DAC::CTL, 17, 1, ReadWriteMode, DACCTLBase> ;
    using DTEN1 = DAC_CTL_DTEN1_Values<DAC::CTL, 18, 1, ReadWriteMode, DACCTLBase> ;
    using DTSEL1 = DAC_CTL_DTSEL1_Values<DAC::CTL, 19, 3, ReadWriteMode, DACCTLBase> ;
    using DWM1 = DAC_CTL_DWM1_Values<DAC::CTL, 22, 2, ReadWriteMode, DACCTLBase> ;
    using DWBW1 = DAC_CTL_DWBW1_Values<DAC::CTL, 24, 4, ReadWriteMode, DACCTLBase> ;
    using DDMAEN1 = DAC_CTL_DDMAEN1_Values<DAC::CTL, 28, 1, ReadWriteMode, DACCTLBase> ;
    using FieldValues = DAC_CTL_DDMAEN1_Values<DAC::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40007400, 32, ReadWriteMode, DACCTLBase, T...> ;

  struct DACSWTBase {} ;

  struct SWT : public RegisterBase<0x40007404, 32, WriteMode>
  {
    using SWTR0 = DAC_SWT_SWTR0_Values<DAC::SWT, 0, 1, WriteMode, DACSWTBase> ;
    using SWTR1 = DAC_SWT_SWTR1_Values<DAC::SWT, 1, 1, WriteMode, DACSWTBase> ;
    using FieldValues = DAC_SWT_SWTR1_Values<DAC::SWT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWTPack  = Register<0x40007404, 32, WriteMode, DACSWTBase, T...> ;

  struct DACDAC0_R12DHBase {} ;

  struct DAC0_R12DH : public RegisterBase<0x40007408, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DAC0_R12DH_DAC0_DH_Values<DAC::DAC0_R12DH, 0, 12, ReadWriteMode, DACDAC0_R12DHBase> ;
    using FieldValues = DAC_DAC0_R12DH_DAC0_DH_Values<DAC::DAC0_R12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC0_R12DHPack  = Register<0x40007408, 32, ReadWriteMode, DACDAC0_R12DHBase, T...> ;

  struct DACDAC0_L12DHBase {} ;

  struct DAC0_L12DH : public RegisterBase<0x4000740C, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DAC0_L12DH_DAC0_DH_Values<DAC::DAC0_L12DH, 4, 12, ReadWriteMode, DACDAC0_L12DHBase> ;
    using FieldValues = DAC_DAC0_L12DH_DAC0_DH_Values<DAC::DAC0_L12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC0_L12DHPack  = Register<0x4000740C, 32, ReadWriteMode, DACDAC0_L12DHBase, T...> ;

  struct DACDAC0_R8DHBase {} ;

  struct DAC0_R8DH : public RegisterBase<0x40007410, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DAC0_R8DH_DAC0_DH_Values<DAC::DAC0_R8DH, 0, 8, ReadWriteMode, DACDAC0_R8DHBase> ;
    using FieldValues = DAC_DAC0_R8DH_DAC0_DH_Values<DAC::DAC0_R8DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC0_R8DHPack  = Register<0x40007410, 32, ReadWriteMode, DACDAC0_R8DHBase, T...> ;

  struct DACDAC1_R12DHBase {} ;

  struct DAC1_R12DH : public RegisterBase<0x40007414, 32, ReadWriteMode>
  {
    using DAC1_DH = DAC_DAC1_R12DH_DAC1_DH_Values<DAC::DAC1_R12DH, 0, 12, ReadWriteMode, DACDAC1_R12DHBase> ;
    using FieldValues = DAC_DAC1_R12DH_DAC1_DH_Values<DAC::DAC1_R12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC1_R12DHPack  = Register<0x40007414, 32, ReadWriteMode, DACDAC1_R12DHBase, T...> ;

  struct DACDAC1_L12DHBase {} ;

  struct DAC1_L12DH : public RegisterBase<0x40007418, 32, ReadWriteMode>
  {
    using DAC1_DH = DAC_DAC1_L12DH_DAC1_DH_Values<DAC::DAC1_L12DH, 4, 12, ReadWriteMode, DACDAC1_L12DHBase> ;
    using FieldValues = DAC_DAC1_L12DH_DAC1_DH_Values<DAC::DAC1_L12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC1_L12DHPack  = Register<0x40007418, 32, ReadWriteMode, DACDAC1_L12DHBase, T...> ;

  struct DACDAC1_R8DHBase {} ;

  struct DAC1_R8DH : public RegisterBase<0x4000741C, 32, ReadWriteMode>
  {
    using DAC1_DH = DAC_DAC1_R8DH_DAC1_DH_Values<DAC::DAC1_R8DH, 0, 8, ReadWriteMode, DACDAC1_R8DHBase> ;
    using FieldValues = DAC_DAC1_R8DH_DAC1_DH_Values<DAC::DAC1_R8DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC1_R8DHPack  = Register<0x4000741C, 32, ReadWriteMode, DACDAC1_R8DHBase, T...> ;

  struct DACDACC_R12DHBase {} ;

  struct DACC_R12DH : public RegisterBase<0x40007420, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DACC_R12DH_DAC0_DH_Values<DAC::DACC_R12DH, 0, 12, ReadWriteMode, DACDACC_R12DHBase> ;
    using DAC1_DH = DAC_DACC_R12DH_DAC1_DH_Values<DAC::DACC_R12DH, 16, 12, ReadWriteMode, DACDACC_R12DHBase> ;
    using FieldValues = DAC_DACC_R12DH_DAC1_DH_Values<DAC::DACC_R12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DACC_R12DHPack  = Register<0x40007420, 32, ReadWriteMode, DACDACC_R12DHBase, T...> ;

  struct DACDACC_L12DHBase {} ;

  struct DACC_L12DH : public RegisterBase<0x40007424, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DACC_L12DH_DAC0_DH_Values<DAC::DACC_L12DH, 4, 12, ReadWriteMode, DACDACC_L12DHBase> ;
    using DAC1_DH = DAC_DACC_L12DH_DAC1_DH_Values<DAC::DACC_L12DH, 20, 12, ReadWriteMode, DACDACC_L12DHBase> ;
    using FieldValues = DAC_DACC_L12DH_DAC1_DH_Values<DAC::DACC_L12DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DACC_L12DHPack  = Register<0x40007424, 32, ReadWriteMode, DACDACC_L12DHBase, T...> ;

  struct DACDACC_R8DHBase {} ;

  struct DACC_R8DH : public RegisterBase<0x40007428, 32, ReadWriteMode>
  {
    using DAC0_DH = DAC_DACC_R8DH_DAC0_DH_Values<DAC::DACC_R8DH, 0, 8, ReadWriteMode, DACDACC_R8DHBase> ;
    using DAC1_DH = DAC_DACC_R8DH_DAC1_DH_Values<DAC::DACC_R8DH, 8, 8, ReadWriteMode, DACDACC_R8DHBase> ;
    using FieldValues = DAC_DACC_R8DH_DAC1_DH_Values<DAC::DACC_R8DH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DACC_R8DHPack  = Register<0x40007428, 32, ReadWriteMode, DACDACC_R8DHBase, T...> ;

  struct DACDAC0_DOBase {} ;

  struct DAC0_DO : public RegisterBase<0x4000742C, 32, ReadMode>
  {
    using DAC0_DOField = DAC_DAC0_DO_DAC0_DO_Values<DAC::DAC0_DO, 0, 12, ReadMode, DACDAC0_DOBase> ;
    using FieldValues = DAC_DAC0_DO_DAC0_DO_Values<DAC::DAC0_DO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC0_DOPack  = Register<0x4000742C, 32, ReadMode, DACDAC0_DOBase, T...> ;

  struct DACDAC1_DOBase {} ;

  struct DAC1_DO : public RegisterBase<0x40007430, 32, ReadMode>
  {
    using DAC1_DOField = DAC_DAC1_DO_DAC1_DO_Values<DAC::DAC1_DO, 0, 12, ReadMode, DACDAC1_DOBase> ;
    using FieldValues = DAC_DAC1_DO_DAC1_DO_Values<DAC::DAC1_DO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC1_DOPack  = Register<0x40007430, 32, ReadMode, DACDAC1_DOBase, T...> ;

} ;

#endif //#if !defined(DACREGISTERS_HPP)
