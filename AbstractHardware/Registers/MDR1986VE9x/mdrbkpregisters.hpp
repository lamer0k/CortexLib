/*******************************************************************************
* Filename      : mdrbkpregisters.hpp
*
* Details       : Backup and RTC Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRBKPREGISTERS_HPP)
#define MDRBKPREGISTERS_HPP

#include "mdrbkpfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_BKP
{
  struct MDR_BKPREG_0EBase {} ;

  struct REG_0E : public RegisterBase<0x400D8038, 32, ReadWriteMode>
  {
    using LOW = MDR_BKP_REG_0E_LOW_Values<MDR_BKP::REG_0E, 0, 3, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using SelectRI = MDR_BKP_REG_0E_SelectRI_Values<MDR_BKP::REG_0E, 3, 3, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using Jtag_A = MDR_BKP_REG_0E_Jtag_A_Values<MDR_BKP::REG_0E, 6, 1, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using Jtag_B = MDR_BKP_REG_0E_Jtag_B_Values<MDR_BKP::REG_0E, 7, 1, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using Trim_dDUcc = MDR_BKP_REG_0E_Trim_dDUcc_Values<MDR_BKP::REG_0E, 8, 3, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using FPOR = MDR_BKP_REG_0E_FPOR_Values<MDR_BKP::REG_0E, 11, 1, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using MODE = MDR_BKP_REG_0E_MODE_Values<MDR_BKP::REG_0E, 12, 3, ReadWriteMode, MDR_BKPREG_0EBase> ;
    using FieldValues = MDR_BKP_REG_0E_MODE_Values<MDR_BKP::REG_0E, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0EPack  = Register<0x400D8038, 32, ReadWriteMode, MDR_BKPREG_0EBase, T...> ;

  struct MDR_BKPREG_0FBase {} ;

  struct REG_0F : public RegisterBase<0x400D803C, 32, ReadWriteMode>
  {
    using LSE_ON = MDR_BKP_REG_0F_LSE_ON_Values<MDR_BKP::REG_0F, 0, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using LSE_BYP = MDR_BKP_REG_0F_LSE_BYP_Values<MDR_BKP::REG_0F, 1, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using RTC_SEL = MDR_BKP_REG_0F_RTC_SEL_Values<MDR_BKP::REG_0F, 2, 2, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using RTC_EN = MDR_BKP_REG_0F_RTC_EN_Values<MDR_BKP::REG_0F, 4, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using RTC_CAL = MDR_BKP_REG_0F_RTC_CAL_Values<MDR_BKP::REG_0F, 5, 8, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using LSE_RDY = MDR_BKP_REG_0F_LSE_RDY_Values<MDR_BKP::REG_0F, 13, 1, ReadMode, MDR_BKPREG_0FBase> ;
    using LSI_ON = MDR_BKP_REG_0F_LSI_ON_Values<MDR_BKP::REG_0F, 15, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using LSI_TRIM = MDR_BKP_REG_0F_LSI_TRIM_Values<MDR_BKP::REG_0F, 16, 5, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using LSI_RDY = MDR_BKP_REG_0F_LSI_RDY_Values<MDR_BKP::REG_0F, 21, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using HSI_ON = MDR_BKP_REG_0F_HSI_ON_Values<MDR_BKP::REG_0F, 22, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using HSI_RDY = MDR_BKP_REG_0F_HSI_RDY_Values<MDR_BKP::REG_0F, 23, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using HSI_TRIM = MDR_BKP_REG_0F_HSI_TRIM_Values<MDR_BKP::REG_0F, 24, 6, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using Standby = MDR_BKP_REG_0F_Standby_Values<MDR_BKP::REG_0F, 30, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using RTC_RESET = MDR_BKP_REG_0F_RTC_RESET_Values<MDR_BKP::REG_0F, 31, 1, ReadWriteMode, MDR_BKPREG_0FBase> ;
    using FieldValues = MDR_BKP_REG_0F_RTC_RESET_Values<MDR_BKP::REG_0F, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0FPack  = Register<0x400D803C, 32, ReadWriteMode, MDR_BKPREG_0FBase, T...> ;

  struct MDR_BKPRTC_CNTBase {} ;

  struct RTC_CNT : public RegisterBase<0x400D8040, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::RTC_CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CNTPack  = Register<0x400D8040, 32, ReadWriteMode, MDR_BKPRTC_CNTBase, T...> ;

  struct MDR_BKPRTC_DIVBase {} ;

  struct RTC_DIV : public RegisterBase<0x400D8044, 32, ReadWriteMode>
  {
    using Value = MDR_BKP_RTC_DIV_Value_Values<MDR_BKP::RTC_DIV, 0, 20, ReadWriteMode, MDR_BKPRTC_DIVBase> ;
    using FieldValues = MDR_BKP_RTC_DIV_Value_Values<MDR_BKP::RTC_DIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_DIVPack  = Register<0x400D8044, 32, ReadWriteMode, MDR_BKPRTC_DIVBase, T...> ;

  struct MDR_BKPRTC_PRLBase {} ;

  struct RTC_PRL : public RegisterBase<0x400D8048, 32, ReadWriteMode>
  {
    using Value = MDR_BKP_RTC_PRL_Value_Values<MDR_BKP::RTC_PRL, 0, 20, ReadWriteMode, MDR_BKPRTC_PRLBase> ;
    using FieldValues = MDR_BKP_RTC_PRL_Value_Values<MDR_BKP::RTC_PRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_PRLPack  = Register<0x400D8048, 32, ReadWriteMode, MDR_BKPRTC_PRLBase, T...> ;

  struct MDR_BKPRTC_ALRMBase {} ;

  struct RTC_ALRM : public RegisterBase<0x400D804C, 32, ReadWriteMode>
  {
    using Value = MDR_BKP_RTC_ALRM_Value_Values<MDR_BKP::RTC_ALRM, 0, 32, ReadWriteMode, MDR_BKPRTC_ALRMBase> ;
    using FieldValues = MDR_BKP_RTC_ALRM_Value_Values<MDR_BKP::RTC_ALRM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMPack  = Register<0x400D804C, 32, ReadWriteMode, MDR_BKPRTC_ALRMBase, T...> ;

  struct MDR_BKPRTC_CSBase {} ;

  struct RTC_CS : public RegisterBase<0x400D8050, 32, ReadWriteMode>
  {
    using OWF = MDR_BKP_RTC_CS_OWF_Values<MDR_BKP::RTC_CS, 0, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using SECF = MDR_BKP_RTC_CS_SECF_Values<MDR_BKP::RTC_CS, 1, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using ALRF = MDR_BKP_RTC_CS_ALRF_Values<MDR_BKP::RTC_CS, 2, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using OWF_IE = MDR_BKP_RTC_CS_OWF_IE_Values<MDR_BKP::RTC_CS, 3, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using SECF_IE = MDR_BKP_RTC_CS_SECF_IE_Values<MDR_BKP::RTC_CS, 4, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using ALRF_IE = MDR_BKP_RTC_CS_ALRF_IE_Values<MDR_BKP::RTC_CS, 5, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using WEC = MDR_BKP_RTC_CS_WEC_Values<MDR_BKP::RTC_CS, 6, 1, ReadWriteMode, MDR_BKPRTC_CSBase> ;
    using FieldValues = MDR_BKP_RTC_CS_WEC_Values<MDR_BKP::RTC_CS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CSPack  = Register<0x400D8050, 32, ReadWriteMode, MDR_BKPRTC_CSBase, T...> ;

  struct MDR_BKPREG_00Base {} ;

  struct REG_00 : public RegisterBase<0x400D8000, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_00, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_00Pack  = Register<0x400D8000, 32, ReadWriteMode, MDR_BKPREG_00Base, T...> ;

  struct MDR_BKPREG_01Base {} ;

  struct REG_01 : public RegisterBase<0x400D8004, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_01, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_01Pack  = Register<0x400D8004, 32, ReadWriteMode, MDR_BKPREG_01Base, T...> ;

  struct MDR_BKPREG_02Base {} ;

  struct REG_02 : public RegisterBase<0x400D8008, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_02, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_02Pack  = Register<0x400D8008, 32, ReadWriteMode, MDR_BKPREG_02Base, T...> ;

  struct MDR_BKPREG_03Base {} ;

  struct REG_03 : public RegisterBase<0x400D800C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_03, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_03Pack  = Register<0x400D800C, 32, ReadWriteMode, MDR_BKPREG_03Base, T...> ;

  struct MDR_BKPREG_04Base {} ;

  struct REG_04 : public RegisterBase<0x400D8010, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_04, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_04Pack  = Register<0x400D8010, 32, ReadWriteMode, MDR_BKPREG_04Base, T...> ;

  struct MDR_BKPREG_05Base {} ;

  struct REG_05 : public RegisterBase<0x400D8014, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_05, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_05Pack  = Register<0x400D8014, 32, ReadWriteMode, MDR_BKPREG_05Base, T...> ;

  struct MDR_BKPREG_06Base {} ;

  struct REG_06 : public RegisterBase<0x400D8018, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_06, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_06Pack  = Register<0x400D8018, 32, ReadWriteMode, MDR_BKPREG_06Base, T...> ;

  struct MDR_BKPREG_07Base {} ;

  struct REG_07 : public RegisterBase<0x400D801C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_07, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_07Pack  = Register<0x400D801C, 32, ReadWriteMode, MDR_BKPREG_07Base, T...> ;

  struct MDR_BKPREG_08Base {} ;

  struct REG_08 : public RegisterBase<0x400D8020, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_08, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_08Pack  = Register<0x400D8020, 32, ReadWriteMode, MDR_BKPREG_08Base, T...> ;

  struct MDR_BKPREG_09Base {} ;

  struct REG_09 : public RegisterBase<0x400D8024, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_09, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_09Pack  = Register<0x400D8024, 32, ReadWriteMode, MDR_BKPREG_09Base, T...> ;

  struct MDR_BKPREG_0ABase {} ;

  struct REG_0A : public RegisterBase<0x400D8028, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_0A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0APack  = Register<0x400D8028, 32, ReadWriteMode, MDR_BKPREG_0ABase, T...> ;

  struct MDR_BKPREG_0BBase {} ;

  struct REG_0B : public RegisterBase<0x400D802C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_0B, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0BPack  = Register<0x400D802C, 32, ReadWriteMode, MDR_BKPREG_0BBase, T...> ;

  struct MDR_BKPREG_0CBase {} ;

  struct REG_0C : public RegisterBase<0x400D8030, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_0C, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0CPack  = Register<0x400D8030, 32, ReadWriteMode, MDR_BKPREG_0CBase, T...> ;

  struct MDR_BKPREG_0DBase {} ;

  struct REG_0D : public RegisterBase<0x400D8034, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_BKP::REG_0D, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using REG_0DPack  = Register<0x400D8034, 32, ReadWriteMode, MDR_BKPREG_0DBase, T...> ;

} ;

#endif //#if !defined(MDRBKPREGISTERS_HPP)
