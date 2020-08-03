/*******************************************************************************
* Filename      : adc0registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(ADC0REGISTERS_HPP)
#define ADC0REGISTERS_HPP

#include "adc0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC0
{
  struct ADC0STATBase {} ;

  struct STAT : public RegisterBase<0x40012400, 32, ReadWriteMode>
  {
    using STRC = ADC0_STAT_STRC_Values<ADC0::STAT, 4, 1, ReadWriteMode, ADC0STATBase> ;
    using STIC = ADC0_STAT_STIC_Values<ADC0::STAT, 3, 1, ReadWriteMode, ADC0STATBase> ;
    using EOIC = ADC0_STAT_EOIC_Values<ADC0::STAT, 2, 1, ReadWriteMode, ADC0STATBase> ;
    using EOC = ADC0_STAT_EOC_Values<ADC0::STAT, 1, 1, ReadWriteMode, ADC0STATBase> ;
    using WDE = ADC0_STAT_WDE_Values<ADC0::STAT, 0, 1, ReadWriteMode, ADC0STATBase> ;
    using FieldValues = ADC0_STAT_WDE_Values<ADC0::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40012400, 32, ReadWriteMode, ADC0STATBase, T...> ;

  struct ADC0CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40012404, 32, ReadWriteMode>
  {
    using RWDEN = ADC0_CTL0_RWDEN_Values<ADC0::CTL0, 23, 1, ReadWriteMode, ADC0CTL0Base> ;
    using IWDEN = ADC0_CTL0_IWDEN_Values<ADC0::CTL0, 22, 1, ReadWriteMode, ADC0CTL0Base> ;
    using SYNCM = ADC0_CTL0_SYNCM_Values<ADC0::CTL0, 16, 4, ReadWriteMode, ADC0CTL0Base> ;
    using DISNUM = ADC0_CTL0_DISNUM_Values<ADC0::CTL0, 13, 3, ReadWriteMode, ADC0CTL0Base> ;
    using DISIC = ADC0_CTL0_DISIC_Values<ADC0::CTL0, 12, 1, ReadWriteMode, ADC0CTL0Base> ;
    using DISRC = ADC0_CTL0_DISRC_Values<ADC0::CTL0, 11, 1, ReadWriteMode, ADC0CTL0Base> ;
    using ICA = ADC0_CTL0_ICA_Values<ADC0::CTL0, 10, 1, ReadWriteMode, ADC0CTL0Base> ;
    using WDSC = ADC0_CTL0_WDSC_Values<ADC0::CTL0, 9, 1, ReadWriteMode, ADC0CTL0Base> ;
    using SM = ADC0_CTL0_SM_Values<ADC0::CTL0, 8, 1, ReadWriteMode, ADC0CTL0Base> ;
    using EOICIE = ADC0_CTL0_EOICIE_Values<ADC0::CTL0, 7, 1, ReadWriteMode, ADC0CTL0Base> ;
    using WDEIE = ADC0_CTL0_WDEIE_Values<ADC0::CTL0, 6, 1, ReadWriteMode, ADC0CTL0Base> ;
    using EOCIE = ADC0_CTL0_EOCIE_Values<ADC0::CTL0, 5, 1, ReadWriteMode, ADC0CTL0Base> ;
    using WDCHSEL = ADC0_CTL0_WDCHSEL_Values<ADC0::CTL0, 0, 5, ReadWriteMode, ADC0CTL0Base> ;
    using FieldValues = ADC0_CTL0_WDCHSEL_Values<ADC0::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40012404, 32, ReadWriteMode, ADC0CTL0Base, T...> ;

  struct ADC0CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40012408, 32, ReadWriteMode>
  {
    using TSVREN = ADC0_CTL1_TSVREN_Values<ADC0::CTL1, 23, 1, ReadWriteMode, ADC0CTL1Base> ;
    using SWRCST = ADC0_CTL1_SWRCST_Values<ADC0::CTL1, 22, 1, ReadWriteMode, ADC0CTL1Base> ;
    using SWICST = ADC0_CTL1_SWICST_Values<ADC0::CTL1, 21, 1, ReadWriteMode, ADC0CTL1Base> ;
    using ETERC = ADC0_CTL1_ETERC_Values<ADC0::CTL1, 20, 1, ReadWriteMode, ADC0CTL1Base> ;
    using ETSRC = ADC0_CTL1_ETSRC_Values<ADC0::CTL1, 17, 3, ReadWriteMode, ADC0CTL1Base> ;
    using ETEIC = ADC0_CTL1_ETEIC_Values<ADC0::CTL1, 15, 1, ReadWriteMode, ADC0CTL1Base> ;
    using ETSIC = ADC0_CTL1_ETSIC_Values<ADC0::CTL1, 12, 3, ReadWriteMode, ADC0CTL1Base> ;
    using DAL = ADC0_CTL1_DAL_Values<ADC0::CTL1, 11, 1, ReadWriteMode, ADC0CTL1Base> ;
    using DMA = ADC0_CTL1_DMA_Values<ADC0::CTL1, 8, 1, ReadWriteMode, ADC0CTL1Base> ;
    using RSTCLB = ADC0_CTL1_RSTCLB_Values<ADC0::CTL1, 3, 1, ReadWriteMode, ADC0CTL1Base> ;
    using CLB = ADC0_CTL1_CLB_Values<ADC0::CTL1, 2, 1, ReadWriteMode, ADC0CTL1Base> ;
    using CTN = ADC0_CTL1_CTN_Values<ADC0::CTL1, 1, 1, ReadWriteMode, ADC0CTL1Base> ;
    using ADCON = ADC0_CTL1_ADCON_Values<ADC0::CTL1, 0, 1, ReadWriteMode, ADC0CTL1Base> ;
    using FieldValues = ADC0_CTL1_ADCON_Values<ADC0::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40012408, 32, ReadWriteMode, ADC0CTL1Base, T...> ;

  struct ADC0SAMPT0Base {} ;

  struct SAMPT0 : public RegisterBase<0x4001240C, 32, ReadWriteMode>
  {
    using SPT10 = ADC0_SAMPT0_SPT10_Values<ADC0::SAMPT0, 0, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT11 = ADC0_SAMPT0_SPT11_Values<ADC0::SAMPT0, 3, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT12 = ADC0_SAMPT0_SPT12_Values<ADC0::SAMPT0, 6, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT13 = ADC0_SAMPT0_SPT13_Values<ADC0::SAMPT0, 9, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT14 = ADC0_SAMPT0_SPT14_Values<ADC0::SAMPT0, 12, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT15 = ADC0_SAMPT0_SPT15_Values<ADC0::SAMPT0, 15, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT16 = ADC0_SAMPT0_SPT16_Values<ADC0::SAMPT0, 18, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using SPT17 = ADC0_SAMPT0_SPT17_Values<ADC0::SAMPT0, 21, 3, ReadWriteMode, ADC0SAMPT0Base> ;
    using FieldValues = ADC0_SAMPT0_SPT17_Values<ADC0::SAMPT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPT0Pack  = Register<0x4001240C, 32, ReadWriteMode, ADC0SAMPT0Base, T...> ;

  struct ADC0SAMPT1Base {} ;

  struct SAMPT1 : public RegisterBase<0x40012410, 32, ReadWriteMode>
  {
    using SPT0 = ADC0_SAMPT1_SPT0_Values<ADC0::SAMPT1, 0, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT1 = ADC0_SAMPT1_SPT1_Values<ADC0::SAMPT1, 3, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT2 = ADC0_SAMPT1_SPT2_Values<ADC0::SAMPT1, 6, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT3 = ADC0_SAMPT1_SPT3_Values<ADC0::SAMPT1, 9, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT4 = ADC0_SAMPT1_SPT4_Values<ADC0::SAMPT1, 12, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT5 = ADC0_SAMPT1_SPT5_Values<ADC0::SAMPT1, 15, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT6 = ADC0_SAMPT1_SPT6_Values<ADC0::SAMPT1, 18, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT7 = ADC0_SAMPT1_SPT7_Values<ADC0::SAMPT1, 21, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT8 = ADC0_SAMPT1_SPT8_Values<ADC0::SAMPT1, 24, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using SPT9 = ADC0_SAMPT1_SPT9_Values<ADC0::SAMPT1, 27, 3, ReadWriteMode, ADC0SAMPT1Base> ;
    using FieldValues = ADC0_SAMPT1_SPT9_Values<ADC0::SAMPT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAMPT1Pack  = Register<0x40012410, 32, ReadWriteMode, ADC0SAMPT1Base, T...> ;

  struct ADC0IOFF0Base {} ;

  struct IOFF0 : public RegisterBase<0x40012414, 32, ReadWriteMode>
  {
    using IOFF = ADC0_IOFF0_IOFF_Values<ADC0::IOFF0, 0, 12, ReadWriteMode, ADC0IOFF0Base> ;
    using FieldValues = ADC0_IOFF0_IOFF_Values<ADC0::IOFF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF0Pack  = Register<0x40012414, 32, ReadWriteMode, ADC0IOFF0Base, T...> ;

  struct ADC0IOFF1Base {} ;

  struct IOFF1 : public RegisterBase<0x40012418, 32, ReadWriteMode>
  {
    using IOFF = ADC0_IOFF1_IOFF_Values<ADC0::IOFF1, 0, 12, ReadWriteMode, ADC0IOFF1Base> ;
    using FieldValues = ADC0_IOFF1_IOFF_Values<ADC0::IOFF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF1Pack  = Register<0x40012418, 32, ReadWriteMode, ADC0IOFF1Base, T...> ;

  struct ADC0IOFF2Base {} ;

  struct IOFF2 : public RegisterBase<0x4001241C, 32, ReadWriteMode>
  {
    using IOFF = ADC0_IOFF2_IOFF_Values<ADC0::IOFF2, 0, 12, ReadWriteMode, ADC0IOFF2Base> ;
    using FieldValues = ADC0_IOFF2_IOFF_Values<ADC0::IOFF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF2Pack  = Register<0x4001241C, 32, ReadWriteMode, ADC0IOFF2Base, T...> ;

  struct ADC0IOFF3Base {} ;

  struct IOFF3 : public RegisterBase<0x40012420, 32, ReadWriteMode>
  {
    using IOFF = ADC0_IOFF3_IOFF_Values<ADC0::IOFF3, 0, 12, ReadWriteMode, ADC0IOFF3Base> ;
    using FieldValues = ADC0_IOFF3_IOFF_Values<ADC0::IOFF3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOFF3Pack  = Register<0x40012420, 32, ReadWriteMode, ADC0IOFF3Base, T...> ;

  struct ADC0WDHTBase {} ;

  struct WDHT : public RegisterBase<0x40012424, 32, ReadWriteMode>
  {
    using WDHTField = ADC0_WDHT_WDHT_Values<ADC0::WDHT, 0, 12, ReadWriteMode, ADC0WDHTBase> ;
    using FieldValues = ADC0_WDHT_WDHT_Values<ADC0::WDHT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDHTPack  = Register<0x40012424, 32, ReadWriteMode, ADC0WDHTBase, T...> ;

  struct ADC0WDLTBase {} ;

  struct WDLT : public RegisterBase<0x40012428, 32, ReadWriteMode>
  {
    using WDLTField = ADC0_WDLT_WDLT_Values<ADC0::WDLT, 0, 12, ReadWriteMode, ADC0WDLTBase> ;
    using FieldValues = ADC0_WDLT_WDLT_Values<ADC0::WDLT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDLTPack  = Register<0x40012428, 32, ReadWriteMode, ADC0WDLTBase, T...> ;

  struct ADC0RSQ0Base {} ;

  struct RSQ0 : public RegisterBase<0x4001242C, 32, ReadWriteMode>
  {
    using RL = ADC0_RSQ0_RL_Values<ADC0::RSQ0, 20, 4, ReadWriteMode, ADC0RSQ0Base> ;
    using RSQ15 = ADC0_RSQ0_RSQ15_Values<ADC0::RSQ0, 15, 5, ReadWriteMode, ADC0RSQ0Base> ;
    using RSQ14 = ADC0_RSQ0_RSQ14_Values<ADC0::RSQ0, 10, 5, ReadWriteMode, ADC0RSQ0Base> ;
    using RSQ13 = ADC0_RSQ0_RSQ13_Values<ADC0::RSQ0, 5, 5, ReadWriteMode, ADC0RSQ0Base> ;
    using RSQ12 = ADC0_RSQ0_RSQ12_Values<ADC0::RSQ0, 0, 5, ReadWriteMode, ADC0RSQ0Base> ;
    using FieldValues = ADC0_RSQ0_RSQ12_Values<ADC0::RSQ0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ0Pack  = Register<0x4001242C, 32, ReadWriteMode, ADC0RSQ0Base, T...> ;

  struct ADC0RSQ1Base {} ;

  struct RSQ1 : public RegisterBase<0x40012430, 32, ReadWriteMode>
  {
    using RSQ11 = ADC0_RSQ1_RSQ11_Values<ADC0::RSQ1, 25, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using RSQ10 = ADC0_RSQ1_RSQ10_Values<ADC0::RSQ1, 20, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using RSQ9 = ADC0_RSQ1_RSQ9_Values<ADC0::RSQ1, 15, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using RSQ8 = ADC0_RSQ1_RSQ8_Values<ADC0::RSQ1, 10, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using RSQ7 = ADC0_RSQ1_RSQ7_Values<ADC0::RSQ1, 5, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using RSQ6 = ADC0_RSQ1_RSQ6_Values<ADC0::RSQ1, 0, 5, ReadWriteMode, ADC0RSQ1Base> ;
    using FieldValues = ADC0_RSQ1_RSQ6_Values<ADC0::RSQ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ1Pack  = Register<0x40012430, 32, ReadWriteMode, ADC0RSQ1Base, T...> ;

  struct ADC0RSQ2Base {} ;

  struct RSQ2 : public RegisterBase<0x40012434, 32, ReadWriteMode>
  {
    using RSQ5 = ADC0_RSQ2_RSQ5_Values<ADC0::RSQ2, 25, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using RSQ4 = ADC0_RSQ2_RSQ4_Values<ADC0::RSQ2, 20, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using RSQ3 = ADC0_RSQ2_RSQ3_Values<ADC0::RSQ2, 15, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using RSQ2Field = ADC0_RSQ2_RSQ2_Values<ADC0::RSQ2, 10, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using RSQ1 = ADC0_RSQ2_RSQ1_Values<ADC0::RSQ2, 5, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using RSQ0 = ADC0_RSQ2_RSQ0_Values<ADC0::RSQ2, 0, 5, ReadWriteMode, ADC0RSQ2Base> ;
    using FieldValues = ADC0_RSQ2_RSQ0_Values<ADC0::RSQ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSQ2Pack  = Register<0x40012434, 32, ReadWriteMode, ADC0RSQ2Base, T...> ;

  struct ADC0ISQBase {} ;

  struct ISQ : public RegisterBase<0x40012438, 32, ReadWriteMode>
  {
    using IL = ADC0_ISQ_IL_Values<ADC0::ISQ, 20, 2, ReadWriteMode, ADC0ISQBase> ;
    using ISQ3 = ADC0_ISQ_ISQ3_Values<ADC0::ISQ, 15, 5, ReadWriteMode, ADC0ISQBase> ;
    using ISQ2 = ADC0_ISQ_ISQ2_Values<ADC0::ISQ, 10, 5, ReadWriteMode, ADC0ISQBase> ;
    using ISQ1 = ADC0_ISQ_ISQ1_Values<ADC0::ISQ, 5, 5, ReadWriteMode, ADC0ISQBase> ;
    using ISQ0 = ADC0_ISQ_ISQ0_Values<ADC0::ISQ, 0, 5, ReadWriteMode, ADC0ISQBase> ;
    using FieldValues = ADC0_ISQ_ISQ0_Values<ADC0::ISQ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISQPack  = Register<0x40012438, 32, ReadWriteMode, ADC0ISQBase, T...> ;

  struct ADC0IDATA0Base {} ;

  struct IDATA0 : public RegisterBase<0x4001243C, 32, ReadMode>
  {
    using IDATAn = ADC0_IDATA0_IDATAn_Values<ADC0::IDATA0, 0, 16, ReadMode, ADC0IDATA0Base> ;
    using FieldValues = ADC0_IDATA0_IDATAn_Values<ADC0::IDATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA0Pack  = Register<0x4001243C, 32, ReadMode, ADC0IDATA0Base, T...> ;

  struct ADC0IDATA1Base {} ;

  struct IDATA1 : public RegisterBase<0x40012440, 32, ReadMode>
  {
    using IDATAn = ADC0_IDATA1_IDATAn_Values<ADC0::IDATA1, 0, 16, ReadMode, ADC0IDATA1Base> ;
    using FieldValues = ADC0_IDATA1_IDATAn_Values<ADC0::IDATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA1Pack  = Register<0x40012440, 32, ReadMode, ADC0IDATA1Base, T...> ;

  struct ADC0IDATA2Base {} ;

  struct IDATA2 : public RegisterBase<0x40012444, 32, ReadMode>
  {
    using IDATAn = ADC0_IDATA2_IDATAn_Values<ADC0::IDATA2, 0, 16, ReadMode, ADC0IDATA2Base> ;
    using FieldValues = ADC0_IDATA2_IDATAn_Values<ADC0::IDATA2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA2Pack  = Register<0x40012444, 32, ReadMode, ADC0IDATA2Base, T...> ;

  struct ADC0IDATA3Base {} ;

  struct IDATA3 : public RegisterBase<0x40012448, 32, ReadMode>
  {
    using IDATAn = ADC0_IDATA3_IDATAn_Values<ADC0::IDATA3, 0, 16, ReadMode, ADC0IDATA3Base> ;
    using FieldValues = ADC0_IDATA3_IDATAn_Values<ADC0::IDATA3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDATA3Pack  = Register<0x40012448, 32, ReadMode, ADC0IDATA3Base, T...> ;

  struct ADC0RDATABase {} ;

  struct RDATA : public RegisterBase<0x4001244C, 32, ReadMode>
  {
    using ADC1RDTR = ADC0_RDATA_ADC1RDTR_Values<ADC0::RDATA, 16, 16, ReadMode, ADC0RDATABase> ;
    using RDATAField = ADC0_RDATA_RDATA_Values<ADC0::RDATA, 0, 16, ReadMode, ADC0RDATABase> ;
    using FieldValues = ADC0_RDATA_RDATA_Values<ADC0::RDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDATAPack  = Register<0x4001244C, 32, ReadMode, ADC0RDATABase, T...> ;

  struct ADC0OVSAMPCTLBase {} ;

  struct OVSAMPCTL : public RegisterBase<0x40012480, 32, ReadWriteMode>
  {
    using DRES = ADC0_OVSAMPCTL_DRES_Values<ADC0::OVSAMPCTL, 12, 2, ReadWriteMode, ADC0OVSAMPCTLBase> ;
    using TOVS = ADC0_OVSAMPCTL_TOVS_Values<ADC0::OVSAMPCTL, 9, 1, ReadWriteMode, ADC0OVSAMPCTLBase> ;
    using OVSS = ADC0_OVSAMPCTL_OVSS_Values<ADC0::OVSAMPCTL, 5, 4, ReadWriteMode, ADC0OVSAMPCTLBase> ;
    using OVSR = ADC0_OVSAMPCTL_OVSR_Values<ADC0::OVSAMPCTL, 2, 3, ReadWriteMode, ADC0OVSAMPCTLBase> ;
    using OVSEN = ADC0_OVSAMPCTL_OVSEN_Values<ADC0::OVSAMPCTL, 0, 1, ReadWriteMode, ADC0OVSAMPCTLBase> ;
    using FieldValues = ADC0_OVSAMPCTL_OVSEN_Values<ADC0::OVSAMPCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OVSAMPCTLPack  = Register<0x40012480, 32, ReadWriteMode, ADC0OVSAMPCTLBase, T...> ;

} ;

#endif //#if !defined(ADC0REGISTERS_HPP)
