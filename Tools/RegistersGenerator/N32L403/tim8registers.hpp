/*******************************************************************************
* Filename      : tim8registers.hpp
*
* Details       : Advanced timer. This header file is auto-generated for N32L403
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "tim8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM8
{
  struct TIM8TIMx_CTRL1Base {} ;

  struct TIMx_CTRL1 : public RegisterBase<0x40013400, 32, ReadWriteMode>
  {
    using CNTEN = TIM8_TIMx_CTRL1_CNTEN_Values<TIM8::TIMx_CTRL1, 0, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using UPDIS = TIM8_TIMx_CTRL1_UPDIS_Values<TIM8::TIMx_CTRL1, 1, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using UPRS = TIM8_TIMx_CTRL1_UPRS_Values<TIM8::TIMx_CTRL1, 2, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using ONEPM = TIM8_TIMx_CTRL1_ONEPM_Values<TIM8::TIMx_CTRL1, 3, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using DIR = TIM8_TIMx_CTRL1_DIR_Values<TIM8::TIMx_CTRL1, 4, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using CAMSEL = TIM8_TIMx_CTRL1_CAMSEL_Values<TIM8::TIMx_CTRL1, 5, 2, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using ARPEN = TIM8_TIMx_CTRL1_ARPEN_Values<TIM8::TIMx_CTRL1, 7, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using CLKD = TIM8_TIMx_CTRL1_CLKD_Values<TIM8::TIMx_CTRL1, 8, 2, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using IOMBKPEN = TIM8_TIMx_CTRL1_IOMBKPEN_Values<TIM8::TIMx_CTRL1, 10, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using C1SEL = TIM8_TIMx_CTRL1_C1SEL_Values<TIM8::TIMx_CTRL1, 11, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using CLRSEL = TIM8_TIMx_CTRL1_CLRSEL_Values<TIM8::TIMx_CTRL1, 15, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using LBKPEN = TIM8_TIMx_CTRL1_LBKPEN_Values<TIM8::TIMx_CTRL1, 16, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using PBKPEN = TIM8_TIMx_CTRL1_PBKPEN_Values<TIM8::TIMx_CTRL1, 17, 1, ReadWriteMode, TIM8TIMx_CTRL1Base> ;
    using FieldValues = TIM8_TIMx_CTRL1_PBKPEN_Values<TIM8::TIMx_CTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL1Pack  = Register<0x40013400, 32, ReadWriteMode, TIM8TIMx_CTRL1Base, T...> ;

  struct TIM8TIMx_CTRL2Base {} ;

  struct TIMx_CTRL2 : public RegisterBase<0x40013404, 32, ReadWriteMode>
  {
    using CCPCTL = TIM8_TIMx_CTRL2_CCPCTL_Values<TIM8::TIMx_CTRL2, 0, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using CCUSEL = TIM8_TIMx_CTRL2_CCUSEL_Values<TIM8::TIMx_CTRL2, 2, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using CCDSEL = TIM8_TIMx_CTRL2_CCDSEL_Values<TIM8::TIMx_CTRL2, 3, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using MMSEL = TIM8_TIMx_CTRL2_MMSEL_Values<TIM8::TIMx_CTRL2, 4, 3, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using TI1SEL = TIM8_TIMx_CTRL2_TI1SEL_Values<TIM8::TIMx_CTRL2, 7, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI1 = TIM8_TIMx_CTRL2_OI1_Values<TIM8::TIMx_CTRL2, 8, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI1N = TIM8_TIMx_CTRL2_OI1N_Values<TIM8::TIMx_CTRL2, 9, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI2 = TIM8_TIMx_CTRL2_OI2_Values<TIM8::TIMx_CTRL2, 10, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI2N = TIM8_TIMx_CTRL2_OI2N_Values<TIM8::TIMx_CTRL2, 11, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI3 = TIM8_TIMx_CTRL2_OI3_Values<TIM8::TIMx_CTRL2, 12, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI3N = TIM8_TIMx_CTRL2_OI3N_Values<TIM8::TIMx_CTRL2, 13, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI4 = TIM8_TIMx_CTRL2_OI4_Values<TIM8::TIMx_CTRL2, 14, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI5 = TIM8_TIMx_CTRL2_OI5_Values<TIM8::TIMx_CTRL2, 16, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using OI6 = TIM8_TIMx_CTRL2_OI6_Values<TIM8::TIMx_CTRL2, 18, 1, ReadWriteMode, TIM8TIMx_CTRL2Base> ;
    using FieldValues = TIM8_TIMx_CTRL2_OI6_Values<TIM8::TIMx_CTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CTRL2Pack  = Register<0x40013404, 32, ReadWriteMode, TIM8TIMx_CTRL2Base, T...> ;

  struct TIM8TIMx_SMCTRLBase {} ;

  struct TIMx_SMCTRL : public RegisterBase<0x40013408, 32, ReadWriteMode>
  {
    using SMSEL = TIM8_TIMx_SMCTRL_SMSEL_Values<TIM8::TIMx_SMCTRL, 0, 3, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using TSEL = TIM8_TIMx_SMCTRL_TSEL_Values<TIM8::TIMx_SMCTRL, 4, 3, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using MSMD = TIM8_TIMx_SMCTRL_MSMD_Values<TIM8::TIMx_SMCTRL, 7, 1, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using EXTF = TIM8_TIMx_SMCTRL_EXTF_Values<TIM8::TIMx_SMCTRL, 8, 4, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using EXTPS = TIM8_TIMx_SMCTRL_EXTPS_Values<TIM8::TIMx_SMCTRL, 12, 2, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using EXCEN = TIM8_TIMx_SMCTRL_EXCEN_Values<TIM8::TIMx_SMCTRL, 14, 1, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using EXTP = TIM8_TIMx_SMCTRL_EXTP_Values<TIM8::TIMx_SMCTRL, 15, 1, ReadWriteMode, TIM8TIMx_SMCTRLBase> ;
    using FieldValues = TIM8_TIMx_SMCTRL_EXTP_Values<TIM8::TIMx_SMCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_SMCTRLPack  = Register<0x40013408, 32, ReadWriteMode, TIM8TIMx_SMCTRLBase, T...> ;

  struct TIM8TIMx_DINTENBase {} ;

  struct TIMx_DINTEN : public RegisterBase<0x4001340C, 32, ReadWriteMode>
  {
    using UIEN = TIM8_TIMx_DINTEN_UIEN_Values<TIM8::TIMx_DINTEN, 0, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC1IEN = TIM8_TIMx_DINTEN_CC1IEN_Values<TIM8::TIMx_DINTEN, 1, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC2IEN = TIM8_TIMx_DINTEN_CC2IEN_Values<TIM8::TIMx_DINTEN, 2, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC3IEN = TIM8_TIMx_DINTEN_CC3IEN_Values<TIM8::TIMx_DINTEN, 3, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC4IEN = TIM8_TIMx_DINTEN_CC4IEN_Values<TIM8::TIMx_DINTEN, 4, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using COMIEN = TIM8_TIMx_DINTEN_COMIEN_Values<TIM8::TIMx_DINTEN, 5, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using TIEN = TIM8_TIMx_DINTEN_TIEN_Values<TIM8::TIMx_DINTEN, 6, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using BIEN = TIM8_TIMx_DINTEN_BIEN_Values<TIM8::TIMx_DINTEN, 7, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using UDEN = TIM8_TIMx_DINTEN_UDEN_Values<TIM8::TIMx_DINTEN, 8, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC1DEN = TIM8_TIMx_DINTEN_CC1DEN_Values<TIM8::TIMx_DINTEN, 9, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC2DEN = TIM8_TIMx_DINTEN_CC2DEN_Values<TIM8::TIMx_DINTEN, 10, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC3DEN = TIM8_TIMx_DINTEN_CC3DEN_Values<TIM8::TIMx_DINTEN, 11, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using CC4DEN = TIM8_TIMx_DINTEN_CC4DEN_Values<TIM8::TIMx_DINTEN, 12, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using COMDEN = TIM8_TIMx_DINTEN_COMDEN_Values<TIM8::TIMx_DINTEN, 13, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using TDEN = TIM8_TIMx_DINTEN_TDEN_Values<TIM8::TIMx_DINTEN, 14, 1, ReadWriteMode, TIM8TIMx_DINTENBase> ;
    using FieldValues = TIM8_TIMx_DINTEN_TDEN_Values<TIM8::TIMx_DINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DINTENPack  = Register<0x4001340C, 32, ReadWriteMode, TIM8TIMx_DINTENBase, T...> ;

  struct TIM8TIMx_STSBase {} ;

  struct TIMx_STS : public RegisterBase<0x40013410, 32, ReadWriteMode>
  {
    using UDITF = TIM8_TIMx_STS_UDITF_Values<TIM8::TIMx_STS, 0, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC1ITF = TIM8_TIMx_STS_CC1ITF_Values<TIM8::TIMx_STS, 1, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC2ITF = TIM8_TIMx_STS_CC2ITF_Values<TIM8::TIMx_STS, 2, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC3ITF = TIM8_TIMx_STS_CC3ITF_Values<TIM8::TIMx_STS, 3, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC4ITF = TIM8_TIMx_STS_CC4ITF_Values<TIM8::TIMx_STS, 4, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using COMITF = TIM8_TIMx_STS_COMITF_Values<TIM8::TIMx_STS, 5, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using TITF = TIM8_TIMx_STS_TITF_Values<TIM8::TIMx_STS, 6, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using BITF = TIM8_TIMx_STS_BITF_Values<TIM8::TIMx_STS, 7, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC1OCF = TIM8_TIMx_STS_CC1OCF_Values<TIM8::TIMx_STS, 9, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC2OCF = TIM8_TIMx_STS_CC2OCF_Values<TIM8::TIMx_STS, 10, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC3OCF = TIM8_TIMx_STS_CC3OCF_Values<TIM8::TIMx_STS, 11, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC4OCF = TIM8_TIMx_STS_CC4OCF_Values<TIM8::TIMx_STS, 12, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC5ITF = TIM8_TIMx_STS_CC5ITF_Values<TIM8::TIMx_STS, 16, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using CC6ITF = TIM8_TIMx_STS_CC6ITF_Values<TIM8::TIMx_STS, 17, 1, ReadWriteMode, TIM8TIMx_STSBase> ;
    using FieldValues = TIM8_TIMx_STS_CC6ITF_Values<TIM8::TIMx_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_STSPack  = Register<0x40013410, 32, ReadWriteMode, TIM8TIMx_STSBase, T...> ;

  struct TIM8TIMx_EVTGENBase {} ;

  struct TIMx_EVTGEN : public RegisterBase<0x40013414, 32, ReadWriteMode>
  {
    using UDGN = TIM8_TIMx_EVTGEN_UDGN_Values<TIM8::TIMx_EVTGEN, 0, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using CC1GN = TIM8_TIMx_EVTGEN_CC1GN_Values<TIM8::TIMx_EVTGEN, 1, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using CC2GN = TIM8_TIMx_EVTGEN_CC2GN_Values<TIM8::TIMx_EVTGEN, 2, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using CC3GN = TIM8_TIMx_EVTGEN_CC3GN_Values<TIM8::TIMx_EVTGEN, 3, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using CC4GN = TIM8_TIMx_EVTGEN_CC4GN_Values<TIM8::TIMx_EVTGEN, 4, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using CCUDGN = TIM8_TIMx_EVTGEN_CCUDGN_Values<TIM8::TIMx_EVTGEN, 5, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using TGN = TIM8_TIMx_EVTGEN_TGN_Values<TIM8::TIMx_EVTGEN, 6, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using BGN = TIM8_TIMx_EVTGEN_BGN_Values<TIM8::TIMx_EVTGEN, 7, 1, ReadWriteMode, TIM8TIMx_EVTGENBase> ;
    using FieldValues = TIM8_TIMx_EVTGEN_BGN_Values<TIM8::TIMx_EVTGEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_EVTGENPack  = Register<0x40013414, 32, ReadWriteMode, TIM8TIMx_EVTGENBase, T...> ;

  struct TIM8TIMx_CCMOD1Base {} ;

  struct TIMx_CCMOD1 : public RegisterBase<0x40013418, 32, ReadWriteMode>
  {
    using CC1SEL = TIM8_TIMx_CCMOD1_CC1SEL_Values<TIM8::TIMx_CCMOD1, 0, 2, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC1FEN = TIM8_TIMx_CCMOD1_OC1FEN_Values<TIM8::TIMx_CCMOD1, 2, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC1PEN = TIM8_TIMx_CCMOD1_OC1PEN_Values<TIM8::TIMx_CCMOD1, 3, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC1M = TIM8_TIMx_CCMOD1_OC1M_Values<TIM8::TIMx_CCMOD1, 4, 3, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC1CEN = TIM8_TIMx_CCMOD1_OC1CEN_Values<TIM8::TIMx_CCMOD1, 7, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using CC2SEL = TIM8_TIMx_CCMOD1_CC2SEL_Values<TIM8::TIMx_CCMOD1, 8, 2, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC2FEN = TIM8_TIMx_CCMOD1_OC2FEN_Values<TIM8::TIMx_CCMOD1, 10, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC2PEN = TIM8_TIMx_CCMOD1_OC2PEN_Values<TIM8::TIMx_CCMOD1, 11, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC2M = TIM8_TIMx_CCMOD1_OC2M_Values<TIM8::TIMx_CCMOD1, 12, 3, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using OC2CEN = TIM8_TIMx_CCMOD1_OC2CEN_Values<TIM8::TIMx_CCMOD1, 15, 1, ReadWriteMode, TIM8TIMx_CCMOD1Base> ;
    using FieldValues = TIM8_TIMx_CCMOD1_OC2CEN_Values<TIM8::TIMx_CCMOD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD1Pack  = Register<0x40013418, 32, ReadWriteMode, TIM8TIMx_CCMOD1Base, T...> ;

  struct TIM8TIMx_CCMOD2Base {} ;

  struct TIMx_CCMOD2 : public RegisterBase<0x4001341C, 32, ReadWriteMode>
  {
    using CC3SEL = TIM8_TIMx_CCMOD2_CC3SEL_Values<TIM8::TIMx_CCMOD2, 0, 2, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC3FEN = TIM8_TIMx_CCMOD2_OC3FEN_Values<TIM8::TIMx_CCMOD2, 2, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC3PEN = TIM8_TIMx_CCMOD2_OC3PEN_Values<TIM8::TIMx_CCMOD2, 3, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC3M = TIM8_TIMx_CCMOD2_OC3M_Values<TIM8::TIMx_CCMOD2, 4, 3, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC3CEN = TIM8_TIMx_CCMOD2_OC3CEN_Values<TIM8::TIMx_CCMOD2, 7, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using CC4SEL = TIM8_TIMx_CCMOD2_CC4SEL_Values<TIM8::TIMx_CCMOD2, 8, 2, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC4FEN = TIM8_TIMx_CCMOD2_OC4FEN_Values<TIM8::TIMx_CCMOD2, 10, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC4PEN = TIM8_TIMx_CCMOD2_OC4PEN_Values<TIM8::TIMx_CCMOD2, 11, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC4M = TIM8_TIMx_CCMOD2_OC4M_Values<TIM8::TIMx_CCMOD2, 12, 3, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using OC4CEN = TIM8_TIMx_CCMOD2_OC4CEN_Values<TIM8::TIMx_CCMOD2, 15, 1, ReadWriteMode, TIM8TIMx_CCMOD2Base> ;
    using FieldValues = TIM8_TIMx_CCMOD2_OC4CEN_Values<TIM8::TIMx_CCMOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD2Pack  = Register<0x4001341C, 32, ReadWriteMode, TIM8TIMx_CCMOD2Base, T...> ;

  struct TIM8TIMx_CCENBase {} ;

  struct TIMx_CCEN : public RegisterBase<0x40013420, 32, ReadWriteMode>
  {
    using CC1EN = TIM8_TIMx_CCEN_CC1EN_Values<TIM8::TIMx_CCEN, 0, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC1P = TIM8_TIMx_CCEN_CC1P_Values<TIM8::TIMx_CCEN, 1, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC1NEN = TIM8_TIMx_CCEN_CC1NEN_Values<TIM8::TIMx_CCEN, 2, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC1NP = TIM8_TIMx_CCEN_CC1NP_Values<TIM8::TIMx_CCEN, 3, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC2EN = TIM8_TIMx_CCEN_CC2EN_Values<TIM8::TIMx_CCEN, 4, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC2P = TIM8_TIMx_CCEN_CC2P_Values<TIM8::TIMx_CCEN, 5, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC2NEN = TIM8_TIMx_CCEN_CC2NEN_Values<TIM8::TIMx_CCEN, 6, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC2NP = TIM8_TIMx_CCEN_CC2NP_Values<TIM8::TIMx_CCEN, 7, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC3EN = TIM8_TIMx_CCEN_CC3EN_Values<TIM8::TIMx_CCEN, 8, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC3P = TIM8_TIMx_CCEN_CC3P_Values<TIM8::TIMx_CCEN, 9, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC3NEN = TIM8_TIMx_CCEN_CC3NEN_Values<TIM8::TIMx_CCEN, 10, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC3NP = TIM8_TIMx_CCEN_CC3NP_Values<TIM8::TIMx_CCEN, 11, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC4EN = TIM8_TIMx_CCEN_CC4EN_Values<TIM8::TIMx_CCEN, 12, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC4P = TIM8_TIMx_CCEN_CC4P_Values<TIM8::TIMx_CCEN, 13, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC5EN = TIM8_TIMx_CCEN_CC5EN_Values<TIM8::TIMx_CCEN, 16, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC5P = TIM8_TIMx_CCEN_CC5P_Values<TIM8::TIMx_CCEN, 17, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC6EN = TIM8_TIMx_CCEN_CC6EN_Values<TIM8::TIMx_CCEN, 20, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using CC6P = TIM8_TIMx_CCEN_CC6P_Values<TIM8::TIMx_CCEN, 21, 1, ReadWriteMode, TIM8TIMx_CCENBase> ;
    using FieldValues = TIM8_TIMx_CCEN_CC6P_Values<TIM8::TIMx_CCEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCENPack  = Register<0x40013420, 32, ReadWriteMode, TIM8TIMx_CCENBase, T...> ;

  struct TIM8TIMx_CNTBase {} ;

  struct TIMx_CNT : public RegisterBase<0x40013424, 32, ReadWriteMode>
  {
    using CNT = TIM8_TIMx_CNT_CNT_Values<TIM8::TIMx_CNT, 0, 16, ReadWriteMode, TIM8TIMx_CNTBase> ;
    using FieldValues = TIM8_TIMx_CNT_CNT_Values<TIM8::TIMx_CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CNTPack  = Register<0x40013424, 32, ReadWriteMode, TIM8TIMx_CNTBase, T...> ;

  struct TIM8TIMx_PSCBase {} ;

  struct TIMx_PSC : public RegisterBase<0x40013428, 32, ReadWriteMode>
  {
    using PSC = TIM8_TIMx_PSC_PSC_Values<TIM8::TIMx_PSC, 0, 16, ReadWriteMode, TIM8TIMx_PSCBase> ;
    using FieldValues = TIM8_TIMx_PSC_PSC_Values<TIM8::TIMx_PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_PSCPack  = Register<0x40013428, 32, ReadWriteMode, TIM8TIMx_PSCBase, T...> ;

  struct TIM8TIMx_ARBase {} ;

  struct TIMx_AR : public RegisterBase<0x4001342C, 32, ReadWriteMode>
  {
    using AR = TIM8_TIMx_AR_AR_Values<TIM8::TIMx_AR, 0, 16, ReadWriteMode, TIM8TIMx_ARBase> ;
    using FieldValues = TIM8_TIMx_AR_AR_Values<TIM8::TIMx_AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_ARPack  = Register<0x4001342C, 32, ReadWriteMode, TIM8TIMx_ARBase, T...> ;

  struct TIM8TIMx_REPCNTBase {} ;

  struct TIMx_REPCNT : public RegisterBase<0x40013430, 32, ReadWriteMode>
  {
    using REPCNT = TIM8_TIMx_REPCNT_REPCNT_Values<TIM8::TIMx_REPCNT, 0, 8, ReadWriteMode, TIM8TIMx_REPCNTBase> ;
    using FieldValues = TIM8_TIMx_REPCNT_REPCNT_Values<TIM8::TIMx_REPCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_REPCNTPack  = Register<0x40013430, 32, ReadWriteMode, TIM8TIMx_REPCNTBase, T...> ;

  struct TIM8TIMx_CCDAT1Base {} ;

  struct TIMx_CCDAT1 : public RegisterBase<0x40013434, 32, ReadWriteMode>
  {
    using CCDAT1 = TIM8_TIMx_CCDAT1_CCDAT1_Values<TIM8::TIMx_CCDAT1, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT1Base> ;
    using FieldValues = TIM8_TIMx_CCDAT1_CCDAT1_Values<TIM8::TIMx_CCDAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT1Pack  = Register<0x40013434, 32, ReadWriteMode, TIM8TIMx_CCDAT1Base, T...> ;

  struct TIM8TIMx_CCDAT2Base {} ;

  struct TIMx_CCDAT2 : public RegisterBase<0x40013438, 32, ReadWriteMode>
  {
    using CCDAT2 = TIM8_TIMx_CCDAT2_CCDAT2_Values<TIM8::TIMx_CCDAT2, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT2Base> ;
    using FieldValues = TIM8_TIMx_CCDAT2_CCDAT2_Values<TIM8::TIMx_CCDAT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT2Pack  = Register<0x40013438, 32, ReadWriteMode, TIM8TIMx_CCDAT2Base, T...> ;

  struct TIM8TIMx_CCDAT3Base {} ;

  struct TIMx_CCDAT3 : public RegisterBase<0x4001343C, 32, ReadWriteMode>
  {
    using CCDAT3 = TIM8_TIMx_CCDAT3_CCDAT3_Values<TIM8::TIMx_CCDAT3, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT3Base> ;
    using FieldValues = TIM8_TIMx_CCDAT3_CCDAT3_Values<TIM8::TIMx_CCDAT3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT3Pack  = Register<0x4001343C, 32, ReadWriteMode, TIM8TIMx_CCDAT3Base, T...> ;

  struct TIM8TIMx_CCDAT4Base {} ;

  struct TIMx_CCDAT4 : public RegisterBase<0x40013440, 32, ReadWriteMode>
  {
    using CCDAT4 = TIM8_TIMx_CCDAT4_CCDAT4_Values<TIM8::TIMx_CCDAT4, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT4Base> ;
    using FieldValues = TIM8_TIMx_CCDAT4_CCDAT4_Values<TIM8::TIMx_CCDAT4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT4Pack  = Register<0x40013440, 32, ReadWriteMode, TIM8TIMx_CCDAT4Base, T...> ;

  struct TIM8TIMx_BKDTBase {} ;

  struct TIMx_BKDT : public RegisterBase<0x40013444, 32, ReadWriteMode>
  {
    using DTGN = TIM8_TIMx_BKDT_DTGN_Values<TIM8::TIMx_BKDT, 0, 8, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using LCKCFG = TIM8_TIMx_BKDT_LCKCFG_Values<TIM8::TIMx_BKDT, 8, 2, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using OSSI = TIM8_TIMx_BKDT_OSSI_Values<TIM8::TIMx_BKDT, 10, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using OSSR = TIM8_TIMx_BKDT_OSSR_Values<TIM8::TIMx_BKDT, 11, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using BKEN = TIM8_TIMx_BKDT_BKEN_Values<TIM8::TIMx_BKDT, 12, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using BKP = TIM8_TIMx_BKDT_BKP_Values<TIM8::TIMx_BKDT, 13, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using AOEN = TIM8_TIMx_BKDT_AOEN_Values<TIM8::TIMx_BKDT, 14, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using MOEN = TIM8_TIMx_BKDT_MOEN_Values<TIM8::TIMx_BKDT, 15, 1, ReadWriteMode, TIM8TIMx_BKDTBase> ;
    using FieldValues = TIM8_TIMx_BKDT_MOEN_Values<TIM8::TIMx_BKDT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_BKDTPack  = Register<0x40013444, 32, ReadWriteMode, TIM8TIMx_BKDTBase, T...> ;

  struct TIM8TIMx_DCTRLBase {} ;

  struct TIMx_DCTRL : public RegisterBase<0x40013448, 32, ReadWriteMode>
  {
    using DBADDR = TIM8_TIMx_DCTRL_DBADDR_Values<TIM8::TIMx_DCTRL, 0, 5, ReadWriteMode, TIM8TIMx_DCTRLBase> ;
    using DBLEN = TIM8_TIMx_DCTRL_DBLEN_Values<TIM8::TIMx_DCTRL, 8, 5, ReadWriteMode, TIM8TIMx_DCTRLBase> ;
    using FieldValues = TIM8_TIMx_DCTRL_DBLEN_Values<TIM8::TIMx_DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DCTRLPack  = Register<0x40013448, 32, ReadWriteMode, TIM8TIMx_DCTRLBase, T...> ;

  struct TIM8TIMx_DADDRBase {} ;

  struct TIMx_DADDR : public RegisterBase<0x4001344C, 32, ReadWriteMode>
  {
    using BURST = TIM8_TIMx_DADDR_BURST_Values<TIM8::TIMx_DADDR, 0, 16, ReadWriteMode, TIM8TIMx_DADDRBase> ;
    using FieldValues = TIM8_TIMx_DADDR_BURST_Values<TIM8::TIMx_DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_DADDRPack  = Register<0x4001344C, 32, ReadWriteMode, TIM8TIMx_DADDRBase, T...> ;

  struct TIM8TIMx_CCMOD3Base {} ;

  struct TIMx_CCMOD3 : public RegisterBase<0x40013454, 32, ReadWriteMode>
  {
    using OC5FEN = TIM8_TIMx_CCMOD3_OC5FEN_Values<TIM8::TIMx_CCMOD3, 2, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC5PEN = TIM8_TIMx_CCMOD3_OC5PEN_Values<TIM8::TIMx_CCMOD3, 3, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC5MD = TIM8_TIMx_CCMOD3_OC5MD_Values<TIM8::TIMx_CCMOD3, 4, 3, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC5CEN = TIM8_TIMx_CCMOD3_OC5CEN_Values<TIM8::TIMx_CCMOD3, 7, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC6FEN = TIM8_TIMx_CCMOD3_OC6FEN_Values<TIM8::TIMx_CCMOD3, 10, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC6PEN = TIM8_TIMx_CCMOD3_OC6PEN_Values<TIM8::TIMx_CCMOD3, 11, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC6MD = TIM8_TIMx_CCMOD3_OC6MD_Values<TIM8::TIMx_CCMOD3, 12, 3, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using OC6CEN = TIM8_TIMx_CCMOD3_OC6CEN_Values<TIM8::TIMx_CCMOD3, 15, 1, ReadWriteMode, TIM8TIMx_CCMOD3Base> ;
    using FieldValues = TIM8_TIMx_CCMOD3_OC6CEN_Values<TIM8::TIMx_CCMOD3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCMOD3Pack  = Register<0x40013454, 32, ReadWriteMode, TIM8TIMx_CCMOD3Base, T...> ;

  struct TIM8TIMx_CCDAT5Base {} ;

  struct TIMx_CCDAT5 : public RegisterBase<0x40013458, 32, ReadWriteMode>
  {
    using CCDAT5 = TIM8_TIMx_CCDAT5_CCDAT5_Values<TIM8::TIMx_CCDAT5, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT5Base> ;
    using FieldValues = TIM8_TIMx_CCDAT5_CCDAT5_Values<TIM8::TIMx_CCDAT5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT5Pack  = Register<0x40013458, 32, ReadWriteMode, TIM8TIMx_CCDAT5Base, T...> ;

  struct TIM8TIMx_CCDAT6Base {} ;

  struct TIMx_CCDAT6 : public RegisterBase<0x4001345C, 32, ReadWriteMode>
  {
    using CCDAT6 = TIM8_TIMx_CCDAT6_CCDAT6_Values<TIM8::TIMx_CCDAT6, 0, 16, ReadWriteMode, TIM8TIMx_CCDAT6Base> ;
    using FieldValues = TIM8_TIMx_CCDAT6_CCDAT6_Values<TIM8::TIMx_CCDAT6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TIMx_CCDAT6Pack  = Register<0x4001345C, 32, ReadWriteMode, TIM8TIMx_CCDAT6Base, T...> ;

} ;

