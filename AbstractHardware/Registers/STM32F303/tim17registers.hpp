/*******************************************************************************
* Filename      : tim17registers.hpp
*
* Details       : General purpose timer. This header file is auto-generated for
*                 STM32F303 device.
*
*
*******************************************************************************/

#if !defined(TIM17REGISTERS_HPP)
#define TIM17REGISTERS_HPP

#include "tim17fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM17
{
  struct TIM17CR1Base {} ;

  struct CR1 : public RegisterBase<0x40014800, 32, ReadWriteMode>
  {
    using CEN = TIM17_CR1_CEN_Values<TIM17::CR1, 0, 1, ReadWriteMode, TIM17CR1Base> ;
    using UDIS = TIM17_CR1_UDIS_Values<TIM17::CR1, 1, 1, ReadWriteMode, TIM17CR1Base> ;
    using URS = TIM17_CR1_URS_Values<TIM17::CR1, 2, 1, ReadWriteMode, TIM17CR1Base> ;
    using OPM = TIM17_CR1_OPM_Values<TIM17::CR1, 3, 1, ReadWriteMode, TIM17CR1Base> ;
    using ARPE = TIM17_CR1_ARPE_Values<TIM17::CR1, 7, 1, ReadWriteMode, TIM17CR1Base> ;
    using CKD = TIM17_CR1_CKD_Values<TIM17::CR1, 8, 2, ReadWriteMode, TIM17CR1Base> ;
    using UIFREMAP = TIM17_CR1_UIFREMAP_Values<TIM17::CR1, 11, 1, ReadWriteMode, TIM17CR1Base> ;
    using FieldValues = TIM17_CR1_UIFREMAP_Values<TIM17::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40014800, 32, ReadWriteMode, TIM17CR1Base, T...> ;

  struct TIM17CR2Base {} ;

  struct CR2 : public RegisterBase<0x40014804, 32, ReadWriteMode>
  {
    using OIS1N = TIM17_CR2_OIS1N_Values<TIM17::CR2, 9, 1, ReadWriteMode, TIM17CR2Base> ;
    using OIS1 = TIM17_CR2_OIS1_Values<TIM17::CR2, 8, 1, ReadWriteMode, TIM17CR2Base> ;
    using CCDS = TIM17_CR2_CCDS_Values<TIM17::CR2, 3, 1, ReadWriteMode, TIM17CR2Base> ;
    using CCUS = TIM17_CR2_CCUS_Values<TIM17::CR2, 2, 1, ReadWriteMode, TIM17CR2Base> ;
    using CCPC = TIM17_CR2_CCPC_Values<TIM17::CR2, 0, 1, ReadWriteMode, TIM17CR2Base> ;
    using FieldValues = TIM17_CR2_CCPC_Values<TIM17::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40014804, 32, ReadWriteMode, TIM17CR2Base, T...> ;

  struct TIM17DIERBase {} ;

  struct DIER : public RegisterBase<0x4001480C, 32, ReadWriteMode>
  {
    using UIE = TIM17_DIER_UIE_Values<TIM17::DIER, 0, 1, ReadWriteMode, TIM17DIERBase> ;
    using CC1IE = TIM17_DIER_CC1IE_Values<TIM17::DIER, 1, 1, ReadWriteMode, TIM17DIERBase> ;
    using COMIE = TIM17_DIER_COMIE_Values<TIM17::DIER, 5, 1, ReadWriteMode, TIM17DIERBase> ;
    using TIE = TIM17_DIER_TIE_Values<TIM17::DIER, 6, 1, ReadWriteMode, TIM17DIERBase> ;
    using BIE = TIM17_DIER_BIE_Values<TIM17::DIER, 7, 1, ReadWriteMode, TIM17DIERBase> ;
    using UDE = TIM17_DIER_UDE_Values<TIM17::DIER, 8, 1, ReadWriteMode, TIM17DIERBase> ;
    using CC1DE = TIM17_DIER_CC1DE_Values<TIM17::DIER, 9, 1, ReadWriteMode, TIM17DIERBase> ;
    using COMDE = TIM17_DIER_COMDE_Values<TIM17::DIER, 13, 1, ReadWriteMode, TIM17DIERBase> ;
    using TDE = TIM17_DIER_TDE_Values<TIM17::DIER, 14, 1, ReadWriteMode, TIM17DIERBase> ;
    using FieldValues = TIM17_DIER_TDE_Values<TIM17::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001480C, 32, ReadWriteMode, TIM17DIERBase, T...> ;

  struct TIM17SRBase {} ;

  struct SR : public RegisterBase<0x40014810, 32, ReadWriteMode>
  {
    using CC1OF = TIM17_SR_CC1OF_Values<TIM17::SR, 9, 1, ReadWriteMode, TIM17SRBase> ;
    using BIF = TIM17_SR_BIF_Values<TIM17::SR, 7, 1, ReadWriteMode, TIM17SRBase> ;
    using TIF = TIM17_SR_TIF_Values<TIM17::SR, 6, 1, ReadWriteMode, TIM17SRBase> ;
    using COMIF = TIM17_SR_COMIF_Values<TIM17::SR, 5, 1, ReadWriteMode, TIM17SRBase> ;
    using CC1IF = TIM17_SR_CC1IF_Values<TIM17::SR, 1, 1, ReadWriteMode, TIM17SRBase> ;
    using UIF = TIM17_SR_UIF_Values<TIM17::SR, 0, 1, ReadWriteMode, TIM17SRBase> ;
    using FieldValues = TIM17_SR_UIF_Values<TIM17::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40014810, 32, ReadWriteMode, TIM17SRBase, T...> ;

  struct TIM17EGRBase {} ;

  struct EGR : public RegisterBase<0x40014814, 32, WriteMode>
  {
    using BG = TIM17_EGR_BG_Values<TIM17::EGR, 7, 1, WriteMode, TIM17EGRBase> ;
    using TG = TIM17_EGR_TG_Values<TIM17::EGR, 6, 1, WriteMode, TIM17EGRBase> ;
    using COMG = TIM17_EGR_COMG_Values<TIM17::EGR, 5, 1, WriteMode, TIM17EGRBase> ;
    using CC1G = TIM17_EGR_CC1G_Values<TIM17::EGR, 1, 1, WriteMode, TIM17EGRBase> ;
    using UG = TIM17_EGR_UG_Values<TIM17::EGR, 0, 1, WriteMode, TIM17EGRBase> ;
    using FieldValues = TIM17_EGR_UG_Values<TIM17::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40014814, 32, WriteMode, TIM17EGRBase, T...> ;

  struct TIM17CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using CC1S = TIM17_CCMR1_Output_CC1S_Values<TIM17::CCMR1_Output, 0, 2, ReadWriteMode, TIM17CCMR1_OutputBase> ;
    using OC1FE = TIM17_CCMR1_Output_OC1FE_Values<TIM17::CCMR1_Output, 2, 1, ReadWriteMode, TIM17CCMR1_OutputBase> ;
    using OC1PE = TIM17_CCMR1_Output_OC1PE_Values<TIM17::CCMR1_Output, 3, 1, ReadWriteMode, TIM17CCMR1_OutputBase> ;
    using OC1M = TIM17_CCMR1_Output_OC1M_Values<TIM17::CCMR1_Output, 4, 3, ReadWriteMode, TIM17CCMR1_OutputBase> ;
    using OC1M_3 = TIM17_CCMR1_Output_OC1M_3_Values<TIM17::CCMR1_Output, 16, 1, ReadWriteMode, TIM17CCMR1_OutputBase> ;
    using FieldValues = TIM17_CCMR1_Output_OC1M_3_Values<TIM17::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40014818, 32, ReadWriteMode, TIM17CCMR1_OutputBase, T...> ;

  struct TIM17CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40014818, 32, ReadWriteMode>
  {
    using IC1F = TIM17_CCMR1_Input_IC1F_Values<TIM17::CCMR1_Input, 4, 4, ReadWriteMode, TIM17CCMR1_InputBase> ;
    using IC1PSC = TIM17_CCMR1_Input_IC1PSC_Values<TIM17::CCMR1_Input, 2, 2, ReadWriteMode, TIM17CCMR1_InputBase> ;
    using CC1S = TIM17_CCMR1_Input_CC1S_Values<TIM17::CCMR1_Input, 0, 2, ReadWriteMode, TIM17CCMR1_InputBase> ;
    using FieldValues = TIM17_CCMR1_Input_CC1S_Values<TIM17::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40014818, 32, ReadWriteMode, TIM17CCMR1_InputBase, T...> ;

  struct TIM17CCERBase {} ;

  struct CCER : public RegisterBase<0x40014820, 32, ReadWriteMode>
  {
    using CC1NP = TIM17_CCER_CC1NP_Values<TIM17::CCER, 3, 1, ReadWriteMode, TIM17CCERBase> ;
    using CC1NE = TIM17_CCER_CC1NE_Values<TIM17::CCER, 2, 1, ReadWriteMode, TIM17CCERBase> ;
    using CC1P = TIM17_CCER_CC1P_Values<TIM17::CCER, 1, 1, ReadWriteMode, TIM17CCERBase> ;
    using CC1E = TIM17_CCER_CC1E_Values<TIM17::CCER, 0, 1, ReadWriteMode, TIM17CCERBase> ;
    using FieldValues = TIM17_CCER_CC1E_Values<TIM17::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40014820, 32, ReadWriteMode, TIM17CCERBase, T...> ;

  struct TIM17CNTBase {} ;

  struct CNT : public RegisterBase<0x40014824, 32, ReadWriteMode>
  {
    using CNTField = TIM17_CNT_CNT_Values<TIM17::CNT, 0, 16, ReadWriteMode, TIM17CNTBase> ;
    using UIFCPY = TIM17_CNT_UIFCPY_Values<TIM17::CNT, 31, 1, ReadMode, TIM17CNTBase> ;
    using FieldValues = TIM17_CNT_UIFCPY_Values<TIM17::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40014824, 32, ReadWriteMode, TIM17CNTBase, T...> ;

  struct TIM17PSCBase {} ;

  struct PSC : public RegisterBase<0x40014828, 32, ReadWriteMode>
  {
    using PSCField = TIM17_PSC_PSC_Values<TIM17::PSC, 0, 16, ReadWriteMode, TIM17PSCBase> ;
    using FieldValues = TIM17_PSC_PSC_Values<TIM17::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40014828, 32, ReadWriteMode, TIM17PSCBase, T...> ;

  struct TIM17ARRBase {} ;

  struct ARR : public RegisterBase<0x4001482C, 32, ReadWriteMode>
  {
    using ARRField = TIM17_ARR_ARR_Values<TIM17::ARR, 0, 16, ReadWriteMode, TIM17ARRBase> ;
    using FieldValues = TIM17_ARR_ARR_Values<TIM17::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001482C, 32, ReadWriteMode, TIM17ARRBase, T...> ;

  struct TIM17RCRBase {} ;

  struct RCR : public RegisterBase<0x40014830, 32, ReadWriteMode>
  {
    using REP = TIM17_RCR_REP_Values<TIM17::RCR, 0, 8, ReadWriteMode, TIM17RCRBase> ;
    using FieldValues = TIM17_RCR_REP_Values<TIM17::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40014830, 32, ReadWriteMode, TIM17RCRBase, T...> ;

  struct TIM17CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40014834, 32, ReadWriteMode>
  {
    using CCR1Field = TIM17_CCR1_CCR1_Values<TIM17::CCR1, 0, 16, ReadWriteMode, TIM17CCR1Base> ;
    using FieldValues = TIM17_CCR1_CCR1_Values<TIM17::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40014834, 32, ReadWriteMode, TIM17CCR1Base, T...> ;

  struct TIM17BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40014844, 32, ReadWriteMode>
  {
    using DTG = TIM17_BDTR_DTG_Values<TIM17::BDTR, 0, 8, ReadWriteMode, TIM17BDTRBase> ;
    using LOCK = TIM17_BDTR_LOCK_Values<TIM17::BDTR, 8, 2, ReadWriteMode, TIM17BDTRBase> ;
    using OSSI = TIM17_BDTR_OSSI_Values<TIM17::BDTR, 10, 1, ReadWriteMode, TIM17BDTRBase> ;
    using OSSR = TIM17_BDTR_OSSR_Values<TIM17::BDTR, 11, 1, ReadWriteMode, TIM17BDTRBase> ;
    using BKE = TIM17_BDTR_BKE_Values<TIM17::BDTR, 12, 1, ReadWriteMode, TIM17BDTRBase> ;
    using BKP = TIM17_BDTR_BKP_Values<TIM17::BDTR, 13, 1, ReadWriteMode, TIM17BDTRBase> ;
    using AOE = TIM17_BDTR_AOE_Values<TIM17::BDTR, 14, 1, ReadWriteMode, TIM17BDTRBase> ;
    using MOE = TIM17_BDTR_MOE_Values<TIM17::BDTR, 15, 1, ReadWriteMode, TIM17BDTRBase> ;
    using BKF = TIM17_BDTR_BKF_Values<TIM17::BDTR, 16, 4, ReadWriteMode, TIM17BDTRBase> ;
    using FieldValues = TIM17_BDTR_BKF_Values<TIM17::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40014844, 32, ReadWriteMode, TIM17BDTRBase, T...> ;

  struct TIM17DCRBase {} ;

  struct DCR : public RegisterBase<0x40014848, 32, ReadWriteMode>
  {
    using DBL = TIM17_DCR_DBL_Values<TIM17::DCR, 8, 5, ReadWriteMode, TIM17DCRBase> ;
    using DBA = TIM17_DCR_DBA_Values<TIM17::DCR, 0, 5, ReadWriteMode, TIM17DCRBase> ;
    using FieldValues = TIM17_DCR_DBA_Values<TIM17::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40014848, 32, ReadWriteMode, TIM17DCRBase, T...> ;

  struct TIM17DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001484C, 32, ReadWriteMode>
  {
    using DMAB = TIM17_DMAR_DMAB_Values<TIM17::DMAR, 0, 16, ReadWriteMode, TIM17DMARBase> ;
    using FieldValues = TIM17_DMAR_DMAB_Values<TIM17::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001484C, 32, ReadWriteMode, TIM17DMARBase, T...> ;

} ;

#endif //#if !defined(TIM17REGISTERS_HPP)
