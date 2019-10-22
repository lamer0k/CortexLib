/*******************************************************************************
* Filename      : mdradcregisters.hpp
*
* Details       : Successive Approximation ADC. This header file is
*                 auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRADCREGISTERS_HPP)
#define MDRADCREGISTERS_HPP

#include "mdradcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_ADC
{
  struct MDR_ADCADC1_CfgBase {} ;

  struct ADC1_Cfg : public RegisterBase<0x40088000, 32, ReadWriteMode>
  {
    using ADON = MDR_ADC_ADC1_Cfg_ADON_Values<MDR_ADC::ADC1_Cfg, 0, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using GO = MDR_ADC_ADC1_Cfg_GO_Values<MDR_ADC::ADC1_Cfg, 1, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using CLKS = MDR_ADC_ADC1_Cfg_CLKS_Values<MDR_ADC::ADC1_Cfg, 2, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SAMPLE = MDR_ADC_ADC1_Cfg_SAMPLE_Values<MDR_ADC::ADC1_Cfg, 3, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using CHS = MDR_ADC_ADC1_Cfg_CHS_Values<MDR_ADC::ADC1_Cfg, 4, 5, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using CHCH = MDR_ADC_ADC1_Cfg_CHCH_Values<MDR_ADC::ADC1_Cfg, 9, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using RGNC = MDR_ADC_ADC1_Cfg_RGNC_Values<MDR_ADC::ADC1_Cfg, 10, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using M_REF = MDR_ADC_ADC1_Cfg_M_REF_Values<MDR_ADC::ADC1_Cfg, 11, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using DIV_CLK = MDR_ADC_ADC1_Cfg_DIV_CLK_Values<MDR_ADC::ADC1_Cfg, 12, 4, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SYNC_CONV = MDR_ADC_ADC1_Cfg_SYNC_CONV_Values<MDR_ADC::ADC1_Cfg, 16, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using TS_EN = MDR_ADC_ADC1_Cfg_TS_EN_Values<MDR_ADC::ADC1_Cfg, 17, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using TS_BUFF_EN = MDR_ADC_ADC1_Cfg_TS_BUFF_EN_Values<MDR_ADC::ADC1_Cfg, 18, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SEL_TS = MDR_ADC_ADC1_Cfg_SEL_TS_Values<MDR_ADC::ADC1_Cfg, 19, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SEL_VREF = MDR_ADC_ADC1_Cfg_SEL_VREF_Values<MDR_ADC::ADC1_Cfg, 20, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using TR = MDR_ADC_ADC1_Cfg_TR_Values<MDR_ADC::ADC1_Cfg, 21, 4, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using Delay_GO = MDR_ADC_ADC1_Cfg_Delay_GO_Values<MDR_ADC::ADC1_Cfg, 25, 3, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using Delay_ADC = MDR_ADC_ADC1_Cfg_Delay_ADC_Values<MDR_ADC::ADC1_Cfg, 28, 4, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using FieldValues = MDR_ADC_ADC1_Cfg_Delay_ADC_Values<MDR_ADC::ADC1_Cfg, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_CfgPack  = Register<0x40088000, 32, ReadWriteMode, MDR_ADCADC1_CfgBase, T...> ;

  struct MDR_ADCADC2_CfgBase {} ;

  struct ADC2_Cfg : public RegisterBase<0x40088004, 32, ReadWriteMode>
  {
    using ADON = MDR_ADC_ADC2_Cfg_ADON_Values<MDR_ADC::ADC2_Cfg, 0, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using GO = MDR_ADC_ADC2_Cfg_GO_Values<MDR_ADC::ADC2_Cfg, 1, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using CLKS = MDR_ADC_ADC2_Cfg_CLKS_Values<MDR_ADC::ADC2_Cfg, 2, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using SAMPLE = MDR_ADC_ADC2_Cfg_SAMPLE_Values<MDR_ADC::ADC2_Cfg, 3, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using CHS = MDR_ADC_ADC2_Cfg_CHS_Values<MDR_ADC::ADC2_Cfg, 4, 5, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using CHCH = MDR_ADC_ADC2_Cfg_CHCH_Values<MDR_ADC::ADC2_Cfg, 9, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using RGNC = MDR_ADC_ADC2_Cfg_RGNC_Values<MDR_ADC::ADC2_Cfg, 10, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using REF = MDR_ADC_ADC2_Cfg_REF_Values<MDR_ADC::ADC2_Cfg, 11, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using CLKS = MDR_ADC_ADC2_Cfg_CLKS_Values<MDR_ADC::ADC2_Cfg, 12, 4, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using ADC1_OP = MDR_ADC_ADC2_Cfg_ADC1_OP_Values<MDR_ADC::ADC2_Cfg, 17, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using ADC2_OP = MDR_ADC_ADC2_Cfg_ADC2_OP_Values<MDR_ADC::ADC2_Cfg, 18, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using Delay_GO = MDR_ADC_ADC2_Cfg_Delay_GO_Values<MDR_ADC::ADC2_Cfg, 25, 3, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using FieldValues = MDR_ADC_ADC2_Cfg_Delay_GO_Values<MDR_ADC::ADC2_Cfg, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_CfgPack  = Register<0x40088004, 32, ReadWriteMode, MDR_ADCADC2_CfgBase, T...> ;

  struct MDR_ADCADC1_H_LevelBase {} ;

  struct ADC1_H_Level : public RegisterBase<0x40088008, 32, ReadWriteMode>
  {
    using Level = MDR_ADC_ADC1_H_Level_Level_Values<MDR_ADC::ADC1_H_Level, 0, 12, ReadWriteMode, MDR_ADCADC1_H_LevelBase> ;
    using FieldValues = MDR_ADC_ADC1_H_Level_Level_Values<MDR_ADC::ADC1_H_Level, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_H_LevelPack  = Register<0x40088008, 32, ReadWriteMode, MDR_ADCADC1_H_LevelBase, T...> ;

  struct MDR_ADCADC2_H_LevelBase {} ;

  struct ADC2_H_Level : public RegisterBase<0x4008800C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC2_H_Level, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_H_LevelPack  = Register<0x4008800C, 32, ReadWriteMode, MDR_ADCADC2_H_LevelBase, T...> ;

  struct MDR_ADCADC1_L_LevelBase {} ;

  struct ADC1_L_Level : public RegisterBase<0x40088010, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC1_L_Level, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_L_LevelPack  = Register<0x40088010, 32, ReadWriteMode, MDR_ADCADC1_L_LevelBase, T...> ;

  struct MDR_ADCADC2_L_LevelBase {} ;

  struct ADC2_L_Level : public RegisterBase<0x40088014, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC2_L_Level, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_L_LevelPack  = Register<0x40088014, 32, ReadWriteMode, MDR_ADCADC2_L_LevelBase, T...> ;

  struct MDR_ADCADC1_RESULTBase {} ;

  struct ADC1_RESULT : public RegisterBase<0x40088018, 32, ReadMode>
  {
    using Value = MDR_ADC_ADC1_RESULT_Value_Values<MDR_ADC::ADC1_RESULT, 0, 12, ReadMode, MDR_ADCADC1_RESULTBase> ;
    using Channel = MDR_ADC_ADC1_RESULT_Channel_Values<MDR_ADC::ADC1_RESULT, 16, 5, ReadMode, MDR_ADCADC1_RESULTBase> ;
    using FieldValues = MDR_ADC_ADC1_RESULT_Channel_Values<MDR_ADC::ADC1_RESULT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_RESULTPack  = Register<0x40088018, 32, ReadMode, MDR_ADCADC1_RESULTBase, T...> ;

  struct MDR_ADCADC2_RESULTBase {} ;

  struct ADC2_RESULT : public RegisterBase<0x4008801C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC2_RESULT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_RESULTPack  = Register<0x4008801C, 32, ReadWriteMode, MDR_ADCADC2_RESULTBase, T...> ;

  struct MDR_ADCADC1_STATUSBase {} ;

  struct ADC1_STATUS : public RegisterBase<0x40088020, 32, ReadWriteMode>
  {
    using Overwrite = MDR_ADC_ADC1_STATUS_Overwrite_Values<MDR_ADC::ADC1_STATUS, 0, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using AWOIFEN = MDR_ADC_ADC1_STATUS_AWOIFEN_Values<MDR_ADC::ADC1_STATUS, 1, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using EOCIF = MDR_ADC_ADC1_STATUS_EOCIF_Values<MDR_ADC::ADC1_STATUS, 2, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using AWOIF_IE = MDR_ADC_ADC1_STATUS_AWOIF_IE_Values<MDR_ADC::ADC1_STATUS, 3, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using EOCIF_EN = MDR_ADC_ADC1_STATUS_EOCIF_EN_Values<MDR_ADC::ADC1_STATUS, 4, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using FieldValues = MDR_ADC_ADC1_STATUS_EOCIF_EN_Values<MDR_ADC::ADC1_STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_STATUSPack  = Register<0x40088020, 32, ReadWriteMode, MDR_ADCADC1_STATUSBase, T...> ;

  struct MDR_ADCADC2_STATUSBase {} ;

  struct ADC2_STATUS : public RegisterBase<0x40088024, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC2_STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_STATUSPack  = Register<0x40088024, 32, ReadWriteMode, MDR_ADCADC2_STATUSBase, T...> ;

  struct MDR_ADCADC1_CHSELBase {} ;

  struct ADC1_CHSEL : public RegisterBase<0x40088028, 32, ReadWriteMode>
  {
    using Channel_0 = MDR_ADC_ADC1_CHSEL_Channel_0_Values<MDR_ADC::ADC1_CHSEL, 0, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_1 = MDR_ADC_ADC1_CHSEL_Channel_1_Values<MDR_ADC::ADC1_CHSEL, 1, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_2 = MDR_ADC_ADC1_CHSEL_Channel_2_Values<MDR_ADC::ADC1_CHSEL, 2, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_3 = MDR_ADC_ADC1_CHSEL_Channel_3_Values<MDR_ADC::ADC1_CHSEL, 3, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_4 = MDR_ADC_ADC1_CHSEL_Channel_4_Values<MDR_ADC::ADC1_CHSEL, 4, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_5 = MDR_ADC_ADC1_CHSEL_Channel_5_Values<MDR_ADC::ADC1_CHSEL, 5, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_6 = MDR_ADC_ADC1_CHSEL_Channel_6_Values<MDR_ADC::ADC1_CHSEL, 6, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_7 = MDR_ADC_ADC1_CHSEL_Channel_7_Values<MDR_ADC::ADC1_CHSEL, 7, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_8 = MDR_ADC_ADC1_CHSEL_Channel_8_Values<MDR_ADC::ADC1_CHSEL, 8, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_9 = MDR_ADC_ADC1_CHSEL_Channel_9_Values<MDR_ADC::ADC1_CHSEL, 9, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_10 = MDR_ADC_ADC1_CHSEL_Channel_10_Values<MDR_ADC::ADC1_CHSEL, 10, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_11 = MDR_ADC_ADC1_CHSEL_Channel_11_Values<MDR_ADC::ADC1_CHSEL, 11, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_12 = MDR_ADC_ADC1_CHSEL_Channel_12_Values<MDR_ADC::ADC1_CHSEL, 12, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_13 = MDR_ADC_ADC1_CHSEL_Channel_13_Values<MDR_ADC::ADC1_CHSEL, 13, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_14 = MDR_ADC_ADC1_CHSEL_Channel_14_Values<MDR_ADC::ADC1_CHSEL, 14, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_15 = MDR_ADC_ADC1_CHSEL_Channel_15_Values<MDR_ADC::ADC1_CHSEL, 15, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_30 = MDR_ADC_ADC1_CHSEL_Channel_30_Values<MDR_ADC::ADC1_CHSEL, 30, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_31 = MDR_ADC_ADC1_CHSEL_Channel_31_Values<MDR_ADC::ADC1_CHSEL, 31, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using FieldValues = MDR_ADC_ADC1_CHSEL_Channel_31_Values<MDR_ADC::ADC1_CHSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_CHSELPack  = Register<0x40088028, 32, ReadWriteMode, MDR_ADCADC1_CHSELBase, T...> ;

  struct MDR_ADCADC2_CHSELBase {} ;

  struct ADC2_CHSEL : public RegisterBase<0x4008802C, 32, ReadWriteMode>
  {
    using FieldValues = <MDR_ADC::ADC2_CHSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_CHSELPack  = Register<0x4008802C, 32, ReadWriteMode, MDR_ADCADC2_CHSELBase, T...> ;

} ;

#endif //#if !defined(MDRADCREGISTERS_HPP)
