/*******************************************************************************
* Filename      : mdrtimer3registers.hpp
*
* Details       : TIMER Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRTIMER3REGISTERS_HPP)
#define MDRTIMER3REGISTERS_HPP

#include "mdrtimer3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_TIMER3
{
  struct MDR_TIMER3CNTBase {} ;

  struct CNT : public RegisterBase<0x40080000, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER3_CNT_Value_Values<MDR_TIMER3::CNT, 0, 16, ReadWriteMode, MDR_TIMER3CNTBase> ;
    using FieldValues = MDR_TIMER3_CNT_Value_Values<MDR_TIMER3::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40080000, 32, ReadWriteMode, MDR_TIMER3CNTBase, T...> ;

  struct MDR_TIMER3PSGBase {} ;

  struct PSG : public RegisterBase<0x40080004, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER3_PSG_Value_Values<MDR_TIMER3::PSG, 0, 16, ReadWriteMode, MDR_TIMER3PSGBase> ;
    using FieldValues = MDR_TIMER3_PSG_Value_Values<MDR_TIMER3::PSG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSGPack  = Register<0x40080004, 32, ReadWriteMode, MDR_TIMER3PSGBase, T...> ;

  struct MDR_TIMER3ARRBase {} ;

  struct ARR : public RegisterBase<0x40080008, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER3_ARR_Value_Values<MDR_TIMER3::ARR, 0, 16, ReadWriteMode, MDR_TIMER3ARRBase> ;
    using FieldValues = MDR_TIMER3_ARR_Value_Values<MDR_TIMER3::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40080008, 32, ReadWriteMode, MDR_TIMER3ARRBase, T...> ;

  struct MDR_TIMER3CNTRLBase {} ;

  struct CNTRL : public RegisterBase<0x4008000C, 32, ReadWriteMode>
  {
    using CNT_EN = MDR_TIMER3_CNTRL_CNT_EN_Values<MDR_TIMER3::CNTRL, 0, 1, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using ARRB_EN = MDR_TIMER3_CNTRL_ARRB_EN_Values<MDR_TIMER3::CNTRL, 1, 1, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using WR_CMPL = MDR_TIMER3_CNTRL_WR_CMPL_Values<MDR_TIMER3::CNTRL, 2, 1, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using DIR = MDR_TIMER3_CNTRL_DIR_Values<MDR_TIMER3::CNTRL, 3, 1, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using FDTS = MDR_TIMER3_CNTRL_FDTS_Values<MDR_TIMER3::CNTRL, 4, 2, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using CNT_MODE = MDR_TIMER3_CNTRL_CNT_MODE_Values<MDR_TIMER3::CNTRL, 6, 2, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using EVENT_SEL = MDR_TIMER3_CNTRL_EVENT_SEL_Values<MDR_TIMER3::CNTRL, 8, 4, ReadWriteMode, MDR_TIMER3CNTRLBase> ;
    using FieldValues = MDR_TIMER3_CNTRL_EVENT_SEL_Values<MDR_TIMER3::CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRLPack  = Register<0x4008000C, 32, ReadWriteMode, MDR_TIMER3CNTRLBase, T...> ;

  struct MDR_TIMER3CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40080010, 32, ReadWriteMode>
  {
    using Value = MDR_TIMER3_CCR1_Value_Values<MDR_TIMER3::CCR1, 0, 16, ReadWriteMode, MDR_TIMER3CCR1Base> ;
    using FieldValues = MDR_TIMER3_CCR1_Value_Values<MDR_TIMER3::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40080010, 32, ReadWriteMode, MDR_TIMER3CCR1Base, T...> ;

  struct MDR_TIMER3CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40080014, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40080014, 32, ReadWriteMode, MDR_TIMER3CCR2Base, T...> ;

  struct MDR_TIMER3CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40080018, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40080018, 32, ReadWriteMode, MDR_TIMER3CCR3Base, T...> ;

  struct MDR_TIMER3CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x4008001C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x4008001C, 32, ReadWriteMode, MDR_TIMER3CCR4Base, T...> ;

  struct MDR_TIMER3CH1_CNTRLBase {} ;

  struct CH1_CNTRL : public RegisterBase<0x40080020, 32, ReadWriteMode>
  {
    using CHFLTR = MDR_TIMER3_CH1_CNTRL_CHFLTR_Values<MDR_TIMER3::CH1_CNTRL, 0, 4, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using CHSEL = MDR_TIMER3_CH1_CNTRL_CHSEL_Values<MDR_TIMER3::CH1_CNTRL, 4, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using CHPSC = MDR_TIMER3_CH1_CNTRL_CHPSC_Values<MDR_TIMER3::CH1_CNTRL, 6, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using OCCE = MDR_TIMER3_CH1_CNTRL_OCCE_Values<MDR_TIMER3::CH1_CNTRL, 8, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using OCCM = MDR_TIMER3_CH1_CNTRL_OCCM_Values<MDR_TIMER3::CH1_CNTRL, 9, 3, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using BRKEN = MDR_TIMER3_CH1_CNTRL_BRKEN_Values<MDR_TIMER3::CH1_CNTRL, 12, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using ETREN = MDR_TIMER3_CH1_CNTRL_ETREN_Values<MDR_TIMER3::CH1_CNTRL, 13, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using WR_CMPL = MDR_TIMER3_CH1_CNTRL_WR_CMPL_Values<MDR_TIMER3::CH1_CNTRL, 14, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using CAP_nPWM = MDR_TIMER3_CH1_CNTRL_CAP_nPWM_Values<MDR_TIMER3::CH1_CNTRL, 15, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase> ;
    using FieldValues = MDR_TIMER3_CH1_CNTRL_CAP_nPWM_Values<MDR_TIMER3::CH1_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRLPack  = Register<0x40080020, 32, ReadWriteMode, MDR_TIMER3CH1_CNTRLBase, T...> ;

  struct MDR_TIMER3CH2_CNTRLBase {} ;

  struct CH2_CNTRL : public RegisterBase<0x40080024, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH2_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRLPack  = Register<0x40080024, 32, ReadWriteMode, MDR_TIMER3CH2_CNTRLBase, T...> ;

  struct MDR_TIMER3CH3_CNTRLBase {} ;

  struct CH3_CNTRL : public RegisterBase<0x40080028, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH3_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRLPack  = Register<0x40080028, 32, ReadWriteMode, MDR_TIMER3CH3_CNTRLBase, T...> ;

  struct MDR_TIMER3CH4_CNTRLBase {} ;

  struct CH4_CNTRL : public RegisterBase<0x4008002C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH4_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRLPack  = Register<0x4008002C, 32, ReadWriteMode, MDR_TIMER3CH4_CNTRLBase, T...> ;

  struct MDR_TIMER3CH1_CNTRL1Base {} ;

  struct CH1_CNTRL1 : public RegisterBase<0x40080030, 32, ReadWriteMode>
  {
    using SelOE = MDR_TIMER3_CH1_CNTRL1_SelOE_Values<MDR_TIMER3::CH1_CNTRL1, 0, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using SelO = MDR_TIMER3_CH1_CNTRL1_SelO_Values<MDR_TIMER3::CH1_CNTRL1, 2, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using Inv = MDR_TIMER3_CH1_CNTRL1_Inv_Values<MDR_TIMER3::CH1_CNTRL1, 4, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using NSelOE = MDR_TIMER3_CH1_CNTRL1_NSelOE_Values<MDR_TIMER3::CH1_CNTRL1, 8, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using NSelO = MDR_TIMER3_CH1_CNTRL1_NSelO_Values<MDR_TIMER3::CH1_CNTRL1, 10, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using NInv = MDR_TIMER3_CH1_CNTRL1_NInv_Values<MDR_TIMER3::CH1_CNTRL1, 12, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base> ;
    using FieldValues = MDR_TIMER3_CH1_CNTRL1_NInv_Values<MDR_TIMER3::CH1_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRL1Pack  = Register<0x40080030, 32, ReadWriteMode, MDR_TIMER3CH1_CNTRL1Base, T...> ;

  struct MDR_TIMER3CH2_CNTRL1Base {} ;

  struct CH2_CNTRL1 : public RegisterBase<0x40080034, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH2_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRL1Pack  = Register<0x40080034, 32, ReadWriteMode, MDR_TIMER3CH2_CNTRL1Base, T...> ;

  struct MDR_TIMER3CH3_CNTRL1Base {} ;

  struct CH3_CNTRL1 : public RegisterBase<0x40080038, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH3_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRL1Pack  = Register<0x40080038, 32, ReadWriteMode, MDR_TIMER3CH3_CNTRL1Base, T...> ;

  struct MDR_TIMER3CH4_CNTRL1Base {} ;

  struct CH4_CNTRL1 : public RegisterBase<0x4008003C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH4_CNTRL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRL1Pack  = Register<0x4008003C, 32, ReadWriteMode, MDR_TIMER3CH4_CNTRL1Base, T...> ;

  struct MDR_TIMER3CH1_DTGBase {} ;

  struct CH1_DTG : public RegisterBase<0x40080040, 32, ReadWriteMode>
  {
    using DTG = MDR_TIMER3_CH1_DTG_DTG_Values<MDR_TIMER3::CH1_DTG, 0, 4, ReadWriteMode, MDR_TIMER3CH1_DTGBase> ;
    using EDTS = MDR_TIMER3_CH1_DTG_EDTS_Values<MDR_TIMER3::CH1_DTG, 4, 1, ReadWriteMode, MDR_TIMER3CH1_DTGBase> ;
    using DTGx = MDR_TIMER3_CH1_DTG_DTGx_Values<MDR_TIMER3::CH1_DTG, 8, 8, ReadWriteMode, MDR_TIMER3CH1_DTGBase> ;
    using FieldValues = MDR_TIMER3_CH1_DTG_DTGx_Values<MDR_TIMER3::CH1_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_DTGPack  = Register<0x40080040, 32, ReadWriteMode, MDR_TIMER3CH1_DTGBase, T...> ;

  struct MDR_TIMER3CH2_DTGBase {} ;

  struct CH2_DTG : public RegisterBase<0x40080044, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH2_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_DTGPack  = Register<0x40080044, 32, ReadWriteMode, MDR_TIMER3CH2_DTGBase, T...> ;

  struct MDR_TIMER3CH3_DTGBase {} ;

  struct CH3_DTG : public RegisterBase<0x40080048, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH3_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_DTGPack  = Register<0x40080048, 32, ReadWriteMode, MDR_TIMER3CH3_DTGBase, T...> ;

  struct MDR_TIMER3CH4_DTGBase {} ;

  struct CH4_DTG : public RegisterBase<0x4008004C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH4_DTG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_DTGPack  = Register<0x4008004C, 32, ReadWriteMode, MDR_TIMER3CH4_DTGBase, T...> ;

  struct MDR_TIMER3BRKETR_CNTRLBase {} ;

  struct BRKETR_CNTRL : public RegisterBase<0x40080050, 32, ReadWriteMode>
  {
    using BRK_INV = MDR_TIMER3_BRKETR_CNTRL_BRK_INV_Values<MDR_TIMER3::BRKETR_CNTRL, 0, 1, ReadWriteMode, MDR_TIMER3BRKETR_CNTRLBase> ;
    using ETR_INV = MDR_TIMER3_BRKETR_CNTRL_ETR_INV_Values<MDR_TIMER3::BRKETR_CNTRL, 1, 1, ReadWriteMode, MDR_TIMER3BRKETR_CNTRLBase> ;
    using ETR_PSC = MDR_TIMER3_BRKETR_CNTRL_ETR_PSC_Values<MDR_TIMER3::BRKETR_CNTRL, 2, 2, ReadWriteMode, MDR_TIMER3BRKETR_CNTRLBase> ;
    using ETR_Filter = MDR_TIMER3_BRKETR_CNTRL_ETR_Filter_Values<MDR_TIMER3::BRKETR_CNTRL, 4, 4, ReadWriteMode, MDR_TIMER3BRKETR_CNTRLBase> ;
    using FieldValues = MDR_TIMER3_BRKETR_CNTRL_ETR_Filter_Values<MDR_TIMER3::BRKETR_CNTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRKETR_CNTRLPack  = Register<0x40080050, 32, ReadWriteMode, MDR_TIMER3BRKETR_CNTRLBase, T...> ;

  struct MDR_TIMER3STATUSBase {} ;

  struct STATUS : public RegisterBase<0x40080054, 32, ReadWriteMode>
  {
    using CNT_ZERO = MDR_TIMER3_STATUS_CNT_ZERO_Values<MDR_TIMER3::STATUS, 0, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CNT_ARR = MDR_TIMER3_STATUS_CNT_ARR_Values<MDR_TIMER3::STATUS, 1, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using ETR_RE = MDR_TIMER3_STATUS_ETR_RE_Values<MDR_TIMER3::STATUS, 2, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using ETR_FE = MDR_TIMER3_STATUS_ETR_FE_Values<MDR_TIMER3::STATUS, 3, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using BRK = MDR_TIMER3_STATUS_BRK_Values<MDR_TIMER3::STATUS, 4, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_CAP_CH1 = MDR_TIMER3_STATUS_CCR_CAP_CH1_Values<MDR_TIMER3::STATUS, 5, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_CAP_CH2 = MDR_TIMER3_STATUS_CCR_CAP_CH2_Values<MDR_TIMER3::STATUS, 6, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_CAP_CH3 = MDR_TIMER3_STATUS_CCR_CAP_CH3_Values<MDR_TIMER3::STATUS, 7, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_CAP_CH4 = MDR_TIMER3_STATUS_CCR_CAP_CH4_Values<MDR_TIMER3::STATUS, 8, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_REF_CH1 = MDR_TIMER3_STATUS_CCR_REF_CH1_Values<MDR_TIMER3::STATUS, 9, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_REF_CH2 = MDR_TIMER3_STATUS_CCR_REF_CH2_Values<MDR_TIMER3::STATUS, 10, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_REF_CH3 = MDR_TIMER3_STATUS_CCR_REF_CH3_Values<MDR_TIMER3::STATUS, 11, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR_REF_CH4 = MDR_TIMER3_STATUS_CCR_REF_CH4_Values<MDR_TIMER3::STATUS, 12, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR1_CAP_CH1 = MDR_TIMER3_STATUS_CCR1_CAP_CH1_Values<MDR_TIMER3::STATUS, 13, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR1_CAP_CH2 = MDR_TIMER3_STATUS_CCR1_CAP_CH2_Values<MDR_TIMER3::STATUS, 14, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR1_CAP_CH3 = MDR_TIMER3_STATUS_CCR1_CAP_CH3_Values<MDR_TIMER3::STATUS, 15, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using CCR1_CAP_CH4 = MDR_TIMER3_STATUS_CCR1_CAP_CH4_Values<MDR_TIMER3::STATUS, 16, 1, ReadWriteMode, MDR_TIMER3STATUSBase> ;
    using FieldValues = MDR_TIMER3_STATUS_CCR1_CAP_CH4_Values<MDR_TIMER3::STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATUSPack  = Register<0x40080054, 32, ReadWriteMode, MDR_TIMER3STATUSBase, T...> ;

  struct MDR_TIMER3IEBase {} ;

  struct IE : public RegisterBase<0x40080058, 32, ReadWriteMode>
  {
    using CNT_ZERO_IE = MDR_TIMER3_IE_CNT_ZERO_IE_Values<MDR_TIMER3::IE, 0, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CNT_ARR_IE = MDR_TIMER3_IE_CNT_ARR_IE_Values<MDR_TIMER3::IE, 1, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using ETR_RE_IE = MDR_TIMER3_IE_ETR_RE_IE_Values<MDR_TIMER3::IE, 2, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using ETR_FE_IE = MDR_TIMER3_IE_ETR_FE_IE_Values<MDR_TIMER3::IE, 3, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using BRK_IE = MDR_TIMER3_IE_BRK_IE_Values<MDR_TIMER3::IE, 4, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_CAP_CH1_IE = MDR_TIMER3_IE_CCR_CAP_CH1_IE_Values<MDR_TIMER3::IE, 5, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_CAP_CH2_IE = MDR_TIMER3_IE_CCR_CAP_CH2_IE_Values<MDR_TIMER3::IE, 6, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_CAP_CH3_IE = MDR_TIMER3_IE_CCR_CAP_CH3_IE_Values<MDR_TIMER3::IE, 7, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_CAP_CH4_IE = MDR_TIMER3_IE_CCR_CAP_CH4_IE_Values<MDR_TIMER3::IE, 8, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_REF_CH1_IE = MDR_TIMER3_IE_CCR_REF_CH1_IE_Values<MDR_TIMER3::IE, 9, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_REF_CH2_IE = MDR_TIMER3_IE_CCR_REF_CH2_IE_Values<MDR_TIMER3::IE, 10, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_REF_CH3_IE = MDR_TIMER3_IE_CCR_REF_CH3_IE_Values<MDR_TIMER3::IE, 11, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR_REF_CH4_IE = MDR_TIMER3_IE_CCR_REF_CH4_IE_Values<MDR_TIMER3::IE, 12, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR1_CAP_CH1_IE = MDR_TIMER3_IE_CCR1_CAP_CH1_IE_Values<MDR_TIMER3::IE, 13, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR1_CAP_CH2_IE = MDR_TIMER3_IE_CCR1_CAP_CH2_IE_Values<MDR_TIMER3::IE, 14, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR1_CAP_CH3_IE = MDR_TIMER3_IE_CCR1_CAP_CH3_IE_Values<MDR_TIMER3::IE, 15, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using CCR1_CAP_CH4_IE = MDR_TIMER3_IE_CCR1_CAP_CH4_IE_Values<MDR_TIMER3::IE, 16, 1, ReadWriteMode, MDR_TIMER3IEBase> ;
    using FieldValues = MDR_TIMER3_IE_CCR1_CAP_CH4_IE_Values<MDR_TIMER3::IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IEPack  = Register<0x40080058, 32, ReadWriteMode, MDR_TIMER3IEBase, T...> ;

  struct MDR_TIMER3DMA_REBase {} ;

  struct DMA_RE : public RegisterBase<0x4008005C, 32, ReadWriteMode>
  {
    using CNT_ZERO_DMAE = MDR_TIMER3_DMA_RE_CNT_ZERO_DMAE_Values<MDR_TIMER3::DMA_RE, 0, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CNT_ARR_DMAE = MDR_TIMER3_DMA_RE_CNT_ARR_DMAE_Values<MDR_TIMER3::DMA_RE, 1, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using ETR_RE_DMAE = MDR_TIMER3_DMA_RE_ETR_RE_DMAE_Values<MDR_TIMER3::DMA_RE, 2, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using ETR_FE_DMAE = MDR_TIMER3_DMA_RE_ETR_FE_DMAE_Values<MDR_TIMER3::DMA_RE, 3, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using BRK_DMAE = MDR_TIMER3_DMA_RE_BRK_DMAE_Values<MDR_TIMER3::DMA_RE, 4, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_CAP_CH1_DMAE = MDR_TIMER3_DMA_RE_CCR_CAP_CH1_DMAE_Values<MDR_TIMER3::DMA_RE, 5, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_CAP_CH2_DMAE = MDR_TIMER3_DMA_RE_CCR_CAP_CH2_DMAE_Values<MDR_TIMER3::DMA_RE, 6, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_CAP_CH3_DMAE = MDR_TIMER3_DMA_RE_CCR_CAP_CH3_DMAE_Values<MDR_TIMER3::DMA_RE, 7, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_CAP_CH4_DMAE = MDR_TIMER3_DMA_RE_CCR_CAP_CH4_DMAE_Values<MDR_TIMER3::DMA_RE, 8, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_REF_CH1_DMAE = MDR_TIMER3_DMA_RE_CCR_REF_CH1_DMAE_Values<MDR_TIMER3::DMA_RE, 9, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_REF_CH2_DMAE = MDR_TIMER3_DMA_RE_CCR_REF_CH2_DMAE_Values<MDR_TIMER3::DMA_RE, 10, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_REF_CH3_DMAE = MDR_TIMER3_DMA_RE_CCR_REF_CH3_DMAE_Values<MDR_TIMER3::DMA_RE, 11, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR_REF_CH4_DMAE = MDR_TIMER3_DMA_RE_CCR_REF_CH4_DMAE_Values<MDR_TIMER3::DMA_RE, 12, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR1_CAP_CH1_DMAE = MDR_TIMER3_DMA_RE_CCR1_CAP_CH1_DMAE_Values<MDR_TIMER3::DMA_RE, 13, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR1_CAP_CH2_DMAE = MDR_TIMER3_DMA_RE_CCR1_CAP_CH2_DMAE_Values<MDR_TIMER3::DMA_RE, 14, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR1_CAP_CH3_DMAE = MDR_TIMER3_DMA_RE_CCR1_CAP_CH3_DMAE_Values<MDR_TIMER3::DMA_RE, 15, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using CCR1_CAP_CH4_DMAE = MDR_TIMER3_DMA_RE_CCR1_CAP_CH4_DMAE_Values<MDR_TIMER3::DMA_RE, 16, 1, ReadWriteMode, MDR_TIMER3DMA_REBase> ;
    using FieldValues = MDR_TIMER3_DMA_RE_CCR1_CAP_CH4_DMAE_Values<MDR_TIMER3::DMA_RE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_REPack  = Register<0x4008005C, 32, ReadWriteMode, MDR_TIMER3DMA_REBase, T...> ;

  struct MDR_TIMER3CH1_CNTRL2Base {} ;

  struct CH1_CNTRL2 : public RegisterBase<0x40080060, 32, ReadWriteMode>
  {
    using CHSel1 = MDR_TIMER3_CH1_CNTRL2_CHSel1_Values<MDR_TIMER3::CH1_CNTRL2, 0, 2, ReadWriteMode, MDR_TIMER3CH1_CNTRL2Base> ;
    using CCR1_En = MDR_TIMER3_CH1_CNTRL2_CCR1_En_Values<MDR_TIMER3::CH1_CNTRL2, 2, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRL2Base> ;
    using CCRRLD = MDR_TIMER3_CH1_CNTRL2_CCRRLD_Values<MDR_TIMER3::CH1_CNTRL2, 3, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRL2Base> ;
    using CAP_CCR_Fix = MDR_TIMER3_CH1_CNTRL2_CAP_CCR_Fix_Values<MDR_TIMER3::CH1_CNTRL2, 4, 1, ReadWriteMode, MDR_TIMER3CH1_CNTRL2Base> ;
    using FieldValues = MDR_TIMER3_CH1_CNTRL2_CAP_CCR_Fix_Values<MDR_TIMER3::CH1_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1_CNTRL2Pack  = Register<0x40080060, 32, ReadWriteMode, MDR_TIMER3CH1_CNTRL2Base, T...> ;

  struct MDR_TIMER3CH2_CNTRL2Base {} ;

  struct CH2_CNTRL2 : public RegisterBase<0x40080064, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH2_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2_CNTRL2Pack  = Register<0x40080064, 32, ReadWriteMode, MDR_TIMER3CH2_CNTRL2Base, T...> ;

  struct MDR_TIMER3CH3_CNTRL2Base {} ;

  struct CH3_CNTRL2 : public RegisterBase<0x40080068, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH3_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3_CNTRL2Pack  = Register<0x40080068, 32, ReadWriteMode, MDR_TIMER3CH3_CNTRL2Base, T...> ;

  struct MDR_TIMER3CH4_CNTRL2Base {} ;

  struct CH4_CNTRL2 : public RegisterBase<0x4008006C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CH4_CNTRL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4_CNTRL2Pack  = Register<0x4008006C, 32, ReadWriteMode, MDR_TIMER3CH4_CNTRL2Base, T...> ;

  struct MDR_TIMER3CCR11Base {} ;

  struct CCR11 : public RegisterBase<0x40080070, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR11Pack  = Register<0x40080070, 32, ReadWriteMode, MDR_TIMER3CCR11Base, T...> ;

  struct MDR_TIMER3CCR21Base {} ;

  struct CCR21 : public RegisterBase<0x40080074, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR21Pack  = Register<0x40080074, 32, ReadWriteMode, MDR_TIMER3CCR21Base, T...> ;

  struct MDR_TIMER3CCR31Base {} ;

  struct CCR31 : public RegisterBase<0x40080078, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR31Pack  = Register<0x40080078, 32, ReadWriteMode, MDR_TIMER3CCR31Base, T...> ;

  struct MDR_TIMER3CCR41Base {} ;

  struct CCR41 : public RegisterBase<0x4008007C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_TIMER3::CCR41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR41Pack  = Register<0x4008007C, 32, ReadWriteMode, MDR_TIMER3CCR41Base, T...> ;

} ;

#endif //#if !defined(MDRTIMER3REGISTERS_HPP)
