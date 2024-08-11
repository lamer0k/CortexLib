/*******************************************************************************
* Filename      : tim2registers.hpp
*
* Details       : General purpose timer. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "tim2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM2
{
  struct TIM2TIMx_CTRL1Base {} ;

  struct TIMx_CTRL1 : public RegisterBase<0x40000000, 32, ReadWriteMode>
  {
    using CNTEN = TIM2_TIMx_CTRL1_CNTEN_Values<TIM2::TIMx_CTRL1, 0, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using UPDIS = TIM2_TIMx_CTRL1_UPDIS_Values<TIM2::TIMx_CTRL1, 1, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using UPRS = TIM2_TIMx_CTRL1_UPRS_Values<TIM2::TIMx_CTRL1, 2, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using ONEPM = TIM2_TIMx_CTRL1_ONEPM_Values<TIM2::TIMx_CTRL1, 3, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using DIR = TIM2_TIMx_CTRL1_DIR_Values<TIM2::TIMx_CTRL1, 4, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using CAMSEL = TIM2_TIMx_CTRL1_CAMSEL_Values<TIM2::TIMx_CTRL1, 5, 2, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using ARPEN = TIM2_TIMx_CTRL1_ARPEN_Values<TIM2::TIMx_CTRL1, 7, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using CLKD = TIM2_TIMx_CTRL1_CLKD_Values<TIM2::TIMx_CTRL1, 8, 2, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using C1SEL = TIM2_TIMx_CTRL1_C1SEL_Values<TIM2::TIMx_CTRL1, 11, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using CLRSEL = TIM2_TIMx_CTRL1_CLRSEL_Values<TIM2::TIMx_CTRL1, 15, 1, ReadWriteMode, TIM2TIMx_CTRL1Base> ;
    using FieldValues = TIM2_TIMx_CTRL1_CLRSEL_Values<TIM2::TIMx_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL1Pack  = Register<0x40000000, 32, ReadWriteMode, TIM2TIMx_CTRL1Base, T...> ;

  struct TIM2TIMx_CTRL2Base {} ;

  struct TIMx_CTRL2 : public RegisterBase<0x40000004, 32, ReadWriteMode>
  {
    using CCDSEL = TIM2_TIMx_CTRL2_CCDSEL_Values<TIM2::TIMx_CTRL2, 3, 1, ReadWriteMode, TIM2TIMx_CTRL2Base> ;
    using MMSEL = TIM2_TIMx_CTRL2_MMSEL_Values<TIM2::TIMx_CTRL2, 4, 3, ReadWriteMode, TIM2TIMx_CTRL2Base> ;
    using TI1SEL = TIM2_TIMx_CTRL2_TI1SEL_Values<TIM2::TIMx_CTRL2, 7, 1, ReadWriteMode, TIM2TIMx_CTRL2Base> ;
    using ETRSEL = TIM2_TIMx_CTRL2_ETRSEL_Values<TIM2::TIMx_CTRL2, 8, 1, ReadWriteMode, TIM2TIMx_CTRL2Base> ;
    using FieldValues = TIM2_TIMx_CTRL2_ETRSEL_Values<TIM2::TIMx_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL2Pack  = Register<0x40000004, 32, ReadWriteMode, TIM2TIMx_CTRL2Base, T...> ;

  struct TIM2TIMx_SMCTRLBase {} ;

  struct TIMx_SMCTRL : public RegisterBase<0x40000008, 32, ReadWriteMode>
  {
    using SMSEL = TIM2_TIMx_SMCTRL_SMSEL_Values<TIM2::TIMx_SMCTRL, 0, 3, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using TSEL = TIM2_TIMx_SMCTRL_TSEL_Values<TIM2::TIMx_SMCTRL, 4, 3, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using MSMD = TIM2_TIMx_SMCTRL_MSMD_Values<TIM2::TIMx_SMCTRL, 7, 1, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using EXTF = TIM2_TIMx_SMCTRL_EXTF_Values<TIM2::TIMx_SMCTRL, 8, 4, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using EXTPS = TIM2_TIMx_SMCTRL_EXTPS_Values<TIM2::TIMx_SMCTRL, 12, 2, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using EXCEN = TIM2_TIMx_SMCTRL_EXCEN_Values<TIM2::TIMx_SMCTRL, 14, 1, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using EXTP = TIM2_TIMx_SMCTRL_EXTP_Values<TIM2::TIMx_SMCTRL, 15, 1, ReadWriteMode, TIM2TIMx_SMCTRLBase> ;
    using FieldValues = TIM2_TIMx_SMCTRL_EXTP_Values<TIM2::TIMx_SMCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_SMCTRLPack  = Register<0x40000008, 32, ReadWriteMode, TIM2TIMx_SMCTRLBase, T...> ;

  struct TIM2TIMx_DINTENBase {} ;

  struct TIMx_DINTEN : public RegisterBase<0x4000000C, 32, ReadWriteMode>
  {
    using UIEN = TIM2_TIMx_DINTEN_UIEN_Values<TIM2::TIMx_DINTEN, 0, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC1IEN = TIM2_TIMx_DINTEN_CC1IEN_Values<TIM2::TIMx_DINTEN, 1, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC2IEN = TIM2_TIMx_DINTEN_CC2IEN_Values<TIM2::TIMx_DINTEN, 2, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC3IEN = TIM2_TIMx_DINTEN_CC3IEN_Values<TIM2::TIMx_DINTEN, 3, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC4IEN = TIM2_TIMx_DINTEN_CC4IEN_Values<TIM2::TIMx_DINTEN, 4, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using COMIEN = TIM2_TIMx_DINTEN_COMIEN_Values<TIM2::TIMx_DINTEN, 5, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using TIEN = TIM2_TIMx_DINTEN_TIEN_Values<TIM2::TIMx_DINTEN, 6, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using BIEN = TIM2_TIMx_DINTEN_BIEN_Values<TIM2::TIMx_DINTEN, 7, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using UDEN = TIM2_TIMx_DINTEN_UDEN_Values<TIM2::TIMx_DINTEN, 8, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC1DEN = TIM2_TIMx_DINTEN_CC1DEN_Values<TIM2::TIMx_DINTEN, 9, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC2DEN = TIM2_TIMx_DINTEN_CC2DEN_Values<TIM2::TIMx_DINTEN, 10, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC3DEN = TIM2_TIMx_DINTEN_CC3DEN_Values<TIM2::TIMx_DINTEN, 11, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using CC4DEN = TIM2_TIMx_DINTEN_CC4DEN_Values<TIM2::TIMx_DINTEN, 12, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using COMDEN = TIM2_TIMx_DINTEN_COMDEN_Values<TIM2::TIMx_DINTEN, 13, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using TDEN = TIM2_TIMx_DINTEN_TDEN_Values<TIM2::TIMx_DINTEN, 14, 1, ReadWriteMode, TIM2TIMx_DINTENBase> ;
    using FieldValues = TIM2_TIMx_DINTEN_TDEN_Values<TIM2::TIMx_DINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DINTENPack  = Register<0x4000000C, 32, ReadWriteMode, TIM2TIMx_DINTENBase, T...> ;

  struct TIM2TIMx_STSBase {} ;

  struct TIMx_STS : public RegisterBase<0x40000010, 32, ReadWriteMode>
  {
    using UDITF = TIM2_TIMx_STS_UDITF_Values<TIM2::TIMx_STS, 0, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC1ITF = TIM2_TIMx_STS_CC1ITF_Values<TIM2::TIMx_STS, 1, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC2ITF = TIM2_TIMx_STS_CC2ITF_Values<TIM2::TIMx_STS, 2, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC3ITF = TIM2_TIMx_STS_CC3ITF_Values<TIM2::TIMx_STS, 3, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC4ITF = TIM2_TIMx_STS_CC4ITF_Values<TIM2::TIMx_STS, 4, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using COMITF = TIM2_TIMx_STS_COMITF_Values<TIM2::TIMx_STS, 5, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using TITF = TIM2_TIMx_STS_TITF_Values<TIM2::TIMx_STS, 6, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using BITF = TIM2_TIMx_STS_BITF_Values<TIM2::TIMx_STS, 7, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC1OCF = TIM2_TIMx_STS_CC1OCF_Values<TIM2::TIMx_STS, 9, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC2OCF = TIM2_TIMx_STS_CC2OCF_Values<TIM2::TIMx_STS, 10, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC3OCF = TIM2_TIMx_STS_CC3OCF_Values<TIM2::TIMx_STS, 11, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC4OCF = TIM2_TIMx_STS_CC4OCF_Values<TIM2::TIMx_STS, 12, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC5ITF = TIM2_TIMx_STS_CC5ITF_Values<TIM2::TIMx_STS, 16, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using CC6ITF = TIM2_TIMx_STS_CC6ITF_Values<TIM2::TIMx_STS, 17, 1, ReadWriteMode, TIM2TIMx_STSBase> ;
    using FieldValues = TIM2_TIMx_STS_CC6ITF_Values<TIM2::TIMx_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_STSPack  = Register<0x40000010, 32, ReadWriteMode, TIM2TIMx_STSBase, T...> ;

  struct TIM2TIMx_EVTGENBase {} ;

  struct TIMx_EVTGEN : public RegisterBase<0x40000014, 32, ReadWriteMode>
  {
    using UDGN = TIM2_TIMx_EVTGEN_UDGN_Values<TIM2::TIMx_EVTGEN, 0, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using CC1GN = TIM2_TIMx_EVTGEN_CC1GN_Values<TIM2::TIMx_EVTGEN, 1, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using CC2GN = TIM2_TIMx_EVTGEN_CC2GN_Values<TIM2::TIMx_EVTGEN, 2, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using CC3GN = TIM2_TIMx_EVTGEN_CC3GN_Values<TIM2::TIMx_EVTGEN, 3, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using CC4GN = TIM2_TIMx_EVTGEN_CC4GN_Values<TIM2::TIMx_EVTGEN, 4, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using CCUDGN = TIM2_TIMx_EVTGEN_CCUDGN_Values<TIM2::TIMx_EVTGEN, 5, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using TGN = TIM2_TIMx_EVTGEN_TGN_Values<TIM2::TIMx_EVTGEN, 6, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using BGN = TIM2_TIMx_EVTGEN_BGN_Values<TIM2::TIMx_EVTGEN, 7, 1, ReadWriteMode, TIM2TIMx_EVTGENBase> ;
    using FieldValues = TIM2_TIMx_EVTGEN_BGN_Values<TIM2::TIMx_EVTGEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_EVTGENPack  = Register<0x40000014, 32, ReadWriteMode, TIM2TIMx_EVTGENBase, T...> ;

  struct TIM2TIMx_CCMOD1Base {} ;

  struct TIMx_CCMOD1 : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using CC1SEL = TIM2_TIMx_CCMOD1_CC1SEL_Values<TIM2::TIMx_CCMOD1, 0, 2, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC1FEN = TIM2_TIMx_CCMOD1_OC1FEN_Values<TIM2::TIMx_CCMOD1, 2, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC1PEN = TIM2_TIMx_CCMOD1_OC1PEN_Values<TIM2::TIMx_CCMOD1, 3, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC1M = TIM2_TIMx_CCMOD1_OC1M_Values<TIM2::TIMx_CCMOD1, 4, 3, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC1CEN = TIM2_TIMx_CCMOD1_OC1CEN_Values<TIM2::TIMx_CCMOD1, 7, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using CC2SEL = TIM2_TIMx_CCMOD1_CC2SEL_Values<TIM2::TIMx_CCMOD1, 8, 2, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC2FEN = TIM2_TIMx_CCMOD1_OC2FEN_Values<TIM2::TIMx_CCMOD1, 10, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC2PEN = TIM2_TIMx_CCMOD1_OC2PEN_Values<TIM2::TIMx_CCMOD1, 11, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC2M = TIM2_TIMx_CCMOD1_OC2M_Values<TIM2::TIMx_CCMOD1, 12, 3, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using OC2CEN = TIM2_TIMx_CCMOD1_OC2CEN_Values<TIM2::TIMx_CCMOD1, 15, 1, ReadWriteMode, TIM2TIMx_CCMOD1Base> ;
    using FieldValues = TIM2_TIMx_CCMOD1_OC2CEN_Values<TIM2::TIMx_CCMOD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD1Pack  = Register<0x40000018, 32, ReadWriteMode, TIM2TIMx_CCMOD1Base, T...> ;

  struct TIM2TIMx_CCMOD2Base {} ;

  struct TIMx_CCMOD2 : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using CC3SEL = TIM2_TIMx_CCMOD2_CC3SEL_Values<TIM2::TIMx_CCMOD2, 0, 2, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC3FEN = TIM2_TIMx_CCMOD2_OC3FEN_Values<TIM2::TIMx_CCMOD2, 2, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC3PEN = TIM2_TIMx_CCMOD2_OC3PEN_Values<TIM2::TIMx_CCMOD2, 3, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC3M = TIM2_TIMx_CCMOD2_OC3M_Values<TIM2::TIMx_CCMOD2, 4, 3, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC3CEN = TIM2_TIMx_CCMOD2_OC3CEN_Values<TIM2::TIMx_CCMOD2, 7, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using CC4SEL = TIM2_TIMx_CCMOD2_CC4SEL_Values<TIM2::TIMx_CCMOD2, 8, 2, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC4FEN = TIM2_TIMx_CCMOD2_OC4FEN_Values<TIM2::TIMx_CCMOD2, 10, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC4PEN = TIM2_TIMx_CCMOD2_OC4PEN_Values<TIM2::TIMx_CCMOD2, 11, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC4M = TIM2_TIMx_CCMOD2_OC4M_Values<TIM2::TIMx_CCMOD2, 12, 3, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using OC4CEN = TIM2_TIMx_CCMOD2_OC4CEN_Values<TIM2::TIMx_CCMOD2, 15, 1, ReadWriteMode, TIM2TIMx_CCMOD2Base> ;
    using FieldValues = TIM2_TIMx_CCMOD2_OC4CEN_Values<TIM2::TIMx_CCMOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD2Pack  = Register<0x4000001C, 32, ReadWriteMode, TIM2TIMx_CCMOD2Base, T...> ;

  struct TIM2TIMx_CCENBase {} ;

  struct TIMx_CCEN : public RegisterBase<0x40000020, 32, ReadWriteMode>
  {
    using CC1EN = TIM2_TIMx_CCEN_CC1EN_Values<TIM2::TIMx_CCEN, 0, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC1P = TIM2_TIMx_CCEN_CC1P_Values<TIM2::TIMx_CCEN, 1, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC1NEN = TIM2_TIMx_CCEN_CC1NEN_Values<TIM2::TIMx_CCEN, 2, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC1NP = TIM2_TIMx_CCEN_CC1NP_Values<TIM2::TIMx_CCEN, 3, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC2EN = TIM2_TIMx_CCEN_CC2EN_Values<TIM2::TIMx_CCEN, 4, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC2P = TIM2_TIMx_CCEN_CC2P_Values<TIM2::TIMx_CCEN, 5, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC2NEN = TIM2_TIMx_CCEN_CC2NEN_Values<TIM2::TIMx_CCEN, 6, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC2NP = TIM2_TIMx_CCEN_CC2NP_Values<TIM2::TIMx_CCEN, 7, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC3EN = TIM2_TIMx_CCEN_CC3EN_Values<TIM2::TIMx_CCEN, 8, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC3P = TIM2_TIMx_CCEN_CC3P_Values<TIM2::TIMx_CCEN, 9, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC3NEN = TIM2_TIMx_CCEN_CC3NEN_Values<TIM2::TIMx_CCEN, 10, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC3NP = TIM2_TIMx_CCEN_CC3NP_Values<TIM2::TIMx_CCEN, 11, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC4EN = TIM2_TIMx_CCEN_CC4EN_Values<TIM2::TIMx_CCEN, 12, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC4P = TIM2_TIMx_CCEN_CC4P_Values<TIM2::TIMx_CCEN, 13, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC5EN = TIM2_TIMx_CCEN_CC5EN_Values<TIM2::TIMx_CCEN, 16, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC5P = TIM2_TIMx_CCEN_CC5P_Values<TIM2::TIMx_CCEN, 17, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC6EN = TIM2_TIMx_CCEN_CC6EN_Values<TIM2::TIMx_CCEN, 20, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using CC6P = TIM2_TIMx_CCEN_CC6P_Values<TIM2::TIMx_CCEN, 21, 1, ReadWriteMode, TIM2TIMx_CCENBase> ;
    using FieldValues = TIM2_TIMx_CCEN_CC6P_Values<TIM2::TIMx_CCEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCENPack  = Register<0x40000020, 32, ReadWriteMode, TIM2TIMx_CCENBase, T...> ;

  struct TIM2TIMx_CNTBase {} ;

  struct TIMx_CNT : public RegisterBase<0x40000024, 32, ReadWriteMode>
  {
    using CNT = TIM2_TIMx_CNT_CNT_Values<TIM2::TIMx_CNT, 0, 16, ReadWriteMode, TIM2TIMx_CNTBase> ;
    using FieldValues = TIM2_TIMx_CNT_CNT_Values<TIM2::TIMx_CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CNTPack  = Register<0x40000024, 32, ReadWriteMode, TIM2TIMx_CNTBase, T...> ;

  struct TIM2TIMx_PSCBase {} ;

  struct TIMx_PSC : public RegisterBase<0x40000028, 32, ReadWriteMode>
  {
    using PSC = TIM2_TIMx_PSC_PSC_Values<TIM2::TIMx_PSC, 0, 16, ReadWriteMode, TIM2TIMx_PSCBase> ;
    using FieldValues = TIM2_TIMx_PSC_PSC_Values<TIM2::TIMx_PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_PSCPack  = Register<0x40000028, 32, ReadWriteMode, TIM2TIMx_PSCBase, T...> ;

  struct TIM2TIMx_ARBase {} ;

  struct TIMx_AR : public RegisterBase<0x4000002C, 32, ReadWriteMode>
  {
    using AR = TIM2_TIMx_AR_AR_Values<TIM2::TIMx_AR, 0, 16, ReadWriteMode, TIM2TIMx_ARBase> ;
    using FieldValues = TIM2_TIMx_AR_AR_Values<TIM2::TIMx_AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_ARPack  = Register<0x4000002C, 32, ReadWriteMode, TIM2TIMx_ARBase, T...> ;

  struct TIM2TIMx_REPCNTBase {} ;

  struct TIMx_REPCNT : public RegisterBase<0x40000030, 32, ReadWriteMode>
  {
    using REPCNT = TIM2_TIMx_REPCNT_REPCNT_Values<TIM2::TIMx_REPCNT, 0, 8, ReadWriteMode, TIM2TIMx_REPCNTBase> ;
    using FieldValues = TIM2_TIMx_REPCNT_REPCNT_Values<TIM2::TIMx_REPCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_REPCNTPack  = Register<0x40000030, 32, ReadWriteMode, TIM2TIMx_REPCNTBase, T...> ;

  struct TIM2TIMx_CCDAT1Base {} ;

  struct TIMx_CCDAT1 : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    using CCDAT1 = TIM2_TIMx_CCDAT1_CCDAT1_Values<TIM2::TIMx_CCDAT1, 0, 16, ReadWriteMode, TIM2TIMx_CCDAT1Base> ;
    using FieldValues = TIM2_TIMx_CCDAT1_CCDAT1_Values<TIM2::TIMx_CCDAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT1Pack  = Register<0x40000034, 32, ReadWriteMode, TIM2TIMx_CCDAT1Base, T...> ;

  struct TIM2TIMx_CCDAT2Base {} ;

  struct TIMx_CCDAT2 : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    using CCDAT2 = TIM2_TIMx_CCDAT2_CCDAT2_Values<TIM2::TIMx_CCDAT2, 0, 16, ReadWriteMode, TIM2TIMx_CCDAT2Base> ;
    using FieldValues = TIM2_TIMx_CCDAT2_CCDAT2_Values<TIM2::TIMx_CCDAT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT2Pack  = Register<0x40000038, 32, ReadWriteMode, TIM2TIMx_CCDAT2Base, T...> ;

  struct TIM2TIMx_CCDAT3Base {} ;

  struct TIMx_CCDAT3 : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    using CCDAT3 = TIM2_TIMx_CCDAT3_CCDAT3_Values<TIM2::TIMx_CCDAT3, 0, 16, ReadWriteMode, TIM2TIMx_CCDAT3Base> ;
    using FieldValues = TIM2_TIMx_CCDAT3_CCDAT3_Values<TIM2::TIMx_CCDAT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT3Pack  = Register<0x4000003C, 32, ReadWriteMode, TIM2TIMx_CCDAT3Base, T...> ;

  struct TIM2TIMx_CCDAT4Base {} ;

  struct TIMx_CCDAT4 : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    using CCDAT4 = TIM2_TIMx_CCDAT4_CCDAT4_Values<TIM2::TIMx_CCDAT4, 0, 16, ReadWriteMode, TIM2TIMx_CCDAT4Base> ;
    using FieldValues = TIM2_TIMx_CCDAT4_CCDAT4_Values<TIM2::TIMx_CCDAT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT4Pack  = Register<0x40000040, 32, ReadWriteMode, TIM2TIMx_CCDAT4Base, T...> ;

  struct TIM2TIMx_BKDTBase {} ;

  struct TIMx_BKDT : public RegisterBase<0x40000044, 32, ReadWriteMode>
  {
    using DTGN = TIM2_TIMx_BKDT_DTGN_Values<TIM2::TIMx_BKDT, 0, 8, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using LCKCFG = TIM2_TIMx_BKDT_LCKCFG_Values<TIM2::TIMx_BKDT, 8, 2, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using OSSI = TIM2_TIMx_BKDT_OSSI_Values<TIM2::TIMx_BKDT, 10, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using OSSR = TIM2_TIMx_BKDT_OSSR_Values<TIM2::TIMx_BKDT, 11, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using BKEN = TIM2_TIMx_BKDT_BKEN_Values<TIM2::TIMx_BKDT, 12, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using BKP = TIM2_TIMx_BKDT_BKP_Values<TIM2::TIMx_BKDT, 13, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using AOEN = TIM2_TIMx_BKDT_AOEN_Values<TIM2::TIMx_BKDT, 14, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using MOEN = TIM2_TIMx_BKDT_MOEN_Values<TIM2::TIMx_BKDT, 15, 1, ReadWriteMode, TIM2TIMx_BKDTBase> ;
    using FieldValues = TIM2_TIMx_BKDT_MOEN_Values<TIM2::TIMx_BKDT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_BKDTPack  = Register<0x40000044, 32, ReadWriteMode, TIM2TIMx_BKDTBase, T...> ;

  struct TIM2TIMx_DCTRLBase {} ;

  struct TIMx_DCTRL : public RegisterBase<0x40000048, 32, ReadWriteMode>
  {
    using DBADDR = TIM2_TIMx_DCTRL_DBADDR_Values<TIM2::TIMx_DCTRL, 0, 5, ReadWriteMode, TIM2TIMx_DCTRLBase> ;
    using DBLEN = TIM2_TIMx_DCTRL_DBLEN_Values<TIM2::TIMx_DCTRL, 8, 5, ReadWriteMode, TIM2TIMx_DCTRLBase> ;
    using FieldValues = TIM2_TIMx_DCTRL_DBLEN_Values<TIM2::TIMx_DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DCTRLPack  = Register<0x40000048, 32, ReadWriteMode, TIM2TIMx_DCTRLBase, T...> ;

  struct TIM2TIMx_DADDRBase {} ;

  struct TIMx_DADDR : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using BURST = TIM2_TIMx_DADDR_BURST_Values<TIM2::TIMx_DADDR, 0, 16, ReadWriteMode, TIM2TIMx_DADDRBase> ;
    using FieldValues = TIM2_TIMx_DADDR_BURST_Values<TIM2::TIMx_DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DADDRPack  = Register<0x4000004C, 32, ReadWriteMode, TIM2TIMx_DADDRBase, T...> ;

  struct TIM2TIMx_CCMOD3Base {} ;

  struct TIMx_CCMOD3 : public RegisterBase<0x40000050, 32, ReadWriteMode>
  {
    using OC5FEN = TIM2_TIMx_CCMOD3_OC5FEN_Values<TIM2::TIMx_CCMOD3, 2, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC5PEN = TIM2_TIMx_CCMOD3_OC5PEN_Values<TIM2::TIMx_CCMOD3, 3, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC5MD = TIM2_TIMx_CCMOD3_OC5MD_Values<TIM2::TIMx_CCMOD3, 4, 3, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC5CEN = TIM2_TIMx_CCMOD3_OC5CEN_Values<TIM2::TIMx_CCMOD3, 7, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC6FEN = TIM2_TIMx_CCMOD3_OC6FEN_Values<TIM2::TIMx_CCMOD3, 10, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC6PEN = TIM2_TIMx_CCMOD3_OC6PEN_Values<TIM2::TIMx_CCMOD3, 11, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC6MD = TIM2_TIMx_CCMOD3_OC6MD_Values<TIM2::TIMx_CCMOD3, 12, 3, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using OC6CEN = TIM2_TIMx_CCMOD3_OC6CEN_Values<TIM2::TIMx_CCMOD3, 15, 1, ReadWriteMode, TIM2TIMx_CCMOD3Base> ;
    using FieldValues = TIM2_TIMx_CCMOD3_OC6CEN_Values<TIM2::TIMx_CCMOD3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD3Pack  = Register<0x40000050, 32, ReadWriteMode, TIM2TIMx_CCMOD3Base, T...> ;

  struct TIM2TIMx_CCDAT6Base {} ;

  struct TIMx_CCDAT6 : public RegisterBase<0x40000058, 32, ReadWriteMode>
  {
    using CCDAT6 = TIM2_TIMx_CCDAT6_CCDAT6_Values<TIM2::TIMx_CCDAT6, 0, 16, ReadWriteMode, TIM2TIMx_CCDAT6Base> ;
    using FieldValues = TIM2_TIMx_CCDAT6_CCDAT6_Values<TIM2::TIMx_CCDAT6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT6Pack  = Register<0x40000058, 32, ReadWriteMode, TIM2TIMx_CCDAT6Base, T...> ;

} ;

