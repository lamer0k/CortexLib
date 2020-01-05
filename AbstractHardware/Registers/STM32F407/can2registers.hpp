/*******************************************************************************
* Filename      : can2registers.hpp
*
* Details       : Controller area network. This header file is auto-generated
*                 for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(CAN2REGISTERS_HPP)
#define CAN2REGISTERS_HPP

#include "can2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAN2
{
  struct CAN2MCRBase {} ;

  struct MCR : public RegisterBase<0x40006800, 32, ReadWriteMode>
  {
    using DBF = CAN2_MCR_DBF_Values<CAN2::MCR, 16, 1, ReadWriteMode, CAN2MCRBase> ;
    using RESET = CAN2_MCR_RESET_Values<CAN2::MCR, 15, 1, ReadWriteMode, CAN2MCRBase> ;
    using TTCM = CAN2_MCR_TTCM_Values<CAN2::MCR, 7, 1, ReadWriteMode, CAN2MCRBase> ;
    using ABOM = CAN2_MCR_ABOM_Values<CAN2::MCR, 6, 1, ReadWriteMode, CAN2MCRBase> ;
    using AWUM = CAN2_MCR_AWUM_Values<CAN2::MCR, 5, 1, ReadWriteMode, CAN2MCRBase> ;
    using NART = CAN2_MCR_NART_Values<CAN2::MCR, 4, 1, ReadWriteMode, CAN2MCRBase> ;
    using RFLM = CAN2_MCR_RFLM_Values<CAN2::MCR, 3, 1, ReadWriteMode, CAN2MCRBase> ;
    using TXFP = CAN2_MCR_TXFP_Values<CAN2::MCR, 2, 1, ReadWriteMode, CAN2MCRBase> ;
    using SLEEP = CAN2_MCR_SLEEP_Values<CAN2::MCR, 1, 1, ReadWriteMode, CAN2MCRBase> ;
    using INRQ = CAN2_MCR_INRQ_Values<CAN2::MCR, 0, 1, ReadWriteMode, CAN2MCRBase> ;
    using FieldValues = CAN2_MCR_INRQ_Values<CAN2::MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCRPack  = Register<0x40006800, 32, ReadWriteMode, CAN2MCRBase, T...> ;

  struct CAN2MSRBase {} ;

  struct MSR : public RegisterBase<0x40006804, 32, ReadWriteMode>
  {
    using RX = CAN2_MSR_RX_Values<CAN2::MSR, 11, 1, ReadMode, CAN2MSRBase> ;
    using SAMP = CAN2_MSR_SAMP_Values<CAN2::MSR, 10, 1, ReadMode, CAN2MSRBase> ;
    using RXM = CAN2_MSR_RXM_Values<CAN2::MSR, 9, 1, ReadMode, CAN2MSRBase> ;
    using TXM = CAN2_MSR_TXM_Values<CAN2::MSR, 8, 1, ReadMode, CAN2MSRBase> ;
    using SLAKI = CAN2_MSR_SLAKI_Values<CAN2::MSR, 4, 1, ReadWriteMode, CAN2MSRBase> ;
    using WKUI = CAN2_MSR_WKUI_Values<CAN2::MSR, 3, 1, ReadWriteMode, CAN2MSRBase> ;
    using ERRI = CAN2_MSR_ERRI_Values<CAN2::MSR, 2, 1, ReadWriteMode, CAN2MSRBase> ;
    using SLAK = CAN2_MSR_SLAK_Values<CAN2::MSR, 1, 1, ReadMode, CAN2MSRBase> ;
    using INAK = CAN2_MSR_INAK_Values<CAN2::MSR, 0, 1, ReadMode, CAN2MSRBase> ;
    using FieldValues = CAN2_MSR_INAK_Values<CAN2::MSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MSRPack  = Register<0x40006804, 32, ReadWriteMode, CAN2MSRBase, T...> ;

  struct CAN2TSRBase {} ;

  struct TSR : public RegisterBase<0x40006808, 32, ReadWriteMode>
  {
    using LOW2 = CAN2_TSR_LOW2_Values<CAN2::TSR, 31, 1, ReadMode, CAN2TSRBase> ;
    using LOW1 = CAN2_TSR_LOW1_Values<CAN2::TSR, 30, 1, ReadMode, CAN2TSRBase> ;
    using LOW0 = CAN2_TSR_LOW0_Values<CAN2::TSR, 29, 1, ReadMode, CAN2TSRBase> ;
    using TME2 = CAN2_TSR_TME2_Values<CAN2::TSR, 28, 1, ReadMode, CAN2TSRBase> ;
    using TME1 = CAN2_TSR_TME1_Values<CAN2::TSR, 27, 1, ReadMode, CAN2TSRBase> ;
    using TME0 = CAN2_TSR_TME0_Values<CAN2::TSR, 26, 1, ReadMode, CAN2TSRBase> ;
    using CODE = CAN2_TSR_CODE_Values<CAN2::TSR, 24, 2, ReadMode, CAN2TSRBase> ;
    using ABRQ2 = CAN2_TSR_ABRQ2_Values<CAN2::TSR, 23, 1, ReadWriteMode, CAN2TSRBase> ;
    using TERR2 = CAN2_TSR_TERR2_Values<CAN2::TSR, 19, 1, ReadWriteMode, CAN2TSRBase> ;
    using ALST2 = CAN2_TSR_ALST2_Values<CAN2::TSR, 18, 1, ReadWriteMode, CAN2TSRBase> ;
    using TXOK2 = CAN2_TSR_TXOK2_Values<CAN2::TSR, 17, 1, ReadWriteMode, CAN2TSRBase> ;
    using RQCP2 = CAN2_TSR_RQCP2_Values<CAN2::TSR, 16, 1, ReadWriteMode, CAN2TSRBase> ;
    using ABRQ1 = CAN2_TSR_ABRQ1_Values<CAN2::TSR, 15, 1, ReadWriteMode, CAN2TSRBase> ;
    using TERR1 = CAN2_TSR_TERR1_Values<CAN2::TSR, 11, 1, ReadWriteMode, CAN2TSRBase> ;
    using ALST1 = CAN2_TSR_ALST1_Values<CAN2::TSR, 10, 1, ReadWriteMode, CAN2TSRBase> ;
    using TXOK1 = CAN2_TSR_TXOK1_Values<CAN2::TSR, 9, 1, ReadWriteMode, CAN2TSRBase> ;
    using RQCP1 = CAN2_TSR_RQCP1_Values<CAN2::TSR, 8, 1, ReadWriteMode, CAN2TSRBase> ;
    using ABRQ0 = CAN2_TSR_ABRQ0_Values<CAN2::TSR, 7, 1, ReadWriteMode, CAN2TSRBase> ;
    using TERR0 = CAN2_TSR_TERR0_Values<CAN2::TSR, 3, 1, ReadWriteMode, CAN2TSRBase> ;
    using ALST0 = CAN2_TSR_ALST0_Values<CAN2::TSR, 2, 1, ReadWriteMode, CAN2TSRBase> ;
    using TXOK0 = CAN2_TSR_TXOK0_Values<CAN2::TSR, 1, 1, ReadWriteMode, CAN2TSRBase> ;
    using RQCP0 = CAN2_TSR_RQCP0_Values<CAN2::TSR, 0, 1, ReadWriteMode, CAN2TSRBase> ;
    using FieldValues = CAN2_TSR_RQCP0_Values<CAN2::TSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSRPack  = Register<0x40006808, 32, ReadWriteMode, CAN2TSRBase, T...> ;

  struct CAN2RF0RBase {} ;

  struct RF0R : public RegisterBase<0x4000680C, 32, ReadWriteMode>
  {
    using RFOM0 = CAN2_RF0R_RFOM0_Values<CAN2::RF0R, 5, 1, ReadWriteMode, CAN2RF0RBase> ;
    using FOVR0 = CAN2_RF0R_FOVR0_Values<CAN2::RF0R, 4, 1, ReadWriteMode, CAN2RF0RBase> ;
    using FULL0 = CAN2_RF0R_FULL0_Values<CAN2::RF0R, 3, 1, ReadWriteMode, CAN2RF0RBase> ;
    using FMP0 = CAN2_RF0R_FMP0_Values<CAN2::RF0R, 0, 2, ReadMode, CAN2RF0RBase> ;
    using FieldValues = CAN2_RF0R_FMP0_Values<CAN2::RF0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RF0RPack  = Register<0x4000680C, 32, ReadWriteMode, CAN2RF0RBase, T...> ;

  struct CAN2RF1RBase {} ;

  struct RF1R : public RegisterBase<0x40006810, 32, ReadWriteMode>
  {
    using RFOM1 = CAN2_RF1R_RFOM1_Values<CAN2::RF1R, 5, 1, ReadWriteMode, CAN2RF1RBase> ;
    using FOVR1 = CAN2_RF1R_FOVR1_Values<CAN2::RF1R, 4, 1, ReadWriteMode, CAN2RF1RBase> ;
    using FULL1 = CAN2_RF1R_FULL1_Values<CAN2::RF1R, 3, 1, ReadWriteMode, CAN2RF1RBase> ;
    using FMP1 = CAN2_RF1R_FMP1_Values<CAN2::RF1R, 0, 2, ReadMode, CAN2RF1RBase> ;
    using FieldValues = CAN2_RF1R_FMP1_Values<CAN2::RF1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RF1RPack  = Register<0x40006810, 32, ReadWriteMode, CAN2RF1RBase, T...> ;

  struct CAN2IERBase {} ;

  struct IER : public RegisterBase<0x40006814, 32, ReadWriteMode>
  {
    using SLKIE = CAN2_IER_SLKIE_Values<CAN2::IER, 17, 1, ReadWriteMode, CAN2IERBase> ;
    using WKUIE = CAN2_IER_WKUIE_Values<CAN2::IER, 16, 1, ReadWriteMode, CAN2IERBase> ;
    using ERRIE = CAN2_IER_ERRIE_Values<CAN2::IER, 15, 1, ReadWriteMode, CAN2IERBase> ;
    using LECIE = CAN2_IER_LECIE_Values<CAN2::IER, 11, 1, ReadWriteMode, CAN2IERBase> ;
    using BOFIE = CAN2_IER_BOFIE_Values<CAN2::IER, 10, 1, ReadWriteMode, CAN2IERBase> ;
    using EPVIE = CAN2_IER_EPVIE_Values<CAN2::IER, 9, 1, ReadWriteMode, CAN2IERBase> ;
    using EWGIE = CAN2_IER_EWGIE_Values<CAN2::IER, 8, 1, ReadWriteMode, CAN2IERBase> ;
    using FOVIE1 = CAN2_IER_FOVIE1_Values<CAN2::IER, 6, 1, ReadWriteMode, CAN2IERBase> ;
    using FFIE1 = CAN2_IER_FFIE1_Values<CAN2::IER, 5, 1, ReadWriteMode, CAN2IERBase> ;
    using FMPIE1 = CAN2_IER_FMPIE1_Values<CAN2::IER, 4, 1, ReadWriteMode, CAN2IERBase> ;
    using FOVIE0 = CAN2_IER_FOVIE0_Values<CAN2::IER, 3, 1, ReadWriteMode, CAN2IERBase> ;
    using FFIE0 = CAN2_IER_FFIE0_Values<CAN2::IER, 2, 1, ReadWriteMode, CAN2IERBase> ;
    using FMPIE0 = CAN2_IER_FMPIE0_Values<CAN2::IER, 1, 1, ReadWriteMode, CAN2IERBase> ;
    using TMEIE = CAN2_IER_TMEIE_Values<CAN2::IER, 0, 1, ReadWriteMode, CAN2IERBase> ;
    using FieldValues = CAN2_IER_TMEIE_Values<CAN2::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40006814, 32, ReadWriteMode, CAN2IERBase, T...> ;

  struct CAN2ESRBase {} ;

  struct ESR : public RegisterBase<0x40006818, 32, ReadWriteMode>
  {
    using REC = CAN2_ESR_REC_Values<CAN2::ESR, 24, 8, ReadMode, CAN2ESRBase> ;
    using TEC = CAN2_ESR_TEC_Values<CAN2::ESR, 16, 8, ReadMode, CAN2ESRBase> ;
    using LEC = CAN2_ESR_LEC_Values<CAN2::ESR, 4, 3, ReadWriteMode, CAN2ESRBase> ;
    using BOFF = CAN2_ESR_BOFF_Values<CAN2::ESR, 2, 1, ReadMode, CAN2ESRBase> ;
    using EPVF = CAN2_ESR_EPVF_Values<CAN2::ESR, 1, 1, ReadMode, CAN2ESRBase> ;
    using EWGF = CAN2_ESR_EWGF_Values<CAN2::ESR, 0, 1, ReadMode, CAN2ESRBase> ;
    using FieldValues = CAN2_ESR_EWGF_Values<CAN2::ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ESRPack  = Register<0x40006818, 32, ReadWriteMode, CAN2ESRBase, T...> ;

  struct CAN2BTRBase {} ;

  struct BTR : public RegisterBase<0x4000681C, 32, ReadWriteMode>
  {
    using SILM = CAN2_BTR_SILM_Values<CAN2::BTR, 31, 1, ReadWriteMode, CAN2BTRBase> ;
    using LBKM = CAN2_BTR_LBKM_Values<CAN2::BTR, 30, 1, ReadWriteMode, CAN2BTRBase> ;
    using SJW = CAN2_BTR_SJW_Values<CAN2::BTR, 24, 2, ReadWriteMode, CAN2BTRBase> ;
    using TS2 = CAN2_BTR_TS2_Values<CAN2::BTR, 20, 3, ReadWriteMode, CAN2BTRBase> ;
    using TS1 = CAN2_BTR_TS1_Values<CAN2::BTR, 16, 4, ReadWriteMode, CAN2BTRBase> ;
    using BRP = CAN2_BTR_BRP_Values<CAN2::BTR, 0, 10, ReadWriteMode, CAN2BTRBase> ;
    using FieldValues = CAN2_BTR_BRP_Values<CAN2::BTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTRPack  = Register<0x4000681C, 32, ReadWriteMode, CAN2BTRBase, T...> ;

  struct CAN2TI0RBase {} ;

  struct TI0R : public RegisterBase<0x40006980, 32, ReadWriteMode>
  {
    using STID = CAN2_TI0R_STID_Values<CAN2::TI0R, 21, 11, ReadWriteMode, CAN2TI0RBase> ;
    using EXID = CAN2_TI0R_EXID_Values<CAN2::TI0R, 3, 18, ReadWriteMode, CAN2TI0RBase> ;
    using IDE = CAN2_TI0R_IDE_Values<CAN2::TI0R, 2, 1, ReadWriteMode, CAN2TI0RBase> ;
    using RTR = CAN2_TI0R_RTR_Values<CAN2::TI0R, 1, 1, ReadWriteMode, CAN2TI0RBase> ;
    using TXRQ = CAN2_TI0R_TXRQ_Values<CAN2::TI0R, 0, 1, ReadWriteMode, CAN2TI0RBase> ;
    using FieldValues = CAN2_TI0R_TXRQ_Values<CAN2::TI0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI0RPack  = Register<0x40006980, 32, ReadWriteMode, CAN2TI0RBase, T...> ;

  struct CAN2TDT0RBase {} ;

  struct TDT0R : public RegisterBase<0x40006984, 32, ReadWriteMode>
  {
    using TIME = CAN2_TDT0R_TIME_Values<CAN2::TDT0R, 16, 16, ReadWriteMode, CAN2TDT0RBase> ;
    using TGT = CAN2_TDT0R_TGT_Values<CAN2::TDT0R, 8, 1, ReadWriteMode, CAN2TDT0RBase> ;
    using DLC = CAN2_TDT0R_DLC_Values<CAN2::TDT0R, 0, 4, ReadWriteMode, CAN2TDT0RBase> ;
    using FieldValues = CAN2_TDT0R_DLC_Values<CAN2::TDT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT0RPack  = Register<0x40006984, 32, ReadWriteMode, CAN2TDT0RBase, T...> ;

  struct CAN2TDL0RBase {} ;

  struct TDL0R : public RegisterBase<0x40006988, 32, ReadWriteMode>
  {
    using DATA3 = CAN2_TDL0R_DATA3_Values<CAN2::TDL0R, 24, 8, ReadWriteMode, CAN2TDL0RBase> ;
    using DATA2 = CAN2_TDL0R_DATA2_Values<CAN2::TDL0R, 16, 8, ReadWriteMode, CAN2TDL0RBase> ;
    using DATA1 = CAN2_TDL0R_DATA1_Values<CAN2::TDL0R, 8, 8, ReadWriteMode, CAN2TDL0RBase> ;
    using DATA0 = CAN2_TDL0R_DATA0_Values<CAN2::TDL0R, 0, 8, ReadWriteMode, CAN2TDL0RBase> ;
    using FieldValues = CAN2_TDL0R_DATA0_Values<CAN2::TDL0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL0RPack  = Register<0x40006988, 32, ReadWriteMode, CAN2TDL0RBase, T...> ;

  struct CAN2TDH0RBase {} ;

  struct TDH0R : public RegisterBase<0x4000698C, 32, ReadWriteMode>
  {
    using DATA7 = CAN2_TDH0R_DATA7_Values<CAN2::TDH0R, 24, 8, ReadWriteMode, CAN2TDH0RBase> ;
    using DATA6 = CAN2_TDH0R_DATA6_Values<CAN2::TDH0R, 16, 8, ReadWriteMode, CAN2TDH0RBase> ;
    using DATA5 = CAN2_TDH0R_DATA5_Values<CAN2::TDH0R, 8, 8, ReadWriteMode, CAN2TDH0RBase> ;
    using DATA4 = CAN2_TDH0R_DATA4_Values<CAN2::TDH0R, 0, 8, ReadWriteMode, CAN2TDH0RBase> ;
    using FieldValues = CAN2_TDH0R_DATA4_Values<CAN2::TDH0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH0RPack  = Register<0x4000698C, 32, ReadWriteMode, CAN2TDH0RBase, T...> ;

  struct CAN2TI1RBase {} ;

  struct TI1R : public RegisterBase<0x40006990, 32, ReadWriteMode>
  {
    using STID = CAN2_TI1R_STID_Values<CAN2::TI1R, 21, 11, ReadWriteMode, CAN2TI1RBase> ;
    using EXID = CAN2_TI1R_EXID_Values<CAN2::TI1R, 3, 18, ReadWriteMode, CAN2TI1RBase> ;
    using IDE = CAN2_TI1R_IDE_Values<CAN2::TI1R, 2, 1, ReadWriteMode, CAN2TI1RBase> ;
    using RTR = CAN2_TI1R_RTR_Values<CAN2::TI1R, 1, 1, ReadWriteMode, CAN2TI1RBase> ;
    using TXRQ = CAN2_TI1R_TXRQ_Values<CAN2::TI1R, 0, 1, ReadWriteMode, CAN2TI1RBase> ;
    using FieldValues = CAN2_TI1R_TXRQ_Values<CAN2::TI1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI1RPack  = Register<0x40006990, 32, ReadWriteMode, CAN2TI1RBase, T...> ;

  struct CAN2TDT1RBase {} ;

  struct TDT1R : public RegisterBase<0x40006994, 32, ReadWriteMode>
  {
    using TIME = CAN2_TDT1R_TIME_Values<CAN2::TDT1R, 16, 16, ReadWriteMode, CAN2TDT1RBase> ;
    using TGT = CAN2_TDT1R_TGT_Values<CAN2::TDT1R, 8, 1, ReadWriteMode, CAN2TDT1RBase> ;
    using DLC = CAN2_TDT1R_DLC_Values<CAN2::TDT1R, 0, 4, ReadWriteMode, CAN2TDT1RBase> ;
    using FieldValues = CAN2_TDT1R_DLC_Values<CAN2::TDT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT1RPack  = Register<0x40006994, 32, ReadWriteMode, CAN2TDT1RBase, T...> ;

  struct CAN2TDL1RBase {} ;

  struct TDL1R : public RegisterBase<0x40006998, 32, ReadWriteMode>
  {
    using DATA3 = CAN2_TDL1R_DATA3_Values<CAN2::TDL1R, 24, 8, ReadWriteMode, CAN2TDL1RBase> ;
    using DATA2 = CAN2_TDL1R_DATA2_Values<CAN2::TDL1R, 16, 8, ReadWriteMode, CAN2TDL1RBase> ;
    using DATA1 = CAN2_TDL1R_DATA1_Values<CAN2::TDL1R, 8, 8, ReadWriteMode, CAN2TDL1RBase> ;
    using DATA0 = CAN2_TDL1R_DATA0_Values<CAN2::TDL1R, 0, 8, ReadWriteMode, CAN2TDL1RBase> ;
    using FieldValues = CAN2_TDL1R_DATA0_Values<CAN2::TDL1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL1RPack  = Register<0x40006998, 32, ReadWriteMode, CAN2TDL1RBase, T...> ;

  struct CAN2TDH1RBase {} ;

  struct TDH1R : public RegisterBase<0x4000699C, 32, ReadWriteMode>
  {
    using DATA7 = CAN2_TDH1R_DATA7_Values<CAN2::TDH1R, 24, 8, ReadWriteMode, CAN2TDH1RBase> ;
    using DATA6 = CAN2_TDH1R_DATA6_Values<CAN2::TDH1R, 16, 8, ReadWriteMode, CAN2TDH1RBase> ;
    using DATA5 = CAN2_TDH1R_DATA5_Values<CAN2::TDH1R, 8, 8, ReadWriteMode, CAN2TDH1RBase> ;
    using DATA4 = CAN2_TDH1R_DATA4_Values<CAN2::TDH1R, 0, 8, ReadWriteMode, CAN2TDH1RBase> ;
    using FieldValues = CAN2_TDH1R_DATA4_Values<CAN2::TDH1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH1RPack  = Register<0x4000699C, 32, ReadWriteMode, CAN2TDH1RBase, T...> ;

  struct CAN2TI2RBase {} ;

  struct TI2R : public RegisterBase<0x400069A0, 32, ReadWriteMode>
  {
    using STID = CAN2_TI2R_STID_Values<CAN2::TI2R, 21, 11, ReadWriteMode, CAN2TI2RBase> ;
    using EXID = CAN2_TI2R_EXID_Values<CAN2::TI2R, 3, 18, ReadWriteMode, CAN2TI2RBase> ;
    using IDE = CAN2_TI2R_IDE_Values<CAN2::TI2R, 2, 1, ReadWriteMode, CAN2TI2RBase> ;
    using RTR = CAN2_TI2R_RTR_Values<CAN2::TI2R, 1, 1, ReadWriteMode, CAN2TI2RBase> ;
    using TXRQ = CAN2_TI2R_TXRQ_Values<CAN2::TI2R, 0, 1, ReadWriteMode, CAN2TI2RBase> ;
    using FieldValues = CAN2_TI2R_TXRQ_Values<CAN2::TI2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI2RPack  = Register<0x400069A0, 32, ReadWriteMode, CAN2TI2RBase, T...> ;

  struct CAN2TDT2RBase {} ;

  struct TDT2R : public RegisterBase<0x400069A4, 32, ReadWriteMode>
  {
    using TIME = CAN2_TDT2R_TIME_Values<CAN2::TDT2R, 16, 16, ReadWriteMode, CAN2TDT2RBase> ;
    using TGT = CAN2_TDT2R_TGT_Values<CAN2::TDT2R, 8, 1, ReadWriteMode, CAN2TDT2RBase> ;
    using DLC = CAN2_TDT2R_DLC_Values<CAN2::TDT2R, 0, 4, ReadWriteMode, CAN2TDT2RBase> ;
    using FieldValues = CAN2_TDT2R_DLC_Values<CAN2::TDT2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT2RPack  = Register<0x400069A4, 32, ReadWriteMode, CAN2TDT2RBase, T...> ;

  struct CAN2TDL2RBase {} ;

  struct TDL2R : public RegisterBase<0x400069A8, 32, ReadWriteMode>
  {
    using DATA3 = CAN2_TDL2R_DATA3_Values<CAN2::TDL2R, 24, 8, ReadWriteMode, CAN2TDL2RBase> ;
    using DATA2 = CAN2_TDL2R_DATA2_Values<CAN2::TDL2R, 16, 8, ReadWriteMode, CAN2TDL2RBase> ;
    using DATA1 = CAN2_TDL2R_DATA1_Values<CAN2::TDL2R, 8, 8, ReadWriteMode, CAN2TDL2RBase> ;
    using DATA0 = CAN2_TDL2R_DATA0_Values<CAN2::TDL2R, 0, 8, ReadWriteMode, CAN2TDL2RBase> ;
    using FieldValues = CAN2_TDL2R_DATA0_Values<CAN2::TDL2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL2RPack  = Register<0x400069A8, 32, ReadWriteMode, CAN2TDL2RBase, T...> ;

  struct CAN2TDH2RBase {} ;

  struct TDH2R : public RegisterBase<0x400069AC, 32, ReadWriteMode>
  {
    using DATA7 = CAN2_TDH2R_DATA7_Values<CAN2::TDH2R, 24, 8, ReadWriteMode, CAN2TDH2RBase> ;
    using DATA6 = CAN2_TDH2R_DATA6_Values<CAN2::TDH2R, 16, 8, ReadWriteMode, CAN2TDH2RBase> ;
    using DATA5 = CAN2_TDH2R_DATA5_Values<CAN2::TDH2R, 8, 8, ReadWriteMode, CAN2TDH2RBase> ;
    using DATA4 = CAN2_TDH2R_DATA4_Values<CAN2::TDH2R, 0, 8, ReadWriteMode, CAN2TDH2RBase> ;
    using FieldValues = CAN2_TDH2R_DATA4_Values<CAN2::TDH2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH2RPack  = Register<0x400069AC, 32, ReadWriteMode, CAN2TDH2RBase, T...> ;

  struct CAN2RI0RBase {} ;

  struct RI0R : public RegisterBase<0x400069B0, 32, ReadMode>
  {
    using STID = CAN2_RI0R_STID_Values<CAN2::RI0R, 21, 11, ReadMode, CAN2RI0RBase> ;
    using EXID = CAN2_RI0R_EXID_Values<CAN2::RI0R, 3, 18, ReadMode, CAN2RI0RBase> ;
    using IDE = CAN2_RI0R_IDE_Values<CAN2::RI0R, 2, 1, ReadMode, CAN2RI0RBase> ;
    using RTR = CAN2_RI0R_RTR_Values<CAN2::RI0R, 1, 1, ReadMode, CAN2RI0RBase> ;
    using FieldValues = CAN2_RI0R_RTR_Values<CAN2::RI0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RI0RPack  = Register<0x400069B0, 32, ReadMode, CAN2RI0RBase, T...> ;

  struct CAN2RDT0RBase {} ;

  struct RDT0R : public RegisterBase<0x400069B4, 32, ReadMode>
  {
    using TIME = CAN2_RDT0R_TIME_Values<CAN2::RDT0R, 16, 16, ReadMode, CAN2RDT0RBase> ;
    using FMI = CAN2_RDT0R_FMI_Values<CAN2::RDT0R, 8, 8, ReadMode, CAN2RDT0RBase> ;
    using DLC = CAN2_RDT0R_DLC_Values<CAN2::RDT0R, 0, 4, ReadMode, CAN2RDT0RBase> ;
    using FieldValues = CAN2_RDT0R_DLC_Values<CAN2::RDT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDT0RPack  = Register<0x400069B4, 32, ReadMode, CAN2RDT0RBase, T...> ;

  struct CAN2RDL0RBase {} ;

  struct RDL0R : public RegisterBase<0x400069B8, 32, ReadMode>
  {
    using DATA3 = CAN2_RDL0R_DATA3_Values<CAN2::RDL0R, 24, 8, ReadMode, CAN2RDL0RBase> ;
    using DATA2 = CAN2_RDL0R_DATA2_Values<CAN2::RDL0R, 16, 8, ReadMode, CAN2RDL0RBase> ;
    using DATA1 = CAN2_RDL0R_DATA1_Values<CAN2::RDL0R, 8, 8, ReadMode, CAN2RDL0RBase> ;
    using DATA0 = CAN2_RDL0R_DATA0_Values<CAN2::RDL0R, 0, 8, ReadMode, CAN2RDL0RBase> ;
    using FieldValues = CAN2_RDL0R_DATA0_Values<CAN2::RDL0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDL0RPack  = Register<0x400069B8, 32, ReadMode, CAN2RDL0RBase, T...> ;

  struct CAN2RDH0RBase {} ;

  struct RDH0R : public RegisterBase<0x400069BC, 32, ReadMode>
  {
    using DATA7 = CAN2_RDH0R_DATA7_Values<CAN2::RDH0R, 24, 8, ReadMode, CAN2RDH0RBase> ;
    using DATA6 = CAN2_RDH0R_DATA6_Values<CAN2::RDH0R, 16, 8, ReadMode, CAN2RDH0RBase> ;
    using DATA5 = CAN2_RDH0R_DATA5_Values<CAN2::RDH0R, 8, 8, ReadMode, CAN2RDH0RBase> ;
    using DATA4 = CAN2_RDH0R_DATA4_Values<CAN2::RDH0R, 0, 8, ReadMode, CAN2RDH0RBase> ;
    using FieldValues = CAN2_RDH0R_DATA4_Values<CAN2::RDH0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDH0RPack  = Register<0x400069BC, 32, ReadMode, CAN2RDH0RBase, T...> ;

  struct CAN2RI1RBase {} ;

  struct RI1R : public RegisterBase<0x400069C0, 32, ReadMode>
  {
    using STID = CAN2_RI1R_STID_Values<CAN2::RI1R, 21, 11, ReadMode, CAN2RI1RBase> ;
    using EXID = CAN2_RI1R_EXID_Values<CAN2::RI1R, 3, 18, ReadMode, CAN2RI1RBase> ;
    using IDE = CAN2_RI1R_IDE_Values<CAN2::RI1R, 2, 1, ReadMode, CAN2RI1RBase> ;
    using RTR = CAN2_RI1R_RTR_Values<CAN2::RI1R, 1, 1, ReadMode, CAN2RI1RBase> ;
    using FieldValues = CAN2_RI1R_RTR_Values<CAN2::RI1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RI1RPack  = Register<0x400069C0, 32, ReadMode, CAN2RI1RBase, T...> ;

  struct CAN2RDT1RBase {} ;

  struct RDT1R : public RegisterBase<0x400069C4, 32, ReadMode>
  {
    using TIME = CAN2_RDT1R_TIME_Values<CAN2::RDT1R, 16, 16, ReadMode, CAN2RDT1RBase> ;
    using FMI = CAN2_RDT1R_FMI_Values<CAN2::RDT1R, 8, 8, ReadMode, CAN2RDT1RBase> ;
    using DLC = CAN2_RDT1R_DLC_Values<CAN2::RDT1R, 0, 4, ReadMode, CAN2RDT1RBase> ;
    using FieldValues = CAN2_RDT1R_DLC_Values<CAN2::RDT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDT1RPack  = Register<0x400069C4, 32, ReadMode, CAN2RDT1RBase, T...> ;

  struct CAN2RDL1RBase {} ;

  struct RDL1R : public RegisterBase<0x400069C8, 32, ReadMode>
  {
    using DATA3 = CAN2_RDL1R_DATA3_Values<CAN2::RDL1R, 24, 8, ReadMode, CAN2RDL1RBase> ;
    using DATA2 = CAN2_RDL1R_DATA2_Values<CAN2::RDL1R, 16, 8, ReadMode, CAN2RDL1RBase> ;
    using DATA1 = CAN2_RDL1R_DATA1_Values<CAN2::RDL1R, 8, 8, ReadMode, CAN2RDL1RBase> ;
    using DATA0 = CAN2_RDL1R_DATA0_Values<CAN2::RDL1R, 0, 8, ReadMode, CAN2RDL1RBase> ;
    using FieldValues = CAN2_RDL1R_DATA0_Values<CAN2::RDL1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDL1RPack  = Register<0x400069C8, 32, ReadMode, CAN2RDL1RBase, T...> ;

  struct CAN2RDH1RBase {} ;

  struct RDH1R : public RegisterBase<0x400069CC, 32, ReadMode>
  {
    using DATA7 = CAN2_RDH1R_DATA7_Values<CAN2::RDH1R, 24, 8, ReadMode, CAN2RDH1RBase> ;
    using DATA6 = CAN2_RDH1R_DATA6_Values<CAN2::RDH1R, 16, 8, ReadMode, CAN2RDH1RBase> ;
    using DATA5 = CAN2_RDH1R_DATA5_Values<CAN2::RDH1R, 8, 8, ReadMode, CAN2RDH1RBase> ;
    using DATA4 = CAN2_RDH1R_DATA4_Values<CAN2::RDH1R, 0, 8, ReadMode, CAN2RDH1RBase> ;
    using FieldValues = CAN2_RDH1R_DATA4_Values<CAN2::RDH1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDH1RPack  = Register<0x400069CC, 32, ReadMode, CAN2RDH1RBase, T...> ;

  struct CAN2FMRBase {} ;

  struct FMR : public RegisterBase<0x40006A00, 32, ReadWriteMode>
  {
    using CAN2SB = CAN2_FMR_CAN2SB_Values<CAN2::FMR, 8, 6, ReadWriteMode, CAN2FMRBase> ;
    using FINIT = CAN2_FMR_FINIT_Values<CAN2::FMR, 0, 1, ReadWriteMode, CAN2FMRBase> ;
    using FieldValues = CAN2_FMR_FINIT_Values<CAN2::FMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FMRPack  = Register<0x40006A00, 32, ReadWriteMode, CAN2FMRBase, T...> ;

  struct CAN2FM1RBase {} ;

  struct FM1R : public RegisterBase<0x40006A04, 32, ReadWriteMode>
  {
    using FBM0 = CAN2_FM1R_FBM0_Values<CAN2::FM1R, 0, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM1 = CAN2_FM1R_FBM1_Values<CAN2::FM1R, 1, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM2 = CAN2_FM1R_FBM2_Values<CAN2::FM1R, 2, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM3 = CAN2_FM1R_FBM3_Values<CAN2::FM1R, 3, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM4 = CAN2_FM1R_FBM4_Values<CAN2::FM1R, 4, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM5 = CAN2_FM1R_FBM5_Values<CAN2::FM1R, 5, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM6 = CAN2_FM1R_FBM6_Values<CAN2::FM1R, 6, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM7 = CAN2_FM1R_FBM7_Values<CAN2::FM1R, 7, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM8 = CAN2_FM1R_FBM8_Values<CAN2::FM1R, 8, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM9 = CAN2_FM1R_FBM9_Values<CAN2::FM1R, 9, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM10 = CAN2_FM1R_FBM10_Values<CAN2::FM1R, 10, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM11 = CAN2_FM1R_FBM11_Values<CAN2::FM1R, 11, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM12 = CAN2_FM1R_FBM12_Values<CAN2::FM1R, 12, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM13 = CAN2_FM1R_FBM13_Values<CAN2::FM1R, 13, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM14 = CAN2_FM1R_FBM14_Values<CAN2::FM1R, 14, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM15 = CAN2_FM1R_FBM15_Values<CAN2::FM1R, 15, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM16 = CAN2_FM1R_FBM16_Values<CAN2::FM1R, 16, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM17 = CAN2_FM1R_FBM17_Values<CAN2::FM1R, 17, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM18 = CAN2_FM1R_FBM18_Values<CAN2::FM1R, 18, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM19 = CAN2_FM1R_FBM19_Values<CAN2::FM1R, 19, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM20 = CAN2_FM1R_FBM20_Values<CAN2::FM1R, 20, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM21 = CAN2_FM1R_FBM21_Values<CAN2::FM1R, 21, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM22 = CAN2_FM1R_FBM22_Values<CAN2::FM1R, 22, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM23 = CAN2_FM1R_FBM23_Values<CAN2::FM1R, 23, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM24 = CAN2_FM1R_FBM24_Values<CAN2::FM1R, 24, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM25 = CAN2_FM1R_FBM25_Values<CAN2::FM1R, 25, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM26 = CAN2_FM1R_FBM26_Values<CAN2::FM1R, 26, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FBM27 = CAN2_FM1R_FBM27_Values<CAN2::FM1R, 27, 1, ReadWriteMode, CAN2FM1RBase> ;
    using FieldValues = CAN2_FM1R_FBM27_Values<CAN2::FM1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FM1RPack  = Register<0x40006A04, 32, ReadWriteMode, CAN2FM1RBase, T...> ;

  struct CAN2FS1RBase {} ;

  struct FS1R : public RegisterBase<0x40006A0C, 32, ReadWriteMode>
  {
    using FSC0 = CAN2_FS1R_FSC0_Values<CAN2::FS1R, 0, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC1 = CAN2_FS1R_FSC1_Values<CAN2::FS1R, 1, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC2 = CAN2_FS1R_FSC2_Values<CAN2::FS1R, 2, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC3 = CAN2_FS1R_FSC3_Values<CAN2::FS1R, 3, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC4 = CAN2_FS1R_FSC4_Values<CAN2::FS1R, 4, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC5 = CAN2_FS1R_FSC5_Values<CAN2::FS1R, 5, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC6 = CAN2_FS1R_FSC6_Values<CAN2::FS1R, 6, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC7 = CAN2_FS1R_FSC7_Values<CAN2::FS1R, 7, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC8 = CAN2_FS1R_FSC8_Values<CAN2::FS1R, 8, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC9 = CAN2_FS1R_FSC9_Values<CAN2::FS1R, 9, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC10 = CAN2_FS1R_FSC10_Values<CAN2::FS1R, 10, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC11 = CAN2_FS1R_FSC11_Values<CAN2::FS1R, 11, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC12 = CAN2_FS1R_FSC12_Values<CAN2::FS1R, 12, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC13 = CAN2_FS1R_FSC13_Values<CAN2::FS1R, 13, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC14 = CAN2_FS1R_FSC14_Values<CAN2::FS1R, 14, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC15 = CAN2_FS1R_FSC15_Values<CAN2::FS1R, 15, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC16 = CAN2_FS1R_FSC16_Values<CAN2::FS1R, 16, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC17 = CAN2_FS1R_FSC17_Values<CAN2::FS1R, 17, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC18 = CAN2_FS1R_FSC18_Values<CAN2::FS1R, 18, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC19 = CAN2_FS1R_FSC19_Values<CAN2::FS1R, 19, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC20 = CAN2_FS1R_FSC20_Values<CAN2::FS1R, 20, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC21 = CAN2_FS1R_FSC21_Values<CAN2::FS1R, 21, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC22 = CAN2_FS1R_FSC22_Values<CAN2::FS1R, 22, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC23 = CAN2_FS1R_FSC23_Values<CAN2::FS1R, 23, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC24 = CAN2_FS1R_FSC24_Values<CAN2::FS1R, 24, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC25 = CAN2_FS1R_FSC25_Values<CAN2::FS1R, 25, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC26 = CAN2_FS1R_FSC26_Values<CAN2::FS1R, 26, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FSC27 = CAN2_FS1R_FSC27_Values<CAN2::FS1R, 27, 1, ReadWriteMode, CAN2FS1RBase> ;
    using FieldValues = CAN2_FS1R_FSC27_Values<CAN2::FS1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS1RPack  = Register<0x40006A0C, 32, ReadWriteMode, CAN2FS1RBase, T...> ;

  struct CAN2FFA1RBase {} ;

  struct FFA1R : public RegisterBase<0x40006A14, 32, ReadWriteMode>
  {
    using FFA0 = CAN2_FFA1R_FFA0_Values<CAN2::FFA1R, 0, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA1 = CAN2_FFA1R_FFA1_Values<CAN2::FFA1R, 1, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA2 = CAN2_FFA1R_FFA2_Values<CAN2::FFA1R, 2, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA3 = CAN2_FFA1R_FFA3_Values<CAN2::FFA1R, 3, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA4 = CAN2_FFA1R_FFA4_Values<CAN2::FFA1R, 4, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA5 = CAN2_FFA1R_FFA5_Values<CAN2::FFA1R, 5, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA6 = CAN2_FFA1R_FFA6_Values<CAN2::FFA1R, 6, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA7 = CAN2_FFA1R_FFA7_Values<CAN2::FFA1R, 7, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA8 = CAN2_FFA1R_FFA8_Values<CAN2::FFA1R, 8, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA9 = CAN2_FFA1R_FFA9_Values<CAN2::FFA1R, 9, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA10 = CAN2_FFA1R_FFA10_Values<CAN2::FFA1R, 10, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA11 = CAN2_FFA1R_FFA11_Values<CAN2::FFA1R, 11, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA12 = CAN2_FFA1R_FFA12_Values<CAN2::FFA1R, 12, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA13 = CAN2_FFA1R_FFA13_Values<CAN2::FFA1R, 13, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA14 = CAN2_FFA1R_FFA14_Values<CAN2::FFA1R, 14, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA15 = CAN2_FFA1R_FFA15_Values<CAN2::FFA1R, 15, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA16 = CAN2_FFA1R_FFA16_Values<CAN2::FFA1R, 16, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA17 = CAN2_FFA1R_FFA17_Values<CAN2::FFA1R, 17, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA18 = CAN2_FFA1R_FFA18_Values<CAN2::FFA1R, 18, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA19 = CAN2_FFA1R_FFA19_Values<CAN2::FFA1R, 19, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA20 = CAN2_FFA1R_FFA20_Values<CAN2::FFA1R, 20, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA21 = CAN2_FFA1R_FFA21_Values<CAN2::FFA1R, 21, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA22 = CAN2_FFA1R_FFA22_Values<CAN2::FFA1R, 22, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA23 = CAN2_FFA1R_FFA23_Values<CAN2::FFA1R, 23, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA24 = CAN2_FFA1R_FFA24_Values<CAN2::FFA1R, 24, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA25 = CAN2_FFA1R_FFA25_Values<CAN2::FFA1R, 25, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA26 = CAN2_FFA1R_FFA26_Values<CAN2::FFA1R, 26, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FFA27 = CAN2_FFA1R_FFA27_Values<CAN2::FFA1R, 27, 1, ReadWriteMode, CAN2FFA1RBase> ;
    using FieldValues = CAN2_FFA1R_FFA27_Values<CAN2::FFA1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FFA1RPack  = Register<0x40006A14, 32, ReadWriteMode, CAN2FFA1RBase, T...> ;

  struct CAN2FA1RBase {} ;

  struct FA1R : public RegisterBase<0x40006A1C, 32, ReadWriteMode>
  {
    using FACT0 = CAN2_FA1R_FACT0_Values<CAN2::FA1R, 0, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT1 = CAN2_FA1R_FACT1_Values<CAN2::FA1R, 1, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT2 = CAN2_FA1R_FACT2_Values<CAN2::FA1R, 2, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT3 = CAN2_FA1R_FACT3_Values<CAN2::FA1R, 3, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT4 = CAN2_FA1R_FACT4_Values<CAN2::FA1R, 4, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT5 = CAN2_FA1R_FACT5_Values<CAN2::FA1R, 5, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT6 = CAN2_FA1R_FACT6_Values<CAN2::FA1R, 6, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT7 = CAN2_FA1R_FACT7_Values<CAN2::FA1R, 7, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT8 = CAN2_FA1R_FACT8_Values<CAN2::FA1R, 8, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT9 = CAN2_FA1R_FACT9_Values<CAN2::FA1R, 9, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT10 = CAN2_FA1R_FACT10_Values<CAN2::FA1R, 10, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT11 = CAN2_FA1R_FACT11_Values<CAN2::FA1R, 11, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT12 = CAN2_FA1R_FACT12_Values<CAN2::FA1R, 12, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT13 = CAN2_FA1R_FACT13_Values<CAN2::FA1R, 13, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT14 = CAN2_FA1R_FACT14_Values<CAN2::FA1R, 14, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT15 = CAN2_FA1R_FACT15_Values<CAN2::FA1R, 15, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT16 = CAN2_FA1R_FACT16_Values<CAN2::FA1R, 16, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT17 = CAN2_FA1R_FACT17_Values<CAN2::FA1R, 17, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT18 = CAN2_FA1R_FACT18_Values<CAN2::FA1R, 18, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT19 = CAN2_FA1R_FACT19_Values<CAN2::FA1R, 19, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT20 = CAN2_FA1R_FACT20_Values<CAN2::FA1R, 20, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT21 = CAN2_FA1R_FACT21_Values<CAN2::FA1R, 21, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT22 = CAN2_FA1R_FACT22_Values<CAN2::FA1R, 22, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT23 = CAN2_FA1R_FACT23_Values<CAN2::FA1R, 23, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT24 = CAN2_FA1R_FACT24_Values<CAN2::FA1R, 24, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT25 = CAN2_FA1R_FACT25_Values<CAN2::FA1R, 25, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT26 = CAN2_FA1R_FACT26_Values<CAN2::FA1R, 26, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FACT27 = CAN2_FA1R_FACT27_Values<CAN2::FA1R, 27, 1, ReadWriteMode, CAN2FA1RBase> ;
    using FieldValues = CAN2_FA1R_FACT27_Values<CAN2::FA1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FA1RPack  = Register<0x40006A1C, 32, ReadWriteMode, CAN2FA1RBase, T...> ;

  struct CAN2F0R1Base {} ;

  struct F0R1 : public RegisterBase<0x40006A40, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F0R1_FB0_Values<CAN2::F0R1, 0, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB1 = CAN2_F0R1_FB1_Values<CAN2::F0R1, 1, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB2 = CAN2_F0R1_FB2_Values<CAN2::F0R1, 2, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB3 = CAN2_F0R1_FB3_Values<CAN2::F0R1, 3, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB4 = CAN2_F0R1_FB4_Values<CAN2::F0R1, 4, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB5 = CAN2_F0R1_FB5_Values<CAN2::F0R1, 5, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB6 = CAN2_F0R1_FB6_Values<CAN2::F0R1, 6, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB7 = CAN2_F0R1_FB7_Values<CAN2::F0R1, 7, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB8 = CAN2_F0R1_FB8_Values<CAN2::F0R1, 8, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB9 = CAN2_F0R1_FB9_Values<CAN2::F0R1, 9, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB10 = CAN2_F0R1_FB10_Values<CAN2::F0R1, 10, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB11 = CAN2_F0R1_FB11_Values<CAN2::F0R1, 11, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB12 = CAN2_F0R1_FB12_Values<CAN2::F0R1, 12, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB13 = CAN2_F0R1_FB13_Values<CAN2::F0R1, 13, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB14 = CAN2_F0R1_FB14_Values<CAN2::F0R1, 14, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB15 = CAN2_F0R1_FB15_Values<CAN2::F0R1, 15, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB16 = CAN2_F0R1_FB16_Values<CAN2::F0R1, 16, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB17 = CAN2_F0R1_FB17_Values<CAN2::F0R1, 17, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB18 = CAN2_F0R1_FB18_Values<CAN2::F0R1, 18, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB19 = CAN2_F0R1_FB19_Values<CAN2::F0R1, 19, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB20 = CAN2_F0R1_FB20_Values<CAN2::F0R1, 20, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB21 = CAN2_F0R1_FB21_Values<CAN2::F0R1, 21, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB22 = CAN2_F0R1_FB22_Values<CAN2::F0R1, 22, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB23 = CAN2_F0R1_FB23_Values<CAN2::F0R1, 23, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB24 = CAN2_F0R1_FB24_Values<CAN2::F0R1, 24, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB25 = CAN2_F0R1_FB25_Values<CAN2::F0R1, 25, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB26 = CAN2_F0R1_FB26_Values<CAN2::F0R1, 26, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB27 = CAN2_F0R1_FB27_Values<CAN2::F0R1, 27, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB28 = CAN2_F0R1_FB28_Values<CAN2::F0R1, 28, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB29 = CAN2_F0R1_FB29_Values<CAN2::F0R1, 29, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB30 = CAN2_F0R1_FB30_Values<CAN2::F0R1, 30, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FB31 = CAN2_F0R1_FB31_Values<CAN2::F0R1, 31, 1, ReadWriteMode, CAN2F0R1Base> ;
    using FieldValues = CAN2_F0R1_FB31_Values<CAN2::F0R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0R1Pack  = Register<0x40006A40, 32, ReadWriteMode, CAN2F0R1Base, T...> ;

  struct CAN2F0R2Base {} ;

  struct F0R2 : public RegisterBase<0x40006A44, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F0R2_FB0_Values<CAN2::F0R2, 0, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB1 = CAN2_F0R2_FB1_Values<CAN2::F0R2, 1, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB2 = CAN2_F0R2_FB2_Values<CAN2::F0R2, 2, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB3 = CAN2_F0R2_FB3_Values<CAN2::F0R2, 3, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB4 = CAN2_F0R2_FB4_Values<CAN2::F0R2, 4, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB5 = CAN2_F0R2_FB5_Values<CAN2::F0R2, 5, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB6 = CAN2_F0R2_FB6_Values<CAN2::F0R2, 6, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB7 = CAN2_F0R2_FB7_Values<CAN2::F0R2, 7, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB8 = CAN2_F0R2_FB8_Values<CAN2::F0R2, 8, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB9 = CAN2_F0R2_FB9_Values<CAN2::F0R2, 9, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB10 = CAN2_F0R2_FB10_Values<CAN2::F0R2, 10, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB11 = CAN2_F0R2_FB11_Values<CAN2::F0R2, 11, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB12 = CAN2_F0R2_FB12_Values<CAN2::F0R2, 12, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB13 = CAN2_F0R2_FB13_Values<CAN2::F0R2, 13, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB14 = CAN2_F0R2_FB14_Values<CAN2::F0R2, 14, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB15 = CAN2_F0R2_FB15_Values<CAN2::F0R2, 15, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB16 = CAN2_F0R2_FB16_Values<CAN2::F0R2, 16, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB17 = CAN2_F0R2_FB17_Values<CAN2::F0R2, 17, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB18 = CAN2_F0R2_FB18_Values<CAN2::F0R2, 18, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB19 = CAN2_F0R2_FB19_Values<CAN2::F0R2, 19, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB20 = CAN2_F0R2_FB20_Values<CAN2::F0R2, 20, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB21 = CAN2_F0R2_FB21_Values<CAN2::F0R2, 21, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB22 = CAN2_F0R2_FB22_Values<CAN2::F0R2, 22, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB23 = CAN2_F0R2_FB23_Values<CAN2::F0R2, 23, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB24 = CAN2_F0R2_FB24_Values<CAN2::F0R2, 24, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB25 = CAN2_F0R2_FB25_Values<CAN2::F0R2, 25, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB26 = CAN2_F0R2_FB26_Values<CAN2::F0R2, 26, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB27 = CAN2_F0R2_FB27_Values<CAN2::F0R2, 27, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB28 = CAN2_F0R2_FB28_Values<CAN2::F0R2, 28, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB29 = CAN2_F0R2_FB29_Values<CAN2::F0R2, 29, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB30 = CAN2_F0R2_FB30_Values<CAN2::F0R2, 30, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FB31 = CAN2_F0R2_FB31_Values<CAN2::F0R2, 31, 1, ReadWriteMode, CAN2F0R2Base> ;
    using FieldValues = CAN2_F0R2_FB31_Values<CAN2::F0R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0R2Pack  = Register<0x40006A44, 32, ReadWriteMode, CAN2F0R2Base, T...> ;

  struct CAN2F1R1Base {} ;

  struct F1R1 : public RegisterBase<0x40006A48, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F1R1_FB0_Values<CAN2::F1R1, 0, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB1 = CAN2_F1R1_FB1_Values<CAN2::F1R1, 1, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB2 = CAN2_F1R1_FB2_Values<CAN2::F1R1, 2, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB3 = CAN2_F1R1_FB3_Values<CAN2::F1R1, 3, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB4 = CAN2_F1R1_FB4_Values<CAN2::F1R1, 4, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB5 = CAN2_F1R1_FB5_Values<CAN2::F1R1, 5, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB6 = CAN2_F1R1_FB6_Values<CAN2::F1R1, 6, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB7 = CAN2_F1R1_FB7_Values<CAN2::F1R1, 7, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB8 = CAN2_F1R1_FB8_Values<CAN2::F1R1, 8, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB9 = CAN2_F1R1_FB9_Values<CAN2::F1R1, 9, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB10 = CAN2_F1R1_FB10_Values<CAN2::F1R1, 10, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB11 = CAN2_F1R1_FB11_Values<CAN2::F1R1, 11, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB12 = CAN2_F1R1_FB12_Values<CAN2::F1R1, 12, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB13 = CAN2_F1R1_FB13_Values<CAN2::F1R1, 13, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB14 = CAN2_F1R1_FB14_Values<CAN2::F1R1, 14, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB15 = CAN2_F1R1_FB15_Values<CAN2::F1R1, 15, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB16 = CAN2_F1R1_FB16_Values<CAN2::F1R1, 16, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB17 = CAN2_F1R1_FB17_Values<CAN2::F1R1, 17, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB18 = CAN2_F1R1_FB18_Values<CAN2::F1R1, 18, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB19 = CAN2_F1R1_FB19_Values<CAN2::F1R1, 19, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB20 = CAN2_F1R1_FB20_Values<CAN2::F1R1, 20, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB21 = CAN2_F1R1_FB21_Values<CAN2::F1R1, 21, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB22 = CAN2_F1R1_FB22_Values<CAN2::F1R1, 22, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB23 = CAN2_F1R1_FB23_Values<CAN2::F1R1, 23, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB24 = CAN2_F1R1_FB24_Values<CAN2::F1R1, 24, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB25 = CAN2_F1R1_FB25_Values<CAN2::F1R1, 25, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB26 = CAN2_F1R1_FB26_Values<CAN2::F1R1, 26, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB27 = CAN2_F1R1_FB27_Values<CAN2::F1R1, 27, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB28 = CAN2_F1R1_FB28_Values<CAN2::F1R1, 28, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB29 = CAN2_F1R1_FB29_Values<CAN2::F1R1, 29, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB30 = CAN2_F1R1_FB30_Values<CAN2::F1R1, 30, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FB31 = CAN2_F1R1_FB31_Values<CAN2::F1R1, 31, 1, ReadWriteMode, CAN2F1R1Base> ;
    using FieldValues = CAN2_F1R1_FB31_Values<CAN2::F1R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1R1Pack  = Register<0x40006A48, 32, ReadWriteMode, CAN2F1R1Base, T...> ;

  struct CAN2F1R2Base {} ;

  struct F1R2 : public RegisterBase<0x40006A4C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F1R2_FB0_Values<CAN2::F1R2, 0, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB1 = CAN2_F1R2_FB1_Values<CAN2::F1R2, 1, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB2 = CAN2_F1R2_FB2_Values<CAN2::F1R2, 2, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB3 = CAN2_F1R2_FB3_Values<CAN2::F1R2, 3, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB4 = CAN2_F1R2_FB4_Values<CAN2::F1R2, 4, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB5 = CAN2_F1R2_FB5_Values<CAN2::F1R2, 5, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB6 = CAN2_F1R2_FB6_Values<CAN2::F1R2, 6, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB7 = CAN2_F1R2_FB7_Values<CAN2::F1R2, 7, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB8 = CAN2_F1R2_FB8_Values<CAN2::F1R2, 8, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB9 = CAN2_F1R2_FB9_Values<CAN2::F1R2, 9, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB10 = CAN2_F1R2_FB10_Values<CAN2::F1R2, 10, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB11 = CAN2_F1R2_FB11_Values<CAN2::F1R2, 11, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB12 = CAN2_F1R2_FB12_Values<CAN2::F1R2, 12, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB13 = CAN2_F1R2_FB13_Values<CAN2::F1R2, 13, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB14 = CAN2_F1R2_FB14_Values<CAN2::F1R2, 14, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB15 = CAN2_F1R2_FB15_Values<CAN2::F1R2, 15, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB16 = CAN2_F1R2_FB16_Values<CAN2::F1R2, 16, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB17 = CAN2_F1R2_FB17_Values<CAN2::F1R2, 17, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB18 = CAN2_F1R2_FB18_Values<CAN2::F1R2, 18, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB19 = CAN2_F1R2_FB19_Values<CAN2::F1R2, 19, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB20 = CAN2_F1R2_FB20_Values<CAN2::F1R2, 20, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB21 = CAN2_F1R2_FB21_Values<CAN2::F1R2, 21, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB22 = CAN2_F1R2_FB22_Values<CAN2::F1R2, 22, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB23 = CAN2_F1R2_FB23_Values<CAN2::F1R2, 23, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB24 = CAN2_F1R2_FB24_Values<CAN2::F1R2, 24, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB25 = CAN2_F1R2_FB25_Values<CAN2::F1R2, 25, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB26 = CAN2_F1R2_FB26_Values<CAN2::F1R2, 26, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB27 = CAN2_F1R2_FB27_Values<CAN2::F1R2, 27, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB28 = CAN2_F1R2_FB28_Values<CAN2::F1R2, 28, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB29 = CAN2_F1R2_FB29_Values<CAN2::F1R2, 29, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB30 = CAN2_F1R2_FB30_Values<CAN2::F1R2, 30, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FB31 = CAN2_F1R2_FB31_Values<CAN2::F1R2, 31, 1, ReadWriteMode, CAN2F1R2Base> ;
    using FieldValues = CAN2_F1R2_FB31_Values<CAN2::F1R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1R2Pack  = Register<0x40006A4C, 32, ReadWriteMode, CAN2F1R2Base, T...> ;

  struct CAN2F2R1Base {} ;

  struct F2R1 : public RegisterBase<0x40006A50, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F2R1_FB0_Values<CAN2::F2R1, 0, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB1 = CAN2_F2R1_FB1_Values<CAN2::F2R1, 1, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB2 = CAN2_F2R1_FB2_Values<CAN2::F2R1, 2, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB3 = CAN2_F2R1_FB3_Values<CAN2::F2R1, 3, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB4 = CAN2_F2R1_FB4_Values<CAN2::F2R1, 4, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB5 = CAN2_F2R1_FB5_Values<CAN2::F2R1, 5, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB6 = CAN2_F2R1_FB6_Values<CAN2::F2R1, 6, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB7 = CAN2_F2R1_FB7_Values<CAN2::F2R1, 7, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB8 = CAN2_F2R1_FB8_Values<CAN2::F2R1, 8, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB9 = CAN2_F2R1_FB9_Values<CAN2::F2R1, 9, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB10 = CAN2_F2R1_FB10_Values<CAN2::F2R1, 10, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB11 = CAN2_F2R1_FB11_Values<CAN2::F2R1, 11, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB12 = CAN2_F2R1_FB12_Values<CAN2::F2R1, 12, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB13 = CAN2_F2R1_FB13_Values<CAN2::F2R1, 13, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB14 = CAN2_F2R1_FB14_Values<CAN2::F2R1, 14, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB15 = CAN2_F2R1_FB15_Values<CAN2::F2R1, 15, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB16 = CAN2_F2R1_FB16_Values<CAN2::F2R1, 16, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB17 = CAN2_F2R1_FB17_Values<CAN2::F2R1, 17, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB18 = CAN2_F2R1_FB18_Values<CAN2::F2R1, 18, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB19 = CAN2_F2R1_FB19_Values<CAN2::F2R1, 19, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB20 = CAN2_F2R1_FB20_Values<CAN2::F2R1, 20, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB21 = CAN2_F2R1_FB21_Values<CAN2::F2R1, 21, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB22 = CAN2_F2R1_FB22_Values<CAN2::F2R1, 22, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB23 = CAN2_F2R1_FB23_Values<CAN2::F2R1, 23, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB24 = CAN2_F2R1_FB24_Values<CAN2::F2R1, 24, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB25 = CAN2_F2R1_FB25_Values<CAN2::F2R1, 25, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB26 = CAN2_F2R1_FB26_Values<CAN2::F2R1, 26, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB27 = CAN2_F2R1_FB27_Values<CAN2::F2R1, 27, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB28 = CAN2_F2R1_FB28_Values<CAN2::F2R1, 28, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB29 = CAN2_F2R1_FB29_Values<CAN2::F2R1, 29, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB30 = CAN2_F2R1_FB30_Values<CAN2::F2R1, 30, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FB31 = CAN2_F2R1_FB31_Values<CAN2::F2R1, 31, 1, ReadWriteMode, CAN2F2R1Base> ;
    using FieldValues = CAN2_F2R1_FB31_Values<CAN2::F2R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2R1Pack  = Register<0x40006A50, 32, ReadWriteMode, CAN2F2R1Base, T...> ;

  struct CAN2F2R2Base {} ;

  struct F2R2 : public RegisterBase<0x40006A54, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F2R2_FB0_Values<CAN2::F2R2, 0, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB1 = CAN2_F2R2_FB1_Values<CAN2::F2R2, 1, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB2 = CAN2_F2R2_FB2_Values<CAN2::F2R2, 2, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB3 = CAN2_F2R2_FB3_Values<CAN2::F2R2, 3, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB4 = CAN2_F2R2_FB4_Values<CAN2::F2R2, 4, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB5 = CAN2_F2R2_FB5_Values<CAN2::F2R2, 5, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB6 = CAN2_F2R2_FB6_Values<CAN2::F2R2, 6, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB7 = CAN2_F2R2_FB7_Values<CAN2::F2R2, 7, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB8 = CAN2_F2R2_FB8_Values<CAN2::F2R2, 8, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB9 = CAN2_F2R2_FB9_Values<CAN2::F2R2, 9, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB10 = CAN2_F2R2_FB10_Values<CAN2::F2R2, 10, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB11 = CAN2_F2R2_FB11_Values<CAN2::F2R2, 11, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB12 = CAN2_F2R2_FB12_Values<CAN2::F2R2, 12, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB13 = CAN2_F2R2_FB13_Values<CAN2::F2R2, 13, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB14 = CAN2_F2R2_FB14_Values<CAN2::F2R2, 14, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB15 = CAN2_F2R2_FB15_Values<CAN2::F2R2, 15, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB16 = CAN2_F2R2_FB16_Values<CAN2::F2R2, 16, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB17 = CAN2_F2R2_FB17_Values<CAN2::F2R2, 17, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB18 = CAN2_F2R2_FB18_Values<CAN2::F2R2, 18, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB19 = CAN2_F2R2_FB19_Values<CAN2::F2R2, 19, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB20 = CAN2_F2R2_FB20_Values<CAN2::F2R2, 20, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB21 = CAN2_F2R2_FB21_Values<CAN2::F2R2, 21, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB22 = CAN2_F2R2_FB22_Values<CAN2::F2R2, 22, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB23 = CAN2_F2R2_FB23_Values<CAN2::F2R2, 23, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB24 = CAN2_F2R2_FB24_Values<CAN2::F2R2, 24, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB25 = CAN2_F2R2_FB25_Values<CAN2::F2R2, 25, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB26 = CAN2_F2R2_FB26_Values<CAN2::F2R2, 26, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB27 = CAN2_F2R2_FB27_Values<CAN2::F2R2, 27, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB28 = CAN2_F2R2_FB28_Values<CAN2::F2R2, 28, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB29 = CAN2_F2R2_FB29_Values<CAN2::F2R2, 29, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB30 = CAN2_F2R2_FB30_Values<CAN2::F2R2, 30, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FB31 = CAN2_F2R2_FB31_Values<CAN2::F2R2, 31, 1, ReadWriteMode, CAN2F2R2Base> ;
    using FieldValues = CAN2_F2R2_FB31_Values<CAN2::F2R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2R2Pack  = Register<0x40006A54, 32, ReadWriteMode, CAN2F2R2Base, T...> ;

  struct CAN2F3R1Base {} ;

  struct F3R1 : public RegisterBase<0x40006A58, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F3R1_FB0_Values<CAN2::F3R1, 0, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB1 = CAN2_F3R1_FB1_Values<CAN2::F3R1, 1, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB2 = CAN2_F3R1_FB2_Values<CAN2::F3R1, 2, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB3 = CAN2_F3R1_FB3_Values<CAN2::F3R1, 3, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB4 = CAN2_F3R1_FB4_Values<CAN2::F3R1, 4, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB5 = CAN2_F3R1_FB5_Values<CAN2::F3R1, 5, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB6 = CAN2_F3R1_FB6_Values<CAN2::F3R1, 6, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB7 = CAN2_F3R1_FB7_Values<CAN2::F3R1, 7, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB8 = CAN2_F3R1_FB8_Values<CAN2::F3R1, 8, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB9 = CAN2_F3R1_FB9_Values<CAN2::F3R1, 9, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB10 = CAN2_F3R1_FB10_Values<CAN2::F3R1, 10, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB11 = CAN2_F3R1_FB11_Values<CAN2::F3R1, 11, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB12 = CAN2_F3R1_FB12_Values<CAN2::F3R1, 12, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB13 = CAN2_F3R1_FB13_Values<CAN2::F3R1, 13, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB14 = CAN2_F3R1_FB14_Values<CAN2::F3R1, 14, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB15 = CAN2_F3R1_FB15_Values<CAN2::F3R1, 15, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB16 = CAN2_F3R1_FB16_Values<CAN2::F3R1, 16, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB17 = CAN2_F3R1_FB17_Values<CAN2::F3R1, 17, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB18 = CAN2_F3R1_FB18_Values<CAN2::F3R1, 18, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB19 = CAN2_F3R1_FB19_Values<CAN2::F3R1, 19, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB20 = CAN2_F3R1_FB20_Values<CAN2::F3R1, 20, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB21 = CAN2_F3R1_FB21_Values<CAN2::F3R1, 21, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB22 = CAN2_F3R1_FB22_Values<CAN2::F3R1, 22, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB23 = CAN2_F3R1_FB23_Values<CAN2::F3R1, 23, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB24 = CAN2_F3R1_FB24_Values<CAN2::F3R1, 24, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB25 = CAN2_F3R1_FB25_Values<CAN2::F3R1, 25, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB26 = CAN2_F3R1_FB26_Values<CAN2::F3R1, 26, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB27 = CAN2_F3R1_FB27_Values<CAN2::F3R1, 27, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB28 = CAN2_F3R1_FB28_Values<CAN2::F3R1, 28, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB29 = CAN2_F3R1_FB29_Values<CAN2::F3R1, 29, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB30 = CAN2_F3R1_FB30_Values<CAN2::F3R1, 30, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FB31 = CAN2_F3R1_FB31_Values<CAN2::F3R1, 31, 1, ReadWriteMode, CAN2F3R1Base> ;
    using FieldValues = CAN2_F3R1_FB31_Values<CAN2::F3R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3R1Pack  = Register<0x40006A58, 32, ReadWriteMode, CAN2F3R1Base, T...> ;

  struct CAN2F3R2Base {} ;

  struct F3R2 : public RegisterBase<0x40006A5C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F3R2_FB0_Values<CAN2::F3R2, 0, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB1 = CAN2_F3R2_FB1_Values<CAN2::F3R2, 1, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB2 = CAN2_F3R2_FB2_Values<CAN2::F3R2, 2, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB3 = CAN2_F3R2_FB3_Values<CAN2::F3R2, 3, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB4 = CAN2_F3R2_FB4_Values<CAN2::F3R2, 4, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB5 = CAN2_F3R2_FB5_Values<CAN2::F3R2, 5, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB6 = CAN2_F3R2_FB6_Values<CAN2::F3R2, 6, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB7 = CAN2_F3R2_FB7_Values<CAN2::F3R2, 7, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB8 = CAN2_F3R2_FB8_Values<CAN2::F3R2, 8, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB9 = CAN2_F3R2_FB9_Values<CAN2::F3R2, 9, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB10 = CAN2_F3R2_FB10_Values<CAN2::F3R2, 10, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB11 = CAN2_F3R2_FB11_Values<CAN2::F3R2, 11, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB12 = CAN2_F3R2_FB12_Values<CAN2::F3R2, 12, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB13 = CAN2_F3R2_FB13_Values<CAN2::F3R2, 13, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB14 = CAN2_F3R2_FB14_Values<CAN2::F3R2, 14, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB15 = CAN2_F3R2_FB15_Values<CAN2::F3R2, 15, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB16 = CAN2_F3R2_FB16_Values<CAN2::F3R2, 16, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB17 = CAN2_F3R2_FB17_Values<CAN2::F3R2, 17, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB18 = CAN2_F3R2_FB18_Values<CAN2::F3R2, 18, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB19 = CAN2_F3R2_FB19_Values<CAN2::F3R2, 19, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB20 = CAN2_F3R2_FB20_Values<CAN2::F3R2, 20, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB21 = CAN2_F3R2_FB21_Values<CAN2::F3R2, 21, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB22 = CAN2_F3R2_FB22_Values<CAN2::F3R2, 22, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB23 = CAN2_F3R2_FB23_Values<CAN2::F3R2, 23, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB24 = CAN2_F3R2_FB24_Values<CAN2::F3R2, 24, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB25 = CAN2_F3R2_FB25_Values<CAN2::F3R2, 25, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB26 = CAN2_F3R2_FB26_Values<CAN2::F3R2, 26, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB27 = CAN2_F3R2_FB27_Values<CAN2::F3R2, 27, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB28 = CAN2_F3R2_FB28_Values<CAN2::F3R2, 28, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB29 = CAN2_F3R2_FB29_Values<CAN2::F3R2, 29, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB30 = CAN2_F3R2_FB30_Values<CAN2::F3R2, 30, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FB31 = CAN2_F3R2_FB31_Values<CAN2::F3R2, 31, 1, ReadWriteMode, CAN2F3R2Base> ;
    using FieldValues = CAN2_F3R2_FB31_Values<CAN2::F3R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3R2Pack  = Register<0x40006A5C, 32, ReadWriteMode, CAN2F3R2Base, T...> ;

  struct CAN2F4R1Base {} ;

  struct F4R1 : public RegisterBase<0x40006A60, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F4R1_FB0_Values<CAN2::F4R1, 0, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB1 = CAN2_F4R1_FB1_Values<CAN2::F4R1, 1, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB2 = CAN2_F4R1_FB2_Values<CAN2::F4R1, 2, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB3 = CAN2_F4R1_FB3_Values<CAN2::F4R1, 3, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB4 = CAN2_F4R1_FB4_Values<CAN2::F4R1, 4, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB5 = CAN2_F4R1_FB5_Values<CAN2::F4R1, 5, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB6 = CAN2_F4R1_FB6_Values<CAN2::F4R1, 6, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB7 = CAN2_F4R1_FB7_Values<CAN2::F4R1, 7, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB8 = CAN2_F4R1_FB8_Values<CAN2::F4R1, 8, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB9 = CAN2_F4R1_FB9_Values<CAN2::F4R1, 9, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB10 = CAN2_F4R1_FB10_Values<CAN2::F4R1, 10, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB11 = CAN2_F4R1_FB11_Values<CAN2::F4R1, 11, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB12 = CAN2_F4R1_FB12_Values<CAN2::F4R1, 12, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB13 = CAN2_F4R1_FB13_Values<CAN2::F4R1, 13, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB14 = CAN2_F4R1_FB14_Values<CAN2::F4R1, 14, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB15 = CAN2_F4R1_FB15_Values<CAN2::F4R1, 15, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB16 = CAN2_F4R1_FB16_Values<CAN2::F4R1, 16, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB17 = CAN2_F4R1_FB17_Values<CAN2::F4R1, 17, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB18 = CAN2_F4R1_FB18_Values<CAN2::F4R1, 18, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB19 = CAN2_F4R1_FB19_Values<CAN2::F4R1, 19, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB20 = CAN2_F4R1_FB20_Values<CAN2::F4R1, 20, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB21 = CAN2_F4R1_FB21_Values<CAN2::F4R1, 21, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB22 = CAN2_F4R1_FB22_Values<CAN2::F4R1, 22, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB23 = CAN2_F4R1_FB23_Values<CAN2::F4R1, 23, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB24 = CAN2_F4R1_FB24_Values<CAN2::F4R1, 24, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB25 = CAN2_F4R1_FB25_Values<CAN2::F4R1, 25, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB26 = CAN2_F4R1_FB26_Values<CAN2::F4R1, 26, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB27 = CAN2_F4R1_FB27_Values<CAN2::F4R1, 27, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB28 = CAN2_F4R1_FB28_Values<CAN2::F4R1, 28, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB29 = CAN2_F4R1_FB29_Values<CAN2::F4R1, 29, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB30 = CAN2_F4R1_FB30_Values<CAN2::F4R1, 30, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FB31 = CAN2_F4R1_FB31_Values<CAN2::F4R1, 31, 1, ReadWriteMode, CAN2F4R1Base> ;
    using FieldValues = CAN2_F4R1_FB31_Values<CAN2::F4R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4R1Pack  = Register<0x40006A60, 32, ReadWriteMode, CAN2F4R1Base, T...> ;

  struct CAN2F4R2Base {} ;

  struct F4R2 : public RegisterBase<0x40006A64, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F4R2_FB0_Values<CAN2::F4R2, 0, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB1 = CAN2_F4R2_FB1_Values<CAN2::F4R2, 1, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB2 = CAN2_F4R2_FB2_Values<CAN2::F4R2, 2, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB3 = CAN2_F4R2_FB3_Values<CAN2::F4R2, 3, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB4 = CAN2_F4R2_FB4_Values<CAN2::F4R2, 4, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB5 = CAN2_F4R2_FB5_Values<CAN2::F4R2, 5, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB6 = CAN2_F4R2_FB6_Values<CAN2::F4R2, 6, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB7 = CAN2_F4R2_FB7_Values<CAN2::F4R2, 7, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB8 = CAN2_F4R2_FB8_Values<CAN2::F4R2, 8, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB9 = CAN2_F4R2_FB9_Values<CAN2::F4R2, 9, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB10 = CAN2_F4R2_FB10_Values<CAN2::F4R2, 10, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB11 = CAN2_F4R2_FB11_Values<CAN2::F4R2, 11, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB12 = CAN2_F4R2_FB12_Values<CAN2::F4R2, 12, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB13 = CAN2_F4R2_FB13_Values<CAN2::F4R2, 13, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB14 = CAN2_F4R2_FB14_Values<CAN2::F4R2, 14, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB15 = CAN2_F4R2_FB15_Values<CAN2::F4R2, 15, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB16 = CAN2_F4R2_FB16_Values<CAN2::F4R2, 16, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB17 = CAN2_F4R2_FB17_Values<CAN2::F4R2, 17, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB18 = CAN2_F4R2_FB18_Values<CAN2::F4R2, 18, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB19 = CAN2_F4R2_FB19_Values<CAN2::F4R2, 19, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB20 = CAN2_F4R2_FB20_Values<CAN2::F4R2, 20, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB21 = CAN2_F4R2_FB21_Values<CAN2::F4R2, 21, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB22 = CAN2_F4R2_FB22_Values<CAN2::F4R2, 22, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB23 = CAN2_F4R2_FB23_Values<CAN2::F4R2, 23, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB24 = CAN2_F4R2_FB24_Values<CAN2::F4R2, 24, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB25 = CAN2_F4R2_FB25_Values<CAN2::F4R2, 25, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB26 = CAN2_F4R2_FB26_Values<CAN2::F4R2, 26, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB27 = CAN2_F4R2_FB27_Values<CAN2::F4R2, 27, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB28 = CAN2_F4R2_FB28_Values<CAN2::F4R2, 28, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB29 = CAN2_F4R2_FB29_Values<CAN2::F4R2, 29, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB30 = CAN2_F4R2_FB30_Values<CAN2::F4R2, 30, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FB31 = CAN2_F4R2_FB31_Values<CAN2::F4R2, 31, 1, ReadWriteMode, CAN2F4R2Base> ;
    using FieldValues = CAN2_F4R2_FB31_Values<CAN2::F4R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4R2Pack  = Register<0x40006A64, 32, ReadWriteMode, CAN2F4R2Base, T...> ;

  struct CAN2F5R1Base {} ;

  struct F5R1 : public RegisterBase<0x40006A68, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F5R1_FB0_Values<CAN2::F5R1, 0, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB1 = CAN2_F5R1_FB1_Values<CAN2::F5R1, 1, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB2 = CAN2_F5R1_FB2_Values<CAN2::F5R1, 2, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB3 = CAN2_F5R1_FB3_Values<CAN2::F5R1, 3, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB4 = CAN2_F5R1_FB4_Values<CAN2::F5R1, 4, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB5 = CAN2_F5R1_FB5_Values<CAN2::F5R1, 5, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB6 = CAN2_F5R1_FB6_Values<CAN2::F5R1, 6, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB7 = CAN2_F5R1_FB7_Values<CAN2::F5R1, 7, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB8 = CAN2_F5R1_FB8_Values<CAN2::F5R1, 8, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB9 = CAN2_F5R1_FB9_Values<CAN2::F5R1, 9, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB10 = CAN2_F5R1_FB10_Values<CAN2::F5R1, 10, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB11 = CAN2_F5R1_FB11_Values<CAN2::F5R1, 11, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB12 = CAN2_F5R1_FB12_Values<CAN2::F5R1, 12, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB13 = CAN2_F5R1_FB13_Values<CAN2::F5R1, 13, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB14 = CAN2_F5R1_FB14_Values<CAN2::F5R1, 14, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB15 = CAN2_F5R1_FB15_Values<CAN2::F5R1, 15, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB16 = CAN2_F5R1_FB16_Values<CAN2::F5R1, 16, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB17 = CAN2_F5R1_FB17_Values<CAN2::F5R1, 17, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB18 = CAN2_F5R1_FB18_Values<CAN2::F5R1, 18, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB19 = CAN2_F5R1_FB19_Values<CAN2::F5R1, 19, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB20 = CAN2_F5R1_FB20_Values<CAN2::F5R1, 20, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB21 = CAN2_F5R1_FB21_Values<CAN2::F5R1, 21, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB22 = CAN2_F5R1_FB22_Values<CAN2::F5R1, 22, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB23 = CAN2_F5R1_FB23_Values<CAN2::F5R1, 23, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB24 = CAN2_F5R1_FB24_Values<CAN2::F5R1, 24, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB25 = CAN2_F5R1_FB25_Values<CAN2::F5R1, 25, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB26 = CAN2_F5R1_FB26_Values<CAN2::F5R1, 26, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB27 = CAN2_F5R1_FB27_Values<CAN2::F5R1, 27, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB28 = CAN2_F5R1_FB28_Values<CAN2::F5R1, 28, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB29 = CAN2_F5R1_FB29_Values<CAN2::F5R1, 29, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB30 = CAN2_F5R1_FB30_Values<CAN2::F5R1, 30, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FB31 = CAN2_F5R1_FB31_Values<CAN2::F5R1, 31, 1, ReadWriteMode, CAN2F5R1Base> ;
    using FieldValues = CAN2_F5R1_FB31_Values<CAN2::F5R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5R1Pack  = Register<0x40006A68, 32, ReadWriteMode, CAN2F5R1Base, T...> ;

  struct CAN2F5R2Base {} ;

  struct F5R2 : public RegisterBase<0x40006A6C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F5R2_FB0_Values<CAN2::F5R2, 0, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB1 = CAN2_F5R2_FB1_Values<CAN2::F5R2, 1, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB2 = CAN2_F5R2_FB2_Values<CAN2::F5R2, 2, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB3 = CAN2_F5R2_FB3_Values<CAN2::F5R2, 3, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB4 = CAN2_F5R2_FB4_Values<CAN2::F5R2, 4, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB5 = CAN2_F5R2_FB5_Values<CAN2::F5R2, 5, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB6 = CAN2_F5R2_FB6_Values<CAN2::F5R2, 6, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB7 = CAN2_F5R2_FB7_Values<CAN2::F5R2, 7, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB8 = CAN2_F5R2_FB8_Values<CAN2::F5R2, 8, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB9 = CAN2_F5R2_FB9_Values<CAN2::F5R2, 9, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB10 = CAN2_F5R2_FB10_Values<CAN2::F5R2, 10, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB11 = CAN2_F5R2_FB11_Values<CAN2::F5R2, 11, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB12 = CAN2_F5R2_FB12_Values<CAN2::F5R2, 12, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB13 = CAN2_F5R2_FB13_Values<CAN2::F5R2, 13, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB14 = CAN2_F5R2_FB14_Values<CAN2::F5R2, 14, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB15 = CAN2_F5R2_FB15_Values<CAN2::F5R2, 15, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB16 = CAN2_F5R2_FB16_Values<CAN2::F5R2, 16, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB17 = CAN2_F5R2_FB17_Values<CAN2::F5R2, 17, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB18 = CAN2_F5R2_FB18_Values<CAN2::F5R2, 18, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB19 = CAN2_F5R2_FB19_Values<CAN2::F5R2, 19, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB20 = CAN2_F5R2_FB20_Values<CAN2::F5R2, 20, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB21 = CAN2_F5R2_FB21_Values<CAN2::F5R2, 21, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB22 = CAN2_F5R2_FB22_Values<CAN2::F5R2, 22, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB23 = CAN2_F5R2_FB23_Values<CAN2::F5R2, 23, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB24 = CAN2_F5R2_FB24_Values<CAN2::F5R2, 24, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB25 = CAN2_F5R2_FB25_Values<CAN2::F5R2, 25, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB26 = CAN2_F5R2_FB26_Values<CAN2::F5R2, 26, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB27 = CAN2_F5R2_FB27_Values<CAN2::F5R2, 27, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB28 = CAN2_F5R2_FB28_Values<CAN2::F5R2, 28, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB29 = CAN2_F5R2_FB29_Values<CAN2::F5R2, 29, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB30 = CAN2_F5R2_FB30_Values<CAN2::F5R2, 30, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FB31 = CAN2_F5R2_FB31_Values<CAN2::F5R2, 31, 1, ReadWriteMode, CAN2F5R2Base> ;
    using FieldValues = CAN2_F5R2_FB31_Values<CAN2::F5R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5R2Pack  = Register<0x40006A6C, 32, ReadWriteMode, CAN2F5R2Base, T...> ;

  struct CAN2F6R1Base {} ;

  struct F6R1 : public RegisterBase<0x40006A70, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F6R1_FB0_Values<CAN2::F6R1, 0, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB1 = CAN2_F6R1_FB1_Values<CAN2::F6R1, 1, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB2 = CAN2_F6R1_FB2_Values<CAN2::F6R1, 2, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB3 = CAN2_F6R1_FB3_Values<CAN2::F6R1, 3, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB4 = CAN2_F6R1_FB4_Values<CAN2::F6R1, 4, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB5 = CAN2_F6R1_FB5_Values<CAN2::F6R1, 5, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB6 = CAN2_F6R1_FB6_Values<CAN2::F6R1, 6, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB7 = CAN2_F6R1_FB7_Values<CAN2::F6R1, 7, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB8 = CAN2_F6R1_FB8_Values<CAN2::F6R1, 8, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB9 = CAN2_F6R1_FB9_Values<CAN2::F6R1, 9, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB10 = CAN2_F6R1_FB10_Values<CAN2::F6R1, 10, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB11 = CAN2_F6R1_FB11_Values<CAN2::F6R1, 11, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB12 = CAN2_F6R1_FB12_Values<CAN2::F6R1, 12, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB13 = CAN2_F6R1_FB13_Values<CAN2::F6R1, 13, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB14 = CAN2_F6R1_FB14_Values<CAN2::F6R1, 14, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB15 = CAN2_F6R1_FB15_Values<CAN2::F6R1, 15, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB16 = CAN2_F6R1_FB16_Values<CAN2::F6R1, 16, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB17 = CAN2_F6R1_FB17_Values<CAN2::F6R1, 17, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB18 = CAN2_F6R1_FB18_Values<CAN2::F6R1, 18, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB19 = CAN2_F6R1_FB19_Values<CAN2::F6R1, 19, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB20 = CAN2_F6R1_FB20_Values<CAN2::F6R1, 20, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB21 = CAN2_F6R1_FB21_Values<CAN2::F6R1, 21, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB22 = CAN2_F6R1_FB22_Values<CAN2::F6R1, 22, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB23 = CAN2_F6R1_FB23_Values<CAN2::F6R1, 23, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB24 = CAN2_F6R1_FB24_Values<CAN2::F6R1, 24, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB25 = CAN2_F6R1_FB25_Values<CAN2::F6R1, 25, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB26 = CAN2_F6R1_FB26_Values<CAN2::F6R1, 26, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB27 = CAN2_F6R1_FB27_Values<CAN2::F6R1, 27, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB28 = CAN2_F6R1_FB28_Values<CAN2::F6R1, 28, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB29 = CAN2_F6R1_FB29_Values<CAN2::F6R1, 29, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB30 = CAN2_F6R1_FB30_Values<CAN2::F6R1, 30, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FB31 = CAN2_F6R1_FB31_Values<CAN2::F6R1, 31, 1, ReadWriteMode, CAN2F6R1Base> ;
    using FieldValues = CAN2_F6R1_FB31_Values<CAN2::F6R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6R1Pack  = Register<0x40006A70, 32, ReadWriteMode, CAN2F6R1Base, T...> ;

  struct CAN2F6R2Base {} ;

  struct F6R2 : public RegisterBase<0x40006A74, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F6R2_FB0_Values<CAN2::F6R2, 0, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB1 = CAN2_F6R2_FB1_Values<CAN2::F6R2, 1, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB2 = CAN2_F6R2_FB2_Values<CAN2::F6R2, 2, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB3 = CAN2_F6R2_FB3_Values<CAN2::F6R2, 3, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB4 = CAN2_F6R2_FB4_Values<CAN2::F6R2, 4, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB5 = CAN2_F6R2_FB5_Values<CAN2::F6R2, 5, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB6 = CAN2_F6R2_FB6_Values<CAN2::F6R2, 6, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB7 = CAN2_F6R2_FB7_Values<CAN2::F6R2, 7, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB8 = CAN2_F6R2_FB8_Values<CAN2::F6R2, 8, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB9 = CAN2_F6R2_FB9_Values<CAN2::F6R2, 9, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB10 = CAN2_F6R2_FB10_Values<CAN2::F6R2, 10, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB11 = CAN2_F6R2_FB11_Values<CAN2::F6R2, 11, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB12 = CAN2_F6R2_FB12_Values<CAN2::F6R2, 12, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB13 = CAN2_F6R2_FB13_Values<CAN2::F6R2, 13, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB14 = CAN2_F6R2_FB14_Values<CAN2::F6R2, 14, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB15 = CAN2_F6R2_FB15_Values<CAN2::F6R2, 15, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB16 = CAN2_F6R2_FB16_Values<CAN2::F6R2, 16, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB17 = CAN2_F6R2_FB17_Values<CAN2::F6R2, 17, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB18 = CAN2_F6R2_FB18_Values<CAN2::F6R2, 18, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB19 = CAN2_F6R2_FB19_Values<CAN2::F6R2, 19, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB20 = CAN2_F6R2_FB20_Values<CAN2::F6R2, 20, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB21 = CAN2_F6R2_FB21_Values<CAN2::F6R2, 21, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB22 = CAN2_F6R2_FB22_Values<CAN2::F6R2, 22, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB23 = CAN2_F6R2_FB23_Values<CAN2::F6R2, 23, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB24 = CAN2_F6R2_FB24_Values<CAN2::F6R2, 24, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB25 = CAN2_F6R2_FB25_Values<CAN2::F6R2, 25, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB26 = CAN2_F6R2_FB26_Values<CAN2::F6R2, 26, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB27 = CAN2_F6R2_FB27_Values<CAN2::F6R2, 27, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB28 = CAN2_F6R2_FB28_Values<CAN2::F6R2, 28, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB29 = CAN2_F6R2_FB29_Values<CAN2::F6R2, 29, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB30 = CAN2_F6R2_FB30_Values<CAN2::F6R2, 30, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FB31 = CAN2_F6R2_FB31_Values<CAN2::F6R2, 31, 1, ReadWriteMode, CAN2F6R2Base> ;
    using FieldValues = CAN2_F6R2_FB31_Values<CAN2::F6R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6R2Pack  = Register<0x40006A74, 32, ReadWriteMode, CAN2F6R2Base, T...> ;

  struct CAN2F7R1Base {} ;

  struct F7R1 : public RegisterBase<0x40006A78, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F7R1_FB0_Values<CAN2::F7R1, 0, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB1 = CAN2_F7R1_FB1_Values<CAN2::F7R1, 1, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB2 = CAN2_F7R1_FB2_Values<CAN2::F7R1, 2, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB3 = CAN2_F7R1_FB3_Values<CAN2::F7R1, 3, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB4 = CAN2_F7R1_FB4_Values<CAN2::F7R1, 4, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB5 = CAN2_F7R1_FB5_Values<CAN2::F7R1, 5, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB6 = CAN2_F7R1_FB6_Values<CAN2::F7R1, 6, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB7 = CAN2_F7R1_FB7_Values<CAN2::F7R1, 7, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB8 = CAN2_F7R1_FB8_Values<CAN2::F7R1, 8, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB9 = CAN2_F7R1_FB9_Values<CAN2::F7R1, 9, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB10 = CAN2_F7R1_FB10_Values<CAN2::F7R1, 10, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB11 = CAN2_F7R1_FB11_Values<CAN2::F7R1, 11, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB12 = CAN2_F7R1_FB12_Values<CAN2::F7R1, 12, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB13 = CAN2_F7R1_FB13_Values<CAN2::F7R1, 13, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB14 = CAN2_F7R1_FB14_Values<CAN2::F7R1, 14, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB15 = CAN2_F7R1_FB15_Values<CAN2::F7R1, 15, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB16 = CAN2_F7R1_FB16_Values<CAN2::F7R1, 16, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB17 = CAN2_F7R1_FB17_Values<CAN2::F7R1, 17, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB18 = CAN2_F7R1_FB18_Values<CAN2::F7R1, 18, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB19 = CAN2_F7R1_FB19_Values<CAN2::F7R1, 19, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB20 = CAN2_F7R1_FB20_Values<CAN2::F7R1, 20, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB21 = CAN2_F7R1_FB21_Values<CAN2::F7R1, 21, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB22 = CAN2_F7R1_FB22_Values<CAN2::F7R1, 22, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB23 = CAN2_F7R1_FB23_Values<CAN2::F7R1, 23, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB24 = CAN2_F7R1_FB24_Values<CAN2::F7R1, 24, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB25 = CAN2_F7R1_FB25_Values<CAN2::F7R1, 25, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB26 = CAN2_F7R1_FB26_Values<CAN2::F7R1, 26, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB27 = CAN2_F7R1_FB27_Values<CAN2::F7R1, 27, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB28 = CAN2_F7R1_FB28_Values<CAN2::F7R1, 28, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB29 = CAN2_F7R1_FB29_Values<CAN2::F7R1, 29, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB30 = CAN2_F7R1_FB30_Values<CAN2::F7R1, 30, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FB31 = CAN2_F7R1_FB31_Values<CAN2::F7R1, 31, 1, ReadWriteMode, CAN2F7R1Base> ;
    using FieldValues = CAN2_F7R1_FB31_Values<CAN2::F7R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7R1Pack  = Register<0x40006A78, 32, ReadWriteMode, CAN2F7R1Base, T...> ;

  struct CAN2F7R2Base {} ;

  struct F7R2 : public RegisterBase<0x40006A7C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F7R2_FB0_Values<CAN2::F7R2, 0, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB1 = CAN2_F7R2_FB1_Values<CAN2::F7R2, 1, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB2 = CAN2_F7R2_FB2_Values<CAN2::F7R2, 2, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB3 = CAN2_F7R2_FB3_Values<CAN2::F7R2, 3, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB4 = CAN2_F7R2_FB4_Values<CAN2::F7R2, 4, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB5 = CAN2_F7R2_FB5_Values<CAN2::F7R2, 5, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB6 = CAN2_F7R2_FB6_Values<CAN2::F7R2, 6, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB7 = CAN2_F7R2_FB7_Values<CAN2::F7R2, 7, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB8 = CAN2_F7R2_FB8_Values<CAN2::F7R2, 8, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB9 = CAN2_F7R2_FB9_Values<CAN2::F7R2, 9, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB10 = CAN2_F7R2_FB10_Values<CAN2::F7R2, 10, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB11 = CAN2_F7R2_FB11_Values<CAN2::F7R2, 11, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB12 = CAN2_F7R2_FB12_Values<CAN2::F7R2, 12, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB13 = CAN2_F7R2_FB13_Values<CAN2::F7R2, 13, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB14 = CAN2_F7R2_FB14_Values<CAN2::F7R2, 14, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB15 = CAN2_F7R2_FB15_Values<CAN2::F7R2, 15, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB16 = CAN2_F7R2_FB16_Values<CAN2::F7R2, 16, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB17 = CAN2_F7R2_FB17_Values<CAN2::F7R2, 17, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB18 = CAN2_F7R2_FB18_Values<CAN2::F7R2, 18, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB19 = CAN2_F7R2_FB19_Values<CAN2::F7R2, 19, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB20 = CAN2_F7R2_FB20_Values<CAN2::F7R2, 20, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB21 = CAN2_F7R2_FB21_Values<CAN2::F7R2, 21, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB22 = CAN2_F7R2_FB22_Values<CAN2::F7R2, 22, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB23 = CAN2_F7R2_FB23_Values<CAN2::F7R2, 23, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB24 = CAN2_F7R2_FB24_Values<CAN2::F7R2, 24, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB25 = CAN2_F7R2_FB25_Values<CAN2::F7R2, 25, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB26 = CAN2_F7R2_FB26_Values<CAN2::F7R2, 26, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB27 = CAN2_F7R2_FB27_Values<CAN2::F7R2, 27, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB28 = CAN2_F7R2_FB28_Values<CAN2::F7R2, 28, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB29 = CAN2_F7R2_FB29_Values<CAN2::F7R2, 29, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB30 = CAN2_F7R2_FB30_Values<CAN2::F7R2, 30, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FB31 = CAN2_F7R2_FB31_Values<CAN2::F7R2, 31, 1, ReadWriteMode, CAN2F7R2Base> ;
    using FieldValues = CAN2_F7R2_FB31_Values<CAN2::F7R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7R2Pack  = Register<0x40006A7C, 32, ReadWriteMode, CAN2F7R2Base, T...> ;

  struct CAN2F8R1Base {} ;

  struct F8R1 : public RegisterBase<0x40006A80, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F8R1_FB0_Values<CAN2::F8R1, 0, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB1 = CAN2_F8R1_FB1_Values<CAN2::F8R1, 1, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB2 = CAN2_F8R1_FB2_Values<CAN2::F8R1, 2, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB3 = CAN2_F8R1_FB3_Values<CAN2::F8R1, 3, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB4 = CAN2_F8R1_FB4_Values<CAN2::F8R1, 4, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB5 = CAN2_F8R1_FB5_Values<CAN2::F8R1, 5, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB6 = CAN2_F8R1_FB6_Values<CAN2::F8R1, 6, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB7 = CAN2_F8R1_FB7_Values<CAN2::F8R1, 7, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB8 = CAN2_F8R1_FB8_Values<CAN2::F8R1, 8, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB9 = CAN2_F8R1_FB9_Values<CAN2::F8R1, 9, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB10 = CAN2_F8R1_FB10_Values<CAN2::F8R1, 10, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB11 = CAN2_F8R1_FB11_Values<CAN2::F8R1, 11, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB12 = CAN2_F8R1_FB12_Values<CAN2::F8R1, 12, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB13 = CAN2_F8R1_FB13_Values<CAN2::F8R1, 13, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB14 = CAN2_F8R1_FB14_Values<CAN2::F8R1, 14, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB15 = CAN2_F8R1_FB15_Values<CAN2::F8R1, 15, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB16 = CAN2_F8R1_FB16_Values<CAN2::F8R1, 16, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB17 = CAN2_F8R1_FB17_Values<CAN2::F8R1, 17, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB18 = CAN2_F8R1_FB18_Values<CAN2::F8R1, 18, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB19 = CAN2_F8R1_FB19_Values<CAN2::F8R1, 19, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB20 = CAN2_F8R1_FB20_Values<CAN2::F8R1, 20, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB21 = CAN2_F8R1_FB21_Values<CAN2::F8R1, 21, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB22 = CAN2_F8R1_FB22_Values<CAN2::F8R1, 22, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB23 = CAN2_F8R1_FB23_Values<CAN2::F8R1, 23, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB24 = CAN2_F8R1_FB24_Values<CAN2::F8R1, 24, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB25 = CAN2_F8R1_FB25_Values<CAN2::F8R1, 25, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB26 = CAN2_F8R1_FB26_Values<CAN2::F8R1, 26, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB27 = CAN2_F8R1_FB27_Values<CAN2::F8R1, 27, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB28 = CAN2_F8R1_FB28_Values<CAN2::F8R1, 28, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB29 = CAN2_F8R1_FB29_Values<CAN2::F8R1, 29, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB30 = CAN2_F8R1_FB30_Values<CAN2::F8R1, 30, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FB31 = CAN2_F8R1_FB31_Values<CAN2::F8R1, 31, 1, ReadWriteMode, CAN2F8R1Base> ;
    using FieldValues = CAN2_F8R1_FB31_Values<CAN2::F8R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8R1Pack  = Register<0x40006A80, 32, ReadWriteMode, CAN2F8R1Base, T...> ;

  struct CAN2F8R2Base {} ;

  struct F8R2 : public RegisterBase<0x40006A84, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F8R2_FB0_Values<CAN2::F8R2, 0, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB1 = CAN2_F8R2_FB1_Values<CAN2::F8R2, 1, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB2 = CAN2_F8R2_FB2_Values<CAN2::F8R2, 2, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB3 = CAN2_F8R2_FB3_Values<CAN2::F8R2, 3, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB4 = CAN2_F8R2_FB4_Values<CAN2::F8R2, 4, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB5 = CAN2_F8R2_FB5_Values<CAN2::F8R2, 5, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB6 = CAN2_F8R2_FB6_Values<CAN2::F8R2, 6, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB7 = CAN2_F8R2_FB7_Values<CAN2::F8R2, 7, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB8 = CAN2_F8R2_FB8_Values<CAN2::F8R2, 8, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB9 = CAN2_F8R2_FB9_Values<CAN2::F8R2, 9, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB10 = CAN2_F8R2_FB10_Values<CAN2::F8R2, 10, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB11 = CAN2_F8R2_FB11_Values<CAN2::F8R2, 11, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB12 = CAN2_F8R2_FB12_Values<CAN2::F8R2, 12, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB13 = CAN2_F8R2_FB13_Values<CAN2::F8R2, 13, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB14 = CAN2_F8R2_FB14_Values<CAN2::F8R2, 14, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB15 = CAN2_F8R2_FB15_Values<CAN2::F8R2, 15, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB16 = CAN2_F8R2_FB16_Values<CAN2::F8R2, 16, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB17 = CAN2_F8R2_FB17_Values<CAN2::F8R2, 17, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB18 = CAN2_F8R2_FB18_Values<CAN2::F8R2, 18, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB19 = CAN2_F8R2_FB19_Values<CAN2::F8R2, 19, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB20 = CAN2_F8R2_FB20_Values<CAN2::F8R2, 20, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB21 = CAN2_F8R2_FB21_Values<CAN2::F8R2, 21, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB22 = CAN2_F8R2_FB22_Values<CAN2::F8R2, 22, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB23 = CAN2_F8R2_FB23_Values<CAN2::F8R2, 23, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB24 = CAN2_F8R2_FB24_Values<CAN2::F8R2, 24, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB25 = CAN2_F8R2_FB25_Values<CAN2::F8R2, 25, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB26 = CAN2_F8R2_FB26_Values<CAN2::F8R2, 26, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB27 = CAN2_F8R2_FB27_Values<CAN2::F8R2, 27, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB28 = CAN2_F8R2_FB28_Values<CAN2::F8R2, 28, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB29 = CAN2_F8R2_FB29_Values<CAN2::F8R2, 29, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB30 = CAN2_F8R2_FB30_Values<CAN2::F8R2, 30, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FB31 = CAN2_F8R2_FB31_Values<CAN2::F8R2, 31, 1, ReadWriteMode, CAN2F8R2Base> ;
    using FieldValues = CAN2_F8R2_FB31_Values<CAN2::F8R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8R2Pack  = Register<0x40006A84, 32, ReadWriteMode, CAN2F8R2Base, T...> ;

  struct CAN2F9R1Base {} ;

  struct F9R1 : public RegisterBase<0x40006A88, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F9R1_FB0_Values<CAN2::F9R1, 0, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB1 = CAN2_F9R1_FB1_Values<CAN2::F9R1, 1, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB2 = CAN2_F9R1_FB2_Values<CAN2::F9R1, 2, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB3 = CAN2_F9R1_FB3_Values<CAN2::F9R1, 3, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB4 = CAN2_F9R1_FB4_Values<CAN2::F9R1, 4, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB5 = CAN2_F9R1_FB5_Values<CAN2::F9R1, 5, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB6 = CAN2_F9R1_FB6_Values<CAN2::F9R1, 6, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB7 = CAN2_F9R1_FB7_Values<CAN2::F9R1, 7, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB8 = CAN2_F9R1_FB8_Values<CAN2::F9R1, 8, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB9 = CAN2_F9R1_FB9_Values<CAN2::F9R1, 9, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB10 = CAN2_F9R1_FB10_Values<CAN2::F9R1, 10, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB11 = CAN2_F9R1_FB11_Values<CAN2::F9R1, 11, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB12 = CAN2_F9R1_FB12_Values<CAN2::F9R1, 12, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB13 = CAN2_F9R1_FB13_Values<CAN2::F9R1, 13, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB14 = CAN2_F9R1_FB14_Values<CAN2::F9R1, 14, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB15 = CAN2_F9R1_FB15_Values<CAN2::F9R1, 15, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB16 = CAN2_F9R1_FB16_Values<CAN2::F9R1, 16, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB17 = CAN2_F9R1_FB17_Values<CAN2::F9R1, 17, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB18 = CAN2_F9R1_FB18_Values<CAN2::F9R1, 18, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB19 = CAN2_F9R1_FB19_Values<CAN2::F9R1, 19, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB20 = CAN2_F9R1_FB20_Values<CAN2::F9R1, 20, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB21 = CAN2_F9R1_FB21_Values<CAN2::F9R1, 21, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB22 = CAN2_F9R1_FB22_Values<CAN2::F9R1, 22, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB23 = CAN2_F9R1_FB23_Values<CAN2::F9R1, 23, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB24 = CAN2_F9R1_FB24_Values<CAN2::F9R1, 24, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB25 = CAN2_F9R1_FB25_Values<CAN2::F9R1, 25, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB26 = CAN2_F9R1_FB26_Values<CAN2::F9R1, 26, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB27 = CAN2_F9R1_FB27_Values<CAN2::F9R1, 27, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB28 = CAN2_F9R1_FB28_Values<CAN2::F9R1, 28, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB29 = CAN2_F9R1_FB29_Values<CAN2::F9R1, 29, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB30 = CAN2_F9R1_FB30_Values<CAN2::F9R1, 30, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FB31 = CAN2_F9R1_FB31_Values<CAN2::F9R1, 31, 1, ReadWriteMode, CAN2F9R1Base> ;
    using FieldValues = CAN2_F9R1_FB31_Values<CAN2::F9R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9R1Pack  = Register<0x40006A88, 32, ReadWriteMode, CAN2F9R1Base, T...> ;

  struct CAN2F9R2Base {} ;

  struct F9R2 : public RegisterBase<0x40006A8C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F9R2_FB0_Values<CAN2::F9R2, 0, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB1 = CAN2_F9R2_FB1_Values<CAN2::F9R2, 1, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB2 = CAN2_F9R2_FB2_Values<CAN2::F9R2, 2, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB3 = CAN2_F9R2_FB3_Values<CAN2::F9R2, 3, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB4 = CAN2_F9R2_FB4_Values<CAN2::F9R2, 4, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB5 = CAN2_F9R2_FB5_Values<CAN2::F9R2, 5, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB6 = CAN2_F9R2_FB6_Values<CAN2::F9R2, 6, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB7 = CAN2_F9R2_FB7_Values<CAN2::F9R2, 7, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB8 = CAN2_F9R2_FB8_Values<CAN2::F9R2, 8, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB9 = CAN2_F9R2_FB9_Values<CAN2::F9R2, 9, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB10 = CAN2_F9R2_FB10_Values<CAN2::F9R2, 10, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB11 = CAN2_F9R2_FB11_Values<CAN2::F9R2, 11, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB12 = CAN2_F9R2_FB12_Values<CAN2::F9R2, 12, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB13 = CAN2_F9R2_FB13_Values<CAN2::F9R2, 13, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB14 = CAN2_F9R2_FB14_Values<CAN2::F9R2, 14, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB15 = CAN2_F9R2_FB15_Values<CAN2::F9R2, 15, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB16 = CAN2_F9R2_FB16_Values<CAN2::F9R2, 16, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB17 = CAN2_F9R2_FB17_Values<CAN2::F9R2, 17, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB18 = CAN2_F9R2_FB18_Values<CAN2::F9R2, 18, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB19 = CAN2_F9R2_FB19_Values<CAN2::F9R2, 19, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB20 = CAN2_F9R2_FB20_Values<CAN2::F9R2, 20, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB21 = CAN2_F9R2_FB21_Values<CAN2::F9R2, 21, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB22 = CAN2_F9R2_FB22_Values<CAN2::F9R2, 22, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB23 = CAN2_F9R2_FB23_Values<CAN2::F9R2, 23, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB24 = CAN2_F9R2_FB24_Values<CAN2::F9R2, 24, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB25 = CAN2_F9R2_FB25_Values<CAN2::F9R2, 25, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB26 = CAN2_F9R2_FB26_Values<CAN2::F9R2, 26, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB27 = CAN2_F9R2_FB27_Values<CAN2::F9R2, 27, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB28 = CAN2_F9R2_FB28_Values<CAN2::F9R2, 28, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB29 = CAN2_F9R2_FB29_Values<CAN2::F9R2, 29, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB30 = CAN2_F9R2_FB30_Values<CAN2::F9R2, 30, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FB31 = CAN2_F9R2_FB31_Values<CAN2::F9R2, 31, 1, ReadWriteMode, CAN2F9R2Base> ;
    using FieldValues = CAN2_F9R2_FB31_Values<CAN2::F9R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9R2Pack  = Register<0x40006A8C, 32, ReadWriteMode, CAN2F9R2Base, T...> ;

  struct CAN2F10R1Base {} ;

  struct F10R1 : public RegisterBase<0x40006A90, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F10R1_FB0_Values<CAN2::F10R1, 0, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB1 = CAN2_F10R1_FB1_Values<CAN2::F10R1, 1, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB2 = CAN2_F10R1_FB2_Values<CAN2::F10R1, 2, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB3 = CAN2_F10R1_FB3_Values<CAN2::F10R1, 3, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB4 = CAN2_F10R1_FB4_Values<CAN2::F10R1, 4, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB5 = CAN2_F10R1_FB5_Values<CAN2::F10R1, 5, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB6 = CAN2_F10R1_FB6_Values<CAN2::F10R1, 6, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB7 = CAN2_F10R1_FB7_Values<CAN2::F10R1, 7, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB8 = CAN2_F10R1_FB8_Values<CAN2::F10R1, 8, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB9 = CAN2_F10R1_FB9_Values<CAN2::F10R1, 9, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB10 = CAN2_F10R1_FB10_Values<CAN2::F10R1, 10, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB11 = CAN2_F10R1_FB11_Values<CAN2::F10R1, 11, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB12 = CAN2_F10R1_FB12_Values<CAN2::F10R1, 12, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB13 = CAN2_F10R1_FB13_Values<CAN2::F10R1, 13, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB14 = CAN2_F10R1_FB14_Values<CAN2::F10R1, 14, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB15 = CAN2_F10R1_FB15_Values<CAN2::F10R1, 15, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB16 = CAN2_F10R1_FB16_Values<CAN2::F10R1, 16, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB17 = CAN2_F10R1_FB17_Values<CAN2::F10R1, 17, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB18 = CAN2_F10R1_FB18_Values<CAN2::F10R1, 18, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB19 = CAN2_F10R1_FB19_Values<CAN2::F10R1, 19, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB20 = CAN2_F10R1_FB20_Values<CAN2::F10R1, 20, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB21 = CAN2_F10R1_FB21_Values<CAN2::F10R1, 21, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB22 = CAN2_F10R1_FB22_Values<CAN2::F10R1, 22, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB23 = CAN2_F10R1_FB23_Values<CAN2::F10R1, 23, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB24 = CAN2_F10R1_FB24_Values<CAN2::F10R1, 24, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB25 = CAN2_F10R1_FB25_Values<CAN2::F10R1, 25, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB26 = CAN2_F10R1_FB26_Values<CAN2::F10R1, 26, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB27 = CAN2_F10R1_FB27_Values<CAN2::F10R1, 27, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB28 = CAN2_F10R1_FB28_Values<CAN2::F10R1, 28, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB29 = CAN2_F10R1_FB29_Values<CAN2::F10R1, 29, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB30 = CAN2_F10R1_FB30_Values<CAN2::F10R1, 30, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FB31 = CAN2_F10R1_FB31_Values<CAN2::F10R1, 31, 1, ReadWriteMode, CAN2F10R1Base> ;
    using FieldValues = CAN2_F10R1_FB31_Values<CAN2::F10R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10R1Pack  = Register<0x40006A90, 32, ReadWriteMode, CAN2F10R1Base, T...> ;

  struct CAN2F10R2Base {} ;

  struct F10R2 : public RegisterBase<0x40006A94, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F10R2_FB0_Values<CAN2::F10R2, 0, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB1 = CAN2_F10R2_FB1_Values<CAN2::F10R2, 1, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB2 = CAN2_F10R2_FB2_Values<CAN2::F10R2, 2, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB3 = CAN2_F10R2_FB3_Values<CAN2::F10R2, 3, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB4 = CAN2_F10R2_FB4_Values<CAN2::F10R2, 4, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB5 = CAN2_F10R2_FB5_Values<CAN2::F10R2, 5, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB6 = CAN2_F10R2_FB6_Values<CAN2::F10R2, 6, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB7 = CAN2_F10R2_FB7_Values<CAN2::F10R2, 7, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB8 = CAN2_F10R2_FB8_Values<CAN2::F10R2, 8, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB9 = CAN2_F10R2_FB9_Values<CAN2::F10R2, 9, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB10 = CAN2_F10R2_FB10_Values<CAN2::F10R2, 10, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB11 = CAN2_F10R2_FB11_Values<CAN2::F10R2, 11, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB12 = CAN2_F10R2_FB12_Values<CAN2::F10R2, 12, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB13 = CAN2_F10R2_FB13_Values<CAN2::F10R2, 13, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB14 = CAN2_F10R2_FB14_Values<CAN2::F10R2, 14, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB15 = CAN2_F10R2_FB15_Values<CAN2::F10R2, 15, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB16 = CAN2_F10R2_FB16_Values<CAN2::F10R2, 16, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB17 = CAN2_F10R2_FB17_Values<CAN2::F10R2, 17, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB18 = CAN2_F10R2_FB18_Values<CAN2::F10R2, 18, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB19 = CAN2_F10R2_FB19_Values<CAN2::F10R2, 19, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB20 = CAN2_F10R2_FB20_Values<CAN2::F10R2, 20, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB21 = CAN2_F10R2_FB21_Values<CAN2::F10R2, 21, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB22 = CAN2_F10R2_FB22_Values<CAN2::F10R2, 22, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB23 = CAN2_F10R2_FB23_Values<CAN2::F10R2, 23, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB24 = CAN2_F10R2_FB24_Values<CAN2::F10R2, 24, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB25 = CAN2_F10R2_FB25_Values<CAN2::F10R2, 25, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB26 = CAN2_F10R2_FB26_Values<CAN2::F10R2, 26, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB27 = CAN2_F10R2_FB27_Values<CAN2::F10R2, 27, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB28 = CAN2_F10R2_FB28_Values<CAN2::F10R2, 28, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB29 = CAN2_F10R2_FB29_Values<CAN2::F10R2, 29, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB30 = CAN2_F10R2_FB30_Values<CAN2::F10R2, 30, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FB31 = CAN2_F10R2_FB31_Values<CAN2::F10R2, 31, 1, ReadWriteMode, CAN2F10R2Base> ;
    using FieldValues = CAN2_F10R2_FB31_Values<CAN2::F10R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10R2Pack  = Register<0x40006A94, 32, ReadWriteMode, CAN2F10R2Base, T...> ;

  struct CAN2F11R1Base {} ;

  struct F11R1 : public RegisterBase<0x40006A98, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F11R1_FB0_Values<CAN2::F11R1, 0, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB1 = CAN2_F11R1_FB1_Values<CAN2::F11R1, 1, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB2 = CAN2_F11R1_FB2_Values<CAN2::F11R1, 2, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB3 = CAN2_F11R1_FB3_Values<CAN2::F11R1, 3, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB4 = CAN2_F11R1_FB4_Values<CAN2::F11R1, 4, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB5 = CAN2_F11R1_FB5_Values<CAN2::F11R1, 5, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB6 = CAN2_F11R1_FB6_Values<CAN2::F11R1, 6, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB7 = CAN2_F11R1_FB7_Values<CAN2::F11R1, 7, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB8 = CAN2_F11R1_FB8_Values<CAN2::F11R1, 8, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB9 = CAN2_F11R1_FB9_Values<CAN2::F11R1, 9, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB10 = CAN2_F11R1_FB10_Values<CAN2::F11R1, 10, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB11 = CAN2_F11R1_FB11_Values<CAN2::F11R1, 11, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB12 = CAN2_F11R1_FB12_Values<CAN2::F11R1, 12, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB13 = CAN2_F11R1_FB13_Values<CAN2::F11R1, 13, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB14 = CAN2_F11R1_FB14_Values<CAN2::F11R1, 14, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB15 = CAN2_F11R1_FB15_Values<CAN2::F11R1, 15, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB16 = CAN2_F11R1_FB16_Values<CAN2::F11R1, 16, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB17 = CAN2_F11R1_FB17_Values<CAN2::F11R1, 17, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB18 = CAN2_F11R1_FB18_Values<CAN2::F11R1, 18, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB19 = CAN2_F11R1_FB19_Values<CAN2::F11R1, 19, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB20 = CAN2_F11R1_FB20_Values<CAN2::F11R1, 20, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB21 = CAN2_F11R1_FB21_Values<CAN2::F11R1, 21, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB22 = CAN2_F11R1_FB22_Values<CAN2::F11R1, 22, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB23 = CAN2_F11R1_FB23_Values<CAN2::F11R1, 23, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB24 = CAN2_F11R1_FB24_Values<CAN2::F11R1, 24, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB25 = CAN2_F11R1_FB25_Values<CAN2::F11R1, 25, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB26 = CAN2_F11R1_FB26_Values<CAN2::F11R1, 26, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB27 = CAN2_F11R1_FB27_Values<CAN2::F11R1, 27, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB28 = CAN2_F11R1_FB28_Values<CAN2::F11R1, 28, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB29 = CAN2_F11R1_FB29_Values<CAN2::F11R1, 29, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB30 = CAN2_F11R1_FB30_Values<CAN2::F11R1, 30, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FB31 = CAN2_F11R1_FB31_Values<CAN2::F11R1, 31, 1, ReadWriteMode, CAN2F11R1Base> ;
    using FieldValues = CAN2_F11R1_FB31_Values<CAN2::F11R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11R1Pack  = Register<0x40006A98, 32, ReadWriteMode, CAN2F11R1Base, T...> ;

  struct CAN2F11R2Base {} ;

  struct F11R2 : public RegisterBase<0x40006A9C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F11R2_FB0_Values<CAN2::F11R2, 0, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB1 = CAN2_F11R2_FB1_Values<CAN2::F11R2, 1, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB2 = CAN2_F11R2_FB2_Values<CAN2::F11R2, 2, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB3 = CAN2_F11R2_FB3_Values<CAN2::F11R2, 3, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB4 = CAN2_F11R2_FB4_Values<CAN2::F11R2, 4, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB5 = CAN2_F11R2_FB5_Values<CAN2::F11R2, 5, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB6 = CAN2_F11R2_FB6_Values<CAN2::F11R2, 6, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB7 = CAN2_F11R2_FB7_Values<CAN2::F11R2, 7, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB8 = CAN2_F11R2_FB8_Values<CAN2::F11R2, 8, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB9 = CAN2_F11R2_FB9_Values<CAN2::F11R2, 9, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB10 = CAN2_F11R2_FB10_Values<CAN2::F11R2, 10, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB11 = CAN2_F11R2_FB11_Values<CAN2::F11R2, 11, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB12 = CAN2_F11R2_FB12_Values<CAN2::F11R2, 12, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB13 = CAN2_F11R2_FB13_Values<CAN2::F11R2, 13, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB14 = CAN2_F11R2_FB14_Values<CAN2::F11R2, 14, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB15 = CAN2_F11R2_FB15_Values<CAN2::F11R2, 15, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB16 = CAN2_F11R2_FB16_Values<CAN2::F11R2, 16, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB17 = CAN2_F11R2_FB17_Values<CAN2::F11R2, 17, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB18 = CAN2_F11R2_FB18_Values<CAN2::F11R2, 18, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB19 = CAN2_F11R2_FB19_Values<CAN2::F11R2, 19, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB20 = CAN2_F11R2_FB20_Values<CAN2::F11R2, 20, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB21 = CAN2_F11R2_FB21_Values<CAN2::F11R2, 21, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB22 = CAN2_F11R2_FB22_Values<CAN2::F11R2, 22, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB23 = CAN2_F11R2_FB23_Values<CAN2::F11R2, 23, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB24 = CAN2_F11R2_FB24_Values<CAN2::F11R2, 24, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB25 = CAN2_F11R2_FB25_Values<CAN2::F11R2, 25, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB26 = CAN2_F11R2_FB26_Values<CAN2::F11R2, 26, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB27 = CAN2_F11R2_FB27_Values<CAN2::F11R2, 27, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB28 = CAN2_F11R2_FB28_Values<CAN2::F11R2, 28, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB29 = CAN2_F11R2_FB29_Values<CAN2::F11R2, 29, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB30 = CAN2_F11R2_FB30_Values<CAN2::F11R2, 30, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FB31 = CAN2_F11R2_FB31_Values<CAN2::F11R2, 31, 1, ReadWriteMode, CAN2F11R2Base> ;
    using FieldValues = CAN2_F11R2_FB31_Values<CAN2::F11R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11R2Pack  = Register<0x40006A9C, 32, ReadWriteMode, CAN2F11R2Base, T...> ;

  struct CAN2F12R1Base {} ;

  struct F12R1 : public RegisterBase<0x40006AA0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F12R1_FB0_Values<CAN2::F12R1, 0, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB1 = CAN2_F12R1_FB1_Values<CAN2::F12R1, 1, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB2 = CAN2_F12R1_FB2_Values<CAN2::F12R1, 2, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB3 = CAN2_F12R1_FB3_Values<CAN2::F12R1, 3, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB4 = CAN2_F12R1_FB4_Values<CAN2::F12R1, 4, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB5 = CAN2_F12R1_FB5_Values<CAN2::F12R1, 5, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB6 = CAN2_F12R1_FB6_Values<CAN2::F12R1, 6, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB7 = CAN2_F12R1_FB7_Values<CAN2::F12R1, 7, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB8 = CAN2_F12R1_FB8_Values<CAN2::F12R1, 8, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB9 = CAN2_F12R1_FB9_Values<CAN2::F12R1, 9, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB10 = CAN2_F12R1_FB10_Values<CAN2::F12R1, 10, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB11 = CAN2_F12R1_FB11_Values<CAN2::F12R1, 11, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB12 = CAN2_F12R1_FB12_Values<CAN2::F12R1, 12, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB13 = CAN2_F12R1_FB13_Values<CAN2::F12R1, 13, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB14 = CAN2_F12R1_FB14_Values<CAN2::F12R1, 14, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB15 = CAN2_F12R1_FB15_Values<CAN2::F12R1, 15, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB16 = CAN2_F12R1_FB16_Values<CAN2::F12R1, 16, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB17 = CAN2_F12R1_FB17_Values<CAN2::F12R1, 17, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB18 = CAN2_F12R1_FB18_Values<CAN2::F12R1, 18, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB19 = CAN2_F12R1_FB19_Values<CAN2::F12R1, 19, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB20 = CAN2_F12R1_FB20_Values<CAN2::F12R1, 20, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB21 = CAN2_F12R1_FB21_Values<CAN2::F12R1, 21, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB22 = CAN2_F12R1_FB22_Values<CAN2::F12R1, 22, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB23 = CAN2_F12R1_FB23_Values<CAN2::F12R1, 23, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB24 = CAN2_F12R1_FB24_Values<CAN2::F12R1, 24, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB25 = CAN2_F12R1_FB25_Values<CAN2::F12R1, 25, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB26 = CAN2_F12R1_FB26_Values<CAN2::F12R1, 26, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB27 = CAN2_F12R1_FB27_Values<CAN2::F12R1, 27, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB28 = CAN2_F12R1_FB28_Values<CAN2::F12R1, 28, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB29 = CAN2_F12R1_FB29_Values<CAN2::F12R1, 29, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB30 = CAN2_F12R1_FB30_Values<CAN2::F12R1, 30, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FB31 = CAN2_F12R1_FB31_Values<CAN2::F12R1, 31, 1, ReadWriteMode, CAN2F12R1Base> ;
    using FieldValues = CAN2_F12R1_FB31_Values<CAN2::F12R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12R1Pack  = Register<0x40006AA0, 32, ReadWriteMode, CAN2F12R1Base, T...> ;

  struct CAN2F12R2Base {} ;

  struct F12R2 : public RegisterBase<0x40006AA4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F12R2_FB0_Values<CAN2::F12R2, 0, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB1 = CAN2_F12R2_FB1_Values<CAN2::F12R2, 1, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB2 = CAN2_F12R2_FB2_Values<CAN2::F12R2, 2, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB3 = CAN2_F12R2_FB3_Values<CAN2::F12R2, 3, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB4 = CAN2_F12R2_FB4_Values<CAN2::F12R2, 4, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB5 = CAN2_F12R2_FB5_Values<CAN2::F12R2, 5, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB6 = CAN2_F12R2_FB6_Values<CAN2::F12R2, 6, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB7 = CAN2_F12R2_FB7_Values<CAN2::F12R2, 7, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB8 = CAN2_F12R2_FB8_Values<CAN2::F12R2, 8, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB9 = CAN2_F12R2_FB9_Values<CAN2::F12R2, 9, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB10 = CAN2_F12R2_FB10_Values<CAN2::F12R2, 10, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB11 = CAN2_F12R2_FB11_Values<CAN2::F12R2, 11, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB12 = CAN2_F12R2_FB12_Values<CAN2::F12R2, 12, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB13 = CAN2_F12R2_FB13_Values<CAN2::F12R2, 13, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB14 = CAN2_F12R2_FB14_Values<CAN2::F12R2, 14, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB15 = CAN2_F12R2_FB15_Values<CAN2::F12R2, 15, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB16 = CAN2_F12R2_FB16_Values<CAN2::F12R2, 16, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB17 = CAN2_F12R2_FB17_Values<CAN2::F12R2, 17, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB18 = CAN2_F12R2_FB18_Values<CAN2::F12R2, 18, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB19 = CAN2_F12R2_FB19_Values<CAN2::F12R2, 19, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB20 = CAN2_F12R2_FB20_Values<CAN2::F12R2, 20, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB21 = CAN2_F12R2_FB21_Values<CAN2::F12R2, 21, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB22 = CAN2_F12R2_FB22_Values<CAN2::F12R2, 22, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB23 = CAN2_F12R2_FB23_Values<CAN2::F12R2, 23, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB24 = CAN2_F12R2_FB24_Values<CAN2::F12R2, 24, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB25 = CAN2_F12R2_FB25_Values<CAN2::F12R2, 25, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB26 = CAN2_F12R2_FB26_Values<CAN2::F12R2, 26, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB27 = CAN2_F12R2_FB27_Values<CAN2::F12R2, 27, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB28 = CAN2_F12R2_FB28_Values<CAN2::F12R2, 28, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB29 = CAN2_F12R2_FB29_Values<CAN2::F12R2, 29, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB30 = CAN2_F12R2_FB30_Values<CAN2::F12R2, 30, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FB31 = CAN2_F12R2_FB31_Values<CAN2::F12R2, 31, 1, ReadWriteMode, CAN2F12R2Base> ;
    using FieldValues = CAN2_F12R2_FB31_Values<CAN2::F12R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12R2Pack  = Register<0x40006AA4, 32, ReadWriteMode, CAN2F12R2Base, T...> ;

  struct CAN2F13R1Base {} ;

  struct F13R1 : public RegisterBase<0x40006AA8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F13R1_FB0_Values<CAN2::F13R1, 0, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB1 = CAN2_F13R1_FB1_Values<CAN2::F13R1, 1, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB2 = CAN2_F13R1_FB2_Values<CAN2::F13R1, 2, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB3 = CAN2_F13R1_FB3_Values<CAN2::F13R1, 3, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB4 = CAN2_F13R1_FB4_Values<CAN2::F13R1, 4, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB5 = CAN2_F13R1_FB5_Values<CAN2::F13R1, 5, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB6 = CAN2_F13R1_FB6_Values<CAN2::F13R1, 6, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB7 = CAN2_F13R1_FB7_Values<CAN2::F13R1, 7, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB8 = CAN2_F13R1_FB8_Values<CAN2::F13R1, 8, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB9 = CAN2_F13R1_FB9_Values<CAN2::F13R1, 9, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB10 = CAN2_F13R1_FB10_Values<CAN2::F13R1, 10, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB11 = CAN2_F13R1_FB11_Values<CAN2::F13R1, 11, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB12 = CAN2_F13R1_FB12_Values<CAN2::F13R1, 12, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB13 = CAN2_F13R1_FB13_Values<CAN2::F13R1, 13, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB14 = CAN2_F13R1_FB14_Values<CAN2::F13R1, 14, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB15 = CAN2_F13R1_FB15_Values<CAN2::F13R1, 15, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB16 = CAN2_F13R1_FB16_Values<CAN2::F13R1, 16, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB17 = CAN2_F13R1_FB17_Values<CAN2::F13R1, 17, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB18 = CAN2_F13R1_FB18_Values<CAN2::F13R1, 18, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB19 = CAN2_F13R1_FB19_Values<CAN2::F13R1, 19, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB20 = CAN2_F13R1_FB20_Values<CAN2::F13R1, 20, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB21 = CAN2_F13R1_FB21_Values<CAN2::F13R1, 21, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB22 = CAN2_F13R1_FB22_Values<CAN2::F13R1, 22, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB23 = CAN2_F13R1_FB23_Values<CAN2::F13R1, 23, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB24 = CAN2_F13R1_FB24_Values<CAN2::F13R1, 24, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB25 = CAN2_F13R1_FB25_Values<CAN2::F13R1, 25, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB26 = CAN2_F13R1_FB26_Values<CAN2::F13R1, 26, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB27 = CAN2_F13R1_FB27_Values<CAN2::F13R1, 27, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB28 = CAN2_F13R1_FB28_Values<CAN2::F13R1, 28, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB29 = CAN2_F13R1_FB29_Values<CAN2::F13R1, 29, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB30 = CAN2_F13R1_FB30_Values<CAN2::F13R1, 30, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FB31 = CAN2_F13R1_FB31_Values<CAN2::F13R1, 31, 1, ReadWriteMode, CAN2F13R1Base> ;
    using FieldValues = CAN2_F13R1_FB31_Values<CAN2::F13R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13R1Pack  = Register<0x40006AA8, 32, ReadWriteMode, CAN2F13R1Base, T...> ;

  struct CAN2F13R2Base {} ;

  struct F13R2 : public RegisterBase<0x40006AAC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F13R2_FB0_Values<CAN2::F13R2, 0, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB1 = CAN2_F13R2_FB1_Values<CAN2::F13R2, 1, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB2 = CAN2_F13R2_FB2_Values<CAN2::F13R2, 2, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB3 = CAN2_F13R2_FB3_Values<CAN2::F13R2, 3, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB4 = CAN2_F13R2_FB4_Values<CAN2::F13R2, 4, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB5 = CAN2_F13R2_FB5_Values<CAN2::F13R2, 5, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB6 = CAN2_F13R2_FB6_Values<CAN2::F13R2, 6, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB7 = CAN2_F13R2_FB7_Values<CAN2::F13R2, 7, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB8 = CAN2_F13R2_FB8_Values<CAN2::F13R2, 8, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB9 = CAN2_F13R2_FB9_Values<CAN2::F13R2, 9, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB10 = CAN2_F13R2_FB10_Values<CAN2::F13R2, 10, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB11 = CAN2_F13R2_FB11_Values<CAN2::F13R2, 11, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB12 = CAN2_F13R2_FB12_Values<CAN2::F13R2, 12, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB13 = CAN2_F13R2_FB13_Values<CAN2::F13R2, 13, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB14 = CAN2_F13R2_FB14_Values<CAN2::F13R2, 14, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB15 = CAN2_F13R2_FB15_Values<CAN2::F13R2, 15, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB16 = CAN2_F13R2_FB16_Values<CAN2::F13R2, 16, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB17 = CAN2_F13R2_FB17_Values<CAN2::F13R2, 17, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB18 = CAN2_F13R2_FB18_Values<CAN2::F13R2, 18, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB19 = CAN2_F13R2_FB19_Values<CAN2::F13R2, 19, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB20 = CAN2_F13R2_FB20_Values<CAN2::F13R2, 20, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB21 = CAN2_F13R2_FB21_Values<CAN2::F13R2, 21, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB22 = CAN2_F13R2_FB22_Values<CAN2::F13R2, 22, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB23 = CAN2_F13R2_FB23_Values<CAN2::F13R2, 23, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB24 = CAN2_F13R2_FB24_Values<CAN2::F13R2, 24, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB25 = CAN2_F13R2_FB25_Values<CAN2::F13R2, 25, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB26 = CAN2_F13R2_FB26_Values<CAN2::F13R2, 26, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB27 = CAN2_F13R2_FB27_Values<CAN2::F13R2, 27, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB28 = CAN2_F13R2_FB28_Values<CAN2::F13R2, 28, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB29 = CAN2_F13R2_FB29_Values<CAN2::F13R2, 29, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB30 = CAN2_F13R2_FB30_Values<CAN2::F13R2, 30, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FB31 = CAN2_F13R2_FB31_Values<CAN2::F13R2, 31, 1, ReadWriteMode, CAN2F13R2Base> ;
    using FieldValues = CAN2_F13R2_FB31_Values<CAN2::F13R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13R2Pack  = Register<0x40006AAC, 32, ReadWriteMode, CAN2F13R2Base, T...> ;

  struct CAN2F14R1Base {} ;

  struct F14R1 : public RegisterBase<0x40006AB0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F14R1_FB0_Values<CAN2::F14R1, 0, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB1 = CAN2_F14R1_FB1_Values<CAN2::F14R1, 1, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB2 = CAN2_F14R1_FB2_Values<CAN2::F14R1, 2, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB3 = CAN2_F14R1_FB3_Values<CAN2::F14R1, 3, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB4 = CAN2_F14R1_FB4_Values<CAN2::F14R1, 4, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB5 = CAN2_F14R1_FB5_Values<CAN2::F14R1, 5, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB6 = CAN2_F14R1_FB6_Values<CAN2::F14R1, 6, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB7 = CAN2_F14R1_FB7_Values<CAN2::F14R1, 7, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB8 = CAN2_F14R1_FB8_Values<CAN2::F14R1, 8, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB9 = CAN2_F14R1_FB9_Values<CAN2::F14R1, 9, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB10 = CAN2_F14R1_FB10_Values<CAN2::F14R1, 10, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB11 = CAN2_F14R1_FB11_Values<CAN2::F14R1, 11, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB12 = CAN2_F14R1_FB12_Values<CAN2::F14R1, 12, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB13 = CAN2_F14R1_FB13_Values<CAN2::F14R1, 13, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB14 = CAN2_F14R1_FB14_Values<CAN2::F14R1, 14, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB15 = CAN2_F14R1_FB15_Values<CAN2::F14R1, 15, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB16 = CAN2_F14R1_FB16_Values<CAN2::F14R1, 16, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB17 = CAN2_F14R1_FB17_Values<CAN2::F14R1, 17, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB18 = CAN2_F14R1_FB18_Values<CAN2::F14R1, 18, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB19 = CAN2_F14R1_FB19_Values<CAN2::F14R1, 19, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB20 = CAN2_F14R1_FB20_Values<CAN2::F14R1, 20, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB21 = CAN2_F14R1_FB21_Values<CAN2::F14R1, 21, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB22 = CAN2_F14R1_FB22_Values<CAN2::F14R1, 22, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB23 = CAN2_F14R1_FB23_Values<CAN2::F14R1, 23, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB24 = CAN2_F14R1_FB24_Values<CAN2::F14R1, 24, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB25 = CAN2_F14R1_FB25_Values<CAN2::F14R1, 25, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB26 = CAN2_F14R1_FB26_Values<CAN2::F14R1, 26, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB27 = CAN2_F14R1_FB27_Values<CAN2::F14R1, 27, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB28 = CAN2_F14R1_FB28_Values<CAN2::F14R1, 28, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB29 = CAN2_F14R1_FB29_Values<CAN2::F14R1, 29, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB30 = CAN2_F14R1_FB30_Values<CAN2::F14R1, 30, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FB31 = CAN2_F14R1_FB31_Values<CAN2::F14R1, 31, 1, ReadWriteMode, CAN2F14R1Base> ;
    using FieldValues = CAN2_F14R1_FB31_Values<CAN2::F14R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14R1Pack  = Register<0x40006AB0, 32, ReadWriteMode, CAN2F14R1Base, T...> ;

  struct CAN2F14R2Base {} ;

  struct F14R2 : public RegisterBase<0x40006AB4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F14R2_FB0_Values<CAN2::F14R2, 0, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB1 = CAN2_F14R2_FB1_Values<CAN2::F14R2, 1, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB2 = CAN2_F14R2_FB2_Values<CAN2::F14R2, 2, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB3 = CAN2_F14R2_FB3_Values<CAN2::F14R2, 3, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB4 = CAN2_F14R2_FB4_Values<CAN2::F14R2, 4, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB5 = CAN2_F14R2_FB5_Values<CAN2::F14R2, 5, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB6 = CAN2_F14R2_FB6_Values<CAN2::F14R2, 6, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB7 = CAN2_F14R2_FB7_Values<CAN2::F14R2, 7, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB8 = CAN2_F14R2_FB8_Values<CAN2::F14R2, 8, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB9 = CAN2_F14R2_FB9_Values<CAN2::F14R2, 9, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB10 = CAN2_F14R2_FB10_Values<CAN2::F14R2, 10, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB11 = CAN2_F14R2_FB11_Values<CAN2::F14R2, 11, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB12 = CAN2_F14R2_FB12_Values<CAN2::F14R2, 12, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB13 = CAN2_F14R2_FB13_Values<CAN2::F14R2, 13, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB14 = CAN2_F14R2_FB14_Values<CAN2::F14R2, 14, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB15 = CAN2_F14R2_FB15_Values<CAN2::F14R2, 15, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB16 = CAN2_F14R2_FB16_Values<CAN2::F14R2, 16, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB17 = CAN2_F14R2_FB17_Values<CAN2::F14R2, 17, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB18 = CAN2_F14R2_FB18_Values<CAN2::F14R2, 18, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB19 = CAN2_F14R2_FB19_Values<CAN2::F14R2, 19, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB20 = CAN2_F14R2_FB20_Values<CAN2::F14R2, 20, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB21 = CAN2_F14R2_FB21_Values<CAN2::F14R2, 21, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB22 = CAN2_F14R2_FB22_Values<CAN2::F14R2, 22, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB23 = CAN2_F14R2_FB23_Values<CAN2::F14R2, 23, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB24 = CAN2_F14R2_FB24_Values<CAN2::F14R2, 24, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB25 = CAN2_F14R2_FB25_Values<CAN2::F14R2, 25, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB26 = CAN2_F14R2_FB26_Values<CAN2::F14R2, 26, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB27 = CAN2_F14R2_FB27_Values<CAN2::F14R2, 27, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB28 = CAN2_F14R2_FB28_Values<CAN2::F14R2, 28, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB29 = CAN2_F14R2_FB29_Values<CAN2::F14R2, 29, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB30 = CAN2_F14R2_FB30_Values<CAN2::F14R2, 30, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FB31 = CAN2_F14R2_FB31_Values<CAN2::F14R2, 31, 1, ReadWriteMode, CAN2F14R2Base> ;
    using FieldValues = CAN2_F14R2_FB31_Values<CAN2::F14R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14R2Pack  = Register<0x40006AB4, 32, ReadWriteMode, CAN2F14R2Base, T...> ;

  struct CAN2F15R1Base {} ;

  struct F15R1 : public RegisterBase<0x40006AB8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F15R1_FB0_Values<CAN2::F15R1, 0, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB1 = CAN2_F15R1_FB1_Values<CAN2::F15R1, 1, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB2 = CAN2_F15R1_FB2_Values<CAN2::F15R1, 2, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB3 = CAN2_F15R1_FB3_Values<CAN2::F15R1, 3, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB4 = CAN2_F15R1_FB4_Values<CAN2::F15R1, 4, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB5 = CAN2_F15R1_FB5_Values<CAN2::F15R1, 5, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB6 = CAN2_F15R1_FB6_Values<CAN2::F15R1, 6, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB7 = CAN2_F15R1_FB7_Values<CAN2::F15R1, 7, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB8 = CAN2_F15R1_FB8_Values<CAN2::F15R1, 8, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB9 = CAN2_F15R1_FB9_Values<CAN2::F15R1, 9, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB10 = CAN2_F15R1_FB10_Values<CAN2::F15R1, 10, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB11 = CAN2_F15R1_FB11_Values<CAN2::F15R1, 11, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB12 = CAN2_F15R1_FB12_Values<CAN2::F15R1, 12, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB13 = CAN2_F15R1_FB13_Values<CAN2::F15R1, 13, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB14 = CAN2_F15R1_FB14_Values<CAN2::F15R1, 14, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB15 = CAN2_F15R1_FB15_Values<CAN2::F15R1, 15, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB16 = CAN2_F15R1_FB16_Values<CAN2::F15R1, 16, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB17 = CAN2_F15R1_FB17_Values<CAN2::F15R1, 17, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB18 = CAN2_F15R1_FB18_Values<CAN2::F15R1, 18, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB19 = CAN2_F15R1_FB19_Values<CAN2::F15R1, 19, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB20 = CAN2_F15R1_FB20_Values<CAN2::F15R1, 20, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB21 = CAN2_F15R1_FB21_Values<CAN2::F15R1, 21, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB22 = CAN2_F15R1_FB22_Values<CAN2::F15R1, 22, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB23 = CAN2_F15R1_FB23_Values<CAN2::F15R1, 23, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB24 = CAN2_F15R1_FB24_Values<CAN2::F15R1, 24, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB25 = CAN2_F15R1_FB25_Values<CAN2::F15R1, 25, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB26 = CAN2_F15R1_FB26_Values<CAN2::F15R1, 26, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB27 = CAN2_F15R1_FB27_Values<CAN2::F15R1, 27, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB28 = CAN2_F15R1_FB28_Values<CAN2::F15R1, 28, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB29 = CAN2_F15R1_FB29_Values<CAN2::F15R1, 29, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB30 = CAN2_F15R1_FB30_Values<CAN2::F15R1, 30, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FB31 = CAN2_F15R1_FB31_Values<CAN2::F15R1, 31, 1, ReadWriteMode, CAN2F15R1Base> ;
    using FieldValues = CAN2_F15R1_FB31_Values<CAN2::F15R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15R1Pack  = Register<0x40006AB8, 32, ReadWriteMode, CAN2F15R1Base, T...> ;

  struct CAN2F15R2Base {} ;

  struct F15R2 : public RegisterBase<0x40006ABC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F15R2_FB0_Values<CAN2::F15R2, 0, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB1 = CAN2_F15R2_FB1_Values<CAN2::F15R2, 1, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB2 = CAN2_F15R2_FB2_Values<CAN2::F15R2, 2, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB3 = CAN2_F15R2_FB3_Values<CAN2::F15R2, 3, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB4 = CAN2_F15R2_FB4_Values<CAN2::F15R2, 4, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB5 = CAN2_F15R2_FB5_Values<CAN2::F15R2, 5, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB6 = CAN2_F15R2_FB6_Values<CAN2::F15R2, 6, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB7 = CAN2_F15R2_FB7_Values<CAN2::F15R2, 7, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB8 = CAN2_F15R2_FB8_Values<CAN2::F15R2, 8, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB9 = CAN2_F15R2_FB9_Values<CAN2::F15R2, 9, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB10 = CAN2_F15R2_FB10_Values<CAN2::F15R2, 10, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB11 = CAN2_F15R2_FB11_Values<CAN2::F15R2, 11, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB12 = CAN2_F15R2_FB12_Values<CAN2::F15R2, 12, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB13 = CAN2_F15R2_FB13_Values<CAN2::F15R2, 13, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB14 = CAN2_F15R2_FB14_Values<CAN2::F15R2, 14, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB15 = CAN2_F15R2_FB15_Values<CAN2::F15R2, 15, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB16 = CAN2_F15R2_FB16_Values<CAN2::F15R2, 16, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB17 = CAN2_F15R2_FB17_Values<CAN2::F15R2, 17, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB18 = CAN2_F15R2_FB18_Values<CAN2::F15R2, 18, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB19 = CAN2_F15R2_FB19_Values<CAN2::F15R2, 19, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB20 = CAN2_F15R2_FB20_Values<CAN2::F15R2, 20, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB21 = CAN2_F15R2_FB21_Values<CAN2::F15R2, 21, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB22 = CAN2_F15R2_FB22_Values<CAN2::F15R2, 22, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB23 = CAN2_F15R2_FB23_Values<CAN2::F15R2, 23, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB24 = CAN2_F15R2_FB24_Values<CAN2::F15R2, 24, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB25 = CAN2_F15R2_FB25_Values<CAN2::F15R2, 25, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB26 = CAN2_F15R2_FB26_Values<CAN2::F15R2, 26, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB27 = CAN2_F15R2_FB27_Values<CAN2::F15R2, 27, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB28 = CAN2_F15R2_FB28_Values<CAN2::F15R2, 28, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB29 = CAN2_F15R2_FB29_Values<CAN2::F15R2, 29, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB30 = CAN2_F15R2_FB30_Values<CAN2::F15R2, 30, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FB31 = CAN2_F15R2_FB31_Values<CAN2::F15R2, 31, 1, ReadWriteMode, CAN2F15R2Base> ;
    using FieldValues = CAN2_F15R2_FB31_Values<CAN2::F15R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15R2Pack  = Register<0x40006ABC, 32, ReadWriteMode, CAN2F15R2Base, T...> ;

  struct CAN2F16R1Base {} ;

  struct F16R1 : public RegisterBase<0x40006AC0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F16R1_FB0_Values<CAN2::F16R1, 0, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB1 = CAN2_F16R1_FB1_Values<CAN2::F16R1, 1, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB2 = CAN2_F16R1_FB2_Values<CAN2::F16R1, 2, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB3 = CAN2_F16R1_FB3_Values<CAN2::F16R1, 3, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB4 = CAN2_F16R1_FB4_Values<CAN2::F16R1, 4, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB5 = CAN2_F16R1_FB5_Values<CAN2::F16R1, 5, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB6 = CAN2_F16R1_FB6_Values<CAN2::F16R1, 6, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB7 = CAN2_F16R1_FB7_Values<CAN2::F16R1, 7, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB8 = CAN2_F16R1_FB8_Values<CAN2::F16R1, 8, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB9 = CAN2_F16R1_FB9_Values<CAN2::F16R1, 9, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB10 = CAN2_F16R1_FB10_Values<CAN2::F16R1, 10, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB11 = CAN2_F16R1_FB11_Values<CAN2::F16R1, 11, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB12 = CAN2_F16R1_FB12_Values<CAN2::F16R1, 12, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB13 = CAN2_F16R1_FB13_Values<CAN2::F16R1, 13, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB14 = CAN2_F16R1_FB14_Values<CAN2::F16R1, 14, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB15 = CAN2_F16R1_FB15_Values<CAN2::F16R1, 15, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB16 = CAN2_F16R1_FB16_Values<CAN2::F16R1, 16, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB17 = CAN2_F16R1_FB17_Values<CAN2::F16R1, 17, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB18 = CAN2_F16R1_FB18_Values<CAN2::F16R1, 18, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB19 = CAN2_F16R1_FB19_Values<CAN2::F16R1, 19, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB20 = CAN2_F16R1_FB20_Values<CAN2::F16R1, 20, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB21 = CAN2_F16R1_FB21_Values<CAN2::F16R1, 21, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB22 = CAN2_F16R1_FB22_Values<CAN2::F16R1, 22, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB23 = CAN2_F16R1_FB23_Values<CAN2::F16R1, 23, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB24 = CAN2_F16R1_FB24_Values<CAN2::F16R1, 24, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB25 = CAN2_F16R1_FB25_Values<CAN2::F16R1, 25, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB26 = CAN2_F16R1_FB26_Values<CAN2::F16R1, 26, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB27 = CAN2_F16R1_FB27_Values<CAN2::F16R1, 27, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB28 = CAN2_F16R1_FB28_Values<CAN2::F16R1, 28, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB29 = CAN2_F16R1_FB29_Values<CAN2::F16R1, 29, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB30 = CAN2_F16R1_FB30_Values<CAN2::F16R1, 30, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FB31 = CAN2_F16R1_FB31_Values<CAN2::F16R1, 31, 1, ReadWriteMode, CAN2F16R1Base> ;
    using FieldValues = CAN2_F16R1_FB31_Values<CAN2::F16R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16R1Pack  = Register<0x40006AC0, 32, ReadWriteMode, CAN2F16R1Base, T...> ;

  struct CAN2F16R2Base {} ;

  struct F16R2 : public RegisterBase<0x40006AC4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F16R2_FB0_Values<CAN2::F16R2, 0, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB1 = CAN2_F16R2_FB1_Values<CAN2::F16R2, 1, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB2 = CAN2_F16R2_FB2_Values<CAN2::F16R2, 2, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB3 = CAN2_F16R2_FB3_Values<CAN2::F16R2, 3, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB4 = CAN2_F16R2_FB4_Values<CAN2::F16R2, 4, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB5 = CAN2_F16R2_FB5_Values<CAN2::F16R2, 5, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB6 = CAN2_F16R2_FB6_Values<CAN2::F16R2, 6, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB7 = CAN2_F16R2_FB7_Values<CAN2::F16R2, 7, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB8 = CAN2_F16R2_FB8_Values<CAN2::F16R2, 8, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB9 = CAN2_F16R2_FB9_Values<CAN2::F16R2, 9, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB10 = CAN2_F16R2_FB10_Values<CAN2::F16R2, 10, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB11 = CAN2_F16R2_FB11_Values<CAN2::F16R2, 11, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB12 = CAN2_F16R2_FB12_Values<CAN2::F16R2, 12, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB13 = CAN2_F16R2_FB13_Values<CAN2::F16R2, 13, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB14 = CAN2_F16R2_FB14_Values<CAN2::F16R2, 14, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB15 = CAN2_F16R2_FB15_Values<CAN2::F16R2, 15, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB16 = CAN2_F16R2_FB16_Values<CAN2::F16R2, 16, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB17 = CAN2_F16R2_FB17_Values<CAN2::F16R2, 17, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB18 = CAN2_F16R2_FB18_Values<CAN2::F16R2, 18, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB19 = CAN2_F16R2_FB19_Values<CAN2::F16R2, 19, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB20 = CAN2_F16R2_FB20_Values<CAN2::F16R2, 20, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB21 = CAN2_F16R2_FB21_Values<CAN2::F16R2, 21, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB22 = CAN2_F16R2_FB22_Values<CAN2::F16R2, 22, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB23 = CAN2_F16R2_FB23_Values<CAN2::F16R2, 23, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB24 = CAN2_F16R2_FB24_Values<CAN2::F16R2, 24, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB25 = CAN2_F16R2_FB25_Values<CAN2::F16R2, 25, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB26 = CAN2_F16R2_FB26_Values<CAN2::F16R2, 26, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB27 = CAN2_F16R2_FB27_Values<CAN2::F16R2, 27, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB28 = CAN2_F16R2_FB28_Values<CAN2::F16R2, 28, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB29 = CAN2_F16R2_FB29_Values<CAN2::F16R2, 29, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB30 = CAN2_F16R2_FB30_Values<CAN2::F16R2, 30, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FB31 = CAN2_F16R2_FB31_Values<CAN2::F16R2, 31, 1, ReadWriteMode, CAN2F16R2Base> ;
    using FieldValues = CAN2_F16R2_FB31_Values<CAN2::F16R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16R2Pack  = Register<0x40006AC4, 32, ReadWriteMode, CAN2F16R2Base, T...> ;

  struct CAN2F17R1Base {} ;

  struct F17R1 : public RegisterBase<0x40006AC8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F17R1_FB0_Values<CAN2::F17R1, 0, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB1 = CAN2_F17R1_FB1_Values<CAN2::F17R1, 1, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB2 = CAN2_F17R1_FB2_Values<CAN2::F17R1, 2, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB3 = CAN2_F17R1_FB3_Values<CAN2::F17R1, 3, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB4 = CAN2_F17R1_FB4_Values<CAN2::F17R1, 4, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB5 = CAN2_F17R1_FB5_Values<CAN2::F17R1, 5, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB6 = CAN2_F17R1_FB6_Values<CAN2::F17R1, 6, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB7 = CAN2_F17R1_FB7_Values<CAN2::F17R1, 7, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB8 = CAN2_F17R1_FB8_Values<CAN2::F17R1, 8, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB9 = CAN2_F17R1_FB9_Values<CAN2::F17R1, 9, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB10 = CAN2_F17R1_FB10_Values<CAN2::F17R1, 10, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB11 = CAN2_F17R1_FB11_Values<CAN2::F17R1, 11, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB12 = CAN2_F17R1_FB12_Values<CAN2::F17R1, 12, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB13 = CAN2_F17R1_FB13_Values<CAN2::F17R1, 13, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB14 = CAN2_F17R1_FB14_Values<CAN2::F17R1, 14, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB15 = CAN2_F17R1_FB15_Values<CAN2::F17R1, 15, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB16 = CAN2_F17R1_FB16_Values<CAN2::F17R1, 16, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB17 = CAN2_F17R1_FB17_Values<CAN2::F17R1, 17, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB18 = CAN2_F17R1_FB18_Values<CAN2::F17R1, 18, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB19 = CAN2_F17R1_FB19_Values<CAN2::F17R1, 19, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB20 = CAN2_F17R1_FB20_Values<CAN2::F17R1, 20, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB21 = CAN2_F17R1_FB21_Values<CAN2::F17R1, 21, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB22 = CAN2_F17R1_FB22_Values<CAN2::F17R1, 22, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB23 = CAN2_F17R1_FB23_Values<CAN2::F17R1, 23, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB24 = CAN2_F17R1_FB24_Values<CAN2::F17R1, 24, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB25 = CAN2_F17R1_FB25_Values<CAN2::F17R1, 25, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB26 = CAN2_F17R1_FB26_Values<CAN2::F17R1, 26, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB27 = CAN2_F17R1_FB27_Values<CAN2::F17R1, 27, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB28 = CAN2_F17R1_FB28_Values<CAN2::F17R1, 28, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB29 = CAN2_F17R1_FB29_Values<CAN2::F17R1, 29, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB30 = CAN2_F17R1_FB30_Values<CAN2::F17R1, 30, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FB31 = CAN2_F17R1_FB31_Values<CAN2::F17R1, 31, 1, ReadWriteMode, CAN2F17R1Base> ;
    using FieldValues = CAN2_F17R1_FB31_Values<CAN2::F17R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17R1Pack  = Register<0x40006AC8, 32, ReadWriteMode, CAN2F17R1Base, T...> ;

  struct CAN2F17R2Base {} ;

  struct F17R2 : public RegisterBase<0x40006ACC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F17R2_FB0_Values<CAN2::F17R2, 0, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB1 = CAN2_F17R2_FB1_Values<CAN2::F17R2, 1, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB2 = CAN2_F17R2_FB2_Values<CAN2::F17R2, 2, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB3 = CAN2_F17R2_FB3_Values<CAN2::F17R2, 3, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB4 = CAN2_F17R2_FB4_Values<CAN2::F17R2, 4, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB5 = CAN2_F17R2_FB5_Values<CAN2::F17R2, 5, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB6 = CAN2_F17R2_FB6_Values<CAN2::F17R2, 6, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB7 = CAN2_F17R2_FB7_Values<CAN2::F17R2, 7, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB8 = CAN2_F17R2_FB8_Values<CAN2::F17R2, 8, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB9 = CAN2_F17R2_FB9_Values<CAN2::F17R2, 9, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB10 = CAN2_F17R2_FB10_Values<CAN2::F17R2, 10, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB11 = CAN2_F17R2_FB11_Values<CAN2::F17R2, 11, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB12 = CAN2_F17R2_FB12_Values<CAN2::F17R2, 12, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB13 = CAN2_F17R2_FB13_Values<CAN2::F17R2, 13, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB14 = CAN2_F17R2_FB14_Values<CAN2::F17R2, 14, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB15 = CAN2_F17R2_FB15_Values<CAN2::F17R2, 15, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB16 = CAN2_F17R2_FB16_Values<CAN2::F17R2, 16, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB17 = CAN2_F17R2_FB17_Values<CAN2::F17R2, 17, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB18 = CAN2_F17R2_FB18_Values<CAN2::F17R2, 18, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB19 = CAN2_F17R2_FB19_Values<CAN2::F17R2, 19, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB20 = CAN2_F17R2_FB20_Values<CAN2::F17R2, 20, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB21 = CAN2_F17R2_FB21_Values<CAN2::F17R2, 21, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB22 = CAN2_F17R2_FB22_Values<CAN2::F17R2, 22, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB23 = CAN2_F17R2_FB23_Values<CAN2::F17R2, 23, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB24 = CAN2_F17R2_FB24_Values<CAN2::F17R2, 24, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB25 = CAN2_F17R2_FB25_Values<CAN2::F17R2, 25, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB26 = CAN2_F17R2_FB26_Values<CAN2::F17R2, 26, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB27 = CAN2_F17R2_FB27_Values<CAN2::F17R2, 27, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB28 = CAN2_F17R2_FB28_Values<CAN2::F17R2, 28, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB29 = CAN2_F17R2_FB29_Values<CAN2::F17R2, 29, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB30 = CAN2_F17R2_FB30_Values<CAN2::F17R2, 30, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FB31 = CAN2_F17R2_FB31_Values<CAN2::F17R2, 31, 1, ReadWriteMode, CAN2F17R2Base> ;
    using FieldValues = CAN2_F17R2_FB31_Values<CAN2::F17R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17R2Pack  = Register<0x40006ACC, 32, ReadWriteMode, CAN2F17R2Base, T...> ;

  struct CAN2F18R1Base {} ;

  struct F18R1 : public RegisterBase<0x40006AD0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F18R1_FB0_Values<CAN2::F18R1, 0, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB1 = CAN2_F18R1_FB1_Values<CAN2::F18R1, 1, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB2 = CAN2_F18R1_FB2_Values<CAN2::F18R1, 2, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB3 = CAN2_F18R1_FB3_Values<CAN2::F18R1, 3, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB4 = CAN2_F18R1_FB4_Values<CAN2::F18R1, 4, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB5 = CAN2_F18R1_FB5_Values<CAN2::F18R1, 5, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB6 = CAN2_F18R1_FB6_Values<CAN2::F18R1, 6, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB7 = CAN2_F18R1_FB7_Values<CAN2::F18R1, 7, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB8 = CAN2_F18R1_FB8_Values<CAN2::F18R1, 8, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB9 = CAN2_F18R1_FB9_Values<CAN2::F18R1, 9, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB10 = CAN2_F18R1_FB10_Values<CAN2::F18R1, 10, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB11 = CAN2_F18R1_FB11_Values<CAN2::F18R1, 11, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB12 = CAN2_F18R1_FB12_Values<CAN2::F18R1, 12, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB13 = CAN2_F18R1_FB13_Values<CAN2::F18R1, 13, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB14 = CAN2_F18R1_FB14_Values<CAN2::F18R1, 14, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB15 = CAN2_F18R1_FB15_Values<CAN2::F18R1, 15, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB16 = CAN2_F18R1_FB16_Values<CAN2::F18R1, 16, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB17 = CAN2_F18R1_FB17_Values<CAN2::F18R1, 17, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB18 = CAN2_F18R1_FB18_Values<CAN2::F18R1, 18, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB19 = CAN2_F18R1_FB19_Values<CAN2::F18R1, 19, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB20 = CAN2_F18R1_FB20_Values<CAN2::F18R1, 20, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB21 = CAN2_F18R1_FB21_Values<CAN2::F18R1, 21, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB22 = CAN2_F18R1_FB22_Values<CAN2::F18R1, 22, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB23 = CAN2_F18R1_FB23_Values<CAN2::F18R1, 23, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB24 = CAN2_F18R1_FB24_Values<CAN2::F18R1, 24, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB25 = CAN2_F18R1_FB25_Values<CAN2::F18R1, 25, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB26 = CAN2_F18R1_FB26_Values<CAN2::F18R1, 26, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB27 = CAN2_F18R1_FB27_Values<CAN2::F18R1, 27, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB28 = CAN2_F18R1_FB28_Values<CAN2::F18R1, 28, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB29 = CAN2_F18R1_FB29_Values<CAN2::F18R1, 29, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB30 = CAN2_F18R1_FB30_Values<CAN2::F18R1, 30, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FB31 = CAN2_F18R1_FB31_Values<CAN2::F18R1, 31, 1, ReadWriteMode, CAN2F18R1Base> ;
    using FieldValues = CAN2_F18R1_FB31_Values<CAN2::F18R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18R1Pack  = Register<0x40006AD0, 32, ReadWriteMode, CAN2F18R1Base, T...> ;

  struct CAN2F18R2Base {} ;

  struct F18R2 : public RegisterBase<0x40006AD4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F18R2_FB0_Values<CAN2::F18R2, 0, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB1 = CAN2_F18R2_FB1_Values<CAN2::F18R2, 1, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB2 = CAN2_F18R2_FB2_Values<CAN2::F18R2, 2, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB3 = CAN2_F18R2_FB3_Values<CAN2::F18R2, 3, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB4 = CAN2_F18R2_FB4_Values<CAN2::F18R2, 4, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB5 = CAN2_F18R2_FB5_Values<CAN2::F18R2, 5, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB6 = CAN2_F18R2_FB6_Values<CAN2::F18R2, 6, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB7 = CAN2_F18R2_FB7_Values<CAN2::F18R2, 7, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB8 = CAN2_F18R2_FB8_Values<CAN2::F18R2, 8, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB9 = CAN2_F18R2_FB9_Values<CAN2::F18R2, 9, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB10 = CAN2_F18R2_FB10_Values<CAN2::F18R2, 10, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB11 = CAN2_F18R2_FB11_Values<CAN2::F18R2, 11, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB12 = CAN2_F18R2_FB12_Values<CAN2::F18R2, 12, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB13 = CAN2_F18R2_FB13_Values<CAN2::F18R2, 13, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB14 = CAN2_F18R2_FB14_Values<CAN2::F18R2, 14, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB15 = CAN2_F18R2_FB15_Values<CAN2::F18R2, 15, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB16 = CAN2_F18R2_FB16_Values<CAN2::F18R2, 16, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB17 = CAN2_F18R2_FB17_Values<CAN2::F18R2, 17, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB18 = CAN2_F18R2_FB18_Values<CAN2::F18R2, 18, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB19 = CAN2_F18R2_FB19_Values<CAN2::F18R2, 19, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB20 = CAN2_F18R2_FB20_Values<CAN2::F18R2, 20, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB21 = CAN2_F18R2_FB21_Values<CAN2::F18R2, 21, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB22 = CAN2_F18R2_FB22_Values<CAN2::F18R2, 22, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB23 = CAN2_F18R2_FB23_Values<CAN2::F18R2, 23, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB24 = CAN2_F18R2_FB24_Values<CAN2::F18R2, 24, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB25 = CAN2_F18R2_FB25_Values<CAN2::F18R2, 25, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB26 = CAN2_F18R2_FB26_Values<CAN2::F18R2, 26, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB27 = CAN2_F18R2_FB27_Values<CAN2::F18R2, 27, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB28 = CAN2_F18R2_FB28_Values<CAN2::F18R2, 28, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB29 = CAN2_F18R2_FB29_Values<CAN2::F18R2, 29, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB30 = CAN2_F18R2_FB30_Values<CAN2::F18R2, 30, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FB31 = CAN2_F18R2_FB31_Values<CAN2::F18R2, 31, 1, ReadWriteMode, CAN2F18R2Base> ;
    using FieldValues = CAN2_F18R2_FB31_Values<CAN2::F18R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18R2Pack  = Register<0x40006AD4, 32, ReadWriteMode, CAN2F18R2Base, T...> ;

  struct CAN2F19R1Base {} ;

  struct F19R1 : public RegisterBase<0x40006AD8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F19R1_FB0_Values<CAN2::F19R1, 0, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB1 = CAN2_F19R1_FB1_Values<CAN2::F19R1, 1, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB2 = CAN2_F19R1_FB2_Values<CAN2::F19R1, 2, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB3 = CAN2_F19R1_FB3_Values<CAN2::F19R1, 3, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB4 = CAN2_F19R1_FB4_Values<CAN2::F19R1, 4, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB5 = CAN2_F19R1_FB5_Values<CAN2::F19R1, 5, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB6 = CAN2_F19R1_FB6_Values<CAN2::F19R1, 6, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB7 = CAN2_F19R1_FB7_Values<CAN2::F19R1, 7, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB8 = CAN2_F19R1_FB8_Values<CAN2::F19R1, 8, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB9 = CAN2_F19R1_FB9_Values<CAN2::F19R1, 9, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB10 = CAN2_F19R1_FB10_Values<CAN2::F19R1, 10, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB11 = CAN2_F19R1_FB11_Values<CAN2::F19R1, 11, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB12 = CAN2_F19R1_FB12_Values<CAN2::F19R1, 12, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB13 = CAN2_F19R1_FB13_Values<CAN2::F19R1, 13, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB14 = CAN2_F19R1_FB14_Values<CAN2::F19R1, 14, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB15 = CAN2_F19R1_FB15_Values<CAN2::F19R1, 15, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB16 = CAN2_F19R1_FB16_Values<CAN2::F19R1, 16, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB17 = CAN2_F19R1_FB17_Values<CAN2::F19R1, 17, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB18 = CAN2_F19R1_FB18_Values<CAN2::F19R1, 18, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB19 = CAN2_F19R1_FB19_Values<CAN2::F19R1, 19, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB20 = CAN2_F19R1_FB20_Values<CAN2::F19R1, 20, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB21 = CAN2_F19R1_FB21_Values<CAN2::F19R1, 21, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB22 = CAN2_F19R1_FB22_Values<CAN2::F19R1, 22, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB23 = CAN2_F19R1_FB23_Values<CAN2::F19R1, 23, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB24 = CAN2_F19R1_FB24_Values<CAN2::F19R1, 24, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB25 = CAN2_F19R1_FB25_Values<CAN2::F19R1, 25, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB26 = CAN2_F19R1_FB26_Values<CAN2::F19R1, 26, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB27 = CAN2_F19R1_FB27_Values<CAN2::F19R1, 27, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB28 = CAN2_F19R1_FB28_Values<CAN2::F19R1, 28, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB29 = CAN2_F19R1_FB29_Values<CAN2::F19R1, 29, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB30 = CAN2_F19R1_FB30_Values<CAN2::F19R1, 30, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FB31 = CAN2_F19R1_FB31_Values<CAN2::F19R1, 31, 1, ReadWriteMode, CAN2F19R1Base> ;
    using FieldValues = CAN2_F19R1_FB31_Values<CAN2::F19R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19R1Pack  = Register<0x40006AD8, 32, ReadWriteMode, CAN2F19R1Base, T...> ;

  struct CAN2F19R2Base {} ;

  struct F19R2 : public RegisterBase<0x40006ADC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F19R2_FB0_Values<CAN2::F19R2, 0, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB1 = CAN2_F19R2_FB1_Values<CAN2::F19R2, 1, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB2 = CAN2_F19R2_FB2_Values<CAN2::F19R2, 2, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB3 = CAN2_F19R2_FB3_Values<CAN2::F19R2, 3, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB4 = CAN2_F19R2_FB4_Values<CAN2::F19R2, 4, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB5 = CAN2_F19R2_FB5_Values<CAN2::F19R2, 5, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB6 = CAN2_F19R2_FB6_Values<CAN2::F19R2, 6, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB7 = CAN2_F19R2_FB7_Values<CAN2::F19R2, 7, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB8 = CAN2_F19R2_FB8_Values<CAN2::F19R2, 8, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB9 = CAN2_F19R2_FB9_Values<CAN2::F19R2, 9, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB10 = CAN2_F19R2_FB10_Values<CAN2::F19R2, 10, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB11 = CAN2_F19R2_FB11_Values<CAN2::F19R2, 11, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB12 = CAN2_F19R2_FB12_Values<CAN2::F19R2, 12, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB13 = CAN2_F19R2_FB13_Values<CAN2::F19R2, 13, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB14 = CAN2_F19R2_FB14_Values<CAN2::F19R2, 14, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB15 = CAN2_F19R2_FB15_Values<CAN2::F19R2, 15, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB16 = CAN2_F19R2_FB16_Values<CAN2::F19R2, 16, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB17 = CAN2_F19R2_FB17_Values<CAN2::F19R2, 17, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB18 = CAN2_F19R2_FB18_Values<CAN2::F19R2, 18, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB19 = CAN2_F19R2_FB19_Values<CAN2::F19R2, 19, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB20 = CAN2_F19R2_FB20_Values<CAN2::F19R2, 20, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB21 = CAN2_F19R2_FB21_Values<CAN2::F19R2, 21, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB22 = CAN2_F19R2_FB22_Values<CAN2::F19R2, 22, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB23 = CAN2_F19R2_FB23_Values<CAN2::F19R2, 23, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB24 = CAN2_F19R2_FB24_Values<CAN2::F19R2, 24, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB25 = CAN2_F19R2_FB25_Values<CAN2::F19R2, 25, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB26 = CAN2_F19R2_FB26_Values<CAN2::F19R2, 26, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB27 = CAN2_F19R2_FB27_Values<CAN2::F19R2, 27, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB28 = CAN2_F19R2_FB28_Values<CAN2::F19R2, 28, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB29 = CAN2_F19R2_FB29_Values<CAN2::F19R2, 29, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB30 = CAN2_F19R2_FB30_Values<CAN2::F19R2, 30, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FB31 = CAN2_F19R2_FB31_Values<CAN2::F19R2, 31, 1, ReadWriteMode, CAN2F19R2Base> ;
    using FieldValues = CAN2_F19R2_FB31_Values<CAN2::F19R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19R2Pack  = Register<0x40006ADC, 32, ReadWriteMode, CAN2F19R2Base, T...> ;

  struct CAN2F20R1Base {} ;

  struct F20R1 : public RegisterBase<0x40006AE0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F20R1_FB0_Values<CAN2::F20R1, 0, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB1 = CAN2_F20R1_FB1_Values<CAN2::F20R1, 1, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB2 = CAN2_F20R1_FB2_Values<CAN2::F20R1, 2, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB3 = CAN2_F20R1_FB3_Values<CAN2::F20R1, 3, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB4 = CAN2_F20R1_FB4_Values<CAN2::F20R1, 4, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB5 = CAN2_F20R1_FB5_Values<CAN2::F20R1, 5, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB6 = CAN2_F20R1_FB6_Values<CAN2::F20R1, 6, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB7 = CAN2_F20R1_FB7_Values<CAN2::F20R1, 7, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB8 = CAN2_F20R1_FB8_Values<CAN2::F20R1, 8, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB9 = CAN2_F20R1_FB9_Values<CAN2::F20R1, 9, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB10 = CAN2_F20R1_FB10_Values<CAN2::F20R1, 10, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB11 = CAN2_F20R1_FB11_Values<CAN2::F20R1, 11, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB12 = CAN2_F20R1_FB12_Values<CAN2::F20R1, 12, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB13 = CAN2_F20R1_FB13_Values<CAN2::F20R1, 13, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB14 = CAN2_F20R1_FB14_Values<CAN2::F20R1, 14, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB15 = CAN2_F20R1_FB15_Values<CAN2::F20R1, 15, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB16 = CAN2_F20R1_FB16_Values<CAN2::F20R1, 16, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB17 = CAN2_F20R1_FB17_Values<CAN2::F20R1, 17, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB18 = CAN2_F20R1_FB18_Values<CAN2::F20R1, 18, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB19 = CAN2_F20R1_FB19_Values<CAN2::F20R1, 19, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB20 = CAN2_F20R1_FB20_Values<CAN2::F20R1, 20, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB21 = CAN2_F20R1_FB21_Values<CAN2::F20R1, 21, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB22 = CAN2_F20R1_FB22_Values<CAN2::F20R1, 22, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB23 = CAN2_F20R1_FB23_Values<CAN2::F20R1, 23, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB24 = CAN2_F20R1_FB24_Values<CAN2::F20R1, 24, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB25 = CAN2_F20R1_FB25_Values<CAN2::F20R1, 25, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB26 = CAN2_F20R1_FB26_Values<CAN2::F20R1, 26, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB27 = CAN2_F20R1_FB27_Values<CAN2::F20R1, 27, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB28 = CAN2_F20R1_FB28_Values<CAN2::F20R1, 28, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB29 = CAN2_F20R1_FB29_Values<CAN2::F20R1, 29, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB30 = CAN2_F20R1_FB30_Values<CAN2::F20R1, 30, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FB31 = CAN2_F20R1_FB31_Values<CAN2::F20R1, 31, 1, ReadWriteMode, CAN2F20R1Base> ;
    using FieldValues = CAN2_F20R1_FB31_Values<CAN2::F20R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20R1Pack  = Register<0x40006AE0, 32, ReadWriteMode, CAN2F20R1Base, T...> ;

  struct CAN2F20R2Base {} ;

  struct F20R2 : public RegisterBase<0x40006AE4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F20R2_FB0_Values<CAN2::F20R2, 0, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB1 = CAN2_F20R2_FB1_Values<CAN2::F20R2, 1, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB2 = CAN2_F20R2_FB2_Values<CAN2::F20R2, 2, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB3 = CAN2_F20R2_FB3_Values<CAN2::F20R2, 3, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB4 = CAN2_F20R2_FB4_Values<CAN2::F20R2, 4, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB5 = CAN2_F20R2_FB5_Values<CAN2::F20R2, 5, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB6 = CAN2_F20R2_FB6_Values<CAN2::F20R2, 6, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB7 = CAN2_F20R2_FB7_Values<CAN2::F20R2, 7, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB8 = CAN2_F20R2_FB8_Values<CAN2::F20R2, 8, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB9 = CAN2_F20R2_FB9_Values<CAN2::F20R2, 9, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB10 = CAN2_F20R2_FB10_Values<CAN2::F20R2, 10, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB11 = CAN2_F20R2_FB11_Values<CAN2::F20R2, 11, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB12 = CAN2_F20R2_FB12_Values<CAN2::F20R2, 12, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB13 = CAN2_F20R2_FB13_Values<CAN2::F20R2, 13, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB14 = CAN2_F20R2_FB14_Values<CAN2::F20R2, 14, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB15 = CAN2_F20R2_FB15_Values<CAN2::F20R2, 15, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB16 = CAN2_F20R2_FB16_Values<CAN2::F20R2, 16, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB17 = CAN2_F20R2_FB17_Values<CAN2::F20R2, 17, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB18 = CAN2_F20R2_FB18_Values<CAN2::F20R2, 18, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB19 = CAN2_F20R2_FB19_Values<CAN2::F20R2, 19, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB20 = CAN2_F20R2_FB20_Values<CAN2::F20R2, 20, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB21 = CAN2_F20R2_FB21_Values<CAN2::F20R2, 21, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB22 = CAN2_F20R2_FB22_Values<CAN2::F20R2, 22, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB23 = CAN2_F20R2_FB23_Values<CAN2::F20R2, 23, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB24 = CAN2_F20R2_FB24_Values<CAN2::F20R2, 24, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB25 = CAN2_F20R2_FB25_Values<CAN2::F20R2, 25, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB26 = CAN2_F20R2_FB26_Values<CAN2::F20R2, 26, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB27 = CAN2_F20R2_FB27_Values<CAN2::F20R2, 27, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB28 = CAN2_F20R2_FB28_Values<CAN2::F20R2, 28, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB29 = CAN2_F20R2_FB29_Values<CAN2::F20R2, 29, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB30 = CAN2_F20R2_FB30_Values<CAN2::F20R2, 30, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FB31 = CAN2_F20R2_FB31_Values<CAN2::F20R2, 31, 1, ReadWriteMode, CAN2F20R2Base> ;
    using FieldValues = CAN2_F20R2_FB31_Values<CAN2::F20R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20R2Pack  = Register<0x40006AE4, 32, ReadWriteMode, CAN2F20R2Base, T...> ;

  struct CAN2F21R1Base {} ;

  struct F21R1 : public RegisterBase<0x40006AE8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F21R1_FB0_Values<CAN2::F21R1, 0, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB1 = CAN2_F21R1_FB1_Values<CAN2::F21R1, 1, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB2 = CAN2_F21R1_FB2_Values<CAN2::F21R1, 2, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB3 = CAN2_F21R1_FB3_Values<CAN2::F21R1, 3, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB4 = CAN2_F21R1_FB4_Values<CAN2::F21R1, 4, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB5 = CAN2_F21R1_FB5_Values<CAN2::F21R1, 5, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB6 = CAN2_F21R1_FB6_Values<CAN2::F21R1, 6, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB7 = CAN2_F21R1_FB7_Values<CAN2::F21R1, 7, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB8 = CAN2_F21R1_FB8_Values<CAN2::F21R1, 8, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB9 = CAN2_F21R1_FB9_Values<CAN2::F21R1, 9, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB10 = CAN2_F21R1_FB10_Values<CAN2::F21R1, 10, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB11 = CAN2_F21R1_FB11_Values<CAN2::F21R1, 11, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB12 = CAN2_F21R1_FB12_Values<CAN2::F21R1, 12, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB13 = CAN2_F21R1_FB13_Values<CAN2::F21R1, 13, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB14 = CAN2_F21R1_FB14_Values<CAN2::F21R1, 14, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB15 = CAN2_F21R1_FB15_Values<CAN2::F21R1, 15, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB16 = CAN2_F21R1_FB16_Values<CAN2::F21R1, 16, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB17 = CAN2_F21R1_FB17_Values<CAN2::F21R1, 17, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB18 = CAN2_F21R1_FB18_Values<CAN2::F21R1, 18, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB19 = CAN2_F21R1_FB19_Values<CAN2::F21R1, 19, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB20 = CAN2_F21R1_FB20_Values<CAN2::F21R1, 20, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB21 = CAN2_F21R1_FB21_Values<CAN2::F21R1, 21, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB22 = CAN2_F21R1_FB22_Values<CAN2::F21R1, 22, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB23 = CAN2_F21R1_FB23_Values<CAN2::F21R1, 23, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB24 = CAN2_F21R1_FB24_Values<CAN2::F21R1, 24, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB25 = CAN2_F21R1_FB25_Values<CAN2::F21R1, 25, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB26 = CAN2_F21R1_FB26_Values<CAN2::F21R1, 26, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB27 = CAN2_F21R1_FB27_Values<CAN2::F21R1, 27, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB28 = CAN2_F21R1_FB28_Values<CAN2::F21R1, 28, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB29 = CAN2_F21R1_FB29_Values<CAN2::F21R1, 29, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB30 = CAN2_F21R1_FB30_Values<CAN2::F21R1, 30, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FB31 = CAN2_F21R1_FB31_Values<CAN2::F21R1, 31, 1, ReadWriteMode, CAN2F21R1Base> ;
    using FieldValues = CAN2_F21R1_FB31_Values<CAN2::F21R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21R1Pack  = Register<0x40006AE8, 32, ReadWriteMode, CAN2F21R1Base, T...> ;

  struct CAN2F21R2Base {} ;

  struct F21R2 : public RegisterBase<0x40006AEC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F21R2_FB0_Values<CAN2::F21R2, 0, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB1 = CAN2_F21R2_FB1_Values<CAN2::F21R2, 1, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB2 = CAN2_F21R2_FB2_Values<CAN2::F21R2, 2, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB3 = CAN2_F21R2_FB3_Values<CAN2::F21R2, 3, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB4 = CAN2_F21R2_FB4_Values<CAN2::F21R2, 4, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB5 = CAN2_F21R2_FB5_Values<CAN2::F21R2, 5, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB6 = CAN2_F21R2_FB6_Values<CAN2::F21R2, 6, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB7 = CAN2_F21R2_FB7_Values<CAN2::F21R2, 7, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB8 = CAN2_F21R2_FB8_Values<CAN2::F21R2, 8, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB9 = CAN2_F21R2_FB9_Values<CAN2::F21R2, 9, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB10 = CAN2_F21R2_FB10_Values<CAN2::F21R2, 10, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB11 = CAN2_F21R2_FB11_Values<CAN2::F21R2, 11, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB12 = CAN2_F21R2_FB12_Values<CAN2::F21R2, 12, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB13 = CAN2_F21R2_FB13_Values<CAN2::F21R2, 13, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB14 = CAN2_F21R2_FB14_Values<CAN2::F21R2, 14, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB15 = CAN2_F21R2_FB15_Values<CAN2::F21R2, 15, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB16 = CAN2_F21R2_FB16_Values<CAN2::F21R2, 16, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB17 = CAN2_F21R2_FB17_Values<CAN2::F21R2, 17, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB18 = CAN2_F21R2_FB18_Values<CAN2::F21R2, 18, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB19 = CAN2_F21R2_FB19_Values<CAN2::F21R2, 19, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB20 = CAN2_F21R2_FB20_Values<CAN2::F21R2, 20, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB21 = CAN2_F21R2_FB21_Values<CAN2::F21R2, 21, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB22 = CAN2_F21R2_FB22_Values<CAN2::F21R2, 22, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB23 = CAN2_F21R2_FB23_Values<CAN2::F21R2, 23, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB24 = CAN2_F21R2_FB24_Values<CAN2::F21R2, 24, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB25 = CAN2_F21R2_FB25_Values<CAN2::F21R2, 25, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB26 = CAN2_F21R2_FB26_Values<CAN2::F21R2, 26, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB27 = CAN2_F21R2_FB27_Values<CAN2::F21R2, 27, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB28 = CAN2_F21R2_FB28_Values<CAN2::F21R2, 28, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB29 = CAN2_F21R2_FB29_Values<CAN2::F21R2, 29, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB30 = CAN2_F21R2_FB30_Values<CAN2::F21R2, 30, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FB31 = CAN2_F21R2_FB31_Values<CAN2::F21R2, 31, 1, ReadWriteMode, CAN2F21R2Base> ;
    using FieldValues = CAN2_F21R2_FB31_Values<CAN2::F21R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21R2Pack  = Register<0x40006AEC, 32, ReadWriteMode, CAN2F21R2Base, T...> ;

  struct CAN2F22R1Base {} ;

  struct F22R1 : public RegisterBase<0x40006AF0, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F22R1_FB0_Values<CAN2::F22R1, 0, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB1 = CAN2_F22R1_FB1_Values<CAN2::F22R1, 1, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB2 = CAN2_F22R1_FB2_Values<CAN2::F22R1, 2, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB3 = CAN2_F22R1_FB3_Values<CAN2::F22R1, 3, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB4 = CAN2_F22R1_FB4_Values<CAN2::F22R1, 4, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB5 = CAN2_F22R1_FB5_Values<CAN2::F22R1, 5, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB6 = CAN2_F22R1_FB6_Values<CAN2::F22R1, 6, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB7 = CAN2_F22R1_FB7_Values<CAN2::F22R1, 7, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB8 = CAN2_F22R1_FB8_Values<CAN2::F22R1, 8, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB9 = CAN2_F22R1_FB9_Values<CAN2::F22R1, 9, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB10 = CAN2_F22R1_FB10_Values<CAN2::F22R1, 10, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB11 = CAN2_F22R1_FB11_Values<CAN2::F22R1, 11, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB12 = CAN2_F22R1_FB12_Values<CAN2::F22R1, 12, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB13 = CAN2_F22R1_FB13_Values<CAN2::F22R1, 13, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB14 = CAN2_F22R1_FB14_Values<CAN2::F22R1, 14, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB15 = CAN2_F22R1_FB15_Values<CAN2::F22R1, 15, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB16 = CAN2_F22R1_FB16_Values<CAN2::F22R1, 16, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB17 = CAN2_F22R1_FB17_Values<CAN2::F22R1, 17, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB18 = CAN2_F22R1_FB18_Values<CAN2::F22R1, 18, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB19 = CAN2_F22R1_FB19_Values<CAN2::F22R1, 19, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB20 = CAN2_F22R1_FB20_Values<CAN2::F22R1, 20, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB21 = CAN2_F22R1_FB21_Values<CAN2::F22R1, 21, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB22 = CAN2_F22R1_FB22_Values<CAN2::F22R1, 22, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB23 = CAN2_F22R1_FB23_Values<CAN2::F22R1, 23, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB24 = CAN2_F22R1_FB24_Values<CAN2::F22R1, 24, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB25 = CAN2_F22R1_FB25_Values<CAN2::F22R1, 25, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB26 = CAN2_F22R1_FB26_Values<CAN2::F22R1, 26, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB27 = CAN2_F22R1_FB27_Values<CAN2::F22R1, 27, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB28 = CAN2_F22R1_FB28_Values<CAN2::F22R1, 28, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB29 = CAN2_F22R1_FB29_Values<CAN2::F22R1, 29, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB30 = CAN2_F22R1_FB30_Values<CAN2::F22R1, 30, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FB31 = CAN2_F22R1_FB31_Values<CAN2::F22R1, 31, 1, ReadWriteMode, CAN2F22R1Base> ;
    using FieldValues = CAN2_F22R1_FB31_Values<CAN2::F22R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22R1Pack  = Register<0x40006AF0, 32, ReadWriteMode, CAN2F22R1Base, T...> ;

  struct CAN2F22R2Base {} ;

  struct F22R2 : public RegisterBase<0x40006AF4, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F22R2_FB0_Values<CAN2::F22R2, 0, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB1 = CAN2_F22R2_FB1_Values<CAN2::F22R2, 1, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB2 = CAN2_F22R2_FB2_Values<CAN2::F22R2, 2, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB3 = CAN2_F22R2_FB3_Values<CAN2::F22R2, 3, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB4 = CAN2_F22R2_FB4_Values<CAN2::F22R2, 4, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB5 = CAN2_F22R2_FB5_Values<CAN2::F22R2, 5, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB6 = CAN2_F22R2_FB6_Values<CAN2::F22R2, 6, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB7 = CAN2_F22R2_FB7_Values<CAN2::F22R2, 7, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB8 = CAN2_F22R2_FB8_Values<CAN2::F22R2, 8, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB9 = CAN2_F22R2_FB9_Values<CAN2::F22R2, 9, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB10 = CAN2_F22R2_FB10_Values<CAN2::F22R2, 10, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB11 = CAN2_F22R2_FB11_Values<CAN2::F22R2, 11, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB12 = CAN2_F22R2_FB12_Values<CAN2::F22R2, 12, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB13 = CAN2_F22R2_FB13_Values<CAN2::F22R2, 13, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB14 = CAN2_F22R2_FB14_Values<CAN2::F22R2, 14, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB15 = CAN2_F22R2_FB15_Values<CAN2::F22R2, 15, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB16 = CAN2_F22R2_FB16_Values<CAN2::F22R2, 16, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB17 = CAN2_F22R2_FB17_Values<CAN2::F22R2, 17, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB18 = CAN2_F22R2_FB18_Values<CAN2::F22R2, 18, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB19 = CAN2_F22R2_FB19_Values<CAN2::F22R2, 19, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB20 = CAN2_F22R2_FB20_Values<CAN2::F22R2, 20, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB21 = CAN2_F22R2_FB21_Values<CAN2::F22R2, 21, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB22 = CAN2_F22R2_FB22_Values<CAN2::F22R2, 22, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB23 = CAN2_F22R2_FB23_Values<CAN2::F22R2, 23, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB24 = CAN2_F22R2_FB24_Values<CAN2::F22R2, 24, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB25 = CAN2_F22R2_FB25_Values<CAN2::F22R2, 25, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB26 = CAN2_F22R2_FB26_Values<CAN2::F22R2, 26, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB27 = CAN2_F22R2_FB27_Values<CAN2::F22R2, 27, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB28 = CAN2_F22R2_FB28_Values<CAN2::F22R2, 28, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB29 = CAN2_F22R2_FB29_Values<CAN2::F22R2, 29, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB30 = CAN2_F22R2_FB30_Values<CAN2::F22R2, 30, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FB31 = CAN2_F22R2_FB31_Values<CAN2::F22R2, 31, 1, ReadWriteMode, CAN2F22R2Base> ;
    using FieldValues = CAN2_F22R2_FB31_Values<CAN2::F22R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22R2Pack  = Register<0x40006AF4, 32, ReadWriteMode, CAN2F22R2Base, T...> ;

  struct CAN2F23R1Base {} ;

  struct F23R1 : public RegisterBase<0x40006AF8, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F23R1_FB0_Values<CAN2::F23R1, 0, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB1 = CAN2_F23R1_FB1_Values<CAN2::F23R1, 1, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB2 = CAN2_F23R1_FB2_Values<CAN2::F23R1, 2, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB3 = CAN2_F23R1_FB3_Values<CAN2::F23R1, 3, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB4 = CAN2_F23R1_FB4_Values<CAN2::F23R1, 4, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB5 = CAN2_F23R1_FB5_Values<CAN2::F23R1, 5, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB6 = CAN2_F23R1_FB6_Values<CAN2::F23R1, 6, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB7 = CAN2_F23R1_FB7_Values<CAN2::F23R1, 7, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB8 = CAN2_F23R1_FB8_Values<CAN2::F23R1, 8, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB9 = CAN2_F23R1_FB9_Values<CAN2::F23R1, 9, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB10 = CAN2_F23R1_FB10_Values<CAN2::F23R1, 10, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB11 = CAN2_F23R1_FB11_Values<CAN2::F23R1, 11, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB12 = CAN2_F23R1_FB12_Values<CAN2::F23R1, 12, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB13 = CAN2_F23R1_FB13_Values<CAN2::F23R1, 13, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB14 = CAN2_F23R1_FB14_Values<CAN2::F23R1, 14, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB15 = CAN2_F23R1_FB15_Values<CAN2::F23R1, 15, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB16 = CAN2_F23R1_FB16_Values<CAN2::F23R1, 16, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB17 = CAN2_F23R1_FB17_Values<CAN2::F23R1, 17, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB18 = CAN2_F23R1_FB18_Values<CAN2::F23R1, 18, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB19 = CAN2_F23R1_FB19_Values<CAN2::F23R1, 19, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB20 = CAN2_F23R1_FB20_Values<CAN2::F23R1, 20, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB21 = CAN2_F23R1_FB21_Values<CAN2::F23R1, 21, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB22 = CAN2_F23R1_FB22_Values<CAN2::F23R1, 22, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB23 = CAN2_F23R1_FB23_Values<CAN2::F23R1, 23, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB24 = CAN2_F23R1_FB24_Values<CAN2::F23R1, 24, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB25 = CAN2_F23R1_FB25_Values<CAN2::F23R1, 25, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB26 = CAN2_F23R1_FB26_Values<CAN2::F23R1, 26, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB27 = CAN2_F23R1_FB27_Values<CAN2::F23R1, 27, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB28 = CAN2_F23R1_FB28_Values<CAN2::F23R1, 28, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB29 = CAN2_F23R1_FB29_Values<CAN2::F23R1, 29, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB30 = CAN2_F23R1_FB30_Values<CAN2::F23R1, 30, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FB31 = CAN2_F23R1_FB31_Values<CAN2::F23R1, 31, 1, ReadWriteMode, CAN2F23R1Base> ;
    using FieldValues = CAN2_F23R1_FB31_Values<CAN2::F23R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23R1Pack  = Register<0x40006AF8, 32, ReadWriteMode, CAN2F23R1Base, T...> ;

  struct CAN2F23R2Base {} ;

  struct F23R2 : public RegisterBase<0x40006AFC, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F23R2_FB0_Values<CAN2::F23R2, 0, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB1 = CAN2_F23R2_FB1_Values<CAN2::F23R2, 1, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB2 = CAN2_F23R2_FB2_Values<CAN2::F23R2, 2, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB3 = CAN2_F23R2_FB3_Values<CAN2::F23R2, 3, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB4 = CAN2_F23R2_FB4_Values<CAN2::F23R2, 4, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB5 = CAN2_F23R2_FB5_Values<CAN2::F23R2, 5, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB6 = CAN2_F23R2_FB6_Values<CAN2::F23R2, 6, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB7 = CAN2_F23R2_FB7_Values<CAN2::F23R2, 7, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB8 = CAN2_F23R2_FB8_Values<CAN2::F23R2, 8, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB9 = CAN2_F23R2_FB9_Values<CAN2::F23R2, 9, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB10 = CAN2_F23R2_FB10_Values<CAN2::F23R2, 10, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB11 = CAN2_F23R2_FB11_Values<CAN2::F23R2, 11, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB12 = CAN2_F23R2_FB12_Values<CAN2::F23R2, 12, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB13 = CAN2_F23R2_FB13_Values<CAN2::F23R2, 13, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB14 = CAN2_F23R2_FB14_Values<CAN2::F23R2, 14, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB15 = CAN2_F23R2_FB15_Values<CAN2::F23R2, 15, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB16 = CAN2_F23R2_FB16_Values<CAN2::F23R2, 16, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB17 = CAN2_F23R2_FB17_Values<CAN2::F23R2, 17, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB18 = CAN2_F23R2_FB18_Values<CAN2::F23R2, 18, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB19 = CAN2_F23R2_FB19_Values<CAN2::F23R2, 19, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB20 = CAN2_F23R2_FB20_Values<CAN2::F23R2, 20, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB21 = CAN2_F23R2_FB21_Values<CAN2::F23R2, 21, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB22 = CAN2_F23R2_FB22_Values<CAN2::F23R2, 22, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB23 = CAN2_F23R2_FB23_Values<CAN2::F23R2, 23, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB24 = CAN2_F23R2_FB24_Values<CAN2::F23R2, 24, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB25 = CAN2_F23R2_FB25_Values<CAN2::F23R2, 25, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB26 = CAN2_F23R2_FB26_Values<CAN2::F23R2, 26, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB27 = CAN2_F23R2_FB27_Values<CAN2::F23R2, 27, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB28 = CAN2_F23R2_FB28_Values<CAN2::F23R2, 28, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB29 = CAN2_F23R2_FB29_Values<CAN2::F23R2, 29, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB30 = CAN2_F23R2_FB30_Values<CAN2::F23R2, 30, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FB31 = CAN2_F23R2_FB31_Values<CAN2::F23R2, 31, 1, ReadWriteMode, CAN2F23R2Base> ;
    using FieldValues = CAN2_F23R2_FB31_Values<CAN2::F23R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23R2Pack  = Register<0x40006AFC, 32, ReadWriteMode, CAN2F23R2Base, T...> ;

  struct CAN2F24R1Base {} ;

  struct F24R1 : public RegisterBase<0x40006B00, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F24R1_FB0_Values<CAN2::F24R1, 0, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB1 = CAN2_F24R1_FB1_Values<CAN2::F24R1, 1, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB2 = CAN2_F24R1_FB2_Values<CAN2::F24R1, 2, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB3 = CAN2_F24R1_FB3_Values<CAN2::F24R1, 3, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB4 = CAN2_F24R1_FB4_Values<CAN2::F24R1, 4, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB5 = CAN2_F24R1_FB5_Values<CAN2::F24R1, 5, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB6 = CAN2_F24R1_FB6_Values<CAN2::F24R1, 6, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB7 = CAN2_F24R1_FB7_Values<CAN2::F24R1, 7, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB8 = CAN2_F24R1_FB8_Values<CAN2::F24R1, 8, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB9 = CAN2_F24R1_FB9_Values<CAN2::F24R1, 9, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB10 = CAN2_F24R1_FB10_Values<CAN2::F24R1, 10, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB11 = CAN2_F24R1_FB11_Values<CAN2::F24R1, 11, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB12 = CAN2_F24R1_FB12_Values<CAN2::F24R1, 12, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB13 = CAN2_F24R1_FB13_Values<CAN2::F24R1, 13, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB14 = CAN2_F24R1_FB14_Values<CAN2::F24R1, 14, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB15 = CAN2_F24R1_FB15_Values<CAN2::F24R1, 15, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB16 = CAN2_F24R1_FB16_Values<CAN2::F24R1, 16, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB17 = CAN2_F24R1_FB17_Values<CAN2::F24R1, 17, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB18 = CAN2_F24R1_FB18_Values<CAN2::F24R1, 18, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB19 = CAN2_F24R1_FB19_Values<CAN2::F24R1, 19, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB20 = CAN2_F24R1_FB20_Values<CAN2::F24R1, 20, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB21 = CAN2_F24R1_FB21_Values<CAN2::F24R1, 21, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB22 = CAN2_F24R1_FB22_Values<CAN2::F24R1, 22, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB23 = CAN2_F24R1_FB23_Values<CAN2::F24R1, 23, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB24 = CAN2_F24R1_FB24_Values<CAN2::F24R1, 24, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB25 = CAN2_F24R1_FB25_Values<CAN2::F24R1, 25, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB26 = CAN2_F24R1_FB26_Values<CAN2::F24R1, 26, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB27 = CAN2_F24R1_FB27_Values<CAN2::F24R1, 27, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB28 = CAN2_F24R1_FB28_Values<CAN2::F24R1, 28, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB29 = CAN2_F24R1_FB29_Values<CAN2::F24R1, 29, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB30 = CAN2_F24R1_FB30_Values<CAN2::F24R1, 30, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FB31 = CAN2_F24R1_FB31_Values<CAN2::F24R1, 31, 1, ReadWriteMode, CAN2F24R1Base> ;
    using FieldValues = CAN2_F24R1_FB31_Values<CAN2::F24R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24R1Pack  = Register<0x40006B00, 32, ReadWriteMode, CAN2F24R1Base, T...> ;

  struct CAN2F24R2Base {} ;

  struct F24R2 : public RegisterBase<0x40006B04, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F24R2_FB0_Values<CAN2::F24R2, 0, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB1 = CAN2_F24R2_FB1_Values<CAN2::F24R2, 1, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB2 = CAN2_F24R2_FB2_Values<CAN2::F24R2, 2, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB3 = CAN2_F24R2_FB3_Values<CAN2::F24R2, 3, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB4 = CAN2_F24R2_FB4_Values<CAN2::F24R2, 4, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB5 = CAN2_F24R2_FB5_Values<CAN2::F24R2, 5, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB6 = CAN2_F24R2_FB6_Values<CAN2::F24R2, 6, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB7 = CAN2_F24R2_FB7_Values<CAN2::F24R2, 7, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB8 = CAN2_F24R2_FB8_Values<CAN2::F24R2, 8, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB9 = CAN2_F24R2_FB9_Values<CAN2::F24R2, 9, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB10 = CAN2_F24R2_FB10_Values<CAN2::F24R2, 10, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB11 = CAN2_F24R2_FB11_Values<CAN2::F24R2, 11, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB12 = CAN2_F24R2_FB12_Values<CAN2::F24R2, 12, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB13 = CAN2_F24R2_FB13_Values<CAN2::F24R2, 13, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB14 = CAN2_F24R2_FB14_Values<CAN2::F24R2, 14, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB15 = CAN2_F24R2_FB15_Values<CAN2::F24R2, 15, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB16 = CAN2_F24R2_FB16_Values<CAN2::F24R2, 16, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB17 = CAN2_F24R2_FB17_Values<CAN2::F24R2, 17, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB18 = CAN2_F24R2_FB18_Values<CAN2::F24R2, 18, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB19 = CAN2_F24R2_FB19_Values<CAN2::F24R2, 19, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB20 = CAN2_F24R2_FB20_Values<CAN2::F24R2, 20, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB21 = CAN2_F24R2_FB21_Values<CAN2::F24R2, 21, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB22 = CAN2_F24R2_FB22_Values<CAN2::F24R2, 22, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB23 = CAN2_F24R2_FB23_Values<CAN2::F24R2, 23, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB24 = CAN2_F24R2_FB24_Values<CAN2::F24R2, 24, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB25 = CAN2_F24R2_FB25_Values<CAN2::F24R2, 25, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB26 = CAN2_F24R2_FB26_Values<CAN2::F24R2, 26, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB27 = CAN2_F24R2_FB27_Values<CAN2::F24R2, 27, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB28 = CAN2_F24R2_FB28_Values<CAN2::F24R2, 28, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB29 = CAN2_F24R2_FB29_Values<CAN2::F24R2, 29, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB30 = CAN2_F24R2_FB30_Values<CAN2::F24R2, 30, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FB31 = CAN2_F24R2_FB31_Values<CAN2::F24R2, 31, 1, ReadWriteMode, CAN2F24R2Base> ;
    using FieldValues = CAN2_F24R2_FB31_Values<CAN2::F24R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24R2Pack  = Register<0x40006B04, 32, ReadWriteMode, CAN2F24R2Base, T...> ;

  struct CAN2F25R1Base {} ;

  struct F25R1 : public RegisterBase<0x40006B08, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F25R1_FB0_Values<CAN2::F25R1, 0, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB1 = CAN2_F25R1_FB1_Values<CAN2::F25R1, 1, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB2 = CAN2_F25R1_FB2_Values<CAN2::F25R1, 2, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB3 = CAN2_F25R1_FB3_Values<CAN2::F25R1, 3, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB4 = CAN2_F25R1_FB4_Values<CAN2::F25R1, 4, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB5 = CAN2_F25R1_FB5_Values<CAN2::F25R1, 5, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB6 = CAN2_F25R1_FB6_Values<CAN2::F25R1, 6, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB7 = CAN2_F25R1_FB7_Values<CAN2::F25R1, 7, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB8 = CAN2_F25R1_FB8_Values<CAN2::F25R1, 8, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB9 = CAN2_F25R1_FB9_Values<CAN2::F25R1, 9, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB10 = CAN2_F25R1_FB10_Values<CAN2::F25R1, 10, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB11 = CAN2_F25R1_FB11_Values<CAN2::F25R1, 11, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB12 = CAN2_F25R1_FB12_Values<CAN2::F25R1, 12, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB13 = CAN2_F25R1_FB13_Values<CAN2::F25R1, 13, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB14 = CAN2_F25R1_FB14_Values<CAN2::F25R1, 14, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB15 = CAN2_F25R1_FB15_Values<CAN2::F25R1, 15, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB16 = CAN2_F25R1_FB16_Values<CAN2::F25R1, 16, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB17 = CAN2_F25R1_FB17_Values<CAN2::F25R1, 17, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB18 = CAN2_F25R1_FB18_Values<CAN2::F25R1, 18, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB19 = CAN2_F25R1_FB19_Values<CAN2::F25R1, 19, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB20 = CAN2_F25R1_FB20_Values<CAN2::F25R1, 20, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB21 = CAN2_F25R1_FB21_Values<CAN2::F25R1, 21, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB22 = CAN2_F25R1_FB22_Values<CAN2::F25R1, 22, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB23 = CAN2_F25R1_FB23_Values<CAN2::F25R1, 23, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB24 = CAN2_F25R1_FB24_Values<CAN2::F25R1, 24, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB25 = CAN2_F25R1_FB25_Values<CAN2::F25R1, 25, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB26 = CAN2_F25R1_FB26_Values<CAN2::F25R1, 26, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB27 = CAN2_F25R1_FB27_Values<CAN2::F25R1, 27, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB28 = CAN2_F25R1_FB28_Values<CAN2::F25R1, 28, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB29 = CAN2_F25R1_FB29_Values<CAN2::F25R1, 29, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB30 = CAN2_F25R1_FB30_Values<CAN2::F25R1, 30, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FB31 = CAN2_F25R1_FB31_Values<CAN2::F25R1, 31, 1, ReadWriteMode, CAN2F25R1Base> ;
    using FieldValues = CAN2_F25R1_FB31_Values<CAN2::F25R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25R1Pack  = Register<0x40006B08, 32, ReadWriteMode, CAN2F25R1Base, T...> ;

  struct CAN2F25R2Base {} ;

  struct F25R2 : public RegisterBase<0x40006B0C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F25R2_FB0_Values<CAN2::F25R2, 0, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB1 = CAN2_F25R2_FB1_Values<CAN2::F25R2, 1, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB2 = CAN2_F25R2_FB2_Values<CAN2::F25R2, 2, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB3 = CAN2_F25R2_FB3_Values<CAN2::F25R2, 3, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB4 = CAN2_F25R2_FB4_Values<CAN2::F25R2, 4, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB5 = CAN2_F25R2_FB5_Values<CAN2::F25R2, 5, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB6 = CAN2_F25R2_FB6_Values<CAN2::F25R2, 6, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB7 = CAN2_F25R2_FB7_Values<CAN2::F25R2, 7, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB8 = CAN2_F25R2_FB8_Values<CAN2::F25R2, 8, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB9 = CAN2_F25R2_FB9_Values<CAN2::F25R2, 9, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB10 = CAN2_F25R2_FB10_Values<CAN2::F25R2, 10, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB11 = CAN2_F25R2_FB11_Values<CAN2::F25R2, 11, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB12 = CAN2_F25R2_FB12_Values<CAN2::F25R2, 12, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB13 = CAN2_F25R2_FB13_Values<CAN2::F25R2, 13, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB14 = CAN2_F25R2_FB14_Values<CAN2::F25R2, 14, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB15 = CAN2_F25R2_FB15_Values<CAN2::F25R2, 15, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB16 = CAN2_F25R2_FB16_Values<CAN2::F25R2, 16, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB17 = CAN2_F25R2_FB17_Values<CAN2::F25R2, 17, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB18 = CAN2_F25R2_FB18_Values<CAN2::F25R2, 18, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB19 = CAN2_F25R2_FB19_Values<CAN2::F25R2, 19, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB20 = CAN2_F25R2_FB20_Values<CAN2::F25R2, 20, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB21 = CAN2_F25R2_FB21_Values<CAN2::F25R2, 21, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB22 = CAN2_F25R2_FB22_Values<CAN2::F25R2, 22, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB23 = CAN2_F25R2_FB23_Values<CAN2::F25R2, 23, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB24 = CAN2_F25R2_FB24_Values<CAN2::F25R2, 24, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB25 = CAN2_F25R2_FB25_Values<CAN2::F25R2, 25, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB26 = CAN2_F25R2_FB26_Values<CAN2::F25R2, 26, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB27 = CAN2_F25R2_FB27_Values<CAN2::F25R2, 27, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB28 = CAN2_F25R2_FB28_Values<CAN2::F25R2, 28, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB29 = CAN2_F25R2_FB29_Values<CAN2::F25R2, 29, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB30 = CAN2_F25R2_FB30_Values<CAN2::F25R2, 30, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FB31 = CAN2_F25R2_FB31_Values<CAN2::F25R2, 31, 1, ReadWriteMode, CAN2F25R2Base> ;
    using FieldValues = CAN2_F25R2_FB31_Values<CAN2::F25R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25R2Pack  = Register<0x40006B0C, 32, ReadWriteMode, CAN2F25R2Base, T...> ;

  struct CAN2F26R1Base {} ;

  struct F26R1 : public RegisterBase<0x40006B10, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F26R1_FB0_Values<CAN2::F26R1, 0, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB1 = CAN2_F26R1_FB1_Values<CAN2::F26R1, 1, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB2 = CAN2_F26R1_FB2_Values<CAN2::F26R1, 2, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB3 = CAN2_F26R1_FB3_Values<CAN2::F26R1, 3, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB4 = CAN2_F26R1_FB4_Values<CAN2::F26R1, 4, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB5 = CAN2_F26R1_FB5_Values<CAN2::F26R1, 5, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB6 = CAN2_F26R1_FB6_Values<CAN2::F26R1, 6, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB7 = CAN2_F26R1_FB7_Values<CAN2::F26R1, 7, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB8 = CAN2_F26R1_FB8_Values<CAN2::F26R1, 8, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB9 = CAN2_F26R1_FB9_Values<CAN2::F26R1, 9, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB10 = CAN2_F26R1_FB10_Values<CAN2::F26R1, 10, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB11 = CAN2_F26R1_FB11_Values<CAN2::F26R1, 11, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB12 = CAN2_F26R1_FB12_Values<CAN2::F26R1, 12, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB13 = CAN2_F26R1_FB13_Values<CAN2::F26R1, 13, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB14 = CAN2_F26R1_FB14_Values<CAN2::F26R1, 14, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB15 = CAN2_F26R1_FB15_Values<CAN2::F26R1, 15, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB16 = CAN2_F26R1_FB16_Values<CAN2::F26R1, 16, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB17 = CAN2_F26R1_FB17_Values<CAN2::F26R1, 17, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB18 = CAN2_F26R1_FB18_Values<CAN2::F26R1, 18, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB19 = CAN2_F26R1_FB19_Values<CAN2::F26R1, 19, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB20 = CAN2_F26R1_FB20_Values<CAN2::F26R1, 20, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB21 = CAN2_F26R1_FB21_Values<CAN2::F26R1, 21, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB22 = CAN2_F26R1_FB22_Values<CAN2::F26R1, 22, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB23 = CAN2_F26R1_FB23_Values<CAN2::F26R1, 23, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB24 = CAN2_F26R1_FB24_Values<CAN2::F26R1, 24, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB25 = CAN2_F26R1_FB25_Values<CAN2::F26R1, 25, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB26 = CAN2_F26R1_FB26_Values<CAN2::F26R1, 26, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB27 = CAN2_F26R1_FB27_Values<CAN2::F26R1, 27, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB28 = CAN2_F26R1_FB28_Values<CAN2::F26R1, 28, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB29 = CAN2_F26R1_FB29_Values<CAN2::F26R1, 29, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB30 = CAN2_F26R1_FB30_Values<CAN2::F26R1, 30, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FB31 = CAN2_F26R1_FB31_Values<CAN2::F26R1, 31, 1, ReadWriteMode, CAN2F26R1Base> ;
    using FieldValues = CAN2_F26R1_FB31_Values<CAN2::F26R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26R1Pack  = Register<0x40006B10, 32, ReadWriteMode, CAN2F26R1Base, T...> ;

  struct CAN2F26R2Base {} ;

  struct F26R2 : public RegisterBase<0x40006B14, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F26R2_FB0_Values<CAN2::F26R2, 0, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB1 = CAN2_F26R2_FB1_Values<CAN2::F26R2, 1, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB2 = CAN2_F26R2_FB2_Values<CAN2::F26R2, 2, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB3 = CAN2_F26R2_FB3_Values<CAN2::F26R2, 3, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB4 = CAN2_F26R2_FB4_Values<CAN2::F26R2, 4, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB5 = CAN2_F26R2_FB5_Values<CAN2::F26R2, 5, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB6 = CAN2_F26R2_FB6_Values<CAN2::F26R2, 6, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB7 = CAN2_F26R2_FB7_Values<CAN2::F26R2, 7, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB8 = CAN2_F26R2_FB8_Values<CAN2::F26R2, 8, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB9 = CAN2_F26R2_FB9_Values<CAN2::F26R2, 9, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB10 = CAN2_F26R2_FB10_Values<CAN2::F26R2, 10, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB11 = CAN2_F26R2_FB11_Values<CAN2::F26R2, 11, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB12 = CAN2_F26R2_FB12_Values<CAN2::F26R2, 12, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB13 = CAN2_F26R2_FB13_Values<CAN2::F26R2, 13, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB14 = CAN2_F26R2_FB14_Values<CAN2::F26R2, 14, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB15 = CAN2_F26R2_FB15_Values<CAN2::F26R2, 15, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB16 = CAN2_F26R2_FB16_Values<CAN2::F26R2, 16, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB17 = CAN2_F26R2_FB17_Values<CAN2::F26R2, 17, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB18 = CAN2_F26R2_FB18_Values<CAN2::F26R2, 18, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB19 = CAN2_F26R2_FB19_Values<CAN2::F26R2, 19, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB20 = CAN2_F26R2_FB20_Values<CAN2::F26R2, 20, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB21 = CAN2_F26R2_FB21_Values<CAN2::F26R2, 21, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB22 = CAN2_F26R2_FB22_Values<CAN2::F26R2, 22, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB23 = CAN2_F26R2_FB23_Values<CAN2::F26R2, 23, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB24 = CAN2_F26R2_FB24_Values<CAN2::F26R2, 24, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB25 = CAN2_F26R2_FB25_Values<CAN2::F26R2, 25, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB26 = CAN2_F26R2_FB26_Values<CAN2::F26R2, 26, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB27 = CAN2_F26R2_FB27_Values<CAN2::F26R2, 27, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB28 = CAN2_F26R2_FB28_Values<CAN2::F26R2, 28, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB29 = CAN2_F26R2_FB29_Values<CAN2::F26R2, 29, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB30 = CAN2_F26R2_FB30_Values<CAN2::F26R2, 30, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FB31 = CAN2_F26R2_FB31_Values<CAN2::F26R2, 31, 1, ReadWriteMode, CAN2F26R2Base> ;
    using FieldValues = CAN2_F26R2_FB31_Values<CAN2::F26R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26R2Pack  = Register<0x40006B14, 32, ReadWriteMode, CAN2F26R2Base, T...> ;

  struct CAN2F27R1Base {} ;

  struct F27R1 : public RegisterBase<0x40006B18, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F27R1_FB0_Values<CAN2::F27R1, 0, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB1 = CAN2_F27R1_FB1_Values<CAN2::F27R1, 1, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB2 = CAN2_F27R1_FB2_Values<CAN2::F27R1, 2, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB3 = CAN2_F27R1_FB3_Values<CAN2::F27R1, 3, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB4 = CAN2_F27R1_FB4_Values<CAN2::F27R1, 4, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB5 = CAN2_F27R1_FB5_Values<CAN2::F27R1, 5, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB6 = CAN2_F27R1_FB6_Values<CAN2::F27R1, 6, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB7 = CAN2_F27R1_FB7_Values<CAN2::F27R1, 7, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB8 = CAN2_F27R1_FB8_Values<CAN2::F27R1, 8, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB9 = CAN2_F27R1_FB9_Values<CAN2::F27R1, 9, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB10 = CAN2_F27R1_FB10_Values<CAN2::F27R1, 10, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB11 = CAN2_F27R1_FB11_Values<CAN2::F27R1, 11, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB12 = CAN2_F27R1_FB12_Values<CAN2::F27R1, 12, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB13 = CAN2_F27R1_FB13_Values<CAN2::F27R1, 13, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB14 = CAN2_F27R1_FB14_Values<CAN2::F27R1, 14, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB15 = CAN2_F27R1_FB15_Values<CAN2::F27R1, 15, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB16 = CAN2_F27R1_FB16_Values<CAN2::F27R1, 16, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB17 = CAN2_F27R1_FB17_Values<CAN2::F27R1, 17, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB18 = CAN2_F27R1_FB18_Values<CAN2::F27R1, 18, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB19 = CAN2_F27R1_FB19_Values<CAN2::F27R1, 19, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB20 = CAN2_F27R1_FB20_Values<CAN2::F27R1, 20, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB21 = CAN2_F27R1_FB21_Values<CAN2::F27R1, 21, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB22 = CAN2_F27R1_FB22_Values<CAN2::F27R1, 22, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB23 = CAN2_F27R1_FB23_Values<CAN2::F27R1, 23, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB24 = CAN2_F27R1_FB24_Values<CAN2::F27R1, 24, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB25 = CAN2_F27R1_FB25_Values<CAN2::F27R1, 25, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB26 = CAN2_F27R1_FB26_Values<CAN2::F27R1, 26, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB27 = CAN2_F27R1_FB27_Values<CAN2::F27R1, 27, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB28 = CAN2_F27R1_FB28_Values<CAN2::F27R1, 28, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB29 = CAN2_F27R1_FB29_Values<CAN2::F27R1, 29, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB30 = CAN2_F27R1_FB30_Values<CAN2::F27R1, 30, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FB31 = CAN2_F27R1_FB31_Values<CAN2::F27R1, 31, 1, ReadWriteMode, CAN2F27R1Base> ;
    using FieldValues = CAN2_F27R1_FB31_Values<CAN2::F27R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27R1Pack  = Register<0x40006B18, 32, ReadWriteMode, CAN2F27R1Base, T...> ;

  struct CAN2F27R2Base {} ;

  struct F27R2 : public RegisterBase<0x40006B1C, 32, ReadWriteMode>
  {
    using FB0 = CAN2_F27R2_FB0_Values<CAN2::F27R2, 0, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB1 = CAN2_F27R2_FB1_Values<CAN2::F27R2, 1, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB2 = CAN2_F27R2_FB2_Values<CAN2::F27R2, 2, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB3 = CAN2_F27R2_FB3_Values<CAN2::F27R2, 3, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB4 = CAN2_F27R2_FB4_Values<CAN2::F27R2, 4, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB5 = CAN2_F27R2_FB5_Values<CAN2::F27R2, 5, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB6 = CAN2_F27R2_FB6_Values<CAN2::F27R2, 6, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB7 = CAN2_F27R2_FB7_Values<CAN2::F27R2, 7, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB8 = CAN2_F27R2_FB8_Values<CAN2::F27R2, 8, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB9 = CAN2_F27R2_FB9_Values<CAN2::F27R2, 9, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB10 = CAN2_F27R2_FB10_Values<CAN2::F27R2, 10, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB11 = CAN2_F27R2_FB11_Values<CAN2::F27R2, 11, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB12 = CAN2_F27R2_FB12_Values<CAN2::F27R2, 12, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB13 = CAN2_F27R2_FB13_Values<CAN2::F27R2, 13, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB14 = CAN2_F27R2_FB14_Values<CAN2::F27R2, 14, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB15 = CAN2_F27R2_FB15_Values<CAN2::F27R2, 15, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB16 = CAN2_F27R2_FB16_Values<CAN2::F27R2, 16, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB17 = CAN2_F27R2_FB17_Values<CAN2::F27R2, 17, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB18 = CAN2_F27R2_FB18_Values<CAN2::F27R2, 18, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB19 = CAN2_F27R2_FB19_Values<CAN2::F27R2, 19, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB20 = CAN2_F27R2_FB20_Values<CAN2::F27R2, 20, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB21 = CAN2_F27R2_FB21_Values<CAN2::F27R2, 21, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB22 = CAN2_F27R2_FB22_Values<CAN2::F27R2, 22, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB23 = CAN2_F27R2_FB23_Values<CAN2::F27R2, 23, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB24 = CAN2_F27R2_FB24_Values<CAN2::F27R2, 24, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB25 = CAN2_F27R2_FB25_Values<CAN2::F27R2, 25, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB26 = CAN2_F27R2_FB26_Values<CAN2::F27R2, 26, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB27 = CAN2_F27R2_FB27_Values<CAN2::F27R2, 27, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB28 = CAN2_F27R2_FB28_Values<CAN2::F27R2, 28, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB29 = CAN2_F27R2_FB29_Values<CAN2::F27R2, 29, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB30 = CAN2_F27R2_FB30_Values<CAN2::F27R2, 30, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FB31 = CAN2_F27R2_FB31_Values<CAN2::F27R2, 31, 1, ReadWriteMode, CAN2F27R2Base> ;
    using FieldValues = CAN2_F27R2_FB31_Values<CAN2::F27R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27R2Pack  = Register<0x40006B1C, 32, ReadWriteMode, CAN2F27R2Base, T...> ;

} ;

#endif //#if !defined(CAN2REGISTERS_HPP)
