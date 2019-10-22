/*******************************************************************************
* Filename      : mdrtimer1registers.hpp
*
* Details       : TIMER Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRTIMER1REGISTERS_HPP)
#define MDRTIMER1REGISTERS_HPP

#include "mdrtimer1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_TIMER1
{
  struct MDR_TIMER1CNTBase {} ;

  struct CNT : public RegisterBase<0x40070000, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER1_CNT_Value_Values<MDR_TIMER1::CNT, 0, 16, ReadWriteMode, MDR_TIMER1CNTBase> ;
    using FieldValues = MDR_TIMER1_CNT_Value_Values<MDR_TIMER1::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40070000, 32, ReadWriteMode, MDR_TIMER1CNTBase, T...> ;

  struct MDR_TIMER1PSGBase {} ;

  struct PSG : public RegisterBase<0x40070004, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER1_PSG_Value_Values<MDR_TIMER1::PSG, 0, 16, ReadWriteMode, MDR_TIMER1PSGBase> ;
    using FieldValues = MDR_TIMER1_PSG_Value_Values<MDR_TIMER1::PSG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSGPack  = Register<0x40070004, 32, ReadWriteMode, MDR_TIMER1PSGBase, T...> ;

  struct MDR_TIMER1ARRBase {} ;

  struct ARR : public RegisterBase<0x40070008, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER1_ARR_Value_Values<MDR_TIMER1::ARR, 0, 16, ReadWriteMode, MDR_TIMER1ARRBase> ;
    using FieldValues = MDR_TIMER1_ARR_Value_Values<MDR_TIMER1::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40070008, 32, ReadWriteMode, MDR_TIMER1ARRBase, T...> ;

  struct MDR_TIMER1CNTRLBase {} ;

  struct CNTRL : public RegisterBase<0x4007000C, 32, ReadWriteMode>
  {
    using CNT_EN = MDR_TIMER1_CNTRL_CNT_EN_Values<MDR_TIMER1::CNTRL, 0, 1, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using ARRB_EN = MDR_TIMER1_CNTRL_ARRB_EN_Values<MDR_TIMER1::CNTRL, 1, 1, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using WR_CMPL = MDR_TIMER1_CNTRL_WR_CMPL_Values<MDR_TIMER1::CNTRL, 2, 1, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using DIR = MDR_TIMER1_CNTRL_DIR_Values<MDR_TIMER1::CNTRL, 3, 1, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using FDTS = MDR_TIMER1_CNTRL_FDTS_Values<MDR_TIMER1::CNTRL, 4, 2, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using CNT_MODE = MDR_TIMER1_CNTRL_CNT_MODE_Values<MDR_TIMER1::CNTRL, 6, 2, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using EVENT_SEL = MDR_TIMER1_CNTRL_EVENT_SEL_Values<MDR_TIMER1::CNTRL, 8, 4, ReadWriteMode, MDR_TIMER1CNTRLBase> ;
    using FieldValues = MDR_TIMER1_CNTRL_EVENT_SEL_Values<MDR_TIMER1::CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRLPack  = Register<0x4007000C, 32, ReadWriteMode, MDR_TIMER1CNTRLBase, T...> ;

  struct MDR_TIMER1CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40070010, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER1_CCR1_Value_Values<MDR_TIMER1::CCR1, 0, 16, ReadWriteMode, MDR_TIMER1CCR1Base> ;
    using FieldValues = MDR_TIMER1_CCR1_Value_Values<MDR_TIMER1::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40070010, 32, ReadWriteMode, MDR_TIMER1CCR1Base, T...> ;

  struct MDR_TIMER1CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40070014, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40070014, 32, ReadWriteMode, MDR_TIMER1CCR2Base, T...> ;

  struct MDR_TIMER1CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40070018, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40070018, 32, ReadWriteMode, MDR_TIMER1CCR3Base, T...> ;

  struct MDR_TIMER1CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x4007001C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x4007001C, 32, ReadWriteMode, MDR_TIMER1CCR4Base, T...> ;

  struct MDR_TIMER1CH1_CNTRLBase {} ;

  struct CH1_CNTRL : public RegisterBase<0x40070020, 32, ReadWriteMode>
  {
    using CHFLTR = MDR_TIMER1_CH1_CNTRL_CHFLTR_Values<MDR_TIMER1::CH1_CNTRL, 0, 4, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using CHSEL = MDR_TIMER1_CH1_CNTRL_CHSEL_Values<MDR_TIMER1::CH1_CNTRL, 4, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using CHPSC = MDR_TIMER1_CH1_CNTRL_CHPSC_Values<MDR_TIMER1::CH1_CNTRL, 6, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using OCCE = MDR_TIMER1_CH1_CNTRL_OCCE_Values<MDR_TIMER1::CH1_CNTRL, 8, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using OCCM = MDR_TIMER1_CH1_CNTRL_OCCM_Values<MDR_TIMER1::CH1_CNTRL, 9, 3, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using BRKEN = MDR_TIMER1_CH1_CNTRL_BRKEN_Values<MDR_TIMER1::CH1_CNTRL, 12, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using ETREN = MDR_TIMER1_CH1_CNTRL_ETREN_Values<MDR_TIMER1::CH1_CNTRL, 13, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using WR_CMPL = MDR_TIMER1_CH1_CNTRL_WR_CMPL_Values<MDR_TIMER1::CH1_CNTRL, 14, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using CAP_nPWM = MDR_TIMER1_CH1_CNTRL_CAP_nPWM_Values<MDR_TIMER1::CH1_CNTRL, 15, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase> ;
    using FieldValues = MDR_TIMER1_CH1_CNTRL_CAP_nPWM_Values<MDR_TIMER1::CH1_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRLPack  = Register<0x40070020, 32, ReadWriteMode, MDR_TIMER1CH1_CNTRLBase, T...> ;

  struct MDR_TIMER1CH2_CNTRLBase {} ;

  struct CH2_CNTRL : public RegisterBase<0x40070024, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH2_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRLPack  = Register<0x40070024, 32, ReadWriteMode, MDR_TIMER1CH2_CNTRLBase, T...> ;

  struct MDR_TIMER1CH3_CNTRLBase {} ;

  struct CH3_CNTRL : public RegisterBase<0x40070028, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH3_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRLPack  = Register<0x40070028, 32, ReadWriteMode, MDR_TIMER1CH3_CNTRLBase, T...> ;

  struct MDR_TIMER1CH4_CNTRLBase {} ;

  struct CH4_CNTRL : public RegisterBase<0x4007002C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH4_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRLPack  = Register<0x4007002C, 32, ReadWriteMode, MDR_TIMER1CH4_CNTRLBase, T...> ;

  struct MDR_TIMER1CH1_CNTRL1Base {} ;

  struct CH1_CNTRL1 : public RegisterBase<0x40070030, 32, ReadWriteMode>
  {
    using SelOE = MDR_TIMER1_CH1_CNTRL1_SelOE_Values<MDR_TIMER1::CH1_CNTRL1, 0, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using SelO = MDR_TIMER1_CH1_CNTRL1_SelO_Values<MDR_TIMER1::CH1_CNTRL1, 2, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using Inv = MDR_TIMER1_CH1_CNTRL1_Inv_Values<MDR_TIMER1::CH1_CNTRL1, 4, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using NSelOE = MDR_TIMER1_CH1_CNTRL1_NSelOE_Values<MDR_TIMER1::CH1_CNTRL1, 8, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using NSelO = MDR_TIMER1_CH1_CNTRL1_NSelO_Values<MDR_TIMER1::CH1_CNTRL1, 10, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using NInv = MDR_TIMER1_CH1_CNTRL1_NInv_Values<MDR_TIMER1::CH1_CNTRL1, 12, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base> ;
    using FieldValues = MDR_TIMER1_CH1_CNTRL1_NInv_Values<MDR_TIMER1::CH1_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRL1Pack  = Register<0x40070030, 32, ReadWriteMode, MDR_TIMER1CH1_CNTRL1Base, T...> ;

  struct MDR_TIMER1CH2_CNTRL1Base {} ;

  struct CH2_CNTRL1 : public RegisterBase<0x40070034, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH2_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRL1Pack  = Register<0x40070034, 32, ReadWriteMode, MDR_TIMER1CH2_CNTRL1Base, T...> ;

  struct MDR_TIMER1CH3_CNTRL1Base {} ;

  struct CH3_CNTRL1 : public RegisterBase<0x40070038, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH3_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRL1Pack  = Register<0x40070038, 32, ReadWriteMode, MDR_TIMER1CH3_CNTRL1Base, T...> ;

  struct MDR_TIMER1CH4_CNTRL1Base {} ;

  struct CH4_CNTRL1 : public RegisterBase<0x4007003C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH4_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRL1Pack  = Register<0x4007003C, 32, ReadWriteMode, MDR_TIMER1CH4_CNTRL1Base, T...> ;

  struct MDR_TIMER1CH1_DTGBase {} ;

  struct CH1_DTG : public RegisterBase<0x40070040, 32, ReadWriteMode>
  {
    using DTG = MDR_TIMER1_CH1_DTG_DTG_Values<MDR_TIMER1::CH1_DTG, 0, 4, ReadWriteMode, MDR_TIMER1CH1_DTGBase> ;
    using EDTS = MDR_TIMER1_CH1_DTG_EDTS_Values<MDR_TIMER1::CH1_DTG, 4, 1, ReadWriteMode, MDR_TIMER1CH1_DTGBase> ;
    using DTGx = MDR_TIMER1_CH1_DTG_DTGx_Values<MDR_TIMER1::CH1_DTG, 8, 8, ReadWriteMode, MDR_TIMER1CH1_DTGBase> ;
    using FieldValues = MDR_TIMER1_CH1_DTG_DTGx_Values<MDR_TIMER1::CH1_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_DTGPack  = Register<0x40070040, 32, ReadWriteMode, MDR_TIMER1CH1_DTGBase, T...> ;

  struct MDR_TIMER1CH2_DTGBase {} ;

  struct CH2_DTG : public RegisterBase<0x40070044, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH2_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_DTGPack  = Register<0x40070044, 32, ReadWriteMode, MDR_TIMER1CH2_DTGBase, T...> ;

  struct MDR_TIMER1CH3_DTGBase {} ;

  struct CH3_DTG : public RegisterBase<0x40070048, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH3_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_DTGPack  = Register<0x40070048, 32, ReadWriteMode, MDR_TIMER1CH3_DTGBase, T...> ;

  struct MDR_TIMER1CH4_DTGBase {} ;

  struct CH4_DTG : public RegisterBase<0x4007004C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH4_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_DTGPack  = Register<0x4007004C, 32, ReadWriteMode, MDR_TIMER1CH4_DTGBase, T...> ;

  struct MDR_TIMER1BRKETR_CNTRLBase {} ;

  struct BRKETR_CNTRL : public RegisterBase<0x40070050, 32, ReadWriteMode>
  {
    using BRK_INV = MDR_TIMER1_BRKETR_CNTRL_BRK_INV_Values<MDR_TIMER1::BRKETR_CNTRL, 0, 1, ReadWriteMode, MDR_TIMER1BRKETR_CNTRLBase> ;
    using ETR_INV = MDR_TIMER1_BRKETR_CNTRL_ETR_INV_Values<MDR_TIMER1::BRKETR_CNTRL, 1, 1, ReadWriteMode, MDR_TIMER1BRKETR_CNTRLBase> ;
    using ETR_PSC = MDR_TIMER1_BRKETR_CNTRL_ETR_PSC_Values<MDR_TIMER1::BRKETR_CNTRL, 2, 2, ReadWriteMode, MDR_TIMER1BRKETR_CNTRLBase> ;
    using ETR_Filter = MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values<MDR_TIMER1::BRKETR_CNTRL, 4, 4, ReadWriteMode, MDR_TIMER1BRKETR_CNTRLBase> ;
    using FieldValues = MDR_TIMER1_BRKETR_CNTRL_ETR_Filter_Values<MDR_TIMER1::BRKETR_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRKETR_CNTRLPack  = Register<0x40070050, 32, ReadWriteMode, MDR_TIMER1BRKETR_CNTRLBase, T...> ;

  struct MDR_TIMER1STATUSBase {} ;

  struct STATUS : public RegisterBase<0x40070054, 32, ReadWriteMode>
  {
    using CNT_ZERO = MDR_TIMER1_STATUS_CNT_ZERO_Values<MDR_TIMER1::STATUS, 0, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CNT_ARR = MDR_TIMER1_STATUS_CNT_ARR_Values<MDR_TIMER1::STATUS, 1, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using ETR_RE = MDR_TIMER1_STATUS_ETR_RE_Values<MDR_TIMER1::STATUS, 2, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using ETR_FE = MDR_TIMER1_STATUS_ETR_FE_Values<MDR_TIMER1::STATUS, 3, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using BRK = MDR_TIMER1_STATUS_BRK_Values<MDR_TIMER1::STATUS, 4, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_CAP_CH1 = MDR_TIMER1_STATUS_CCR_CAP_CH1_Values<MDR_TIMER1::STATUS, 5, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_CAP_CH2 = MDR_TIMER1_STATUS_CCR_CAP_CH2_Values<MDR_TIMER1::STATUS, 6, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_CAP_CH3 = MDR_TIMER1_STATUS_CCR_CAP_CH3_Values<MDR_TIMER1::STATUS, 7, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_CAP_CH4 = MDR_TIMER1_STATUS_CCR_CAP_CH4_Values<MDR_TIMER1::STATUS, 8, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_REF_CH1 = MDR_TIMER1_STATUS_CCR_REF_CH1_Values<MDR_TIMER1::STATUS, 9, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_REF_CH2 = MDR_TIMER1_STATUS_CCR_REF_CH2_Values<MDR_TIMER1::STATUS, 10, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_REF_CH3 = MDR_TIMER1_STATUS_CCR_REF_CH3_Values<MDR_TIMER1::STATUS, 11, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR_REF_CH4 = MDR_TIMER1_STATUS_CCR_REF_CH4_Values<MDR_TIMER1::STATUS, 12, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR1_CAP_CH1 = MDR_TIMER1_STATUS_CCR1_CAP_CH1_Values<MDR_TIMER1::STATUS, 13, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR1_CAP_CH2 = MDR_TIMER1_STATUS_CCR1_CAP_CH2_Values<MDR_TIMER1::STATUS, 14, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR1_CAP_CH3 = MDR_TIMER1_STATUS_CCR1_CAP_CH3_Values<MDR_TIMER1::STATUS, 15, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using CCR1_CAP_CH4 = MDR_TIMER1_STATUS_CCR1_CAP_CH4_Values<MDR_TIMER1::STATUS, 16, 1, ReadWriteMode, MDR_TIMER1STATUSBase> ;
    using FieldValues = MDR_TIMER1_STATUS_CCR1_CAP_CH4_Values<MDR_TIMER1::STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATUSPack  = Register<0x40070054, 32, ReadWriteMode, MDR_TIMER1STATUSBase, T...> ;

  struct MDR_TIMER1IEBase {} ;

  struct IE : public RegisterBase<0x40070058, 32, ReadWriteMode>
  {
    using CNT_ZERO_IE = MDR_TIMER1_IE_CNT_ZERO_IE_Values<MDR_TIMER1::IE, 0, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CNT_ARR_IE = MDR_TIMER1_IE_CNT_ARR_IE_Values<MDR_TIMER1::IE, 1, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using ETR_RE_IE = MDR_TIMER1_IE_ETR_RE_IE_Values<MDR_TIMER1::IE, 2, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using ETR_FE_IE = MDR_TIMER1_IE_ETR_FE_IE_Values<MDR_TIMER1::IE, 3, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using BRK_IE = MDR_TIMER1_IE_BRK_IE_Values<MDR_TIMER1::IE, 4, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_CAP_CH1_IE = MDR_TIMER1_IE_CCR_CAP_CH1_IE_Values<MDR_TIMER1::IE, 5, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_CAP_CH2_IE = MDR_TIMER1_IE_CCR_CAP_CH2_IE_Values<MDR_TIMER1::IE, 6, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_CAP_CH3_IE = MDR_TIMER1_IE_CCR_CAP_CH3_IE_Values<MDR_TIMER1::IE, 7, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_CAP_CH4_IE = MDR_TIMER1_IE_CCR_CAP_CH4_IE_Values<MDR_TIMER1::IE, 8, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_REF_CH1_IE = MDR_TIMER1_IE_CCR_REF_CH1_IE_Values<MDR_TIMER1::IE, 9, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_REF_CH2_IE = MDR_TIMER1_IE_CCR_REF_CH2_IE_Values<MDR_TIMER1::IE, 10, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_REF_CH3_IE = MDR_TIMER1_IE_CCR_REF_CH3_IE_Values<MDR_TIMER1::IE, 11, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR_REF_CH4_IE = MDR_TIMER1_IE_CCR_REF_CH4_IE_Values<MDR_TIMER1::IE, 12, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR1_CAP_CH1_IE = MDR_TIMER1_IE_CCR1_CAP_CH1_IE_Values<MDR_TIMER1::IE, 13, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR1_CAP_CH2_IE = MDR_TIMER1_IE_CCR1_CAP_CH2_IE_Values<MDR_TIMER1::IE, 14, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR1_CAP_CH3_IE = MDR_TIMER1_IE_CCR1_CAP_CH3_IE_Values<MDR_TIMER1::IE, 15, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using CCR1_CAP_CH4_IE = MDR_TIMER1_IE_CCR1_CAP_CH4_IE_Values<MDR_TIMER1::IE, 16, 1, ReadWriteMode, MDR_TIMER1IEBase> ;
    using FieldValues = MDR_TIMER1_IE_CCR1_CAP_CH4_IE_Values<MDR_TIMER1::IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IEPack  = Register<0x40070058, 32, ReadWriteMode, MDR_TIMER1IEBase, T...> ;

  struct MDR_TIMER1DMA_REBase {} ;

  struct DMA_RE : public RegisterBase<0x4007005C, 32, ReadWriteMode>
  {
    using CNT_ZERO_DMAE = MDR_TIMER1_DMA_RE_CNT_ZERO_DMAE_Values<MDR_TIMER1::DMA_RE, 0, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CNT_ARR_DMAE = MDR_TIMER1_DMA_RE_CNT_ARR_DMAE_Values<MDR_TIMER1::DMA_RE, 1, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using ETR_RE_DMAE = MDR_TIMER1_DMA_RE_ETR_RE_DMAE_Values<MDR_TIMER1::DMA_RE, 2, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using ETR_FE_DMAE = MDR_TIMER1_DMA_RE_ETR_FE_DMAE_Values<MDR_TIMER1::DMA_RE, 3, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using BRK_DMAE = MDR_TIMER1_DMA_RE_BRK_DMAE_Values<MDR_TIMER1::DMA_RE, 4, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_CAP_CH1_DMAE = MDR_TIMER1_DMA_RE_CCR_CAP_CH1_DMAE_Values<MDR_TIMER1::DMA_RE, 5, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_CAP_CH2_DMAE = MDR_TIMER1_DMA_RE_CCR_CAP_CH2_DMAE_Values<MDR_TIMER1::DMA_RE, 6, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_CAP_CH3_DMAE = MDR_TIMER1_DMA_RE_CCR_CAP_CH3_DMAE_Values<MDR_TIMER1::DMA_RE, 7, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_CAP_CH4_DMAE = MDR_TIMER1_DMA_RE_CCR_CAP_CH4_DMAE_Values<MDR_TIMER1::DMA_RE, 8, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_REF_CH1_DMAE = MDR_TIMER1_DMA_RE_CCR_REF_CH1_DMAE_Values<MDR_TIMER1::DMA_RE, 9, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_REF_CH2_DMAE = MDR_TIMER1_DMA_RE_CCR_REF_CH2_DMAE_Values<MDR_TIMER1::DMA_RE, 10, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_REF_CH3_DMAE = MDR_TIMER1_DMA_RE_CCR_REF_CH3_DMAE_Values<MDR_TIMER1::DMA_RE, 11, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR_REF_CH4_DMAE = MDR_TIMER1_DMA_RE_CCR_REF_CH4_DMAE_Values<MDR_TIMER1::DMA_RE, 12, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR1_CAP_CH1_DMAE = MDR_TIMER1_DMA_RE_CCR1_CAP_CH1_DMAE_Values<MDR_TIMER1::DMA_RE, 13, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR1_CAP_CH2_DMAE = MDR_TIMER1_DMA_RE_CCR1_CAP_CH2_DMAE_Values<MDR_TIMER1::DMA_RE, 14, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR1_CAP_CH3_DMAE = MDR_TIMER1_DMA_RE_CCR1_CAP_CH3_DMAE_Values<MDR_TIMER1::DMA_RE, 15, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using CCR1_CAP_CH4_DMAE = MDR_TIMER1_DMA_RE_CCR1_CAP_CH4_DMAE_Values<MDR_TIMER1::DMA_RE, 16, 1, ReadWriteMode, MDR_TIMER1DMA_REBase> ;
    using FieldValues = MDR_TIMER1_DMA_RE_CCR1_CAP_CH4_DMAE_Values<MDR_TIMER1::DMA_RE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_REPack  = Register<0x4007005C, 32, ReadWriteMode, MDR_TIMER1DMA_REBase, T...> ;

  struct MDR_TIMER1CH1_CNTRL2Base {} ;

  struct CH1_CNTRL2 : public RegisterBase<0x40070060, 32, ReadWriteMode>
  {
    using CHSel1 = MDR_TIMER1_CH1_CNTRL2_CHSel1_Values<MDR_TIMER1::CH1_CNTRL2, 0, 2, ReadWriteMode, MDR_TIMER1CH1_CNTRL2Base> ;
    using CCR1_En = MDR_TIMER1_CH1_CNTRL2_CCR1_En_Values<MDR_TIMER1::CH1_CNTRL2, 2, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRL2Base> ;
    using CCRRLD = MDR_TIMER1_CH1_CNTRL2_CCRRLD_Values<MDR_TIMER1::CH1_CNTRL2, 3, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRL2Base> ;
    using CAP_CCR_Fix = MDR_TIMER1_CH1_CNTRL2_CAP_CCR_Fix_Values<MDR_TIMER1::CH1_CNTRL2, 4, 1, ReadWriteMode, MDR_TIMER1CH1_CNTRL2Base> ;
    using FieldValues = MDR_TIMER1_CH1_CNTRL2_CAP_CCR_Fix_Values<MDR_TIMER1::CH1_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRL2Pack  = Register<0x40070060, 32, ReadWriteMode, MDR_TIMER1CH1_CNTRL2Base, T...> ;

  struct MDR_TIMER1CH2_CNTRL2Base {} ;

  struct CH2_CNTRL2 : public RegisterBase<0x40070064, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH2_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRL2Pack  = Register<0x40070064, 32, ReadWriteMode, MDR_TIMER1CH2_CNTRL2Base, T...> ;

  struct MDR_TIMER1CH3_CNTRL2Base {} ;

  struct CH3_CNTRL2 : public RegisterBase<0x40070068, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH3_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRL2Pack  = Register<0x40070068, 32, ReadWriteMode, MDR_TIMER1CH3_CNTRL2Base, T...> ;

  struct MDR_TIMER1CH4_CNTRL2Base {} ;

  struct CH4_CNTRL2 : public RegisterBase<0x4007006C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CH4_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRL2Pack  = Register<0x4007006C, 32, ReadWriteMode, MDR_TIMER1CH4_CNTRL2Base, T...> ;

  struct MDR_TIMER1CCR11Base {} ;

  struct CCR11 : public RegisterBase<0x40070070, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR11Pack  = Register<0x40070070, 32, ReadWriteMode, MDR_TIMER1CCR11Base, T...> ;

  struct MDR_TIMER1CCR21Base {} ;

  struct CCR21 : public RegisterBase<0x40070074, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR21Pack  = Register<0x40070074, 32, ReadWriteMode, MDR_TIMER1CCR21Base, T...> ;

  struct MDR_TIMER1CCR31Base {} ;

  struct CCR31 : public RegisterBase<0x40070078, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR31Pack  = Register<0x40070078, 32, ReadWriteMode, MDR_TIMER1CCR31Base, T...> ;

  struct MDR_TIMER1CCR41Base {} ;

  struct CCR41 : public RegisterBase<0x4007007C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER1::CCR41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR41Pack  = Register<0x4007007C, 32, ReadWriteMode, MDR_TIMER1CCR41Base, T...> ;

} ;

#endif //#if !defined(MDRTIMER1REGISTERS_HPP)
