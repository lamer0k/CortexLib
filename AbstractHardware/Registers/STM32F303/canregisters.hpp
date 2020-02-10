/*******************************************************************************
* Filename      : canregisters.hpp
*
* Details       : Controller area network. This header file is auto-generated
*                 for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(CANREGISTERS_HPP)
#define CANREGISTERS_HPP

#include "canfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAN
{
  struct CANMCRBase {} ;

  struct MCR : public RegisterBase<0x40006400, 32, ReadWriteMode>
  {
    using DBF = CAN_MCR_DBF_Values<CAN::MCR, 16, 1, ReadWriteMode, CANMCRBase> ;
    using RESET = CAN_MCR_RESET_Values<CAN::MCR, 15, 1, ReadWriteMode, CANMCRBase> ;
    using TTCM = CAN_MCR_TTCM_Values<CAN::MCR, 7, 1, ReadWriteMode, CANMCRBase> ;
    using ABOM = CAN_MCR_ABOM_Values<CAN::MCR, 6, 1, ReadWriteMode, CANMCRBase> ;
    using AWUM = CAN_MCR_AWUM_Values<CAN::MCR, 5, 1, ReadWriteMode, CANMCRBase> ;
    using NART = CAN_MCR_NART_Values<CAN::MCR, 4, 1, ReadWriteMode, CANMCRBase> ;
    using RFLM = CAN_MCR_RFLM_Values<CAN::MCR, 3, 1, ReadWriteMode, CANMCRBase> ;
    using TXFP = CAN_MCR_TXFP_Values<CAN::MCR, 2, 1, ReadWriteMode, CANMCRBase> ;
    using SLEEP = CAN_MCR_SLEEP_Values<CAN::MCR, 1, 1, ReadWriteMode, CANMCRBase> ;
    using INRQ = CAN_MCR_INRQ_Values<CAN::MCR, 0, 1, ReadWriteMode, CANMCRBase> ;
    using FieldValues = CAN_MCR_INRQ_Values<CAN::MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCRPack  = Register<0x40006400, 32, ReadWriteMode, CANMCRBase, T...> ;

  struct CANMSRBase {} ;

  struct MSR : public RegisterBase<0x40006404, 32, ReadWriteMode>
  {
    using RX = CAN_MSR_RX_Values<CAN::MSR, 11, 1, ReadMode, CANMSRBase> ;
    using SAMP = CAN_MSR_SAMP_Values<CAN::MSR, 10, 1, ReadMode, CANMSRBase> ;
    using RXM = CAN_MSR_RXM_Values<CAN::MSR, 9, 1, ReadMode, CANMSRBase> ;
    using TXM = CAN_MSR_TXM_Values<CAN::MSR, 8, 1, ReadMode, CANMSRBase> ;
    using SLAKI = CAN_MSR_SLAKI_Values<CAN::MSR, 4, 1, ReadWriteMode, CANMSRBase> ;
    using WKUI = CAN_MSR_WKUI_Values<CAN::MSR, 3, 1, ReadWriteMode, CANMSRBase> ;
    using ERRI = CAN_MSR_ERRI_Values<CAN::MSR, 2, 1, ReadWriteMode, CANMSRBase> ;
    using SLAK = CAN_MSR_SLAK_Values<CAN::MSR, 1, 1, ReadMode, CANMSRBase> ;
    using INAK = CAN_MSR_INAK_Values<CAN::MSR, 0, 1, ReadMode, CANMSRBase> ;
    using FieldValues = CAN_MSR_INAK_Values<CAN::MSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MSRPack  = Register<0x40006404, 32, ReadWriteMode, CANMSRBase, T...> ;

  struct CANTSRBase {} ;

  struct TSR : public RegisterBase<0x40006408, 32, ReadWriteMode>
  {
    using LOW2 = CAN_TSR_LOW2_Values<CAN::TSR, 31, 1, ReadMode, CANTSRBase> ;
    using LOW1 = CAN_TSR_LOW1_Values<CAN::TSR, 30, 1, ReadMode, CANTSRBase> ;
    using LOW0 = CAN_TSR_LOW0_Values<CAN::TSR, 29, 1, ReadMode, CANTSRBase> ;
    using TME2 = CAN_TSR_TME2_Values<CAN::TSR, 28, 1, ReadMode, CANTSRBase> ;
    using TME1 = CAN_TSR_TME1_Values<CAN::TSR, 27, 1, ReadMode, CANTSRBase> ;
    using TME0 = CAN_TSR_TME0_Values<CAN::TSR, 26, 1, ReadMode, CANTSRBase> ;
    using CODE = CAN_TSR_CODE_Values<CAN::TSR, 24, 2, ReadMode, CANTSRBase> ;
    using ABRQ2 = CAN_TSR_ABRQ2_Values<CAN::TSR, 23, 1, ReadWriteMode, CANTSRBase> ;
    using TERR2 = CAN_TSR_TERR2_Values<CAN::TSR, 19, 1, ReadWriteMode, CANTSRBase> ;
    using ALST2 = CAN_TSR_ALST2_Values<CAN::TSR, 18, 1, ReadWriteMode, CANTSRBase> ;
    using TXOK2 = CAN_TSR_TXOK2_Values<CAN::TSR, 17, 1, ReadWriteMode, CANTSRBase> ;
    using RQCP2 = CAN_TSR_RQCP2_Values<CAN::TSR, 16, 1, ReadWriteMode, CANTSRBase> ;
    using ABRQ1 = CAN_TSR_ABRQ1_Values<CAN::TSR, 15, 1, ReadWriteMode, CANTSRBase> ;
    using TERR1 = CAN_TSR_TERR1_Values<CAN::TSR, 11, 1, ReadWriteMode, CANTSRBase> ;
    using ALST1 = CAN_TSR_ALST1_Values<CAN::TSR, 10, 1, ReadWriteMode, CANTSRBase> ;
    using TXOK1 = CAN_TSR_TXOK1_Values<CAN::TSR, 9, 1, ReadWriteMode, CANTSRBase> ;
    using RQCP1 = CAN_TSR_RQCP1_Values<CAN::TSR, 8, 1, ReadWriteMode, CANTSRBase> ;
    using ABRQ0 = CAN_TSR_ABRQ0_Values<CAN::TSR, 7, 1, ReadWriteMode, CANTSRBase> ;
    using TERR0 = CAN_TSR_TERR0_Values<CAN::TSR, 3, 1, ReadWriteMode, CANTSRBase> ;
    using ALST0 = CAN_TSR_ALST0_Values<CAN::TSR, 2, 1, ReadWriteMode, CANTSRBase> ;
    using TXOK0 = CAN_TSR_TXOK0_Values<CAN::TSR, 1, 1, ReadWriteMode, CANTSRBase> ;
    using RQCP0 = CAN_TSR_RQCP0_Values<CAN::TSR, 0, 1, ReadWriteMode, CANTSRBase> ;
    using FieldValues = CAN_TSR_RQCP0_Values<CAN::TSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSRPack  = Register<0x40006408, 32, ReadWriteMode, CANTSRBase, T...> ;

  struct CANRF0RBase {} ;

  struct RF0R : public RegisterBase<0x4000640C, 32, ReadWriteMode>
  {
    using RFOM0 = CAN_RF0R_RFOM0_Values<CAN::RF0R, 5, 1, ReadWriteMode, CANRF0RBase> ;
    using FOVR0 = CAN_RF0R_FOVR0_Values<CAN::RF0R, 4, 1, ReadWriteMode, CANRF0RBase> ;
    using FULL0 = CAN_RF0R_FULL0_Values<CAN::RF0R, 3, 1, ReadWriteMode, CANRF0RBase> ;
    using FMP0 = CAN_RF0R_FMP0_Values<CAN::RF0R, 0, 2, ReadMode, CANRF0RBase> ;
    using FieldValues = CAN_RF0R_FMP0_Values<CAN::RF0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RF0RPack  = Register<0x4000640C, 32, ReadWriteMode, CANRF0RBase, T...> ;

  struct CANRF1RBase {} ;

  struct RF1R : public RegisterBase<0x40006410, 32, ReadWriteMode>
  {
    using RFOM1 = CAN_RF1R_RFOM1_Values<CAN::RF1R, 5, 1, ReadWriteMode, CANRF1RBase> ;
    using FOVR1 = CAN_RF1R_FOVR1_Values<CAN::RF1R, 4, 1, ReadWriteMode, CANRF1RBase> ;
    using FULL1 = CAN_RF1R_FULL1_Values<CAN::RF1R, 3, 1, ReadWriteMode, CANRF1RBase> ;
    using FMP1 = CAN_RF1R_FMP1_Values<CAN::RF1R, 0, 2, ReadMode, CANRF1RBase> ;
    using FieldValues = CAN_RF1R_FMP1_Values<CAN::RF1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RF1RPack  = Register<0x40006410, 32, ReadWriteMode, CANRF1RBase, T...> ;

  struct CANIERBase {} ;

  struct IER : public RegisterBase<0x40006414, 32, ReadWriteMode>
  {
    using SLKIE = CAN_IER_SLKIE_Values<CAN::IER, 17, 1, ReadWriteMode, CANIERBase> ;
    using WKUIE = CAN_IER_WKUIE_Values<CAN::IER, 16, 1, ReadWriteMode, CANIERBase> ;
    using ERRIE = CAN_IER_ERRIE_Values<CAN::IER, 15, 1, ReadWriteMode, CANIERBase> ;
    using LECIE = CAN_IER_LECIE_Values<CAN::IER, 11, 1, ReadWriteMode, CANIERBase> ;
    using BOFIE = CAN_IER_BOFIE_Values<CAN::IER, 10, 1, ReadWriteMode, CANIERBase> ;
    using EPVIE = CAN_IER_EPVIE_Values<CAN::IER, 9, 1, ReadWriteMode, CANIERBase> ;
    using EWGIE = CAN_IER_EWGIE_Values<CAN::IER, 8, 1, ReadWriteMode, CANIERBase> ;
    using FOVIE1 = CAN_IER_FOVIE1_Values<CAN::IER, 6, 1, ReadWriteMode, CANIERBase> ;
    using FFIE1 = CAN_IER_FFIE1_Values<CAN::IER, 5, 1, ReadWriteMode, CANIERBase> ;
    using FMPIE1 = CAN_IER_FMPIE1_Values<CAN::IER, 4, 1, ReadWriteMode, CANIERBase> ;
    using FOVIE0 = CAN_IER_FOVIE0_Values<CAN::IER, 3, 1, ReadWriteMode, CANIERBase> ;
    using FFIE0 = CAN_IER_FFIE0_Values<CAN::IER, 2, 1, ReadWriteMode, CANIERBase> ;
    using FMPIE0 = CAN_IER_FMPIE0_Values<CAN::IER, 1, 1, ReadWriteMode, CANIERBase> ;
    using TMEIE = CAN_IER_TMEIE_Values<CAN::IER, 0, 1, ReadWriteMode, CANIERBase> ;
    using FieldValues = CAN_IER_TMEIE_Values<CAN::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40006414, 32, ReadWriteMode, CANIERBase, T...> ;

  struct CANESRBase {} ;

  struct ESR : public RegisterBase<0x40006418, 32, ReadWriteMode>
  {
    using REC = CAN_ESR_REC_Values<CAN::ESR, 24, 8, ReadMode, CANESRBase> ;
    using TEC = CAN_ESR_TEC_Values<CAN::ESR, 16, 8, ReadMode, CANESRBase> ;
    using LEC = CAN_ESR_LEC_Values<CAN::ESR, 4, 3, ReadWriteMode, CANESRBase> ;
    using BOFF = CAN_ESR_BOFF_Values<CAN::ESR, 2, 1, ReadMode, CANESRBase> ;
    using EPVF = CAN_ESR_EPVF_Values<CAN::ESR, 1, 1, ReadMode, CANESRBase> ;
    using EWGF = CAN_ESR_EWGF_Values<CAN::ESR, 0, 1, ReadMode, CANESRBase> ;
    using FieldValues = CAN_ESR_EWGF_Values<CAN::ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ESRPack  = Register<0x40006418, 32, ReadWriteMode, CANESRBase, T...> ;

  struct CANBTRBase {} ;

  struct BTR : public RegisterBase<0x4000641C, 32, ReadWriteMode>
  {
    using SILM = CAN_BTR_SILM_Values<CAN::BTR, 31, 1, ReadWriteMode, CANBTRBase> ;
    using LBKM = CAN_BTR_LBKM_Values<CAN::BTR, 30, 1, ReadWriteMode, CANBTRBase> ;
    using SJW = CAN_BTR_SJW_Values<CAN::BTR, 24, 2, ReadWriteMode, CANBTRBase> ;
    using TS2 = CAN_BTR_TS2_Values<CAN::BTR, 20, 3, ReadWriteMode, CANBTRBase> ;
    using TS1 = CAN_BTR_TS1_Values<CAN::BTR, 16, 4, ReadWriteMode, CANBTRBase> ;
    using BRP = CAN_BTR_BRP_Values<CAN::BTR, 0, 10, ReadWriteMode, CANBTRBase> ;
    using FieldValues = CAN_BTR_BRP_Values<CAN::BTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTRPack  = Register<0x4000641C, 32, ReadWriteMode, CANBTRBase, T...> ;

  struct CANTI0RBase {} ;

  struct TI0R : public RegisterBase<0x40006580, 32, ReadWriteMode>
  {
    using STID = CAN_TI0R_STID_Values<CAN::TI0R, 21, 11, ReadWriteMode, CANTI0RBase> ;
    using EXID = CAN_TI0R_EXID_Values<CAN::TI0R, 3, 18, ReadWriteMode, CANTI0RBase> ;
    using IDE = CAN_TI0R_IDE_Values<CAN::TI0R, 2, 1, ReadWriteMode, CANTI0RBase> ;
    using RTR = CAN_TI0R_RTR_Values<CAN::TI0R, 1, 1, ReadWriteMode, CANTI0RBase> ;
    using TXRQ = CAN_TI0R_TXRQ_Values<CAN::TI0R, 0, 1, ReadWriteMode, CANTI0RBase> ;
    using FieldValues = CAN_TI0R_TXRQ_Values<CAN::TI0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI0RPack  = Register<0x40006580, 32, ReadWriteMode, CANTI0RBase, T...> ;

  struct CANTDT0RBase {} ;

  struct TDT0R : public RegisterBase<0x40006584, 32, ReadWriteMode>
  {
    using TIME = CAN_TDT0R_TIME_Values<CAN::TDT0R, 16, 16, ReadWriteMode, CANTDT0RBase> ;
    using TGT = CAN_TDT0R_TGT_Values<CAN::TDT0R, 8, 1, ReadWriteMode, CANTDT0RBase> ;
    using DLC = CAN_TDT0R_DLC_Values<CAN::TDT0R, 0, 4, ReadWriteMode, CANTDT0RBase> ;
    using FieldValues = CAN_TDT0R_DLC_Values<CAN::TDT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT0RPack  = Register<0x40006584, 32, ReadWriteMode, CANTDT0RBase, T...> ;

  struct CANTDL0RBase {} ;

  struct TDL0R : public RegisterBase<0x40006588, 32, ReadWriteMode>
  {
    using DATA3 = CAN_TDL0R_DATA3_Values<CAN::TDL0R, 24, 8, ReadWriteMode, CANTDL0RBase> ;
    using DATA2 = CAN_TDL0R_DATA2_Values<CAN::TDL0R, 16, 8, ReadWriteMode, CANTDL0RBase> ;
    using DATA1 = CAN_TDL0R_DATA1_Values<CAN::TDL0R, 8, 8, ReadWriteMode, CANTDL0RBase> ;
    using DATA0 = CAN_TDL0R_DATA0_Values<CAN::TDL0R, 0, 8, ReadWriteMode, CANTDL0RBase> ;
    using FieldValues = CAN_TDL0R_DATA0_Values<CAN::TDL0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL0RPack  = Register<0x40006588, 32, ReadWriteMode, CANTDL0RBase, T...> ;

  struct CANTDH0RBase {} ;

  struct TDH0R : public RegisterBase<0x4000658C, 32, ReadWriteMode>
  {
    using DATA7 = CAN_TDH0R_DATA7_Values<CAN::TDH0R, 24, 8, ReadWriteMode, CANTDH0RBase> ;
    using DATA6 = CAN_TDH0R_DATA6_Values<CAN::TDH0R, 16, 8, ReadWriteMode, CANTDH0RBase> ;
    using DATA5 = CAN_TDH0R_DATA5_Values<CAN::TDH0R, 8, 8, ReadWriteMode, CANTDH0RBase> ;
    using DATA4 = CAN_TDH0R_DATA4_Values<CAN::TDH0R, 0, 8, ReadWriteMode, CANTDH0RBase> ;
    using FieldValues = CAN_TDH0R_DATA4_Values<CAN::TDH0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH0RPack  = Register<0x4000658C, 32, ReadWriteMode, CANTDH0RBase, T...> ;

  struct CANTI1RBase {} ;

  struct TI1R : public RegisterBase<0x40006590, 32, ReadWriteMode>
  {
    using STID = CAN_TI1R_STID_Values<CAN::TI1R, 21, 11, ReadWriteMode, CANTI1RBase> ;
    using EXID = CAN_TI1R_EXID_Values<CAN::TI1R, 3, 18, ReadWriteMode, CANTI1RBase> ;
    using IDE = CAN_TI1R_IDE_Values<CAN::TI1R, 2, 1, ReadWriteMode, CANTI1RBase> ;
    using RTR = CAN_TI1R_RTR_Values<CAN::TI1R, 1, 1, ReadWriteMode, CANTI1RBase> ;
    using TXRQ = CAN_TI1R_TXRQ_Values<CAN::TI1R, 0, 1, ReadWriteMode, CANTI1RBase> ;
    using FieldValues = CAN_TI1R_TXRQ_Values<CAN::TI1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI1RPack  = Register<0x40006590, 32, ReadWriteMode, CANTI1RBase, T...> ;

  struct CANTDT1RBase {} ;

  struct TDT1R : public RegisterBase<0x40006594, 32, ReadWriteMode>
  {
    using TIME = CAN_TDT1R_TIME_Values<CAN::TDT1R, 16, 16, ReadWriteMode, CANTDT1RBase> ;
    using TGT = CAN_TDT1R_TGT_Values<CAN::TDT1R, 8, 1, ReadWriteMode, CANTDT1RBase> ;
    using DLC = CAN_TDT1R_DLC_Values<CAN::TDT1R, 0, 4, ReadWriteMode, CANTDT1RBase> ;
    using FieldValues = CAN_TDT1R_DLC_Values<CAN::TDT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT1RPack  = Register<0x40006594, 32, ReadWriteMode, CANTDT1RBase, T...> ;

  struct CANTDL1RBase {} ;

  struct TDL1R : public RegisterBase<0x40006598, 32, ReadWriteMode>
  {
    using DATA3 = CAN_TDL1R_DATA3_Values<CAN::TDL1R, 24, 8, ReadWriteMode, CANTDL1RBase> ;
    using DATA2 = CAN_TDL1R_DATA2_Values<CAN::TDL1R, 16, 8, ReadWriteMode, CANTDL1RBase> ;
    using DATA1 = CAN_TDL1R_DATA1_Values<CAN::TDL1R, 8, 8, ReadWriteMode, CANTDL1RBase> ;
    using DATA0 = CAN_TDL1R_DATA0_Values<CAN::TDL1R, 0, 8, ReadWriteMode, CANTDL1RBase> ;
    using FieldValues = CAN_TDL1R_DATA0_Values<CAN::TDL1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL1RPack  = Register<0x40006598, 32, ReadWriteMode, CANTDL1RBase, T...> ;

  struct CANTDH1RBase {} ;

  struct TDH1R : public RegisterBase<0x4000659C, 32, ReadWriteMode>
  {
    using DATA7 = CAN_TDH1R_DATA7_Values<CAN::TDH1R, 24, 8, ReadWriteMode, CANTDH1RBase> ;
    using DATA6 = CAN_TDH1R_DATA6_Values<CAN::TDH1R, 16, 8, ReadWriteMode, CANTDH1RBase> ;
    using DATA5 = CAN_TDH1R_DATA5_Values<CAN::TDH1R, 8, 8, ReadWriteMode, CANTDH1RBase> ;
    using DATA4 = CAN_TDH1R_DATA4_Values<CAN::TDH1R, 0, 8, ReadWriteMode, CANTDH1RBase> ;
    using FieldValues = CAN_TDH1R_DATA4_Values<CAN::TDH1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH1RPack  = Register<0x4000659C, 32, ReadWriteMode, CANTDH1RBase, T...> ;

  struct CANTI2RBase {} ;

  struct TI2R : public RegisterBase<0x400065A0, 32, ReadWriteMode>
  {
    using STID = CAN_TI2R_STID_Values<CAN::TI2R, 21, 11, ReadWriteMode, CANTI2RBase> ;
    using EXID = CAN_TI2R_EXID_Values<CAN::TI2R, 3, 18, ReadWriteMode, CANTI2RBase> ;
    using IDE = CAN_TI2R_IDE_Values<CAN::TI2R, 2, 1, ReadWriteMode, CANTI2RBase> ;
    using RTR = CAN_TI2R_RTR_Values<CAN::TI2R, 1, 1, ReadWriteMode, CANTI2RBase> ;
    using TXRQ = CAN_TI2R_TXRQ_Values<CAN::TI2R, 0, 1, ReadWriteMode, CANTI2RBase> ;
    using FieldValues = CAN_TI2R_TXRQ_Values<CAN::TI2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TI2RPack  = Register<0x400065A0, 32, ReadWriteMode, CANTI2RBase, T...> ;

  struct CANTDT2RBase {} ;

  struct TDT2R : public RegisterBase<0x400065A4, 32, ReadWriteMode>
  {
    using TIME = CAN_TDT2R_TIME_Values<CAN::TDT2R, 16, 16, ReadWriteMode, CANTDT2RBase> ;
    using TGT = CAN_TDT2R_TGT_Values<CAN::TDT2R, 8, 1, ReadWriteMode, CANTDT2RBase> ;
    using DLC = CAN_TDT2R_DLC_Values<CAN::TDT2R, 0, 4, ReadWriteMode, CANTDT2RBase> ;
    using FieldValues = CAN_TDT2R_DLC_Values<CAN::TDT2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDT2RPack  = Register<0x400065A4, 32, ReadWriteMode, CANTDT2RBase, T...> ;

  struct CANTDL2RBase {} ;

  struct TDL2R : public RegisterBase<0x400065A8, 32, ReadWriteMode>
  {
    using DATA3 = CAN_TDL2R_DATA3_Values<CAN::TDL2R, 24, 8, ReadWriteMode, CANTDL2RBase> ;
    using DATA2 = CAN_TDL2R_DATA2_Values<CAN::TDL2R, 16, 8, ReadWriteMode, CANTDL2RBase> ;
    using DATA1 = CAN_TDL2R_DATA1_Values<CAN::TDL2R, 8, 8, ReadWriteMode, CANTDL2RBase> ;
    using DATA0 = CAN_TDL2R_DATA0_Values<CAN::TDL2R, 0, 8, ReadWriteMode, CANTDL2RBase> ;
    using FieldValues = CAN_TDL2R_DATA0_Values<CAN::TDL2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDL2RPack  = Register<0x400065A8, 32, ReadWriteMode, CANTDL2RBase, T...> ;

  struct CANTDH2RBase {} ;

  struct TDH2R : public RegisterBase<0x400065AC, 32, ReadWriteMode>
  {
    using DATA7 = CAN_TDH2R_DATA7_Values<CAN::TDH2R, 24, 8, ReadWriteMode, CANTDH2RBase> ;
    using DATA6 = CAN_TDH2R_DATA6_Values<CAN::TDH2R, 16, 8, ReadWriteMode, CANTDH2RBase> ;
    using DATA5 = CAN_TDH2R_DATA5_Values<CAN::TDH2R, 8, 8, ReadWriteMode, CANTDH2RBase> ;
    using DATA4 = CAN_TDH2R_DATA4_Values<CAN::TDH2R, 0, 8, ReadWriteMode, CANTDH2RBase> ;
    using FieldValues = CAN_TDH2R_DATA4_Values<CAN::TDH2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDH2RPack  = Register<0x400065AC, 32, ReadWriteMode, CANTDH2RBase, T...> ;

  struct CANRI0RBase {} ;

  struct RI0R : public RegisterBase<0x400065B0, 32, ReadMode>
  {
    using STID = CAN_RI0R_STID_Values<CAN::RI0R, 21, 11, ReadMode, CANRI0RBase> ;
    using EXID = CAN_RI0R_EXID_Values<CAN::RI0R, 3, 18, ReadMode, CANRI0RBase> ;
    using IDE = CAN_RI0R_IDE_Values<CAN::RI0R, 2, 1, ReadMode, CANRI0RBase> ;
    using RTR = CAN_RI0R_RTR_Values<CAN::RI0R, 1, 1, ReadMode, CANRI0RBase> ;
    using FieldValues = CAN_RI0R_RTR_Values<CAN::RI0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RI0RPack  = Register<0x400065B0, 32, ReadMode, CANRI0RBase, T...> ;

  struct CANRDT0RBase {} ;

  struct RDT0R : public RegisterBase<0x400065B4, 32, ReadMode>
  {
    using TIME = CAN_RDT0R_TIME_Values<CAN::RDT0R, 16, 16, ReadMode, CANRDT0RBase> ;
    using FMI = CAN_RDT0R_FMI_Values<CAN::RDT0R, 8, 8, ReadMode, CANRDT0RBase> ;
    using DLC = CAN_RDT0R_DLC_Values<CAN::RDT0R, 0, 4, ReadMode, CANRDT0RBase> ;
    using FieldValues = CAN_RDT0R_DLC_Values<CAN::RDT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDT0RPack  = Register<0x400065B4, 32, ReadMode, CANRDT0RBase, T...> ;

  struct CANRDL0RBase {} ;

  struct RDL0R : public RegisterBase<0x400065B8, 32, ReadMode>
  {
    using DATA3 = CAN_RDL0R_DATA3_Values<CAN::RDL0R, 24, 8, ReadMode, CANRDL0RBase> ;
    using DATA2 = CAN_RDL0R_DATA2_Values<CAN::RDL0R, 16, 8, ReadMode, CANRDL0RBase> ;
    using DATA1 = CAN_RDL0R_DATA1_Values<CAN::RDL0R, 8, 8, ReadMode, CANRDL0RBase> ;
    using DATA0 = CAN_RDL0R_DATA0_Values<CAN::RDL0R, 0, 8, ReadMode, CANRDL0RBase> ;
    using FieldValues = CAN_RDL0R_DATA0_Values<CAN::RDL0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDL0RPack  = Register<0x400065B8, 32, ReadMode, CANRDL0RBase, T...> ;

  struct CANRDH0RBase {} ;

  struct RDH0R : public RegisterBase<0x400065BC, 32, ReadMode>
  {
    using DATA7 = CAN_RDH0R_DATA7_Values<CAN::RDH0R, 24, 8, ReadMode, CANRDH0RBase> ;
    using DATA6 = CAN_RDH0R_DATA6_Values<CAN::RDH0R, 16, 8, ReadMode, CANRDH0RBase> ;
    using DATA5 = CAN_RDH0R_DATA5_Values<CAN::RDH0R, 8, 8, ReadMode, CANRDH0RBase> ;
    using DATA4 = CAN_RDH0R_DATA4_Values<CAN::RDH0R, 0, 8, ReadMode, CANRDH0RBase> ;
    using FieldValues = CAN_RDH0R_DATA4_Values<CAN::RDH0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDH0RPack  = Register<0x400065BC, 32, ReadMode, CANRDH0RBase, T...> ;

  struct CANRI1RBase {} ;

  struct RI1R : public RegisterBase<0x400065C0, 32, ReadMode>
  {
    using STID = CAN_RI1R_STID_Values<CAN::RI1R, 21, 11, ReadMode, CANRI1RBase> ;
    using EXID = CAN_RI1R_EXID_Values<CAN::RI1R, 3, 18, ReadMode, CANRI1RBase> ;
    using IDE = CAN_RI1R_IDE_Values<CAN::RI1R, 2, 1, ReadMode, CANRI1RBase> ;
    using RTR = CAN_RI1R_RTR_Values<CAN::RI1R, 1, 1, ReadMode, CANRI1RBase> ;
    using FieldValues = CAN_RI1R_RTR_Values<CAN::RI1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RI1RPack  = Register<0x400065C0, 32, ReadMode, CANRI1RBase, T...> ;

  struct CANRDT1RBase {} ;

  struct RDT1R : public RegisterBase<0x400065C4, 32, ReadMode>
  {
    using TIME = CAN_RDT1R_TIME_Values<CAN::RDT1R, 16, 16, ReadMode, CANRDT1RBase> ;
    using FMI = CAN_RDT1R_FMI_Values<CAN::RDT1R, 8, 8, ReadMode, CANRDT1RBase> ;
    using DLC = CAN_RDT1R_DLC_Values<CAN::RDT1R, 0, 4, ReadMode, CANRDT1RBase> ;
    using FieldValues = CAN_RDT1R_DLC_Values<CAN::RDT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDT1RPack  = Register<0x400065C4, 32, ReadMode, CANRDT1RBase, T...> ;

  struct CANRDL1RBase {} ;

  struct RDL1R : public RegisterBase<0x400065C8, 32, ReadMode>
  {
    using DATA3 = CAN_RDL1R_DATA3_Values<CAN::RDL1R, 24, 8, ReadMode, CANRDL1RBase> ;
    using DATA2 = CAN_RDL1R_DATA2_Values<CAN::RDL1R, 16, 8, ReadMode, CANRDL1RBase> ;
    using DATA1 = CAN_RDL1R_DATA1_Values<CAN::RDL1R, 8, 8, ReadMode, CANRDL1RBase> ;
    using DATA0 = CAN_RDL1R_DATA0_Values<CAN::RDL1R, 0, 8, ReadMode, CANRDL1RBase> ;
    using FieldValues = CAN_RDL1R_DATA0_Values<CAN::RDL1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDL1RPack  = Register<0x400065C8, 32, ReadMode, CANRDL1RBase, T...> ;

  struct CANRDH1RBase {} ;

  struct RDH1R : public RegisterBase<0x400065CC, 32, ReadMode>
  {
    using DATA7 = CAN_RDH1R_DATA7_Values<CAN::RDH1R, 24, 8, ReadMode, CANRDH1RBase> ;
    using DATA6 = CAN_RDH1R_DATA6_Values<CAN::RDH1R, 16, 8, ReadMode, CANRDH1RBase> ;
    using DATA5 = CAN_RDH1R_DATA5_Values<CAN::RDH1R, 8, 8, ReadMode, CANRDH1RBase> ;
    using DATA4 = CAN_RDH1R_DATA4_Values<CAN::RDH1R, 0, 8, ReadMode, CANRDH1RBase> ;
    using FieldValues = CAN_RDH1R_DATA4_Values<CAN::RDH1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDH1RPack  = Register<0x400065CC, 32, ReadMode, CANRDH1RBase, T...> ;

  struct CANFMRBase {} ;

  struct FMR : public RegisterBase<0x40006600, 32, ReadWriteMode>
  {
    using CAN2SB = CAN_FMR_CAN2SB_Values<CAN::FMR, 8, 6, ReadWriteMode, CANFMRBase> ;
    using FINIT = CAN_FMR_FINIT_Values<CAN::FMR, 0, 1, ReadWriteMode, CANFMRBase> ;
    using FieldValues = CAN_FMR_FINIT_Values<CAN::FMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FMRPack  = Register<0x40006600, 32, ReadWriteMode, CANFMRBase, T...> ;

  struct CANFM1RBase {} ;

  struct FM1R : public RegisterBase<0x40006604, 32, ReadWriteMode>
  {
    using FBM0 = CAN_FM1R_FBM0_Values<CAN::FM1R, 0, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM1 = CAN_FM1R_FBM1_Values<CAN::FM1R, 1, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM2 = CAN_FM1R_FBM2_Values<CAN::FM1R, 2, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM3 = CAN_FM1R_FBM3_Values<CAN::FM1R, 3, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM4 = CAN_FM1R_FBM4_Values<CAN::FM1R, 4, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM5 = CAN_FM1R_FBM5_Values<CAN::FM1R, 5, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM6 = CAN_FM1R_FBM6_Values<CAN::FM1R, 6, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM7 = CAN_FM1R_FBM7_Values<CAN::FM1R, 7, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM8 = CAN_FM1R_FBM8_Values<CAN::FM1R, 8, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM9 = CAN_FM1R_FBM9_Values<CAN::FM1R, 9, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM10 = CAN_FM1R_FBM10_Values<CAN::FM1R, 10, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM11 = CAN_FM1R_FBM11_Values<CAN::FM1R, 11, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM12 = CAN_FM1R_FBM12_Values<CAN::FM1R, 12, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM13 = CAN_FM1R_FBM13_Values<CAN::FM1R, 13, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM14 = CAN_FM1R_FBM14_Values<CAN::FM1R, 14, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM15 = CAN_FM1R_FBM15_Values<CAN::FM1R, 15, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM16 = CAN_FM1R_FBM16_Values<CAN::FM1R, 16, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM17 = CAN_FM1R_FBM17_Values<CAN::FM1R, 17, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM18 = CAN_FM1R_FBM18_Values<CAN::FM1R, 18, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM19 = CAN_FM1R_FBM19_Values<CAN::FM1R, 19, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM20 = CAN_FM1R_FBM20_Values<CAN::FM1R, 20, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM21 = CAN_FM1R_FBM21_Values<CAN::FM1R, 21, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM22 = CAN_FM1R_FBM22_Values<CAN::FM1R, 22, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM23 = CAN_FM1R_FBM23_Values<CAN::FM1R, 23, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM24 = CAN_FM1R_FBM24_Values<CAN::FM1R, 24, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM25 = CAN_FM1R_FBM25_Values<CAN::FM1R, 25, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM26 = CAN_FM1R_FBM26_Values<CAN::FM1R, 26, 1, ReadWriteMode, CANFM1RBase> ;
    using FBM27 = CAN_FM1R_FBM27_Values<CAN::FM1R, 27, 1, ReadWriteMode, CANFM1RBase> ;
    using FieldValues = CAN_FM1R_FBM27_Values<CAN::FM1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FM1RPack  = Register<0x40006604, 32, ReadWriteMode, CANFM1RBase, T...> ;

  struct CANFS1RBase {} ;

  struct FS1R : public RegisterBase<0x4000660C, 32, ReadWriteMode>
  {
    using FSC0 = CAN_FS1R_FSC0_Values<CAN::FS1R, 0, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC1 = CAN_FS1R_FSC1_Values<CAN::FS1R, 1, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC2 = CAN_FS1R_FSC2_Values<CAN::FS1R, 2, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC3 = CAN_FS1R_FSC3_Values<CAN::FS1R, 3, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC4 = CAN_FS1R_FSC4_Values<CAN::FS1R, 4, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC5 = CAN_FS1R_FSC5_Values<CAN::FS1R, 5, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC6 = CAN_FS1R_FSC6_Values<CAN::FS1R, 6, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC7 = CAN_FS1R_FSC7_Values<CAN::FS1R, 7, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC8 = CAN_FS1R_FSC8_Values<CAN::FS1R, 8, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC9 = CAN_FS1R_FSC9_Values<CAN::FS1R, 9, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC10 = CAN_FS1R_FSC10_Values<CAN::FS1R, 10, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC11 = CAN_FS1R_FSC11_Values<CAN::FS1R, 11, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC12 = CAN_FS1R_FSC12_Values<CAN::FS1R, 12, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC13 = CAN_FS1R_FSC13_Values<CAN::FS1R, 13, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC14 = CAN_FS1R_FSC14_Values<CAN::FS1R, 14, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC15 = CAN_FS1R_FSC15_Values<CAN::FS1R, 15, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC16 = CAN_FS1R_FSC16_Values<CAN::FS1R, 16, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC17 = CAN_FS1R_FSC17_Values<CAN::FS1R, 17, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC18 = CAN_FS1R_FSC18_Values<CAN::FS1R, 18, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC19 = CAN_FS1R_FSC19_Values<CAN::FS1R, 19, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC20 = CAN_FS1R_FSC20_Values<CAN::FS1R, 20, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC21 = CAN_FS1R_FSC21_Values<CAN::FS1R, 21, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC22 = CAN_FS1R_FSC22_Values<CAN::FS1R, 22, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC23 = CAN_FS1R_FSC23_Values<CAN::FS1R, 23, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC24 = CAN_FS1R_FSC24_Values<CAN::FS1R, 24, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC25 = CAN_FS1R_FSC25_Values<CAN::FS1R, 25, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC26 = CAN_FS1R_FSC26_Values<CAN::FS1R, 26, 1, ReadWriteMode, CANFS1RBase> ;
    using FSC27 = CAN_FS1R_FSC27_Values<CAN::FS1R, 27, 1, ReadWriteMode, CANFS1RBase> ;
    using FieldValues = CAN_FS1R_FSC27_Values<CAN::FS1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FS1RPack  = Register<0x4000660C, 32, ReadWriteMode, CANFS1RBase, T...> ;

  struct CANFFA1RBase {} ;

  struct FFA1R : public RegisterBase<0x40006614, 32, ReadWriteMode>
  {
    using FFA0 = CAN_FFA1R_FFA0_Values<CAN::FFA1R, 0, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA1 = CAN_FFA1R_FFA1_Values<CAN::FFA1R, 1, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA2 = CAN_FFA1R_FFA2_Values<CAN::FFA1R, 2, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA3 = CAN_FFA1R_FFA3_Values<CAN::FFA1R, 3, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA4 = CAN_FFA1R_FFA4_Values<CAN::FFA1R, 4, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA5 = CAN_FFA1R_FFA5_Values<CAN::FFA1R, 5, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA6 = CAN_FFA1R_FFA6_Values<CAN::FFA1R, 6, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA7 = CAN_FFA1R_FFA7_Values<CAN::FFA1R, 7, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA8 = CAN_FFA1R_FFA8_Values<CAN::FFA1R, 8, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA9 = CAN_FFA1R_FFA9_Values<CAN::FFA1R, 9, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA10 = CAN_FFA1R_FFA10_Values<CAN::FFA1R, 10, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA11 = CAN_FFA1R_FFA11_Values<CAN::FFA1R, 11, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA12 = CAN_FFA1R_FFA12_Values<CAN::FFA1R, 12, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA13 = CAN_FFA1R_FFA13_Values<CAN::FFA1R, 13, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA14 = CAN_FFA1R_FFA14_Values<CAN::FFA1R, 14, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA15 = CAN_FFA1R_FFA15_Values<CAN::FFA1R, 15, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA16 = CAN_FFA1R_FFA16_Values<CAN::FFA1R, 16, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA17 = CAN_FFA1R_FFA17_Values<CAN::FFA1R, 17, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA18 = CAN_FFA1R_FFA18_Values<CAN::FFA1R, 18, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA19 = CAN_FFA1R_FFA19_Values<CAN::FFA1R, 19, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA20 = CAN_FFA1R_FFA20_Values<CAN::FFA1R, 20, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA21 = CAN_FFA1R_FFA21_Values<CAN::FFA1R, 21, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA22 = CAN_FFA1R_FFA22_Values<CAN::FFA1R, 22, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA23 = CAN_FFA1R_FFA23_Values<CAN::FFA1R, 23, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA24 = CAN_FFA1R_FFA24_Values<CAN::FFA1R, 24, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA25 = CAN_FFA1R_FFA25_Values<CAN::FFA1R, 25, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA26 = CAN_FFA1R_FFA26_Values<CAN::FFA1R, 26, 1, ReadWriteMode, CANFFA1RBase> ;
    using FFA27 = CAN_FFA1R_FFA27_Values<CAN::FFA1R, 27, 1, ReadWriteMode, CANFFA1RBase> ;
    using FieldValues = CAN_FFA1R_FFA27_Values<CAN::FFA1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FFA1RPack  = Register<0x40006614, 32, ReadWriteMode, CANFFA1RBase, T...> ;

  struct CANFA1RBase {} ;

  struct FA1R : public RegisterBase<0x4000661C, 32, ReadWriteMode>
  {
    using FACT0 = CAN_FA1R_FACT0_Values<CAN::FA1R, 0, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT1 = CAN_FA1R_FACT1_Values<CAN::FA1R, 1, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT2 = CAN_FA1R_FACT2_Values<CAN::FA1R, 2, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT3 = CAN_FA1R_FACT3_Values<CAN::FA1R, 3, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT4 = CAN_FA1R_FACT4_Values<CAN::FA1R, 4, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT5 = CAN_FA1R_FACT5_Values<CAN::FA1R, 5, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT6 = CAN_FA1R_FACT6_Values<CAN::FA1R, 6, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT7 = CAN_FA1R_FACT7_Values<CAN::FA1R, 7, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT8 = CAN_FA1R_FACT8_Values<CAN::FA1R, 8, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT9 = CAN_FA1R_FACT9_Values<CAN::FA1R, 9, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT10 = CAN_FA1R_FACT10_Values<CAN::FA1R, 10, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT11 = CAN_FA1R_FACT11_Values<CAN::FA1R, 11, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT12 = CAN_FA1R_FACT12_Values<CAN::FA1R, 12, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT13 = CAN_FA1R_FACT13_Values<CAN::FA1R, 13, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT14 = CAN_FA1R_FACT14_Values<CAN::FA1R, 14, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT15 = CAN_FA1R_FACT15_Values<CAN::FA1R, 15, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT16 = CAN_FA1R_FACT16_Values<CAN::FA1R, 16, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT17 = CAN_FA1R_FACT17_Values<CAN::FA1R, 17, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT18 = CAN_FA1R_FACT18_Values<CAN::FA1R, 18, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT19 = CAN_FA1R_FACT19_Values<CAN::FA1R, 19, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT20 = CAN_FA1R_FACT20_Values<CAN::FA1R, 20, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT21 = CAN_FA1R_FACT21_Values<CAN::FA1R, 21, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT22 = CAN_FA1R_FACT22_Values<CAN::FA1R, 22, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT23 = CAN_FA1R_FACT23_Values<CAN::FA1R, 23, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT24 = CAN_FA1R_FACT24_Values<CAN::FA1R, 24, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT25 = CAN_FA1R_FACT25_Values<CAN::FA1R, 25, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT26 = CAN_FA1R_FACT26_Values<CAN::FA1R, 26, 1, ReadWriteMode, CANFA1RBase> ;
    using FACT27 = CAN_FA1R_FACT27_Values<CAN::FA1R, 27, 1, ReadWriteMode, CANFA1RBase> ;
    using FieldValues = CAN_FA1R_FACT27_Values<CAN::FA1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FA1RPack  = Register<0x4000661C, 32, ReadWriteMode, CANFA1RBase, T...> ;

  struct CANF0R1Base {} ;

  struct F0R1 : public RegisterBase<0x40006640, 32, ReadWriteMode>
  {
    using FB0 = CAN_F0R1_FB0_Values<CAN::F0R1, 0, 1, ReadWriteMode, CANF0R1Base> ;
    using FB1 = CAN_F0R1_FB1_Values<CAN::F0R1, 1, 1, ReadWriteMode, CANF0R1Base> ;
    using FB2 = CAN_F0R1_FB2_Values<CAN::F0R1, 2, 1, ReadWriteMode, CANF0R1Base> ;
    using FB3 = CAN_F0R1_FB3_Values<CAN::F0R1, 3, 1, ReadWriteMode, CANF0R1Base> ;
    using FB4 = CAN_F0R1_FB4_Values<CAN::F0R1, 4, 1, ReadWriteMode, CANF0R1Base> ;
    using FB5 = CAN_F0R1_FB5_Values<CAN::F0R1, 5, 1, ReadWriteMode, CANF0R1Base> ;
    using FB6 = CAN_F0R1_FB6_Values<CAN::F0R1, 6, 1, ReadWriteMode, CANF0R1Base> ;
    using FB7 = CAN_F0R1_FB7_Values<CAN::F0R1, 7, 1, ReadWriteMode, CANF0R1Base> ;
    using FB8 = CAN_F0R1_FB8_Values<CAN::F0R1, 8, 1, ReadWriteMode, CANF0R1Base> ;
    using FB9 = CAN_F0R1_FB9_Values<CAN::F0R1, 9, 1, ReadWriteMode, CANF0R1Base> ;
    using FB10 = CAN_F0R1_FB10_Values<CAN::F0R1, 10, 1, ReadWriteMode, CANF0R1Base> ;
    using FB11 = CAN_F0R1_FB11_Values<CAN::F0R1, 11, 1, ReadWriteMode, CANF0R1Base> ;
    using FB12 = CAN_F0R1_FB12_Values<CAN::F0R1, 12, 1, ReadWriteMode, CANF0R1Base> ;
    using FB13 = CAN_F0R1_FB13_Values<CAN::F0R1, 13, 1, ReadWriteMode, CANF0R1Base> ;
    using FB14 = CAN_F0R1_FB14_Values<CAN::F0R1, 14, 1, ReadWriteMode, CANF0R1Base> ;
    using FB15 = CAN_F0R1_FB15_Values<CAN::F0R1, 15, 1, ReadWriteMode, CANF0R1Base> ;
    using FB16 = CAN_F0R1_FB16_Values<CAN::F0R1, 16, 1, ReadWriteMode, CANF0R1Base> ;
    using FB17 = CAN_F0R1_FB17_Values<CAN::F0R1, 17, 1, ReadWriteMode, CANF0R1Base> ;
    using FB18 = CAN_F0R1_FB18_Values<CAN::F0R1, 18, 1, ReadWriteMode, CANF0R1Base> ;
    using FB19 = CAN_F0R1_FB19_Values<CAN::F0R1, 19, 1, ReadWriteMode, CANF0R1Base> ;
    using FB20 = CAN_F0R1_FB20_Values<CAN::F0R1, 20, 1, ReadWriteMode, CANF0R1Base> ;
    using FB21 = CAN_F0R1_FB21_Values<CAN::F0R1, 21, 1, ReadWriteMode, CANF0R1Base> ;
    using FB22 = CAN_F0R1_FB22_Values<CAN::F0R1, 22, 1, ReadWriteMode, CANF0R1Base> ;
    using FB23 = CAN_F0R1_FB23_Values<CAN::F0R1, 23, 1, ReadWriteMode, CANF0R1Base> ;
    using FB24 = CAN_F0R1_FB24_Values<CAN::F0R1, 24, 1, ReadWriteMode, CANF0R1Base> ;
    using FB25 = CAN_F0R1_FB25_Values<CAN::F0R1, 25, 1, ReadWriteMode, CANF0R1Base> ;
    using FB26 = CAN_F0R1_FB26_Values<CAN::F0R1, 26, 1, ReadWriteMode, CANF0R1Base> ;
    using FB27 = CAN_F0R1_FB27_Values<CAN::F0R1, 27, 1, ReadWriteMode, CANF0R1Base> ;
    using FB28 = CAN_F0R1_FB28_Values<CAN::F0R1, 28, 1, ReadWriteMode, CANF0R1Base> ;
    using FB29 = CAN_F0R1_FB29_Values<CAN::F0R1, 29, 1, ReadWriteMode, CANF0R1Base> ;
    using FB30 = CAN_F0R1_FB30_Values<CAN::F0R1, 30, 1, ReadWriteMode, CANF0R1Base> ;
    using FB31 = CAN_F0R1_FB31_Values<CAN::F0R1, 31, 1, ReadWriteMode, CANF0R1Base> ;
    using FieldValues = CAN_F0R1_FB31_Values<CAN::F0R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0R1Pack  = Register<0x40006640, 32, ReadWriteMode, CANF0R1Base, T...> ;

  struct CANF0R2Base {} ;

  struct F0R2 : public RegisterBase<0x40006644, 32, ReadWriteMode>
  {
    using FB0 = CAN_F0R2_FB0_Values<CAN::F0R2, 0, 1, ReadWriteMode, CANF0R2Base> ;
    using FB1 = CAN_F0R2_FB1_Values<CAN::F0R2, 1, 1, ReadWriteMode, CANF0R2Base> ;
    using FB2 = CAN_F0R2_FB2_Values<CAN::F0R2, 2, 1, ReadWriteMode, CANF0R2Base> ;
    using FB3 = CAN_F0R2_FB3_Values<CAN::F0R2, 3, 1, ReadWriteMode, CANF0R2Base> ;
    using FB4 = CAN_F0R2_FB4_Values<CAN::F0R2, 4, 1, ReadWriteMode, CANF0R2Base> ;
    using FB5 = CAN_F0R2_FB5_Values<CAN::F0R2, 5, 1, ReadWriteMode, CANF0R2Base> ;
    using FB6 = CAN_F0R2_FB6_Values<CAN::F0R2, 6, 1, ReadWriteMode, CANF0R2Base> ;
    using FB7 = CAN_F0R2_FB7_Values<CAN::F0R2, 7, 1, ReadWriteMode, CANF0R2Base> ;
    using FB8 = CAN_F0R2_FB8_Values<CAN::F0R2, 8, 1, ReadWriteMode, CANF0R2Base> ;
    using FB9 = CAN_F0R2_FB9_Values<CAN::F0R2, 9, 1, ReadWriteMode, CANF0R2Base> ;
    using FB10 = CAN_F0R2_FB10_Values<CAN::F0R2, 10, 1, ReadWriteMode, CANF0R2Base> ;
    using FB11 = CAN_F0R2_FB11_Values<CAN::F0R2, 11, 1, ReadWriteMode, CANF0R2Base> ;
    using FB12 = CAN_F0R2_FB12_Values<CAN::F0R2, 12, 1, ReadWriteMode, CANF0R2Base> ;
    using FB13 = CAN_F0R2_FB13_Values<CAN::F0R2, 13, 1, ReadWriteMode, CANF0R2Base> ;
    using FB14 = CAN_F0R2_FB14_Values<CAN::F0R2, 14, 1, ReadWriteMode, CANF0R2Base> ;
    using FB15 = CAN_F0R2_FB15_Values<CAN::F0R2, 15, 1, ReadWriteMode, CANF0R2Base> ;
    using FB16 = CAN_F0R2_FB16_Values<CAN::F0R2, 16, 1, ReadWriteMode, CANF0R2Base> ;
    using FB17 = CAN_F0R2_FB17_Values<CAN::F0R2, 17, 1, ReadWriteMode, CANF0R2Base> ;
    using FB18 = CAN_F0R2_FB18_Values<CAN::F0R2, 18, 1, ReadWriteMode, CANF0R2Base> ;
    using FB19 = CAN_F0R2_FB19_Values<CAN::F0R2, 19, 1, ReadWriteMode, CANF0R2Base> ;
    using FB20 = CAN_F0R2_FB20_Values<CAN::F0R2, 20, 1, ReadWriteMode, CANF0R2Base> ;
    using FB21 = CAN_F0R2_FB21_Values<CAN::F0R2, 21, 1, ReadWriteMode, CANF0R2Base> ;
    using FB22 = CAN_F0R2_FB22_Values<CAN::F0R2, 22, 1, ReadWriteMode, CANF0R2Base> ;
    using FB23 = CAN_F0R2_FB23_Values<CAN::F0R2, 23, 1, ReadWriteMode, CANF0R2Base> ;
    using FB24 = CAN_F0R2_FB24_Values<CAN::F0R2, 24, 1, ReadWriteMode, CANF0R2Base> ;
    using FB25 = CAN_F0R2_FB25_Values<CAN::F0R2, 25, 1, ReadWriteMode, CANF0R2Base> ;
    using FB26 = CAN_F0R2_FB26_Values<CAN::F0R2, 26, 1, ReadWriteMode, CANF0R2Base> ;
    using FB27 = CAN_F0R2_FB27_Values<CAN::F0R2, 27, 1, ReadWriteMode, CANF0R2Base> ;
    using FB28 = CAN_F0R2_FB28_Values<CAN::F0R2, 28, 1, ReadWriteMode, CANF0R2Base> ;
    using FB29 = CAN_F0R2_FB29_Values<CAN::F0R2, 29, 1, ReadWriteMode, CANF0R2Base> ;
    using FB30 = CAN_F0R2_FB30_Values<CAN::F0R2, 30, 1, ReadWriteMode, CANF0R2Base> ;
    using FB31 = CAN_F0R2_FB31_Values<CAN::F0R2, 31, 1, ReadWriteMode, CANF0R2Base> ;
    using FieldValues = CAN_F0R2_FB31_Values<CAN::F0R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0R2Pack  = Register<0x40006644, 32, ReadWriteMode, CANF0R2Base, T...> ;

  struct CANF1R1Base {} ;

  struct F1R1 : public RegisterBase<0x40006648, 32, ReadWriteMode>
  {
    using FB0 = CAN_F1R1_FB0_Values<CAN::F1R1, 0, 1, ReadWriteMode, CANF1R1Base> ;
    using FB1 = CAN_F1R1_FB1_Values<CAN::F1R1, 1, 1, ReadWriteMode, CANF1R1Base> ;
    using FB2 = CAN_F1R1_FB2_Values<CAN::F1R1, 2, 1, ReadWriteMode, CANF1R1Base> ;
    using FB3 = CAN_F1R1_FB3_Values<CAN::F1R1, 3, 1, ReadWriteMode, CANF1R1Base> ;
    using FB4 = CAN_F1R1_FB4_Values<CAN::F1R1, 4, 1, ReadWriteMode, CANF1R1Base> ;
    using FB5 = CAN_F1R1_FB5_Values<CAN::F1R1, 5, 1, ReadWriteMode, CANF1R1Base> ;
    using FB6 = CAN_F1R1_FB6_Values<CAN::F1R1, 6, 1, ReadWriteMode, CANF1R1Base> ;
    using FB7 = CAN_F1R1_FB7_Values<CAN::F1R1, 7, 1, ReadWriteMode, CANF1R1Base> ;
    using FB8 = CAN_F1R1_FB8_Values<CAN::F1R1, 8, 1, ReadWriteMode, CANF1R1Base> ;
    using FB9 = CAN_F1R1_FB9_Values<CAN::F1R1, 9, 1, ReadWriteMode, CANF1R1Base> ;
    using FB10 = CAN_F1R1_FB10_Values<CAN::F1R1, 10, 1, ReadWriteMode, CANF1R1Base> ;
    using FB11 = CAN_F1R1_FB11_Values<CAN::F1R1, 11, 1, ReadWriteMode, CANF1R1Base> ;
    using FB12 = CAN_F1R1_FB12_Values<CAN::F1R1, 12, 1, ReadWriteMode, CANF1R1Base> ;
    using FB13 = CAN_F1R1_FB13_Values<CAN::F1R1, 13, 1, ReadWriteMode, CANF1R1Base> ;
    using FB14 = CAN_F1R1_FB14_Values<CAN::F1R1, 14, 1, ReadWriteMode, CANF1R1Base> ;
    using FB15 = CAN_F1R1_FB15_Values<CAN::F1R1, 15, 1, ReadWriteMode, CANF1R1Base> ;
    using FB16 = CAN_F1R1_FB16_Values<CAN::F1R1, 16, 1, ReadWriteMode, CANF1R1Base> ;
    using FB17 = CAN_F1R1_FB17_Values<CAN::F1R1, 17, 1, ReadWriteMode, CANF1R1Base> ;
    using FB18 = CAN_F1R1_FB18_Values<CAN::F1R1, 18, 1, ReadWriteMode, CANF1R1Base> ;
    using FB19 = CAN_F1R1_FB19_Values<CAN::F1R1, 19, 1, ReadWriteMode, CANF1R1Base> ;
    using FB20 = CAN_F1R1_FB20_Values<CAN::F1R1, 20, 1, ReadWriteMode, CANF1R1Base> ;
    using FB21 = CAN_F1R1_FB21_Values<CAN::F1R1, 21, 1, ReadWriteMode, CANF1R1Base> ;
    using FB22 = CAN_F1R1_FB22_Values<CAN::F1R1, 22, 1, ReadWriteMode, CANF1R1Base> ;
    using FB23 = CAN_F1R1_FB23_Values<CAN::F1R1, 23, 1, ReadWriteMode, CANF1R1Base> ;
    using FB24 = CAN_F1R1_FB24_Values<CAN::F1R1, 24, 1, ReadWriteMode, CANF1R1Base> ;
    using FB25 = CAN_F1R1_FB25_Values<CAN::F1R1, 25, 1, ReadWriteMode, CANF1R1Base> ;
    using FB26 = CAN_F1R1_FB26_Values<CAN::F1R1, 26, 1, ReadWriteMode, CANF1R1Base> ;
    using FB27 = CAN_F1R1_FB27_Values<CAN::F1R1, 27, 1, ReadWriteMode, CANF1R1Base> ;
    using FB28 = CAN_F1R1_FB28_Values<CAN::F1R1, 28, 1, ReadWriteMode, CANF1R1Base> ;
    using FB29 = CAN_F1R1_FB29_Values<CAN::F1R1, 29, 1, ReadWriteMode, CANF1R1Base> ;
    using FB30 = CAN_F1R1_FB30_Values<CAN::F1R1, 30, 1, ReadWriteMode, CANF1R1Base> ;
    using FB31 = CAN_F1R1_FB31_Values<CAN::F1R1, 31, 1, ReadWriteMode, CANF1R1Base> ;
    using FieldValues = CAN_F1R1_FB31_Values<CAN::F1R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1R1Pack  = Register<0x40006648, 32, ReadWriteMode, CANF1R1Base, T...> ;

  struct CANF1R2Base {} ;

  struct F1R2 : public RegisterBase<0x4000664C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F1R2_FB0_Values<CAN::F1R2, 0, 1, ReadWriteMode, CANF1R2Base> ;
    using FB1 = CAN_F1R2_FB1_Values<CAN::F1R2, 1, 1, ReadWriteMode, CANF1R2Base> ;
    using FB2 = CAN_F1R2_FB2_Values<CAN::F1R2, 2, 1, ReadWriteMode, CANF1R2Base> ;
    using FB3 = CAN_F1R2_FB3_Values<CAN::F1R2, 3, 1, ReadWriteMode, CANF1R2Base> ;
    using FB4 = CAN_F1R2_FB4_Values<CAN::F1R2, 4, 1, ReadWriteMode, CANF1R2Base> ;
    using FB5 = CAN_F1R2_FB5_Values<CAN::F1R2, 5, 1, ReadWriteMode, CANF1R2Base> ;
    using FB6 = CAN_F1R2_FB6_Values<CAN::F1R2, 6, 1, ReadWriteMode, CANF1R2Base> ;
    using FB7 = CAN_F1R2_FB7_Values<CAN::F1R2, 7, 1, ReadWriteMode, CANF1R2Base> ;
    using FB8 = CAN_F1R2_FB8_Values<CAN::F1R2, 8, 1, ReadWriteMode, CANF1R2Base> ;
    using FB9 = CAN_F1R2_FB9_Values<CAN::F1R2, 9, 1, ReadWriteMode, CANF1R2Base> ;
    using FB10 = CAN_F1R2_FB10_Values<CAN::F1R2, 10, 1, ReadWriteMode, CANF1R2Base> ;
    using FB11 = CAN_F1R2_FB11_Values<CAN::F1R2, 11, 1, ReadWriteMode, CANF1R2Base> ;
    using FB12 = CAN_F1R2_FB12_Values<CAN::F1R2, 12, 1, ReadWriteMode, CANF1R2Base> ;
    using FB13 = CAN_F1R2_FB13_Values<CAN::F1R2, 13, 1, ReadWriteMode, CANF1R2Base> ;
    using FB14 = CAN_F1R2_FB14_Values<CAN::F1R2, 14, 1, ReadWriteMode, CANF1R2Base> ;
    using FB15 = CAN_F1R2_FB15_Values<CAN::F1R2, 15, 1, ReadWriteMode, CANF1R2Base> ;
    using FB16 = CAN_F1R2_FB16_Values<CAN::F1R2, 16, 1, ReadWriteMode, CANF1R2Base> ;
    using FB17 = CAN_F1R2_FB17_Values<CAN::F1R2, 17, 1, ReadWriteMode, CANF1R2Base> ;
    using FB18 = CAN_F1R2_FB18_Values<CAN::F1R2, 18, 1, ReadWriteMode, CANF1R2Base> ;
    using FB19 = CAN_F1R2_FB19_Values<CAN::F1R2, 19, 1, ReadWriteMode, CANF1R2Base> ;
    using FB20 = CAN_F1R2_FB20_Values<CAN::F1R2, 20, 1, ReadWriteMode, CANF1R2Base> ;
    using FB21 = CAN_F1R2_FB21_Values<CAN::F1R2, 21, 1, ReadWriteMode, CANF1R2Base> ;
    using FB22 = CAN_F1R2_FB22_Values<CAN::F1R2, 22, 1, ReadWriteMode, CANF1R2Base> ;
    using FB23 = CAN_F1R2_FB23_Values<CAN::F1R2, 23, 1, ReadWriteMode, CANF1R2Base> ;
    using FB24 = CAN_F1R2_FB24_Values<CAN::F1R2, 24, 1, ReadWriteMode, CANF1R2Base> ;
    using FB25 = CAN_F1R2_FB25_Values<CAN::F1R2, 25, 1, ReadWriteMode, CANF1R2Base> ;
    using FB26 = CAN_F1R2_FB26_Values<CAN::F1R2, 26, 1, ReadWriteMode, CANF1R2Base> ;
    using FB27 = CAN_F1R2_FB27_Values<CAN::F1R2, 27, 1, ReadWriteMode, CANF1R2Base> ;
    using FB28 = CAN_F1R2_FB28_Values<CAN::F1R2, 28, 1, ReadWriteMode, CANF1R2Base> ;
    using FB29 = CAN_F1R2_FB29_Values<CAN::F1R2, 29, 1, ReadWriteMode, CANF1R2Base> ;
    using FB30 = CAN_F1R2_FB30_Values<CAN::F1R2, 30, 1, ReadWriteMode, CANF1R2Base> ;
    using FB31 = CAN_F1R2_FB31_Values<CAN::F1R2, 31, 1, ReadWriteMode, CANF1R2Base> ;
    using FieldValues = CAN_F1R2_FB31_Values<CAN::F1R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1R2Pack  = Register<0x4000664C, 32, ReadWriteMode, CANF1R2Base, T...> ;

  struct CANF2R1Base {} ;

  struct F2R1 : public RegisterBase<0x40006650, 32, ReadWriteMode>
  {
    using FB0 = CAN_F2R1_FB0_Values<CAN::F2R1, 0, 1, ReadWriteMode, CANF2R1Base> ;
    using FB1 = CAN_F2R1_FB1_Values<CAN::F2R1, 1, 1, ReadWriteMode, CANF2R1Base> ;
    using FB2 = CAN_F2R1_FB2_Values<CAN::F2R1, 2, 1, ReadWriteMode, CANF2R1Base> ;
    using FB3 = CAN_F2R1_FB3_Values<CAN::F2R1, 3, 1, ReadWriteMode, CANF2R1Base> ;
    using FB4 = CAN_F2R1_FB4_Values<CAN::F2R1, 4, 1, ReadWriteMode, CANF2R1Base> ;
    using FB5 = CAN_F2R1_FB5_Values<CAN::F2R1, 5, 1, ReadWriteMode, CANF2R1Base> ;
    using FB6 = CAN_F2R1_FB6_Values<CAN::F2R1, 6, 1, ReadWriteMode, CANF2R1Base> ;
    using FB7 = CAN_F2R1_FB7_Values<CAN::F2R1, 7, 1, ReadWriteMode, CANF2R1Base> ;
    using FB8 = CAN_F2R1_FB8_Values<CAN::F2R1, 8, 1, ReadWriteMode, CANF2R1Base> ;
    using FB9 = CAN_F2R1_FB9_Values<CAN::F2R1, 9, 1, ReadWriteMode, CANF2R1Base> ;
    using FB10 = CAN_F2R1_FB10_Values<CAN::F2R1, 10, 1, ReadWriteMode, CANF2R1Base> ;
    using FB11 = CAN_F2R1_FB11_Values<CAN::F2R1, 11, 1, ReadWriteMode, CANF2R1Base> ;
    using FB12 = CAN_F2R1_FB12_Values<CAN::F2R1, 12, 1, ReadWriteMode, CANF2R1Base> ;
    using FB13 = CAN_F2R1_FB13_Values<CAN::F2R1, 13, 1, ReadWriteMode, CANF2R1Base> ;
    using FB14 = CAN_F2R1_FB14_Values<CAN::F2R1, 14, 1, ReadWriteMode, CANF2R1Base> ;
    using FB15 = CAN_F2R1_FB15_Values<CAN::F2R1, 15, 1, ReadWriteMode, CANF2R1Base> ;
    using FB16 = CAN_F2R1_FB16_Values<CAN::F2R1, 16, 1, ReadWriteMode, CANF2R1Base> ;
    using FB17 = CAN_F2R1_FB17_Values<CAN::F2R1, 17, 1, ReadWriteMode, CANF2R1Base> ;
    using FB18 = CAN_F2R1_FB18_Values<CAN::F2R1, 18, 1, ReadWriteMode, CANF2R1Base> ;
    using FB19 = CAN_F2R1_FB19_Values<CAN::F2R1, 19, 1, ReadWriteMode, CANF2R1Base> ;
    using FB20 = CAN_F2R1_FB20_Values<CAN::F2R1, 20, 1, ReadWriteMode, CANF2R1Base> ;
    using FB21 = CAN_F2R1_FB21_Values<CAN::F2R1, 21, 1, ReadWriteMode, CANF2R1Base> ;
    using FB22 = CAN_F2R1_FB22_Values<CAN::F2R1, 22, 1, ReadWriteMode, CANF2R1Base> ;
    using FB23 = CAN_F2R1_FB23_Values<CAN::F2R1, 23, 1, ReadWriteMode, CANF2R1Base> ;
    using FB24 = CAN_F2R1_FB24_Values<CAN::F2R1, 24, 1, ReadWriteMode, CANF2R1Base> ;
    using FB25 = CAN_F2R1_FB25_Values<CAN::F2R1, 25, 1, ReadWriteMode, CANF2R1Base> ;
    using FB26 = CAN_F2R1_FB26_Values<CAN::F2R1, 26, 1, ReadWriteMode, CANF2R1Base> ;
    using FB27 = CAN_F2R1_FB27_Values<CAN::F2R1, 27, 1, ReadWriteMode, CANF2R1Base> ;
    using FB28 = CAN_F2R1_FB28_Values<CAN::F2R1, 28, 1, ReadWriteMode, CANF2R1Base> ;
    using FB29 = CAN_F2R1_FB29_Values<CAN::F2R1, 29, 1, ReadWriteMode, CANF2R1Base> ;
    using FB30 = CAN_F2R1_FB30_Values<CAN::F2R1, 30, 1, ReadWriteMode, CANF2R1Base> ;
    using FB31 = CAN_F2R1_FB31_Values<CAN::F2R1, 31, 1, ReadWriteMode, CANF2R1Base> ;
    using FieldValues = CAN_F2R1_FB31_Values<CAN::F2R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2R1Pack  = Register<0x40006650, 32, ReadWriteMode, CANF2R1Base, T...> ;

  struct CANF2R2Base {} ;

  struct F2R2 : public RegisterBase<0x40006654, 32, ReadWriteMode>
  {
    using FB0 = CAN_F2R2_FB0_Values<CAN::F2R2, 0, 1, ReadWriteMode, CANF2R2Base> ;
    using FB1 = CAN_F2R2_FB1_Values<CAN::F2R2, 1, 1, ReadWriteMode, CANF2R2Base> ;
    using FB2 = CAN_F2R2_FB2_Values<CAN::F2R2, 2, 1, ReadWriteMode, CANF2R2Base> ;
    using FB3 = CAN_F2R2_FB3_Values<CAN::F2R2, 3, 1, ReadWriteMode, CANF2R2Base> ;
    using FB4 = CAN_F2R2_FB4_Values<CAN::F2R2, 4, 1, ReadWriteMode, CANF2R2Base> ;
    using FB5 = CAN_F2R2_FB5_Values<CAN::F2R2, 5, 1, ReadWriteMode, CANF2R2Base> ;
    using FB6 = CAN_F2R2_FB6_Values<CAN::F2R2, 6, 1, ReadWriteMode, CANF2R2Base> ;
    using FB7 = CAN_F2R2_FB7_Values<CAN::F2R2, 7, 1, ReadWriteMode, CANF2R2Base> ;
    using FB8 = CAN_F2R2_FB8_Values<CAN::F2R2, 8, 1, ReadWriteMode, CANF2R2Base> ;
    using FB9 = CAN_F2R2_FB9_Values<CAN::F2R2, 9, 1, ReadWriteMode, CANF2R2Base> ;
    using FB10 = CAN_F2R2_FB10_Values<CAN::F2R2, 10, 1, ReadWriteMode, CANF2R2Base> ;
    using FB11 = CAN_F2R2_FB11_Values<CAN::F2R2, 11, 1, ReadWriteMode, CANF2R2Base> ;
    using FB12 = CAN_F2R2_FB12_Values<CAN::F2R2, 12, 1, ReadWriteMode, CANF2R2Base> ;
    using FB13 = CAN_F2R2_FB13_Values<CAN::F2R2, 13, 1, ReadWriteMode, CANF2R2Base> ;
    using FB14 = CAN_F2R2_FB14_Values<CAN::F2R2, 14, 1, ReadWriteMode, CANF2R2Base> ;
    using FB15 = CAN_F2R2_FB15_Values<CAN::F2R2, 15, 1, ReadWriteMode, CANF2R2Base> ;
    using FB16 = CAN_F2R2_FB16_Values<CAN::F2R2, 16, 1, ReadWriteMode, CANF2R2Base> ;
    using FB17 = CAN_F2R2_FB17_Values<CAN::F2R2, 17, 1, ReadWriteMode, CANF2R2Base> ;
    using FB18 = CAN_F2R2_FB18_Values<CAN::F2R2, 18, 1, ReadWriteMode, CANF2R2Base> ;
    using FB19 = CAN_F2R2_FB19_Values<CAN::F2R2, 19, 1, ReadWriteMode, CANF2R2Base> ;
    using FB20 = CAN_F2R2_FB20_Values<CAN::F2R2, 20, 1, ReadWriteMode, CANF2R2Base> ;
    using FB21 = CAN_F2R2_FB21_Values<CAN::F2R2, 21, 1, ReadWriteMode, CANF2R2Base> ;
    using FB22 = CAN_F2R2_FB22_Values<CAN::F2R2, 22, 1, ReadWriteMode, CANF2R2Base> ;
    using FB23 = CAN_F2R2_FB23_Values<CAN::F2R2, 23, 1, ReadWriteMode, CANF2R2Base> ;
    using FB24 = CAN_F2R2_FB24_Values<CAN::F2R2, 24, 1, ReadWriteMode, CANF2R2Base> ;
    using FB25 = CAN_F2R2_FB25_Values<CAN::F2R2, 25, 1, ReadWriteMode, CANF2R2Base> ;
    using FB26 = CAN_F2R2_FB26_Values<CAN::F2R2, 26, 1, ReadWriteMode, CANF2R2Base> ;
    using FB27 = CAN_F2R2_FB27_Values<CAN::F2R2, 27, 1, ReadWriteMode, CANF2R2Base> ;
    using FB28 = CAN_F2R2_FB28_Values<CAN::F2R2, 28, 1, ReadWriteMode, CANF2R2Base> ;
    using FB29 = CAN_F2R2_FB29_Values<CAN::F2R2, 29, 1, ReadWriteMode, CANF2R2Base> ;
    using FB30 = CAN_F2R2_FB30_Values<CAN::F2R2, 30, 1, ReadWriteMode, CANF2R2Base> ;
    using FB31 = CAN_F2R2_FB31_Values<CAN::F2R2, 31, 1, ReadWriteMode, CANF2R2Base> ;
    using FieldValues = CAN_F2R2_FB31_Values<CAN::F2R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2R2Pack  = Register<0x40006654, 32, ReadWriteMode, CANF2R2Base, T...> ;

  struct CANF3R1Base {} ;

  struct F3R1 : public RegisterBase<0x40006658, 32, ReadWriteMode>
  {
    using FB0 = CAN_F3R1_FB0_Values<CAN::F3R1, 0, 1, ReadWriteMode, CANF3R1Base> ;
    using FB1 = CAN_F3R1_FB1_Values<CAN::F3R1, 1, 1, ReadWriteMode, CANF3R1Base> ;
    using FB2 = CAN_F3R1_FB2_Values<CAN::F3R1, 2, 1, ReadWriteMode, CANF3R1Base> ;
    using FB3 = CAN_F3R1_FB3_Values<CAN::F3R1, 3, 1, ReadWriteMode, CANF3R1Base> ;
    using FB4 = CAN_F3R1_FB4_Values<CAN::F3R1, 4, 1, ReadWriteMode, CANF3R1Base> ;
    using FB5 = CAN_F3R1_FB5_Values<CAN::F3R1, 5, 1, ReadWriteMode, CANF3R1Base> ;
    using FB6 = CAN_F3R1_FB6_Values<CAN::F3R1, 6, 1, ReadWriteMode, CANF3R1Base> ;
    using FB7 = CAN_F3R1_FB7_Values<CAN::F3R1, 7, 1, ReadWriteMode, CANF3R1Base> ;
    using FB8 = CAN_F3R1_FB8_Values<CAN::F3R1, 8, 1, ReadWriteMode, CANF3R1Base> ;
    using FB9 = CAN_F3R1_FB9_Values<CAN::F3R1, 9, 1, ReadWriteMode, CANF3R1Base> ;
    using FB10 = CAN_F3R1_FB10_Values<CAN::F3R1, 10, 1, ReadWriteMode, CANF3R1Base> ;
    using FB11 = CAN_F3R1_FB11_Values<CAN::F3R1, 11, 1, ReadWriteMode, CANF3R1Base> ;
    using FB12 = CAN_F3R1_FB12_Values<CAN::F3R1, 12, 1, ReadWriteMode, CANF3R1Base> ;
    using FB13 = CAN_F3R1_FB13_Values<CAN::F3R1, 13, 1, ReadWriteMode, CANF3R1Base> ;
    using FB14 = CAN_F3R1_FB14_Values<CAN::F3R1, 14, 1, ReadWriteMode, CANF3R1Base> ;
    using FB15 = CAN_F3R1_FB15_Values<CAN::F3R1, 15, 1, ReadWriteMode, CANF3R1Base> ;
    using FB16 = CAN_F3R1_FB16_Values<CAN::F3R1, 16, 1, ReadWriteMode, CANF3R1Base> ;
    using FB17 = CAN_F3R1_FB17_Values<CAN::F3R1, 17, 1, ReadWriteMode, CANF3R1Base> ;
    using FB18 = CAN_F3R1_FB18_Values<CAN::F3R1, 18, 1, ReadWriteMode, CANF3R1Base> ;
    using FB19 = CAN_F3R1_FB19_Values<CAN::F3R1, 19, 1, ReadWriteMode, CANF3R1Base> ;
    using FB20 = CAN_F3R1_FB20_Values<CAN::F3R1, 20, 1, ReadWriteMode, CANF3R1Base> ;
    using FB21 = CAN_F3R1_FB21_Values<CAN::F3R1, 21, 1, ReadWriteMode, CANF3R1Base> ;
    using FB22 = CAN_F3R1_FB22_Values<CAN::F3R1, 22, 1, ReadWriteMode, CANF3R1Base> ;
    using FB23 = CAN_F3R1_FB23_Values<CAN::F3R1, 23, 1, ReadWriteMode, CANF3R1Base> ;
    using FB24 = CAN_F3R1_FB24_Values<CAN::F3R1, 24, 1, ReadWriteMode, CANF3R1Base> ;
    using FB25 = CAN_F3R1_FB25_Values<CAN::F3R1, 25, 1, ReadWriteMode, CANF3R1Base> ;
    using FB26 = CAN_F3R1_FB26_Values<CAN::F3R1, 26, 1, ReadWriteMode, CANF3R1Base> ;
    using FB27 = CAN_F3R1_FB27_Values<CAN::F3R1, 27, 1, ReadWriteMode, CANF3R1Base> ;
    using FB28 = CAN_F3R1_FB28_Values<CAN::F3R1, 28, 1, ReadWriteMode, CANF3R1Base> ;
    using FB29 = CAN_F3R1_FB29_Values<CAN::F3R1, 29, 1, ReadWriteMode, CANF3R1Base> ;
    using FB30 = CAN_F3R1_FB30_Values<CAN::F3R1, 30, 1, ReadWriteMode, CANF3R1Base> ;
    using FB31 = CAN_F3R1_FB31_Values<CAN::F3R1, 31, 1, ReadWriteMode, CANF3R1Base> ;
    using FieldValues = CAN_F3R1_FB31_Values<CAN::F3R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3R1Pack  = Register<0x40006658, 32, ReadWriteMode, CANF3R1Base, T...> ;

  struct CANF3R2Base {} ;

  struct F3R2 : public RegisterBase<0x4000665C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F3R2_FB0_Values<CAN::F3R2, 0, 1, ReadWriteMode, CANF3R2Base> ;
    using FB1 = CAN_F3R2_FB1_Values<CAN::F3R2, 1, 1, ReadWriteMode, CANF3R2Base> ;
    using FB2 = CAN_F3R2_FB2_Values<CAN::F3R2, 2, 1, ReadWriteMode, CANF3R2Base> ;
    using FB3 = CAN_F3R2_FB3_Values<CAN::F3R2, 3, 1, ReadWriteMode, CANF3R2Base> ;
    using FB4 = CAN_F3R2_FB4_Values<CAN::F3R2, 4, 1, ReadWriteMode, CANF3R2Base> ;
    using FB5 = CAN_F3R2_FB5_Values<CAN::F3R2, 5, 1, ReadWriteMode, CANF3R2Base> ;
    using FB6 = CAN_F3R2_FB6_Values<CAN::F3R2, 6, 1, ReadWriteMode, CANF3R2Base> ;
    using FB7 = CAN_F3R2_FB7_Values<CAN::F3R2, 7, 1, ReadWriteMode, CANF3R2Base> ;
    using FB8 = CAN_F3R2_FB8_Values<CAN::F3R2, 8, 1, ReadWriteMode, CANF3R2Base> ;
    using FB9 = CAN_F3R2_FB9_Values<CAN::F3R2, 9, 1, ReadWriteMode, CANF3R2Base> ;
    using FB10 = CAN_F3R2_FB10_Values<CAN::F3R2, 10, 1, ReadWriteMode, CANF3R2Base> ;
    using FB11 = CAN_F3R2_FB11_Values<CAN::F3R2, 11, 1, ReadWriteMode, CANF3R2Base> ;
    using FB12 = CAN_F3R2_FB12_Values<CAN::F3R2, 12, 1, ReadWriteMode, CANF3R2Base> ;
    using FB13 = CAN_F3R2_FB13_Values<CAN::F3R2, 13, 1, ReadWriteMode, CANF3R2Base> ;
    using FB14 = CAN_F3R2_FB14_Values<CAN::F3R2, 14, 1, ReadWriteMode, CANF3R2Base> ;
    using FB15 = CAN_F3R2_FB15_Values<CAN::F3R2, 15, 1, ReadWriteMode, CANF3R2Base> ;
    using FB16 = CAN_F3R2_FB16_Values<CAN::F3R2, 16, 1, ReadWriteMode, CANF3R2Base> ;
    using FB17 = CAN_F3R2_FB17_Values<CAN::F3R2, 17, 1, ReadWriteMode, CANF3R2Base> ;
    using FB18 = CAN_F3R2_FB18_Values<CAN::F3R2, 18, 1, ReadWriteMode, CANF3R2Base> ;
    using FB19 = CAN_F3R2_FB19_Values<CAN::F3R2, 19, 1, ReadWriteMode, CANF3R2Base> ;
    using FB20 = CAN_F3R2_FB20_Values<CAN::F3R2, 20, 1, ReadWriteMode, CANF3R2Base> ;
    using FB21 = CAN_F3R2_FB21_Values<CAN::F3R2, 21, 1, ReadWriteMode, CANF3R2Base> ;
    using FB22 = CAN_F3R2_FB22_Values<CAN::F3R2, 22, 1, ReadWriteMode, CANF3R2Base> ;
    using FB23 = CAN_F3R2_FB23_Values<CAN::F3R2, 23, 1, ReadWriteMode, CANF3R2Base> ;
    using FB24 = CAN_F3R2_FB24_Values<CAN::F3R2, 24, 1, ReadWriteMode, CANF3R2Base> ;
    using FB25 = CAN_F3R2_FB25_Values<CAN::F3R2, 25, 1, ReadWriteMode, CANF3R2Base> ;
    using FB26 = CAN_F3R2_FB26_Values<CAN::F3R2, 26, 1, ReadWriteMode, CANF3R2Base> ;
    using FB27 = CAN_F3R2_FB27_Values<CAN::F3R2, 27, 1, ReadWriteMode, CANF3R2Base> ;
    using FB28 = CAN_F3R2_FB28_Values<CAN::F3R2, 28, 1, ReadWriteMode, CANF3R2Base> ;
    using FB29 = CAN_F3R2_FB29_Values<CAN::F3R2, 29, 1, ReadWriteMode, CANF3R2Base> ;
    using FB30 = CAN_F3R2_FB30_Values<CAN::F3R2, 30, 1, ReadWriteMode, CANF3R2Base> ;
    using FB31 = CAN_F3R2_FB31_Values<CAN::F3R2, 31, 1, ReadWriteMode, CANF3R2Base> ;
    using FieldValues = CAN_F3R2_FB31_Values<CAN::F3R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3R2Pack  = Register<0x4000665C, 32, ReadWriteMode, CANF3R2Base, T...> ;

  struct CANF4R1Base {} ;

  struct F4R1 : public RegisterBase<0x40006660, 32, ReadWriteMode>
  {
    using FB0 = CAN_F4R1_FB0_Values<CAN::F4R1, 0, 1, ReadWriteMode, CANF4R1Base> ;
    using FB1 = CAN_F4R1_FB1_Values<CAN::F4R1, 1, 1, ReadWriteMode, CANF4R1Base> ;
    using FB2 = CAN_F4R1_FB2_Values<CAN::F4R1, 2, 1, ReadWriteMode, CANF4R1Base> ;
    using FB3 = CAN_F4R1_FB3_Values<CAN::F4R1, 3, 1, ReadWriteMode, CANF4R1Base> ;
    using FB4 = CAN_F4R1_FB4_Values<CAN::F4R1, 4, 1, ReadWriteMode, CANF4R1Base> ;
    using FB5 = CAN_F4R1_FB5_Values<CAN::F4R1, 5, 1, ReadWriteMode, CANF4R1Base> ;
    using FB6 = CAN_F4R1_FB6_Values<CAN::F4R1, 6, 1, ReadWriteMode, CANF4R1Base> ;
    using FB7 = CAN_F4R1_FB7_Values<CAN::F4R1, 7, 1, ReadWriteMode, CANF4R1Base> ;
    using FB8 = CAN_F4R1_FB8_Values<CAN::F4R1, 8, 1, ReadWriteMode, CANF4R1Base> ;
    using FB9 = CAN_F4R1_FB9_Values<CAN::F4R1, 9, 1, ReadWriteMode, CANF4R1Base> ;
    using FB10 = CAN_F4R1_FB10_Values<CAN::F4R1, 10, 1, ReadWriteMode, CANF4R1Base> ;
    using FB11 = CAN_F4R1_FB11_Values<CAN::F4R1, 11, 1, ReadWriteMode, CANF4R1Base> ;
    using FB12 = CAN_F4R1_FB12_Values<CAN::F4R1, 12, 1, ReadWriteMode, CANF4R1Base> ;
    using FB13 = CAN_F4R1_FB13_Values<CAN::F4R1, 13, 1, ReadWriteMode, CANF4R1Base> ;
    using FB14 = CAN_F4R1_FB14_Values<CAN::F4R1, 14, 1, ReadWriteMode, CANF4R1Base> ;
    using FB15 = CAN_F4R1_FB15_Values<CAN::F4R1, 15, 1, ReadWriteMode, CANF4R1Base> ;
    using FB16 = CAN_F4R1_FB16_Values<CAN::F4R1, 16, 1, ReadWriteMode, CANF4R1Base> ;
    using FB17 = CAN_F4R1_FB17_Values<CAN::F4R1, 17, 1, ReadWriteMode, CANF4R1Base> ;
    using FB18 = CAN_F4R1_FB18_Values<CAN::F4R1, 18, 1, ReadWriteMode, CANF4R1Base> ;
    using FB19 = CAN_F4R1_FB19_Values<CAN::F4R1, 19, 1, ReadWriteMode, CANF4R1Base> ;
    using FB20 = CAN_F4R1_FB20_Values<CAN::F4R1, 20, 1, ReadWriteMode, CANF4R1Base> ;
    using FB21 = CAN_F4R1_FB21_Values<CAN::F4R1, 21, 1, ReadWriteMode, CANF4R1Base> ;
    using FB22 = CAN_F4R1_FB22_Values<CAN::F4R1, 22, 1, ReadWriteMode, CANF4R1Base> ;
    using FB23 = CAN_F4R1_FB23_Values<CAN::F4R1, 23, 1, ReadWriteMode, CANF4R1Base> ;
    using FB24 = CAN_F4R1_FB24_Values<CAN::F4R1, 24, 1, ReadWriteMode, CANF4R1Base> ;
    using FB25 = CAN_F4R1_FB25_Values<CAN::F4R1, 25, 1, ReadWriteMode, CANF4R1Base> ;
    using FB26 = CAN_F4R1_FB26_Values<CAN::F4R1, 26, 1, ReadWriteMode, CANF4R1Base> ;
    using FB27 = CAN_F4R1_FB27_Values<CAN::F4R1, 27, 1, ReadWriteMode, CANF4R1Base> ;
    using FB28 = CAN_F4R1_FB28_Values<CAN::F4R1, 28, 1, ReadWriteMode, CANF4R1Base> ;
    using FB29 = CAN_F4R1_FB29_Values<CAN::F4R1, 29, 1, ReadWriteMode, CANF4R1Base> ;
    using FB30 = CAN_F4R1_FB30_Values<CAN::F4R1, 30, 1, ReadWriteMode, CANF4R1Base> ;
    using FB31 = CAN_F4R1_FB31_Values<CAN::F4R1, 31, 1, ReadWriteMode, CANF4R1Base> ;
    using FieldValues = CAN_F4R1_FB31_Values<CAN::F4R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4R1Pack  = Register<0x40006660, 32, ReadWriteMode, CANF4R1Base, T...> ;

  struct CANF4R2Base {} ;

  struct F4R2 : public RegisterBase<0x40006664, 32, ReadWriteMode>
  {
    using FB0 = CAN_F4R2_FB0_Values<CAN::F4R2, 0, 1, ReadWriteMode, CANF4R2Base> ;
    using FB1 = CAN_F4R2_FB1_Values<CAN::F4R2, 1, 1, ReadWriteMode, CANF4R2Base> ;
    using FB2 = CAN_F4R2_FB2_Values<CAN::F4R2, 2, 1, ReadWriteMode, CANF4R2Base> ;
    using FB3 = CAN_F4R2_FB3_Values<CAN::F4R2, 3, 1, ReadWriteMode, CANF4R2Base> ;
    using FB4 = CAN_F4R2_FB4_Values<CAN::F4R2, 4, 1, ReadWriteMode, CANF4R2Base> ;
    using FB5 = CAN_F4R2_FB5_Values<CAN::F4R2, 5, 1, ReadWriteMode, CANF4R2Base> ;
    using FB6 = CAN_F4R2_FB6_Values<CAN::F4R2, 6, 1, ReadWriteMode, CANF4R2Base> ;
    using FB7 = CAN_F4R2_FB7_Values<CAN::F4R2, 7, 1, ReadWriteMode, CANF4R2Base> ;
    using FB8 = CAN_F4R2_FB8_Values<CAN::F4R2, 8, 1, ReadWriteMode, CANF4R2Base> ;
    using FB9 = CAN_F4R2_FB9_Values<CAN::F4R2, 9, 1, ReadWriteMode, CANF4R2Base> ;
    using FB10 = CAN_F4R2_FB10_Values<CAN::F4R2, 10, 1, ReadWriteMode, CANF4R2Base> ;
    using FB11 = CAN_F4R2_FB11_Values<CAN::F4R2, 11, 1, ReadWriteMode, CANF4R2Base> ;
    using FB12 = CAN_F4R2_FB12_Values<CAN::F4R2, 12, 1, ReadWriteMode, CANF4R2Base> ;
    using FB13 = CAN_F4R2_FB13_Values<CAN::F4R2, 13, 1, ReadWriteMode, CANF4R2Base> ;
    using FB14 = CAN_F4R2_FB14_Values<CAN::F4R2, 14, 1, ReadWriteMode, CANF4R2Base> ;
    using FB15 = CAN_F4R2_FB15_Values<CAN::F4R2, 15, 1, ReadWriteMode, CANF4R2Base> ;
    using FB16 = CAN_F4R2_FB16_Values<CAN::F4R2, 16, 1, ReadWriteMode, CANF4R2Base> ;
    using FB17 = CAN_F4R2_FB17_Values<CAN::F4R2, 17, 1, ReadWriteMode, CANF4R2Base> ;
    using FB18 = CAN_F4R2_FB18_Values<CAN::F4R2, 18, 1, ReadWriteMode, CANF4R2Base> ;
    using FB19 = CAN_F4R2_FB19_Values<CAN::F4R2, 19, 1, ReadWriteMode, CANF4R2Base> ;
    using FB20 = CAN_F4R2_FB20_Values<CAN::F4R2, 20, 1, ReadWriteMode, CANF4R2Base> ;
    using FB21 = CAN_F4R2_FB21_Values<CAN::F4R2, 21, 1, ReadWriteMode, CANF4R2Base> ;
    using FB22 = CAN_F4R2_FB22_Values<CAN::F4R2, 22, 1, ReadWriteMode, CANF4R2Base> ;
    using FB23 = CAN_F4R2_FB23_Values<CAN::F4R2, 23, 1, ReadWriteMode, CANF4R2Base> ;
    using FB24 = CAN_F4R2_FB24_Values<CAN::F4R2, 24, 1, ReadWriteMode, CANF4R2Base> ;
    using FB25 = CAN_F4R2_FB25_Values<CAN::F4R2, 25, 1, ReadWriteMode, CANF4R2Base> ;
    using FB26 = CAN_F4R2_FB26_Values<CAN::F4R2, 26, 1, ReadWriteMode, CANF4R2Base> ;
    using FB27 = CAN_F4R2_FB27_Values<CAN::F4R2, 27, 1, ReadWriteMode, CANF4R2Base> ;
    using FB28 = CAN_F4R2_FB28_Values<CAN::F4R2, 28, 1, ReadWriteMode, CANF4R2Base> ;
    using FB29 = CAN_F4R2_FB29_Values<CAN::F4R2, 29, 1, ReadWriteMode, CANF4R2Base> ;
    using FB30 = CAN_F4R2_FB30_Values<CAN::F4R2, 30, 1, ReadWriteMode, CANF4R2Base> ;
    using FB31 = CAN_F4R2_FB31_Values<CAN::F4R2, 31, 1, ReadWriteMode, CANF4R2Base> ;
    using FieldValues = CAN_F4R2_FB31_Values<CAN::F4R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4R2Pack  = Register<0x40006664, 32, ReadWriteMode, CANF4R2Base, T...> ;

  struct CANF5R1Base {} ;

  struct F5R1 : public RegisterBase<0x40006668, 32, ReadWriteMode>
  {
    using FB0 = CAN_F5R1_FB0_Values<CAN::F5R1, 0, 1, ReadWriteMode, CANF5R1Base> ;
    using FB1 = CAN_F5R1_FB1_Values<CAN::F5R1, 1, 1, ReadWriteMode, CANF5R1Base> ;
    using FB2 = CAN_F5R1_FB2_Values<CAN::F5R1, 2, 1, ReadWriteMode, CANF5R1Base> ;
    using FB3 = CAN_F5R1_FB3_Values<CAN::F5R1, 3, 1, ReadWriteMode, CANF5R1Base> ;
    using FB4 = CAN_F5R1_FB4_Values<CAN::F5R1, 4, 1, ReadWriteMode, CANF5R1Base> ;
    using FB5 = CAN_F5R1_FB5_Values<CAN::F5R1, 5, 1, ReadWriteMode, CANF5R1Base> ;
    using FB6 = CAN_F5R1_FB6_Values<CAN::F5R1, 6, 1, ReadWriteMode, CANF5R1Base> ;
    using FB7 = CAN_F5R1_FB7_Values<CAN::F5R1, 7, 1, ReadWriteMode, CANF5R1Base> ;
    using FB8 = CAN_F5R1_FB8_Values<CAN::F5R1, 8, 1, ReadWriteMode, CANF5R1Base> ;
    using FB9 = CAN_F5R1_FB9_Values<CAN::F5R1, 9, 1, ReadWriteMode, CANF5R1Base> ;
    using FB10 = CAN_F5R1_FB10_Values<CAN::F5R1, 10, 1, ReadWriteMode, CANF5R1Base> ;
    using FB11 = CAN_F5R1_FB11_Values<CAN::F5R1, 11, 1, ReadWriteMode, CANF5R1Base> ;
    using FB12 = CAN_F5R1_FB12_Values<CAN::F5R1, 12, 1, ReadWriteMode, CANF5R1Base> ;
    using FB13 = CAN_F5R1_FB13_Values<CAN::F5R1, 13, 1, ReadWriteMode, CANF5R1Base> ;
    using FB14 = CAN_F5R1_FB14_Values<CAN::F5R1, 14, 1, ReadWriteMode, CANF5R1Base> ;
    using FB15 = CAN_F5R1_FB15_Values<CAN::F5R1, 15, 1, ReadWriteMode, CANF5R1Base> ;
    using FB16 = CAN_F5R1_FB16_Values<CAN::F5R1, 16, 1, ReadWriteMode, CANF5R1Base> ;
    using FB17 = CAN_F5R1_FB17_Values<CAN::F5R1, 17, 1, ReadWriteMode, CANF5R1Base> ;
    using FB18 = CAN_F5R1_FB18_Values<CAN::F5R1, 18, 1, ReadWriteMode, CANF5R1Base> ;
    using FB19 = CAN_F5R1_FB19_Values<CAN::F5R1, 19, 1, ReadWriteMode, CANF5R1Base> ;
    using FB20 = CAN_F5R1_FB20_Values<CAN::F5R1, 20, 1, ReadWriteMode, CANF5R1Base> ;
    using FB21 = CAN_F5R1_FB21_Values<CAN::F5R1, 21, 1, ReadWriteMode, CANF5R1Base> ;
    using FB22 = CAN_F5R1_FB22_Values<CAN::F5R1, 22, 1, ReadWriteMode, CANF5R1Base> ;
    using FB23 = CAN_F5R1_FB23_Values<CAN::F5R1, 23, 1, ReadWriteMode, CANF5R1Base> ;
    using FB24 = CAN_F5R1_FB24_Values<CAN::F5R1, 24, 1, ReadWriteMode, CANF5R1Base> ;
    using FB25 = CAN_F5R1_FB25_Values<CAN::F5R1, 25, 1, ReadWriteMode, CANF5R1Base> ;
    using FB26 = CAN_F5R1_FB26_Values<CAN::F5R1, 26, 1, ReadWriteMode, CANF5R1Base> ;
    using FB27 = CAN_F5R1_FB27_Values<CAN::F5R1, 27, 1, ReadWriteMode, CANF5R1Base> ;
    using FB28 = CAN_F5R1_FB28_Values<CAN::F5R1, 28, 1, ReadWriteMode, CANF5R1Base> ;
    using FB29 = CAN_F5R1_FB29_Values<CAN::F5R1, 29, 1, ReadWriteMode, CANF5R1Base> ;
    using FB30 = CAN_F5R1_FB30_Values<CAN::F5R1, 30, 1, ReadWriteMode, CANF5R1Base> ;
    using FB31 = CAN_F5R1_FB31_Values<CAN::F5R1, 31, 1, ReadWriteMode, CANF5R1Base> ;
    using FieldValues = CAN_F5R1_FB31_Values<CAN::F5R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5R1Pack  = Register<0x40006668, 32, ReadWriteMode, CANF5R1Base, T...> ;

  struct CANF5R2Base {} ;

  struct F5R2 : public RegisterBase<0x4000666C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F5R2_FB0_Values<CAN::F5R2, 0, 1, ReadWriteMode, CANF5R2Base> ;
    using FB1 = CAN_F5R2_FB1_Values<CAN::F5R2, 1, 1, ReadWriteMode, CANF5R2Base> ;
    using FB2 = CAN_F5R2_FB2_Values<CAN::F5R2, 2, 1, ReadWriteMode, CANF5R2Base> ;
    using FB3 = CAN_F5R2_FB3_Values<CAN::F5R2, 3, 1, ReadWriteMode, CANF5R2Base> ;
    using FB4 = CAN_F5R2_FB4_Values<CAN::F5R2, 4, 1, ReadWriteMode, CANF5R2Base> ;
    using FB5 = CAN_F5R2_FB5_Values<CAN::F5R2, 5, 1, ReadWriteMode, CANF5R2Base> ;
    using FB6 = CAN_F5R2_FB6_Values<CAN::F5R2, 6, 1, ReadWriteMode, CANF5R2Base> ;
    using FB7 = CAN_F5R2_FB7_Values<CAN::F5R2, 7, 1, ReadWriteMode, CANF5R2Base> ;
    using FB8 = CAN_F5R2_FB8_Values<CAN::F5R2, 8, 1, ReadWriteMode, CANF5R2Base> ;
    using FB9 = CAN_F5R2_FB9_Values<CAN::F5R2, 9, 1, ReadWriteMode, CANF5R2Base> ;
    using FB10 = CAN_F5R2_FB10_Values<CAN::F5R2, 10, 1, ReadWriteMode, CANF5R2Base> ;
    using FB11 = CAN_F5R2_FB11_Values<CAN::F5R2, 11, 1, ReadWriteMode, CANF5R2Base> ;
    using FB12 = CAN_F5R2_FB12_Values<CAN::F5R2, 12, 1, ReadWriteMode, CANF5R2Base> ;
    using FB13 = CAN_F5R2_FB13_Values<CAN::F5R2, 13, 1, ReadWriteMode, CANF5R2Base> ;
    using FB14 = CAN_F5R2_FB14_Values<CAN::F5R2, 14, 1, ReadWriteMode, CANF5R2Base> ;
    using FB15 = CAN_F5R2_FB15_Values<CAN::F5R2, 15, 1, ReadWriteMode, CANF5R2Base> ;
    using FB16 = CAN_F5R2_FB16_Values<CAN::F5R2, 16, 1, ReadWriteMode, CANF5R2Base> ;
    using FB17 = CAN_F5R2_FB17_Values<CAN::F5R2, 17, 1, ReadWriteMode, CANF5R2Base> ;
    using FB18 = CAN_F5R2_FB18_Values<CAN::F5R2, 18, 1, ReadWriteMode, CANF5R2Base> ;
    using FB19 = CAN_F5R2_FB19_Values<CAN::F5R2, 19, 1, ReadWriteMode, CANF5R2Base> ;
    using FB20 = CAN_F5R2_FB20_Values<CAN::F5R2, 20, 1, ReadWriteMode, CANF5R2Base> ;
    using FB21 = CAN_F5R2_FB21_Values<CAN::F5R2, 21, 1, ReadWriteMode, CANF5R2Base> ;
    using FB22 = CAN_F5R2_FB22_Values<CAN::F5R2, 22, 1, ReadWriteMode, CANF5R2Base> ;
    using FB23 = CAN_F5R2_FB23_Values<CAN::F5R2, 23, 1, ReadWriteMode, CANF5R2Base> ;
    using FB24 = CAN_F5R2_FB24_Values<CAN::F5R2, 24, 1, ReadWriteMode, CANF5R2Base> ;
    using FB25 = CAN_F5R2_FB25_Values<CAN::F5R2, 25, 1, ReadWriteMode, CANF5R2Base> ;
    using FB26 = CAN_F5R2_FB26_Values<CAN::F5R2, 26, 1, ReadWriteMode, CANF5R2Base> ;
    using FB27 = CAN_F5R2_FB27_Values<CAN::F5R2, 27, 1, ReadWriteMode, CANF5R2Base> ;
    using FB28 = CAN_F5R2_FB28_Values<CAN::F5R2, 28, 1, ReadWriteMode, CANF5R2Base> ;
    using FB29 = CAN_F5R2_FB29_Values<CAN::F5R2, 29, 1, ReadWriteMode, CANF5R2Base> ;
    using FB30 = CAN_F5R2_FB30_Values<CAN::F5R2, 30, 1, ReadWriteMode, CANF5R2Base> ;
    using FB31 = CAN_F5R2_FB31_Values<CAN::F5R2, 31, 1, ReadWriteMode, CANF5R2Base> ;
    using FieldValues = CAN_F5R2_FB31_Values<CAN::F5R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5R2Pack  = Register<0x4000666C, 32, ReadWriteMode, CANF5R2Base, T...> ;

  struct CANF6R1Base {} ;

  struct F6R1 : public RegisterBase<0x40006670, 32, ReadWriteMode>
  {
    using FB0 = CAN_F6R1_FB0_Values<CAN::F6R1, 0, 1, ReadWriteMode, CANF6R1Base> ;
    using FB1 = CAN_F6R1_FB1_Values<CAN::F6R1, 1, 1, ReadWriteMode, CANF6R1Base> ;
    using FB2 = CAN_F6R1_FB2_Values<CAN::F6R1, 2, 1, ReadWriteMode, CANF6R1Base> ;
    using FB3 = CAN_F6R1_FB3_Values<CAN::F6R1, 3, 1, ReadWriteMode, CANF6R1Base> ;
    using FB4 = CAN_F6R1_FB4_Values<CAN::F6R1, 4, 1, ReadWriteMode, CANF6R1Base> ;
    using FB5 = CAN_F6R1_FB5_Values<CAN::F6R1, 5, 1, ReadWriteMode, CANF6R1Base> ;
    using FB6 = CAN_F6R1_FB6_Values<CAN::F6R1, 6, 1, ReadWriteMode, CANF6R1Base> ;
    using FB7 = CAN_F6R1_FB7_Values<CAN::F6R1, 7, 1, ReadWriteMode, CANF6R1Base> ;
    using FB8 = CAN_F6R1_FB8_Values<CAN::F6R1, 8, 1, ReadWriteMode, CANF6R1Base> ;
    using FB9 = CAN_F6R1_FB9_Values<CAN::F6R1, 9, 1, ReadWriteMode, CANF6R1Base> ;
    using FB10 = CAN_F6R1_FB10_Values<CAN::F6R1, 10, 1, ReadWriteMode, CANF6R1Base> ;
    using FB11 = CAN_F6R1_FB11_Values<CAN::F6R1, 11, 1, ReadWriteMode, CANF6R1Base> ;
    using FB12 = CAN_F6R1_FB12_Values<CAN::F6R1, 12, 1, ReadWriteMode, CANF6R1Base> ;
    using FB13 = CAN_F6R1_FB13_Values<CAN::F6R1, 13, 1, ReadWriteMode, CANF6R1Base> ;
    using FB14 = CAN_F6R1_FB14_Values<CAN::F6R1, 14, 1, ReadWriteMode, CANF6R1Base> ;
    using FB15 = CAN_F6R1_FB15_Values<CAN::F6R1, 15, 1, ReadWriteMode, CANF6R1Base> ;
    using FB16 = CAN_F6R1_FB16_Values<CAN::F6R1, 16, 1, ReadWriteMode, CANF6R1Base> ;
    using FB17 = CAN_F6R1_FB17_Values<CAN::F6R1, 17, 1, ReadWriteMode, CANF6R1Base> ;
    using FB18 = CAN_F6R1_FB18_Values<CAN::F6R1, 18, 1, ReadWriteMode, CANF6R1Base> ;
    using FB19 = CAN_F6R1_FB19_Values<CAN::F6R1, 19, 1, ReadWriteMode, CANF6R1Base> ;
    using FB20 = CAN_F6R1_FB20_Values<CAN::F6R1, 20, 1, ReadWriteMode, CANF6R1Base> ;
    using FB21 = CAN_F6R1_FB21_Values<CAN::F6R1, 21, 1, ReadWriteMode, CANF6R1Base> ;
    using FB22 = CAN_F6R1_FB22_Values<CAN::F6R1, 22, 1, ReadWriteMode, CANF6R1Base> ;
    using FB23 = CAN_F6R1_FB23_Values<CAN::F6R1, 23, 1, ReadWriteMode, CANF6R1Base> ;
    using FB24 = CAN_F6R1_FB24_Values<CAN::F6R1, 24, 1, ReadWriteMode, CANF6R1Base> ;
    using FB25 = CAN_F6R1_FB25_Values<CAN::F6R1, 25, 1, ReadWriteMode, CANF6R1Base> ;
    using FB26 = CAN_F6R1_FB26_Values<CAN::F6R1, 26, 1, ReadWriteMode, CANF6R1Base> ;
    using FB27 = CAN_F6R1_FB27_Values<CAN::F6R1, 27, 1, ReadWriteMode, CANF6R1Base> ;
    using FB28 = CAN_F6R1_FB28_Values<CAN::F6R1, 28, 1, ReadWriteMode, CANF6R1Base> ;
    using FB29 = CAN_F6R1_FB29_Values<CAN::F6R1, 29, 1, ReadWriteMode, CANF6R1Base> ;
    using FB30 = CAN_F6R1_FB30_Values<CAN::F6R1, 30, 1, ReadWriteMode, CANF6R1Base> ;
    using FB31 = CAN_F6R1_FB31_Values<CAN::F6R1, 31, 1, ReadWriteMode, CANF6R1Base> ;
    using FieldValues = CAN_F6R1_FB31_Values<CAN::F6R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6R1Pack  = Register<0x40006670, 32, ReadWriteMode, CANF6R1Base, T...> ;

  struct CANF6R2Base {} ;

  struct F6R2 : public RegisterBase<0x40006674, 32, ReadWriteMode>
  {
    using FB0 = CAN_F6R2_FB0_Values<CAN::F6R2, 0, 1, ReadWriteMode, CANF6R2Base> ;
    using FB1 = CAN_F6R2_FB1_Values<CAN::F6R2, 1, 1, ReadWriteMode, CANF6R2Base> ;
    using FB2 = CAN_F6R2_FB2_Values<CAN::F6R2, 2, 1, ReadWriteMode, CANF6R2Base> ;
    using FB3 = CAN_F6R2_FB3_Values<CAN::F6R2, 3, 1, ReadWriteMode, CANF6R2Base> ;
    using FB4 = CAN_F6R2_FB4_Values<CAN::F6R2, 4, 1, ReadWriteMode, CANF6R2Base> ;
    using FB5 = CAN_F6R2_FB5_Values<CAN::F6R2, 5, 1, ReadWriteMode, CANF6R2Base> ;
    using FB6 = CAN_F6R2_FB6_Values<CAN::F6R2, 6, 1, ReadWriteMode, CANF6R2Base> ;
    using FB7 = CAN_F6R2_FB7_Values<CAN::F6R2, 7, 1, ReadWriteMode, CANF6R2Base> ;
    using FB8 = CAN_F6R2_FB8_Values<CAN::F6R2, 8, 1, ReadWriteMode, CANF6R2Base> ;
    using FB9 = CAN_F6R2_FB9_Values<CAN::F6R2, 9, 1, ReadWriteMode, CANF6R2Base> ;
    using FB10 = CAN_F6R2_FB10_Values<CAN::F6R2, 10, 1, ReadWriteMode, CANF6R2Base> ;
    using FB11 = CAN_F6R2_FB11_Values<CAN::F6R2, 11, 1, ReadWriteMode, CANF6R2Base> ;
    using FB12 = CAN_F6R2_FB12_Values<CAN::F6R2, 12, 1, ReadWriteMode, CANF6R2Base> ;
    using FB13 = CAN_F6R2_FB13_Values<CAN::F6R2, 13, 1, ReadWriteMode, CANF6R2Base> ;
    using FB14 = CAN_F6R2_FB14_Values<CAN::F6R2, 14, 1, ReadWriteMode, CANF6R2Base> ;
    using FB15 = CAN_F6R2_FB15_Values<CAN::F6R2, 15, 1, ReadWriteMode, CANF6R2Base> ;
    using FB16 = CAN_F6R2_FB16_Values<CAN::F6R2, 16, 1, ReadWriteMode, CANF6R2Base> ;
    using FB17 = CAN_F6R2_FB17_Values<CAN::F6R2, 17, 1, ReadWriteMode, CANF6R2Base> ;
    using FB18 = CAN_F6R2_FB18_Values<CAN::F6R2, 18, 1, ReadWriteMode, CANF6R2Base> ;
    using FB19 = CAN_F6R2_FB19_Values<CAN::F6R2, 19, 1, ReadWriteMode, CANF6R2Base> ;
    using FB20 = CAN_F6R2_FB20_Values<CAN::F6R2, 20, 1, ReadWriteMode, CANF6R2Base> ;
    using FB21 = CAN_F6R2_FB21_Values<CAN::F6R2, 21, 1, ReadWriteMode, CANF6R2Base> ;
    using FB22 = CAN_F6R2_FB22_Values<CAN::F6R2, 22, 1, ReadWriteMode, CANF6R2Base> ;
    using FB23 = CAN_F6R2_FB23_Values<CAN::F6R2, 23, 1, ReadWriteMode, CANF6R2Base> ;
    using FB24 = CAN_F6R2_FB24_Values<CAN::F6R2, 24, 1, ReadWriteMode, CANF6R2Base> ;
    using FB25 = CAN_F6R2_FB25_Values<CAN::F6R2, 25, 1, ReadWriteMode, CANF6R2Base> ;
    using FB26 = CAN_F6R2_FB26_Values<CAN::F6R2, 26, 1, ReadWriteMode, CANF6R2Base> ;
    using FB27 = CAN_F6R2_FB27_Values<CAN::F6R2, 27, 1, ReadWriteMode, CANF6R2Base> ;
    using FB28 = CAN_F6R2_FB28_Values<CAN::F6R2, 28, 1, ReadWriteMode, CANF6R2Base> ;
    using FB29 = CAN_F6R2_FB29_Values<CAN::F6R2, 29, 1, ReadWriteMode, CANF6R2Base> ;
    using FB30 = CAN_F6R2_FB30_Values<CAN::F6R2, 30, 1, ReadWriteMode, CANF6R2Base> ;
    using FB31 = CAN_F6R2_FB31_Values<CAN::F6R2, 31, 1, ReadWriteMode, CANF6R2Base> ;
    using FieldValues = CAN_F6R2_FB31_Values<CAN::F6R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6R2Pack  = Register<0x40006674, 32, ReadWriteMode, CANF6R2Base, T...> ;

  struct CANF7R1Base {} ;

  struct F7R1 : public RegisterBase<0x40006678, 32, ReadWriteMode>
  {
    using FB0 = CAN_F7R1_FB0_Values<CAN::F7R1, 0, 1, ReadWriteMode, CANF7R1Base> ;
    using FB1 = CAN_F7R1_FB1_Values<CAN::F7R1, 1, 1, ReadWriteMode, CANF7R1Base> ;
    using FB2 = CAN_F7R1_FB2_Values<CAN::F7R1, 2, 1, ReadWriteMode, CANF7R1Base> ;
    using FB3 = CAN_F7R1_FB3_Values<CAN::F7R1, 3, 1, ReadWriteMode, CANF7R1Base> ;
    using FB4 = CAN_F7R1_FB4_Values<CAN::F7R1, 4, 1, ReadWriteMode, CANF7R1Base> ;
    using FB5 = CAN_F7R1_FB5_Values<CAN::F7R1, 5, 1, ReadWriteMode, CANF7R1Base> ;
    using FB6 = CAN_F7R1_FB6_Values<CAN::F7R1, 6, 1, ReadWriteMode, CANF7R1Base> ;
    using FB7 = CAN_F7R1_FB7_Values<CAN::F7R1, 7, 1, ReadWriteMode, CANF7R1Base> ;
    using FB8 = CAN_F7R1_FB8_Values<CAN::F7R1, 8, 1, ReadWriteMode, CANF7R1Base> ;
    using FB9 = CAN_F7R1_FB9_Values<CAN::F7R1, 9, 1, ReadWriteMode, CANF7R1Base> ;
    using FB10 = CAN_F7R1_FB10_Values<CAN::F7R1, 10, 1, ReadWriteMode, CANF7R1Base> ;
    using FB11 = CAN_F7R1_FB11_Values<CAN::F7R1, 11, 1, ReadWriteMode, CANF7R1Base> ;
    using FB12 = CAN_F7R1_FB12_Values<CAN::F7R1, 12, 1, ReadWriteMode, CANF7R1Base> ;
    using FB13 = CAN_F7R1_FB13_Values<CAN::F7R1, 13, 1, ReadWriteMode, CANF7R1Base> ;
    using FB14 = CAN_F7R1_FB14_Values<CAN::F7R1, 14, 1, ReadWriteMode, CANF7R1Base> ;
    using FB15 = CAN_F7R1_FB15_Values<CAN::F7R1, 15, 1, ReadWriteMode, CANF7R1Base> ;
    using FB16 = CAN_F7R1_FB16_Values<CAN::F7R1, 16, 1, ReadWriteMode, CANF7R1Base> ;
    using FB17 = CAN_F7R1_FB17_Values<CAN::F7R1, 17, 1, ReadWriteMode, CANF7R1Base> ;
    using FB18 = CAN_F7R1_FB18_Values<CAN::F7R1, 18, 1, ReadWriteMode, CANF7R1Base> ;
    using FB19 = CAN_F7R1_FB19_Values<CAN::F7R1, 19, 1, ReadWriteMode, CANF7R1Base> ;
    using FB20 = CAN_F7R1_FB20_Values<CAN::F7R1, 20, 1, ReadWriteMode, CANF7R1Base> ;
    using FB21 = CAN_F7R1_FB21_Values<CAN::F7R1, 21, 1, ReadWriteMode, CANF7R1Base> ;
    using FB22 = CAN_F7R1_FB22_Values<CAN::F7R1, 22, 1, ReadWriteMode, CANF7R1Base> ;
    using FB23 = CAN_F7R1_FB23_Values<CAN::F7R1, 23, 1, ReadWriteMode, CANF7R1Base> ;
    using FB24 = CAN_F7R1_FB24_Values<CAN::F7R1, 24, 1, ReadWriteMode, CANF7R1Base> ;
    using FB25 = CAN_F7R1_FB25_Values<CAN::F7R1, 25, 1, ReadWriteMode, CANF7R1Base> ;
    using FB26 = CAN_F7R1_FB26_Values<CAN::F7R1, 26, 1, ReadWriteMode, CANF7R1Base> ;
    using FB27 = CAN_F7R1_FB27_Values<CAN::F7R1, 27, 1, ReadWriteMode, CANF7R1Base> ;
    using FB28 = CAN_F7R1_FB28_Values<CAN::F7R1, 28, 1, ReadWriteMode, CANF7R1Base> ;
    using FB29 = CAN_F7R1_FB29_Values<CAN::F7R1, 29, 1, ReadWriteMode, CANF7R1Base> ;
    using FB30 = CAN_F7R1_FB30_Values<CAN::F7R1, 30, 1, ReadWriteMode, CANF7R1Base> ;
    using FB31 = CAN_F7R1_FB31_Values<CAN::F7R1, 31, 1, ReadWriteMode, CANF7R1Base> ;
    using FieldValues = CAN_F7R1_FB31_Values<CAN::F7R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7R1Pack  = Register<0x40006678, 32, ReadWriteMode, CANF7R1Base, T...> ;

  struct CANF7R2Base {} ;

  struct F7R2 : public RegisterBase<0x4000667C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F7R2_FB0_Values<CAN::F7R2, 0, 1, ReadWriteMode, CANF7R2Base> ;
    using FB1 = CAN_F7R2_FB1_Values<CAN::F7R2, 1, 1, ReadWriteMode, CANF7R2Base> ;
    using FB2 = CAN_F7R2_FB2_Values<CAN::F7R2, 2, 1, ReadWriteMode, CANF7R2Base> ;
    using FB3 = CAN_F7R2_FB3_Values<CAN::F7R2, 3, 1, ReadWriteMode, CANF7R2Base> ;
    using FB4 = CAN_F7R2_FB4_Values<CAN::F7R2, 4, 1, ReadWriteMode, CANF7R2Base> ;
    using FB5 = CAN_F7R2_FB5_Values<CAN::F7R2, 5, 1, ReadWriteMode, CANF7R2Base> ;
    using FB6 = CAN_F7R2_FB6_Values<CAN::F7R2, 6, 1, ReadWriteMode, CANF7R2Base> ;
    using FB7 = CAN_F7R2_FB7_Values<CAN::F7R2, 7, 1, ReadWriteMode, CANF7R2Base> ;
    using FB8 = CAN_F7R2_FB8_Values<CAN::F7R2, 8, 1, ReadWriteMode, CANF7R2Base> ;
    using FB9 = CAN_F7R2_FB9_Values<CAN::F7R2, 9, 1, ReadWriteMode, CANF7R2Base> ;
    using FB10 = CAN_F7R2_FB10_Values<CAN::F7R2, 10, 1, ReadWriteMode, CANF7R2Base> ;
    using FB11 = CAN_F7R2_FB11_Values<CAN::F7R2, 11, 1, ReadWriteMode, CANF7R2Base> ;
    using FB12 = CAN_F7R2_FB12_Values<CAN::F7R2, 12, 1, ReadWriteMode, CANF7R2Base> ;
    using FB13 = CAN_F7R2_FB13_Values<CAN::F7R2, 13, 1, ReadWriteMode, CANF7R2Base> ;
    using FB14 = CAN_F7R2_FB14_Values<CAN::F7R2, 14, 1, ReadWriteMode, CANF7R2Base> ;
    using FB15 = CAN_F7R2_FB15_Values<CAN::F7R2, 15, 1, ReadWriteMode, CANF7R2Base> ;
    using FB16 = CAN_F7R2_FB16_Values<CAN::F7R2, 16, 1, ReadWriteMode, CANF7R2Base> ;
    using FB17 = CAN_F7R2_FB17_Values<CAN::F7R2, 17, 1, ReadWriteMode, CANF7R2Base> ;
    using FB18 = CAN_F7R2_FB18_Values<CAN::F7R2, 18, 1, ReadWriteMode, CANF7R2Base> ;
    using FB19 = CAN_F7R2_FB19_Values<CAN::F7R2, 19, 1, ReadWriteMode, CANF7R2Base> ;
    using FB20 = CAN_F7R2_FB20_Values<CAN::F7R2, 20, 1, ReadWriteMode, CANF7R2Base> ;
    using FB21 = CAN_F7R2_FB21_Values<CAN::F7R2, 21, 1, ReadWriteMode, CANF7R2Base> ;
    using FB22 = CAN_F7R2_FB22_Values<CAN::F7R2, 22, 1, ReadWriteMode, CANF7R2Base> ;
    using FB23 = CAN_F7R2_FB23_Values<CAN::F7R2, 23, 1, ReadWriteMode, CANF7R2Base> ;
    using FB24 = CAN_F7R2_FB24_Values<CAN::F7R2, 24, 1, ReadWriteMode, CANF7R2Base> ;
    using FB25 = CAN_F7R2_FB25_Values<CAN::F7R2, 25, 1, ReadWriteMode, CANF7R2Base> ;
    using FB26 = CAN_F7R2_FB26_Values<CAN::F7R2, 26, 1, ReadWriteMode, CANF7R2Base> ;
    using FB27 = CAN_F7R2_FB27_Values<CAN::F7R2, 27, 1, ReadWriteMode, CANF7R2Base> ;
    using FB28 = CAN_F7R2_FB28_Values<CAN::F7R2, 28, 1, ReadWriteMode, CANF7R2Base> ;
    using FB29 = CAN_F7R2_FB29_Values<CAN::F7R2, 29, 1, ReadWriteMode, CANF7R2Base> ;
    using FB30 = CAN_F7R2_FB30_Values<CAN::F7R2, 30, 1, ReadWriteMode, CANF7R2Base> ;
    using FB31 = CAN_F7R2_FB31_Values<CAN::F7R2, 31, 1, ReadWriteMode, CANF7R2Base> ;
    using FieldValues = CAN_F7R2_FB31_Values<CAN::F7R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7R2Pack  = Register<0x4000667C, 32, ReadWriteMode, CANF7R2Base, T...> ;

  struct CANF8R1Base {} ;

  struct F8R1 : public RegisterBase<0x40006680, 32, ReadWriteMode>
  {
    using FB0 = CAN_F8R1_FB0_Values<CAN::F8R1, 0, 1, ReadWriteMode, CANF8R1Base> ;
    using FB1 = CAN_F8R1_FB1_Values<CAN::F8R1, 1, 1, ReadWriteMode, CANF8R1Base> ;
    using FB2 = CAN_F8R1_FB2_Values<CAN::F8R1, 2, 1, ReadWriteMode, CANF8R1Base> ;
    using FB3 = CAN_F8R1_FB3_Values<CAN::F8R1, 3, 1, ReadWriteMode, CANF8R1Base> ;
    using FB4 = CAN_F8R1_FB4_Values<CAN::F8R1, 4, 1, ReadWriteMode, CANF8R1Base> ;
    using FB5 = CAN_F8R1_FB5_Values<CAN::F8R1, 5, 1, ReadWriteMode, CANF8R1Base> ;
    using FB6 = CAN_F8R1_FB6_Values<CAN::F8R1, 6, 1, ReadWriteMode, CANF8R1Base> ;
    using FB7 = CAN_F8R1_FB7_Values<CAN::F8R1, 7, 1, ReadWriteMode, CANF8R1Base> ;
    using FB8 = CAN_F8R1_FB8_Values<CAN::F8R1, 8, 1, ReadWriteMode, CANF8R1Base> ;
    using FB9 = CAN_F8R1_FB9_Values<CAN::F8R1, 9, 1, ReadWriteMode, CANF8R1Base> ;
    using FB10 = CAN_F8R1_FB10_Values<CAN::F8R1, 10, 1, ReadWriteMode, CANF8R1Base> ;
    using FB11 = CAN_F8R1_FB11_Values<CAN::F8R1, 11, 1, ReadWriteMode, CANF8R1Base> ;
    using FB12 = CAN_F8R1_FB12_Values<CAN::F8R1, 12, 1, ReadWriteMode, CANF8R1Base> ;
    using FB13 = CAN_F8R1_FB13_Values<CAN::F8R1, 13, 1, ReadWriteMode, CANF8R1Base> ;
    using FB14 = CAN_F8R1_FB14_Values<CAN::F8R1, 14, 1, ReadWriteMode, CANF8R1Base> ;
    using FB15 = CAN_F8R1_FB15_Values<CAN::F8R1, 15, 1, ReadWriteMode, CANF8R1Base> ;
    using FB16 = CAN_F8R1_FB16_Values<CAN::F8R1, 16, 1, ReadWriteMode, CANF8R1Base> ;
    using FB17 = CAN_F8R1_FB17_Values<CAN::F8R1, 17, 1, ReadWriteMode, CANF8R1Base> ;
    using FB18 = CAN_F8R1_FB18_Values<CAN::F8R1, 18, 1, ReadWriteMode, CANF8R1Base> ;
    using FB19 = CAN_F8R1_FB19_Values<CAN::F8R1, 19, 1, ReadWriteMode, CANF8R1Base> ;
    using FB20 = CAN_F8R1_FB20_Values<CAN::F8R1, 20, 1, ReadWriteMode, CANF8R1Base> ;
    using FB21 = CAN_F8R1_FB21_Values<CAN::F8R1, 21, 1, ReadWriteMode, CANF8R1Base> ;
    using FB22 = CAN_F8R1_FB22_Values<CAN::F8R1, 22, 1, ReadWriteMode, CANF8R1Base> ;
    using FB23 = CAN_F8R1_FB23_Values<CAN::F8R1, 23, 1, ReadWriteMode, CANF8R1Base> ;
    using FB24 = CAN_F8R1_FB24_Values<CAN::F8R1, 24, 1, ReadWriteMode, CANF8R1Base> ;
    using FB25 = CAN_F8R1_FB25_Values<CAN::F8R1, 25, 1, ReadWriteMode, CANF8R1Base> ;
    using FB26 = CAN_F8R1_FB26_Values<CAN::F8R1, 26, 1, ReadWriteMode, CANF8R1Base> ;
    using FB27 = CAN_F8R1_FB27_Values<CAN::F8R1, 27, 1, ReadWriteMode, CANF8R1Base> ;
    using FB28 = CAN_F8R1_FB28_Values<CAN::F8R1, 28, 1, ReadWriteMode, CANF8R1Base> ;
    using FB29 = CAN_F8R1_FB29_Values<CAN::F8R1, 29, 1, ReadWriteMode, CANF8R1Base> ;
    using FB30 = CAN_F8R1_FB30_Values<CAN::F8R1, 30, 1, ReadWriteMode, CANF8R1Base> ;
    using FB31 = CAN_F8R1_FB31_Values<CAN::F8R1, 31, 1, ReadWriteMode, CANF8R1Base> ;
    using FieldValues = CAN_F8R1_FB31_Values<CAN::F8R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8R1Pack  = Register<0x40006680, 32, ReadWriteMode, CANF8R1Base, T...> ;

  struct CANF8R2Base {} ;

  struct F8R2 : public RegisterBase<0x40006684, 32, ReadWriteMode>
  {
    using FB0 = CAN_F8R2_FB0_Values<CAN::F8R2, 0, 1, ReadWriteMode, CANF8R2Base> ;
    using FB1 = CAN_F8R2_FB1_Values<CAN::F8R2, 1, 1, ReadWriteMode, CANF8R2Base> ;
    using FB2 = CAN_F8R2_FB2_Values<CAN::F8R2, 2, 1, ReadWriteMode, CANF8R2Base> ;
    using FB3 = CAN_F8R2_FB3_Values<CAN::F8R2, 3, 1, ReadWriteMode, CANF8R2Base> ;
    using FB4 = CAN_F8R2_FB4_Values<CAN::F8R2, 4, 1, ReadWriteMode, CANF8R2Base> ;
    using FB5 = CAN_F8R2_FB5_Values<CAN::F8R2, 5, 1, ReadWriteMode, CANF8R2Base> ;
    using FB6 = CAN_F8R2_FB6_Values<CAN::F8R2, 6, 1, ReadWriteMode, CANF8R2Base> ;
    using FB7 = CAN_F8R2_FB7_Values<CAN::F8R2, 7, 1, ReadWriteMode, CANF8R2Base> ;
    using FB8 = CAN_F8R2_FB8_Values<CAN::F8R2, 8, 1, ReadWriteMode, CANF8R2Base> ;
    using FB9 = CAN_F8R2_FB9_Values<CAN::F8R2, 9, 1, ReadWriteMode, CANF8R2Base> ;
    using FB10 = CAN_F8R2_FB10_Values<CAN::F8R2, 10, 1, ReadWriteMode, CANF8R2Base> ;
    using FB11 = CAN_F8R2_FB11_Values<CAN::F8R2, 11, 1, ReadWriteMode, CANF8R2Base> ;
    using FB12 = CAN_F8R2_FB12_Values<CAN::F8R2, 12, 1, ReadWriteMode, CANF8R2Base> ;
    using FB13 = CAN_F8R2_FB13_Values<CAN::F8R2, 13, 1, ReadWriteMode, CANF8R2Base> ;
    using FB14 = CAN_F8R2_FB14_Values<CAN::F8R2, 14, 1, ReadWriteMode, CANF8R2Base> ;
    using FB15 = CAN_F8R2_FB15_Values<CAN::F8R2, 15, 1, ReadWriteMode, CANF8R2Base> ;
    using FB16 = CAN_F8R2_FB16_Values<CAN::F8R2, 16, 1, ReadWriteMode, CANF8R2Base> ;
    using FB17 = CAN_F8R2_FB17_Values<CAN::F8R2, 17, 1, ReadWriteMode, CANF8R2Base> ;
    using FB18 = CAN_F8R2_FB18_Values<CAN::F8R2, 18, 1, ReadWriteMode, CANF8R2Base> ;
    using FB19 = CAN_F8R2_FB19_Values<CAN::F8R2, 19, 1, ReadWriteMode, CANF8R2Base> ;
    using FB20 = CAN_F8R2_FB20_Values<CAN::F8R2, 20, 1, ReadWriteMode, CANF8R2Base> ;
    using FB21 = CAN_F8R2_FB21_Values<CAN::F8R2, 21, 1, ReadWriteMode, CANF8R2Base> ;
    using FB22 = CAN_F8R2_FB22_Values<CAN::F8R2, 22, 1, ReadWriteMode, CANF8R2Base> ;
    using FB23 = CAN_F8R2_FB23_Values<CAN::F8R2, 23, 1, ReadWriteMode, CANF8R2Base> ;
    using FB24 = CAN_F8R2_FB24_Values<CAN::F8R2, 24, 1, ReadWriteMode, CANF8R2Base> ;
    using FB25 = CAN_F8R2_FB25_Values<CAN::F8R2, 25, 1, ReadWriteMode, CANF8R2Base> ;
    using FB26 = CAN_F8R2_FB26_Values<CAN::F8R2, 26, 1, ReadWriteMode, CANF8R2Base> ;
    using FB27 = CAN_F8R2_FB27_Values<CAN::F8R2, 27, 1, ReadWriteMode, CANF8R2Base> ;
    using FB28 = CAN_F8R2_FB28_Values<CAN::F8R2, 28, 1, ReadWriteMode, CANF8R2Base> ;
    using FB29 = CAN_F8R2_FB29_Values<CAN::F8R2, 29, 1, ReadWriteMode, CANF8R2Base> ;
    using FB30 = CAN_F8R2_FB30_Values<CAN::F8R2, 30, 1, ReadWriteMode, CANF8R2Base> ;
    using FB31 = CAN_F8R2_FB31_Values<CAN::F8R2, 31, 1, ReadWriteMode, CANF8R2Base> ;
    using FieldValues = CAN_F8R2_FB31_Values<CAN::F8R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8R2Pack  = Register<0x40006684, 32, ReadWriteMode, CANF8R2Base, T...> ;

  struct CANF9R1Base {} ;

  struct F9R1 : public RegisterBase<0x40006688, 32, ReadWriteMode>
  {
    using FB0 = CAN_F9R1_FB0_Values<CAN::F9R1, 0, 1, ReadWriteMode, CANF9R1Base> ;
    using FB1 = CAN_F9R1_FB1_Values<CAN::F9R1, 1, 1, ReadWriteMode, CANF9R1Base> ;
    using FB2 = CAN_F9R1_FB2_Values<CAN::F9R1, 2, 1, ReadWriteMode, CANF9R1Base> ;
    using FB3 = CAN_F9R1_FB3_Values<CAN::F9R1, 3, 1, ReadWriteMode, CANF9R1Base> ;
    using FB4 = CAN_F9R1_FB4_Values<CAN::F9R1, 4, 1, ReadWriteMode, CANF9R1Base> ;
    using FB5 = CAN_F9R1_FB5_Values<CAN::F9R1, 5, 1, ReadWriteMode, CANF9R1Base> ;
    using FB6 = CAN_F9R1_FB6_Values<CAN::F9R1, 6, 1, ReadWriteMode, CANF9R1Base> ;
    using FB7 = CAN_F9R1_FB7_Values<CAN::F9R1, 7, 1, ReadWriteMode, CANF9R1Base> ;
    using FB8 = CAN_F9R1_FB8_Values<CAN::F9R1, 8, 1, ReadWriteMode, CANF9R1Base> ;
    using FB9 = CAN_F9R1_FB9_Values<CAN::F9R1, 9, 1, ReadWriteMode, CANF9R1Base> ;
    using FB10 = CAN_F9R1_FB10_Values<CAN::F9R1, 10, 1, ReadWriteMode, CANF9R1Base> ;
    using FB11 = CAN_F9R1_FB11_Values<CAN::F9R1, 11, 1, ReadWriteMode, CANF9R1Base> ;
    using FB12 = CAN_F9R1_FB12_Values<CAN::F9R1, 12, 1, ReadWriteMode, CANF9R1Base> ;
    using FB13 = CAN_F9R1_FB13_Values<CAN::F9R1, 13, 1, ReadWriteMode, CANF9R1Base> ;
    using FB14 = CAN_F9R1_FB14_Values<CAN::F9R1, 14, 1, ReadWriteMode, CANF9R1Base> ;
    using FB15 = CAN_F9R1_FB15_Values<CAN::F9R1, 15, 1, ReadWriteMode, CANF9R1Base> ;
    using FB16 = CAN_F9R1_FB16_Values<CAN::F9R1, 16, 1, ReadWriteMode, CANF9R1Base> ;
    using FB17 = CAN_F9R1_FB17_Values<CAN::F9R1, 17, 1, ReadWriteMode, CANF9R1Base> ;
    using FB18 = CAN_F9R1_FB18_Values<CAN::F9R1, 18, 1, ReadWriteMode, CANF9R1Base> ;
    using FB19 = CAN_F9R1_FB19_Values<CAN::F9R1, 19, 1, ReadWriteMode, CANF9R1Base> ;
    using FB20 = CAN_F9R1_FB20_Values<CAN::F9R1, 20, 1, ReadWriteMode, CANF9R1Base> ;
    using FB21 = CAN_F9R1_FB21_Values<CAN::F9R1, 21, 1, ReadWriteMode, CANF9R1Base> ;
    using FB22 = CAN_F9R1_FB22_Values<CAN::F9R1, 22, 1, ReadWriteMode, CANF9R1Base> ;
    using FB23 = CAN_F9R1_FB23_Values<CAN::F9R1, 23, 1, ReadWriteMode, CANF9R1Base> ;
    using FB24 = CAN_F9R1_FB24_Values<CAN::F9R1, 24, 1, ReadWriteMode, CANF9R1Base> ;
    using FB25 = CAN_F9R1_FB25_Values<CAN::F9R1, 25, 1, ReadWriteMode, CANF9R1Base> ;
    using FB26 = CAN_F9R1_FB26_Values<CAN::F9R1, 26, 1, ReadWriteMode, CANF9R1Base> ;
    using FB27 = CAN_F9R1_FB27_Values<CAN::F9R1, 27, 1, ReadWriteMode, CANF9R1Base> ;
    using FB28 = CAN_F9R1_FB28_Values<CAN::F9R1, 28, 1, ReadWriteMode, CANF9R1Base> ;
    using FB29 = CAN_F9R1_FB29_Values<CAN::F9R1, 29, 1, ReadWriteMode, CANF9R1Base> ;
    using FB30 = CAN_F9R1_FB30_Values<CAN::F9R1, 30, 1, ReadWriteMode, CANF9R1Base> ;
    using FB31 = CAN_F9R1_FB31_Values<CAN::F9R1, 31, 1, ReadWriteMode, CANF9R1Base> ;
    using FieldValues = CAN_F9R1_FB31_Values<CAN::F9R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9R1Pack  = Register<0x40006688, 32, ReadWriteMode, CANF9R1Base, T...> ;

  struct CANF9R2Base {} ;

  struct F9R2 : public RegisterBase<0x4000668C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F9R2_FB0_Values<CAN::F9R2, 0, 1, ReadWriteMode, CANF9R2Base> ;
    using FB1 = CAN_F9R2_FB1_Values<CAN::F9R2, 1, 1, ReadWriteMode, CANF9R2Base> ;
    using FB2 = CAN_F9R2_FB2_Values<CAN::F9R2, 2, 1, ReadWriteMode, CANF9R2Base> ;
    using FB3 = CAN_F9R2_FB3_Values<CAN::F9R2, 3, 1, ReadWriteMode, CANF9R2Base> ;
    using FB4 = CAN_F9R2_FB4_Values<CAN::F9R2, 4, 1, ReadWriteMode, CANF9R2Base> ;
    using FB5 = CAN_F9R2_FB5_Values<CAN::F9R2, 5, 1, ReadWriteMode, CANF9R2Base> ;
    using FB6 = CAN_F9R2_FB6_Values<CAN::F9R2, 6, 1, ReadWriteMode, CANF9R2Base> ;
    using FB7 = CAN_F9R2_FB7_Values<CAN::F9R2, 7, 1, ReadWriteMode, CANF9R2Base> ;
    using FB8 = CAN_F9R2_FB8_Values<CAN::F9R2, 8, 1, ReadWriteMode, CANF9R2Base> ;
    using FB9 = CAN_F9R2_FB9_Values<CAN::F9R2, 9, 1, ReadWriteMode, CANF9R2Base> ;
    using FB10 = CAN_F9R2_FB10_Values<CAN::F9R2, 10, 1, ReadWriteMode, CANF9R2Base> ;
    using FB11 = CAN_F9R2_FB11_Values<CAN::F9R2, 11, 1, ReadWriteMode, CANF9R2Base> ;
    using FB12 = CAN_F9R2_FB12_Values<CAN::F9R2, 12, 1, ReadWriteMode, CANF9R2Base> ;
    using FB13 = CAN_F9R2_FB13_Values<CAN::F9R2, 13, 1, ReadWriteMode, CANF9R2Base> ;
    using FB14 = CAN_F9R2_FB14_Values<CAN::F9R2, 14, 1, ReadWriteMode, CANF9R2Base> ;
    using FB15 = CAN_F9R2_FB15_Values<CAN::F9R2, 15, 1, ReadWriteMode, CANF9R2Base> ;
    using FB16 = CAN_F9R2_FB16_Values<CAN::F9R2, 16, 1, ReadWriteMode, CANF9R2Base> ;
    using FB17 = CAN_F9R2_FB17_Values<CAN::F9R2, 17, 1, ReadWriteMode, CANF9R2Base> ;
    using FB18 = CAN_F9R2_FB18_Values<CAN::F9R2, 18, 1, ReadWriteMode, CANF9R2Base> ;
    using FB19 = CAN_F9R2_FB19_Values<CAN::F9R2, 19, 1, ReadWriteMode, CANF9R2Base> ;
    using FB20 = CAN_F9R2_FB20_Values<CAN::F9R2, 20, 1, ReadWriteMode, CANF9R2Base> ;
    using FB21 = CAN_F9R2_FB21_Values<CAN::F9R2, 21, 1, ReadWriteMode, CANF9R2Base> ;
    using FB22 = CAN_F9R2_FB22_Values<CAN::F9R2, 22, 1, ReadWriteMode, CANF9R2Base> ;
    using FB23 = CAN_F9R2_FB23_Values<CAN::F9R2, 23, 1, ReadWriteMode, CANF9R2Base> ;
    using FB24 = CAN_F9R2_FB24_Values<CAN::F9R2, 24, 1, ReadWriteMode, CANF9R2Base> ;
    using FB25 = CAN_F9R2_FB25_Values<CAN::F9R2, 25, 1, ReadWriteMode, CANF9R2Base> ;
    using FB26 = CAN_F9R2_FB26_Values<CAN::F9R2, 26, 1, ReadWriteMode, CANF9R2Base> ;
    using FB27 = CAN_F9R2_FB27_Values<CAN::F9R2, 27, 1, ReadWriteMode, CANF9R2Base> ;
    using FB28 = CAN_F9R2_FB28_Values<CAN::F9R2, 28, 1, ReadWriteMode, CANF9R2Base> ;
    using FB29 = CAN_F9R2_FB29_Values<CAN::F9R2, 29, 1, ReadWriteMode, CANF9R2Base> ;
    using FB30 = CAN_F9R2_FB30_Values<CAN::F9R2, 30, 1, ReadWriteMode, CANF9R2Base> ;
    using FB31 = CAN_F9R2_FB31_Values<CAN::F9R2, 31, 1, ReadWriteMode, CANF9R2Base> ;
    using FieldValues = CAN_F9R2_FB31_Values<CAN::F9R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9R2Pack  = Register<0x4000668C, 32, ReadWriteMode, CANF9R2Base, T...> ;

  struct CANF10R1Base {} ;

  struct F10R1 : public RegisterBase<0x40006690, 32, ReadWriteMode>
  {
    using FB0 = CAN_F10R1_FB0_Values<CAN::F10R1, 0, 1, ReadWriteMode, CANF10R1Base> ;
    using FB1 = CAN_F10R1_FB1_Values<CAN::F10R1, 1, 1, ReadWriteMode, CANF10R1Base> ;
    using FB2 = CAN_F10R1_FB2_Values<CAN::F10R1, 2, 1, ReadWriteMode, CANF10R1Base> ;
    using FB3 = CAN_F10R1_FB3_Values<CAN::F10R1, 3, 1, ReadWriteMode, CANF10R1Base> ;
    using FB4 = CAN_F10R1_FB4_Values<CAN::F10R1, 4, 1, ReadWriteMode, CANF10R1Base> ;
    using FB5 = CAN_F10R1_FB5_Values<CAN::F10R1, 5, 1, ReadWriteMode, CANF10R1Base> ;
    using FB6 = CAN_F10R1_FB6_Values<CAN::F10R1, 6, 1, ReadWriteMode, CANF10R1Base> ;
    using FB7 = CAN_F10R1_FB7_Values<CAN::F10R1, 7, 1, ReadWriteMode, CANF10R1Base> ;
    using FB8 = CAN_F10R1_FB8_Values<CAN::F10R1, 8, 1, ReadWriteMode, CANF10R1Base> ;
    using FB9 = CAN_F10R1_FB9_Values<CAN::F10R1, 9, 1, ReadWriteMode, CANF10R1Base> ;
    using FB10 = CAN_F10R1_FB10_Values<CAN::F10R1, 10, 1, ReadWriteMode, CANF10R1Base> ;
    using FB11 = CAN_F10R1_FB11_Values<CAN::F10R1, 11, 1, ReadWriteMode, CANF10R1Base> ;
    using FB12 = CAN_F10R1_FB12_Values<CAN::F10R1, 12, 1, ReadWriteMode, CANF10R1Base> ;
    using FB13 = CAN_F10R1_FB13_Values<CAN::F10R1, 13, 1, ReadWriteMode, CANF10R1Base> ;
    using FB14 = CAN_F10R1_FB14_Values<CAN::F10R1, 14, 1, ReadWriteMode, CANF10R1Base> ;
    using FB15 = CAN_F10R1_FB15_Values<CAN::F10R1, 15, 1, ReadWriteMode, CANF10R1Base> ;
    using FB16 = CAN_F10R1_FB16_Values<CAN::F10R1, 16, 1, ReadWriteMode, CANF10R1Base> ;
    using FB17 = CAN_F10R1_FB17_Values<CAN::F10R1, 17, 1, ReadWriteMode, CANF10R1Base> ;
    using FB18 = CAN_F10R1_FB18_Values<CAN::F10R1, 18, 1, ReadWriteMode, CANF10R1Base> ;
    using FB19 = CAN_F10R1_FB19_Values<CAN::F10R1, 19, 1, ReadWriteMode, CANF10R1Base> ;
    using FB20 = CAN_F10R1_FB20_Values<CAN::F10R1, 20, 1, ReadWriteMode, CANF10R1Base> ;
    using FB21 = CAN_F10R1_FB21_Values<CAN::F10R1, 21, 1, ReadWriteMode, CANF10R1Base> ;
    using FB22 = CAN_F10R1_FB22_Values<CAN::F10R1, 22, 1, ReadWriteMode, CANF10R1Base> ;
    using FB23 = CAN_F10R1_FB23_Values<CAN::F10R1, 23, 1, ReadWriteMode, CANF10R1Base> ;
    using FB24 = CAN_F10R1_FB24_Values<CAN::F10R1, 24, 1, ReadWriteMode, CANF10R1Base> ;
    using FB25 = CAN_F10R1_FB25_Values<CAN::F10R1, 25, 1, ReadWriteMode, CANF10R1Base> ;
    using FB26 = CAN_F10R1_FB26_Values<CAN::F10R1, 26, 1, ReadWriteMode, CANF10R1Base> ;
    using FB27 = CAN_F10R1_FB27_Values<CAN::F10R1, 27, 1, ReadWriteMode, CANF10R1Base> ;
    using FB28 = CAN_F10R1_FB28_Values<CAN::F10R1, 28, 1, ReadWriteMode, CANF10R1Base> ;
    using FB29 = CAN_F10R1_FB29_Values<CAN::F10R1, 29, 1, ReadWriteMode, CANF10R1Base> ;
    using FB30 = CAN_F10R1_FB30_Values<CAN::F10R1, 30, 1, ReadWriteMode, CANF10R1Base> ;
    using FB31 = CAN_F10R1_FB31_Values<CAN::F10R1, 31, 1, ReadWriteMode, CANF10R1Base> ;
    using FieldValues = CAN_F10R1_FB31_Values<CAN::F10R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10R1Pack  = Register<0x40006690, 32, ReadWriteMode, CANF10R1Base, T...> ;

  struct CANF10R2Base {} ;

  struct F10R2 : public RegisterBase<0x40006694, 32, ReadWriteMode>
  {
    using FB0 = CAN_F10R2_FB0_Values<CAN::F10R2, 0, 1, ReadWriteMode, CANF10R2Base> ;
    using FB1 = CAN_F10R2_FB1_Values<CAN::F10R2, 1, 1, ReadWriteMode, CANF10R2Base> ;
    using FB2 = CAN_F10R2_FB2_Values<CAN::F10R2, 2, 1, ReadWriteMode, CANF10R2Base> ;
    using FB3 = CAN_F10R2_FB3_Values<CAN::F10R2, 3, 1, ReadWriteMode, CANF10R2Base> ;
    using FB4 = CAN_F10R2_FB4_Values<CAN::F10R2, 4, 1, ReadWriteMode, CANF10R2Base> ;
    using FB5 = CAN_F10R2_FB5_Values<CAN::F10R2, 5, 1, ReadWriteMode, CANF10R2Base> ;
    using FB6 = CAN_F10R2_FB6_Values<CAN::F10R2, 6, 1, ReadWriteMode, CANF10R2Base> ;
    using FB7 = CAN_F10R2_FB7_Values<CAN::F10R2, 7, 1, ReadWriteMode, CANF10R2Base> ;
    using FB8 = CAN_F10R2_FB8_Values<CAN::F10R2, 8, 1, ReadWriteMode, CANF10R2Base> ;
    using FB9 = CAN_F10R2_FB9_Values<CAN::F10R2, 9, 1, ReadWriteMode, CANF10R2Base> ;
    using FB10 = CAN_F10R2_FB10_Values<CAN::F10R2, 10, 1, ReadWriteMode, CANF10R2Base> ;
    using FB11 = CAN_F10R2_FB11_Values<CAN::F10R2, 11, 1, ReadWriteMode, CANF10R2Base> ;
    using FB12 = CAN_F10R2_FB12_Values<CAN::F10R2, 12, 1, ReadWriteMode, CANF10R2Base> ;
    using FB13 = CAN_F10R2_FB13_Values<CAN::F10R2, 13, 1, ReadWriteMode, CANF10R2Base> ;
    using FB14 = CAN_F10R2_FB14_Values<CAN::F10R2, 14, 1, ReadWriteMode, CANF10R2Base> ;
    using FB15 = CAN_F10R2_FB15_Values<CAN::F10R2, 15, 1, ReadWriteMode, CANF10R2Base> ;
    using FB16 = CAN_F10R2_FB16_Values<CAN::F10R2, 16, 1, ReadWriteMode, CANF10R2Base> ;
    using FB17 = CAN_F10R2_FB17_Values<CAN::F10R2, 17, 1, ReadWriteMode, CANF10R2Base> ;
    using FB18 = CAN_F10R2_FB18_Values<CAN::F10R2, 18, 1, ReadWriteMode, CANF10R2Base> ;
    using FB19 = CAN_F10R2_FB19_Values<CAN::F10R2, 19, 1, ReadWriteMode, CANF10R2Base> ;
    using FB20 = CAN_F10R2_FB20_Values<CAN::F10R2, 20, 1, ReadWriteMode, CANF10R2Base> ;
    using FB21 = CAN_F10R2_FB21_Values<CAN::F10R2, 21, 1, ReadWriteMode, CANF10R2Base> ;
    using FB22 = CAN_F10R2_FB22_Values<CAN::F10R2, 22, 1, ReadWriteMode, CANF10R2Base> ;
    using FB23 = CAN_F10R2_FB23_Values<CAN::F10R2, 23, 1, ReadWriteMode, CANF10R2Base> ;
    using FB24 = CAN_F10R2_FB24_Values<CAN::F10R2, 24, 1, ReadWriteMode, CANF10R2Base> ;
    using FB25 = CAN_F10R2_FB25_Values<CAN::F10R2, 25, 1, ReadWriteMode, CANF10R2Base> ;
    using FB26 = CAN_F10R2_FB26_Values<CAN::F10R2, 26, 1, ReadWriteMode, CANF10R2Base> ;
    using FB27 = CAN_F10R2_FB27_Values<CAN::F10R2, 27, 1, ReadWriteMode, CANF10R2Base> ;
    using FB28 = CAN_F10R2_FB28_Values<CAN::F10R2, 28, 1, ReadWriteMode, CANF10R2Base> ;
    using FB29 = CAN_F10R2_FB29_Values<CAN::F10R2, 29, 1, ReadWriteMode, CANF10R2Base> ;
    using FB30 = CAN_F10R2_FB30_Values<CAN::F10R2, 30, 1, ReadWriteMode, CANF10R2Base> ;
    using FB31 = CAN_F10R2_FB31_Values<CAN::F10R2, 31, 1, ReadWriteMode, CANF10R2Base> ;
    using FieldValues = CAN_F10R2_FB31_Values<CAN::F10R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10R2Pack  = Register<0x40006694, 32, ReadWriteMode, CANF10R2Base, T...> ;

  struct CANF11R1Base {} ;

  struct F11R1 : public RegisterBase<0x40006698, 32, ReadWriteMode>
  {
    using FB0 = CAN_F11R1_FB0_Values<CAN::F11R1, 0, 1, ReadWriteMode, CANF11R1Base> ;
    using FB1 = CAN_F11R1_FB1_Values<CAN::F11R1, 1, 1, ReadWriteMode, CANF11R1Base> ;
    using FB2 = CAN_F11R1_FB2_Values<CAN::F11R1, 2, 1, ReadWriteMode, CANF11R1Base> ;
    using FB3 = CAN_F11R1_FB3_Values<CAN::F11R1, 3, 1, ReadWriteMode, CANF11R1Base> ;
    using FB4 = CAN_F11R1_FB4_Values<CAN::F11R1, 4, 1, ReadWriteMode, CANF11R1Base> ;
    using FB5 = CAN_F11R1_FB5_Values<CAN::F11R1, 5, 1, ReadWriteMode, CANF11R1Base> ;
    using FB6 = CAN_F11R1_FB6_Values<CAN::F11R1, 6, 1, ReadWriteMode, CANF11R1Base> ;
    using FB7 = CAN_F11R1_FB7_Values<CAN::F11R1, 7, 1, ReadWriteMode, CANF11R1Base> ;
    using FB8 = CAN_F11R1_FB8_Values<CAN::F11R1, 8, 1, ReadWriteMode, CANF11R1Base> ;
    using FB9 = CAN_F11R1_FB9_Values<CAN::F11R1, 9, 1, ReadWriteMode, CANF11R1Base> ;
    using FB10 = CAN_F11R1_FB10_Values<CAN::F11R1, 10, 1, ReadWriteMode, CANF11R1Base> ;
    using FB11 = CAN_F11R1_FB11_Values<CAN::F11R1, 11, 1, ReadWriteMode, CANF11R1Base> ;
    using FB12 = CAN_F11R1_FB12_Values<CAN::F11R1, 12, 1, ReadWriteMode, CANF11R1Base> ;
    using FB13 = CAN_F11R1_FB13_Values<CAN::F11R1, 13, 1, ReadWriteMode, CANF11R1Base> ;
    using FB14 = CAN_F11R1_FB14_Values<CAN::F11R1, 14, 1, ReadWriteMode, CANF11R1Base> ;
    using FB15 = CAN_F11R1_FB15_Values<CAN::F11R1, 15, 1, ReadWriteMode, CANF11R1Base> ;
    using FB16 = CAN_F11R1_FB16_Values<CAN::F11R1, 16, 1, ReadWriteMode, CANF11R1Base> ;
    using FB17 = CAN_F11R1_FB17_Values<CAN::F11R1, 17, 1, ReadWriteMode, CANF11R1Base> ;
    using FB18 = CAN_F11R1_FB18_Values<CAN::F11R1, 18, 1, ReadWriteMode, CANF11R1Base> ;
    using FB19 = CAN_F11R1_FB19_Values<CAN::F11R1, 19, 1, ReadWriteMode, CANF11R1Base> ;
    using FB20 = CAN_F11R1_FB20_Values<CAN::F11R1, 20, 1, ReadWriteMode, CANF11R1Base> ;
    using FB21 = CAN_F11R1_FB21_Values<CAN::F11R1, 21, 1, ReadWriteMode, CANF11R1Base> ;
    using FB22 = CAN_F11R1_FB22_Values<CAN::F11R1, 22, 1, ReadWriteMode, CANF11R1Base> ;
    using FB23 = CAN_F11R1_FB23_Values<CAN::F11R1, 23, 1, ReadWriteMode, CANF11R1Base> ;
    using FB24 = CAN_F11R1_FB24_Values<CAN::F11R1, 24, 1, ReadWriteMode, CANF11R1Base> ;
    using FB25 = CAN_F11R1_FB25_Values<CAN::F11R1, 25, 1, ReadWriteMode, CANF11R1Base> ;
    using FB26 = CAN_F11R1_FB26_Values<CAN::F11R1, 26, 1, ReadWriteMode, CANF11R1Base> ;
    using FB27 = CAN_F11R1_FB27_Values<CAN::F11R1, 27, 1, ReadWriteMode, CANF11R1Base> ;
    using FB28 = CAN_F11R1_FB28_Values<CAN::F11R1, 28, 1, ReadWriteMode, CANF11R1Base> ;
    using FB29 = CAN_F11R1_FB29_Values<CAN::F11R1, 29, 1, ReadWriteMode, CANF11R1Base> ;
    using FB30 = CAN_F11R1_FB30_Values<CAN::F11R1, 30, 1, ReadWriteMode, CANF11R1Base> ;
    using FB31 = CAN_F11R1_FB31_Values<CAN::F11R1, 31, 1, ReadWriteMode, CANF11R1Base> ;
    using FieldValues = CAN_F11R1_FB31_Values<CAN::F11R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11R1Pack  = Register<0x40006698, 32, ReadWriteMode, CANF11R1Base, T...> ;

  struct CANF11R2Base {} ;

  struct F11R2 : public RegisterBase<0x4000669C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F11R2_FB0_Values<CAN::F11R2, 0, 1, ReadWriteMode, CANF11R2Base> ;
    using FB1 = CAN_F11R2_FB1_Values<CAN::F11R2, 1, 1, ReadWriteMode, CANF11R2Base> ;
    using FB2 = CAN_F11R2_FB2_Values<CAN::F11R2, 2, 1, ReadWriteMode, CANF11R2Base> ;
    using FB3 = CAN_F11R2_FB3_Values<CAN::F11R2, 3, 1, ReadWriteMode, CANF11R2Base> ;
    using FB4 = CAN_F11R2_FB4_Values<CAN::F11R2, 4, 1, ReadWriteMode, CANF11R2Base> ;
    using FB5 = CAN_F11R2_FB5_Values<CAN::F11R2, 5, 1, ReadWriteMode, CANF11R2Base> ;
    using FB6 = CAN_F11R2_FB6_Values<CAN::F11R2, 6, 1, ReadWriteMode, CANF11R2Base> ;
    using FB7 = CAN_F11R2_FB7_Values<CAN::F11R2, 7, 1, ReadWriteMode, CANF11R2Base> ;
    using FB8 = CAN_F11R2_FB8_Values<CAN::F11R2, 8, 1, ReadWriteMode, CANF11R2Base> ;
    using FB9 = CAN_F11R2_FB9_Values<CAN::F11R2, 9, 1, ReadWriteMode, CANF11R2Base> ;
    using FB10 = CAN_F11R2_FB10_Values<CAN::F11R2, 10, 1, ReadWriteMode, CANF11R2Base> ;
    using FB11 = CAN_F11R2_FB11_Values<CAN::F11R2, 11, 1, ReadWriteMode, CANF11R2Base> ;
    using FB12 = CAN_F11R2_FB12_Values<CAN::F11R2, 12, 1, ReadWriteMode, CANF11R2Base> ;
    using FB13 = CAN_F11R2_FB13_Values<CAN::F11R2, 13, 1, ReadWriteMode, CANF11R2Base> ;
    using FB14 = CAN_F11R2_FB14_Values<CAN::F11R2, 14, 1, ReadWriteMode, CANF11R2Base> ;
    using FB15 = CAN_F11R2_FB15_Values<CAN::F11R2, 15, 1, ReadWriteMode, CANF11R2Base> ;
    using FB16 = CAN_F11R2_FB16_Values<CAN::F11R2, 16, 1, ReadWriteMode, CANF11R2Base> ;
    using FB17 = CAN_F11R2_FB17_Values<CAN::F11R2, 17, 1, ReadWriteMode, CANF11R2Base> ;
    using FB18 = CAN_F11R2_FB18_Values<CAN::F11R2, 18, 1, ReadWriteMode, CANF11R2Base> ;
    using FB19 = CAN_F11R2_FB19_Values<CAN::F11R2, 19, 1, ReadWriteMode, CANF11R2Base> ;
    using FB20 = CAN_F11R2_FB20_Values<CAN::F11R2, 20, 1, ReadWriteMode, CANF11R2Base> ;
    using FB21 = CAN_F11R2_FB21_Values<CAN::F11R2, 21, 1, ReadWriteMode, CANF11R2Base> ;
    using FB22 = CAN_F11R2_FB22_Values<CAN::F11R2, 22, 1, ReadWriteMode, CANF11R2Base> ;
    using FB23 = CAN_F11R2_FB23_Values<CAN::F11R2, 23, 1, ReadWriteMode, CANF11R2Base> ;
    using FB24 = CAN_F11R2_FB24_Values<CAN::F11R2, 24, 1, ReadWriteMode, CANF11R2Base> ;
    using FB25 = CAN_F11R2_FB25_Values<CAN::F11R2, 25, 1, ReadWriteMode, CANF11R2Base> ;
    using FB26 = CAN_F11R2_FB26_Values<CAN::F11R2, 26, 1, ReadWriteMode, CANF11R2Base> ;
    using FB27 = CAN_F11R2_FB27_Values<CAN::F11R2, 27, 1, ReadWriteMode, CANF11R2Base> ;
    using FB28 = CAN_F11R2_FB28_Values<CAN::F11R2, 28, 1, ReadWriteMode, CANF11R2Base> ;
    using FB29 = CAN_F11R2_FB29_Values<CAN::F11R2, 29, 1, ReadWriteMode, CANF11R2Base> ;
    using FB30 = CAN_F11R2_FB30_Values<CAN::F11R2, 30, 1, ReadWriteMode, CANF11R2Base> ;
    using FB31 = CAN_F11R2_FB31_Values<CAN::F11R2, 31, 1, ReadWriteMode, CANF11R2Base> ;
    using FieldValues = CAN_F11R2_FB31_Values<CAN::F11R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11R2Pack  = Register<0x4000669C, 32, ReadWriteMode, CANF11R2Base, T...> ;

  struct CANF12R1Base {} ;

  struct F12R1 : public RegisterBase<0x400066A0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F12R1_FB0_Values<CAN::F12R1, 0, 1, ReadWriteMode, CANF12R1Base> ;
    using FB1 = CAN_F12R1_FB1_Values<CAN::F12R1, 1, 1, ReadWriteMode, CANF12R1Base> ;
    using FB2 = CAN_F12R1_FB2_Values<CAN::F12R1, 2, 1, ReadWriteMode, CANF12R1Base> ;
    using FB3 = CAN_F12R1_FB3_Values<CAN::F12R1, 3, 1, ReadWriteMode, CANF12R1Base> ;
    using FB4 = CAN_F12R1_FB4_Values<CAN::F12R1, 4, 1, ReadWriteMode, CANF12R1Base> ;
    using FB5 = CAN_F12R1_FB5_Values<CAN::F12R1, 5, 1, ReadWriteMode, CANF12R1Base> ;
    using FB6 = CAN_F12R1_FB6_Values<CAN::F12R1, 6, 1, ReadWriteMode, CANF12R1Base> ;
    using FB7 = CAN_F12R1_FB7_Values<CAN::F12R1, 7, 1, ReadWriteMode, CANF12R1Base> ;
    using FB8 = CAN_F12R1_FB8_Values<CAN::F12R1, 8, 1, ReadWriteMode, CANF12R1Base> ;
    using FB9 = CAN_F12R1_FB9_Values<CAN::F12R1, 9, 1, ReadWriteMode, CANF12R1Base> ;
    using FB10 = CAN_F12R1_FB10_Values<CAN::F12R1, 10, 1, ReadWriteMode, CANF12R1Base> ;
    using FB11 = CAN_F12R1_FB11_Values<CAN::F12R1, 11, 1, ReadWriteMode, CANF12R1Base> ;
    using FB12 = CAN_F12R1_FB12_Values<CAN::F12R1, 12, 1, ReadWriteMode, CANF12R1Base> ;
    using FB13 = CAN_F12R1_FB13_Values<CAN::F12R1, 13, 1, ReadWriteMode, CANF12R1Base> ;
    using FB14 = CAN_F12R1_FB14_Values<CAN::F12R1, 14, 1, ReadWriteMode, CANF12R1Base> ;
    using FB15 = CAN_F12R1_FB15_Values<CAN::F12R1, 15, 1, ReadWriteMode, CANF12R1Base> ;
    using FB16 = CAN_F12R1_FB16_Values<CAN::F12R1, 16, 1, ReadWriteMode, CANF12R1Base> ;
    using FB17 = CAN_F12R1_FB17_Values<CAN::F12R1, 17, 1, ReadWriteMode, CANF12R1Base> ;
    using FB18 = CAN_F12R1_FB18_Values<CAN::F12R1, 18, 1, ReadWriteMode, CANF12R1Base> ;
    using FB19 = CAN_F12R1_FB19_Values<CAN::F12R1, 19, 1, ReadWriteMode, CANF12R1Base> ;
    using FB20 = CAN_F12R1_FB20_Values<CAN::F12R1, 20, 1, ReadWriteMode, CANF12R1Base> ;
    using FB21 = CAN_F12R1_FB21_Values<CAN::F12R1, 21, 1, ReadWriteMode, CANF12R1Base> ;
    using FB22 = CAN_F12R1_FB22_Values<CAN::F12R1, 22, 1, ReadWriteMode, CANF12R1Base> ;
    using FB23 = CAN_F12R1_FB23_Values<CAN::F12R1, 23, 1, ReadWriteMode, CANF12R1Base> ;
    using FB24 = CAN_F12R1_FB24_Values<CAN::F12R1, 24, 1, ReadWriteMode, CANF12R1Base> ;
    using FB25 = CAN_F12R1_FB25_Values<CAN::F12R1, 25, 1, ReadWriteMode, CANF12R1Base> ;
    using FB26 = CAN_F12R1_FB26_Values<CAN::F12R1, 26, 1, ReadWriteMode, CANF12R1Base> ;
    using FB27 = CAN_F12R1_FB27_Values<CAN::F12R1, 27, 1, ReadWriteMode, CANF12R1Base> ;
    using FB28 = CAN_F12R1_FB28_Values<CAN::F12R1, 28, 1, ReadWriteMode, CANF12R1Base> ;
    using FB29 = CAN_F12R1_FB29_Values<CAN::F12R1, 29, 1, ReadWriteMode, CANF12R1Base> ;
    using FB30 = CAN_F12R1_FB30_Values<CAN::F12R1, 30, 1, ReadWriteMode, CANF12R1Base> ;
    using FB31 = CAN_F12R1_FB31_Values<CAN::F12R1, 31, 1, ReadWriteMode, CANF12R1Base> ;
    using FieldValues = CAN_F12R1_FB31_Values<CAN::F12R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12R1Pack  = Register<0x400066A0, 32, ReadWriteMode, CANF12R1Base, T...> ;

  struct CANF12R2Base {} ;

  struct F12R2 : public RegisterBase<0x400066A4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F12R2_FB0_Values<CAN::F12R2, 0, 1, ReadWriteMode, CANF12R2Base> ;
    using FB1 = CAN_F12R2_FB1_Values<CAN::F12R2, 1, 1, ReadWriteMode, CANF12R2Base> ;
    using FB2 = CAN_F12R2_FB2_Values<CAN::F12R2, 2, 1, ReadWriteMode, CANF12R2Base> ;
    using FB3 = CAN_F12R2_FB3_Values<CAN::F12R2, 3, 1, ReadWriteMode, CANF12R2Base> ;
    using FB4 = CAN_F12R2_FB4_Values<CAN::F12R2, 4, 1, ReadWriteMode, CANF12R2Base> ;
    using FB5 = CAN_F12R2_FB5_Values<CAN::F12R2, 5, 1, ReadWriteMode, CANF12R2Base> ;
    using FB6 = CAN_F12R2_FB6_Values<CAN::F12R2, 6, 1, ReadWriteMode, CANF12R2Base> ;
    using FB7 = CAN_F12R2_FB7_Values<CAN::F12R2, 7, 1, ReadWriteMode, CANF12R2Base> ;
    using FB8 = CAN_F12R2_FB8_Values<CAN::F12R2, 8, 1, ReadWriteMode, CANF12R2Base> ;
    using FB9 = CAN_F12R2_FB9_Values<CAN::F12R2, 9, 1, ReadWriteMode, CANF12R2Base> ;
    using FB10 = CAN_F12R2_FB10_Values<CAN::F12R2, 10, 1, ReadWriteMode, CANF12R2Base> ;
    using FB11 = CAN_F12R2_FB11_Values<CAN::F12R2, 11, 1, ReadWriteMode, CANF12R2Base> ;
    using FB12 = CAN_F12R2_FB12_Values<CAN::F12R2, 12, 1, ReadWriteMode, CANF12R2Base> ;
    using FB13 = CAN_F12R2_FB13_Values<CAN::F12R2, 13, 1, ReadWriteMode, CANF12R2Base> ;
    using FB14 = CAN_F12R2_FB14_Values<CAN::F12R2, 14, 1, ReadWriteMode, CANF12R2Base> ;
    using FB15 = CAN_F12R2_FB15_Values<CAN::F12R2, 15, 1, ReadWriteMode, CANF12R2Base> ;
    using FB16 = CAN_F12R2_FB16_Values<CAN::F12R2, 16, 1, ReadWriteMode, CANF12R2Base> ;
    using FB17 = CAN_F12R2_FB17_Values<CAN::F12R2, 17, 1, ReadWriteMode, CANF12R2Base> ;
    using FB18 = CAN_F12R2_FB18_Values<CAN::F12R2, 18, 1, ReadWriteMode, CANF12R2Base> ;
    using FB19 = CAN_F12R2_FB19_Values<CAN::F12R2, 19, 1, ReadWriteMode, CANF12R2Base> ;
    using FB20 = CAN_F12R2_FB20_Values<CAN::F12R2, 20, 1, ReadWriteMode, CANF12R2Base> ;
    using FB21 = CAN_F12R2_FB21_Values<CAN::F12R2, 21, 1, ReadWriteMode, CANF12R2Base> ;
    using FB22 = CAN_F12R2_FB22_Values<CAN::F12R2, 22, 1, ReadWriteMode, CANF12R2Base> ;
    using FB23 = CAN_F12R2_FB23_Values<CAN::F12R2, 23, 1, ReadWriteMode, CANF12R2Base> ;
    using FB24 = CAN_F12R2_FB24_Values<CAN::F12R2, 24, 1, ReadWriteMode, CANF12R2Base> ;
    using FB25 = CAN_F12R2_FB25_Values<CAN::F12R2, 25, 1, ReadWriteMode, CANF12R2Base> ;
    using FB26 = CAN_F12R2_FB26_Values<CAN::F12R2, 26, 1, ReadWriteMode, CANF12R2Base> ;
    using FB27 = CAN_F12R2_FB27_Values<CAN::F12R2, 27, 1, ReadWriteMode, CANF12R2Base> ;
    using FB28 = CAN_F12R2_FB28_Values<CAN::F12R2, 28, 1, ReadWriteMode, CANF12R2Base> ;
    using FB29 = CAN_F12R2_FB29_Values<CAN::F12R2, 29, 1, ReadWriteMode, CANF12R2Base> ;
    using FB30 = CAN_F12R2_FB30_Values<CAN::F12R2, 30, 1, ReadWriteMode, CANF12R2Base> ;
    using FB31 = CAN_F12R2_FB31_Values<CAN::F12R2, 31, 1, ReadWriteMode, CANF12R2Base> ;
    using FieldValues = CAN_F12R2_FB31_Values<CAN::F12R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12R2Pack  = Register<0x400066A4, 32, ReadWriteMode, CANF12R2Base, T...> ;

  struct CANF13R1Base {} ;

  struct F13R1 : public RegisterBase<0x400066A8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F13R1_FB0_Values<CAN::F13R1, 0, 1, ReadWriteMode, CANF13R1Base> ;
    using FB1 = CAN_F13R1_FB1_Values<CAN::F13R1, 1, 1, ReadWriteMode, CANF13R1Base> ;
    using FB2 = CAN_F13R1_FB2_Values<CAN::F13R1, 2, 1, ReadWriteMode, CANF13R1Base> ;
    using FB3 = CAN_F13R1_FB3_Values<CAN::F13R1, 3, 1, ReadWriteMode, CANF13R1Base> ;
    using FB4 = CAN_F13R1_FB4_Values<CAN::F13R1, 4, 1, ReadWriteMode, CANF13R1Base> ;
    using FB5 = CAN_F13R1_FB5_Values<CAN::F13R1, 5, 1, ReadWriteMode, CANF13R1Base> ;
    using FB6 = CAN_F13R1_FB6_Values<CAN::F13R1, 6, 1, ReadWriteMode, CANF13R1Base> ;
    using FB7 = CAN_F13R1_FB7_Values<CAN::F13R1, 7, 1, ReadWriteMode, CANF13R1Base> ;
    using FB8 = CAN_F13R1_FB8_Values<CAN::F13R1, 8, 1, ReadWriteMode, CANF13R1Base> ;
    using FB9 = CAN_F13R1_FB9_Values<CAN::F13R1, 9, 1, ReadWriteMode, CANF13R1Base> ;
    using FB10 = CAN_F13R1_FB10_Values<CAN::F13R1, 10, 1, ReadWriteMode, CANF13R1Base> ;
    using FB11 = CAN_F13R1_FB11_Values<CAN::F13R1, 11, 1, ReadWriteMode, CANF13R1Base> ;
    using FB12 = CAN_F13R1_FB12_Values<CAN::F13R1, 12, 1, ReadWriteMode, CANF13R1Base> ;
    using FB13 = CAN_F13R1_FB13_Values<CAN::F13R1, 13, 1, ReadWriteMode, CANF13R1Base> ;
    using FB14 = CAN_F13R1_FB14_Values<CAN::F13R1, 14, 1, ReadWriteMode, CANF13R1Base> ;
    using FB15 = CAN_F13R1_FB15_Values<CAN::F13R1, 15, 1, ReadWriteMode, CANF13R1Base> ;
    using FB16 = CAN_F13R1_FB16_Values<CAN::F13R1, 16, 1, ReadWriteMode, CANF13R1Base> ;
    using FB17 = CAN_F13R1_FB17_Values<CAN::F13R1, 17, 1, ReadWriteMode, CANF13R1Base> ;
    using FB18 = CAN_F13R1_FB18_Values<CAN::F13R1, 18, 1, ReadWriteMode, CANF13R1Base> ;
    using FB19 = CAN_F13R1_FB19_Values<CAN::F13R1, 19, 1, ReadWriteMode, CANF13R1Base> ;
    using FB20 = CAN_F13R1_FB20_Values<CAN::F13R1, 20, 1, ReadWriteMode, CANF13R1Base> ;
    using FB21 = CAN_F13R1_FB21_Values<CAN::F13R1, 21, 1, ReadWriteMode, CANF13R1Base> ;
    using FB22 = CAN_F13R1_FB22_Values<CAN::F13R1, 22, 1, ReadWriteMode, CANF13R1Base> ;
    using FB23 = CAN_F13R1_FB23_Values<CAN::F13R1, 23, 1, ReadWriteMode, CANF13R1Base> ;
    using FB24 = CAN_F13R1_FB24_Values<CAN::F13R1, 24, 1, ReadWriteMode, CANF13R1Base> ;
    using FB25 = CAN_F13R1_FB25_Values<CAN::F13R1, 25, 1, ReadWriteMode, CANF13R1Base> ;
    using FB26 = CAN_F13R1_FB26_Values<CAN::F13R1, 26, 1, ReadWriteMode, CANF13R1Base> ;
    using FB27 = CAN_F13R1_FB27_Values<CAN::F13R1, 27, 1, ReadWriteMode, CANF13R1Base> ;
    using FB28 = CAN_F13R1_FB28_Values<CAN::F13R1, 28, 1, ReadWriteMode, CANF13R1Base> ;
    using FB29 = CAN_F13R1_FB29_Values<CAN::F13R1, 29, 1, ReadWriteMode, CANF13R1Base> ;
    using FB30 = CAN_F13R1_FB30_Values<CAN::F13R1, 30, 1, ReadWriteMode, CANF13R1Base> ;
    using FB31 = CAN_F13R1_FB31_Values<CAN::F13R1, 31, 1, ReadWriteMode, CANF13R1Base> ;
    using FieldValues = CAN_F13R1_FB31_Values<CAN::F13R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13R1Pack  = Register<0x400066A8, 32, ReadWriteMode, CANF13R1Base, T...> ;

  struct CANF13R2Base {} ;

  struct F13R2 : public RegisterBase<0x400066AC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F13R2_FB0_Values<CAN::F13R2, 0, 1, ReadWriteMode, CANF13R2Base> ;
    using FB1 = CAN_F13R2_FB1_Values<CAN::F13R2, 1, 1, ReadWriteMode, CANF13R2Base> ;
    using FB2 = CAN_F13R2_FB2_Values<CAN::F13R2, 2, 1, ReadWriteMode, CANF13R2Base> ;
    using FB3 = CAN_F13R2_FB3_Values<CAN::F13R2, 3, 1, ReadWriteMode, CANF13R2Base> ;
    using FB4 = CAN_F13R2_FB4_Values<CAN::F13R2, 4, 1, ReadWriteMode, CANF13R2Base> ;
    using FB5 = CAN_F13R2_FB5_Values<CAN::F13R2, 5, 1, ReadWriteMode, CANF13R2Base> ;
    using FB6 = CAN_F13R2_FB6_Values<CAN::F13R2, 6, 1, ReadWriteMode, CANF13R2Base> ;
    using FB7 = CAN_F13R2_FB7_Values<CAN::F13R2, 7, 1, ReadWriteMode, CANF13R2Base> ;
    using FB8 = CAN_F13R2_FB8_Values<CAN::F13R2, 8, 1, ReadWriteMode, CANF13R2Base> ;
    using FB9 = CAN_F13R2_FB9_Values<CAN::F13R2, 9, 1, ReadWriteMode, CANF13R2Base> ;
    using FB10 = CAN_F13R2_FB10_Values<CAN::F13R2, 10, 1, ReadWriteMode, CANF13R2Base> ;
    using FB11 = CAN_F13R2_FB11_Values<CAN::F13R2, 11, 1, ReadWriteMode, CANF13R2Base> ;
    using FB12 = CAN_F13R2_FB12_Values<CAN::F13R2, 12, 1, ReadWriteMode, CANF13R2Base> ;
    using FB13 = CAN_F13R2_FB13_Values<CAN::F13R2, 13, 1, ReadWriteMode, CANF13R2Base> ;
    using FB14 = CAN_F13R2_FB14_Values<CAN::F13R2, 14, 1, ReadWriteMode, CANF13R2Base> ;
    using FB15 = CAN_F13R2_FB15_Values<CAN::F13R2, 15, 1, ReadWriteMode, CANF13R2Base> ;
    using FB16 = CAN_F13R2_FB16_Values<CAN::F13R2, 16, 1, ReadWriteMode, CANF13R2Base> ;
    using FB17 = CAN_F13R2_FB17_Values<CAN::F13R2, 17, 1, ReadWriteMode, CANF13R2Base> ;
    using FB18 = CAN_F13R2_FB18_Values<CAN::F13R2, 18, 1, ReadWriteMode, CANF13R2Base> ;
    using FB19 = CAN_F13R2_FB19_Values<CAN::F13R2, 19, 1, ReadWriteMode, CANF13R2Base> ;
    using FB20 = CAN_F13R2_FB20_Values<CAN::F13R2, 20, 1, ReadWriteMode, CANF13R2Base> ;
    using FB21 = CAN_F13R2_FB21_Values<CAN::F13R2, 21, 1, ReadWriteMode, CANF13R2Base> ;
    using FB22 = CAN_F13R2_FB22_Values<CAN::F13R2, 22, 1, ReadWriteMode, CANF13R2Base> ;
    using FB23 = CAN_F13R2_FB23_Values<CAN::F13R2, 23, 1, ReadWriteMode, CANF13R2Base> ;
    using FB24 = CAN_F13R2_FB24_Values<CAN::F13R2, 24, 1, ReadWriteMode, CANF13R2Base> ;
    using FB25 = CAN_F13R2_FB25_Values<CAN::F13R2, 25, 1, ReadWriteMode, CANF13R2Base> ;
    using FB26 = CAN_F13R2_FB26_Values<CAN::F13R2, 26, 1, ReadWriteMode, CANF13R2Base> ;
    using FB27 = CAN_F13R2_FB27_Values<CAN::F13R2, 27, 1, ReadWriteMode, CANF13R2Base> ;
    using FB28 = CAN_F13R2_FB28_Values<CAN::F13R2, 28, 1, ReadWriteMode, CANF13R2Base> ;
    using FB29 = CAN_F13R2_FB29_Values<CAN::F13R2, 29, 1, ReadWriteMode, CANF13R2Base> ;
    using FB30 = CAN_F13R2_FB30_Values<CAN::F13R2, 30, 1, ReadWriteMode, CANF13R2Base> ;
    using FB31 = CAN_F13R2_FB31_Values<CAN::F13R2, 31, 1, ReadWriteMode, CANF13R2Base> ;
    using FieldValues = CAN_F13R2_FB31_Values<CAN::F13R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13R2Pack  = Register<0x400066AC, 32, ReadWriteMode, CANF13R2Base, T...> ;

  struct CANF14R1Base {} ;

  struct F14R1 : public RegisterBase<0x400066B0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F14R1_FB0_Values<CAN::F14R1, 0, 1, ReadWriteMode, CANF14R1Base> ;
    using FB1 = CAN_F14R1_FB1_Values<CAN::F14R1, 1, 1, ReadWriteMode, CANF14R1Base> ;
    using FB2 = CAN_F14R1_FB2_Values<CAN::F14R1, 2, 1, ReadWriteMode, CANF14R1Base> ;
    using FB3 = CAN_F14R1_FB3_Values<CAN::F14R1, 3, 1, ReadWriteMode, CANF14R1Base> ;
    using FB4 = CAN_F14R1_FB4_Values<CAN::F14R1, 4, 1, ReadWriteMode, CANF14R1Base> ;
    using FB5 = CAN_F14R1_FB5_Values<CAN::F14R1, 5, 1, ReadWriteMode, CANF14R1Base> ;
    using FB6 = CAN_F14R1_FB6_Values<CAN::F14R1, 6, 1, ReadWriteMode, CANF14R1Base> ;
    using FB7 = CAN_F14R1_FB7_Values<CAN::F14R1, 7, 1, ReadWriteMode, CANF14R1Base> ;
    using FB8 = CAN_F14R1_FB8_Values<CAN::F14R1, 8, 1, ReadWriteMode, CANF14R1Base> ;
    using FB9 = CAN_F14R1_FB9_Values<CAN::F14R1, 9, 1, ReadWriteMode, CANF14R1Base> ;
    using FB10 = CAN_F14R1_FB10_Values<CAN::F14R1, 10, 1, ReadWriteMode, CANF14R1Base> ;
    using FB11 = CAN_F14R1_FB11_Values<CAN::F14R1, 11, 1, ReadWriteMode, CANF14R1Base> ;
    using FB12 = CAN_F14R1_FB12_Values<CAN::F14R1, 12, 1, ReadWriteMode, CANF14R1Base> ;
    using FB13 = CAN_F14R1_FB13_Values<CAN::F14R1, 13, 1, ReadWriteMode, CANF14R1Base> ;
    using FB14 = CAN_F14R1_FB14_Values<CAN::F14R1, 14, 1, ReadWriteMode, CANF14R1Base> ;
    using FB15 = CAN_F14R1_FB15_Values<CAN::F14R1, 15, 1, ReadWriteMode, CANF14R1Base> ;
    using FB16 = CAN_F14R1_FB16_Values<CAN::F14R1, 16, 1, ReadWriteMode, CANF14R1Base> ;
    using FB17 = CAN_F14R1_FB17_Values<CAN::F14R1, 17, 1, ReadWriteMode, CANF14R1Base> ;
    using FB18 = CAN_F14R1_FB18_Values<CAN::F14R1, 18, 1, ReadWriteMode, CANF14R1Base> ;
    using FB19 = CAN_F14R1_FB19_Values<CAN::F14R1, 19, 1, ReadWriteMode, CANF14R1Base> ;
    using FB20 = CAN_F14R1_FB20_Values<CAN::F14R1, 20, 1, ReadWriteMode, CANF14R1Base> ;
    using FB21 = CAN_F14R1_FB21_Values<CAN::F14R1, 21, 1, ReadWriteMode, CANF14R1Base> ;
    using FB22 = CAN_F14R1_FB22_Values<CAN::F14R1, 22, 1, ReadWriteMode, CANF14R1Base> ;
    using FB23 = CAN_F14R1_FB23_Values<CAN::F14R1, 23, 1, ReadWriteMode, CANF14R1Base> ;
    using FB24 = CAN_F14R1_FB24_Values<CAN::F14R1, 24, 1, ReadWriteMode, CANF14R1Base> ;
    using FB25 = CAN_F14R1_FB25_Values<CAN::F14R1, 25, 1, ReadWriteMode, CANF14R1Base> ;
    using FB26 = CAN_F14R1_FB26_Values<CAN::F14R1, 26, 1, ReadWriteMode, CANF14R1Base> ;
    using FB27 = CAN_F14R1_FB27_Values<CAN::F14R1, 27, 1, ReadWriteMode, CANF14R1Base> ;
    using FB28 = CAN_F14R1_FB28_Values<CAN::F14R1, 28, 1, ReadWriteMode, CANF14R1Base> ;
    using FB29 = CAN_F14R1_FB29_Values<CAN::F14R1, 29, 1, ReadWriteMode, CANF14R1Base> ;
    using FB30 = CAN_F14R1_FB30_Values<CAN::F14R1, 30, 1, ReadWriteMode, CANF14R1Base> ;
    using FB31 = CAN_F14R1_FB31_Values<CAN::F14R1, 31, 1, ReadWriteMode, CANF14R1Base> ;
    using FieldValues = CAN_F14R1_FB31_Values<CAN::F14R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14R1Pack  = Register<0x400066B0, 32, ReadWriteMode, CANF14R1Base, T...> ;

  struct CANF14R2Base {} ;

  struct F14R2 : public RegisterBase<0x400066B4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F14R2_FB0_Values<CAN::F14R2, 0, 1, ReadWriteMode, CANF14R2Base> ;
    using FB1 = CAN_F14R2_FB1_Values<CAN::F14R2, 1, 1, ReadWriteMode, CANF14R2Base> ;
    using FB2 = CAN_F14R2_FB2_Values<CAN::F14R2, 2, 1, ReadWriteMode, CANF14R2Base> ;
    using FB3 = CAN_F14R2_FB3_Values<CAN::F14R2, 3, 1, ReadWriteMode, CANF14R2Base> ;
    using FB4 = CAN_F14R2_FB4_Values<CAN::F14R2, 4, 1, ReadWriteMode, CANF14R2Base> ;
    using FB5 = CAN_F14R2_FB5_Values<CAN::F14R2, 5, 1, ReadWriteMode, CANF14R2Base> ;
    using FB6 = CAN_F14R2_FB6_Values<CAN::F14R2, 6, 1, ReadWriteMode, CANF14R2Base> ;
    using FB7 = CAN_F14R2_FB7_Values<CAN::F14R2, 7, 1, ReadWriteMode, CANF14R2Base> ;
    using FB8 = CAN_F14R2_FB8_Values<CAN::F14R2, 8, 1, ReadWriteMode, CANF14R2Base> ;
    using FB9 = CAN_F14R2_FB9_Values<CAN::F14R2, 9, 1, ReadWriteMode, CANF14R2Base> ;
    using FB10 = CAN_F14R2_FB10_Values<CAN::F14R2, 10, 1, ReadWriteMode, CANF14R2Base> ;
    using FB11 = CAN_F14R2_FB11_Values<CAN::F14R2, 11, 1, ReadWriteMode, CANF14R2Base> ;
    using FB12 = CAN_F14R2_FB12_Values<CAN::F14R2, 12, 1, ReadWriteMode, CANF14R2Base> ;
    using FB13 = CAN_F14R2_FB13_Values<CAN::F14R2, 13, 1, ReadWriteMode, CANF14R2Base> ;
    using FB14 = CAN_F14R2_FB14_Values<CAN::F14R2, 14, 1, ReadWriteMode, CANF14R2Base> ;
    using FB15 = CAN_F14R2_FB15_Values<CAN::F14R2, 15, 1, ReadWriteMode, CANF14R2Base> ;
    using FB16 = CAN_F14R2_FB16_Values<CAN::F14R2, 16, 1, ReadWriteMode, CANF14R2Base> ;
    using FB17 = CAN_F14R2_FB17_Values<CAN::F14R2, 17, 1, ReadWriteMode, CANF14R2Base> ;
    using FB18 = CAN_F14R2_FB18_Values<CAN::F14R2, 18, 1, ReadWriteMode, CANF14R2Base> ;
    using FB19 = CAN_F14R2_FB19_Values<CAN::F14R2, 19, 1, ReadWriteMode, CANF14R2Base> ;
    using FB20 = CAN_F14R2_FB20_Values<CAN::F14R2, 20, 1, ReadWriteMode, CANF14R2Base> ;
    using FB21 = CAN_F14R2_FB21_Values<CAN::F14R2, 21, 1, ReadWriteMode, CANF14R2Base> ;
    using FB22 = CAN_F14R2_FB22_Values<CAN::F14R2, 22, 1, ReadWriteMode, CANF14R2Base> ;
    using FB23 = CAN_F14R2_FB23_Values<CAN::F14R2, 23, 1, ReadWriteMode, CANF14R2Base> ;
    using FB24 = CAN_F14R2_FB24_Values<CAN::F14R2, 24, 1, ReadWriteMode, CANF14R2Base> ;
    using FB25 = CAN_F14R2_FB25_Values<CAN::F14R2, 25, 1, ReadWriteMode, CANF14R2Base> ;
    using FB26 = CAN_F14R2_FB26_Values<CAN::F14R2, 26, 1, ReadWriteMode, CANF14R2Base> ;
    using FB27 = CAN_F14R2_FB27_Values<CAN::F14R2, 27, 1, ReadWriteMode, CANF14R2Base> ;
    using FB28 = CAN_F14R2_FB28_Values<CAN::F14R2, 28, 1, ReadWriteMode, CANF14R2Base> ;
    using FB29 = CAN_F14R2_FB29_Values<CAN::F14R2, 29, 1, ReadWriteMode, CANF14R2Base> ;
    using FB30 = CAN_F14R2_FB30_Values<CAN::F14R2, 30, 1, ReadWriteMode, CANF14R2Base> ;
    using FB31 = CAN_F14R2_FB31_Values<CAN::F14R2, 31, 1, ReadWriteMode, CANF14R2Base> ;
    using FieldValues = CAN_F14R2_FB31_Values<CAN::F14R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14R2Pack  = Register<0x400066B4, 32, ReadWriteMode, CANF14R2Base, T...> ;

  struct CANF15R1Base {} ;

  struct F15R1 : public RegisterBase<0x400066B8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F15R1_FB0_Values<CAN::F15R1, 0, 1, ReadWriteMode, CANF15R1Base> ;
    using FB1 = CAN_F15R1_FB1_Values<CAN::F15R1, 1, 1, ReadWriteMode, CANF15R1Base> ;
    using FB2 = CAN_F15R1_FB2_Values<CAN::F15R1, 2, 1, ReadWriteMode, CANF15R1Base> ;
    using FB3 = CAN_F15R1_FB3_Values<CAN::F15R1, 3, 1, ReadWriteMode, CANF15R1Base> ;
    using FB4 = CAN_F15R1_FB4_Values<CAN::F15R1, 4, 1, ReadWriteMode, CANF15R1Base> ;
    using FB5 = CAN_F15R1_FB5_Values<CAN::F15R1, 5, 1, ReadWriteMode, CANF15R1Base> ;
    using FB6 = CAN_F15R1_FB6_Values<CAN::F15R1, 6, 1, ReadWriteMode, CANF15R1Base> ;
    using FB7 = CAN_F15R1_FB7_Values<CAN::F15R1, 7, 1, ReadWriteMode, CANF15R1Base> ;
    using FB8 = CAN_F15R1_FB8_Values<CAN::F15R1, 8, 1, ReadWriteMode, CANF15R1Base> ;
    using FB9 = CAN_F15R1_FB9_Values<CAN::F15R1, 9, 1, ReadWriteMode, CANF15R1Base> ;
    using FB10 = CAN_F15R1_FB10_Values<CAN::F15R1, 10, 1, ReadWriteMode, CANF15R1Base> ;
    using FB11 = CAN_F15R1_FB11_Values<CAN::F15R1, 11, 1, ReadWriteMode, CANF15R1Base> ;
    using FB12 = CAN_F15R1_FB12_Values<CAN::F15R1, 12, 1, ReadWriteMode, CANF15R1Base> ;
    using FB13 = CAN_F15R1_FB13_Values<CAN::F15R1, 13, 1, ReadWriteMode, CANF15R1Base> ;
    using FB14 = CAN_F15R1_FB14_Values<CAN::F15R1, 14, 1, ReadWriteMode, CANF15R1Base> ;
    using FB15 = CAN_F15R1_FB15_Values<CAN::F15R1, 15, 1, ReadWriteMode, CANF15R1Base> ;
    using FB16 = CAN_F15R1_FB16_Values<CAN::F15R1, 16, 1, ReadWriteMode, CANF15R1Base> ;
    using FB17 = CAN_F15R1_FB17_Values<CAN::F15R1, 17, 1, ReadWriteMode, CANF15R1Base> ;
    using FB18 = CAN_F15R1_FB18_Values<CAN::F15R1, 18, 1, ReadWriteMode, CANF15R1Base> ;
    using FB19 = CAN_F15R1_FB19_Values<CAN::F15R1, 19, 1, ReadWriteMode, CANF15R1Base> ;
    using FB20 = CAN_F15R1_FB20_Values<CAN::F15R1, 20, 1, ReadWriteMode, CANF15R1Base> ;
    using FB21 = CAN_F15R1_FB21_Values<CAN::F15R1, 21, 1, ReadWriteMode, CANF15R1Base> ;
    using FB22 = CAN_F15R1_FB22_Values<CAN::F15R1, 22, 1, ReadWriteMode, CANF15R1Base> ;
    using FB23 = CAN_F15R1_FB23_Values<CAN::F15R1, 23, 1, ReadWriteMode, CANF15R1Base> ;
    using FB24 = CAN_F15R1_FB24_Values<CAN::F15R1, 24, 1, ReadWriteMode, CANF15R1Base> ;
    using FB25 = CAN_F15R1_FB25_Values<CAN::F15R1, 25, 1, ReadWriteMode, CANF15R1Base> ;
    using FB26 = CAN_F15R1_FB26_Values<CAN::F15R1, 26, 1, ReadWriteMode, CANF15R1Base> ;
    using FB27 = CAN_F15R1_FB27_Values<CAN::F15R1, 27, 1, ReadWriteMode, CANF15R1Base> ;
    using FB28 = CAN_F15R1_FB28_Values<CAN::F15R1, 28, 1, ReadWriteMode, CANF15R1Base> ;
    using FB29 = CAN_F15R1_FB29_Values<CAN::F15R1, 29, 1, ReadWriteMode, CANF15R1Base> ;
    using FB30 = CAN_F15R1_FB30_Values<CAN::F15R1, 30, 1, ReadWriteMode, CANF15R1Base> ;
    using FB31 = CAN_F15R1_FB31_Values<CAN::F15R1, 31, 1, ReadWriteMode, CANF15R1Base> ;
    using FieldValues = CAN_F15R1_FB31_Values<CAN::F15R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15R1Pack  = Register<0x400066B8, 32, ReadWriteMode, CANF15R1Base, T...> ;

  struct CANF15R2Base {} ;

  struct F15R2 : public RegisterBase<0x400066BC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F15R2_FB0_Values<CAN::F15R2, 0, 1, ReadWriteMode, CANF15R2Base> ;
    using FB1 = CAN_F15R2_FB1_Values<CAN::F15R2, 1, 1, ReadWriteMode, CANF15R2Base> ;
    using FB2 = CAN_F15R2_FB2_Values<CAN::F15R2, 2, 1, ReadWriteMode, CANF15R2Base> ;
    using FB3 = CAN_F15R2_FB3_Values<CAN::F15R2, 3, 1, ReadWriteMode, CANF15R2Base> ;
    using FB4 = CAN_F15R2_FB4_Values<CAN::F15R2, 4, 1, ReadWriteMode, CANF15R2Base> ;
    using FB5 = CAN_F15R2_FB5_Values<CAN::F15R2, 5, 1, ReadWriteMode, CANF15R2Base> ;
    using FB6 = CAN_F15R2_FB6_Values<CAN::F15R2, 6, 1, ReadWriteMode, CANF15R2Base> ;
    using FB7 = CAN_F15R2_FB7_Values<CAN::F15R2, 7, 1, ReadWriteMode, CANF15R2Base> ;
    using FB8 = CAN_F15R2_FB8_Values<CAN::F15R2, 8, 1, ReadWriteMode, CANF15R2Base> ;
    using FB9 = CAN_F15R2_FB9_Values<CAN::F15R2, 9, 1, ReadWriteMode, CANF15R2Base> ;
    using FB10 = CAN_F15R2_FB10_Values<CAN::F15R2, 10, 1, ReadWriteMode, CANF15R2Base> ;
    using FB11 = CAN_F15R2_FB11_Values<CAN::F15R2, 11, 1, ReadWriteMode, CANF15R2Base> ;
    using FB12 = CAN_F15R2_FB12_Values<CAN::F15R2, 12, 1, ReadWriteMode, CANF15R2Base> ;
    using FB13 = CAN_F15R2_FB13_Values<CAN::F15R2, 13, 1, ReadWriteMode, CANF15R2Base> ;
    using FB14 = CAN_F15R2_FB14_Values<CAN::F15R2, 14, 1, ReadWriteMode, CANF15R2Base> ;
    using FB15 = CAN_F15R2_FB15_Values<CAN::F15R2, 15, 1, ReadWriteMode, CANF15R2Base> ;
    using FB16 = CAN_F15R2_FB16_Values<CAN::F15R2, 16, 1, ReadWriteMode, CANF15R2Base> ;
    using FB17 = CAN_F15R2_FB17_Values<CAN::F15R2, 17, 1, ReadWriteMode, CANF15R2Base> ;
    using FB18 = CAN_F15R2_FB18_Values<CAN::F15R2, 18, 1, ReadWriteMode, CANF15R2Base> ;
    using FB19 = CAN_F15R2_FB19_Values<CAN::F15R2, 19, 1, ReadWriteMode, CANF15R2Base> ;
    using FB20 = CAN_F15R2_FB20_Values<CAN::F15R2, 20, 1, ReadWriteMode, CANF15R2Base> ;
    using FB21 = CAN_F15R2_FB21_Values<CAN::F15R2, 21, 1, ReadWriteMode, CANF15R2Base> ;
    using FB22 = CAN_F15R2_FB22_Values<CAN::F15R2, 22, 1, ReadWriteMode, CANF15R2Base> ;
    using FB23 = CAN_F15R2_FB23_Values<CAN::F15R2, 23, 1, ReadWriteMode, CANF15R2Base> ;
    using FB24 = CAN_F15R2_FB24_Values<CAN::F15R2, 24, 1, ReadWriteMode, CANF15R2Base> ;
    using FB25 = CAN_F15R2_FB25_Values<CAN::F15R2, 25, 1, ReadWriteMode, CANF15R2Base> ;
    using FB26 = CAN_F15R2_FB26_Values<CAN::F15R2, 26, 1, ReadWriteMode, CANF15R2Base> ;
    using FB27 = CAN_F15R2_FB27_Values<CAN::F15R2, 27, 1, ReadWriteMode, CANF15R2Base> ;
    using FB28 = CAN_F15R2_FB28_Values<CAN::F15R2, 28, 1, ReadWriteMode, CANF15R2Base> ;
    using FB29 = CAN_F15R2_FB29_Values<CAN::F15R2, 29, 1, ReadWriteMode, CANF15R2Base> ;
    using FB30 = CAN_F15R2_FB30_Values<CAN::F15R2, 30, 1, ReadWriteMode, CANF15R2Base> ;
    using FB31 = CAN_F15R2_FB31_Values<CAN::F15R2, 31, 1, ReadWriteMode, CANF15R2Base> ;
    using FieldValues = CAN_F15R2_FB31_Values<CAN::F15R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15R2Pack  = Register<0x400066BC, 32, ReadWriteMode, CANF15R2Base, T...> ;

  struct CANF16R1Base {} ;

  struct F16R1 : public RegisterBase<0x400066C0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F16R1_FB0_Values<CAN::F16R1, 0, 1, ReadWriteMode, CANF16R1Base> ;
    using FB1 = CAN_F16R1_FB1_Values<CAN::F16R1, 1, 1, ReadWriteMode, CANF16R1Base> ;
    using FB2 = CAN_F16R1_FB2_Values<CAN::F16R1, 2, 1, ReadWriteMode, CANF16R1Base> ;
    using FB3 = CAN_F16R1_FB3_Values<CAN::F16R1, 3, 1, ReadWriteMode, CANF16R1Base> ;
    using FB4 = CAN_F16R1_FB4_Values<CAN::F16R1, 4, 1, ReadWriteMode, CANF16R1Base> ;
    using FB5 = CAN_F16R1_FB5_Values<CAN::F16R1, 5, 1, ReadWriteMode, CANF16R1Base> ;
    using FB6 = CAN_F16R1_FB6_Values<CAN::F16R1, 6, 1, ReadWriteMode, CANF16R1Base> ;
    using FB7 = CAN_F16R1_FB7_Values<CAN::F16R1, 7, 1, ReadWriteMode, CANF16R1Base> ;
    using FB8 = CAN_F16R1_FB8_Values<CAN::F16R1, 8, 1, ReadWriteMode, CANF16R1Base> ;
    using FB9 = CAN_F16R1_FB9_Values<CAN::F16R1, 9, 1, ReadWriteMode, CANF16R1Base> ;
    using FB10 = CAN_F16R1_FB10_Values<CAN::F16R1, 10, 1, ReadWriteMode, CANF16R1Base> ;
    using FB11 = CAN_F16R1_FB11_Values<CAN::F16R1, 11, 1, ReadWriteMode, CANF16R1Base> ;
    using FB12 = CAN_F16R1_FB12_Values<CAN::F16R1, 12, 1, ReadWriteMode, CANF16R1Base> ;
    using FB13 = CAN_F16R1_FB13_Values<CAN::F16R1, 13, 1, ReadWriteMode, CANF16R1Base> ;
    using FB14 = CAN_F16R1_FB14_Values<CAN::F16R1, 14, 1, ReadWriteMode, CANF16R1Base> ;
    using FB15 = CAN_F16R1_FB15_Values<CAN::F16R1, 15, 1, ReadWriteMode, CANF16R1Base> ;
    using FB16 = CAN_F16R1_FB16_Values<CAN::F16R1, 16, 1, ReadWriteMode, CANF16R1Base> ;
    using FB17 = CAN_F16R1_FB17_Values<CAN::F16R1, 17, 1, ReadWriteMode, CANF16R1Base> ;
    using FB18 = CAN_F16R1_FB18_Values<CAN::F16R1, 18, 1, ReadWriteMode, CANF16R1Base> ;
    using FB19 = CAN_F16R1_FB19_Values<CAN::F16R1, 19, 1, ReadWriteMode, CANF16R1Base> ;
    using FB20 = CAN_F16R1_FB20_Values<CAN::F16R1, 20, 1, ReadWriteMode, CANF16R1Base> ;
    using FB21 = CAN_F16R1_FB21_Values<CAN::F16R1, 21, 1, ReadWriteMode, CANF16R1Base> ;
    using FB22 = CAN_F16R1_FB22_Values<CAN::F16R1, 22, 1, ReadWriteMode, CANF16R1Base> ;
    using FB23 = CAN_F16R1_FB23_Values<CAN::F16R1, 23, 1, ReadWriteMode, CANF16R1Base> ;
    using FB24 = CAN_F16R1_FB24_Values<CAN::F16R1, 24, 1, ReadWriteMode, CANF16R1Base> ;
    using FB25 = CAN_F16R1_FB25_Values<CAN::F16R1, 25, 1, ReadWriteMode, CANF16R1Base> ;
    using FB26 = CAN_F16R1_FB26_Values<CAN::F16R1, 26, 1, ReadWriteMode, CANF16R1Base> ;
    using FB27 = CAN_F16R1_FB27_Values<CAN::F16R1, 27, 1, ReadWriteMode, CANF16R1Base> ;
    using FB28 = CAN_F16R1_FB28_Values<CAN::F16R1, 28, 1, ReadWriteMode, CANF16R1Base> ;
    using FB29 = CAN_F16R1_FB29_Values<CAN::F16R1, 29, 1, ReadWriteMode, CANF16R1Base> ;
    using FB30 = CAN_F16R1_FB30_Values<CAN::F16R1, 30, 1, ReadWriteMode, CANF16R1Base> ;
    using FB31 = CAN_F16R1_FB31_Values<CAN::F16R1, 31, 1, ReadWriteMode, CANF16R1Base> ;
    using FieldValues = CAN_F16R1_FB31_Values<CAN::F16R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16R1Pack  = Register<0x400066C0, 32, ReadWriteMode, CANF16R1Base, T...> ;

  struct CANF16R2Base {} ;

  struct F16R2 : public RegisterBase<0x400066C4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F16R2_FB0_Values<CAN::F16R2, 0, 1, ReadWriteMode, CANF16R2Base> ;
    using FB1 = CAN_F16R2_FB1_Values<CAN::F16R2, 1, 1, ReadWriteMode, CANF16R2Base> ;
    using FB2 = CAN_F16R2_FB2_Values<CAN::F16R2, 2, 1, ReadWriteMode, CANF16R2Base> ;
    using FB3 = CAN_F16R2_FB3_Values<CAN::F16R2, 3, 1, ReadWriteMode, CANF16R2Base> ;
    using FB4 = CAN_F16R2_FB4_Values<CAN::F16R2, 4, 1, ReadWriteMode, CANF16R2Base> ;
    using FB5 = CAN_F16R2_FB5_Values<CAN::F16R2, 5, 1, ReadWriteMode, CANF16R2Base> ;
    using FB6 = CAN_F16R2_FB6_Values<CAN::F16R2, 6, 1, ReadWriteMode, CANF16R2Base> ;
    using FB7 = CAN_F16R2_FB7_Values<CAN::F16R2, 7, 1, ReadWriteMode, CANF16R2Base> ;
    using FB8 = CAN_F16R2_FB8_Values<CAN::F16R2, 8, 1, ReadWriteMode, CANF16R2Base> ;
    using FB9 = CAN_F16R2_FB9_Values<CAN::F16R2, 9, 1, ReadWriteMode, CANF16R2Base> ;
    using FB10 = CAN_F16R2_FB10_Values<CAN::F16R2, 10, 1, ReadWriteMode, CANF16R2Base> ;
    using FB11 = CAN_F16R2_FB11_Values<CAN::F16R2, 11, 1, ReadWriteMode, CANF16R2Base> ;
    using FB12 = CAN_F16R2_FB12_Values<CAN::F16R2, 12, 1, ReadWriteMode, CANF16R2Base> ;
    using FB13 = CAN_F16R2_FB13_Values<CAN::F16R2, 13, 1, ReadWriteMode, CANF16R2Base> ;
    using FB14 = CAN_F16R2_FB14_Values<CAN::F16R2, 14, 1, ReadWriteMode, CANF16R2Base> ;
    using FB15 = CAN_F16R2_FB15_Values<CAN::F16R2, 15, 1, ReadWriteMode, CANF16R2Base> ;
    using FB16 = CAN_F16R2_FB16_Values<CAN::F16R2, 16, 1, ReadWriteMode, CANF16R2Base> ;
    using FB17 = CAN_F16R2_FB17_Values<CAN::F16R2, 17, 1, ReadWriteMode, CANF16R2Base> ;
    using FB18 = CAN_F16R2_FB18_Values<CAN::F16R2, 18, 1, ReadWriteMode, CANF16R2Base> ;
    using FB19 = CAN_F16R2_FB19_Values<CAN::F16R2, 19, 1, ReadWriteMode, CANF16R2Base> ;
    using FB20 = CAN_F16R2_FB20_Values<CAN::F16R2, 20, 1, ReadWriteMode, CANF16R2Base> ;
    using FB21 = CAN_F16R2_FB21_Values<CAN::F16R2, 21, 1, ReadWriteMode, CANF16R2Base> ;
    using FB22 = CAN_F16R2_FB22_Values<CAN::F16R2, 22, 1, ReadWriteMode, CANF16R2Base> ;
    using FB23 = CAN_F16R2_FB23_Values<CAN::F16R2, 23, 1, ReadWriteMode, CANF16R2Base> ;
    using FB24 = CAN_F16R2_FB24_Values<CAN::F16R2, 24, 1, ReadWriteMode, CANF16R2Base> ;
    using FB25 = CAN_F16R2_FB25_Values<CAN::F16R2, 25, 1, ReadWriteMode, CANF16R2Base> ;
    using FB26 = CAN_F16R2_FB26_Values<CAN::F16R2, 26, 1, ReadWriteMode, CANF16R2Base> ;
    using FB27 = CAN_F16R2_FB27_Values<CAN::F16R2, 27, 1, ReadWriteMode, CANF16R2Base> ;
    using FB28 = CAN_F16R2_FB28_Values<CAN::F16R2, 28, 1, ReadWriteMode, CANF16R2Base> ;
    using FB29 = CAN_F16R2_FB29_Values<CAN::F16R2, 29, 1, ReadWriteMode, CANF16R2Base> ;
    using FB30 = CAN_F16R2_FB30_Values<CAN::F16R2, 30, 1, ReadWriteMode, CANF16R2Base> ;
    using FB31 = CAN_F16R2_FB31_Values<CAN::F16R2, 31, 1, ReadWriteMode, CANF16R2Base> ;
    using FieldValues = CAN_F16R2_FB31_Values<CAN::F16R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16R2Pack  = Register<0x400066C4, 32, ReadWriteMode, CANF16R2Base, T...> ;

  struct CANF17R1Base {} ;

  struct F17R1 : public RegisterBase<0x400066C8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F17R1_FB0_Values<CAN::F17R1, 0, 1, ReadWriteMode, CANF17R1Base> ;
    using FB1 = CAN_F17R1_FB1_Values<CAN::F17R1, 1, 1, ReadWriteMode, CANF17R1Base> ;
    using FB2 = CAN_F17R1_FB2_Values<CAN::F17R1, 2, 1, ReadWriteMode, CANF17R1Base> ;
    using FB3 = CAN_F17R1_FB3_Values<CAN::F17R1, 3, 1, ReadWriteMode, CANF17R1Base> ;
    using FB4 = CAN_F17R1_FB4_Values<CAN::F17R1, 4, 1, ReadWriteMode, CANF17R1Base> ;
    using FB5 = CAN_F17R1_FB5_Values<CAN::F17R1, 5, 1, ReadWriteMode, CANF17R1Base> ;
    using FB6 = CAN_F17R1_FB6_Values<CAN::F17R1, 6, 1, ReadWriteMode, CANF17R1Base> ;
    using FB7 = CAN_F17R1_FB7_Values<CAN::F17R1, 7, 1, ReadWriteMode, CANF17R1Base> ;
    using FB8 = CAN_F17R1_FB8_Values<CAN::F17R1, 8, 1, ReadWriteMode, CANF17R1Base> ;
    using FB9 = CAN_F17R1_FB9_Values<CAN::F17R1, 9, 1, ReadWriteMode, CANF17R1Base> ;
    using FB10 = CAN_F17R1_FB10_Values<CAN::F17R1, 10, 1, ReadWriteMode, CANF17R1Base> ;
    using FB11 = CAN_F17R1_FB11_Values<CAN::F17R1, 11, 1, ReadWriteMode, CANF17R1Base> ;
    using FB12 = CAN_F17R1_FB12_Values<CAN::F17R1, 12, 1, ReadWriteMode, CANF17R1Base> ;
    using FB13 = CAN_F17R1_FB13_Values<CAN::F17R1, 13, 1, ReadWriteMode, CANF17R1Base> ;
    using FB14 = CAN_F17R1_FB14_Values<CAN::F17R1, 14, 1, ReadWriteMode, CANF17R1Base> ;
    using FB15 = CAN_F17R1_FB15_Values<CAN::F17R1, 15, 1, ReadWriteMode, CANF17R1Base> ;
    using FB16 = CAN_F17R1_FB16_Values<CAN::F17R1, 16, 1, ReadWriteMode, CANF17R1Base> ;
    using FB17 = CAN_F17R1_FB17_Values<CAN::F17R1, 17, 1, ReadWriteMode, CANF17R1Base> ;
    using FB18 = CAN_F17R1_FB18_Values<CAN::F17R1, 18, 1, ReadWriteMode, CANF17R1Base> ;
    using FB19 = CAN_F17R1_FB19_Values<CAN::F17R1, 19, 1, ReadWriteMode, CANF17R1Base> ;
    using FB20 = CAN_F17R1_FB20_Values<CAN::F17R1, 20, 1, ReadWriteMode, CANF17R1Base> ;
    using FB21 = CAN_F17R1_FB21_Values<CAN::F17R1, 21, 1, ReadWriteMode, CANF17R1Base> ;
    using FB22 = CAN_F17R1_FB22_Values<CAN::F17R1, 22, 1, ReadWriteMode, CANF17R1Base> ;
    using FB23 = CAN_F17R1_FB23_Values<CAN::F17R1, 23, 1, ReadWriteMode, CANF17R1Base> ;
    using FB24 = CAN_F17R1_FB24_Values<CAN::F17R1, 24, 1, ReadWriteMode, CANF17R1Base> ;
    using FB25 = CAN_F17R1_FB25_Values<CAN::F17R1, 25, 1, ReadWriteMode, CANF17R1Base> ;
    using FB26 = CAN_F17R1_FB26_Values<CAN::F17R1, 26, 1, ReadWriteMode, CANF17R1Base> ;
    using FB27 = CAN_F17R1_FB27_Values<CAN::F17R1, 27, 1, ReadWriteMode, CANF17R1Base> ;
    using FB28 = CAN_F17R1_FB28_Values<CAN::F17R1, 28, 1, ReadWriteMode, CANF17R1Base> ;
    using FB29 = CAN_F17R1_FB29_Values<CAN::F17R1, 29, 1, ReadWriteMode, CANF17R1Base> ;
    using FB30 = CAN_F17R1_FB30_Values<CAN::F17R1, 30, 1, ReadWriteMode, CANF17R1Base> ;
    using FB31 = CAN_F17R1_FB31_Values<CAN::F17R1, 31, 1, ReadWriteMode, CANF17R1Base> ;
    using FieldValues = CAN_F17R1_FB31_Values<CAN::F17R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17R1Pack  = Register<0x400066C8, 32, ReadWriteMode, CANF17R1Base, T...> ;

  struct CANF17R2Base {} ;

  struct F17R2 : public RegisterBase<0x400066CC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F17R2_FB0_Values<CAN::F17R2, 0, 1, ReadWriteMode, CANF17R2Base> ;
    using FB1 = CAN_F17R2_FB1_Values<CAN::F17R2, 1, 1, ReadWriteMode, CANF17R2Base> ;
    using FB2 = CAN_F17R2_FB2_Values<CAN::F17R2, 2, 1, ReadWriteMode, CANF17R2Base> ;
    using FB3 = CAN_F17R2_FB3_Values<CAN::F17R2, 3, 1, ReadWriteMode, CANF17R2Base> ;
    using FB4 = CAN_F17R2_FB4_Values<CAN::F17R2, 4, 1, ReadWriteMode, CANF17R2Base> ;
    using FB5 = CAN_F17R2_FB5_Values<CAN::F17R2, 5, 1, ReadWriteMode, CANF17R2Base> ;
    using FB6 = CAN_F17R2_FB6_Values<CAN::F17R2, 6, 1, ReadWriteMode, CANF17R2Base> ;
    using FB7 = CAN_F17R2_FB7_Values<CAN::F17R2, 7, 1, ReadWriteMode, CANF17R2Base> ;
    using FB8 = CAN_F17R2_FB8_Values<CAN::F17R2, 8, 1, ReadWriteMode, CANF17R2Base> ;
    using FB9 = CAN_F17R2_FB9_Values<CAN::F17R2, 9, 1, ReadWriteMode, CANF17R2Base> ;
    using FB10 = CAN_F17R2_FB10_Values<CAN::F17R2, 10, 1, ReadWriteMode, CANF17R2Base> ;
    using FB11 = CAN_F17R2_FB11_Values<CAN::F17R2, 11, 1, ReadWriteMode, CANF17R2Base> ;
    using FB12 = CAN_F17R2_FB12_Values<CAN::F17R2, 12, 1, ReadWriteMode, CANF17R2Base> ;
    using FB13 = CAN_F17R2_FB13_Values<CAN::F17R2, 13, 1, ReadWriteMode, CANF17R2Base> ;
    using FB14 = CAN_F17R2_FB14_Values<CAN::F17R2, 14, 1, ReadWriteMode, CANF17R2Base> ;
    using FB15 = CAN_F17R2_FB15_Values<CAN::F17R2, 15, 1, ReadWriteMode, CANF17R2Base> ;
    using FB16 = CAN_F17R2_FB16_Values<CAN::F17R2, 16, 1, ReadWriteMode, CANF17R2Base> ;
    using FB17 = CAN_F17R2_FB17_Values<CAN::F17R2, 17, 1, ReadWriteMode, CANF17R2Base> ;
    using FB18 = CAN_F17R2_FB18_Values<CAN::F17R2, 18, 1, ReadWriteMode, CANF17R2Base> ;
    using FB19 = CAN_F17R2_FB19_Values<CAN::F17R2, 19, 1, ReadWriteMode, CANF17R2Base> ;
    using FB20 = CAN_F17R2_FB20_Values<CAN::F17R2, 20, 1, ReadWriteMode, CANF17R2Base> ;
    using FB21 = CAN_F17R2_FB21_Values<CAN::F17R2, 21, 1, ReadWriteMode, CANF17R2Base> ;
    using FB22 = CAN_F17R2_FB22_Values<CAN::F17R2, 22, 1, ReadWriteMode, CANF17R2Base> ;
    using FB23 = CAN_F17R2_FB23_Values<CAN::F17R2, 23, 1, ReadWriteMode, CANF17R2Base> ;
    using FB24 = CAN_F17R2_FB24_Values<CAN::F17R2, 24, 1, ReadWriteMode, CANF17R2Base> ;
    using FB25 = CAN_F17R2_FB25_Values<CAN::F17R2, 25, 1, ReadWriteMode, CANF17R2Base> ;
    using FB26 = CAN_F17R2_FB26_Values<CAN::F17R2, 26, 1, ReadWriteMode, CANF17R2Base> ;
    using FB27 = CAN_F17R2_FB27_Values<CAN::F17R2, 27, 1, ReadWriteMode, CANF17R2Base> ;
    using FB28 = CAN_F17R2_FB28_Values<CAN::F17R2, 28, 1, ReadWriteMode, CANF17R2Base> ;
    using FB29 = CAN_F17R2_FB29_Values<CAN::F17R2, 29, 1, ReadWriteMode, CANF17R2Base> ;
    using FB30 = CAN_F17R2_FB30_Values<CAN::F17R2, 30, 1, ReadWriteMode, CANF17R2Base> ;
    using FB31 = CAN_F17R2_FB31_Values<CAN::F17R2, 31, 1, ReadWriteMode, CANF17R2Base> ;
    using FieldValues = CAN_F17R2_FB31_Values<CAN::F17R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17R2Pack  = Register<0x400066CC, 32, ReadWriteMode, CANF17R2Base, T...> ;

  struct CANF18R1Base {} ;

  struct F18R1 : public RegisterBase<0x400066D0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F18R1_FB0_Values<CAN::F18R1, 0, 1, ReadWriteMode, CANF18R1Base> ;
    using FB1 = CAN_F18R1_FB1_Values<CAN::F18R1, 1, 1, ReadWriteMode, CANF18R1Base> ;
    using FB2 = CAN_F18R1_FB2_Values<CAN::F18R1, 2, 1, ReadWriteMode, CANF18R1Base> ;
    using FB3 = CAN_F18R1_FB3_Values<CAN::F18R1, 3, 1, ReadWriteMode, CANF18R1Base> ;
    using FB4 = CAN_F18R1_FB4_Values<CAN::F18R1, 4, 1, ReadWriteMode, CANF18R1Base> ;
    using FB5 = CAN_F18R1_FB5_Values<CAN::F18R1, 5, 1, ReadWriteMode, CANF18R1Base> ;
    using FB6 = CAN_F18R1_FB6_Values<CAN::F18R1, 6, 1, ReadWriteMode, CANF18R1Base> ;
    using FB7 = CAN_F18R1_FB7_Values<CAN::F18R1, 7, 1, ReadWriteMode, CANF18R1Base> ;
    using FB8 = CAN_F18R1_FB8_Values<CAN::F18R1, 8, 1, ReadWriteMode, CANF18R1Base> ;
    using FB9 = CAN_F18R1_FB9_Values<CAN::F18R1, 9, 1, ReadWriteMode, CANF18R1Base> ;
    using FB10 = CAN_F18R1_FB10_Values<CAN::F18R1, 10, 1, ReadWriteMode, CANF18R1Base> ;
    using FB11 = CAN_F18R1_FB11_Values<CAN::F18R1, 11, 1, ReadWriteMode, CANF18R1Base> ;
    using FB12 = CAN_F18R1_FB12_Values<CAN::F18R1, 12, 1, ReadWriteMode, CANF18R1Base> ;
    using FB13 = CAN_F18R1_FB13_Values<CAN::F18R1, 13, 1, ReadWriteMode, CANF18R1Base> ;
    using FB14 = CAN_F18R1_FB14_Values<CAN::F18R1, 14, 1, ReadWriteMode, CANF18R1Base> ;
    using FB15 = CAN_F18R1_FB15_Values<CAN::F18R1, 15, 1, ReadWriteMode, CANF18R1Base> ;
    using FB16 = CAN_F18R1_FB16_Values<CAN::F18R1, 16, 1, ReadWriteMode, CANF18R1Base> ;
    using FB17 = CAN_F18R1_FB17_Values<CAN::F18R1, 17, 1, ReadWriteMode, CANF18R1Base> ;
    using FB18 = CAN_F18R1_FB18_Values<CAN::F18R1, 18, 1, ReadWriteMode, CANF18R1Base> ;
    using FB19 = CAN_F18R1_FB19_Values<CAN::F18R1, 19, 1, ReadWriteMode, CANF18R1Base> ;
    using FB20 = CAN_F18R1_FB20_Values<CAN::F18R1, 20, 1, ReadWriteMode, CANF18R1Base> ;
    using FB21 = CAN_F18R1_FB21_Values<CAN::F18R1, 21, 1, ReadWriteMode, CANF18R1Base> ;
    using FB22 = CAN_F18R1_FB22_Values<CAN::F18R1, 22, 1, ReadWriteMode, CANF18R1Base> ;
    using FB23 = CAN_F18R1_FB23_Values<CAN::F18R1, 23, 1, ReadWriteMode, CANF18R1Base> ;
    using FB24 = CAN_F18R1_FB24_Values<CAN::F18R1, 24, 1, ReadWriteMode, CANF18R1Base> ;
    using FB25 = CAN_F18R1_FB25_Values<CAN::F18R1, 25, 1, ReadWriteMode, CANF18R1Base> ;
    using FB26 = CAN_F18R1_FB26_Values<CAN::F18R1, 26, 1, ReadWriteMode, CANF18R1Base> ;
    using FB27 = CAN_F18R1_FB27_Values<CAN::F18R1, 27, 1, ReadWriteMode, CANF18R1Base> ;
    using FB28 = CAN_F18R1_FB28_Values<CAN::F18R1, 28, 1, ReadWriteMode, CANF18R1Base> ;
    using FB29 = CAN_F18R1_FB29_Values<CAN::F18R1, 29, 1, ReadWriteMode, CANF18R1Base> ;
    using FB30 = CAN_F18R1_FB30_Values<CAN::F18R1, 30, 1, ReadWriteMode, CANF18R1Base> ;
    using FB31 = CAN_F18R1_FB31_Values<CAN::F18R1, 31, 1, ReadWriteMode, CANF18R1Base> ;
    using FieldValues = CAN_F18R1_FB31_Values<CAN::F18R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18R1Pack  = Register<0x400066D0, 32, ReadWriteMode, CANF18R1Base, T...> ;

  struct CANF18R2Base {} ;

  struct F18R2 : public RegisterBase<0x400066D4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F18R2_FB0_Values<CAN::F18R2, 0, 1, ReadWriteMode, CANF18R2Base> ;
    using FB1 = CAN_F18R2_FB1_Values<CAN::F18R2, 1, 1, ReadWriteMode, CANF18R2Base> ;
    using FB2 = CAN_F18R2_FB2_Values<CAN::F18R2, 2, 1, ReadWriteMode, CANF18R2Base> ;
    using FB3 = CAN_F18R2_FB3_Values<CAN::F18R2, 3, 1, ReadWriteMode, CANF18R2Base> ;
    using FB4 = CAN_F18R2_FB4_Values<CAN::F18R2, 4, 1, ReadWriteMode, CANF18R2Base> ;
    using FB5 = CAN_F18R2_FB5_Values<CAN::F18R2, 5, 1, ReadWriteMode, CANF18R2Base> ;
    using FB6 = CAN_F18R2_FB6_Values<CAN::F18R2, 6, 1, ReadWriteMode, CANF18R2Base> ;
    using FB7 = CAN_F18R2_FB7_Values<CAN::F18R2, 7, 1, ReadWriteMode, CANF18R2Base> ;
    using FB8 = CAN_F18R2_FB8_Values<CAN::F18R2, 8, 1, ReadWriteMode, CANF18R2Base> ;
    using FB9 = CAN_F18R2_FB9_Values<CAN::F18R2, 9, 1, ReadWriteMode, CANF18R2Base> ;
    using FB10 = CAN_F18R2_FB10_Values<CAN::F18R2, 10, 1, ReadWriteMode, CANF18R2Base> ;
    using FB11 = CAN_F18R2_FB11_Values<CAN::F18R2, 11, 1, ReadWriteMode, CANF18R2Base> ;
    using FB12 = CAN_F18R2_FB12_Values<CAN::F18R2, 12, 1, ReadWriteMode, CANF18R2Base> ;
    using FB13 = CAN_F18R2_FB13_Values<CAN::F18R2, 13, 1, ReadWriteMode, CANF18R2Base> ;
    using FB14 = CAN_F18R2_FB14_Values<CAN::F18R2, 14, 1, ReadWriteMode, CANF18R2Base> ;
    using FB15 = CAN_F18R2_FB15_Values<CAN::F18R2, 15, 1, ReadWriteMode, CANF18R2Base> ;
    using FB16 = CAN_F18R2_FB16_Values<CAN::F18R2, 16, 1, ReadWriteMode, CANF18R2Base> ;
    using FB17 = CAN_F18R2_FB17_Values<CAN::F18R2, 17, 1, ReadWriteMode, CANF18R2Base> ;
    using FB18 = CAN_F18R2_FB18_Values<CAN::F18R2, 18, 1, ReadWriteMode, CANF18R2Base> ;
    using FB19 = CAN_F18R2_FB19_Values<CAN::F18R2, 19, 1, ReadWriteMode, CANF18R2Base> ;
    using FB20 = CAN_F18R2_FB20_Values<CAN::F18R2, 20, 1, ReadWriteMode, CANF18R2Base> ;
    using FB21 = CAN_F18R2_FB21_Values<CAN::F18R2, 21, 1, ReadWriteMode, CANF18R2Base> ;
    using FB22 = CAN_F18R2_FB22_Values<CAN::F18R2, 22, 1, ReadWriteMode, CANF18R2Base> ;
    using FB23 = CAN_F18R2_FB23_Values<CAN::F18R2, 23, 1, ReadWriteMode, CANF18R2Base> ;
    using FB24 = CAN_F18R2_FB24_Values<CAN::F18R2, 24, 1, ReadWriteMode, CANF18R2Base> ;
    using FB25 = CAN_F18R2_FB25_Values<CAN::F18R2, 25, 1, ReadWriteMode, CANF18R2Base> ;
    using FB26 = CAN_F18R2_FB26_Values<CAN::F18R2, 26, 1, ReadWriteMode, CANF18R2Base> ;
    using FB27 = CAN_F18R2_FB27_Values<CAN::F18R2, 27, 1, ReadWriteMode, CANF18R2Base> ;
    using FB28 = CAN_F18R2_FB28_Values<CAN::F18R2, 28, 1, ReadWriteMode, CANF18R2Base> ;
    using FB29 = CAN_F18R2_FB29_Values<CAN::F18R2, 29, 1, ReadWriteMode, CANF18R2Base> ;
    using FB30 = CAN_F18R2_FB30_Values<CAN::F18R2, 30, 1, ReadWriteMode, CANF18R2Base> ;
    using FB31 = CAN_F18R2_FB31_Values<CAN::F18R2, 31, 1, ReadWriteMode, CANF18R2Base> ;
    using FieldValues = CAN_F18R2_FB31_Values<CAN::F18R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18R2Pack  = Register<0x400066D4, 32, ReadWriteMode, CANF18R2Base, T...> ;

  struct CANF19R1Base {} ;

  struct F19R1 : public RegisterBase<0x400066D8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F19R1_FB0_Values<CAN::F19R1, 0, 1, ReadWriteMode, CANF19R1Base> ;
    using FB1 = CAN_F19R1_FB1_Values<CAN::F19R1, 1, 1, ReadWriteMode, CANF19R1Base> ;
    using FB2 = CAN_F19R1_FB2_Values<CAN::F19R1, 2, 1, ReadWriteMode, CANF19R1Base> ;
    using FB3 = CAN_F19R1_FB3_Values<CAN::F19R1, 3, 1, ReadWriteMode, CANF19R1Base> ;
    using FB4 = CAN_F19R1_FB4_Values<CAN::F19R1, 4, 1, ReadWriteMode, CANF19R1Base> ;
    using FB5 = CAN_F19R1_FB5_Values<CAN::F19R1, 5, 1, ReadWriteMode, CANF19R1Base> ;
    using FB6 = CAN_F19R1_FB6_Values<CAN::F19R1, 6, 1, ReadWriteMode, CANF19R1Base> ;
    using FB7 = CAN_F19R1_FB7_Values<CAN::F19R1, 7, 1, ReadWriteMode, CANF19R1Base> ;
    using FB8 = CAN_F19R1_FB8_Values<CAN::F19R1, 8, 1, ReadWriteMode, CANF19R1Base> ;
    using FB9 = CAN_F19R1_FB9_Values<CAN::F19R1, 9, 1, ReadWriteMode, CANF19R1Base> ;
    using FB10 = CAN_F19R1_FB10_Values<CAN::F19R1, 10, 1, ReadWriteMode, CANF19R1Base> ;
    using FB11 = CAN_F19R1_FB11_Values<CAN::F19R1, 11, 1, ReadWriteMode, CANF19R1Base> ;
    using FB12 = CAN_F19R1_FB12_Values<CAN::F19R1, 12, 1, ReadWriteMode, CANF19R1Base> ;
    using FB13 = CAN_F19R1_FB13_Values<CAN::F19R1, 13, 1, ReadWriteMode, CANF19R1Base> ;
    using FB14 = CAN_F19R1_FB14_Values<CAN::F19R1, 14, 1, ReadWriteMode, CANF19R1Base> ;
    using FB15 = CAN_F19R1_FB15_Values<CAN::F19R1, 15, 1, ReadWriteMode, CANF19R1Base> ;
    using FB16 = CAN_F19R1_FB16_Values<CAN::F19R1, 16, 1, ReadWriteMode, CANF19R1Base> ;
    using FB17 = CAN_F19R1_FB17_Values<CAN::F19R1, 17, 1, ReadWriteMode, CANF19R1Base> ;
    using FB18 = CAN_F19R1_FB18_Values<CAN::F19R1, 18, 1, ReadWriteMode, CANF19R1Base> ;
    using FB19 = CAN_F19R1_FB19_Values<CAN::F19R1, 19, 1, ReadWriteMode, CANF19R1Base> ;
    using FB20 = CAN_F19R1_FB20_Values<CAN::F19R1, 20, 1, ReadWriteMode, CANF19R1Base> ;
    using FB21 = CAN_F19R1_FB21_Values<CAN::F19R1, 21, 1, ReadWriteMode, CANF19R1Base> ;
    using FB22 = CAN_F19R1_FB22_Values<CAN::F19R1, 22, 1, ReadWriteMode, CANF19R1Base> ;
    using FB23 = CAN_F19R1_FB23_Values<CAN::F19R1, 23, 1, ReadWriteMode, CANF19R1Base> ;
    using FB24 = CAN_F19R1_FB24_Values<CAN::F19R1, 24, 1, ReadWriteMode, CANF19R1Base> ;
    using FB25 = CAN_F19R1_FB25_Values<CAN::F19R1, 25, 1, ReadWriteMode, CANF19R1Base> ;
    using FB26 = CAN_F19R1_FB26_Values<CAN::F19R1, 26, 1, ReadWriteMode, CANF19R1Base> ;
    using FB27 = CAN_F19R1_FB27_Values<CAN::F19R1, 27, 1, ReadWriteMode, CANF19R1Base> ;
    using FB28 = CAN_F19R1_FB28_Values<CAN::F19R1, 28, 1, ReadWriteMode, CANF19R1Base> ;
    using FB29 = CAN_F19R1_FB29_Values<CAN::F19R1, 29, 1, ReadWriteMode, CANF19R1Base> ;
    using FB30 = CAN_F19R1_FB30_Values<CAN::F19R1, 30, 1, ReadWriteMode, CANF19R1Base> ;
    using FB31 = CAN_F19R1_FB31_Values<CAN::F19R1, 31, 1, ReadWriteMode, CANF19R1Base> ;
    using FieldValues = CAN_F19R1_FB31_Values<CAN::F19R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19R1Pack  = Register<0x400066D8, 32, ReadWriteMode, CANF19R1Base, T...> ;

  struct CANF19R2Base {} ;

  struct F19R2 : public RegisterBase<0x400066DC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F19R2_FB0_Values<CAN::F19R2, 0, 1, ReadWriteMode, CANF19R2Base> ;
    using FB1 = CAN_F19R2_FB1_Values<CAN::F19R2, 1, 1, ReadWriteMode, CANF19R2Base> ;
    using FB2 = CAN_F19R2_FB2_Values<CAN::F19R2, 2, 1, ReadWriteMode, CANF19R2Base> ;
    using FB3 = CAN_F19R2_FB3_Values<CAN::F19R2, 3, 1, ReadWriteMode, CANF19R2Base> ;
    using FB4 = CAN_F19R2_FB4_Values<CAN::F19R2, 4, 1, ReadWriteMode, CANF19R2Base> ;
    using FB5 = CAN_F19R2_FB5_Values<CAN::F19R2, 5, 1, ReadWriteMode, CANF19R2Base> ;
    using FB6 = CAN_F19R2_FB6_Values<CAN::F19R2, 6, 1, ReadWriteMode, CANF19R2Base> ;
    using FB7 = CAN_F19R2_FB7_Values<CAN::F19R2, 7, 1, ReadWriteMode, CANF19R2Base> ;
    using FB8 = CAN_F19R2_FB8_Values<CAN::F19R2, 8, 1, ReadWriteMode, CANF19R2Base> ;
    using FB9 = CAN_F19R2_FB9_Values<CAN::F19R2, 9, 1, ReadWriteMode, CANF19R2Base> ;
    using FB10 = CAN_F19R2_FB10_Values<CAN::F19R2, 10, 1, ReadWriteMode, CANF19R2Base> ;
    using FB11 = CAN_F19R2_FB11_Values<CAN::F19R2, 11, 1, ReadWriteMode, CANF19R2Base> ;
    using FB12 = CAN_F19R2_FB12_Values<CAN::F19R2, 12, 1, ReadWriteMode, CANF19R2Base> ;
    using FB13 = CAN_F19R2_FB13_Values<CAN::F19R2, 13, 1, ReadWriteMode, CANF19R2Base> ;
    using FB14 = CAN_F19R2_FB14_Values<CAN::F19R2, 14, 1, ReadWriteMode, CANF19R2Base> ;
    using FB15 = CAN_F19R2_FB15_Values<CAN::F19R2, 15, 1, ReadWriteMode, CANF19R2Base> ;
    using FB16 = CAN_F19R2_FB16_Values<CAN::F19R2, 16, 1, ReadWriteMode, CANF19R2Base> ;
    using FB17 = CAN_F19R2_FB17_Values<CAN::F19R2, 17, 1, ReadWriteMode, CANF19R2Base> ;
    using FB18 = CAN_F19R2_FB18_Values<CAN::F19R2, 18, 1, ReadWriteMode, CANF19R2Base> ;
    using FB19 = CAN_F19R2_FB19_Values<CAN::F19R2, 19, 1, ReadWriteMode, CANF19R2Base> ;
    using FB20 = CAN_F19R2_FB20_Values<CAN::F19R2, 20, 1, ReadWriteMode, CANF19R2Base> ;
    using FB21 = CAN_F19R2_FB21_Values<CAN::F19R2, 21, 1, ReadWriteMode, CANF19R2Base> ;
    using FB22 = CAN_F19R2_FB22_Values<CAN::F19R2, 22, 1, ReadWriteMode, CANF19R2Base> ;
    using FB23 = CAN_F19R2_FB23_Values<CAN::F19R2, 23, 1, ReadWriteMode, CANF19R2Base> ;
    using FB24 = CAN_F19R2_FB24_Values<CAN::F19R2, 24, 1, ReadWriteMode, CANF19R2Base> ;
    using FB25 = CAN_F19R2_FB25_Values<CAN::F19R2, 25, 1, ReadWriteMode, CANF19R2Base> ;
    using FB26 = CAN_F19R2_FB26_Values<CAN::F19R2, 26, 1, ReadWriteMode, CANF19R2Base> ;
    using FB27 = CAN_F19R2_FB27_Values<CAN::F19R2, 27, 1, ReadWriteMode, CANF19R2Base> ;
    using FB28 = CAN_F19R2_FB28_Values<CAN::F19R2, 28, 1, ReadWriteMode, CANF19R2Base> ;
    using FB29 = CAN_F19R2_FB29_Values<CAN::F19R2, 29, 1, ReadWriteMode, CANF19R2Base> ;
    using FB30 = CAN_F19R2_FB30_Values<CAN::F19R2, 30, 1, ReadWriteMode, CANF19R2Base> ;
    using FB31 = CAN_F19R2_FB31_Values<CAN::F19R2, 31, 1, ReadWriteMode, CANF19R2Base> ;
    using FieldValues = CAN_F19R2_FB31_Values<CAN::F19R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19R2Pack  = Register<0x400066DC, 32, ReadWriteMode, CANF19R2Base, T...> ;

  struct CANF20R1Base {} ;

  struct F20R1 : public RegisterBase<0x400066E0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F20R1_FB0_Values<CAN::F20R1, 0, 1, ReadWriteMode, CANF20R1Base> ;
    using FB1 = CAN_F20R1_FB1_Values<CAN::F20R1, 1, 1, ReadWriteMode, CANF20R1Base> ;
    using FB2 = CAN_F20R1_FB2_Values<CAN::F20R1, 2, 1, ReadWriteMode, CANF20R1Base> ;
    using FB3 = CAN_F20R1_FB3_Values<CAN::F20R1, 3, 1, ReadWriteMode, CANF20R1Base> ;
    using FB4 = CAN_F20R1_FB4_Values<CAN::F20R1, 4, 1, ReadWriteMode, CANF20R1Base> ;
    using FB5 = CAN_F20R1_FB5_Values<CAN::F20R1, 5, 1, ReadWriteMode, CANF20R1Base> ;
    using FB6 = CAN_F20R1_FB6_Values<CAN::F20R1, 6, 1, ReadWriteMode, CANF20R1Base> ;
    using FB7 = CAN_F20R1_FB7_Values<CAN::F20R1, 7, 1, ReadWriteMode, CANF20R1Base> ;
    using FB8 = CAN_F20R1_FB8_Values<CAN::F20R1, 8, 1, ReadWriteMode, CANF20R1Base> ;
    using FB9 = CAN_F20R1_FB9_Values<CAN::F20R1, 9, 1, ReadWriteMode, CANF20R1Base> ;
    using FB10 = CAN_F20R1_FB10_Values<CAN::F20R1, 10, 1, ReadWriteMode, CANF20R1Base> ;
    using FB11 = CAN_F20R1_FB11_Values<CAN::F20R1, 11, 1, ReadWriteMode, CANF20R1Base> ;
    using FB12 = CAN_F20R1_FB12_Values<CAN::F20R1, 12, 1, ReadWriteMode, CANF20R1Base> ;
    using FB13 = CAN_F20R1_FB13_Values<CAN::F20R1, 13, 1, ReadWriteMode, CANF20R1Base> ;
    using FB14 = CAN_F20R1_FB14_Values<CAN::F20R1, 14, 1, ReadWriteMode, CANF20R1Base> ;
    using FB15 = CAN_F20R1_FB15_Values<CAN::F20R1, 15, 1, ReadWriteMode, CANF20R1Base> ;
    using FB16 = CAN_F20R1_FB16_Values<CAN::F20R1, 16, 1, ReadWriteMode, CANF20R1Base> ;
    using FB17 = CAN_F20R1_FB17_Values<CAN::F20R1, 17, 1, ReadWriteMode, CANF20R1Base> ;
    using FB18 = CAN_F20R1_FB18_Values<CAN::F20R1, 18, 1, ReadWriteMode, CANF20R1Base> ;
    using FB19 = CAN_F20R1_FB19_Values<CAN::F20R1, 19, 1, ReadWriteMode, CANF20R1Base> ;
    using FB20 = CAN_F20R1_FB20_Values<CAN::F20R1, 20, 1, ReadWriteMode, CANF20R1Base> ;
    using FB21 = CAN_F20R1_FB21_Values<CAN::F20R1, 21, 1, ReadWriteMode, CANF20R1Base> ;
    using FB22 = CAN_F20R1_FB22_Values<CAN::F20R1, 22, 1, ReadWriteMode, CANF20R1Base> ;
    using FB23 = CAN_F20R1_FB23_Values<CAN::F20R1, 23, 1, ReadWriteMode, CANF20R1Base> ;
    using FB24 = CAN_F20R1_FB24_Values<CAN::F20R1, 24, 1, ReadWriteMode, CANF20R1Base> ;
    using FB25 = CAN_F20R1_FB25_Values<CAN::F20R1, 25, 1, ReadWriteMode, CANF20R1Base> ;
    using FB26 = CAN_F20R1_FB26_Values<CAN::F20R1, 26, 1, ReadWriteMode, CANF20R1Base> ;
    using FB27 = CAN_F20R1_FB27_Values<CAN::F20R1, 27, 1, ReadWriteMode, CANF20R1Base> ;
    using FB28 = CAN_F20R1_FB28_Values<CAN::F20R1, 28, 1, ReadWriteMode, CANF20R1Base> ;
    using FB29 = CAN_F20R1_FB29_Values<CAN::F20R1, 29, 1, ReadWriteMode, CANF20R1Base> ;
    using FB30 = CAN_F20R1_FB30_Values<CAN::F20R1, 30, 1, ReadWriteMode, CANF20R1Base> ;
    using FB31 = CAN_F20R1_FB31_Values<CAN::F20R1, 31, 1, ReadWriteMode, CANF20R1Base> ;
    using FieldValues = CAN_F20R1_FB31_Values<CAN::F20R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20R1Pack  = Register<0x400066E0, 32, ReadWriteMode, CANF20R1Base, T...> ;

  struct CANF20R2Base {} ;

  struct F20R2 : public RegisterBase<0x400066E4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F20R2_FB0_Values<CAN::F20R2, 0, 1, ReadWriteMode, CANF20R2Base> ;
    using FB1 = CAN_F20R2_FB1_Values<CAN::F20R2, 1, 1, ReadWriteMode, CANF20R2Base> ;
    using FB2 = CAN_F20R2_FB2_Values<CAN::F20R2, 2, 1, ReadWriteMode, CANF20R2Base> ;
    using FB3 = CAN_F20R2_FB3_Values<CAN::F20R2, 3, 1, ReadWriteMode, CANF20R2Base> ;
    using FB4 = CAN_F20R2_FB4_Values<CAN::F20R2, 4, 1, ReadWriteMode, CANF20R2Base> ;
    using FB5 = CAN_F20R2_FB5_Values<CAN::F20R2, 5, 1, ReadWriteMode, CANF20R2Base> ;
    using FB6 = CAN_F20R2_FB6_Values<CAN::F20R2, 6, 1, ReadWriteMode, CANF20R2Base> ;
    using FB7 = CAN_F20R2_FB7_Values<CAN::F20R2, 7, 1, ReadWriteMode, CANF20R2Base> ;
    using FB8 = CAN_F20R2_FB8_Values<CAN::F20R2, 8, 1, ReadWriteMode, CANF20R2Base> ;
    using FB9 = CAN_F20R2_FB9_Values<CAN::F20R2, 9, 1, ReadWriteMode, CANF20R2Base> ;
    using FB10 = CAN_F20R2_FB10_Values<CAN::F20R2, 10, 1, ReadWriteMode, CANF20R2Base> ;
    using FB11 = CAN_F20R2_FB11_Values<CAN::F20R2, 11, 1, ReadWriteMode, CANF20R2Base> ;
    using FB12 = CAN_F20R2_FB12_Values<CAN::F20R2, 12, 1, ReadWriteMode, CANF20R2Base> ;
    using FB13 = CAN_F20R2_FB13_Values<CAN::F20R2, 13, 1, ReadWriteMode, CANF20R2Base> ;
    using FB14 = CAN_F20R2_FB14_Values<CAN::F20R2, 14, 1, ReadWriteMode, CANF20R2Base> ;
    using FB15 = CAN_F20R2_FB15_Values<CAN::F20R2, 15, 1, ReadWriteMode, CANF20R2Base> ;
    using FB16 = CAN_F20R2_FB16_Values<CAN::F20R2, 16, 1, ReadWriteMode, CANF20R2Base> ;
    using FB17 = CAN_F20R2_FB17_Values<CAN::F20R2, 17, 1, ReadWriteMode, CANF20R2Base> ;
    using FB18 = CAN_F20R2_FB18_Values<CAN::F20R2, 18, 1, ReadWriteMode, CANF20R2Base> ;
    using FB19 = CAN_F20R2_FB19_Values<CAN::F20R2, 19, 1, ReadWriteMode, CANF20R2Base> ;
    using FB20 = CAN_F20R2_FB20_Values<CAN::F20R2, 20, 1, ReadWriteMode, CANF20R2Base> ;
    using FB21 = CAN_F20R2_FB21_Values<CAN::F20R2, 21, 1, ReadWriteMode, CANF20R2Base> ;
    using FB22 = CAN_F20R2_FB22_Values<CAN::F20R2, 22, 1, ReadWriteMode, CANF20R2Base> ;
    using FB23 = CAN_F20R2_FB23_Values<CAN::F20R2, 23, 1, ReadWriteMode, CANF20R2Base> ;
    using FB24 = CAN_F20R2_FB24_Values<CAN::F20R2, 24, 1, ReadWriteMode, CANF20R2Base> ;
    using FB25 = CAN_F20R2_FB25_Values<CAN::F20R2, 25, 1, ReadWriteMode, CANF20R2Base> ;
    using FB26 = CAN_F20R2_FB26_Values<CAN::F20R2, 26, 1, ReadWriteMode, CANF20R2Base> ;
    using FB27 = CAN_F20R2_FB27_Values<CAN::F20R2, 27, 1, ReadWriteMode, CANF20R2Base> ;
    using FB28 = CAN_F20R2_FB28_Values<CAN::F20R2, 28, 1, ReadWriteMode, CANF20R2Base> ;
    using FB29 = CAN_F20R2_FB29_Values<CAN::F20R2, 29, 1, ReadWriteMode, CANF20R2Base> ;
    using FB30 = CAN_F20R2_FB30_Values<CAN::F20R2, 30, 1, ReadWriteMode, CANF20R2Base> ;
    using FB31 = CAN_F20R2_FB31_Values<CAN::F20R2, 31, 1, ReadWriteMode, CANF20R2Base> ;
    using FieldValues = CAN_F20R2_FB31_Values<CAN::F20R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20R2Pack  = Register<0x400066E4, 32, ReadWriteMode, CANF20R2Base, T...> ;

  struct CANF21R1Base {} ;

  struct F21R1 : public RegisterBase<0x400066E8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F21R1_FB0_Values<CAN::F21R1, 0, 1, ReadWriteMode, CANF21R1Base> ;
    using FB1 = CAN_F21R1_FB1_Values<CAN::F21R1, 1, 1, ReadWriteMode, CANF21R1Base> ;
    using FB2 = CAN_F21R1_FB2_Values<CAN::F21R1, 2, 1, ReadWriteMode, CANF21R1Base> ;
    using FB3 = CAN_F21R1_FB3_Values<CAN::F21R1, 3, 1, ReadWriteMode, CANF21R1Base> ;
    using FB4 = CAN_F21R1_FB4_Values<CAN::F21R1, 4, 1, ReadWriteMode, CANF21R1Base> ;
    using FB5 = CAN_F21R1_FB5_Values<CAN::F21R1, 5, 1, ReadWriteMode, CANF21R1Base> ;
    using FB6 = CAN_F21R1_FB6_Values<CAN::F21R1, 6, 1, ReadWriteMode, CANF21R1Base> ;
    using FB7 = CAN_F21R1_FB7_Values<CAN::F21R1, 7, 1, ReadWriteMode, CANF21R1Base> ;
    using FB8 = CAN_F21R1_FB8_Values<CAN::F21R1, 8, 1, ReadWriteMode, CANF21R1Base> ;
    using FB9 = CAN_F21R1_FB9_Values<CAN::F21R1, 9, 1, ReadWriteMode, CANF21R1Base> ;
    using FB10 = CAN_F21R1_FB10_Values<CAN::F21R1, 10, 1, ReadWriteMode, CANF21R1Base> ;
    using FB11 = CAN_F21R1_FB11_Values<CAN::F21R1, 11, 1, ReadWriteMode, CANF21R1Base> ;
    using FB12 = CAN_F21R1_FB12_Values<CAN::F21R1, 12, 1, ReadWriteMode, CANF21R1Base> ;
    using FB13 = CAN_F21R1_FB13_Values<CAN::F21R1, 13, 1, ReadWriteMode, CANF21R1Base> ;
    using FB14 = CAN_F21R1_FB14_Values<CAN::F21R1, 14, 1, ReadWriteMode, CANF21R1Base> ;
    using FB15 = CAN_F21R1_FB15_Values<CAN::F21R1, 15, 1, ReadWriteMode, CANF21R1Base> ;
    using FB16 = CAN_F21R1_FB16_Values<CAN::F21R1, 16, 1, ReadWriteMode, CANF21R1Base> ;
    using FB17 = CAN_F21R1_FB17_Values<CAN::F21R1, 17, 1, ReadWriteMode, CANF21R1Base> ;
    using FB18 = CAN_F21R1_FB18_Values<CAN::F21R1, 18, 1, ReadWriteMode, CANF21R1Base> ;
    using FB19 = CAN_F21R1_FB19_Values<CAN::F21R1, 19, 1, ReadWriteMode, CANF21R1Base> ;
    using FB20 = CAN_F21R1_FB20_Values<CAN::F21R1, 20, 1, ReadWriteMode, CANF21R1Base> ;
    using FB21 = CAN_F21R1_FB21_Values<CAN::F21R1, 21, 1, ReadWriteMode, CANF21R1Base> ;
    using FB22 = CAN_F21R1_FB22_Values<CAN::F21R1, 22, 1, ReadWriteMode, CANF21R1Base> ;
    using FB23 = CAN_F21R1_FB23_Values<CAN::F21R1, 23, 1, ReadWriteMode, CANF21R1Base> ;
    using FB24 = CAN_F21R1_FB24_Values<CAN::F21R1, 24, 1, ReadWriteMode, CANF21R1Base> ;
    using FB25 = CAN_F21R1_FB25_Values<CAN::F21R1, 25, 1, ReadWriteMode, CANF21R1Base> ;
    using FB26 = CAN_F21R1_FB26_Values<CAN::F21R1, 26, 1, ReadWriteMode, CANF21R1Base> ;
    using FB27 = CAN_F21R1_FB27_Values<CAN::F21R1, 27, 1, ReadWriteMode, CANF21R1Base> ;
    using FB28 = CAN_F21R1_FB28_Values<CAN::F21R1, 28, 1, ReadWriteMode, CANF21R1Base> ;
    using FB29 = CAN_F21R1_FB29_Values<CAN::F21R1, 29, 1, ReadWriteMode, CANF21R1Base> ;
    using FB30 = CAN_F21R1_FB30_Values<CAN::F21R1, 30, 1, ReadWriteMode, CANF21R1Base> ;
    using FB31 = CAN_F21R1_FB31_Values<CAN::F21R1, 31, 1, ReadWriteMode, CANF21R1Base> ;
    using FieldValues = CAN_F21R1_FB31_Values<CAN::F21R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21R1Pack  = Register<0x400066E8, 32, ReadWriteMode, CANF21R1Base, T...> ;

  struct CANF21R2Base {} ;

  struct F21R2 : public RegisterBase<0x400066EC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F21R2_FB0_Values<CAN::F21R2, 0, 1, ReadWriteMode, CANF21R2Base> ;
    using FB1 = CAN_F21R2_FB1_Values<CAN::F21R2, 1, 1, ReadWriteMode, CANF21R2Base> ;
    using FB2 = CAN_F21R2_FB2_Values<CAN::F21R2, 2, 1, ReadWriteMode, CANF21R2Base> ;
    using FB3 = CAN_F21R2_FB3_Values<CAN::F21R2, 3, 1, ReadWriteMode, CANF21R2Base> ;
    using FB4 = CAN_F21R2_FB4_Values<CAN::F21R2, 4, 1, ReadWriteMode, CANF21R2Base> ;
    using FB5 = CAN_F21R2_FB5_Values<CAN::F21R2, 5, 1, ReadWriteMode, CANF21R2Base> ;
    using FB6 = CAN_F21R2_FB6_Values<CAN::F21R2, 6, 1, ReadWriteMode, CANF21R2Base> ;
    using FB7 = CAN_F21R2_FB7_Values<CAN::F21R2, 7, 1, ReadWriteMode, CANF21R2Base> ;
    using FB8 = CAN_F21R2_FB8_Values<CAN::F21R2, 8, 1, ReadWriteMode, CANF21R2Base> ;
    using FB9 = CAN_F21R2_FB9_Values<CAN::F21R2, 9, 1, ReadWriteMode, CANF21R2Base> ;
    using FB10 = CAN_F21R2_FB10_Values<CAN::F21R2, 10, 1, ReadWriteMode, CANF21R2Base> ;
    using FB11 = CAN_F21R2_FB11_Values<CAN::F21R2, 11, 1, ReadWriteMode, CANF21R2Base> ;
    using FB12 = CAN_F21R2_FB12_Values<CAN::F21R2, 12, 1, ReadWriteMode, CANF21R2Base> ;
    using FB13 = CAN_F21R2_FB13_Values<CAN::F21R2, 13, 1, ReadWriteMode, CANF21R2Base> ;
    using FB14 = CAN_F21R2_FB14_Values<CAN::F21R2, 14, 1, ReadWriteMode, CANF21R2Base> ;
    using FB15 = CAN_F21R2_FB15_Values<CAN::F21R2, 15, 1, ReadWriteMode, CANF21R2Base> ;
    using FB16 = CAN_F21R2_FB16_Values<CAN::F21R2, 16, 1, ReadWriteMode, CANF21R2Base> ;
    using FB17 = CAN_F21R2_FB17_Values<CAN::F21R2, 17, 1, ReadWriteMode, CANF21R2Base> ;
    using FB18 = CAN_F21R2_FB18_Values<CAN::F21R2, 18, 1, ReadWriteMode, CANF21R2Base> ;
    using FB19 = CAN_F21R2_FB19_Values<CAN::F21R2, 19, 1, ReadWriteMode, CANF21R2Base> ;
    using FB20 = CAN_F21R2_FB20_Values<CAN::F21R2, 20, 1, ReadWriteMode, CANF21R2Base> ;
    using FB21 = CAN_F21R2_FB21_Values<CAN::F21R2, 21, 1, ReadWriteMode, CANF21R2Base> ;
    using FB22 = CAN_F21R2_FB22_Values<CAN::F21R2, 22, 1, ReadWriteMode, CANF21R2Base> ;
    using FB23 = CAN_F21R2_FB23_Values<CAN::F21R2, 23, 1, ReadWriteMode, CANF21R2Base> ;
    using FB24 = CAN_F21R2_FB24_Values<CAN::F21R2, 24, 1, ReadWriteMode, CANF21R2Base> ;
    using FB25 = CAN_F21R2_FB25_Values<CAN::F21R2, 25, 1, ReadWriteMode, CANF21R2Base> ;
    using FB26 = CAN_F21R2_FB26_Values<CAN::F21R2, 26, 1, ReadWriteMode, CANF21R2Base> ;
    using FB27 = CAN_F21R2_FB27_Values<CAN::F21R2, 27, 1, ReadWriteMode, CANF21R2Base> ;
    using FB28 = CAN_F21R2_FB28_Values<CAN::F21R2, 28, 1, ReadWriteMode, CANF21R2Base> ;
    using FB29 = CAN_F21R2_FB29_Values<CAN::F21R2, 29, 1, ReadWriteMode, CANF21R2Base> ;
    using FB30 = CAN_F21R2_FB30_Values<CAN::F21R2, 30, 1, ReadWriteMode, CANF21R2Base> ;
    using FB31 = CAN_F21R2_FB31_Values<CAN::F21R2, 31, 1, ReadWriteMode, CANF21R2Base> ;
    using FieldValues = CAN_F21R2_FB31_Values<CAN::F21R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21R2Pack  = Register<0x400066EC, 32, ReadWriteMode, CANF21R2Base, T...> ;

  struct CANF22R1Base {} ;

  struct F22R1 : public RegisterBase<0x400066F0, 32, ReadWriteMode>
  {
    using FB0 = CAN_F22R1_FB0_Values<CAN::F22R1, 0, 1, ReadWriteMode, CANF22R1Base> ;
    using FB1 = CAN_F22R1_FB1_Values<CAN::F22R1, 1, 1, ReadWriteMode, CANF22R1Base> ;
    using FB2 = CAN_F22R1_FB2_Values<CAN::F22R1, 2, 1, ReadWriteMode, CANF22R1Base> ;
    using FB3 = CAN_F22R1_FB3_Values<CAN::F22R1, 3, 1, ReadWriteMode, CANF22R1Base> ;
    using FB4 = CAN_F22R1_FB4_Values<CAN::F22R1, 4, 1, ReadWriteMode, CANF22R1Base> ;
    using FB5 = CAN_F22R1_FB5_Values<CAN::F22R1, 5, 1, ReadWriteMode, CANF22R1Base> ;
    using FB6 = CAN_F22R1_FB6_Values<CAN::F22R1, 6, 1, ReadWriteMode, CANF22R1Base> ;
    using FB7 = CAN_F22R1_FB7_Values<CAN::F22R1, 7, 1, ReadWriteMode, CANF22R1Base> ;
    using FB8 = CAN_F22R1_FB8_Values<CAN::F22R1, 8, 1, ReadWriteMode, CANF22R1Base> ;
    using FB9 = CAN_F22R1_FB9_Values<CAN::F22R1, 9, 1, ReadWriteMode, CANF22R1Base> ;
    using FB10 = CAN_F22R1_FB10_Values<CAN::F22R1, 10, 1, ReadWriteMode, CANF22R1Base> ;
    using FB11 = CAN_F22R1_FB11_Values<CAN::F22R1, 11, 1, ReadWriteMode, CANF22R1Base> ;
    using FB12 = CAN_F22R1_FB12_Values<CAN::F22R1, 12, 1, ReadWriteMode, CANF22R1Base> ;
    using FB13 = CAN_F22R1_FB13_Values<CAN::F22R1, 13, 1, ReadWriteMode, CANF22R1Base> ;
    using FB14 = CAN_F22R1_FB14_Values<CAN::F22R1, 14, 1, ReadWriteMode, CANF22R1Base> ;
    using FB15 = CAN_F22R1_FB15_Values<CAN::F22R1, 15, 1, ReadWriteMode, CANF22R1Base> ;
    using FB16 = CAN_F22R1_FB16_Values<CAN::F22R1, 16, 1, ReadWriteMode, CANF22R1Base> ;
    using FB17 = CAN_F22R1_FB17_Values<CAN::F22R1, 17, 1, ReadWriteMode, CANF22R1Base> ;
    using FB18 = CAN_F22R1_FB18_Values<CAN::F22R1, 18, 1, ReadWriteMode, CANF22R1Base> ;
    using FB19 = CAN_F22R1_FB19_Values<CAN::F22R1, 19, 1, ReadWriteMode, CANF22R1Base> ;
    using FB20 = CAN_F22R1_FB20_Values<CAN::F22R1, 20, 1, ReadWriteMode, CANF22R1Base> ;
    using FB21 = CAN_F22R1_FB21_Values<CAN::F22R1, 21, 1, ReadWriteMode, CANF22R1Base> ;
    using FB22 = CAN_F22R1_FB22_Values<CAN::F22R1, 22, 1, ReadWriteMode, CANF22R1Base> ;
    using FB23 = CAN_F22R1_FB23_Values<CAN::F22R1, 23, 1, ReadWriteMode, CANF22R1Base> ;
    using FB24 = CAN_F22R1_FB24_Values<CAN::F22R1, 24, 1, ReadWriteMode, CANF22R1Base> ;
    using FB25 = CAN_F22R1_FB25_Values<CAN::F22R1, 25, 1, ReadWriteMode, CANF22R1Base> ;
    using FB26 = CAN_F22R1_FB26_Values<CAN::F22R1, 26, 1, ReadWriteMode, CANF22R1Base> ;
    using FB27 = CAN_F22R1_FB27_Values<CAN::F22R1, 27, 1, ReadWriteMode, CANF22R1Base> ;
    using FB28 = CAN_F22R1_FB28_Values<CAN::F22R1, 28, 1, ReadWriteMode, CANF22R1Base> ;
    using FB29 = CAN_F22R1_FB29_Values<CAN::F22R1, 29, 1, ReadWriteMode, CANF22R1Base> ;
    using FB30 = CAN_F22R1_FB30_Values<CAN::F22R1, 30, 1, ReadWriteMode, CANF22R1Base> ;
    using FB31 = CAN_F22R1_FB31_Values<CAN::F22R1, 31, 1, ReadWriteMode, CANF22R1Base> ;
    using FieldValues = CAN_F22R1_FB31_Values<CAN::F22R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22R1Pack  = Register<0x400066F0, 32, ReadWriteMode, CANF22R1Base, T...> ;

  struct CANF22R2Base {} ;

  struct F22R2 : public RegisterBase<0x400066F4, 32, ReadWriteMode>
  {
    using FB0 = CAN_F22R2_FB0_Values<CAN::F22R2, 0, 1, ReadWriteMode, CANF22R2Base> ;
    using FB1 = CAN_F22R2_FB1_Values<CAN::F22R2, 1, 1, ReadWriteMode, CANF22R2Base> ;
    using FB2 = CAN_F22R2_FB2_Values<CAN::F22R2, 2, 1, ReadWriteMode, CANF22R2Base> ;
    using FB3 = CAN_F22R2_FB3_Values<CAN::F22R2, 3, 1, ReadWriteMode, CANF22R2Base> ;
    using FB4 = CAN_F22R2_FB4_Values<CAN::F22R2, 4, 1, ReadWriteMode, CANF22R2Base> ;
    using FB5 = CAN_F22R2_FB5_Values<CAN::F22R2, 5, 1, ReadWriteMode, CANF22R2Base> ;
    using FB6 = CAN_F22R2_FB6_Values<CAN::F22R2, 6, 1, ReadWriteMode, CANF22R2Base> ;
    using FB7 = CAN_F22R2_FB7_Values<CAN::F22R2, 7, 1, ReadWriteMode, CANF22R2Base> ;
    using FB8 = CAN_F22R2_FB8_Values<CAN::F22R2, 8, 1, ReadWriteMode, CANF22R2Base> ;
    using FB9 = CAN_F22R2_FB9_Values<CAN::F22R2, 9, 1, ReadWriteMode, CANF22R2Base> ;
    using FB10 = CAN_F22R2_FB10_Values<CAN::F22R2, 10, 1, ReadWriteMode, CANF22R2Base> ;
    using FB11 = CAN_F22R2_FB11_Values<CAN::F22R2, 11, 1, ReadWriteMode, CANF22R2Base> ;
    using FB12 = CAN_F22R2_FB12_Values<CAN::F22R2, 12, 1, ReadWriteMode, CANF22R2Base> ;
    using FB13 = CAN_F22R2_FB13_Values<CAN::F22R2, 13, 1, ReadWriteMode, CANF22R2Base> ;
    using FB14 = CAN_F22R2_FB14_Values<CAN::F22R2, 14, 1, ReadWriteMode, CANF22R2Base> ;
    using FB15 = CAN_F22R2_FB15_Values<CAN::F22R2, 15, 1, ReadWriteMode, CANF22R2Base> ;
    using FB16 = CAN_F22R2_FB16_Values<CAN::F22R2, 16, 1, ReadWriteMode, CANF22R2Base> ;
    using FB17 = CAN_F22R2_FB17_Values<CAN::F22R2, 17, 1, ReadWriteMode, CANF22R2Base> ;
    using FB18 = CAN_F22R2_FB18_Values<CAN::F22R2, 18, 1, ReadWriteMode, CANF22R2Base> ;
    using FB19 = CAN_F22R2_FB19_Values<CAN::F22R2, 19, 1, ReadWriteMode, CANF22R2Base> ;
    using FB20 = CAN_F22R2_FB20_Values<CAN::F22R2, 20, 1, ReadWriteMode, CANF22R2Base> ;
    using FB21 = CAN_F22R2_FB21_Values<CAN::F22R2, 21, 1, ReadWriteMode, CANF22R2Base> ;
    using FB22 = CAN_F22R2_FB22_Values<CAN::F22R2, 22, 1, ReadWriteMode, CANF22R2Base> ;
    using FB23 = CAN_F22R2_FB23_Values<CAN::F22R2, 23, 1, ReadWriteMode, CANF22R2Base> ;
    using FB24 = CAN_F22R2_FB24_Values<CAN::F22R2, 24, 1, ReadWriteMode, CANF22R2Base> ;
    using FB25 = CAN_F22R2_FB25_Values<CAN::F22R2, 25, 1, ReadWriteMode, CANF22R2Base> ;
    using FB26 = CAN_F22R2_FB26_Values<CAN::F22R2, 26, 1, ReadWriteMode, CANF22R2Base> ;
    using FB27 = CAN_F22R2_FB27_Values<CAN::F22R2, 27, 1, ReadWriteMode, CANF22R2Base> ;
    using FB28 = CAN_F22R2_FB28_Values<CAN::F22R2, 28, 1, ReadWriteMode, CANF22R2Base> ;
    using FB29 = CAN_F22R2_FB29_Values<CAN::F22R2, 29, 1, ReadWriteMode, CANF22R2Base> ;
    using FB30 = CAN_F22R2_FB30_Values<CAN::F22R2, 30, 1, ReadWriteMode, CANF22R2Base> ;
    using FB31 = CAN_F22R2_FB31_Values<CAN::F22R2, 31, 1, ReadWriteMode, CANF22R2Base> ;
    using FieldValues = CAN_F22R2_FB31_Values<CAN::F22R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22R2Pack  = Register<0x400066F4, 32, ReadWriteMode, CANF22R2Base, T...> ;

  struct CANF23R1Base {} ;

  struct F23R1 : public RegisterBase<0x400066F8, 32, ReadWriteMode>
  {
    using FB0 = CAN_F23R1_FB0_Values<CAN::F23R1, 0, 1, ReadWriteMode, CANF23R1Base> ;
    using FB1 = CAN_F23R1_FB1_Values<CAN::F23R1, 1, 1, ReadWriteMode, CANF23R1Base> ;
    using FB2 = CAN_F23R1_FB2_Values<CAN::F23R1, 2, 1, ReadWriteMode, CANF23R1Base> ;
    using FB3 = CAN_F23R1_FB3_Values<CAN::F23R1, 3, 1, ReadWriteMode, CANF23R1Base> ;
    using FB4 = CAN_F23R1_FB4_Values<CAN::F23R1, 4, 1, ReadWriteMode, CANF23R1Base> ;
    using FB5 = CAN_F23R1_FB5_Values<CAN::F23R1, 5, 1, ReadWriteMode, CANF23R1Base> ;
    using FB6 = CAN_F23R1_FB6_Values<CAN::F23R1, 6, 1, ReadWriteMode, CANF23R1Base> ;
    using FB7 = CAN_F23R1_FB7_Values<CAN::F23R1, 7, 1, ReadWriteMode, CANF23R1Base> ;
    using FB8 = CAN_F23R1_FB8_Values<CAN::F23R1, 8, 1, ReadWriteMode, CANF23R1Base> ;
    using FB9 = CAN_F23R1_FB9_Values<CAN::F23R1, 9, 1, ReadWriteMode, CANF23R1Base> ;
    using FB10 = CAN_F23R1_FB10_Values<CAN::F23R1, 10, 1, ReadWriteMode, CANF23R1Base> ;
    using FB11 = CAN_F23R1_FB11_Values<CAN::F23R1, 11, 1, ReadWriteMode, CANF23R1Base> ;
    using FB12 = CAN_F23R1_FB12_Values<CAN::F23R1, 12, 1, ReadWriteMode, CANF23R1Base> ;
    using FB13 = CAN_F23R1_FB13_Values<CAN::F23R1, 13, 1, ReadWriteMode, CANF23R1Base> ;
    using FB14 = CAN_F23R1_FB14_Values<CAN::F23R1, 14, 1, ReadWriteMode, CANF23R1Base> ;
    using FB15 = CAN_F23R1_FB15_Values<CAN::F23R1, 15, 1, ReadWriteMode, CANF23R1Base> ;
    using FB16 = CAN_F23R1_FB16_Values<CAN::F23R1, 16, 1, ReadWriteMode, CANF23R1Base> ;
    using FB17 = CAN_F23R1_FB17_Values<CAN::F23R1, 17, 1, ReadWriteMode, CANF23R1Base> ;
    using FB18 = CAN_F23R1_FB18_Values<CAN::F23R1, 18, 1, ReadWriteMode, CANF23R1Base> ;
    using FB19 = CAN_F23R1_FB19_Values<CAN::F23R1, 19, 1, ReadWriteMode, CANF23R1Base> ;
    using FB20 = CAN_F23R1_FB20_Values<CAN::F23R1, 20, 1, ReadWriteMode, CANF23R1Base> ;
    using FB21 = CAN_F23R1_FB21_Values<CAN::F23R1, 21, 1, ReadWriteMode, CANF23R1Base> ;
    using FB22 = CAN_F23R1_FB22_Values<CAN::F23R1, 22, 1, ReadWriteMode, CANF23R1Base> ;
    using FB23 = CAN_F23R1_FB23_Values<CAN::F23R1, 23, 1, ReadWriteMode, CANF23R1Base> ;
    using FB24 = CAN_F23R1_FB24_Values<CAN::F23R1, 24, 1, ReadWriteMode, CANF23R1Base> ;
    using FB25 = CAN_F23R1_FB25_Values<CAN::F23R1, 25, 1, ReadWriteMode, CANF23R1Base> ;
    using FB26 = CAN_F23R1_FB26_Values<CAN::F23R1, 26, 1, ReadWriteMode, CANF23R1Base> ;
    using FB27 = CAN_F23R1_FB27_Values<CAN::F23R1, 27, 1, ReadWriteMode, CANF23R1Base> ;
    using FB28 = CAN_F23R1_FB28_Values<CAN::F23R1, 28, 1, ReadWriteMode, CANF23R1Base> ;
    using FB29 = CAN_F23R1_FB29_Values<CAN::F23R1, 29, 1, ReadWriteMode, CANF23R1Base> ;
    using FB30 = CAN_F23R1_FB30_Values<CAN::F23R1, 30, 1, ReadWriteMode, CANF23R1Base> ;
    using FB31 = CAN_F23R1_FB31_Values<CAN::F23R1, 31, 1, ReadWriteMode, CANF23R1Base> ;
    using FieldValues = CAN_F23R1_FB31_Values<CAN::F23R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23R1Pack  = Register<0x400066F8, 32, ReadWriteMode, CANF23R1Base, T...> ;

  struct CANF23R2Base {} ;

  struct F23R2 : public RegisterBase<0x400066FC, 32, ReadWriteMode>
  {
    using FB0 = CAN_F23R2_FB0_Values<CAN::F23R2, 0, 1, ReadWriteMode, CANF23R2Base> ;
    using FB1 = CAN_F23R2_FB1_Values<CAN::F23R2, 1, 1, ReadWriteMode, CANF23R2Base> ;
    using FB2 = CAN_F23R2_FB2_Values<CAN::F23R2, 2, 1, ReadWriteMode, CANF23R2Base> ;
    using FB3 = CAN_F23R2_FB3_Values<CAN::F23R2, 3, 1, ReadWriteMode, CANF23R2Base> ;
    using FB4 = CAN_F23R2_FB4_Values<CAN::F23R2, 4, 1, ReadWriteMode, CANF23R2Base> ;
    using FB5 = CAN_F23R2_FB5_Values<CAN::F23R2, 5, 1, ReadWriteMode, CANF23R2Base> ;
    using FB6 = CAN_F23R2_FB6_Values<CAN::F23R2, 6, 1, ReadWriteMode, CANF23R2Base> ;
    using FB7 = CAN_F23R2_FB7_Values<CAN::F23R2, 7, 1, ReadWriteMode, CANF23R2Base> ;
    using FB8 = CAN_F23R2_FB8_Values<CAN::F23R2, 8, 1, ReadWriteMode, CANF23R2Base> ;
    using FB9 = CAN_F23R2_FB9_Values<CAN::F23R2, 9, 1, ReadWriteMode, CANF23R2Base> ;
    using FB10 = CAN_F23R2_FB10_Values<CAN::F23R2, 10, 1, ReadWriteMode, CANF23R2Base> ;
    using FB11 = CAN_F23R2_FB11_Values<CAN::F23R2, 11, 1, ReadWriteMode, CANF23R2Base> ;
    using FB12 = CAN_F23R2_FB12_Values<CAN::F23R2, 12, 1, ReadWriteMode, CANF23R2Base> ;
    using FB13 = CAN_F23R2_FB13_Values<CAN::F23R2, 13, 1, ReadWriteMode, CANF23R2Base> ;
    using FB14 = CAN_F23R2_FB14_Values<CAN::F23R2, 14, 1, ReadWriteMode, CANF23R2Base> ;
    using FB15 = CAN_F23R2_FB15_Values<CAN::F23R2, 15, 1, ReadWriteMode, CANF23R2Base> ;
    using FB16 = CAN_F23R2_FB16_Values<CAN::F23R2, 16, 1, ReadWriteMode, CANF23R2Base> ;
    using FB17 = CAN_F23R2_FB17_Values<CAN::F23R2, 17, 1, ReadWriteMode, CANF23R2Base> ;
    using FB18 = CAN_F23R2_FB18_Values<CAN::F23R2, 18, 1, ReadWriteMode, CANF23R2Base> ;
    using FB19 = CAN_F23R2_FB19_Values<CAN::F23R2, 19, 1, ReadWriteMode, CANF23R2Base> ;
    using FB20 = CAN_F23R2_FB20_Values<CAN::F23R2, 20, 1, ReadWriteMode, CANF23R2Base> ;
    using FB21 = CAN_F23R2_FB21_Values<CAN::F23R2, 21, 1, ReadWriteMode, CANF23R2Base> ;
    using FB22 = CAN_F23R2_FB22_Values<CAN::F23R2, 22, 1, ReadWriteMode, CANF23R2Base> ;
    using FB23 = CAN_F23R2_FB23_Values<CAN::F23R2, 23, 1, ReadWriteMode, CANF23R2Base> ;
    using FB24 = CAN_F23R2_FB24_Values<CAN::F23R2, 24, 1, ReadWriteMode, CANF23R2Base> ;
    using FB25 = CAN_F23R2_FB25_Values<CAN::F23R2, 25, 1, ReadWriteMode, CANF23R2Base> ;
    using FB26 = CAN_F23R2_FB26_Values<CAN::F23R2, 26, 1, ReadWriteMode, CANF23R2Base> ;
    using FB27 = CAN_F23R2_FB27_Values<CAN::F23R2, 27, 1, ReadWriteMode, CANF23R2Base> ;
    using FB28 = CAN_F23R2_FB28_Values<CAN::F23R2, 28, 1, ReadWriteMode, CANF23R2Base> ;
    using FB29 = CAN_F23R2_FB29_Values<CAN::F23R2, 29, 1, ReadWriteMode, CANF23R2Base> ;
    using FB30 = CAN_F23R2_FB30_Values<CAN::F23R2, 30, 1, ReadWriteMode, CANF23R2Base> ;
    using FB31 = CAN_F23R2_FB31_Values<CAN::F23R2, 31, 1, ReadWriteMode, CANF23R2Base> ;
    using FieldValues = CAN_F23R2_FB31_Values<CAN::F23R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23R2Pack  = Register<0x400066FC, 32, ReadWriteMode, CANF23R2Base, T...> ;

  struct CANF24R1Base {} ;

  struct F24R1 : public RegisterBase<0x40006700, 32, ReadWriteMode>
  {
    using FB0 = CAN_F24R1_FB0_Values<CAN::F24R1, 0, 1, ReadWriteMode, CANF24R1Base> ;
    using FB1 = CAN_F24R1_FB1_Values<CAN::F24R1, 1, 1, ReadWriteMode, CANF24R1Base> ;
    using FB2 = CAN_F24R1_FB2_Values<CAN::F24R1, 2, 1, ReadWriteMode, CANF24R1Base> ;
    using FB3 = CAN_F24R1_FB3_Values<CAN::F24R1, 3, 1, ReadWriteMode, CANF24R1Base> ;
    using FB4 = CAN_F24R1_FB4_Values<CAN::F24R1, 4, 1, ReadWriteMode, CANF24R1Base> ;
    using FB5 = CAN_F24R1_FB5_Values<CAN::F24R1, 5, 1, ReadWriteMode, CANF24R1Base> ;
    using FB6 = CAN_F24R1_FB6_Values<CAN::F24R1, 6, 1, ReadWriteMode, CANF24R1Base> ;
    using FB7 = CAN_F24R1_FB7_Values<CAN::F24R1, 7, 1, ReadWriteMode, CANF24R1Base> ;
    using FB8 = CAN_F24R1_FB8_Values<CAN::F24R1, 8, 1, ReadWriteMode, CANF24R1Base> ;
    using FB9 = CAN_F24R1_FB9_Values<CAN::F24R1, 9, 1, ReadWriteMode, CANF24R1Base> ;
    using FB10 = CAN_F24R1_FB10_Values<CAN::F24R1, 10, 1, ReadWriteMode, CANF24R1Base> ;
    using FB11 = CAN_F24R1_FB11_Values<CAN::F24R1, 11, 1, ReadWriteMode, CANF24R1Base> ;
    using FB12 = CAN_F24R1_FB12_Values<CAN::F24R1, 12, 1, ReadWriteMode, CANF24R1Base> ;
    using FB13 = CAN_F24R1_FB13_Values<CAN::F24R1, 13, 1, ReadWriteMode, CANF24R1Base> ;
    using FB14 = CAN_F24R1_FB14_Values<CAN::F24R1, 14, 1, ReadWriteMode, CANF24R1Base> ;
    using FB15 = CAN_F24R1_FB15_Values<CAN::F24R1, 15, 1, ReadWriteMode, CANF24R1Base> ;
    using FB16 = CAN_F24R1_FB16_Values<CAN::F24R1, 16, 1, ReadWriteMode, CANF24R1Base> ;
    using FB17 = CAN_F24R1_FB17_Values<CAN::F24R1, 17, 1, ReadWriteMode, CANF24R1Base> ;
    using FB18 = CAN_F24R1_FB18_Values<CAN::F24R1, 18, 1, ReadWriteMode, CANF24R1Base> ;
    using FB19 = CAN_F24R1_FB19_Values<CAN::F24R1, 19, 1, ReadWriteMode, CANF24R1Base> ;
    using FB20 = CAN_F24R1_FB20_Values<CAN::F24R1, 20, 1, ReadWriteMode, CANF24R1Base> ;
    using FB21 = CAN_F24R1_FB21_Values<CAN::F24R1, 21, 1, ReadWriteMode, CANF24R1Base> ;
    using FB22 = CAN_F24R1_FB22_Values<CAN::F24R1, 22, 1, ReadWriteMode, CANF24R1Base> ;
    using FB23 = CAN_F24R1_FB23_Values<CAN::F24R1, 23, 1, ReadWriteMode, CANF24R1Base> ;
    using FB24 = CAN_F24R1_FB24_Values<CAN::F24R1, 24, 1, ReadWriteMode, CANF24R1Base> ;
    using FB25 = CAN_F24R1_FB25_Values<CAN::F24R1, 25, 1, ReadWriteMode, CANF24R1Base> ;
    using FB26 = CAN_F24R1_FB26_Values<CAN::F24R1, 26, 1, ReadWriteMode, CANF24R1Base> ;
    using FB27 = CAN_F24R1_FB27_Values<CAN::F24R1, 27, 1, ReadWriteMode, CANF24R1Base> ;
    using FB28 = CAN_F24R1_FB28_Values<CAN::F24R1, 28, 1, ReadWriteMode, CANF24R1Base> ;
    using FB29 = CAN_F24R1_FB29_Values<CAN::F24R1, 29, 1, ReadWriteMode, CANF24R1Base> ;
    using FB30 = CAN_F24R1_FB30_Values<CAN::F24R1, 30, 1, ReadWriteMode, CANF24R1Base> ;
    using FB31 = CAN_F24R1_FB31_Values<CAN::F24R1, 31, 1, ReadWriteMode, CANF24R1Base> ;
    using FieldValues = CAN_F24R1_FB31_Values<CAN::F24R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24R1Pack  = Register<0x40006700, 32, ReadWriteMode, CANF24R1Base, T...> ;

  struct CANF24R2Base {} ;

  struct F24R2 : public RegisterBase<0x40006704, 32, ReadWriteMode>
  {
    using FB0 = CAN_F24R2_FB0_Values<CAN::F24R2, 0, 1, ReadWriteMode, CANF24R2Base> ;
    using FB1 = CAN_F24R2_FB1_Values<CAN::F24R2, 1, 1, ReadWriteMode, CANF24R2Base> ;
    using FB2 = CAN_F24R2_FB2_Values<CAN::F24R2, 2, 1, ReadWriteMode, CANF24R2Base> ;
    using FB3 = CAN_F24R2_FB3_Values<CAN::F24R2, 3, 1, ReadWriteMode, CANF24R2Base> ;
    using FB4 = CAN_F24R2_FB4_Values<CAN::F24R2, 4, 1, ReadWriteMode, CANF24R2Base> ;
    using FB5 = CAN_F24R2_FB5_Values<CAN::F24R2, 5, 1, ReadWriteMode, CANF24R2Base> ;
    using FB6 = CAN_F24R2_FB6_Values<CAN::F24R2, 6, 1, ReadWriteMode, CANF24R2Base> ;
    using FB7 = CAN_F24R2_FB7_Values<CAN::F24R2, 7, 1, ReadWriteMode, CANF24R2Base> ;
    using FB8 = CAN_F24R2_FB8_Values<CAN::F24R2, 8, 1, ReadWriteMode, CANF24R2Base> ;
    using FB9 = CAN_F24R2_FB9_Values<CAN::F24R2, 9, 1, ReadWriteMode, CANF24R2Base> ;
    using FB10 = CAN_F24R2_FB10_Values<CAN::F24R2, 10, 1, ReadWriteMode, CANF24R2Base> ;
    using FB11 = CAN_F24R2_FB11_Values<CAN::F24R2, 11, 1, ReadWriteMode, CANF24R2Base> ;
    using FB12 = CAN_F24R2_FB12_Values<CAN::F24R2, 12, 1, ReadWriteMode, CANF24R2Base> ;
    using FB13 = CAN_F24R2_FB13_Values<CAN::F24R2, 13, 1, ReadWriteMode, CANF24R2Base> ;
    using FB14 = CAN_F24R2_FB14_Values<CAN::F24R2, 14, 1, ReadWriteMode, CANF24R2Base> ;
    using FB15 = CAN_F24R2_FB15_Values<CAN::F24R2, 15, 1, ReadWriteMode, CANF24R2Base> ;
    using FB16 = CAN_F24R2_FB16_Values<CAN::F24R2, 16, 1, ReadWriteMode, CANF24R2Base> ;
    using FB17 = CAN_F24R2_FB17_Values<CAN::F24R2, 17, 1, ReadWriteMode, CANF24R2Base> ;
    using FB18 = CAN_F24R2_FB18_Values<CAN::F24R2, 18, 1, ReadWriteMode, CANF24R2Base> ;
    using FB19 = CAN_F24R2_FB19_Values<CAN::F24R2, 19, 1, ReadWriteMode, CANF24R2Base> ;
    using FB20 = CAN_F24R2_FB20_Values<CAN::F24R2, 20, 1, ReadWriteMode, CANF24R2Base> ;
    using FB21 = CAN_F24R2_FB21_Values<CAN::F24R2, 21, 1, ReadWriteMode, CANF24R2Base> ;
    using FB22 = CAN_F24R2_FB22_Values<CAN::F24R2, 22, 1, ReadWriteMode, CANF24R2Base> ;
    using FB23 = CAN_F24R2_FB23_Values<CAN::F24R2, 23, 1, ReadWriteMode, CANF24R2Base> ;
    using FB24 = CAN_F24R2_FB24_Values<CAN::F24R2, 24, 1, ReadWriteMode, CANF24R2Base> ;
    using FB25 = CAN_F24R2_FB25_Values<CAN::F24R2, 25, 1, ReadWriteMode, CANF24R2Base> ;
    using FB26 = CAN_F24R2_FB26_Values<CAN::F24R2, 26, 1, ReadWriteMode, CANF24R2Base> ;
    using FB27 = CAN_F24R2_FB27_Values<CAN::F24R2, 27, 1, ReadWriteMode, CANF24R2Base> ;
    using FB28 = CAN_F24R2_FB28_Values<CAN::F24R2, 28, 1, ReadWriteMode, CANF24R2Base> ;
    using FB29 = CAN_F24R2_FB29_Values<CAN::F24R2, 29, 1, ReadWriteMode, CANF24R2Base> ;
    using FB30 = CAN_F24R2_FB30_Values<CAN::F24R2, 30, 1, ReadWriteMode, CANF24R2Base> ;
    using FB31 = CAN_F24R2_FB31_Values<CAN::F24R2, 31, 1, ReadWriteMode, CANF24R2Base> ;
    using FieldValues = CAN_F24R2_FB31_Values<CAN::F24R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24R2Pack  = Register<0x40006704, 32, ReadWriteMode, CANF24R2Base, T...> ;

  struct CANF25R1Base {} ;

  struct F25R1 : public RegisterBase<0x40006708, 32, ReadWriteMode>
  {
    using FB0 = CAN_F25R1_FB0_Values<CAN::F25R1, 0, 1, ReadWriteMode, CANF25R1Base> ;
    using FB1 = CAN_F25R1_FB1_Values<CAN::F25R1, 1, 1, ReadWriteMode, CANF25R1Base> ;
    using FB2 = CAN_F25R1_FB2_Values<CAN::F25R1, 2, 1, ReadWriteMode, CANF25R1Base> ;
    using FB3 = CAN_F25R1_FB3_Values<CAN::F25R1, 3, 1, ReadWriteMode, CANF25R1Base> ;
    using FB4 = CAN_F25R1_FB4_Values<CAN::F25R1, 4, 1, ReadWriteMode, CANF25R1Base> ;
    using FB5 = CAN_F25R1_FB5_Values<CAN::F25R1, 5, 1, ReadWriteMode, CANF25R1Base> ;
    using FB6 = CAN_F25R1_FB6_Values<CAN::F25R1, 6, 1, ReadWriteMode, CANF25R1Base> ;
    using FB7 = CAN_F25R1_FB7_Values<CAN::F25R1, 7, 1, ReadWriteMode, CANF25R1Base> ;
    using FB8 = CAN_F25R1_FB8_Values<CAN::F25R1, 8, 1, ReadWriteMode, CANF25R1Base> ;
    using FB9 = CAN_F25R1_FB9_Values<CAN::F25R1, 9, 1, ReadWriteMode, CANF25R1Base> ;
    using FB10 = CAN_F25R1_FB10_Values<CAN::F25R1, 10, 1, ReadWriteMode, CANF25R1Base> ;
    using FB11 = CAN_F25R1_FB11_Values<CAN::F25R1, 11, 1, ReadWriteMode, CANF25R1Base> ;
    using FB12 = CAN_F25R1_FB12_Values<CAN::F25R1, 12, 1, ReadWriteMode, CANF25R1Base> ;
    using FB13 = CAN_F25R1_FB13_Values<CAN::F25R1, 13, 1, ReadWriteMode, CANF25R1Base> ;
    using FB14 = CAN_F25R1_FB14_Values<CAN::F25R1, 14, 1, ReadWriteMode, CANF25R1Base> ;
    using FB15 = CAN_F25R1_FB15_Values<CAN::F25R1, 15, 1, ReadWriteMode, CANF25R1Base> ;
    using FB16 = CAN_F25R1_FB16_Values<CAN::F25R1, 16, 1, ReadWriteMode, CANF25R1Base> ;
    using FB17 = CAN_F25R1_FB17_Values<CAN::F25R1, 17, 1, ReadWriteMode, CANF25R1Base> ;
    using FB18 = CAN_F25R1_FB18_Values<CAN::F25R1, 18, 1, ReadWriteMode, CANF25R1Base> ;
    using FB19 = CAN_F25R1_FB19_Values<CAN::F25R1, 19, 1, ReadWriteMode, CANF25R1Base> ;
    using FB20 = CAN_F25R1_FB20_Values<CAN::F25R1, 20, 1, ReadWriteMode, CANF25R1Base> ;
    using FB21 = CAN_F25R1_FB21_Values<CAN::F25R1, 21, 1, ReadWriteMode, CANF25R1Base> ;
    using FB22 = CAN_F25R1_FB22_Values<CAN::F25R1, 22, 1, ReadWriteMode, CANF25R1Base> ;
    using FB23 = CAN_F25R1_FB23_Values<CAN::F25R1, 23, 1, ReadWriteMode, CANF25R1Base> ;
    using FB24 = CAN_F25R1_FB24_Values<CAN::F25R1, 24, 1, ReadWriteMode, CANF25R1Base> ;
    using FB25 = CAN_F25R1_FB25_Values<CAN::F25R1, 25, 1, ReadWriteMode, CANF25R1Base> ;
    using FB26 = CAN_F25R1_FB26_Values<CAN::F25R1, 26, 1, ReadWriteMode, CANF25R1Base> ;
    using FB27 = CAN_F25R1_FB27_Values<CAN::F25R1, 27, 1, ReadWriteMode, CANF25R1Base> ;
    using FB28 = CAN_F25R1_FB28_Values<CAN::F25R1, 28, 1, ReadWriteMode, CANF25R1Base> ;
    using FB29 = CAN_F25R1_FB29_Values<CAN::F25R1, 29, 1, ReadWriteMode, CANF25R1Base> ;
    using FB30 = CAN_F25R1_FB30_Values<CAN::F25R1, 30, 1, ReadWriteMode, CANF25R1Base> ;
    using FB31 = CAN_F25R1_FB31_Values<CAN::F25R1, 31, 1, ReadWriteMode, CANF25R1Base> ;
    using FieldValues = CAN_F25R1_FB31_Values<CAN::F25R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25R1Pack  = Register<0x40006708, 32, ReadWriteMode, CANF25R1Base, T...> ;

  struct CANF25R2Base {} ;

  struct F25R2 : public RegisterBase<0x4000670C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F25R2_FB0_Values<CAN::F25R2, 0, 1, ReadWriteMode, CANF25R2Base> ;
    using FB1 = CAN_F25R2_FB1_Values<CAN::F25R2, 1, 1, ReadWriteMode, CANF25R2Base> ;
    using FB2 = CAN_F25R2_FB2_Values<CAN::F25R2, 2, 1, ReadWriteMode, CANF25R2Base> ;
    using FB3 = CAN_F25R2_FB3_Values<CAN::F25R2, 3, 1, ReadWriteMode, CANF25R2Base> ;
    using FB4 = CAN_F25R2_FB4_Values<CAN::F25R2, 4, 1, ReadWriteMode, CANF25R2Base> ;
    using FB5 = CAN_F25R2_FB5_Values<CAN::F25R2, 5, 1, ReadWriteMode, CANF25R2Base> ;
    using FB6 = CAN_F25R2_FB6_Values<CAN::F25R2, 6, 1, ReadWriteMode, CANF25R2Base> ;
    using FB7 = CAN_F25R2_FB7_Values<CAN::F25R2, 7, 1, ReadWriteMode, CANF25R2Base> ;
    using FB8 = CAN_F25R2_FB8_Values<CAN::F25R2, 8, 1, ReadWriteMode, CANF25R2Base> ;
    using FB9 = CAN_F25R2_FB9_Values<CAN::F25R2, 9, 1, ReadWriteMode, CANF25R2Base> ;
    using FB10 = CAN_F25R2_FB10_Values<CAN::F25R2, 10, 1, ReadWriteMode, CANF25R2Base> ;
    using FB11 = CAN_F25R2_FB11_Values<CAN::F25R2, 11, 1, ReadWriteMode, CANF25R2Base> ;
    using FB12 = CAN_F25R2_FB12_Values<CAN::F25R2, 12, 1, ReadWriteMode, CANF25R2Base> ;
    using FB13 = CAN_F25R2_FB13_Values<CAN::F25R2, 13, 1, ReadWriteMode, CANF25R2Base> ;
    using FB14 = CAN_F25R2_FB14_Values<CAN::F25R2, 14, 1, ReadWriteMode, CANF25R2Base> ;
    using FB15 = CAN_F25R2_FB15_Values<CAN::F25R2, 15, 1, ReadWriteMode, CANF25R2Base> ;
    using FB16 = CAN_F25R2_FB16_Values<CAN::F25R2, 16, 1, ReadWriteMode, CANF25R2Base> ;
    using FB17 = CAN_F25R2_FB17_Values<CAN::F25R2, 17, 1, ReadWriteMode, CANF25R2Base> ;
    using FB18 = CAN_F25R2_FB18_Values<CAN::F25R2, 18, 1, ReadWriteMode, CANF25R2Base> ;
    using FB19 = CAN_F25R2_FB19_Values<CAN::F25R2, 19, 1, ReadWriteMode, CANF25R2Base> ;
    using FB20 = CAN_F25R2_FB20_Values<CAN::F25R2, 20, 1, ReadWriteMode, CANF25R2Base> ;
    using FB21 = CAN_F25R2_FB21_Values<CAN::F25R2, 21, 1, ReadWriteMode, CANF25R2Base> ;
    using FB22 = CAN_F25R2_FB22_Values<CAN::F25R2, 22, 1, ReadWriteMode, CANF25R2Base> ;
    using FB23 = CAN_F25R2_FB23_Values<CAN::F25R2, 23, 1, ReadWriteMode, CANF25R2Base> ;
    using FB24 = CAN_F25R2_FB24_Values<CAN::F25R2, 24, 1, ReadWriteMode, CANF25R2Base> ;
    using FB25 = CAN_F25R2_FB25_Values<CAN::F25R2, 25, 1, ReadWriteMode, CANF25R2Base> ;
    using FB26 = CAN_F25R2_FB26_Values<CAN::F25R2, 26, 1, ReadWriteMode, CANF25R2Base> ;
    using FB27 = CAN_F25R2_FB27_Values<CAN::F25R2, 27, 1, ReadWriteMode, CANF25R2Base> ;
    using FB28 = CAN_F25R2_FB28_Values<CAN::F25R2, 28, 1, ReadWriteMode, CANF25R2Base> ;
    using FB29 = CAN_F25R2_FB29_Values<CAN::F25R2, 29, 1, ReadWriteMode, CANF25R2Base> ;
    using FB30 = CAN_F25R2_FB30_Values<CAN::F25R2, 30, 1, ReadWriteMode, CANF25R2Base> ;
    using FB31 = CAN_F25R2_FB31_Values<CAN::F25R2, 31, 1, ReadWriteMode, CANF25R2Base> ;
    using FieldValues = CAN_F25R2_FB31_Values<CAN::F25R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25R2Pack  = Register<0x4000670C, 32, ReadWriteMode, CANF25R2Base, T...> ;

  struct CANF26R1Base {} ;

  struct F26R1 : public RegisterBase<0x40006710, 32, ReadWriteMode>
  {
    using FB0 = CAN_F26R1_FB0_Values<CAN::F26R1, 0, 1, ReadWriteMode, CANF26R1Base> ;
    using FB1 = CAN_F26R1_FB1_Values<CAN::F26R1, 1, 1, ReadWriteMode, CANF26R1Base> ;
    using FB2 = CAN_F26R1_FB2_Values<CAN::F26R1, 2, 1, ReadWriteMode, CANF26R1Base> ;
    using FB3 = CAN_F26R1_FB3_Values<CAN::F26R1, 3, 1, ReadWriteMode, CANF26R1Base> ;
    using FB4 = CAN_F26R1_FB4_Values<CAN::F26R1, 4, 1, ReadWriteMode, CANF26R1Base> ;
    using FB5 = CAN_F26R1_FB5_Values<CAN::F26R1, 5, 1, ReadWriteMode, CANF26R1Base> ;
    using FB6 = CAN_F26R1_FB6_Values<CAN::F26R1, 6, 1, ReadWriteMode, CANF26R1Base> ;
    using FB7 = CAN_F26R1_FB7_Values<CAN::F26R1, 7, 1, ReadWriteMode, CANF26R1Base> ;
    using FB8 = CAN_F26R1_FB8_Values<CAN::F26R1, 8, 1, ReadWriteMode, CANF26R1Base> ;
    using FB9 = CAN_F26R1_FB9_Values<CAN::F26R1, 9, 1, ReadWriteMode, CANF26R1Base> ;
    using FB10 = CAN_F26R1_FB10_Values<CAN::F26R1, 10, 1, ReadWriteMode, CANF26R1Base> ;
    using FB11 = CAN_F26R1_FB11_Values<CAN::F26R1, 11, 1, ReadWriteMode, CANF26R1Base> ;
    using FB12 = CAN_F26R1_FB12_Values<CAN::F26R1, 12, 1, ReadWriteMode, CANF26R1Base> ;
    using FB13 = CAN_F26R1_FB13_Values<CAN::F26R1, 13, 1, ReadWriteMode, CANF26R1Base> ;
    using FB14 = CAN_F26R1_FB14_Values<CAN::F26R1, 14, 1, ReadWriteMode, CANF26R1Base> ;
    using FB15 = CAN_F26R1_FB15_Values<CAN::F26R1, 15, 1, ReadWriteMode, CANF26R1Base> ;
    using FB16 = CAN_F26R1_FB16_Values<CAN::F26R1, 16, 1, ReadWriteMode, CANF26R1Base> ;
    using FB17 = CAN_F26R1_FB17_Values<CAN::F26R1, 17, 1, ReadWriteMode, CANF26R1Base> ;
    using FB18 = CAN_F26R1_FB18_Values<CAN::F26R1, 18, 1, ReadWriteMode, CANF26R1Base> ;
    using FB19 = CAN_F26R1_FB19_Values<CAN::F26R1, 19, 1, ReadWriteMode, CANF26R1Base> ;
    using FB20 = CAN_F26R1_FB20_Values<CAN::F26R1, 20, 1, ReadWriteMode, CANF26R1Base> ;
    using FB21 = CAN_F26R1_FB21_Values<CAN::F26R1, 21, 1, ReadWriteMode, CANF26R1Base> ;
    using FB22 = CAN_F26R1_FB22_Values<CAN::F26R1, 22, 1, ReadWriteMode, CANF26R1Base> ;
    using FB23 = CAN_F26R1_FB23_Values<CAN::F26R1, 23, 1, ReadWriteMode, CANF26R1Base> ;
    using FB24 = CAN_F26R1_FB24_Values<CAN::F26R1, 24, 1, ReadWriteMode, CANF26R1Base> ;
    using FB25 = CAN_F26R1_FB25_Values<CAN::F26R1, 25, 1, ReadWriteMode, CANF26R1Base> ;
    using FB26 = CAN_F26R1_FB26_Values<CAN::F26R1, 26, 1, ReadWriteMode, CANF26R1Base> ;
    using FB27 = CAN_F26R1_FB27_Values<CAN::F26R1, 27, 1, ReadWriteMode, CANF26R1Base> ;
    using FB28 = CAN_F26R1_FB28_Values<CAN::F26R1, 28, 1, ReadWriteMode, CANF26R1Base> ;
    using FB29 = CAN_F26R1_FB29_Values<CAN::F26R1, 29, 1, ReadWriteMode, CANF26R1Base> ;
    using FB30 = CAN_F26R1_FB30_Values<CAN::F26R1, 30, 1, ReadWriteMode, CANF26R1Base> ;
    using FB31 = CAN_F26R1_FB31_Values<CAN::F26R1, 31, 1, ReadWriteMode, CANF26R1Base> ;
    using FieldValues = CAN_F26R1_FB31_Values<CAN::F26R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26R1Pack  = Register<0x40006710, 32, ReadWriteMode, CANF26R1Base, T...> ;

  struct CANF26R2Base {} ;

  struct F26R2 : public RegisterBase<0x40006714, 32, ReadWriteMode>
  {
    using FB0 = CAN_F26R2_FB0_Values<CAN::F26R2, 0, 1, ReadWriteMode, CANF26R2Base> ;
    using FB1 = CAN_F26R2_FB1_Values<CAN::F26R2, 1, 1, ReadWriteMode, CANF26R2Base> ;
    using FB2 = CAN_F26R2_FB2_Values<CAN::F26R2, 2, 1, ReadWriteMode, CANF26R2Base> ;
    using FB3 = CAN_F26R2_FB3_Values<CAN::F26R2, 3, 1, ReadWriteMode, CANF26R2Base> ;
    using FB4 = CAN_F26R2_FB4_Values<CAN::F26R2, 4, 1, ReadWriteMode, CANF26R2Base> ;
    using FB5 = CAN_F26R2_FB5_Values<CAN::F26R2, 5, 1, ReadWriteMode, CANF26R2Base> ;
    using FB6 = CAN_F26R2_FB6_Values<CAN::F26R2, 6, 1, ReadWriteMode, CANF26R2Base> ;
    using FB7 = CAN_F26R2_FB7_Values<CAN::F26R2, 7, 1, ReadWriteMode, CANF26R2Base> ;
    using FB8 = CAN_F26R2_FB8_Values<CAN::F26R2, 8, 1, ReadWriteMode, CANF26R2Base> ;
    using FB9 = CAN_F26R2_FB9_Values<CAN::F26R2, 9, 1, ReadWriteMode, CANF26R2Base> ;
    using FB10 = CAN_F26R2_FB10_Values<CAN::F26R2, 10, 1, ReadWriteMode, CANF26R2Base> ;
    using FB11 = CAN_F26R2_FB11_Values<CAN::F26R2, 11, 1, ReadWriteMode, CANF26R2Base> ;
    using FB12 = CAN_F26R2_FB12_Values<CAN::F26R2, 12, 1, ReadWriteMode, CANF26R2Base> ;
    using FB13 = CAN_F26R2_FB13_Values<CAN::F26R2, 13, 1, ReadWriteMode, CANF26R2Base> ;
    using FB14 = CAN_F26R2_FB14_Values<CAN::F26R2, 14, 1, ReadWriteMode, CANF26R2Base> ;
    using FB15 = CAN_F26R2_FB15_Values<CAN::F26R2, 15, 1, ReadWriteMode, CANF26R2Base> ;
    using FB16 = CAN_F26R2_FB16_Values<CAN::F26R2, 16, 1, ReadWriteMode, CANF26R2Base> ;
    using FB17 = CAN_F26R2_FB17_Values<CAN::F26R2, 17, 1, ReadWriteMode, CANF26R2Base> ;
    using FB18 = CAN_F26R2_FB18_Values<CAN::F26R2, 18, 1, ReadWriteMode, CANF26R2Base> ;
    using FB19 = CAN_F26R2_FB19_Values<CAN::F26R2, 19, 1, ReadWriteMode, CANF26R2Base> ;
    using FB20 = CAN_F26R2_FB20_Values<CAN::F26R2, 20, 1, ReadWriteMode, CANF26R2Base> ;
    using FB21 = CAN_F26R2_FB21_Values<CAN::F26R2, 21, 1, ReadWriteMode, CANF26R2Base> ;
    using FB22 = CAN_F26R2_FB22_Values<CAN::F26R2, 22, 1, ReadWriteMode, CANF26R2Base> ;
    using FB23 = CAN_F26R2_FB23_Values<CAN::F26R2, 23, 1, ReadWriteMode, CANF26R2Base> ;
    using FB24 = CAN_F26R2_FB24_Values<CAN::F26R2, 24, 1, ReadWriteMode, CANF26R2Base> ;
    using FB25 = CAN_F26R2_FB25_Values<CAN::F26R2, 25, 1, ReadWriteMode, CANF26R2Base> ;
    using FB26 = CAN_F26R2_FB26_Values<CAN::F26R2, 26, 1, ReadWriteMode, CANF26R2Base> ;
    using FB27 = CAN_F26R2_FB27_Values<CAN::F26R2, 27, 1, ReadWriteMode, CANF26R2Base> ;
    using FB28 = CAN_F26R2_FB28_Values<CAN::F26R2, 28, 1, ReadWriteMode, CANF26R2Base> ;
    using FB29 = CAN_F26R2_FB29_Values<CAN::F26R2, 29, 1, ReadWriteMode, CANF26R2Base> ;
    using FB30 = CAN_F26R2_FB30_Values<CAN::F26R2, 30, 1, ReadWriteMode, CANF26R2Base> ;
    using FB31 = CAN_F26R2_FB31_Values<CAN::F26R2, 31, 1, ReadWriteMode, CANF26R2Base> ;
    using FieldValues = CAN_F26R2_FB31_Values<CAN::F26R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26R2Pack  = Register<0x40006714, 32, ReadWriteMode, CANF26R2Base, T...> ;

  struct CANF27R1Base {} ;

  struct F27R1 : public RegisterBase<0x40006718, 32, ReadWriteMode>
  {
    using FB0 = CAN_F27R1_FB0_Values<CAN::F27R1, 0, 1, ReadWriteMode, CANF27R1Base> ;
    using FB1 = CAN_F27R1_FB1_Values<CAN::F27R1, 1, 1, ReadWriteMode, CANF27R1Base> ;
    using FB2 = CAN_F27R1_FB2_Values<CAN::F27R1, 2, 1, ReadWriteMode, CANF27R1Base> ;
    using FB3 = CAN_F27R1_FB3_Values<CAN::F27R1, 3, 1, ReadWriteMode, CANF27R1Base> ;
    using FB4 = CAN_F27R1_FB4_Values<CAN::F27R1, 4, 1, ReadWriteMode, CANF27R1Base> ;
    using FB5 = CAN_F27R1_FB5_Values<CAN::F27R1, 5, 1, ReadWriteMode, CANF27R1Base> ;
    using FB6 = CAN_F27R1_FB6_Values<CAN::F27R1, 6, 1, ReadWriteMode, CANF27R1Base> ;
    using FB7 = CAN_F27R1_FB7_Values<CAN::F27R1, 7, 1, ReadWriteMode, CANF27R1Base> ;
    using FB8 = CAN_F27R1_FB8_Values<CAN::F27R1, 8, 1, ReadWriteMode, CANF27R1Base> ;
    using FB9 = CAN_F27R1_FB9_Values<CAN::F27R1, 9, 1, ReadWriteMode, CANF27R1Base> ;
    using FB10 = CAN_F27R1_FB10_Values<CAN::F27R1, 10, 1, ReadWriteMode, CANF27R1Base> ;
    using FB11 = CAN_F27R1_FB11_Values<CAN::F27R1, 11, 1, ReadWriteMode, CANF27R1Base> ;
    using FB12 = CAN_F27R1_FB12_Values<CAN::F27R1, 12, 1, ReadWriteMode, CANF27R1Base> ;
    using FB13 = CAN_F27R1_FB13_Values<CAN::F27R1, 13, 1, ReadWriteMode, CANF27R1Base> ;
    using FB14 = CAN_F27R1_FB14_Values<CAN::F27R1, 14, 1, ReadWriteMode, CANF27R1Base> ;
    using FB15 = CAN_F27R1_FB15_Values<CAN::F27R1, 15, 1, ReadWriteMode, CANF27R1Base> ;
    using FB16 = CAN_F27R1_FB16_Values<CAN::F27R1, 16, 1, ReadWriteMode, CANF27R1Base> ;
    using FB17 = CAN_F27R1_FB17_Values<CAN::F27R1, 17, 1, ReadWriteMode, CANF27R1Base> ;
    using FB18 = CAN_F27R1_FB18_Values<CAN::F27R1, 18, 1, ReadWriteMode, CANF27R1Base> ;
    using FB19 = CAN_F27R1_FB19_Values<CAN::F27R1, 19, 1, ReadWriteMode, CANF27R1Base> ;
    using FB20 = CAN_F27R1_FB20_Values<CAN::F27R1, 20, 1, ReadWriteMode, CANF27R1Base> ;
    using FB21 = CAN_F27R1_FB21_Values<CAN::F27R1, 21, 1, ReadWriteMode, CANF27R1Base> ;
    using FB22 = CAN_F27R1_FB22_Values<CAN::F27R1, 22, 1, ReadWriteMode, CANF27R1Base> ;
    using FB23 = CAN_F27R1_FB23_Values<CAN::F27R1, 23, 1, ReadWriteMode, CANF27R1Base> ;
    using FB24 = CAN_F27R1_FB24_Values<CAN::F27R1, 24, 1, ReadWriteMode, CANF27R1Base> ;
    using FB25 = CAN_F27R1_FB25_Values<CAN::F27R1, 25, 1, ReadWriteMode, CANF27R1Base> ;
    using FB26 = CAN_F27R1_FB26_Values<CAN::F27R1, 26, 1, ReadWriteMode, CANF27R1Base> ;
    using FB27 = CAN_F27R1_FB27_Values<CAN::F27R1, 27, 1, ReadWriteMode, CANF27R1Base> ;
    using FB28 = CAN_F27R1_FB28_Values<CAN::F27R1, 28, 1, ReadWriteMode, CANF27R1Base> ;
    using FB29 = CAN_F27R1_FB29_Values<CAN::F27R1, 29, 1, ReadWriteMode, CANF27R1Base> ;
    using FB30 = CAN_F27R1_FB30_Values<CAN::F27R1, 30, 1, ReadWriteMode, CANF27R1Base> ;
    using FB31 = CAN_F27R1_FB31_Values<CAN::F27R1, 31, 1, ReadWriteMode, CANF27R1Base> ;
    using FieldValues = CAN_F27R1_FB31_Values<CAN::F27R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27R1Pack  = Register<0x40006718, 32, ReadWriteMode, CANF27R1Base, T...> ;

  struct CANF27R2Base {} ;

  struct F27R2 : public RegisterBase<0x4000671C, 32, ReadWriteMode>
  {
    using FB0 = CAN_F27R2_FB0_Values<CAN::F27R2, 0, 1, ReadWriteMode, CANF27R2Base> ;
    using FB1 = CAN_F27R2_FB1_Values<CAN::F27R2, 1, 1, ReadWriteMode, CANF27R2Base> ;
    using FB2 = CAN_F27R2_FB2_Values<CAN::F27R2, 2, 1, ReadWriteMode, CANF27R2Base> ;
    using FB3 = CAN_F27R2_FB3_Values<CAN::F27R2, 3, 1, ReadWriteMode, CANF27R2Base> ;
    using FB4 = CAN_F27R2_FB4_Values<CAN::F27R2, 4, 1, ReadWriteMode, CANF27R2Base> ;
    using FB5 = CAN_F27R2_FB5_Values<CAN::F27R2, 5, 1, ReadWriteMode, CANF27R2Base> ;
    using FB6 = CAN_F27R2_FB6_Values<CAN::F27R2, 6, 1, ReadWriteMode, CANF27R2Base> ;
    using FB7 = CAN_F27R2_FB7_Values<CAN::F27R2, 7, 1, ReadWriteMode, CANF27R2Base> ;
    using FB8 = CAN_F27R2_FB8_Values<CAN::F27R2, 8, 1, ReadWriteMode, CANF27R2Base> ;
    using FB9 = CAN_F27R2_FB9_Values<CAN::F27R2, 9, 1, ReadWriteMode, CANF27R2Base> ;
    using FB10 = CAN_F27R2_FB10_Values<CAN::F27R2, 10, 1, ReadWriteMode, CANF27R2Base> ;
    using FB11 = CAN_F27R2_FB11_Values<CAN::F27R2, 11, 1, ReadWriteMode, CANF27R2Base> ;
    using FB12 = CAN_F27R2_FB12_Values<CAN::F27R2, 12, 1, ReadWriteMode, CANF27R2Base> ;
    using FB13 = CAN_F27R2_FB13_Values<CAN::F27R2, 13, 1, ReadWriteMode, CANF27R2Base> ;
    using FB14 = CAN_F27R2_FB14_Values<CAN::F27R2, 14, 1, ReadWriteMode, CANF27R2Base> ;
    using FB15 = CAN_F27R2_FB15_Values<CAN::F27R2, 15, 1, ReadWriteMode, CANF27R2Base> ;
    using FB16 = CAN_F27R2_FB16_Values<CAN::F27R2, 16, 1, ReadWriteMode, CANF27R2Base> ;
    using FB17 = CAN_F27R2_FB17_Values<CAN::F27R2, 17, 1, ReadWriteMode, CANF27R2Base> ;
    using FB18 = CAN_F27R2_FB18_Values<CAN::F27R2, 18, 1, ReadWriteMode, CANF27R2Base> ;
    using FB19 = CAN_F27R2_FB19_Values<CAN::F27R2, 19, 1, ReadWriteMode, CANF27R2Base> ;
    using FB20 = CAN_F27R2_FB20_Values<CAN::F27R2, 20, 1, ReadWriteMode, CANF27R2Base> ;
    using FB21 = CAN_F27R2_FB21_Values<CAN::F27R2, 21, 1, ReadWriteMode, CANF27R2Base> ;
    using FB22 = CAN_F27R2_FB22_Values<CAN::F27R2, 22, 1, ReadWriteMode, CANF27R2Base> ;
    using FB23 = CAN_F27R2_FB23_Values<CAN::F27R2, 23, 1, ReadWriteMode, CANF27R2Base> ;
    using FB24 = CAN_F27R2_FB24_Values<CAN::F27R2, 24, 1, ReadWriteMode, CANF27R2Base> ;
    using FB25 = CAN_F27R2_FB25_Values<CAN::F27R2, 25, 1, ReadWriteMode, CANF27R2Base> ;
    using FB26 = CAN_F27R2_FB26_Values<CAN::F27R2, 26, 1, ReadWriteMode, CANF27R2Base> ;
    using FB27 = CAN_F27R2_FB27_Values<CAN::F27R2, 27, 1, ReadWriteMode, CANF27R2Base> ;
    using FB28 = CAN_F27R2_FB28_Values<CAN::F27R2, 28, 1, ReadWriteMode, CANF27R2Base> ;
    using FB29 = CAN_F27R2_FB29_Values<CAN::F27R2, 29, 1, ReadWriteMode, CANF27R2Base> ;
    using FB30 = CAN_F27R2_FB30_Values<CAN::F27R2, 30, 1, ReadWriteMode, CANF27R2Base> ;
    using FB31 = CAN_F27R2_FB31_Values<CAN::F27R2, 31, 1, ReadWriteMode, CANF27R2Base> ;
    using FieldValues = CAN_F27R2_FB31_Values<CAN::F27R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27R2Pack  = Register<0x4000671C, 32, ReadWriteMode, CANF27R2Base, T...> ;

} ;

#endif //#if !defined(CANREGISTERS_HPP)
