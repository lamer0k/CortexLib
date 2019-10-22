/*******************************************************************************
* Filename      : mdradcuiregisters.hpp
*
* Details       : Energy Counter Block. This header file is auto-generated for
*                 MDR1986VK234 device.
*
*
*******************************************************************************/

#if !defined(MDRADCUIREGISTERS_HPP)
#define MDRADCUIREGISTERS_HPP

#include "mdradcuifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_ADCUI
{
  struct MDR_ADCUICTRL1Base {} ;

  struct CTRL1 : public RegisterBase<0x40068000, 32, ReadWriteMode>
  {
    using I0EN = MDR_ADCUI_CTRL1_I0EN_Values<MDR_ADCUI::CTRL1, 0, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using V0EN = MDR_ADCUI_CTRL1_V0EN_Values<MDR_ADCUI::CTRL1, 1, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using I1EN = MDR_ADCUI_CTRL1_I1EN_Values<MDR_ADCUI::CTRL1, 2, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using V1EN = MDR_ADCUI_CTRL1_V1EN_Values<MDR_ADCUI::CTRL1, 3, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using I2EN = MDR_ADCUI_CTRL1_I2EN_Values<MDR_ADCUI::CTRL1, 4, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using V2EN = MDR_ADCUI_CTRL1_V2EN_Values<MDR_ADCUI::CTRL1, 5, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using I3EN = MDR_ADCUI_CTRL1_I3EN_Values<MDR_ADCUI::CTRL1, 6, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using RESOL = MDR_ADCUI_CTRL1_RESOL_Values<MDR_ADCUI::CTRL1, 7, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ZXLPF = MDR_ADCUI_CTRL1_ZXLPF_Values<MDR_ADCUI::CTRL1, 8, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using PER_Length = MDR_ADCUI_CTRL1_PER_Length_Values<MDR_ADCUI::CTRL1, 9, 3, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using APNOLOAD = MDR_ADCUI_CTRL1_APNOLOAD_Values<MDR_ADCUI::CTRL1, 12, 2, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using VARNOLOAD = MDR_ADCUI_CTRL1_VARNOLOAD_Values<MDR_ADCUI::CTRL1, 15, 2, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using VANOLOAD = MDR_ADCUI_CTRL1_VANOLOAD_Values<MDR_ADCUI::CTRL1, 17, 2, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using FREQSEL = MDR_ADCUI_CTRL1_FREQSEL_Values<MDR_ADCUI::CTRL1, 19, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using VREF_SEL = MDR_ADCUI_CTRL1_VREF_SEL_Values<MDR_ADCUI::CTRL1, 20, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using BUF_BYP = MDR_ADCUI_CTRL1_BUF_BYP_Values<MDR_ADCUI::CTRL1, 21, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHOP_EN = MDR_ADCUI_CTRL1_CHOP_EN_Values<MDR_ADCUI::CTRL1, 22, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using CHOP_FREQ = MDR_ADCUI_CTRL1_CHOP_FREQ_Values<MDR_ADCUI::CTRL1, 23, 2, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using ZXRMS = MDR_ADCUI_CTRL1_ZXRMS_Values<MDR_ADCUI::CTRL1, 27, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using RESET_DIG = MDR_ADCUI_CTRL1_RESET_DIG_Values<MDR_ADCUI::CTRL1, 28, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using IBOOST = MDR_ADCUI_CTRL1_IBOOST_Values<MDR_ADCUI::CTRL1, 29, 1, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using OSR_CONF = MDR_ADCUI_CTRL1_OSR_CONF_Values<MDR_ADCUI::CTRL1, 30, 2, ReadWriteMode, MDR_ADCUICTRL1Base> ;
    using FieldValues = MDR_ADCUI_CTRL1_OSR_CONF_Values<MDR_ADCUI::CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL1Pack  = Register<0x40068000, 32, ReadWriteMode, MDR_ADCUICTRL1Base, T...> ;

  struct MDR_ADCUICTRL2Base {} ;

  struct CTRL2 : public RegisterBase<0x40068004, 32, ReadWriteMode>
  {
    using SAGLVL = MDR_ADCUI_CTRL2_SAGLVL_Values<MDR_ADCUI::CTRL2, 0, 16, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using SAGCYC = MDR_ADCUI_CTRL2_SAGCYC_Values<MDR_ADCUI::CTRL2, 16, 8, ReadWriteMode, MDR_ADCUICTRL2Base> ;
    using FieldValues = MDR_ADCUI_CTRL2_SAGCYC_Values<MDR_ADCUI::CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL2Pack  = Register<0x40068004, 32, ReadWriteMode, MDR_ADCUICTRL2Base, T...> ;

  struct MDR_ADCUICTRL3Base {} ;

  struct CTRL3 : public RegisterBase<0x40068008, 32, ReadWriteMode>
  {
    using ZTXOUT = MDR_ADCUI_CTRL3_ZTXOUT_Values<MDR_ADCUI::CTRL3, 0, 12, ReadWriteMode, MDR_ADCUICTRL3Base> ;
    using FieldValues = MDR_ADCUI_CTRL3_ZTXOUT_Values<MDR_ADCUI::CTRL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL3Pack  = Register<0x40068008, 32, ReadWriteMode, MDR_ADCUICTRL3Base, T...> ;

  struct MDR_ADCUIF0CTRBase {} ;

  struct F0CTR : public RegisterBase<0x4006800C, 32, ReadWriteMode>
  {
    using I0NTEN = MDR_ADCUI_F0CTR_I0NTEN_Values<MDR_ADCUI::F0CTR, 0, 1, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using I3NTEN = MDR_ADCUI_F0CTR_I3NTEN_Values<MDR_ADCUI::F0CTR, 1, 1, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using VASEL = MDR_ADCUI_F0CTR_VASEL_Values<MDR_ADCUI::F0CTR, 2, 1, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using RARS = MDR_ADCUI_F0CTR_RARS_Values<MDR_ADCUI::F0CTR, 3, 1, WriteMode, MDR_ADCUIF0CTRBase> ;
    using RRRS = MDR_ADCUI_F0CTR_RRRS_Values<MDR_ADCUI::F0CTR, 4, 1, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using RVRS = MDR_ADCUI_F0CTR_RVRS_Values<MDR_ADCUI::F0CTR, 5, 1, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using VGAIN = MDR_ADCUI_F0CTR_VGAIN_Values<MDR_ADCUI::F0CTR, 6, 2, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using I0GAIN = MDR_ADCUI_F0CTR_I0GAIN_Values<MDR_ADCUI::F0CTR, 8, 2, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using VPHASE = MDR_ADCUI_F0CTR_VPHASE_Values<MDR_ADCUI::F0CTR, 10, 8, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using I3GAIN = MDR_ADCUI_F0CTR_I3GAIN_Values<MDR_ADCUI::F0CTR, 18, 2, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using IRMSOS = MDR_ADCUI_F0CTR_IRMSOS_Values<MDR_ADCUI::F0CTR, 20, 12, ReadWriteMode, MDR_ADCUIF0CTRBase> ;
    using FieldValues = MDR_ADCUI_F0CTR_IRMSOS_Values<MDR_ADCUI::F0CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0CTRPack  = Register<0x4006800C, 32, ReadWriteMode, MDR_ADCUIF0CTRBase, T...> ;

  struct MDR_ADCUIF0WCBase {} ;

  struct F0WC : public RegisterBase<0x40068010, 32, ReadWriteMode>
  {
    using WATTOS = MDR_ADCUI_F0WC_WATTOS_Values<MDR_ADCUI::F0WC, 0, 16, ReadWriteMode, MDR_ADCUIF0WCBase> ;
    using WGAIN = MDR_ADCUI_F0WC_WGAIN_Values<MDR_ADCUI::F0WC, 16, 12, ReadWriteMode, MDR_ADCUIF0WCBase> ;
    using FieldValues = MDR_ADCUI_F0WC_WGAIN_Values<MDR_ADCUI::F0WC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0WCPack  = Register<0x40068010, 32, ReadWriteMode, MDR_ADCUIF0WCBase, T...> ;

  struct MDR_ADCUIF0WATTPBase {} ;

  struct F0WATTP : public RegisterBase<0x40068014, 32, ReadMode>
  {
    using WATTHRP = MDR_ADCUI_F0WATTP_WATTHRP_Values<MDR_ADCUI::F0WATTP, 0, 32, ReadMode, MDR_ADCUIF0WATTPBase> ;
    using FieldValues = MDR_ADCUI_F0WATTP_WATTHRP_Values<MDR_ADCUI::F0WATTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0WATTPPack  = Register<0x40068014, 32, ReadMode, MDR_ADCUIF0WATTPBase, T...> ;

  struct MDR_ADCUIF0WATTNBase {} ;

  struct F0WATTN : public RegisterBase<0x40068018, 32, ReadMode>
  {
    using WATTHRN = MDR_ADCUI_F0WATTN_WATTHRN_Values<MDR_ADCUI::F0WATTN, 0, 32, ReadMode, MDR_ADCUIF0WATTNBase> ;
    using FieldValues = MDR_ADCUI_F0WATTN_WATTHRN_Values<MDR_ADCUI::F0WATTN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0WATTNPack  = Register<0x40068018, 32, ReadMode, MDR_ADCUIF0WATTNBase, T...> ;

  struct MDR_ADCUIF0VCBase {} ;

  struct F0VC : public RegisterBase<0x4006801C, 32, ReadWriteMode>
  {
    using VAROS = MDR_ADCUI_F0VC_VAROS_Values<MDR_ADCUI::F0VC, 0, 16, ReadWriteMode, MDR_ADCUIF0VCBase> ;
    using VARGAIN = MDR_ADCUI_F0VC_VARGAIN_Values<MDR_ADCUI::F0VC, 16, 12, ReadWriteMode, MDR_ADCUIF0VCBase> ;
    using FieldValues = MDR_ADCUI_F0VC_VARGAIN_Values<MDR_ADCUI::F0VC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VCPack  = Register<0x4006801C, 32, ReadWriteMode, MDR_ADCUIF0VCBase, T...> ;

  struct MDR_ADCUIF0VARPBase {} ;

  struct F0VARP : public RegisterBase<0x40068020, 32, ReadMode>
  {
    using VARHRP = MDR_ADCUI_F0VARP_VARHRP_Values<MDR_ADCUI::F0VARP, 0, 32, ReadMode, MDR_ADCUIF0VARPBase> ;
    using FieldValues = MDR_ADCUI_F0VARP_VARHRP_Values<MDR_ADCUI::F0VARP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VARPPack  = Register<0x40068020, 32, ReadMode, MDR_ADCUIF0VARPBase, T...> ;

  struct MDR_ADCUIF0VARNBase {} ;

  struct F0VARN : public RegisterBase<0x40068024, 32, ReadMode>
  {
    using VARHRN = MDR_ADCUI_F0VARN_VARHRN_Values<MDR_ADCUI::F0VARN, 0, 32, ReadMode, MDR_ADCUIF0VARNBase> ;
    using FieldValues = MDR_ADCUI_F0VARN_VARHRN_Values<MDR_ADCUI::F0VARN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VARNPack  = Register<0x40068024, 32, ReadMode, MDR_ADCUIF0VARNBase, T...> ;

  struct MDR_ADCUIF0ACBase {} ;

  struct F0AC : public RegisterBase<0x40068028, 32, ReadWriteMode>
  {
    using VRMSOS = MDR_ADCUI_F0AC_VRMSOS_Values<MDR_ADCUI::F0AC, 0, 12, ReadWriteMode, MDR_ADCUIF0ACBase> ;
    using VAGAIN = MDR_ADCUI_F0AC_VAGAIN_Values<MDR_ADCUI::F0AC, 16, 12, ReadWriteMode, MDR_ADCUIF0ACBase> ;
    using FieldValues = MDR_ADCUI_F0AC_VAGAIN_Values<MDR_ADCUI::F0AC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0ACPack  = Register<0x40068028, 32, ReadWriteMode, MDR_ADCUIF0ACBase, T...> ;

  struct MDR_ADCUIF0VRBase {} ;

  struct F0VR : public RegisterBase<0x4006802C, 32, ReadMode>
  {
    using VAHR = MDR_ADCUI_F0VR_VAHR_Values<MDR_ADCUI::F0VR, 0, 32, ReadMode, MDR_ADCUIF0VRBase> ;
    using FieldValues = MDR_ADCUI_F0VR_VAHR_Values<MDR_ADCUI::F0VR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VRPack  = Register<0x4006802C, 32, ReadMode, MDR_ADCUIF0VRBase, T...> ;

  struct MDR_ADCUIF0MD0Base {} ;

  struct F0MD0 : public RegisterBase<0x40068030, 32, ReadWriteMode>
  {
    using VSEL = MDR_ADCUI_F0MD0_VSEL_Values<MDR_ADCUI::F0MD0, 0, 2, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using ISEL = MDR_ADCUI_F0MD0_ISEL_Values<MDR_ADCUI::F0MD0, 2, 2, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using ACTS = MDR_ADCUI_F0MD0_ACTS_Values<MDR_ADCUI::F0MD0, 4, 1, ReadMode, MDR_ADCUIF0MD0Base> ;
    using REACTS = MDR_ADCUI_F0MD0_REACTS_Values<MDR_ADCUI::F0MD0, 5, 1, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using V0GAIN = MDR_ADCUI_F0MD0_V0GAIN_Values<MDR_ADCUI::F0MD0, 6, 1, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using IOGAIN = MDR_ADCUI_F0MD0_IOGAIN_Values<MDR_ADCUI::F0MD0, 7, 1, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using I3GAIN = MDR_ADCUI_F0MD0_I3GAIN_Values<MDR_ADCUI::F0MD0, 8, 1, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using PER_FREQ = MDR_ADCUI_F0MD0_PER_FREQ_Values<MDR_ADCUI::F0MD0, 12, 17, ReadMode, MDR_ADCUIF0MD0Base> ;
    using I3SEL = MDR_ADCUI_F0MD0_I3SEL_Values<MDR_ADCUI::F0MD0, 29, 1, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using SEL_I_CH = MDR_ADCUI_F0MD0_SEL_I_CH_Values<MDR_ADCUI::F0MD0, 30, 2, ReadWriteMode, MDR_ADCUIF0MD0Base> ;
    using FieldValues = MDR_ADCUI_F0MD0_SEL_I_CH_Values<MDR_ADCUI::F0MD0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0MD0Pack  = Register<0x40068030, 32, ReadWriteMode, MDR_ADCUIF0MD0Base, T...> ;

  struct MDR_ADCUIF0MD1Base {} ;

  struct F0MD1 : public RegisterBase<0x40068034, 32, ReadWriteMode>
  {
    using IPKLVL = MDR_ADCUI_F0MD1_IPKLVL_Values<MDR_ADCUI::F0MD1, 0, 16, ReadWriteMode, MDR_ADCUIF0MD1Base> ;
    using VPKLVL = MDR_ADCUI_F0MD1_VPKLVL_Values<MDR_ADCUI::F0MD1, 16, 16, ReadWriteMode, MDR_ADCUIF0MD1Base> ;
    using FieldValues = MDR_ADCUI_F0MD1_VPKLVL_Values<MDR_ADCUI::F0MD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0MD1Pack  = Register<0x40068034, 32, ReadWriteMode, MDR_ADCUIF0MD1Base, T...> ;

  struct MDR_ADCUIF0VPEAKBase {} ;

  struct F0VPEAK : public RegisterBase<0x40068038, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F0VPEAK_IPEAK_Values<MDR_ADCUI::F0VPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF0VPEAKBase> ;
    using FieldValues = MDR_ADCUI_F0VPEAK_IPEAK_Values<MDR_ADCUI::F0VPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VPEAKPack  = Register<0x40068038, 32, ReadWriteMode, MDR_ADCUIF0VPEAKBase, T...> ;

  struct MDR_ADCUIF0IPEAKBase {} ;

  struct F0IPEAK : public RegisterBase<0x4006803C, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F0IPEAK_IPEAK_Values<MDR_ADCUI::F0IPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF0IPEAKBase> ;
    using FieldValues = MDR_ADCUI_F0IPEAK_IPEAK_Values<MDR_ADCUI::F0IPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0IPEAKPack  = Register<0x4006803C, 32, ReadWriteMode, MDR_ADCUIF0IPEAKBase, T...> ;

  struct MDR_ADCUIF0VDATBase {} ;

  struct F0VDAT : public RegisterBase<0x40068040, 32, ReadMode>
  {
    using VDAT = MDR_ADCUI_F0VDAT_VDAT_Values<MDR_ADCUI::F0VDAT, 0, 24, ReadMode, MDR_ADCUIF0VDATBase> ;
    using FieldValues = MDR_ADCUI_F0VDAT_VDAT_Values<MDR_ADCUI::F0VDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VDATPack  = Register<0x40068040, 32, ReadMode, MDR_ADCUIF0VDATBase, T...> ;

  struct MDR_ADCUIF0I0DATBase {} ;

  struct F0I0DAT : public RegisterBase<0x40068044, 32, ReadMode>
  {
    using I0DAT = MDR_ADCUI_F0I0DAT_I0DAT_Values<MDR_ADCUI::F0I0DAT, 0, 24, ReadMode, MDR_ADCUIF0I0DATBase> ;
    using FieldValues = MDR_ADCUI_F0I0DAT_I0DAT_Values<MDR_ADCUI::F0I0DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0I0DATPack  = Register<0x40068044, 32, ReadMode, MDR_ADCUIF0I0DATBase, T...> ;

  struct MDR_ADCUIF0I3DATBase {} ;

  struct F0I3DAT : public RegisterBase<0x40068048, 32, ReadMode>
  {
    using I3DAT = MDR_ADCUI_F0I3DAT_I3DAT_Values<MDR_ADCUI::F0I3DAT, 0, 24, ReadMode, MDR_ADCUIF0I3DATBase> ;
    using FieldValues = MDR_ADCUI_F0I3DAT_I3DAT_Values<MDR_ADCUI::F0I3DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0I3DATPack  = Register<0x40068048, 32, ReadMode, MDR_ADCUIF0I3DATBase, T...> ;

  struct MDR_ADCUIF0VRMSBase {} ;

  struct F0VRMS : public RegisterBase<0x4006804C, 32, ReadMode>
  {
    using VRMS = MDR_ADCUI_F0VRMS_VRMS_Values<MDR_ADCUI::F0VRMS, 0, 24, ReadMode, MDR_ADCUIF0VRMSBase> ;
    using FieldValues = MDR_ADCUI_F0VRMS_VRMS_Values<MDR_ADCUI::F0VRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VRMSPack  = Register<0x4006804C, 32, ReadMode, MDR_ADCUIF0VRMSBase, T...> ;

  struct MDR_ADCUIF0VRMS2Base {} ;

  struct F0VRMS2 : public RegisterBase<0x40068050, 32, ReadMode>
  {
    using VRMS2 = MDR_ADCUI_F0VRMS2_VRMS2_Values<MDR_ADCUI::F0VRMS2, 0, 24, ReadMode, MDR_ADCUIF0VRMS2Base> ;
    using FieldValues = MDR_ADCUI_F0VRMS2_VRMS2_Values<MDR_ADCUI::F0VRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0VRMS2Pack  = Register<0x40068050, 32, ReadMode, MDR_ADCUIF0VRMS2Base, T...> ;

  struct MDR_ADCUIF0IRMSBase {} ;

  struct F0IRMS : public RegisterBase<0x40068054, 32, ReadMode>
  {
    using IRMS = MDR_ADCUI_F0IRMS_IRMS_Values<MDR_ADCUI::F0IRMS, 0, 24, ReadMode, MDR_ADCUIF0IRMSBase> ;
    using FieldValues = MDR_ADCUI_F0IRMS_IRMS_Values<MDR_ADCUI::F0IRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0IRMSPack  = Register<0x40068054, 32, ReadMode, MDR_ADCUIF0IRMSBase, T...> ;

  struct MDR_ADCUIF0IRMS2Base {} ;

  struct F0IRMS2 : public RegisterBase<0x40068058, 32, ReadMode>
  {
    using IRMS2 = MDR_ADCUI_F0IRMS2_IRMS2_Values<MDR_ADCUI::F0IRMS2, 0, 24, ReadMode, MDR_ADCUIF0IRMS2Base> ;
    using FieldValues = MDR_ADCUI_F0IRMS2_IRMS2_Values<MDR_ADCUI::F0IRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0IRMS2Pack  = Register<0x40068058, 32, ReadMode, MDR_ADCUIF0IRMS2Base, T...> ;

  struct MDR_ADCUIF0STATBase {} ;

  struct F0STAT : public RegisterBase<0x4006805C, 32, ReadWriteMode>
  {
    using VF_EMP = MDR_ADCUI_F0STAT_VF_EMP_Values<MDR_ADCUI::F0STAT, 0, 1, ReadMode, MDR_ADCUIF0STATBase> ;
    using VF_FLL = MDR_ADCUI_F0STAT_VF_FLL_Values<MDR_ADCUI::F0STAT, 1, 1, ReadMode, MDR_ADCUIF0STATBase> ;
    using VF_OVER = MDR_ADCUI_F0STAT_VF_OVER_Values<MDR_ADCUI::F0STAT, 2, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using IF_EMP = MDR_ADCUI_F0STAT_IF_EMP_Values<MDR_ADCUI::F0STAT, 3, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using IF_FLL = MDR_ADCUI_F0STAT_IF_FLL_Values<MDR_ADCUI::F0STAT, 4, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using IF_OVER = MDR_ADCUI_F0STAT_IF_OVER_Values<MDR_ADCUI::F0STAT, 5, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using SAGF = MDR_ADCUI_F0STAT_SAGF_Values<MDR_ADCUI::F0STAT, 6, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using PEAKVF = MDR_ADCUI_F0STAT_PEAKVF_Values<MDR_ADCUI::F0STAT, 7, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using PEAKIF = MDR_ADCUI_F0STAT_PEAKIF_Values<MDR_ADCUI::F0STAT, 8, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using WATTOVP = MDR_ADCUI_F0STAT_WATTOVP_Values<MDR_ADCUI::F0STAT, 9, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VAROVP = MDR_ADCUI_F0STAT_VAROVP_Values<MDR_ADCUI::F0STAT, 10, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VAOV = MDR_ADCUI_F0STAT_VAOV_Values<MDR_ADCUI::F0STAT, 11, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using ZTXVF = MDR_ADCUI_F0STAT_ZTXVF_Values<MDR_ADCUI::F0STAT, 12, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using ICHANNEL = MDR_ADCUI_F0STAT_ICHANNEL_Values<MDR_ADCUI::F0STAT, 13, 1, ReadMode, MDR_ADCUIF0STATBase> ;
    using FAULTCON = MDR_ADCUI_F0STAT_FAULTCON_Values<MDR_ADCUI::F0STAT, 14, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using APSIGN = MDR_ADCUI_F0STAT_APSIGN_Values<MDR_ADCUI::F0STAT, 15, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using APNLDFL = MDR_ADCUI_F0STAT_APNLDFL_Values<MDR_ADCUI::F0STAT, 16, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VARSIGN = MDR_ADCUI_F0STAT_VARSIGN_Values<MDR_ADCUI::F0STAT, 17, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VARNLDFL = MDR_ADCUI_F0STAT_VARNLDFL_Values<MDR_ADCUI::F0STAT, 18, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VANLDFL = MDR_ADCUI_F0STAT_VANLDFL_Values<MDR_ADCUI::F0STAT, 20, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using ZEROCRS = MDR_ADCUI_F0STAT_ZEROCRS_Values<MDR_ADCUI::F0STAT, 21, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using I3F_EMP = MDR_ADCUI_F0STAT_I3F_EMP_Values<MDR_ADCUI::F0STAT, 22, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using I3F_FLL = MDR_ADCUI_F0STAT_I3F_FLL_Values<MDR_ADCUI::F0STAT, 23, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using I3F_OVER = MDR_ADCUI_F0STAT_I3F_OVER_Values<MDR_ADCUI::F0STAT, 24, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using WATTOVN = MDR_ADCUI_F0STAT_WATTOVN_Values<MDR_ADCUI::F0STAT, 25, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using VAROVN = MDR_ADCUI_F0STAT_VAROVN_Values<MDR_ADCUI::F0STAT, 26, 1, ReadWriteMode, MDR_ADCUIF0STATBase> ;
    using FieldValues = MDR_ADCUI_F0STAT_VAROVN_Values<MDR_ADCUI::F0STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0STATPack  = Register<0x4006805C, 32, ReadWriteMode, MDR_ADCUIF0STATBase, T...> ;

  struct MDR_ADCUIF0MASKBase {} ;

  struct F0MASK : public RegisterBase<0x40068060, 32, ReadWriteMode>
  {
    using VF_EMPM = MDR_ADCUI_F0MASK_VF_EMPM_Values<MDR_ADCUI::F0MASK, 0, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VF_FLLM = MDR_ADCUI_F0MASK_VF_FLLM_Values<MDR_ADCUI::F0MASK, 1, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VF_OVERM = MDR_ADCUI_F0MASK_VF_OVERM_Values<MDR_ADCUI::F0MASK, 2, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using IF_EMPM = MDR_ADCUI_F0MASK_IF_EMPM_Values<MDR_ADCUI::F0MASK, 3, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using IF_FLLM = MDR_ADCUI_F0MASK_IF_FLLM_Values<MDR_ADCUI::F0MASK, 4, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using IF_OVERM = MDR_ADCUI_F0MASK_IF_OVERM_Values<MDR_ADCUI::F0MASK, 5, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using SAGFM = MDR_ADCUI_F0MASK_SAGFM_Values<MDR_ADCUI::F0MASK, 6, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using PEAKVFM = MDR_ADCUI_F0MASK_PEAKVFM_Values<MDR_ADCUI::F0MASK, 7, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using PEAKIFM = MDR_ADCUI_F0MASK_PEAKIFM_Values<MDR_ADCUI::F0MASK, 8, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using WATTOVPM = MDR_ADCUI_F0MASK_WATTOVPM_Values<MDR_ADCUI::F0MASK, 9, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VAROVPM = MDR_ADCUI_F0MASK_VAROVPM_Values<MDR_ADCUI::F0MASK, 10, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VAOVM = MDR_ADCUI_F0MASK_VAOVM_Values<MDR_ADCUI::F0MASK, 11, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using ZTXVFM = MDR_ADCUI_F0MASK_ZTXVFM_Values<MDR_ADCUI::F0MASK, 12, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using FAULTCONM = MDR_ADCUI_F0MASK_FAULTCONM_Values<MDR_ADCUI::F0MASK, 14, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using APSIGNM = MDR_ADCUI_F0MASK_APSIGNM_Values<MDR_ADCUI::F0MASK, 15, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using APNLDFLM = MDR_ADCUI_F0MASK_APNLDFLM_Values<MDR_ADCUI::F0MASK, 16, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VARSIGNM = MDR_ADCUI_F0MASK_VARSIGNM_Values<MDR_ADCUI::F0MASK, 17, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VARNLDFLM = MDR_ADCUI_F0MASK_VARNLDFLM_Values<MDR_ADCUI::F0MASK, 18, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VANLDFLM = MDR_ADCUI_F0MASK_VANLDFLM_Values<MDR_ADCUI::F0MASK, 20, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using ZEROCRSM = MDR_ADCUI_F0MASK_ZEROCRSM_Values<MDR_ADCUI::F0MASK, 21, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using I3F_EMPM = MDR_ADCUI_F0MASK_I3F_EMPM_Values<MDR_ADCUI::F0MASK, 22, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using I3F_FLLM = MDR_ADCUI_F0MASK_I3F_FLLM_Values<MDR_ADCUI::F0MASK, 23, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using I3F_OVERM = MDR_ADCUI_F0MASK_I3F_OVERM_Values<MDR_ADCUI::F0MASK, 24, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using WATTOVNM = MDR_ADCUI_F0MASK_WATTOVNM_Values<MDR_ADCUI::F0MASK, 25, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using VAROVNM = MDR_ADCUI_F0MASK_VAROVNM_Values<MDR_ADCUI::F0MASK, 26, 1, ReadWriteMode, MDR_ADCUIF0MASKBase> ;
    using FieldValues = MDR_ADCUI_F0MASK_VAROVNM_Values<MDR_ADCUI::F0MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0MASKPack  = Register<0x40068060, 32, ReadWriteMode, MDR_ADCUIF0MASKBase, T...> ;

  struct MDR_ADCUIF1CTRBase {} ;

  struct F1CTR : public RegisterBase<0x40068064, 32, ReadWriteMode>
  {
    using INTEN = MDR_ADCUI_F1CTR_INTEN_Values<MDR_ADCUI::F1CTR, 0, 1, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using VASEL = MDR_ADCUI_F1CTR_VASEL_Values<MDR_ADCUI::F1CTR, 2, 1, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using RARS = MDR_ADCUI_F1CTR_RARS_Values<MDR_ADCUI::F1CTR, 3, 1, WriteMode, MDR_ADCUIF1CTRBase> ;
    using RRRS = MDR_ADCUI_F1CTR_RRRS_Values<MDR_ADCUI::F1CTR, 4, 1, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using RVRS = MDR_ADCUI_F1CTR_RVRS_Values<MDR_ADCUI::F1CTR, 5, 1, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using IGAIN = MDR_ADCUI_F1CTR_IGAIN_Values<MDR_ADCUI::F1CTR, 6, 2, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using VGAIN = MDR_ADCUI_F1CTR_VGAIN_Values<MDR_ADCUI::F1CTR, 8, 2, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using VPHASE = MDR_ADCUI_F1CTR_VPHASE_Values<MDR_ADCUI::F1CTR, 10, 8, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using IRMSOS = MDR_ADCUI_F1CTR_IRMSOS_Values<MDR_ADCUI::F1CTR, 20, 12, ReadWriteMode, MDR_ADCUIF1CTRBase> ;
    using FieldValues = MDR_ADCUI_F1CTR_IRMSOS_Values<MDR_ADCUI::F1CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1CTRPack  = Register<0x40068064, 32, ReadWriteMode, MDR_ADCUIF1CTRBase, T...> ;

  struct MDR_ADCUIF1WCBase {} ;

  struct F1WC : public RegisterBase<0x40068068, 32, ReadWriteMode>
  {
    using WATTOS = MDR_ADCUI_F1WC_WATTOS_Values<MDR_ADCUI::F1WC, 0, 16, ReadWriteMode, MDR_ADCUIF1WCBase> ;
    using WGAIN = MDR_ADCUI_F1WC_WGAIN_Values<MDR_ADCUI::F1WC, 16, 12, ReadWriteMode, MDR_ADCUIF1WCBase> ;
    using FieldValues = MDR_ADCUI_F1WC_WGAIN_Values<MDR_ADCUI::F1WC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1WCPack  = Register<0x40068068, 32, ReadWriteMode, MDR_ADCUIF1WCBase, T...> ;

  struct MDR_ADCUIF1WATTPBase {} ;

  struct F1WATTP : public RegisterBase<0x4006806C, 32, ReadMode>
  {
    using WATTHRP = MDR_ADCUI_F1WATTP_WATTHRP_Values<MDR_ADCUI::F1WATTP, 0, 32, ReadMode, MDR_ADCUIF1WATTPBase> ;
    using FieldValues = MDR_ADCUI_F1WATTP_WATTHRP_Values<MDR_ADCUI::F1WATTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1WATTPPack  = Register<0x4006806C, 32, ReadMode, MDR_ADCUIF1WATTPBase, T...> ;

  struct MDR_ADCUIF1WATTNBase {} ;

  struct F1WATTN : public RegisterBase<0x40068070, 32, ReadMode>
  {
    using WATTHRN = MDR_ADCUI_F1WATTN_WATTHRN_Values<MDR_ADCUI::F1WATTN, 0, 32, ReadMode, MDR_ADCUIF1WATTNBase> ;
    using FieldValues = MDR_ADCUI_F1WATTN_WATTHRN_Values<MDR_ADCUI::F1WATTN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1WATTNPack  = Register<0x40068070, 32, ReadMode, MDR_ADCUIF1WATTNBase, T...> ;

  struct MDR_ADCUIF1VCBase {} ;

  struct F1VC : public RegisterBase<0x40068074, 32, ReadWriteMode>
  {
    using VAROS = MDR_ADCUI_F1VC_VAROS_Values<MDR_ADCUI::F1VC, 0, 16, ReadWriteMode, MDR_ADCUIF1VCBase> ;
    using VARGAIN = MDR_ADCUI_F1VC_VARGAIN_Values<MDR_ADCUI::F1VC, 16, 12, ReadWriteMode, MDR_ADCUIF1VCBase> ;
    using FieldValues = MDR_ADCUI_F1VC_VARGAIN_Values<MDR_ADCUI::F1VC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VCPack  = Register<0x40068074, 32, ReadWriteMode, MDR_ADCUIF1VCBase, T...> ;

  struct MDR_ADCUIF1VARPBase {} ;

  struct F1VARP : public RegisterBase<0x40068078, 32, ReadMode>
  {
    using VARHRP = MDR_ADCUI_F1VARP_VARHRP_Values<MDR_ADCUI::F1VARP, 0, 32, ReadMode, MDR_ADCUIF1VARPBase> ;
    using FieldValues = MDR_ADCUI_F1VARP_VARHRP_Values<MDR_ADCUI::F1VARP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VARPPack  = Register<0x40068078, 32, ReadMode, MDR_ADCUIF1VARPBase, T...> ;

  struct MDR_ADCUIF1VARNBase {} ;

  struct F1VARN : public RegisterBase<0x4006807C, 32, ReadMode>
  {
    using VARHRN = MDR_ADCUI_F1VARN_VARHRN_Values<MDR_ADCUI::F1VARN, 0, 32, ReadMode, MDR_ADCUIF1VARNBase> ;
    using FieldValues = MDR_ADCUI_F1VARN_VARHRN_Values<MDR_ADCUI::F1VARN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VARNPack  = Register<0x4006807C, 32, ReadMode, MDR_ADCUIF1VARNBase, T...> ;

  struct MDR_ADCUIF1ACBase {} ;

  struct F1AC : public RegisterBase<0x40068080, 32, ReadWriteMode>
  {
    using VRMSOS = MDR_ADCUI_F1AC_VRMSOS_Values<MDR_ADCUI::F1AC, 0, 12, ReadWriteMode, MDR_ADCUIF1ACBase> ;
    using VAGAIN = MDR_ADCUI_F1AC_VAGAIN_Values<MDR_ADCUI::F1AC, 16, 12, ReadWriteMode, MDR_ADCUIF1ACBase> ;
    using FieldValues = MDR_ADCUI_F1AC_VAGAIN_Values<MDR_ADCUI::F1AC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1ACPack  = Register<0x40068080, 32, ReadWriteMode, MDR_ADCUIF1ACBase, T...> ;

  struct MDR_ADCUIF1VRBase {} ;

  struct F1VR : public RegisterBase<0x40068084, 32, ReadMode>
  {
    using VAHR = MDR_ADCUI_F1VR_VAHR_Values<MDR_ADCUI::F1VR, 0, 32, ReadMode, MDR_ADCUIF1VRBase> ;
    using FieldValues = MDR_ADCUI_F1VR_VAHR_Values<MDR_ADCUI::F1VR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VRPack  = Register<0x40068084, 32, ReadMode, MDR_ADCUIF1VRBase, T...> ;

  struct MDR_ADCUIF1MD0Base {} ;

  struct F1MD0 : public RegisterBase<0x40068088, 32, ReadWriteMode>
  {
    using VSEL = MDR_ADCUI_F1MD0_VSEL_Values<MDR_ADCUI::F1MD0, 0, 2, ReadWriteMode, MDR_ADCUIF1MD0Base> ;
    using ISEL = MDR_ADCUI_F1MD0_ISEL_Values<MDR_ADCUI::F1MD0, 2, 2, ReadWriteMode, MDR_ADCUIF1MD0Base> ;
    using ACTS = MDR_ADCUI_F1MD0_ACTS_Values<MDR_ADCUI::F1MD0, 4, 1, ReadMode, MDR_ADCUIF1MD0Base> ;
    using REACTS = MDR_ADCUI_F1MD0_REACTS_Values<MDR_ADCUI::F1MD0, 5, 1, ReadWriteMode, MDR_ADCUIF1MD0Base> ;
    using IGAIN = MDR_ADCUI_F1MD0_IGAIN_Values<MDR_ADCUI::F1MD0, 6, 1, ReadWriteMode, MDR_ADCUIF1MD0Base> ;
    using VGAIN = MDR_ADCUI_F1MD0_VGAIN_Values<MDR_ADCUI::F1MD0, 7, 1, ReadWriteMode, MDR_ADCUIF1MD0Base> ;
    using PER_FREQ = MDR_ADCUI_F1MD0_PER_FREQ_Values<MDR_ADCUI::F1MD0, 12, 17, ReadMode, MDR_ADCUIF1MD0Base> ;
    using FieldValues = MDR_ADCUI_F1MD0_PER_FREQ_Values<MDR_ADCUI::F1MD0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1MD0Pack  = Register<0x40068088, 32, ReadWriteMode, MDR_ADCUIF1MD0Base, T...> ;

  struct MDR_ADCUIF1MD1Base {} ;

  struct F1MD1 : public RegisterBase<0x4006808C, 32, ReadWriteMode>
  {
    using IPKLVL = MDR_ADCUI_F1MD1_IPKLVL_Values<MDR_ADCUI::F1MD1, 0, 16, ReadWriteMode, MDR_ADCUIF1MD1Base> ;
    using VPKLVL = MDR_ADCUI_F1MD1_VPKLVL_Values<MDR_ADCUI::F1MD1, 16, 16, ReadWriteMode, MDR_ADCUIF1MD1Base> ;
    using FieldValues = MDR_ADCUI_F1MD1_VPKLVL_Values<MDR_ADCUI::F1MD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1MD1Pack  = Register<0x4006808C, 32, ReadWriteMode, MDR_ADCUIF1MD1Base, T...> ;

  struct MDR_ADCUIF1MD2Base {} ;

  struct F1MD2 : public RegisterBase<0x40068090, 32, ReadMode>
  {
    using PhaseV_toV0 = MDR_ADCUI_F1MD2_PhaseV_toV0_Values<MDR_ADCUI::F1MD2, 0, 17, ReadMode, MDR_ADCUIF1MD2Base> ;
    using FieldValues = MDR_ADCUI_F1MD2_PhaseV_toV0_Values<MDR_ADCUI::F1MD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1MD2Pack  = Register<0x40068090, 32, ReadMode, MDR_ADCUIF1MD2Base, T...> ;

  struct MDR_ADCUIF1VPEAKBase {} ;

  struct F1VPEAK : public RegisterBase<0x40068094, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F1VPEAK_IPEAK_Values<MDR_ADCUI::F1VPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF1VPEAKBase> ;
    using FieldValues = MDR_ADCUI_F1VPEAK_IPEAK_Values<MDR_ADCUI::F1VPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VPEAKPack  = Register<0x40068094, 32, ReadWriteMode, MDR_ADCUIF1VPEAKBase, T...> ;

  struct MDR_ADCUIF1IPEAKBase {} ;

  struct F1IPEAK : public RegisterBase<0x40068098, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F1IPEAK_IPEAK_Values<MDR_ADCUI::F1IPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF1IPEAKBase> ;
    using FieldValues = MDR_ADCUI_F1IPEAK_IPEAK_Values<MDR_ADCUI::F1IPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1IPEAKPack  = Register<0x40068098, 32, ReadWriteMode, MDR_ADCUIF1IPEAKBase, T...> ;

  struct MDR_ADCUIF1VDATBase {} ;

  struct F1VDAT : public RegisterBase<0x4006809C, 32, ReadMode>
  {
    using VDAT = MDR_ADCUI_F1VDAT_VDAT_Values<MDR_ADCUI::F1VDAT, 0, 24, ReadMode, MDR_ADCUIF1VDATBase> ;
    using FieldValues = MDR_ADCUI_F1VDAT_VDAT_Values<MDR_ADCUI::F1VDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VDATPack  = Register<0x4006809C, 32, ReadMode, MDR_ADCUIF1VDATBase, T...> ;

  struct MDR_ADCUIF1IDATBase {} ;

  struct F1IDAT : public RegisterBase<0x400680A0, 32, ReadMode>
  {
    using IDAT = MDR_ADCUI_F1IDAT_IDAT_Values<MDR_ADCUI::F1IDAT, 0, 24, ReadMode, MDR_ADCUIF1IDATBase> ;
    using FieldValues = MDR_ADCUI_F1IDAT_IDAT_Values<MDR_ADCUI::F1IDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1IDATPack  = Register<0x400680A0, 32, ReadMode, MDR_ADCUIF1IDATBase, T...> ;

  struct MDR_ADCUIF1VRMSBase {} ;

  struct F1VRMS : public RegisterBase<0x400680A4, 32, ReadMode>
  {
    using VRMS = MDR_ADCUI_F1VRMS_VRMS_Values<MDR_ADCUI::F1VRMS, 0, 24, ReadMode, MDR_ADCUIF1VRMSBase> ;
    using FieldValues = MDR_ADCUI_F1VRMS_VRMS_Values<MDR_ADCUI::F1VRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VRMSPack  = Register<0x400680A4, 32, ReadMode, MDR_ADCUIF1VRMSBase, T...> ;

  struct MDR_ADCUIF1VRMS2Base {} ;

  struct F1VRMS2 : public RegisterBase<0x400680A8, 32, ReadMode>
  {
    using VRMS2 = MDR_ADCUI_F1VRMS2_VRMS2_Values<MDR_ADCUI::F1VRMS2, 0, 24, ReadMode, MDR_ADCUIF1VRMS2Base> ;
    using FieldValues = MDR_ADCUI_F1VRMS2_VRMS2_Values<MDR_ADCUI::F1VRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1VRMS2Pack  = Register<0x400680A8, 32, ReadMode, MDR_ADCUIF1VRMS2Base, T...> ;

  struct MDR_ADCUIF1IRMSBase {} ;

  struct F1IRMS : public RegisterBase<0x400680AC, 32, ReadMode>
  {
    using IRMS = MDR_ADCUI_F1IRMS_IRMS_Values<MDR_ADCUI::F1IRMS, 0, 24, ReadMode, MDR_ADCUIF1IRMSBase> ;
    using FieldValues = MDR_ADCUI_F1IRMS_IRMS_Values<MDR_ADCUI::F1IRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1IRMSPack  = Register<0x400680AC, 32, ReadMode, MDR_ADCUIF1IRMSBase, T...> ;

  struct MDR_ADCUIF1IRMS2Base {} ;

  struct F1IRMS2 : public RegisterBase<0x400680B0, 32, ReadMode>
  {
    using IRMS2 = MDR_ADCUI_F1IRMS2_IRMS2_Values<MDR_ADCUI::F1IRMS2, 0, 24, ReadMode, MDR_ADCUIF1IRMS2Base> ;
    using FieldValues = MDR_ADCUI_F1IRMS2_IRMS2_Values<MDR_ADCUI::F1IRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1IRMS2Pack  = Register<0x400680B0, 32, ReadMode, MDR_ADCUIF1IRMS2Base, T...> ;

  struct MDR_ADCUIF1STATBase {} ;

  struct F1STAT : public RegisterBase<0x400680B4, 32, ReadWriteMode>
  {
    using VF_EMP = MDR_ADCUI_F1STAT_VF_EMP_Values<MDR_ADCUI::F1STAT, 0, 1, ReadMode, MDR_ADCUIF1STATBase> ;
    using VF_FLL = MDR_ADCUI_F1STAT_VF_FLL_Values<MDR_ADCUI::F1STAT, 1, 1, ReadMode, MDR_ADCUIF1STATBase> ;
    using VF_OVER = MDR_ADCUI_F1STAT_VF_OVER_Values<MDR_ADCUI::F1STAT, 2, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using IF_EMP = MDR_ADCUI_F1STAT_IF_EMP_Values<MDR_ADCUI::F1STAT, 3, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using IF_FLL = MDR_ADCUI_F1STAT_IF_FLL_Values<MDR_ADCUI::F1STAT, 4, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using IF_OVER = MDR_ADCUI_F1STAT_IF_OVER_Values<MDR_ADCUI::F1STAT, 5, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using SAGF = MDR_ADCUI_F1STAT_SAGF_Values<MDR_ADCUI::F1STAT, 6, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using PEAKVF = MDR_ADCUI_F1STAT_PEAKVF_Values<MDR_ADCUI::F1STAT, 7, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using PEAKIF = MDR_ADCUI_F1STAT_PEAKIF_Values<MDR_ADCUI::F1STAT, 8, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using WATTOVP = MDR_ADCUI_F1STAT_WATTOVP_Values<MDR_ADCUI::F1STAT, 9, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VAROVP = MDR_ADCUI_F1STAT_VAROVP_Values<MDR_ADCUI::F1STAT, 10, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VAOV = MDR_ADCUI_F1STAT_VAOV_Values<MDR_ADCUI::F1STAT, 11, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using ZTXVF = MDR_ADCUI_F1STAT_ZTXVF_Values<MDR_ADCUI::F1STAT, 12, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using APSIGN = MDR_ADCUI_F1STAT_APSIGN_Values<MDR_ADCUI::F1STAT, 15, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using APNLDFL = MDR_ADCUI_F1STAT_APNLDFL_Values<MDR_ADCUI::F1STAT, 16, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VARSIGN = MDR_ADCUI_F1STAT_VARSIGN_Values<MDR_ADCUI::F1STAT, 17, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VARNLDFL = MDR_ADCUI_F1STAT_VARNLDFL_Values<MDR_ADCUI::F1STAT, 18, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VANLDFL = MDR_ADCUI_F1STAT_VANLDFL_Values<MDR_ADCUI::F1STAT, 20, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using ZEROCRS = MDR_ADCUI_F1STAT_ZEROCRS_Values<MDR_ADCUI::F1STAT, 21, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using WATTOVN = MDR_ADCUI_F1STAT_WATTOVN_Values<MDR_ADCUI::F1STAT, 25, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using VAROVN = MDR_ADCUI_F1STAT_VAROVN_Values<MDR_ADCUI::F1STAT, 26, 1, ReadWriteMode, MDR_ADCUIF1STATBase> ;
    using FieldValues = MDR_ADCUI_F1STAT_VAROVN_Values<MDR_ADCUI::F1STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1STATPack  = Register<0x400680B4, 32, ReadWriteMode, MDR_ADCUIF1STATBase, T...> ;

  struct MDR_ADCUIF1MASKBase {} ;

  struct F1MASK : public RegisterBase<0x400680B8, 32, ReadWriteMode>
  {
    using VF_EMPM = MDR_ADCUI_F1MASK_VF_EMPM_Values<MDR_ADCUI::F1MASK, 0, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VF_FLLM = MDR_ADCUI_F1MASK_VF_FLLM_Values<MDR_ADCUI::F1MASK, 1, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VF_OVERM = MDR_ADCUI_F1MASK_VF_OVERM_Values<MDR_ADCUI::F1MASK, 2, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using IF_EMPM = MDR_ADCUI_F1MASK_IF_EMPM_Values<MDR_ADCUI::F1MASK, 3, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using IF_FLLM = MDR_ADCUI_F1MASK_IF_FLLM_Values<MDR_ADCUI::F1MASK, 4, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using IF_OVERM = MDR_ADCUI_F1MASK_IF_OVERM_Values<MDR_ADCUI::F1MASK, 5, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using SAGFM = MDR_ADCUI_F1MASK_SAGFM_Values<MDR_ADCUI::F1MASK, 6, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using PEAKVFM = MDR_ADCUI_F1MASK_PEAKVFM_Values<MDR_ADCUI::F1MASK, 7, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using PEAKIFM = MDR_ADCUI_F1MASK_PEAKIFM_Values<MDR_ADCUI::F1MASK, 8, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using WATTOVPM = MDR_ADCUI_F1MASK_WATTOVPM_Values<MDR_ADCUI::F1MASK, 9, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VAROVPM = MDR_ADCUI_F1MASK_VAROVPM_Values<MDR_ADCUI::F1MASK, 10, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VAOVM = MDR_ADCUI_F1MASK_VAOVM_Values<MDR_ADCUI::F1MASK, 11, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using ZTXVFM = MDR_ADCUI_F1MASK_ZTXVFM_Values<MDR_ADCUI::F1MASK, 12, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using APSIGNM = MDR_ADCUI_F1MASK_APSIGNM_Values<MDR_ADCUI::F1MASK, 15, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using APNLDFLM = MDR_ADCUI_F1MASK_APNLDFLM_Values<MDR_ADCUI::F1MASK, 16, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VARSIGNM = MDR_ADCUI_F1MASK_VARSIGNM_Values<MDR_ADCUI::F1MASK, 17, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VARNLDFLM = MDR_ADCUI_F1MASK_VARNLDFLM_Values<MDR_ADCUI::F1MASK, 18, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VANLDFLM = MDR_ADCUI_F1MASK_VANLDFLM_Values<MDR_ADCUI::F1MASK, 20, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using ZEROCRSM = MDR_ADCUI_F1MASK_ZEROCRSM_Values<MDR_ADCUI::F1MASK, 21, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using WATTOVNM = MDR_ADCUI_F1MASK_WATTOVNM_Values<MDR_ADCUI::F1MASK, 25, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using VAROVNM = MDR_ADCUI_F1MASK_VAROVNM_Values<MDR_ADCUI::F1MASK, 26, 1, ReadWriteMode, MDR_ADCUIF1MASKBase> ;
    using FieldValues = MDR_ADCUI_F1MASK_VAROVNM_Values<MDR_ADCUI::F1MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1MASKPack  = Register<0x400680B8, 32, ReadWriteMode, MDR_ADCUIF1MASKBase, T...> ;

  struct MDR_ADCUIF2CTRBase {} ;

  struct F2CTR : public RegisterBase<0x400680BC, 32, ReadWriteMode>
  {
    using INTEN = MDR_ADCUI_F2CTR_INTEN_Values<MDR_ADCUI::F2CTR, 0, 1, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using VASEL = MDR_ADCUI_F2CTR_VASEL_Values<MDR_ADCUI::F2CTR, 2, 1, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using RARS = MDR_ADCUI_F2CTR_RARS_Values<MDR_ADCUI::F2CTR, 3, 1, WriteMode, MDR_ADCUIF2CTRBase> ;
    using RRRS = MDR_ADCUI_F2CTR_RRRS_Values<MDR_ADCUI::F2CTR, 4, 1, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using RVRS = MDR_ADCUI_F2CTR_RVRS_Values<MDR_ADCUI::F2CTR, 5, 1, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using IGAIN = MDR_ADCUI_F2CTR_IGAIN_Values<MDR_ADCUI::F2CTR, 6, 2, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using VGAIN = MDR_ADCUI_F2CTR_VGAIN_Values<MDR_ADCUI::F2CTR, 8, 2, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using VPHASE = MDR_ADCUI_F2CTR_VPHASE_Values<MDR_ADCUI::F2CTR, 10, 8, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using IRMSOS = MDR_ADCUI_F2CTR_IRMSOS_Values<MDR_ADCUI::F2CTR, 20, 12, ReadWriteMode, MDR_ADCUIF2CTRBase> ;
    using FieldValues = MDR_ADCUI_F2CTR_IRMSOS_Values<MDR_ADCUI::F2CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2CTRPack  = Register<0x400680BC, 32, ReadWriteMode, MDR_ADCUIF2CTRBase, T...> ;

  struct MDR_ADCUIF2WCBase {} ;

  struct F2WC : public RegisterBase<0x400680C0, 32, ReadWriteMode>
  {
    using WATTOS = MDR_ADCUI_F2WC_WATTOS_Values<MDR_ADCUI::F2WC, 0, 16, ReadWriteMode, MDR_ADCUIF2WCBase> ;
    using WGAIN = MDR_ADCUI_F2WC_WGAIN_Values<MDR_ADCUI::F2WC, 16, 12, ReadWriteMode, MDR_ADCUIF2WCBase> ;
    using FieldValues = MDR_ADCUI_F2WC_WGAIN_Values<MDR_ADCUI::F2WC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2WCPack  = Register<0x400680C0, 32, ReadWriteMode, MDR_ADCUIF2WCBase, T...> ;

  struct MDR_ADCUIF2WATTPBase {} ;

  struct F2WATTP : public RegisterBase<0x400680C4, 32, ReadMode>
  {
    using WATTHRP = MDR_ADCUI_F2WATTP_WATTHRP_Values<MDR_ADCUI::F2WATTP, 0, 32, ReadMode, MDR_ADCUIF2WATTPBase> ;
    using FieldValues = MDR_ADCUI_F2WATTP_WATTHRP_Values<MDR_ADCUI::F2WATTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2WATTPPack  = Register<0x400680C4, 32, ReadMode, MDR_ADCUIF2WATTPBase, T...> ;

  struct MDR_ADCUIF2WATTNBase {} ;

  struct F2WATTN : public RegisterBase<0x400680C8, 32, ReadMode>
  {
    using WATTHRN = MDR_ADCUI_F2WATTN_WATTHRN_Values<MDR_ADCUI::F2WATTN, 0, 32, ReadMode, MDR_ADCUIF2WATTNBase> ;
    using FieldValues = MDR_ADCUI_F2WATTN_WATTHRN_Values<MDR_ADCUI::F2WATTN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2WATTNPack  = Register<0x400680C8, 32, ReadMode, MDR_ADCUIF2WATTNBase, T...> ;

  struct MDR_ADCUIF2VCBase {} ;

  struct F2VC : public RegisterBase<0x400680CC, 32, ReadWriteMode>
  {
    using VAROS = MDR_ADCUI_F2VC_VAROS_Values<MDR_ADCUI::F2VC, 0, 16, ReadWriteMode, MDR_ADCUIF2VCBase> ;
    using VARGAIN = MDR_ADCUI_F2VC_VARGAIN_Values<MDR_ADCUI::F2VC, 16, 12, ReadWriteMode, MDR_ADCUIF2VCBase> ;
    using FieldValues = MDR_ADCUI_F2VC_VARGAIN_Values<MDR_ADCUI::F2VC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VCPack  = Register<0x400680CC, 32, ReadWriteMode, MDR_ADCUIF2VCBase, T...> ;

  struct MDR_ADCUIF2VARPBase {} ;

  struct F2VARP : public RegisterBase<0x400680D0, 32, ReadMode>
  {
    using VARHRP = MDR_ADCUI_F2VARP_VARHRP_Values<MDR_ADCUI::F2VARP, 0, 32, ReadMode, MDR_ADCUIF2VARPBase> ;
    using FieldValues = MDR_ADCUI_F2VARP_VARHRP_Values<MDR_ADCUI::F2VARP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VARPPack  = Register<0x400680D0, 32, ReadMode, MDR_ADCUIF2VARPBase, T...> ;

  struct MDR_ADCUIF2VARNBase {} ;

  struct F2VARN : public RegisterBase<0x400680D4, 32, ReadMode>
  {
    using VARHRN = MDR_ADCUI_F2VARN_VARHRN_Values<MDR_ADCUI::F2VARN, 0, 32, ReadMode, MDR_ADCUIF2VARNBase> ;
    using FieldValues = MDR_ADCUI_F2VARN_VARHRN_Values<MDR_ADCUI::F2VARN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VARNPack  = Register<0x400680D4, 32, ReadMode, MDR_ADCUIF2VARNBase, T...> ;

  struct MDR_ADCUIF2ACBase {} ;

  struct F2AC : public RegisterBase<0x400680D8, 32, ReadWriteMode>
  {
    using VRMSOS = MDR_ADCUI_F2AC_VRMSOS_Values<MDR_ADCUI::F2AC, 0, 12, ReadWriteMode, MDR_ADCUIF2ACBase> ;
    using VAGAIN = MDR_ADCUI_F2AC_VAGAIN_Values<MDR_ADCUI::F2AC, 16, 12, ReadWriteMode, MDR_ADCUIF2ACBase> ;
    using FieldValues = MDR_ADCUI_F2AC_VAGAIN_Values<MDR_ADCUI::F2AC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2ACPack  = Register<0x400680D8, 32, ReadWriteMode, MDR_ADCUIF2ACBase, T...> ;

  struct MDR_ADCUIF2VRBase {} ;

  struct F2VR : public RegisterBase<0x400680DC, 32, ReadMode>
  {
    using VAHR = MDR_ADCUI_F2VR_VAHR_Values<MDR_ADCUI::F2VR, 0, 32, ReadMode, MDR_ADCUIF2VRBase> ;
    using FieldValues = MDR_ADCUI_F2VR_VAHR_Values<MDR_ADCUI::F2VR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VRPack  = Register<0x400680DC, 32, ReadMode, MDR_ADCUIF2VRBase, T...> ;

  struct MDR_ADCUIF2MD0Base {} ;

  struct F2MD0 : public RegisterBase<0x400680E0, 32, ReadWriteMode>
  {
    using VSEL = MDR_ADCUI_F2MD0_VSEL_Values<MDR_ADCUI::F2MD0, 0, 2, ReadWriteMode, MDR_ADCUIF2MD0Base> ;
    using ISEL = MDR_ADCUI_F2MD0_ISEL_Values<MDR_ADCUI::F2MD0, 2, 2, ReadWriteMode, MDR_ADCUIF2MD0Base> ;
    using ACTS = MDR_ADCUI_F2MD0_ACTS_Values<MDR_ADCUI::F2MD0, 4, 1, ReadMode, MDR_ADCUIF2MD0Base> ;
    using REACTS = MDR_ADCUI_F2MD0_REACTS_Values<MDR_ADCUI::F2MD0, 5, 1, ReadWriteMode, MDR_ADCUIF2MD0Base> ;
    using IGAIN = MDR_ADCUI_F2MD0_IGAIN_Values<MDR_ADCUI::F2MD0, 6, 1, ReadWriteMode, MDR_ADCUIF2MD0Base> ;
    using VGAIN = MDR_ADCUI_F2MD0_VGAIN_Values<MDR_ADCUI::F2MD0, 7, 1, ReadWriteMode, MDR_ADCUIF2MD0Base> ;
    using PER_FREQ = MDR_ADCUI_F2MD0_PER_FREQ_Values<MDR_ADCUI::F2MD0, 12, 17, ReadMode, MDR_ADCUIF2MD0Base> ;
    using FieldValues = MDR_ADCUI_F2MD0_PER_FREQ_Values<MDR_ADCUI::F2MD0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2MD0Pack  = Register<0x400680E0, 32, ReadWriteMode, MDR_ADCUIF2MD0Base, T...> ;

  struct MDR_ADCUIF2MD1Base {} ;

  struct F2MD1 : public RegisterBase<0x400680E4, 32, ReadWriteMode>
  {
    using IPKLVL = MDR_ADCUI_F2MD1_IPKLVL_Values<MDR_ADCUI::F2MD1, 0, 16, ReadWriteMode, MDR_ADCUIF2MD1Base> ;
    using VPKLVL = MDR_ADCUI_F2MD1_VPKLVL_Values<MDR_ADCUI::F2MD1, 16, 16, ReadWriteMode, MDR_ADCUIF2MD1Base> ;
    using FieldValues = MDR_ADCUI_F2MD1_VPKLVL_Values<MDR_ADCUI::F2MD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2MD1Pack  = Register<0x400680E4, 32, ReadWriteMode, MDR_ADCUIF2MD1Base, T...> ;

  struct MDR_ADCUIF2MD2Base {} ;

  struct F2MD2 : public RegisterBase<0x400680E8, 32, ReadMode>
  {
    using PhaseV_toV0 = MDR_ADCUI_F2MD2_PhaseV_toV0_Values<MDR_ADCUI::F2MD2, 0, 17, ReadMode, MDR_ADCUIF2MD2Base> ;
    using FieldValues = MDR_ADCUI_F2MD2_PhaseV_toV0_Values<MDR_ADCUI::F2MD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2MD2Pack  = Register<0x400680E8, 32, ReadMode, MDR_ADCUIF2MD2Base, T...> ;

  struct MDR_ADCUIF2VPEAKBase {} ;

  struct F2VPEAK : public RegisterBase<0x400680EC, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F2VPEAK_IPEAK_Values<MDR_ADCUI::F2VPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF2VPEAKBase> ;
    using FieldValues = MDR_ADCUI_F2VPEAK_IPEAK_Values<MDR_ADCUI::F2VPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VPEAKPack  = Register<0x400680EC, 32, ReadWriteMode, MDR_ADCUIF2VPEAKBase, T...> ;

  struct MDR_ADCUIF2IPEAKBase {} ;

  struct F2IPEAK : public RegisterBase<0x400680F0, 32, ReadWriteMode>
  {
    using IPEAK = MDR_ADCUI_F2IPEAK_IPEAK_Values<MDR_ADCUI::F2IPEAK, 0, 24, ReadWriteMode, MDR_ADCUIF2IPEAKBase> ;
    using FieldValues = MDR_ADCUI_F2IPEAK_IPEAK_Values<MDR_ADCUI::F2IPEAK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2IPEAKPack  = Register<0x400680F0, 32, ReadWriteMode, MDR_ADCUIF2IPEAKBase, T...> ;

  struct MDR_ADCUIF2VDATBase {} ;

  struct F2VDAT : public RegisterBase<0x400680F4, 32, ReadMode>
  {
    using VDAT = MDR_ADCUI_F2VDAT_VDAT_Values<MDR_ADCUI::F2VDAT, 0, 24, ReadMode, MDR_ADCUIF2VDATBase> ;
    using FieldValues = MDR_ADCUI_F2VDAT_VDAT_Values<MDR_ADCUI::F2VDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VDATPack  = Register<0x400680F4, 32, ReadMode, MDR_ADCUIF2VDATBase, T...> ;

  struct MDR_ADCUIF2IDATBase {} ;

  struct F2IDAT : public RegisterBase<0x400680F8, 32, ReadMode>
  {
    using IDAT = MDR_ADCUI_F2IDAT_IDAT_Values<MDR_ADCUI::F2IDAT, 0, 24, ReadMode, MDR_ADCUIF2IDATBase> ;
    using FieldValues = MDR_ADCUI_F2IDAT_IDAT_Values<MDR_ADCUI::F2IDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2IDATPack  = Register<0x400680F8, 32, ReadMode, MDR_ADCUIF2IDATBase, T...> ;

  struct MDR_ADCUIF2VRMSBase {} ;

  struct F2VRMS : public RegisterBase<0x400680FC, 32, ReadMode>
  {
    using VRMS = MDR_ADCUI_F2VRMS_VRMS_Values<MDR_ADCUI::F2VRMS, 0, 24, ReadMode, MDR_ADCUIF2VRMSBase> ;
    using FieldValues = MDR_ADCUI_F2VRMS_VRMS_Values<MDR_ADCUI::F2VRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VRMSPack  = Register<0x400680FC, 32, ReadMode, MDR_ADCUIF2VRMSBase, T...> ;

  struct MDR_ADCUIF2VRMS2Base {} ;

  struct F2VRMS2 : public RegisterBase<0x40068100, 32, ReadMode>
  {
    using VRMS2 = MDR_ADCUI_F2VRMS2_VRMS2_Values<MDR_ADCUI::F2VRMS2, 0, 24, ReadMode, MDR_ADCUIF2VRMS2Base> ;
    using FieldValues = MDR_ADCUI_F2VRMS2_VRMS2_Values<MDR_ADCUI::F2VRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2VRMS2Pack  = Register<0x40068100, 32, ReadMode, MDR_ADCUIF2VRMS2Base, T...> ;

  struct MDR_ADCUIF2IRMSBase {} ;

  struct F2IRMS : public RegisterBase<0x40068104, 32, ReadMode>
  {
    using IRMS = MDR_ADCUI_F2IRMS_IRMS_Values<MDR_ADCUI::F2IRMS, 0, 24, ReadMode, MDR_ADCUIF2IRMSBase> ;
    using FieldValues = MDR_ADCUI_F2IRMS_IRMS_Values<MDR_ADCUI::F2IRMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2IRMSPack  = Register<0x40068104, 32, ReadMode, MDR_ADCUIF2IRMSBase, T...> ;

  struct MDR_ADCUIF2IRMS2Base {} ;

  struct F2IRMS2 : public RegisterBase<0x40068108, 32, ReadMode>
  {
    using IRMS2 = MDR_ADCUI_F2IRMS2_IRMS2_Values<MDR_ADCUI::F2IRMS2, 0, 24, ReadMode, MDR_ADCUIF2IRMS2Base> ;
    using FieldValues = MDR_ADCUI_F2IRMS2_IRMS2_Values<MDR_ADCUI::F2IRMS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2IRMS2Pack  = Register<0x40068108, 32, ReadMode, MDR_ADCUIF2IRMS2Base, T...> ;

  struct MDR_ADCUIF2STATBase {} ;

  struct F2STAT : public RegisterBase<0x4006810C, 32, ReadWriteMode>
  {
    using VF_EMP = MDR_ADCUI_F2STAT_VF_EMP_Values<MDR_ADCUI::F2STAT, 0, 1, ReadMode, MDR_ADCUIF2STATBase> ;
    using VF_FLL = MDR_ADCUI_F2STAT_VF_FLL_Values<MDR_ADCUI::F2STAT, 1, 1, ReadMode, MDR_ADCUIF2STATBase> ;
    using VF_OVER = MDR_ADCUI_F2STAT_VF_OVER_Values<MDR_ADCUI::F2STAT, 2, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using IF_EMP = MDR_ADCUI_F2STAT_IF_EMP_Values<MDR_ADCUI::F2STAT, 3, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using IF_FLL = MDR_ADCUI_F2STAT_IF_FLL_Values<MDR_ADCUI::F2STAT, 4, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using IF_OVER = MDR_ADCUI_F2STAT_IF_OVER_Values<MDR_ADCUI::F2STAT, 5, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using SAGF = MDR_ADCUI_F2STAT_SAGF_Values<MDR_ADCUI::F2STAT, 6, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using PEAKVF = MDR_ADCUI_F2STAT_PEAKVF_Values<MDR_ADCUI::F2STAT, 7, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using PEAKIF = MDR_ADCUI_F2STAT_PEAKIF_Values<MDR_ADCUI::F2STAT, 8, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using WATTOVP = MDR_ADCUI_F2STAT_WATTOVP_Values<MDR_ADCUI::F2STAT, 9, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VAROVP = MDR_ADCUI_F2STAT_VAROVP_Values<MDR_ADCUI::F2STAT, 10, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VAOV = MDR_ADCUI_F2STAT_VAOV_Values<MDR_ADCUI::F2STAT, 11, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using ZTXVF = MDR_ADCUI_F2STAT_ZTXVF_Values<MDR_ADCUI::F2STAT, 12, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using APSIGN = MDR_ADCUI_F2STAT_APSIGN_Values<MDR_ADCUI::F2STAT, 15, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using APNLDFL = MDR_ADCUI_F2STAT_APNLDFL_Values<MDR_ADCUI::F2STAT, 16, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VARSIGN = MDR_ADCUI_F2STAT_VARSIGN_Values<MDR_ADCUI::F2STAT, 17, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VARNLDFL = MDR_ADCUI_F2STAT_VARNLDFL_Values<MDR_ADCUI::F2STAT, 18, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VANLDFL = MDR_ADCUI_F2STAT_VANLDFL_Values<MDR_ADCUI::F2STAT, 20, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using ZEROCRS = MDR_ADCUI_F2STAT_ZEROCRS_Values<MDR_ADCUI::F2STAT, 21, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using WATTOVN = MDR_ADCUI_F2STAT_WATTOVN_Values<MDR_ADCUI::F2STAT, 25, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using VAROVN = MDR_ADCUI_F2STAT_VAROVN_Values<MDR_ADCUI::F2STAT, 26, 1, ReadWriteMode, MDR_ADCUIF2STATBase> ;
    using FieldValues = MDR_ADCUI_F2STAT_VAROVN_Values<MDR_ADCUI::F2STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2STATPack  = Register<0x4006810C, 32, ReadWriteMode, MDR_ADCUIF2STATBase, T...> ;

  struct MDR_ADCUIF2MASKBase {} ;

  struct F2MASK : public RegisterBase<0x40068110, 32, ReadWriteMode>
  {
    using VF_EMPM = MDR_ADCUI_F2MASK_VF_EMPM_Values<MDR_ADCUI::F2MASK, 0, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VF_FLLM = MDR_ADCUI_F2MASK_VF_FLLM_Values<MDR_ADCUI::F2MASK, 1, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VF_OVERM = MDR_ADCUI_F2MASK_VF_OVERM_Values<MDR_ADCUI::F2MASK, 2, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using IF_EMPM = MDR_ADCUI_F2MASK_IF_EMPM_Values<MDR_ADCUI::F2MASK, 3, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using IF_FLLM = MDR_ADCUI_F2MASK_IF_FLLM_Values<MDR_ADCUI::F2MASK, 4, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using IF_OVERM = MDR_ADCUI_F2MASK_IF_OVERM_Values<MDR_ADCUI::F2MASK, 5, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using SAGFM = MDR_ADCUI_F2MASK_SAGFM_Values<MDR_ADCUI::F2MASK, 6, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using PEAKVFM = MDR_ADCUI_F2MASK_PEAKVFM_Values<MDR_ADCUI::F2MASK, 7, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using PEAKIFM = MDR_ADCUI_F2MASK_PEAKIFM_Values<MDR_ADCUI::F2MASK, 8, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using WATTOVPM = MDR_ADCUI_F2MASK_WATTOVPM_Values<MDR_ADCUI::F2MASK, 9, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VAROVPM = MDR_ADCUI_F2MASK_VAROVPM_Values<MDR_ADCUI::F2MASK, 10, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VAOVM = MDR_ADCUI_F2MASK_VAOVM_Values<MDR_ADCUI::F2MASK, 11, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using ZTXVFM = MDR_ADCUI_F2MASK_ZTXVFM_Values<MDR_ADCUI::F2MASK, 12, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using APSIGNM = MDR_ADCUI_F2MASK_APSIGNM_Values<MDR_ADCUI::F2MASK, 15, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using APNLDFLM = MDR_ADCUI_F2MASK_APNLDFLM_Values<MDR_ADCUI::F2MASK, 16, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VARSIGNM = MDR_ADCUI_F2MASK_VARSIGNM_Values<MDR_ADCUI::F2MASK, 17, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VARNLDFLM = MDR_ADCUI_F2MASK_VARNLDFLM_Values<MDR_ADCUI::F2MASK, 18, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VANLDFLM = MDR_ADCUI_F2MASK_VANLDFLM_Values<MDR_ADCUI::F2MASK, 20, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using ZEROCRSM = MDR_ADCUI_F2MASK_ZEROCRSM_Values<MDR_ADCUI::F2MASK, 21, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using WATTOVNM = MDR_ADCUI_F2MASK_WATTOVNM_Values<MDR_ADCUI::F2MASK, 25, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using VAROVNM = MDR_ADCUI_F2MASK_VAROVNM_Values<MDR_ADCUI::F2MASK, 26, 1, ReadWriteMode, MDR_ADCUIF2MASKBase> ;
    using FieldValues = MDR_ADCUI_F2MASK_VAROVNM_Values<MDR_ADCUI::F2MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2MASKPack  = Register<0x40068110, 32, ReadWriteMode, MDR_ADCUIF2MASKBase, T...> ;

  struct MDR_ADCUICCAL1Base {} ;

  struct CCAL1 : public RegisterBase<0x40068114, 32, ReadWriteMode>
  {
    using V0BGAIN = MDR_ADCUI_CCAL1_V0BGAIN_Values<MDR_ADCUI::CCAL1, 0, 12, ReadWriteMode, MDR_ADCUICCAL1Base> ;
    using I0BGAIN = MDR_ADCUI_CCAL1_I0BGAIN_Values<MDR_ADCUI::CCAL1, 12, 12, ReadWriteMode, MDR_ADCUICCAL1Base> ;
    using FieldValues = MDR_ADCUI_CCAL1_I0BGAIN_Values<MDR_ADCUI::CCAL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCAL1Pack  = Register<0x40068114, 32, ReadWriteMode, MDR_ADCUICCAL1Base, T...> ;

  struct MDR_ADCUICCAL2Base {} ;

  struct CCAL2 : public RegisterBase<0x40068118, 32, ReadWriteMode>
  {
    using V1BGAIN = MDR_ADCUI_CCAL2_V1BGAIN_Values<MDR_ADCUI::CCAL2, 0, 12, ReadWriteMode, MDR_ADCUICCAL2Base> ;
    using I1BGAIN = MDR_ADCUI_CCAL2_I1BGAIN_Values<MDR_ADCUI::CCAL2, 12, 12, ReadWriteMode, MDR_ADCUICCAL2Base> ;
    using FieldValues = MDR_ADCUI_CCAL2_I1BGAIN_Values<MDR_ADCUI::CCAL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCAL2Pack  = Register<0x40068118, 32, ReadWriteMode, MDR_ADCUICCAL2Base, T...> ;

  struct MDR_ADCUICCAL3Base {} ;

  struct CCAL3 : public RegisterBase<0x4006811C, 32, ReadWriteMode>
  {
    using V2BGAIN = MDR_ADCUI_CCAL3_V2BGAIN_Values<MDR_ADCUI::CCAL3, 0, 12, ReadWriteMode, MDR_ADCUICCAL3Base> ;
    using I2BGAIN = MDR_ADCUI_CCAL3_I2BGAIN_Values<MDR_ADCUI::CCAL3, 12, 12, ReadWriteMode, MDR_ADCUICCAL3Base> ;
    using FieldValues = MDR_ADCUI_CCAL3_I2BGAIN_Values<MDR_ADCUI::CCAL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCAL3Pack  = Register<0x4006811C, 32, ReadWriteMode, MDR_ADCUICCAL3Base, T...> ;

  struct MDR_ADCUICCAL4Base {} ;

  struct CCAL4 : public RegisterBase<0x40068120, 32, ReadWriteMode>
  {
    using I3BGAIN = MDR_ADCUI_CCAL4_I3BGAIN_Values<MDR_ADCUI::CCAL4, 0, 12, ReadWriteMode, MDR_ADCUICCAL4Base> ;
    using FieldValues = MDR_ADCUI_CCAL4_I3BGAIN_Values<MDR_ADCUI::CCAL4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCAL4Pack  = Register<0x40068120, 32, ReadWriteMode, MDR_ADCUICCAL4Base, T...> ;

} ;

#endif //#if !defined(MDRADCUIREGISTERS_HPP)
