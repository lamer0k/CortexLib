/*******************************************************************************
* Filename      : dmaregisters.hpp
*
* Details       : DMA. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(DMAREGISTERS_HPP)
#define DMAREGISTERS_HPP

#include "dmabitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA
{
  struct DMADMA_DEVICE_CFGBase {} ;

  struct DMA_DEVICE_CFG : public RegisterBase<0x4000E000, 32, ReadMode>
  {
    using NUM_DMA_CHANNELS = DMA_DMA_DEVICE_CFG_NUM_DMA_CHANNELS_Values<DMA::DMA_DEVICE_CFG, 0, 8, ReadMode, DMADMA_DEVICE_CFGBase> ;
    using NUM_SRC_PER_CHANNEL = DMA_DMA_DEVICE_CFG_NUM_SRC_PER_CHANNEL_Values<DMA::DMA_DEVICE_CFG, 8, 8, ReadMode, DMADMA_DEVICE_CFGBase> ;
  } ;

  template<typename... T> 
  using DMA_DEVICE_CFGPack  = Register<0x4000E000, 32, ReadMode, DMADMA_DEVICE_CFGBase, T...> ;

  struct DMADMA_SW_CHTRIGBase {} ;

  struct DMA_SW_CHTRIG : public RegisterBase<0x4000E004, 32, ReadWriteMode>
  {
    using CH0 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 0, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH1 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 1, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH2 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 2, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH3 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 3, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH4 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 4, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH5 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 5, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH6 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 6, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH7 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 7, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH8 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 8, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH9 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 9, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH10 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 10, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH11 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 11, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH12 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 12, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH13 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 13, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH14 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 14, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH15 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 15, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH16 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 16, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH17 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 17, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH18 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 18, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH19 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 19, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH20 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 20, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH21 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 21, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH22 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 22, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH23 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 23, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH24 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 24, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH25 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 25, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH26 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 26, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH27 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 27, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH28 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 28, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH29 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 29, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH30 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 30, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
    using CH31 = DMA_DMA_SW_CHTRIG_CH_Values<DMA::DMA_SW_CHTRIG, 31, 1, ReadWriteMode, DMADMA_SW_CHTRIGBase> ;
  } ;

  template<typename... T> 
  using DMA_SW_CHTRIGPack  = Register<0x4000E004, 32, ReadWriteMode, DMADMA_SW_CHTRIGBase, T...> ;

  struct DMADMA_INT1_SRCCFGBase {} ;

  struct DMA_INT1_SRCCFG : public RegisterBase<0x4000E100, 32, ReadWriteMode>
  {
    using INT_SRC = DMA_DMA_INT_SRCCFG_INT_SRC_Values<DMA::DMA_INT1_SRCCFG, 0, 5, ReadWriteMode, DMADMA_INT1_SRCCFGBase> ;
    using EN = DMA_DMA_INT_SRCCFG_EN_Values<DMA::DMA_INT1_SRCCFG, 5, 1, ReadWriteMode, DMADMA_INT1_SRCCFGBase> ;
  } ;

  template<typename... T> 
  using DMA_INT1_SRCCFGPack  = Register<0x4000E100, 32, ReadWriteMode, DMADMA_INT1_SRCCFGBase, T...> ;

  struct DMADMA_INT2_SRCCFGBase {} ;

  struct DMA_INT2_SRCCFG : public RegisterBase<0x4000E104, 32, ReadWriteMode>
  {
    using INT_SRC = DMA_DMA_INT_SRCCFG_INT_SRC_Values<DMA::DMA_INT2_SRCCFG, 0, 5, ReadWriteMode, DMADMA_INT2_SRCCFGBase> ;
    using EN = DMA_DMA_INT_SRCCFG_EN_Values<DMA::DMA_INT2_SRCCFG, 5, 1, ReadWriteMode, DMADMA_INT2_SRCCFGBase> ;
  } ;

  template<typename... T> 
  using DMA_INT2_SRCCFGPack  = Register<0x4000E104, 32, ReadWriteMode, DMADMA_INT2_SRCCFGBase, T...> ;

  struct DMADMA_INT3_SRCCFGBase {} ;

  struct DMA_INT3_SRCCFG : public RegisterBase<0x4000E108, 32, ReadWriteMode>
  {
    using INT_SRC = DMA_DMA_INT_SRCCFG_INT_SRC_Values<DMA::DMA_INT3_SRCCFG, 0, 5, ReadWriteMode, DMADMA_INT3_SRCCFGBase> ;
    using EN = DMA_DMA_INT_SRCCFG_EN_Values<DMA::DMA_INT3_SRCCFG, 5, 1, ReadWriteMode, DMADMA_INT3_SRCCFGBase> ;
  } ;

  template<typename... T> 
  using DMA_INT3_SRCCFGPack  = Register<0x4000E108, 32, ReadWriteMode, DMADMA_INT3_SRCCFGBase, T...> ;

  struct DMADMA_INT0_SRCFLGBase {} ;

  struct DMA_INT0_SRCFLG : public RegisterBase<0x4000E110, 32, ReadMode>
  {
    using CH0 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 0, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH1 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 1, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH2 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 2, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH3 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 3, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH4 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 4, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH5 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 5, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH6 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 6, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH7 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 7, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH8 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 8, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH9 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 9, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH10 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 10, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH11 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 11, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH12 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 12, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH13 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 13, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH14 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 14, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH15 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 15, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH16 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 16, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH17 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 17, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH18 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 18, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH19 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 19, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH20 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 20, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH21 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 21, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH22 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 22, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH23 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 23, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH24 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 24, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH25 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 25, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH26 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 26, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH27 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 27, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH28 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 28, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH29 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 29, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH30 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 30, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
    using CH31 = DMA_DMA_INT_SRCFLG_CH_Values<DMA::DMA_INT0_SRCFLG, 31, 1, ReadMode, DMADMA_INT0_SRCFLGBase> ;
  } ;

  template<typename... T> 
  using DMA_INT0_SRCFLGPack  = Register<0x4000E110, 32, ReadMode, DMADMA_INT0_SRCFLGBase, T...> ;

  struct DMADMA_INT0_CLRFLGBase {} ;

  struct DMA_INT0_CLRFLG : public RegisterBase<0x4000E114, 32, WriteMode>
  {
    using CH0 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 0, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH1 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 1, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH2 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 2, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH3 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 3, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH4 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 4, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH5 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 5, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH6 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 6, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH7 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 7, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH8 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 8, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH9 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 9, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH10 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 10, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH11 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 11, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH12 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 12, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH13 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 13, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH14 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 14, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH15 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 15, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH16 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 16, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH17 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 17, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH18 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 18, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH19 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 19, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH20 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 20, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH21 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 21, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH22 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 22, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH23 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 23, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH24 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 24, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH25 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 25, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH26 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 26, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH27 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 27, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH28 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 28, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH29 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 29, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH30 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 30, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
    using CH31 = DMA_DMA_INT_CLRFLG_CH_Values<DMA::DMA_INT0_CLRFLG, 31, 1, WriteMode, DMADMA_INT0_CLRFLGBase> ;
  } ;

  template<typename... T> 
  using DMA_INT0_CLRFLGPack  = Register<0x4000E114, 32, WriteMode, DMADMA_INT0_CLRFLGBase, T...> ;

  struct DMADMA_STATBase {} ;

  struct DMA_STAT : public RegisterBase<0x4000F000, 32, ReadMode>
  {
    using MASTEN = DMA_DMA_STAT_MASTEN_Values<DMA::DMA_STAT, 0, 1, ReadMode, DMADMA_STATBase> ;
    using STATE = DMA_DMA_STAT_STATE_Values<DMA::DMA_STAT, 4, 4, ReadMode, DMADMA_STATBase> ;
    using DMACHANS = DMA_DMA_STAT_DMACHANS_Values<DMA::DMA_STAT, 16, 5, ReadMode, DMADMA_STATBase> ;
    using TESTSTAT = DMA_DMA_STAT_TESTSTAT_Values<DMA::DMA_STAT, 28, 4, ReadMode, DMADMA_STATBase> ;
  } ;

  template<typename... T> 
  using DMA_STATPack  = Register<0x4000F000, 32, ReadMode, DMADMA_STATBase, T...> ;

  struct DMADMA_CFGBase {} ;

  struct DMA_CFG : public RegisterBase<0x4000F004, 32, WriteMode>
  {
    using MASTEN = DMA_DMA_CFG_MASTEN_Values<DMA::DMA_CFG, 0, 1, WriteMode, DMADMA_CFGBase> ;
    using CHPROTCTRL = DMA_DMA_CFG_CHPROTCTRL_Values<DMA::DMA_CFG, 5, 3, WriteMode, DMADMA_CFGBase> ;
  } ;

  template<typename... T> 
  using DMA_CFGPack  = Register<0x4000F004, 32, WriteMode, DMADMA_CFGBase, T...> ;

  struct DMADMA_CTLBASEBase {} ;

  struct DMA_CTLBASE : public RegisterBase<0x4000F008, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_CTLBASE_ADDR_Values<DMA::DMA_CTLBASE, 5, 27, ReadWriteMode, DMADMA_CTLBASEBase> ;
  } ;

  template<typename... T> 
  using DMA_CTLBASEPack  = Register<0x4000F008, 32, ReadWriteMode, DMADMA_CTLBASEBase, T...> ;

  struct DMADMA_ALTBASEBase {} ;

  struct DMA_ALTBASE : public RegisterBase<0x4000F00C, 32, ReadMode>
  {
    using ADDR = DMA_DMA_ALTBASE_ADDR_Values<DMA::DMA_ALTBASE, 0, 32, ReadMode, DMADMA_ALTBASEBase> ;
  } ;

  template<typename... T> 
  using DMA_ALTBASEPack  = Register<0x4000F00C, 32, ReadMode, DMADMA_ALTBASEBase, T...> ;

  struct DMADMA_WAITSTATBase {} ;

  struct DMA_WAITSTAT : public RegisterBase<0x4000F010, 32, ReadMode>
  {
    using WAITREQ = DMA_DMA_WAITSTAT_WAITREQ_Values<DMA::DMA_WAITSTAT, 0, 32, ReadMode, DMADMA_WAITSTATBase> ;
  } ;

  template<typename... T> 
  using DMA_WAITSTATPack  = Register<0x4000F010, 32, ReadMode, DMADMA_WAITSTATBase, T...> ;

  struct DMADMA_SWREQBase {} ;

  struct DMA_SWREQ : public RegisterBase<0x4000F014, 32, WriteMode>
  {
    using CHNL_SW_REQ = DMA_DMA_SWREQ_CHNL_SW_REQ_Values<DMA::DMA_SWREQ, 0, 32, WriteMode, DMADMA_SWREQBase> ;
  } ;

  template<typename... T> 
  using DMA_SWREQPack  = Register<0x4000F014, 32, WriteMode, DMADMA_SWREQBase, T...> ;

  struct DMADMA_USEBURSTSETBase {} ;

  struct DMA_USEBURSTSET : public RegisterBase<0x4000F018, 32, ReadWriteMode>
  {
    using SET = DMA_DMA_USEBURSTSET_SET_Values<DMA::DMA_USEBURSTSET, 0, 32, ReadWriteMode, DMADMA_USEBURSTSETBase> ;
  } ;

  template<typename... T> 
  using DMA_USEBURSTSETPack  = Register<0x4000F018, 32, ReadWriteMode, DMADMA_USEBURSTSETBase, T...> ;

  struct DMADMA_USEBURSTCLRBase {} ;

  struct DMA_USEBURSTCLR : public RegisterBase<0x4000F01C, 32, WriteMode>
  {
    using CLR = DMA_DMA_USEBURSTCLR_CLR_Values<DMA::DMA_USEBURSTCLR, 0, 32, WriteMode, DMADMA_USEBURSTCLRBase> ;
  } ;

  template<typename... T> 
  using DMA_USEBURSTCLRPack  = Register<0x4000F01C, 32, WriteMode, DMADMA_USEBURSTCLRBase, T...> ;

  struct DMADMA_REQMASKSETBase {} ;

  struct DMA_REQMASKSET : public RegisterBase<0x4000F020, 32, ReadWriteMode>
  {
    using SET = DMA_DMA_REQMASKSET_SET_Values<DMA::DMA_REQMASKSET, 0, 32, ReadWriteMode, DMADMA_REQMASKSETBase> ;
  } ;

  template<typename... T> 
  using DMA_REQMASKSETPack  = Register<0x4000F020, 32, ReadWriteMode, DMADMA_REQMASKSETBase, T...> ;

  struct DMADMA_REQMASKCLRBase {} ;

  struct DMA_REQMASKCLR : public RegisterBase<0x4000F024, 32, WriteMode>
  {
    using CLR = DMA_DMA_REQMASKCLR_CLR_Values<DMA::DMA_REQMASKCLR, 0, 32, WriteMode, DMADMA_REQMASKCLRBase> ;
  } ;

  template<typename... T> 
  using DMA_REQMASKCLRPack  = Register<0x4000F024, 32, WriteMode, DMADMA_REQMASKCLRBase, T...> ;

  struct DMADMA_ENASETBase {} ;

  struct DMA_ENASET : public RegisterBase<0x4000F028, 32, ReadWriteMode>
  {
    using SET = DMA_DMA_ENASET_SET_Values<DMA::DMA_ENASET, 0, 32, ReadWriteMode, DMADMA_ENASETBase> ;
  } ;

  template<typename... T> 
  using DMA_ENASETPack  = Register<0x4000F028, 32, ReadWriteMode, DMADMA_ENASETBase, T...> ;

  struct DMADMA_ENACLRBase {} ;

  struct DMA_ENACLR : public RegisterBase<0x4000F02C, 32, WriteMode>
  {
    using CLR = DMA_DMA_ENACLR_CLR_Values<DMA::DMA_ENACLR, 0, 32, WriteMode, DMADMA_ENACLRBase> ;
  } ;

  template<typename... T> 
  using DMA_ENACLRPack  = Register<0x4000F02C, 32, WriteMode, DMADMA_ENACLRBase, T...> ;

  struct DMADMA_ALTSETBase {} ;

  struct DMA_ALTSET : public RegisterBase<0x4000F030, 32, ReadWriteMode>
  {
    using SET = DMA_DMA_ALTSET_SET_Values<DMA::DMA_ALTSET, 0, 32, ReadWriteMode, DMADMA_ALTSETBase> ;
  } ;

  template<typename... T> 
  using DMA_ALTSETPack  = Register<0x4000F030, 32, ReadWriteMode, DMADMA_ALTSETBase, T...> ;

  struct DMADMA_ALTCLRBase {} ;

  struct DMA_ALTCLR : public RegisterBase<0x4000F034, 32, WriteMode>
  {
    using CLR = DMA_DMA_ALTCLR_CLR_Values<DMA::DMA_ALTCLR, 0, 32, WriteMode, DMADMA_ALTCLRBase> ;
  } ;

  template<typename... T> 
  using DMA_ALTCLRPack  = Register<0x4000F034, 32, WriteMode, DMADMA_ALTCLRBase, T...> ;

  struct DMADMA_PRIOSETBase {} ;

  struct DMA_PRIOSET : public RegisterBase<0x4000F038, 32, ReadWriteMode>
  {
    using SET = DMA_DMA_PRIOSET_SET_Values<DMA::DMA_PRIOSET, 0, 32, ReadWriteMode, DMADMA_PRIOSETBase> ;
  } ;

  template<typename... T> 
  using DMA_PRIOSETPack  = Register<0x4000F038, 32, ReadWriteMode, DMADMA_PRIOSETBase, T...> ;

  struct DMADMA_PRIOCLRBase {} ;

  struct DMA_PRIOCLR : public RegisterBase<0x4000F03C, 32, WriteMode>
  {
    using CLR = DMA_DMA_PRIOCLR_CLR_Values<DMA::DMA_PRIOCLR, 0, 32, WriteMode, DMADMA_PRIOCLRBase> ;
  } ;

  template<typename... T> 
  using DMA_PRIOCLRPack  = Register<0x4000F03C, 32, WriteMode, DMADMA_PRIOCLRBase, T...> ;

  struct DMADMA_ERRCLRBase {} ;

  struct DMA_ERRCLR : public RegisterBase<0x4000F04C, 32, ReadWriteMode>
  {
    using ERRCLR = DMA_DMA_ERRCLR_ERRCLR_Values<DMA::DMA_ERRCLR, 0, 1, ReadWriteMode, DMADMA_ERRCLRBase> ;
  } ;

  template<typename... T> 
  using DMA_ERRCLRPack  = Register<0x4000F04C, 32, ReadWriteMode, DMADMA_ERRCLRBase, T...> ;

  struct DMADMA_CH_SRCCFG0Base {} ;

  struct DMA_CH_SRCCFG0 : public RegisterBase<0x4000E010, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG0, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG0Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG0Pack  = Register<0x4000E010, 32, ReadWriteMode, DMADMA_CH_SRCCFG0Base, T...> ;

  struct DMADMA_CH_SRCCFG1Base {} ;

  struct DMA_CH_SRCCFG1 : public RegisterBase<0x4000E014, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG1, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG1Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG1Pack  = Register<0x4000E014, 32, ReadWriteMode, DMADMA_CH_SRCCFG1Base, T...> ;

  struct DMADMA_CH_SRCCFG2Base {} ;

  struct DMA_CH_SRCCFG2 : public RegisterBase<0x4000E018, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG2, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG2Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG2Pack  = Register<0x4000E018, 32, ReadWriteMode, DMADMA_CH_SRCCFG2Base, T...> ;

  struct DMADMA_CH_SRCCFG3Base {} ;

  struct DMA_CH_SRCCFG3 : public RegisterBase<0x4000E01C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG3, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG3Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG3Pack  = Register<0x4000E01C, 32, ReadWriteMode, DMADMA_CH_SRCCFG3Base, T...> ;

  struct DMADMA_CH_SRCCFG4Base {} ;

  struct DMA_CH_SRCCFG4 : public RegisterBase<0x4000E020, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG4, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG4Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG4Pack  = Register<0x4000E020, 32, ReadWriteMode, DMADMA_CH_SRCCFG4Base, T...> ;

  struct DMADMA_CH_SRCCFG5Base {} ;

  struct DMA_CH_SRCCFG5 : public RegisterBase<0x4000E024, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG5, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG5Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG5Pack  = Register<0x4000E024, 32, ReadWriteMode, DMADMA_CH_SRCCFG5Base, T...> ;

  struct DMADMA_CH_SRCCFG6Base {} ;

  struct DMA_CH_SRCCFG6 : public RegisterBase<0x4000E028, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG6, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG6Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG6Pack  = Register<0x4000E028, 32, ReadWriteMode, DMADMA_CH_SRCCFG6Base, T...> ;

  struct DMADMA_CH_SRCCFG7Base {} ;

  struct DMA_CH_SRCCFG7 : public RegisterBase<0x4000E02C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG7, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG7Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG7Pack  = Register<0x4000E02C, 32, ReadWriteMode, DMADMA_CH_SRCCFG7Base, T...> ;

  struct DMADMA_CH_SRCCFG8Base {} ;

  struct DMA_CH_SRCCFG8 : public RegisterBase<0x4000E030, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG8, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG8Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG8Pack  = Register<0x4000E030, 32, ReadWriteMode, DMADMA_CH_SRCCFG8Base, T...> ;

  struct DMADMA_CH_SRCCFG9Base {} ;

  struct DMA_CH_SRCCFG9 : public RegisterBase<0x4000E034, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG9, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG9Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG9Pack  = Register<0x4000E034, 32, ReadWriteMode, DMADMA_CH_SRCCFG9Base, T...> ;

  struct DMADMA_CH_SRCCFG10Base {} ;

  struct DMA_CH_SRCCFG10 : public RegisterBase<0x4000E038, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG10, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG10Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG10Pack  = Register<0x4000E038, 32, ReadWriteMode, DMADMA_CH_SRCCFG10Base, T...> ;

  struct DMADMA_CH_SRCCFG11Base {} ;

  struct DMA_CH_SRCCFG11 : public RegisterBase<0x4000E03C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG11, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG11Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG11Pack  = Register<0x4000E03C, 32, ReadWriteMode, DMADMA_CH_SRCCFG11Base, T...> ;

  struct DMADMA_CH_SRCCFG12Base {} ;

  struct DMA_CH_SRCCFG12 : public RegisterBase<0x4000E040, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG12, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG12Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG12Pack  = Register<0x4000E040, 32, ReadWriteMode, DMADMA_CH_SRCCFG12Base, T...> ;

  struct DMADMA_CH_SRCCFG13Base {} ;

  struct DMA_CH_SRCCFG13 : public RegisterBase<0x4000E044, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG13, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG13Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG13Pack  = Register<0x4000E044, 32, ReadWriteMode, DMADMA_CH_SRCCFG13Base, T...> ;

  struct DMADMA_CH_SRCCFG14Base {} ;

  struct DMA_CH_SRCCFG14 : public RegisterBase<0x4000E048, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG14, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG14Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG14Pack  = Register<0x4000E048, 32, ReadWriteMode, DMADMA_CH_SRCCFG14Base, T...> ;

  struct DMADMA_CH_SRCCFG15Base {} ;

  struct DMA_CH_SRCCFG15 : public RegisterBase<0x4000E04C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG15, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG15Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG15Pack  = Register<0x4000E04C, 32, ReadWriteMode, DMADMA_CH_SRCCFG15Base, T...> ;

  struct DMADMA_CH_SRCCFG16Base {} ;

  struct DMA_CH_SRCCFG16 : public RegisterBase<0x4000E050, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG16, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG16Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG16Pack  = Register<0x4000E050, 32, ReadWriteMode, DMADMA_CH_SRCCFG16Base, T...> ;

  struct DMADMA_CH_SRCCFG17Base {} ;

  struct DMA_CH_SRCCFG17 : public RegisterBase<0x4000E054, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG17, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG17Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG17Pack  = Register<0x4000E054, 32, ReadWriteMode, DMADMA_CH_SRCCFG17Base, T...> ;

  struct DMADMA_CH_SRCCFG18Base {} ;

  struct DMA_CH_SRCCFG18 : public RegisterBase<0x4000E058, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG18, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG18Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG18Pack  = Register<0x4000E058, 32, ReadWriteMode, DMADMA_CH_SRCCFG18Base, T...> ;

  struct DMADMA_CH_SRCCFG19Base {} ;

  struct DMA_CH_SRCCFG19 : public RegisterBase<0x4000E05C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG19, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG19Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG19Pack  = Register<0x4000E05C, 32, ReadWriteMode, DMADMA_CH_SRCCFG19Base, T...> ;

  struct DMADMA_CH_SRCCFG20Base {} ;

  struct DMA_CH_SRCCFG20 : public RegisterBase<0x4000E060, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG20, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG20Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG20Pack  = Register<0x4000E060, 32, ReadWriteMode, DMADMA_CH_SRCCFG20Base, T...> ;

  struct DMADMA_CH_SRCCFG21Base {} ;

  struct DMA_CH_SRCCFG21 : public RegisterBase<0x4000E064, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG21, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG21Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG21Pack  = Register<0x4000E064, 32, ReadWriteMode, DMADMA_CH_SRCCFG21Base, T...> ;

  struct DMADMA_CH_SRCCFG22Base {} ;

  struct DMA_CH_SRCCFG22 : public RegisterBase<0x4000E068, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG22, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG22Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG22Pack  = Register<0x4000E068, 32, ReadWriteMode, DMADMA_CH_SRCCFG22Base, T...> ;

  struct DMADMA_CH_SRCCFG23Base {} ;

  struct DMA_CH_SRCCFG23 : public RegisterBase<0x4000E06C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG23, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG23Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG23Pack  = Register<0x4000E06C, 32, ReadWriteMode, DMADMA_CH_SRCCFG23Base, T...> ;

  struct DMADMA_CH_SRCCFG24Base {} ;

  struct DMA_CH_SRCCFG24 : public RegisterBase<0x4000E070, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG24, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG24Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG24Pack  = Register<0x4000E070, 32, ReadWriteMode, DMADMA_CH_SRCCFG24Base, T...> ;

  struct DMADMA_CH_SRCCFG25Base {} ;

  struct DMA_CH_SRCCFG25 : public RegisterBase<0x4000E074, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG25, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG25Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG25Pack  = Register<0x4000E074, 32, ReadWriteMode, DMADMA_CH_SRCCFG25Base, T...> ;

  struct DMADMA_CH_SRCCFG26Base {} ;

  struct DMA_CH_SRCCFG26 : public RegisterBase<0x4000E078, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG26, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG26Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG26Pack  = Register<0x4000E078, 32, ReadWriteMode, DMADMA_CH_SRCCFG26Base, T...> ;

  struct DMADMA_CH_SRCCFG27Base {} ;

  struct DMA_CH_SRCCFG27 : public RegisterBase<0x4000E07C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG27, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG27Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG27Pack  = Register<0x4000E07C, 32, ReadWriteMode, DMADMA_CH_SRCCFG27Base, T...> ;

  struct DMADMA_CH_SRCCFG28Base {} ;

  struct DMA_CH_SRCCFG28 : public RegisterBase<0x4000E080, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG28, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG28Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG28Pack  = Register<0x4000E080, 32, ReadWriteMode, DMADMA_CH_SRCCFG28Base, T...> ;

  struct DMADMA_CH_SRCCFG29Base {} ;

  struct DMA_CH_SRCCFG29 : public RegisterBase<0x4000E084, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG29, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG29Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG29Pack  = Register<0x4000E084, 32, ReadWriteMode, DMADMA_CH_SRCCFG29Base, T...> ;

  struct DMADMA_CH_SRCCFG30Base {} ;

  struct DMA_CH_SRCCFG30 : public RegisterBase<0x4000E088, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG30, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG30Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG30Pack  = Register<0x4000E088, 32, ReadWriteMode, DMADMA_CH_SRCCFG30Base, T...> ;

  struct DMADMA_CH_SRCCFG31Base {} ;

  struct DMA_CH_SRCCFG31 : public RegisterBase<0x4000E08C, 32, ReadWriteMode>
  {
    using DMA_SRC = DMA_DMA_CH_SRCCFG_DMA_SRC_Values<DMA::DMA_CH_SRCCFG31, 0, 8, ReadWriteMode, DMADMA_CH_SRCCFG31Base> ;
  } ;

  template<typename... T> 
  using DMA_CH_SRCCFG31Pack  = Register<0x4000E08C, 32, ReadWriteMode, DMADMA_CH_SRCCFG31Base, T...> ;

} ;

#endif //#if !defined(DMAREGISTERS_HPP)
