/*******************************************************************************
* Filename      : adc1registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(ADC1REGISTERS_HPP)
#define ADC1REGISTERS_HPP

#include "adc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC1
{
  struct ADC1STATBase {} ;

  struct STAT : public RegisterBase<0x40012800, 32, ReadWriteMode>
  {
    using STRC = ADC1_STAT_STRC_Values<ADC1::STAT, 4, 1, ReadWriteMode, ADC1STATBase> ;
    using STIC = ADC1_STAT_STIC_Values<ADC1::STAT, 3, 1, ReadWriteMode, ADC1STATBase> ;
    using EOIC = ADC1_STAT_EOIC_Values<ADC1::STAT, 2, 1, ReadWriteMode, ADC1STATBase> ;
    using EOC = ADC1_STAT_EOC_Values<ADC1::STAT, 1, 1, ReadWriteMode, ADC1STATBase> ;
    using WDE = ADC1_STAT_WDE_Values<ADC1::STAT, 0, 1, ReadWriteMode, ADC1STATBase> ;
    using FieldValues = ADC1_STAT_WDE_Values<ADC1::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40012800, 32, ReadWriteMode, ADC1STATBase, T...> ;

  struct ADC1CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40012804, 32, ReadWriteMode>
  {
    using RWDEN = ADC1_CTL0_RWDEN_Values<ADC1::CTL0, 23, 1, ReadWriteMode, ADC1CTL0Base> ;
    using IWDEN = ADC1_CTL0_IWDEN_Values<ADC1::CTL0, 22, 1, ReadWriteMode, ADC1CTL0Base> ;
    using DISNUM = ADC1_CTL0_DISNUM_Values<ADC1::CTL0, 13, 3, ReadWriteMode, ADC1CTL0Base> ;
    using DISIC = ADC1_CTL0_DISIC_Values<ADC1::CTL0, 12, 1, ReadWriteMode, ADC1CTL0Base> ;
    using DISRC = ADC1_CTL0_DISRC_Values<ADC1::CTL0, 11, 1, ReadWriteMode, ADC1CTL0Base> ;
    using ICA = ADC1_CTL0_ICA_Values<ADC1::CTL0, 10, 1, ReadWriteMode, ADC1CTL0Base> ;
    using WDSC = ADC1_CTL0_WDSC_Values<ADC1::CTL0, 9, 1, ReadWriteMode, ADC1CTL0Base> ;
    using SM = ADC1_CTL0_SM_Values<ADC1::CTL0, 8, 1, ReadWriteMode, ADC1CTL0Base> ;
    using EOICIE = ADC1_CTL0_EOICIE_Values<ADC1::CTL0, 7, 1, ReadWriteMode, ADC1CTL0Base> ;
    using WDEIE = ADC1_CTL0_WDEIE_Values<ADC1::CTL0, 6, 1, ReadWriteMode, ADC1CTL0Base> ;
    using EOCIE = ADC1_CTL0_EOCIE_Values<ADC1::CTL0, 5, 1, ReadWriteMode, ADC1CTL0Base> ;
    using WDCHSEL = ADC1_CTL0_WDCHSEL_Values<ADC1::CTL0, 0, 5, ReadWriteMode, ADC1CTL0Base> ;
    using FieldValues = ADC1_CTL0_WDCHSEL_Values<ADC1::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40012804, 32, ReadWriteMode, ADC1CTL0Base, T...> ;

  struct ADC1CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40012808, 32, ReadWriteMode>
  {
    using SWRCST = ADC1_CTL1_SWRCST_Values<ADC1::CTL1, 22, 1, ReadWriteMode, ADC1CTL1Base> ;
    using SWICST = ADC1_CTL1_SWICST_Values<ADC1::CTL1, 21, 1, ReadWriteMode, ADC1CTL1Base> ;
    using ETERC = ADC1_CTL1_ETERC_Values<ADC1::CTL1, 20, 1, ReadWriteMode, ADC1CTL1Base> ;
    using ETSRC = ADC1_CTL1_ETSRC_Values<ADC1::CTL1, 17, 3, ReadWriteMode, ADC1CTL1Base> ;
    using ETEIC = ADC1_CTL1_ETEIC_Values<ADC1::CTL1, 15, 1, ReadWriteMode, ADC1CTL1Base> ;
    using ETSIC = ADC1_CTL1_ETSIC_Values<ADC1::CTL1, 12, 3, ReadWriteMode, ADC1CTL1Base> ;
    using DAL = ADC1_CTL1_DAL_Values<ADC1::CTL1, 11, 1, ReadWriteMode, ADC1CTL1Base> ;
    using DMA = ADC1_CTL1_DMA_Values<ADC1::CTL1, 8, 1, ReadWriteMode, ADC1CTL1Base> ;
    using RSTCLB = ADC1_CTL1_RSTCLB_Values<ADC1::CTL1, 3, 1, ReadWriteMode, ADC1CTL1Base> ;
    using CLB = ADC1_CTL1_CLB_Values<ADC1::CTL1, 2, 1, ReadWriteMode, ADC1CTL1Base> ;
    using CTN = ADC1_CTL1_CTN_Values<ADC1::CTL1, 1, 1, ReadWriteMode, ADC1CTL1Base> ;
    using ADCON = ADC1_CTL1_ADCON_Values<ADC1::CTL1, 0, 1, ReadWriteMode, ADC1CTL1Base> ;
    using FieldValues = ADC1_CTL1_ADCON_Values<ADC1::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40012808, 32, ReadWriteMode, ADC1CTL1Base, T...> ;

  struct ADC1SAMPT0Base {} ;

  struct SAMPT0 : public RegisterBase<0x4001280C, 32, ReadWriteMode>
  {
    using SPT10 = ADC1_SAMPT0_SPT10_Values<ADC1::SAMPT0, 0, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT11 = ADC1_SAMPT0_SPT11_Values<ADC1::SAMPT0, 3, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT12 = ADC1_SAMPT0_SPT12_Values<ADC1::SAMPT0, 6, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT13 = ADC1_SAMPT0_SPT13_Values<ADC1::SAMPT0, 9, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT14 = ADC1_SAMPT0_SPT14_Values<ADC1::SAMPT0, 12, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT15 = ADC1_SAMPT0_SPT15_Values<ADC1::SAMPT0, 15, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT16 = ADC1_SAMPT0_SPT16_Values<ADC1::SAMPT0, 18, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using SPT17 = ADC1_SAMPT0_SPT17_Values<ADC1::SAMPT0, 21, 3, ReadWriteMode, ADC1SAMPT0Base> ;
    using FieldValues = ADC1_SAMPT0_SPT17_Values<ADC1::SAMPT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPT0Pack  = Register<0x4001280C, 32, ReadWriteMode, ADC1SAMPT0Base, T...> ;

  struct ADC1SAMPT1Base {} ;

  struct SAMPT1 : public RegisterBase<0x40012810, 32, ReadWriteMode>
  {
    using SPT0 = ADC1_SAMPT1_SPT0_Values<ADC1::SAMPT1, 0, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT1 = ADC1_SAMPT1_SPT1_Values<ADC1::SAMPT1, 3, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT2 = ADC1_SAMPT1_SPT2_Values<ADC1::SAMPT1, 6, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT3 = ADC1_SAMPT1_SPT3_Values<ADC1::SAMPT1, 9, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT4 = ADC1_SAMPT1_SPT4_Values<ADC1::SAMPT1, 12, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT5 = ADC1_SAMPT1_SPT5_Values<ADC1::SAMPT1, 15, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT6 = ADC1_SAMPT1_SPT6_Values<ADC1::SAMPT1, 18, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT7 = ADC1_SAMPT1_SPT7_Values<ADC1::SAMPT1, 21, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT8 = ADC1_SAMPT1_SPT8_Values<ADC1::SAMPT1, 24, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using SPT9 = ADC1_SAMPT1_SPT9_Values<ADC1::SAMPT1, 27, 3, ReadWriteMode, ADC1SAMPT1Base> ;
    using FieldValues = ADC1_SAMPT1_SPT9_Values<ADC1::SAMPT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPT1Pack  = Register<0x40012810, 32, ReadWriteMode, ADC1SAMPT1Base, T...> ;

  struct ADC1IOFF0Base {} ;

  struct IOFF0 : public RegisterBase<0x40012814, 32, ReadWriteMode>
  {
    using IOFF = ADC1_IOFF0_IOFF_Values<ADC1::IOFF0, 0, 12, ReadWriteMode, ADC1IOFF0Base> ;
    using FieldValues = ADC1_IOFF0_IOFF_Values<ADC1::IOFF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF0Pack  = Register<0x40012814, 32, ReadWriteMode, ADC1IOFF0Base, T...> ;

  struct ADC1IOFF1Base {} ;

  struct IOFF1 : public RegisterBase<0x40012818, 32, ReadWriteMode>
  {
    using IOFF = ADC1_IOFF1_IOFF_Values<ADC1::IOFF1, 0, 12, ReadWriteMode, ADC1IOFF1Base> ;
    using FieldValues = ADC1_IOFF1_IOFF_Values<ADC1::IOFF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF1Pack  = Register<0x40012818, 32, ReadWriteMode, ADC1IOFF1Base, T...> ;

  struct ADC1IOFF2Base {} ;

  struct IOFF2 : public RegisterBase<0x4001281C, 32, ReadWriteMode>
  {
    using IOFF = ADC1_IOFF2_IOFF_Values<ADC1::IOFF2, 0, 12, ReadWriteMode, ADC1IOFF2Base> ;
    using FieldValues = ADC1_IOFF2_IOFF_Values<ADC1::IOFF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF2Pack  = Register<0x4001281C, 32, ReadWriteMode, ADC1IOFF2Base, T...> ;

  struct ADC1IOFF3Base {} ;

  struct IOFF3 : public RegisterBase<0x40012820, 32, ReadWriteMode>
  {
    using IOFF = ADC1_IOFF3_IOFF_Values<ADC1::IOFF3, 0, 12, ReadWriteMode, ADC1IOFF3Base> ;
    using FieldValues = ADC1_IOFF3_IOFF_Values<ADC1::IOFF3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF3Pack  = Register<0x40012820, 32, ReadWriteMode, ADC1IOFF3Base, T...> ;

  struct ADC1WDHTBase {} ;

  struct WDHT : public RegisterBase<0x40012824, 32, ReadWriteMode>
  {
    using WDHTField = ADC1_WDHT_WDHT_Values<ADC1::WDHT, 0, 12, ReadWriteMode, ADC1WDHTBase> ;
    using FieldValues = ADC1_WDHT_WDHT_Values<ADC1::WDHT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDHTPack  = Register<0x40012824, 32, ReadWriteMode, ADC1WDHTBase, T...> ;

  struct ADC1WDLTBase {} ;

  struct WDLT : public RegisterBase<0x40012828, 32, ReadWriteMode>
  {
    using WDLTField = ADC1_WDLT_WDLT_Values<ADC1::WDLT, 0, 12, ReadWriteMode, ADC1WDLTBase> ;
    using FieldValues = ADC1_WDLT_WDLT_Values<ADC1::WDLT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDLTPack  = Register<0x40012828, 32, ReadWriteMode, ADC1WDLTBase, T...> ;

  struct ADC1RSQ0Base {} ;

  struct RSQ0 : public RegisterBase<0x4001282C, 32, ReadWriteMode>
  {
    using RL = ADC1_RSQ0_RL_Values<ADC1::RSQ0, 20, 4, ReadWriteMode, ADC1RSQ0Base> ;
    using RSQ15 = ADC1_RSQ0_RSQ15_Values<ADC1::RSQ0, 15, 5, ReadWriteMode, ADC1RSQ0Base> ;
    using RSQ14 = ADC1_RSQ0_RSQ14_Values<ADC1::RSQ0, 10, 5, ReadWriteMode, ADC1RSQ0Base> ;
    using RSQ13 = ADC1_RSQ0_RSQ13_Values<ADC1::RSQ0, 5, 5, ReadWriteMode, ADC1RSQ0Base> ;
    using RSQ12 = ADC1_RSQ0_RSQ12_Values<ADC1::RSQ0, 0, 5, ReadWriteMode, ADC1RSQ0Base> ;
    using FieldValues = ADC1_RSQ0_RSQ12_Values<ADC1::RSQ0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ0Pack  = Register<0x4001282C, 32, ReadWriteMode, ADC1RSQ0Base, T...> ;

  struct ADC1RSQ1Base {} ;

  struct RSQ1 : public RegisterBase<0x40012830, 32, ReadWriteMode>
  {
    using RSQ11 = ADC1_RSQ1_RSQ11_Values<ADC1::RSQ1, 25, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using RSQ10 = ADC1_RSQ1_RSQ10_Values<ADC1::RSQ1, 20, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using RSQ9 = ADC1_RSQ1_RSQ9_Values<ADC1::RSQ1, 15, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using RSQ8 = ADC1_RSQ1_RSQ8_Values<ADC1::RSQ1, 10, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using RSQ7 = ADC1_RSQ1_RSQ7_Values<ADC1::RSQ1, 5, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using RSQ6 = ADC1_RSQ1_RSQ6_Values<ADC1::RSQ1, 0, 5, ReadWriteMode, ADC1RSQ1Base> ;
    using FieldValues = ADC1_RSQ1_RSQ6_Values<ADC1::RSQ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ1Pack  = Register<0x40012830, 32, ReadWriteMode, ADC1RSQ1Base, T...> ;

  struct ADC1RSQ2Base {} ;

  struct RSQ2 : public RegisterBase<0x40012834, 32, ReadWriteMode>
  {
    using RSQ5 = ADC1_RSQ2_RSQ5_Values<ADC1::RSQ2, 25, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using RSQ4 = ADC1_RSQ2_RSQ4_Values<ADC1::RSQ2, 20, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using RSQ3 = ADC1_RSQ2_RSQ3_Values<ADC1::RSQ2, 15, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using RSQ2Field = ADC1_RSQ2_RSQ2_Values<ADC1::RSQ2, 10, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using RSQ1 = ADC1_RSQ2_RSQ1_Values<ADC1::RSQ2, 5, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using RSQ0 = ADC1_RSQ2_RSQ0_Values<ADC1::RSQ2, 0, 5, ReadWriteMode, ADC1RSQ2Base> ;
    using FieldValues = ADC1_RSQ2_RSQ0_Values<ADC1::RSQ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ2Pack  = Register<0x40012834, 32, ReadWriteMode, ADC1RSQ2Base, T...> ;

  struct ADC1ISQBase {} ;

  struct ISQ : public RegisterBase<0x40012838, 32, ReadWriteMode>
  {
    using IL = ADC1_ISQ_IL_Values<ADC1::ISQ, 20, 2, ReadWriteMode, ADC1ISQBase> ;
    using ISQ3 = ADC1_ISQ_ISQ3_Values<ADC1::ISQ, 15, 5, ReadWriteMode, ADC1ISQBase> ;
    using ISQ2 = ADC1_ISQ_ISQ2_Values<ADC1::ISQ, 10, 5, ReadWriteMode, ADC1ISQBase> ;
    using ISQ1 = ADC1_ISQ_ISQ1_Values<ADC1::ISQ, 5, 5, ReadWriteMode, ADC1ISQBase> ;
    using ISQ0 = ADC1_ISQ_ISQ0_Values<ADC1::ISQ, 0, 5, ReadWriteMode, ADC1ISQBase> ;
    using FieldValues = ADC1_ISQ_ISQ0_Values<ADC1::ISQ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISQPack  = Register<0x40012838, 32, ReadWriteMode, ADC1ISQBase, T...> ;

  struct ADC1IDATA0Base {} ;

  struct IDATA0 : public RegisterBase<0x4001283C, 32, ReadMode>
  {
    using IDATAn = ADC1_IDATA0_IDATAn_Values<ADC1::IDATA0, 0, 16, ReadMode, ADC1IDATA0Base> ;
    using FieldValues = ADC1_IDATA0_IDATAn_Values<ADC1::IDATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA0Pack  = Register<0x4001283C, 32, ReadMode, ADC1IDATA0Base, T...> ;

  struct ADC1IDATA1Base {} ;

  struct IDATA1 : public RegisterBase<0x40012840, 32, ReadMode>
  {
    using IDATAn = ADC1_IDATA1_IDATAn_Values<ADC1::IDATA1, 0, 16, ReadMode, ADC1IDATA1Base> ;
    using FieldValues = ADC1_IDATA1_IDATAn_Values<ADC1::IDATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA1Pack  = Register<0x40012840, 32, ReadMode, ADC1IDATA1Base, T...> ;

  struct ADC1IDATA2Base {} ;

  struct IDATA2 : public RegisterBase<0x40012844, 32, ReadMode>
  {
    using IDATAn = ADC1_IDATA2_IDATAn_Values<ADC1::IDATA2, 0, 16, ReadMode, ADC1IDATA2Base> ;
    using FieldValues = ADC1_IDATA2_IDATAn_Values<ADC1::IDATA2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA2Pack  = Register<0x40012844, 32, ReadMode, ADC1IDATA2Base, T...> ;

  struct ADC1IDATA3Base {} ;

  struct IDATA3 : public RegisterBase<0x40012848, 32, ReadMode>
  {
    using IDATAn = ADC1_IDATA3_IDATAn_Values<ADC1::IDATA3, 0, 16, ReadMode, ADC1IDATA3Base> ;
    using FieldValues = ADC1_IDATA3_IDATAn_Values<ADC1::IDATA3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA3Pack  = Register<0x40012848, 32, ReadMode, ADC1IDATA3Base, T...> ;

  struct ADC1RDATABase {} ;

  struct RDATA : public RegisterBase<0x4001284C, 32, ReadMode>
  {
    using RDATAField = ADC1_RDATA_RDATA_Values<ADC1::RDATA, 0, 16, ReadMode, ADC1RDATABase> ;
    using FieldValues = ADC1_RDATA_RDATA_Values<ADC1::RDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDATAPack  = Register<0x4001284C, 32, ReadMode, ADC1RDATABase, T...> ;

} ;

#endif //#if !defined(ADC1REGISTERS_HPP)
