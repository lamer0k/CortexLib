/*******************************************************************************
* Filename      : mdradcregisters.hpp
*
* Details       : Successive Approximation ADC. This header file is
*                 auto-generated for MDR1986VE4 device.
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

  struct ADC1_Cfg : public RegisterBase<0x40040000, 32, ReadWriteMode>
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
    using TS_EN = MDR_ADC_ADC1_Cfg_TS_EN_Values<MDR_ADC::ADC1_Cfg, 17, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using TS_BUFF_EN = MDR_ADC_ADC1_Cfg_TS_BUFF_EN_Values<MDR_ADC::ADC1_Cfg, 18, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SEL_TS = MDR_ADC_ADC1_Cfg_SEL_TS_Values<MDR_ADC::ADC1_Cfg, 19, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using SEL_VREF = MDR_ADC_ADC1_Cfg_SEL_VREF_Values<MDR_ADC::ADC1_Cfg, 20, 1, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using Delay_GO = MDR_ADC_ADC1_Cfg_Delay_GO_Values<MDR_ADC::ADC1_Cfg, 25, 3, ReadWriteMode, MDR_ADCADC1_CfgBase> ;
    using FieldValues = MDR_ADC_ADC1_Cfg_Delay_GO_Values<MDR_ADC::ADC1_Cfg, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_CfgPack  = Register<0x40040000, 32, ReadWriteMode, MDR_ADCADC1_CfgBase, T...> ;

  struct MDR_ADCADC2_CfgBase {} ;

  struct ADC2_Cfg : public RegisterBase<0x40040004, 32, ReadWriteMode>
  {
    using ADC1_OP = MDR_ADC_ADC2_Cfg_ADC1_OP_Values<MDR_ADC::ADC2_Cfg, 17, 1, ReadWriteMode, MDR_ADCADC2_CfgBase> ;
    using FieldValues = MDR_ADC_ADC2_Cfg_ADC1_OP_Values<MDR_ADC::ADC2_Cfg, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2_CfgPack  = Register<0x40040004, 32, ReadWriteMode, MDR_ADCADC2_CfgBase, T...> ;

  struct MDR_ADCADC1_H_LevelBase {} ;

  struct ADC1_H_Level : public RegisterBase<0x40040008, 32, ReadWriteMode>
  {
    using Level = MDR_ADC_ADC1_H_Level_Level_Values<MDR_ADC::ADC1_H_Level, 0, 12, ReadWriteMode, MDR_ADCADC1_H_LevelBase> ;
    using FieldValues = MDR_ADC_ADC1_H_Level_Level_Values<MDR_ADC::ADC1_H_Level, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_H_LevelPack  = Register<0x40040008, 32, ReadWriteMode, MDR_ADCADC1_H_LevelBase, T...> ;

  struct MDR_ADCADC1_L_LevelBase {} ;

  struct ADC1_L_Level : public RegisterBase<0x40040010, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ADC1_L_LevelPack  = Register<0x40040010, 32, ReadWriteMode, MDR_ADCADC1_L_LevelBase, T...> ;

  struct MDR_ADCADC1_RESULTBase {} ;

  struct ADC1_RESULT : public RegisterBase<0x40040018, 32, ReadMode>
  {
    using Value = MDR_ADC_ADC1_RESULT_Value_Values<MDR_ADC::ADC1_RESULT, 0, 12, ReadMode, MDR_ADCADC1_RESULTBase> ;
    using Channel = MDR_ADC_ADC1_RESULT_Channel_Values<MDR_ADC::ADC1_RESULT, 16, 5, ReadMode, MDR_ADCADC1_RESULTBase> ;
    using FieldValues = MDR_ADC_ADC1_RESULT_Channel_Values<MDR_ADC::ADC1_RESULT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_RESULTPack  = Register<0x40040018, 32, ReadMode, MDR_ADCADC1_RESULTBase, T...> ;

  struct MDR_ADCADC1_STATUSBase {} ;

  struct ADC1_STATUS : public RegisterBase<0x40040020, 32, ReadWriteMode>
  {
    using Overwrite = MDR_ADC_ADC1_STATUS_Overwrite_Values<MDR_ADC::ADC1_STATUS, 0, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using AWOIFEN = MDR_ADC_ADC1_STATUS_AWOIFEN_Values<MDR_ADC::ADC1_STATUS, 1, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using EOCIF = MDR_ADC_ADC1_STATUS_EOCIF_Values<MDR_ADC::ADC1_STATUS, 2, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using AWOIF_IE = MDR_ADC_ADC1_STATUS_AWOIF_IE_Values<MDR_ADC::ADC1_STATUS, 3, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using EOCIF_EN = MDR_ADC_ADC1_STATUS_EOCIF_EN_Values<MDR_ADC::ADC1_STATUS, 4, 1, ReadWriteMode, MDR_ADCADC1_STATUSBase> ;
    using FieldValues = MDR_ADC_ADC1_STATUS_EOCIF_EN_Values<MDR_ADC::ADC1_STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_STATUSPack  = Register<0x40040020, 32, ReadWriteMode, MDR_ADCADC1_STATUSBase, T...> ;

  struct MDR_ADCADC1_CHSELBase {} ;

  struct ADC1_CHSEL : public RegisterBase<0x40040028, 32, ReadWriteMode>
  {
    using Channel_0 = MDR_ADC_ADC1_CHSEL_Channel_0_Values<MDR_ADC::ADC1_CHSEL, 0, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_1 = MDR_ADC_ADC1_CHSEL_Channel_1_Values<MDR_ADC::ADC1_CHSEL, 1, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_2 = MDR_ADC_ADC1_CHSEL_Channel_2_Values<MDR_ADC::ADC1_CHSEL, 2, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_3 = MDR_ADC_ADC1_CHSEL_Channel_3_Values<MDR_ADC::ADC1_CHSEL, 3, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_4 = MDR_ADC_ADC1_CHSEL_Channel_4_Values<MDR_ADC::ADC1_CHSEL, 4, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_5 = MDR_ADC_ADC1_CHSEL_Channel_5_Values<MDR_ADC::ADC1_CHSEL, 5, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_6 = MDR_ADC_ADC1_CHSEL_Channel_6_Values<MDR_ADC::ADC1_CHSEL, 6, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_7 = MDR_ADC_ADC1_CHSEL_Channel_7_Values<MDR_ADC::ADC1_CHSEL, 7, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_30 = MDR_ADC_ADC1_CHSEL_Channel_30_Values<MDR_ADC::ADC1_CHSEL, 30, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using Channel_31 = MDR_ADC_ADC1_CHSEL_Channel_31_Values<MDR_ADC::ADC1_CHSEL, 31, 1, ReadWriteMode, MDR_ADCADC1_CHSELBase> ;
    using FieldValues = MDR_ADC_ADC1_CHSEL_Channel_31_Values<MDR_ADC::ADC1_CHSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_CHSELPack  = Register<0x40040028, 32, ReadWriteMode, MDR_ADCADC1_CHSELBase, T...> ;

  struct MDR_ADCADC1_TRIMBase {} ;

  struct ADC1_TRIM : public RegisterBase<0x40040030, 32, ReadWriteMode>
  {
    using TS_Trim = MDR_ADC_ADC1_TRIM_TS_Trim_Values<MDR_ADC::ADC1_TRIM, 1, 5, ReadWriteMode, MDR_ADCADC1_TRIMBase> ;
    using SEL_VREF_BUF = MDR_ADC_ADC1_TRIM_SEL_VREF_BUF_Values<MDR_ADC::ADC1_TRIM, 6, 1, ReadWriteMode, MDR_ADCADC1_TRIMBase> ;
    using FieldValues = MDR_ADC_ADC1_TRIM_SEL_VREF_BUF_Values<MDR_ADC::ADC1_TRIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1_TRIMPack  = Register<0x40040030, 32, ReadWriteMode, MDR_ADCADC1_TRIMBase, T...> ;

} ;

#endif //#if !defined(MDRADCREGISTERS_HPP)
