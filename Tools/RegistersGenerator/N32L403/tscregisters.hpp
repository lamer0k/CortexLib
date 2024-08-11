/*******************************************************************************
* Filename      : tscregisters.hpp
*
* Details       : touch screen control. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "tscfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TSC
{
  struct TSCTSC_CTRLBase {} ;

  struct TSC_CTRL : public RegisterBase<0x40003400, 32, ReadWriteMode>
  {
    using DET_PERIOD = TSC_TSC_CTRL_DET_PERIOD_Values<TSC::TSC_CTRL, 0, 4, ReadWriteMode, TSCTSC_CTRLBase> ;
    using DET_FILTER = TSC_TSC_CTRL_DET_FILTER_Values<TSC::TSC_CTRL, 4, 2, ReadWriteMode, TSCTSC_CTRLBase> ;
    using HW_DET_MODE = TSC_TSC_CTRL_HW_DET_MODE_Values<TSC::TSC_CTRL, 6, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using HW_DET_ST = TSC_TSC_CTRL_HW_DET_ST_Values<TSC::TSC_CTRL, 7, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using LESS_DET_SEL = TSC_TSC_CTRL_LESS_DET_SEL_Values<TSC::TSC_CTRL, 8, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using GREAT_DET_SEL = TSC_TSC_CTRL_GREAT_DET_SEL_Values<TSC::TSC_CTRL, 9, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using DET_INTEN = TSC_TSC_CTRL_DET_INTEN_Values<TSC::TSC_CTRL, 10, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using TIM4_ETR = TSC_TSC_CTRL_TIM4_ETR_Values<TSC::TSC_CTRL, 12, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using TIM2_ETR_CH1 = TSC_TSC_CTRL_TIM2_ETR_CH1_Values<TSC::TSC_CTRL, 13, 1, ReadWriteMode, TSCTSC_CTRLBase> ;
    using FieldValues = TSC_TSC_CTRL_TIM2_ETR_CH1_Values<TSC::TSC_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_CTRLPack  = Register<0x40003400, 32, ReadWriteMode, TSCTSC_CTRLBase, T...> ;

  struct TSCTSC_CHNENBase {} ;

  struct TSC_CHNEN : public RegisterBase<0x40003404, 32, ReadWriteMode>
  {
    using CHN_SEL = TSC_TSC_CHNEN_CHN_SEL_Values<TSC::TSC_CHNEN, 0, 24, ReadWriteMode, TSCTSC_CHNENBase> ;
    using FieldValues = TSC_TSC_CHNEN_CHN_SEL_Values<TSC::TSC_CHNEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_CHNENPack  = Register<0x40003404, 32, ReadWriteMode, TSCTSC_CHNENBase, T...> ;

  struct TSCTSC_STSBase {} ;

  struct TSC_STS : public RegisterBase<0x40003408, 32, ReadWriteMode>
  {
    using CNT_VAL = TSC_TSC_STS_CNT_VAL_Values<TSC::TSC_STS, 0, 11, ReadWriteMode, TSCTSC_STSBase> ;
    using LESS_DET = TSC_TSC_STS_LESS_DET_Values<TSC::TSC_STS, 12, 1, ReadWriteMode, TSCTSC_STSBase> ;
    using GREAT_DET = TSC_TSC_STS_GREAT_DET_Values<TSC::TSC_STS, 13, 1, ReadWriteMode, TSCTSC_STSBase> ;
    using CHN_NUM = TSC_TSC_STS_CHN_NUM_Values<TSC::TSC_STS, 16, 5, ReadWriteMode, TSCTSC_STSBase> ;
    using FieldValues = TSC_TSC_STS_CHN_NUM_Values<TSC::TSC_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_STSPack  = Register<0x40003408, 32, ReadWriteMode, TSCTSC_STSBase, T...> ;

  struct TSCTSC_ANA_CTRLBase {} ;

  struct TSC_ANA_CTRL : public RegisterBase<0x40003410, 32, ReadWriteMode>
  {
    using SW_PAD_MUX = TSC_TSC_ANA_CTRL_SW_PAD_MUX_Values<TSC::TSC_ANA_CTRL, 0, 5, ReadWriteMode, TSCTSC_ANA_CTRLBase> ;
    using SW_TSC_EN = TSC_TSC_ANA_CTRL_SW_TSC_EN_Values<TSC::TSC_ANA_CTRL, 5, 1, ReadWriteMode, TSCTSC_ANA_CTRLBase> ;
    using FieldValues = TSC_TSC_ANA_CTRL_SW_TSC_EN_Values<TSC::TSC_ANA_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_ANA_CTRLPack  = Register<0x40003410, 32, ReadWriteMode, TSCTSC_ANA_CTRLBase, T...> ;

  struct TSCTSC_ANA_SELBase {} ;

  struct TSC_ANA_SEL : public RegisterBase<0x40003414, 32, ReadWriteMode>
  {
    using SP_OPT = TSC_TSC_ANA_SEL_SP_OPT_Values<TSC::TSC_ANA_SEL, 4, 2, ReadWriteMode, TSCTSC_ANA_SELBase> ;
    using PAD_OPT = TSC_TSC_ANA_SEL_PAD_OPT_Values<TSC::TSC_ANA_SEL, 6, 1, ReadWriteMode, TSCTSC_ANA_SELBase> ;
    using FieldValues = TSC_TSC_ANA_SEL_PAD_OPT_Values<TSC::TSC_ANA_SEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_ANA_SELPack  = Register<0x40003414, 32, ReadWriteMode, TSCTSC_ANA_SELBase, T...> ;

  struct TSCTSC_RESR0Base {} ;

  struct TSC_RESR0 : public RegisterBase<0x40003418, 32, ReadWriteMode>
  {
    using CHN_RESIST0 = TSC_TSC_RESR0_CHN_RESIST0_Values<TSC::TSC_RESR0, 0, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST1 = TSC_TSC_RESR0_CHN_RESIST1_Values<TSC::TSC_RESR0, 4, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST2 = TSC_TSC_RESR0_CHN_RESIST2_Values<TSC::TSC_RESR0, 8, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST3 = TSC_TSC_RESR0_CHN_RESIST3_Values<TSC::TSC_RESR0, 12, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST4 = TSC_TSC_RESR0_CHN_RESIST4_Values<TSC::TSC_RESR0, 16, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST5 = TSC_TSC_RESR0_CHN_RESIST5_Values<TSC::TSC_RESR0, 20, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST6 = TSC_TSC_RESR0_CHN_RESIST6_Values<TSC::TSC_RESR0, 24, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using CHN_RESIST7 = TSC_TSC_RESR0_CHN_RESIST7_Values<TSC::TSC_RESR0, 28, 3, ReadWriteMode, TSCTSC_RESR0Base> ;
    using FieldValues = TSC_TSC_RESR0_CHN_RESIST7_Values<TSC::TSC_RESR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_RESR0Pack  = Register<0x40003418, 32, ReadWriteMode, TSCTSC_RESR0Base, T...> ;

  struct TSCTSC_RESR1Base {} ;

  struct TSC_RESR1 : public RegisterBase<0x4000341C, 32, ReadWriteMode>
  {
    using CHN_RESIST8 = TSC_TSC_RESR1_CHN_RESIST8_Values<TSC::TSC_RESR1, 0, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST9 = TSC_TSC_RESR1_CHN_RESIST9_Values<TSC::TSC_RESR1, 4, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST10 = TSC_TSC_RESR1_CHN_RESIST10_Values<TSC::TSC_RESR1, 8, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST11 = TSC_TSC_RESR1_CHN_RESIST11_Values<TSC::TSC_RESR1, 12, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST12 = TSC_TSC_RESR1_CHN_RESIST12_Values<TSC::TSC_RESR1, 16, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST13 = TSC_TSC_RESR1_CHN_RESIST13_Values<TSC::TSC_RESR1, 20, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST14 = TSC_TSC_RESR1_CHN_RESIST14_Values<TSC::TSC_RESR1, 24, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using CHN_RESIST15 = TSC_TSC_RESR1_CHN_RESIST15_Values<TSC::TSC_RESR1, 28, 3, ReadWriteMode, TSCTSC_RESR1Base> ;
    using FieldValues = TSC_TSC_RESR1_CHN_RESIST15_Values<TSC::TSC_RESR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_RESR1Pack  = Register<0x4000341C, 32, ReadWriteMode, TSCTSC_RESR1Base, T...> ;

  struct TSCTSC_RESR2Base {} ;

  struct TSC_RESR2 : public RegisterBase<0x40003420, 32, ReadWriteMode>
  {
    using CHN_RESIST16 = TSC_TSC_RESR2_CHN_RESIST16_Values<TSC::TSC_RESR2, 0, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST17 = TSC_TSC_RESR2_CHN_RESIST17_Values<TSC::TSC_RESR2, 4, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST18 = TSC_TSC_RESR2_CHN_RESIST18_Values<TSC::TSC_RESR2, 8, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST19 = TSC_TSC_RESR2_CHN_RESIST19_Values<TSC::TSC_RESR2, 12, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST20 = TSC_TSC_RESR2_CHN_RESIST20_Values<TSC::TSC_RESR2, 16, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST21 = TSC_TSC_RESR2_CHN_RESIST21_Values<TSC::TSC_RESR2, 20, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST22 = TSC_TSC_RESR2_CHN_RESIST22_Values<TSC::TSC_RESR2, 24, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using CHN_RESIST23 = TSC_TSC_RESR2_CHN_RESIST23_Values<TSC::TSC_RESR2, 28, 3, ReadWriteMode, TSCTSC_RESR2Base> ;
    using FieldValues = TSC_TSC_RESR2_CHN_RESIST23_Values<TSC::TSC_RESR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_RESR2Pack  = Register<0x40003420, 32, ReadWriteMode, TSCTSC_RESR2Base, T...> ;

  struct TSCTSC_THRHD0Base {} ;

  struct TSC_THRHD0 : public RegisterBase<0x40003424, 32, ReadWriteMode>
  {
    using BASE0 = TSC_TSC_THRHD0_BASE0_Values<TSC::TSC_THRHD0, 0, 11, ReadWriteMode, TSCTSC_THRHD0Base> ;
    using DELTA0 = TSC_TSC_THRHD0_DELTA0_Values<TSC::TSC_THRHD0, 16, 8, ReadWriteMode, TSCTSC_THRHD0Base> ;
    using FieldValues = TSC_TSC_THRHD0_DELTA0_Values<TSC::TSC_THRHD0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD0Pack  = Register<0x40003424, 32, ReadWriteMode, TSCTSC_THRHD0Base, T...> ;

  struct TSCTSC_THRHD1Base {} ;

  struct TSC_THRHD1 : public RegisterBase<0x40003428, 32, ReadWriteMode>
  {
    using BASE1 = TSC_TSC_THRHD1_BASE1_Values<TSC::TSC_THRHD1, 0, 11, ReadWriteMode, TSCTSC_THRHD1Base> ;
    using DELTA1 = TSC_TSC_THRHD1_DELTA1_Values<TSC::TSC_THRHD1, 16, 8, ReadWriteMode, TSCTSC_THRHD1Base> ;
    using FieldValues = TSC_TSC_THRHD1_DELTA1_Values<TSC::TSC_THRHD1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD1Pack  = Register<0x40003428, 32, ReadWriteMode, TSCTSC_THRHD1Base, T...> ;

  struct TSCTSC_THRHD2Base {} ;

  struct TSC_THRHD2 : public RegisterBase<0x4000342C, 32, ReadWriteMode>
  {
    using BASE2 = TSC_TSC_THRHD2_BASE2_Values<TSC::TSC_THRHD2, 0, 11, ReadWriteMode, TSCTSC_THRHD2Base> ;
    using DELTA2 = TSC_TSC_THRHD2_DELTA2_Values<TSC::TSC_THRHD2, 16, 8, ReadWriteMode, TSCTSC_THRHD2Base> ;
    using FieldValues = TSC_TSC_THRHD2_DELTA2_Values<TSC::TSC_THRHD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD2Pack  = Register<0x4000342C, 32, ReadWriteMode, TSCTSC_THRHD2Base, T...> ;

  struct TSCTSC_THRHD3Base {} ;

  struct TSC_THRHD3 : public RegisterBase<0x40003430, 32, ReadWriteMode>
  {
    using BASE3 = TSC_TSC_THRHD3_BASE3_Values<TSC::TSC_THRHD3, 0, 11, ReadWriteMode, TSCTSC_THRHD3Base> ;
    using DELTA3 = TSC_TSC_THRHD3_DELTA3_Values<TSC::TSC_THRHD3, 16, 8, ReadWriteMode, TSCTSC_THRHD3Base> ;
    using FieldValues = TSC_TSC_THRHD3_DELTA3_Values<TSC::TSC_THRHD3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD3Pack  = Register<0x40003430, 32, ReadWriteMode, TSCTSC_THRHD3Base, T...> ;

  struct TSCTSC_THRHD4Base {} ;

  struct TSC_THRHD4 : public RegisterBase<0x40003434, 32, ReadWriteMode>
  {
    using BASE4 = TSC_TSC_THRHD4_BASE4_Values<TSC::TSC_THRHD4, 0, 11, ReadWriteMode, TSCTSC_THRHD4Base> ;
    using DELTA4 = TSC_TSC_THRHD4_DELTA4_Values<TSC::TSC_THRHD4, 16, 8, ReadWriteMode, TSCTSC_THRHD4Base> ;
    using FieldValues = TSC_TSC_THRHD4_DELTA4_Values<TSC::TSC_THRHD4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD4Pack  = Register<0x40003434, 32, ReadWriteMode, TSCTSC_THRHD4Base, T...> ;

  struct TSCTSC_THRHD5Base {} ;

  struct TSC_THRHD5 : public RegisterBase<0x40003438, 32, ReadWriteMode>
  {
    using BASE5 = TSC_TSC_THRHD5_BASE5_Values<TSC::TSC_THRHD5, 0, 11, ReadWriteMode, TSCTSC_THRHD5Base> ;
    using DELTA5 = TSC_TSC_THRHD5_DELTA5_Values<TSC::TSC_THRHD5, 16, 8, ReadWriteMode, TSCTSC_THRHD5Base> ;
    using FieldValues = TSC_TSC_THRHD5_DELTA5_Values<TSC::TSC_THRHD5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD5Pack  = Register<0x40003438, 32, ReadWriteMode, TSCTSC_THRHD5Base, T...> ;

  struct TSCTSC_THRHD6Base {} ;

  struct TSC_THRHD6 : public RegisterBase<0x4000343C, 32, ReadWriteMode>
  {
    using BASE6 = TSC_TSC_THRHD6_BASE6_Values<TSC::TSC_THRHD6, 0, 11, ReadWriteMode, TSCTSC_THRHD6Base> ;
    using DELTA6 = TSC_TSC_THRHD6_DELTA6_Values<TSC::TSC_THRHD6, 16, 8, ReadWriteMode, TSCTSC_THRHD6Base> ;
    using FieldValues = TSC_TSC_THRHD6_DELTA6_Values<TSC::TSC_THRHD6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD6Pack  = Register<0x4000343C, 32, ReadWriteMode, TSCTSC_THRHD6Base, T...> ;

  struct TSCTSC_THRHD7Base {} ;

  struct TSC_THRHD7 : public RegisterBase<0x40003440, 32, ReadWriteMode>
  {
    using BASE7 = TSC_TSC_THRHD7_BASE7_Values<TSC::TSC_THRHD7, 0, 11, ReadWriteMode, TSCTSC_THRHD7Base> ;
    using DELTA7 = TSC_TSC_THRHD7_DELTA7_Values<TSC::TSC_THRHD7, 16, 8, ReadWriteMode, TSCTSC_THRHD7Base> ;
    using FieldValues = TSC_TSC_THRHD7_DELTA7_Values<TSC::TSC_THRHD7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD7Pack  = Register<0x40003440, 32, ReadWriteMode, TSCTSC_THRHD7Base, T...> ;

  struct TSCTSC_THRHD8Base {} ;

  struct TSC_THRHD8 : public RegisterBase<0x40003444, 32, ReadWriteMode>
  {
    using BASE8 = TSC_TSC_THRHD8_BASE8_Values<TSC::TSC_THRHD8, 0, 11, ReadWriteMode, TSCTSC_THRHD8Base> ;
    using DELTA8 = TSC_TSC_THRHD8_DELTA8_Values<TSC::TSC_THRHD8, 16, 8, ReadWriteMode, TSCTSC_THRHD8Base> ;
    using FieldValues = TSC_TSC_THRHD8_DELTA8_Values<TSC::TSC_THRHD8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD8Pack  = Register<0x40003444, 32, ReadWriteMode, TSCTSC_THRHD8Base, T...> ;

  struct TSCTSC_THRHD9Base {} ;

  struct TSC_THRHD9 : public RegisterBase<0x40003448, 32, ReadWriteMode>
  {
    using BASE9 = TSC_TSC_THRHD9_BASE9_Values<TSC::TSC_THRHD9, 0, 11, ReadWriteMode, TSCTSC_THRHD9Base> ;
    using DELTA9 = TSC_TSC_THRHD9_DELTA9_Values<TSC::TSC_THRHD9, 16, 8, ReadWriteMode, TSCTSC_THRHD9Base> ;
    using FieldValues = TSC_TSC_THRHD9_DELTA9_Values<TSC::TSC_THRHD9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD9Pack  = Register<0x40003448, 32, ReadWriteMode, TSCTSC_THRHD9Base, T...> ;

  struct TSCTSC_THRHD10Base {} ;

  struct TSC_THRHD10 : public RegisterBase<0x4000344C, 32, ReadWriteMode>
  {
    using BASE10 = TSC_TSC_THRHD10_BASE10_Values<TSC::TSC_THRHD10, 0, 11, ReadWriteMode, TSCTSC_THRHD10Base> ;
    using DELTA10 = TSC_TSC_THRHD10_DELTA10_Values<TSC::TSC_THRHD10, 16, 8, ReadWriteMode, TSCTSC_THRHD10Base> ;
    using FieldValues = TSC_TSC_THRHD10_DELTA10_Values<TSC::TSC_THRHD10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD10Pack  = Register<0x4000344C, 32, ReadWriteMode, TSCTSC_THRHD10Base, T...> ;

  struct TSCTSC_THRHD11Base {} ;

  struct TSC_THRHD11 : public RegisterBase<0x40003450, 32, ReadWriteMode>
  {
    using BASE11 = TSC_TSC_THRHD11_BASE11_Values<TSC::TSC_THRHD11, 0, 11, ReadWriteMode, TSCTSC_THRHD11Base> ;
    using DELTA11 = TSC_TSC_THRHD11_DELTA11_Values<TSC::TSC_THRHD11, 16, 8, ReadWriteMode, TSCTSC_THRHD11Base> ;
    using FieldValues = TSC_TSC_THRHD11_DELTA11_Values<TSC::TSC_THRHD11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD11Pack  = Register<0x40003450, 32, ReadWriteMode, TSCTSC_THRHD11Base, T...> ;

  struct TSCTSC_THRHD12Base {} ;

  struct TSC_THRHD12 : public RegisterBase<0x40003454, 32, ReadWriteMode>
  {
    using BASE12 = TSC_TSC_THRHD12_BASE12_Values<TSC::TSC_THRHD12, 0, 11, ReadWriteMode, TSCTSC_THRHD12Base> ;
    using DELTA12 = TSC_TSC_THRHD12_DELTA12_Values<TSC::TSC_THRHD12, 16, 8, ReadWriteMode, TSCTSC_THRHD12Base> ;
    using FieldValues = TSC_TSC_THRHD12_DELTA12_Values<TSC::TSC_THRHD12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD12Pack  = Register<0x40003454, 32, ReadWriteMode, TSCTSC_THRHD12Base, T...> ;

  struct TSCTSC_THRHD13Base {} ;

  struct TSC_THRHD13 : public RegisterBase<0x40003458, 32, ReadWriteMode>
  {
    using BASE13 = TSC_TSC_THRHD13_BASE13_Values<TSC::TSC_THRHD13, 0, 11, ReadWriteMode, TSCTSC_THRHD13Base> ;
    using DELTA13 = TSC_TSC_THRHD13_DELTA13_Values<TSC::TSC_THRHD13, 16, 8, ReadWriteMode, TSCTSC_THRHD13Base> ;
    using FieldValues = TSC_TSC_THRHD13_DELTA13_Values<TSC::TSC_THRHD13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD13Pack  = Register<0x40003458, 32, ReadWriteMode, TSCTSC_THRHD13Base, T...> ;

  struct TSCTSC_THRHD14Base {} ;

  struct TSC_THRHD14 : public RegisterBase<0x4000345C, 32, ReadWriteMode>
  {
    using BASE14 = TSC_TSC_THRHD14_BASE14_Values<TSC::TSC_THRHD14, 0, 11, ReadWriteMode, TSCTSC_THRHD14Base> ;
    using DELTA14 = TSC_TSC_THRHD14_DELTA14_Values<TSC::TSC_THRHD14, 16, 8, ReadWriteMode, TSCTSC_THRHD14Base> ;
    using FieldValues = TSC_TSC_THRHD14_DELTA14_Values<TSC::TSC_THRHD14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD14Pack  = Register<0x4000345C, 32, ReadWriteMode, TSCTSC_THRHD14Base, T...> ;

  struct TSCTSC_THRHD15Base {} ;

  struct TSC_THRHD15 : public RegisterBase<0x40003460, 32, ReadWriteMode>
  {
    using BASE15 = TSC_TSC_THRHD15_BASE15_Values<TSC::TSC_THRHD15, 0, 11, ReadWriteMode, TSCTSC_THRHD15Base> ;
    using DELTA15 = TSC_TSC_THRHD15_DELTA15_Values<TSC::TSC_THRHD15, 16, 8, ReadWriteMode, TSCTSC_THRHD15Base> ;
    using FieldValues = TSC_TSC_THRHD15_DELTA15_Values<TSC::TSC_THRHD15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD15Pack  = Register<0x40003460, 32, ReadWriteMode, TSCTSC_THRHD15Base, T...> ;

  struct TSCTSC_THRHD16Base {} ;

  struct TSC_THRHD16 : public RegisterBase<0x40003464, 32, ReadWriteMode>
  {
    using BASE16 = TSC_TSC_THRHD16_BASE16_Values<TSC::TSC_THRHD16, 0, 11, ReadWriteMode, TSCTSC_THRHD16Base> ;
    using DELTA16 = TSC_TSC_THRHD16_DELTA16_Values<TSC::TSC_THRHD16, 16, 8, ReadWriteMode, TSCTSC_THRHD16Base> ;
    using FieldValues = TSC_TSC_THRHD16_DELTA16_Values<TSC::TSC_THRHD16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD16Pack  = Register<0x40003464, 32, ReadWriteMode, TSCTSC_THRHD16Base, T...> ;

  struct TSCTSC_THRHD17Base {} ;

  struct TSC_THRHD17 : public RegisterBase<0x40003468, 32, ReadWriteMode>
  {
    using BASE17 = TSC_TSC_THRHD17_BASE17_Values<TSC::TSC_THRHD17, 0, 11, ReadWriteMode, TSCTSC_THRHD17Base> ;
    using DELTA17 = TSC_TSC_THRHD17_DELTA17_Values<TSC::TSC_THRHD17, 16, 8, ReadWriteMode, TSCTSC_THRHD17Base> ;
    using FieldValues = TSC_TSC_THRHD17_DELTA17_Values<TSC::TSC_THRHD17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD17Pack  = Register<0x40003468, 32, ReadWriteMode, TSCTSC_THRHD17Base, T...> ;

  struct TSCTSC_THRHD18Base {} ;

  struct TSC_THRHD18 : public RegisterBase<0x4000346C, 32, ReadWriteMode>
  {
    using BASE18 = TSC_TSC_THRHD18_BASE18_Values<TSC::TSC_THRHD18, 0, 11, ReadWriteMode, TSCTSC_THRHD18Base> ;
    using DELTA18 = TSC_TSC_THRHD18_DELTA18_Values<TSC::TSC_THRHD18, 16, 8, ReadWriteMode, TSCTSC_THRHD18Base> ;
    using FieldValues = TSC_TSC_THRHD18_DELTA18_Values<TSC::TSC_THRHD18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD18Pack  = Register<0x4000346C, 32, ReadWriteMode, TSCTSC_THRHD18Base, T...> ;

  struct TSCTSC_THRHD19Base {} ;

  struct TSC_THRHD19 : public RegisterBase<0x40003470, 32, ReadWriteMode>
  {
    using BASE19 = TSC_TSC_THRHD19_BASE19_Values<TSC::TSC_THRHD19, 0, 11, ReadWriteMode, TSCTSC_THRHD19Base> ;
    using DELTA19 = TSC_TSC_THRHD19_DELTA19_Values<TSC::TSC_THRHD19, 16, 8, ReadWriteMode, TSCTSC_THRHD19Base> ;
    using FieldValues = TSC_TSC_THRHD19_DELTA19_Values<TSC::TSC_THRHD19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD19Pack  = Register<0x40003470, 32, ReadWriteMode, TSCTSC_THRHD19Base, T...> ;

  struct TSCTSC_THRHD20Base {} ;

  struct TSC_THRHD20 : public RegisterBase<0x40003474, 32, ReadWriteMode>
  {
    using BASE20 = TSC_TSC_THRHD20_BASE20_Values<TSC::TSC_THRHD20, 0, 11, ReadWriteMode, TSCTSC_THRHD20Base> ;
    using DELTA20 = TSC_TSC_THRHD20_DELTA20_Values<TSC::TSC_THRHD20, 16, 8, ReadWriteMode, TSCTSC_THRHD20Base> ;
    using FieldValues = TSC_TSC_THRHD20_DELTA20_Values<TSC::TSC_THRHD20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSC_THRHD20Pack  = Register<0x40003474, 32, ReadWriteMode, TSCTSC_THRHD20Base, T...> ;

} ;

