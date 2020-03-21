/*******************************************************************************
* Filename      : tim16registers.hpp
*
* Details       : General-purpose-timers. This header file is auto-generated for
*                 STM32F303 device.
*
*
*******************************************************************************/

#if !defined(TIM16REGISTERS_HPP)
#define TIM16REGISTERS_HPP

#include "tim16fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM16
{
  struct TIM16CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014400, 32, ReadWriteMode>
  {
    using CEN = TIM16_CR1_CEN_Values<TIM16::CR1, 0, 1, ReadWriteMode, TIM16CR1Base> ;
    using UDIS = TIM16_CR1_UDIS_Values<TIM16::CR1, 1, 1, ReadWriteMode, TIM16CR1Base> ;
    using URS = TIM16_CR1_URS_Values<TIM16::CR1, 2, 1, ReadWriteMode, TIM16CR1Base> ;
    using OPM = TIM16_CR1_OPM_Values<TIM16::CR1, 3, 1, ReadWriteMode, TIM16CR1Base> ;
    using ARPE = TIM16_CR1_ARPE_Values<TIM16::CR1, 7, 1, ReadWriteMode, TIM16CR1Base> ;
    using CKD = TIM16_CR1_CKD_Values<TIM16::CR1, 8, 2, ReadWriteMode, TIM16CR1Base> ;
    using UIFREMAP = TIM16_CR1_UIFREMAP_Values<TIM16::CR1, 11, 1, ReadWriteMode, TIM16CR1Base> ;
    using FieldValues = TIM16_CR1_UIFREMAP_Values<TIM16::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014400, 32, ReadWriteMode, TIM16CR1Base, T...> ;

  struct TIM16CR2Base {} ;

  struct CR2 : public RegisterBase<0x40014404, 32, ReadWriteMode>
  {
    using OIS1N = TIM16_CR2_OIS1N_Values<TIM16::CR2, 9, 1, ReadWriteMode, TIM16CR2Base> ;
    using OIS1 = TIM16_CR2_OIS1_Values<TIM16::CR2, 8, 1, ReadWriteMode, TIM16CR2Base> ;
    using CCDS = TIM16_CR2_CCDS_Values<TIM16::CR2, 3, 1, ReadWriteMode, TIM16CR2Base> ;
    using CCUS = TIM16_CR2_CCUS_Values<TIM16::CR2, 2, 1, ReadWriteMode, TIM16CR2Base> ;
    using CCPC = TIM16_CR2_CCPC_Values<TIM16::CR2, 0, 1, ReadWriteMode, TIM16CR2Base> ;
    using FieldValues = TIM16_CR2_CCPC_Values<TIM16::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40014404, 32, ReadWriteMode, TIM16CR2Base, T...> ;

  struct TIM16DIERBase {} ;

  struct DIER : public RegisterBase<0x4001440C, 32, ReadWriteMode>
  {
    using UIE = TIM16_DIER_UIE_Values<TIM16::DIER, 0, 1, ReadWriteMode, TIM16DIERBase> ;
    using CC1IE = TIM16_DIER_CC1IE_Values<TIM16::DIER, 1, 1, ReadWriteMode, TIM16DIERBase> ;
    using COMIE = TIM16_DIER_COMIE_Values<TIM16::DIER, 5, 1, ReadWriteMode, TIM16DIERBase> ;
    using TIE = TIM16_DIER_TIE_Values<TIM16::DIER, 6, 1, ReadWriteMode, TIM16DIERBase> ;
    using BIE = TIM16_DIER_BIE_Values<TIM16::DIER, 7, 1, ReadWriteMode, TIM16DIERBase> ;
    using UDE = TIM16_DIER_UDE_Values<TIM16::DIER, 8, 1, ReadWriteMode, TIM16DIERBase> ;
    using CC1DE = TIM16_DIER_CC1DE_Values<TIM16::DIER, 9, 1, ReadWriteMode, TIM16DIERBase> ;
    using COMDE = TIM16_DIER_COMDE_Values<TIM16::DIER, 13, 1, ReadWriteMode, TIM16DIERBase> ;
    using TDE = TIM16_DIER_TDE_Values<TIM16::DIER, 14, 1, ReadWriteMode, TIM16DIERBase> ;
    using FieldValues = TIM16_DIER_TDE_Values<TIM16::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001440C, 32, ReadWriteMode, TIM16DIERBase, T...> ;

  struct TIM16SRBase {} ;

  struct SR : public RegisterBase<0x40014410, 32, ReadWriteMode>
  {
    using CC1OF = TIM16_SR_CC1OF_Values<TIM16::SR, 9, 1, ReadWriteMode, TIM16SRBase> ;
    using BIF = TIM16_SR_BIF_Values<TIM16::SR, 7, 1, ReadWriteMode, TIM16SRBase> ;
    using TIF = TIM16_SR_TIF_Values<TIM16::SR, 6, 1, ReadWriteMode, TIM16SRBase> ;
    using COMIF = TIM16_SR_COMIF_Values<TIM16::SR, 5, 1, ReadWriteMode, TIM16SRBase> ;
    using CC1IF = TIM16_SR_CC1IF_Values<TIM16::SR, 1, 1, ReadWriteMode, TIM16SRBase> ;
    using UIF = TIM16_SR_UIF_Values<TIM16::SR, 0, 1, ReadWriteMode, TIM16SRBase> ;
    using FieldValues = TIM16_SR_UIF_Values<TIM16::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014410, 32, ReadWriteMode, TIM16SRBase, T...> ;

  struct TIM16EGRBase {} ;

  struct EGR : public RegisterBase<0x40014414, 32, WriteMode>
  {
    using BG = TIM16_EGR_BG_Values<TIM16::EGR, 7, 1, WriteMode, TIM16EGRBase> ;
    using TG = TIM16_EGR_TG_Values<TIM16::EGR, 6, 1, WriteMode, TIM16EGRBase> ;
    using COMG = TIM16_EGR_COMG_Values<TIM16::EGR, 5, 1, WriteMode, TIM16EGRBase> ;
    using CC1G = TIM16_EGR_CC1G_Values<TIM16::EGR, 1, 1, WriteMode, TIM16EGRBase> ;
    using UG = TIM16_EGR_UG_Values<TIM16::EGR, 0, 1, WriteMode, TIM16EGRBase> ;
    using FieldValues = TIM16_EGR_UG_Values<TIM16::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014414, 32, WriteMode, TIM16EGRBase, T...> ;

  struct TIM16CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using CC1S = TIM16_CCMR1_Output_CC1S_Values<TIM16::CCMR1_Output, 0, 2, ReadWriteMode, TIM16CCMR1_OutputBase> ;
    using OC1FE = TIM16_CCMR1_Output_OC1FE_Values<TIM16::CCMR1_Output, 2, 1, ReadWriteMode, TIM16CCMR1_OutputBase> ;
    using OC1PE = TIM16_CCMR1_Output_OC1PE_Values<TIM16::CCMR1_Output, 3, 1, ReadWriteMode, TIM16CCMR1_OutputBase> ;
    using OC1M = TIM16_CCMR1_Output_OC1M_Values<TIM16::CCMR1_Output, 4, 3, ReadWriteMode, TIM16CCMR1_OutputBase> ;
    using OC1M_3 = TIM16_CCMR1_Output_OC1M_3_Values<TIM16::CCMR1_Output, 16, 1, ReadWriteMode, TIM16CCMR1_OutputBase> ;
    using FieldValues = TIM16_CCMR1_Output_OC1M_3_Values<TIM16::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014418, 32, ReadWriteMode, TIM16CCMR1_OutputBase, T...> ;

  struct TIM16CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014418, 32, ReadWriteMode>
  {
    using IC1F = TIM16_CCMR1_Input_IC1F_Values<TIM16::CCMR1_Input, 4, 4, ReadWriteMode, TIM16CCMR1_InputBase> ;
    using IC1PSC = TIM16_CCMR1_Input_IC1PSC_Values<TIM16::CCMR1_Input, 2, 2, ReadWriteMode, TIM16CCMR1_InputBase> ;
    using CC1S = TIM16_CCMR1_Input_CC1S_Values<TIM16::CCMR1_Input, 0, 2, ReadWriteMode, TIM16CCMR1_InputBase> ;
    using FieldValues = TIM16_CCMR1_Input_CC1S_Values<TIM16::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014418, 32, ReadWriteMode, TIM16CCMR1_InputBase, T...> ;

  struct TIM16CCERBase {} ;

  struct CCER : public RegisterBase<0x40014420, 32, ReadWriteMode>
  {
    using CC1NP = TIM16_CCER_CC1NP_Values<TIM16::CCER, 3, 1, ReadWriteMode, TIM16CCERBase> ;
    using CC1NE = TIM16_CCER_CC1NE_Values<TIM16::CCER, 2, 1, ReadWriteMode, TIM16CCERBase> ;
    using CC1P = TIM16_CCER_CC1P_Values<TIM16::CCER, 1, 1, ReadWriteMode, TIM16CCERBase> ;
    using CC1E = TIM16_CCER_CC1E_Values<TIM16::CCER, 0, 1, ReadWriteMode, TIM16CCERBase> ;
    using FieldValues = TIM16_CCER_CC1E_Values<TIM16::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014420, 32, ReadWriteMode, TIM16CCERBase, T...> ;

  struct TIM16CNTBase {} ;

  struct CNT : public RegisterBase<0x40014424, 32, ReadWriteMode>
  {
    using CNTField = TIM16_CNT_CNT_Values<TIM16::CNT, 0, 16, ReadWriteMode, TIM16CNTBase> ;
    using UIFCPY = TIM16_CNT_UIFCPY_Values<TIM16::CNT, 31, 1, ReadMode, TIM16CNTBase> ;
    using FieldValues = TIM16_CNT_UIFCPY_Values<TIM16::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014424, 32, ReadWriteMode, TIM16CNTBase, T...> ;

  struct TIM16PSCBase {} ;

  struct PSC : public RegisterBase<0x40014428, 32, ReadWriteMode>
  {
    using PSCField = TIM16_PSC_PSC_Values<TIM16::PSC, 0, 16, ReadWriteMode, TIM16PSCBase> ;
    using FieldValues = TIM16_PSC_PSC_Values<TIM16::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014428, 32, ReadWriteMode, TIM16PSCBase, T...> ;

  struct TIM16ARRBase {} ;

  struct ARR : public RegisterBase<0x4001442C, 32, ReadWriteMode>
  {
    using ARRField = TIM16_ARR_ARR_Values<TIM16::ARR, 0, 16, ReadWriteMode, TIM16ARRBase> ;
    using FieldValues = TIM16_ARR_ARR_Values<TIM16::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001442C, 32, ReadWriteMode, TIM16ARRBase, T...> ;

  struct TIM16RCRBase {} ;

  struct RCR : public RegisterBase<0x40014430, 32, ReadWriteMode>
  {
    using REP = TIM16_RCR_REP_Values<TIM16::RCR, 0, 8, ReadWriteMode, TIM16RCRBase> ;
    using FieldValues = TIM16_RCR_REP_Values<TIM16::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40014430, 32, ReadWriteMode, TIM16RCRBase, T...> ;

  struct TIM16CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM16_CCR1_CCR1_Values<TIM16::CCR1, 0, 16, ReadWriteMode, TIM16CCR1Base> ;
    using FieldValues = TIM16_CCR1_CCR1_Values<TIM16::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014434, 32, ReadWriteMode, TIM16CCR1Base, T...> ;

  struct TIM16BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40014444, 32, ReadWriteMode>
  {
    using DTG = TIM16_BDTR_DTG_Values<TIM16::BDTR, 0, 8, ReadWriteMode, TIM16BDTRBase> ;
    using LOCK = TIM16_BDTR_LOCK_Values<TIM16::BDTR, 8, 2, ReadWriteMode, TIM16BDTRBase> ;
    using OSSI = TIM16_BDTR_OSSI_Values<TIM16::BDTR, 10, 1, ReadWriteMode, TIM16BDTRBase> ;
    using OSSR = TIM16_BDTR_OSSR_Values<TIM16::BDTR, 11, 1, ReadWriteMode, TIM16BDTRBase> ;
    using BKE = TIM16_BDTR_BKE_Values<TIM16::BDTR, 12, 1, ReadWriteMode, TIM16BDTRBase> ;
    using BKP = TIM16_BDTR_BKP_Values<TIM16::BDTR, 13, 1, ReadWriteMode, TIM16BDTRBase> ;
    using AOE = TIM16_BDTR_AOE_Values<TIM16::BDTR, 14, 1, ReadWriteMode, TIM16BDTRBase> ;
    using MOE = TIM16_BDTR_MOE_Values<TIM16::BDTR, 15, 1, ReadWriteMode, TIM16BDTRBase> ;
    using BKF = TIM16_BDTR_BKF_Values<TIM16::BDTR, 16, 4, ReadWriteMode, TIM16BDTRBase> ;
    using FieldValues = TIM16_BDTR_BKF_Values<TIM16::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40014444, 32, ReadWriteMode, TIM16BDTRBase, T...> ;

  struct TIM16DCRBase {} ;

  struct DCR : public RegisterBase<0x40014448, 32, ReadWriteMode>
  {
    using DBL = TIM16_DCR_DBL_Values<TIM16::DCR, 8, 5, ReadWriteMode, TIM16DCRBase> ;
    using DBA = TIM16_DCR_DBA_Values<TIM16::DCR, 0, 5, ReadWriteMode, TIM16DCRBase> ;
    using FieldValues = TIM16_DCR_DBA_Values<TIM16::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40014448, 32, ReadWriteMode, TIM16DCRBase, T...> ;

  struct TIM16DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001444C, 32, ReadWriteMode>
  {
    using DMAB = TIM16_DMAR_DMAB_Values<TIM16::DMAR, 0, 16, ReadWriteMode, TIM16DMARBase> ;
    using FieldValues = TIM16_DMAR_DMAB_Values<TIM16::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001444C, 32, ReadWriteMode, TIM16DMARBase, T...> ;

  struct TIM16ORBase {} ;

  struct OR : public RegisterBase<0x40014450, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40014450, 32, ReadWriteMode, TIM16ORBase, T...> ;

} ;

#endif //#if !defined(TIM16REGISTERS_HPP)
