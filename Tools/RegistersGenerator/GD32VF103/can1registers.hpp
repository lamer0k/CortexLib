/*******************************************************************************
* Filename      : can1registers.hpp
*
* Details       : Controller area network. This header file is auto-generated
*                 for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(CAN1REGISTERS_HPP)
#define CAN1REGISTERS_HPP

#include "can1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAN1
{
  struct CAN1CTLBase {} ;

  struct CTL : public RegisterBase<0x40006800, 32, ReadWriteMode>
  {
    using DFZ = CAN1_CTL_DFZ_Values<CAN1::CTL, 16, 1, ReadWriteMode, CAN1CTLBase> ;
    using SWRST = CAN1_CTL_SWRST_Values<CAN1::CTL, 15, 1, ReadWriteMode, CAN1CTLBase> ;
    using TTC = CAN1_CTL_TTC_Values<CAN1::CTL, 7, 1, ReadWriteMode, CAN1CTLBase> ;
    using ABOR = CAN1_CTL_ABOR_Values<CAN1::CTL, 6, 1, ReadWriteMode, CAN1CTLBase> ;
    using AWU = CAN1_CTL_AWU_Values<CAN1::CTL, 5, 1, ReadWriteMode, CAN1CTLBase> ;
    using ARD = CAN1_CTL_ARD_Values<CAN1::CTL, 4, 1, ReadWriteMode, CAN1CTLBase> ;
    using RFOD = CAN1_CTL_RFOD_Values<CAN1::CTL, 3, 1, ReadWriteMode, CAN1CTLBase> ;
    using TFO = CAN1_CTL_TFO_Values<CAN1::CTL, 2, 1, ReadWriteMode, CAN1CTLBase> ;
    using SLPWMOD = CAN1_CTL_SLPWMOD_Values<CAN1::CTL, 1, 1, ReadWriteMode, CAN1CTLBase> ;
    using IWMOD = CAN1_CTL_IWMOD_Values<CAN1::CTL, 0, 1, ReadWriteMode, CAN1CTLBase> ;
    using FieldValues = CAN1_CTL_IWMOD_Values<CAN1::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40006800, 32, ReadWriteMode, CAN1CTLBase, T...> ;

  struct CAN1STATBase {} ;

  struct STAT : public RegisterBase<0x40006804, 32, ReadWriteMode>
  {
    using RXL = CAN1_STAT_RXL_Values<CAN1::STAT, 11, 1, ReadMode, CAN1STATBase> ;
    using LASTRX = CAN1_STAT_LASTRX_Values<CAN1::STAT, 10, 1, ReadMode, CAN1STATBase> ;
    using RS = CAN1_STAT_RS_Values<CAN1::STAT, 9, 1, ReadMode, CAN1STATBase> ;
    using TS = CAN1_STAT_TS_Values<CAN1::STAT, 8, 1, ReadMode, CAN1STATBase> ;
    using SLPIF = CAN1_STAT_SLPIF_Values<CAN1::STAT, 4, 1, ReadWriteMode, CAN1STATBase> ;
    using WUIF = CAN1_STAT_WUIF_Values<CAN1::STAT, 3, 1, ReadWriteMode, CAN1STATBase> ;
    using ERRIF = CAN1_STAT_ERRIF_Values<CAN1::STAT, 2, 1, ReadWriteMode, CAN1STATBase> ;
    using SLPWS = CAN1_STAT_SLPWS_Values<CAN1::STAT, 1, 1, ReadMode, CAN1STATBase> ;
    using IWS = CAN1_STAT_IWS_Values<CAN1::STAT, 0, 1, ReadMode, CAN1STATBase> ;
    using FieldValues = CAN1_STAT_IWS_Values<CAN1::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40006804, 32, ReadWriteMode, CAN1STATBase, T...> ;

  struct CAN1TSTATBase {} ;

  struct TSTAT : public RegisterBase<0x40006808, 32, ReadWriteMode>
  {
    using TMLS2 = CAN1_TSTAT_TMLS2_Values<CAN1::TSTAT, 31, 1, ReadMode, CAN1TSTATBase> ;
    using TMLS1 = CAN1_TSTAT_TMLS1_Values<CAN1::TSTAT, 30, 1, ReadMode, CAN1TSTATBase> ;
    using TMLS0 = CAN1_TSTAT_TMLS0_Values<CAN1::TSTAT, 29, 1, ReadMode, CAN1TSTATBase> ;
    using TME2 = CAN1_TSTAT_TME2_Values<CAN1::TSTAT, 28, 1, ReadMode, CAN1TSTATBase> ;
    using TME1 = CAN1_TSTAT_TME1_Values<CAN1::TSTAT, 27, 1, ReadMode, CAN1TSTATBase> ;
    using TME0 = CAN1_TSTAT_TME0_Values<CAN1::TSTAT, 26, 1, ReadMode, CAN1TSTATBase> ;
    using NUM = CAN1_TSTAT_NUM_Values<CAN1::TSTAT, 24, 2, ReadMode, CAN1TSTATBase> ;
    using MST2 = CAN1_TSTAT_MST2_Values<CAN1::TSTAT, 23, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTE2 = CAN1_TSTAT_MTE2_Values<CAN1::TSTAT, 19, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MAL2 = CAN1_TSTAT_MAL2_Values<CAN1::TSTAT, 18, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTFNERR2 = CAN1_TSTAT_MTFNERR2_Values<CAN1::TSTAT, 17, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTF2 = CAN1_TSTAT_MTF2_Values<CAN1::TSTAT, 16, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MST1 = CAN1_TSTAT_MST1_Values<CAN1::TSTAT, 15, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTE1 = CAN1_TSTAT_MTE1_Values<CAN1::TSTAT, 11, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MAL1 = CAN1_TSTAT_MAL1_Values<CAN1::TSTAT, 10, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTFNERR1 = CAN1_TSTAT_MTFNERR1_Values<CAN1::TSTAT, 9, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTF1 = CAN1_TSTAT_MTF1_Values<CAN1::TSTAT, 8, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MST0 = CAN1_TSTAT_MST0_Values<CAN1::TSTAT, 7, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTE0 = CAN1_TSTAT_MTE0_Values<CAN1::TSTAT, 3, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MAL0 = CAN1_TSTAT_MAL0_Values<CAN1::TSTAT, 2, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTFNERR0 = CAN1_TSTAT_MTFNERR0_Values<CAN1::TSTAT, 1, 1, ReadWriteMode, CAN1TSTATBase> ;
    using MTF0 = CAN1_TSTAT_MTF0_Values<CAN1::TSTAT, 0, 1, ReadWriteMode, CAN1TSTATBase> ;
    using FieldValues = CAN1_TSTAT_MTF0_Values<CAN1::TSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSTATPack  = Register<0x40006808, 32, ReadWriteMode, CAN1TSTATBase, T...> ;

  struct CAN1RFIFO0Base {} ;

  struct RFIFO0 : public RegisterBase<0x4000680C, 32, ReadWriteMode>
  {
    using RFD0 = CAN1_RFIFO0_RFD0_Values<CAN1::RFIFO0, 5, 1, ReadWriteMode, CAN1RFIFO0Base> ;
    using RFO0 = CAN1_RFIFO0_RFO0_Values<CAN1::RFIFO0, 4, 1, ReadWriteMode, CAN1RFIFO0Base> ;
    using RFF0 = CAN1_RFIFO0_RFF0_Values<CAN1::RFIFO0, 3, 1, ReadWriteMode, CAN1RFIFO0Base> ;
    using RFL0 = CAN1_RFIFO0_RFL0_Values<CAN1::RFIFO0, 0, 2, ReadMode, CAN1RFIFO0Base> ;
    using FieldValues = CAN1_RFIFO0_RFL0_Values<CAN1::RFIFO0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFO0Pack  = Register<0x4000680C, 32, ReadWriteMode, CAN1RFIFO0Base, T...> ;

  struct CAN1RFIFO1Base {} ;

  struct RFIFO1 : public RegisterBase<0x40006810, 32, ReadWriteMode>
  {
    using RFD1 = CAN1_RFIFO1_RFD1_Values<CAN1::RFIFO1, 5, 1, ReadWriteMode, CAN1RFIFO1Base> ;
    using RFO1 = CAN1_RFIFO1_RFO1_Values<CAN1::RFIFO1, 4, 1, ReadWriteMode, CAN1RFIFO1Base> ;
    using RFF1 = CAN1_RFIFO1_RFF1_Values<CAN1::RFIFO1, 3, 1, ReadWriteMode, CAN1RFIFO1Base> ;
    using RFL1 = CAN1_RFIFO1_RFL1_Values<CAN1::RFIFO1, 0, 2, ReadMode, CAN1RFIFO1Base> ;
    using FieldValues = CAN1_RFIFO1_RFL1_Values<CAN1::RFIFO1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFO1Pack  = Register<0x40006810, 32, ReadWriteMode, CAN1RFIFO1Base, T...> ;

  struct CAN1INTENBase {} ;

  struct INTEN : public RegisterBase<0x40006814, 32, ReadWriteMode>
  {
    using SLPWIE = CAN1_INTEN_SLPWIE_Values<CAN1::INTEN, 17, 1, ReadWriteMode, CAN1INTENBase> ;
    using WIE = CAN1_INTEN_WIE_Values<CAN1::INTEN, 16, 1, ReadWriteMode, CAN1INTENBase> ;
    using ERRIE = CAN1_INTEN_ERRIE_Values<CAN1::INTEN, 15, 1, ReadWriteMode, CAN1INTENBase> ;
    using ERRNIE = CAN1_INTEN_ERRNIE_Values<CAN1::INTEN, 11, 1, ReadWriteMode, CAN1INTENBase> ;
    using BOIE = CAN1_INTEN_BOIE_Values<CAN1::INTEN, 10, 1, ReadWriteMode, CAN1INTENBase> ;
    using PERRIE = CAN1_INTEN_PERRIE_Values<CAN1::INTEN, 9, 1, ReadWriteMode, CAN1INTENBase> ;
    using WERRIE = CAN1_INTEN_WERRIE_Values<CAN1::INTEN, 8, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFOIE1 = CAN1_INTEN_RFOIE1_Values<CAN1::INTEN, 6, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFFIE1 = CAN1_INTEN_RFFIE1_Values<CAN1::INTEN, 5, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFNEIE1 = CAN1_INTEN_RFNEIE1_Values<CAN1::INTEN, 4, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFOIE0 = CAN1_INTEN_RFOIE0_Values<CAN1::INTEN, 3, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFFIE0 = CAN1_INTEN_RFFIE0_Values<CAN1::INTEN, 2, 1, ReadWriteMode, CAN1INTENBase> ;
    using RFNEIE0 = CAN1_INTEN_RFNEIE0_Values<CAN1::INTEN, 1, 1, ReadWriteMode, CAN1INTENBase> ;
    using TMEIE = CAN1_INTEN_TMEIE_Values<CAN1::INTEN, 0, 1, ReadWriteMode, CAN1INTENBase> ;
    using FieldValues = CAN1_INTEN_TMEIE_Values<CAN1::INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENPack  = Register<0x40006814, 32, ReadWriteMode, CAN1INTENBase, T...> ;

  struct CAN1ERRBase {} ;

  struct ERR : public RegisterBase<0x40006818, 32, ReadWriteMode>
  {
    using RECNT = CAN1_ERR_RECNT_Values<CAN1::ERR, 24, 8, ReadMode, CAN1ERRBase> ;
    using TECNT = CAN1_ERR_TECNT_Values<CAN1::ERR, 16, 8, ReadMode, CAN1ERRBase> ;
    using ERRN = CAN1_ERR_ERRN_Values<CAN1::ERR, 4, 3, ReadWriteMode, CAN1ERRBase> ;
    using BOERR = CAN1_ERR_BOERR_Values<CAN1::ERR, 2, 1, ReadMode, CAN1ERRBase> ;
    using PERR = CAN1_ERR_PERR_Values<CAN1::ERR, 1, 1, ReadMode, CAN1ERRBase> ;
    using WERR = CAN1_ERR_WERR_Values<CAN1::ERR, 0, 1, ReadMode, CAN1ERRBase> ;
    using FieldValues = CAN1_ERR_WERR_Values<CAN1::ERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ERRPack  = Register<0x40006818, 32, ReadWriteMode, CAN1ERRBase, T...> ;

  struct CAN1BTBase {} ;

  struct BT : public RegisterBase<0x4000681C, 32, ReadWriteMode>
  {
    using SCMOD = CAN1_BT_SCMOD_Values<CAN1::BT, 31, 1, ReadWriteMode, CAN1BTBase> ;
    using LCMOD = CAN1_BT_LCMOD_Values<CAN1::BT, 30, 1, ReadWriteMode, CAN1BTBase> ;
    using SJW = CAN1_BT_SJW_Values<CAN1::BT, 24, 2, ReadWriteMode, CAN1BTBase> ;
    using BS2 = CAN1_BT_BS2_Values<CAN1::BT, 20, 3, ReadWriteMode, CAN1BTBase> ;
    using BS1 = CAN1_BT_BS1_Values<CAN1::BT, 16, 4, ReadWriteMode, CAN1BTBase> ;
    using BAUDPSC = CAN1_BT_BAUDPSC_Values<CAN1::BT, 0, 10, ReadWriteMode, CAN1BTBase> ;
    using FieldValues = CAN1_BT_BAUDPSC_Values<CAN1::BT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTPack  = Register<0x4000681C, 32, ReadWriteMode, CAN1BTBase, T...> ;

  struct CAN1TMI0Base {} ;

  struct TMI0 : public RegisterBase<0x40006980, 32, ReadWriteMode>
  {
    using SFID_EFID = CAN1_TMI0_SFID_EFID_Values<CAN1::TMI0, 21, 11, ReadWriteMode, CAN1TMI0Base> ;
    using EFID = CAN1_TMI0_EFID_Values<CAN1::TMI0, 3, 18, ReadWriteMode, CAN1TMI0Base> ;
    using FF = CAN1_TMI0_FF_Values<CAN1::TMI0, 2, 1, ReadWriteMode, CAN1TMI0Base> ;
    using FT = CAN1_TMI0_FT_Values<CAN1::TMI0, 1, 1, ReadWriteMode, CAN1TMI0Base> ;
    using TEN = CAN1_TMI0_TEN_Values<CAN1::TMI0, 0, 1, ReadWriteMode, CAN1TMI0Base> ;
    using FieldValues = CAN1_TMI0_TEN_Values<CAN1::TMI0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMI0Pack  = Register<0x40006980, 32, ReadWriteMode, CAN1TMI0Base, T...> ;

  struct CAN1TMP0Base {} ;

  struct TMP0 : public RegisterBase<0x40006984, 32, ReadWriteMode>
  {
    using TS = CAN1_TMP0_TS_Values<CAN1::TMP0, 16, 16, ReadWriteMode, CAN1TMP0Base> ;
    using TSEN = CAN1_TMP0_TSEN_Values<CAN1::TMP0, 8, 1, ReadWriteMode, CAN1TMP0Base> ;
    using DLENC = CAN1_TMP0_DLENC_Values<CAN1::TMP0, 0, 4, ReadWriteMode, CAN1TMP0Base> ;
    using FieldValues = CAN1_TMP0_DLENC_Values<CAN1::TMP0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMP0Pack  = Register<0x40006984, 32, ReadWriteMode, CAN1TMP0Base, T...> ;

  struct CAN1TMDATA00Base {} ;

  struct TMDATA00 : public RegisterBase<0x40006988, 32, ReadWriteMode>
  {
    using DB3 = CAN1_TMDATA00_DB3_Values<CAN1::TMDATA00, 24, 8, ReadWriteMode, CAN1TMDATA00Base> ;
    using DB2 = CAN1_TMDATA00_DB2_Values<CAN1::TMDATA00, 16, 8, ReadWriteMode, CAN1TMDATA00Base> ;
    using DB1 = CAN1_TMDATA00_DB1_Values<CAN1::TMDATA00, 8, 8, ReadWriteMode, CAN1TMDATA00Base> ;
    using DB0 = CAN1_TMDATA00_DB0_Values<CAN1::TMDATA00, 0, 8, ReadWriteMode, CAN1TMDATA00Base> ;
    using FieldValues = CAN1_TMDATA00_DB0_Values<CAN1::TMDATA00, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA00Pack  = Register<0x40006988, 32, ReadWriteMode, CAN1TMDATA00Base, T...> ;

  struct CAN1TMDATA10Base {} ;

  struct TMDATA10 : public RegisterBase<0x4000698C, 32, ReadWriteMode>
  {
    using DB7 = CAN1_TMDATA10_DB7_Values<CAN1::TMDATA10, 24, 8, ReadWriteMode, CAN1TMDATA10Base> ;
    using DB6 = CAN1_TMDATA10_DB6_Values<CAN1::TMDATA10, 16, 8, ReadWriteMode, CAN1TMDATA10Base> ;
    using DB5 = CAN1_TMDATA10_DB5_Values<CAN1::TMDATA10, 8, 8, ReadWriteMode, CAN1TMDATA10Base> ;
    using DB4 = CAN1_TMDATA10_DB4_Values<CAN1::TMDATA10, 0, 8, ReadWriteMode, CAN1TMDATA10Base> ;
    using FieldValues = CAN1_TMDATA10_DB4_Values<CAN1::TMDATA10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA10Pack  = Register<0x4000698C, 32, ReadWriteMode, CAN1TMDATA10Base, T...> ;

  struct CAN1TMI1Base {} ;

  struct TMI1 : public RegisterBase<0x40006990, 32, ReadWriteMode>
  {
    using SFID_EFID = CAN1_TMI1_SFID_EFID_Values<CAN1::TMI1, 21, 11, ReadWriteMode, CAN1TMI1Base> ;
    using EFID = CAN1_TMI1_EFID_Values<CAN1::TMI1, 3, 18, ReadWriteMode, CAN1TMI1Base> ;
    using FF = CAN1_TMI1_FF_Values<CAN1::TMI1, 2, 1, ReadWriteMode, CAN1TMI1Base> ;
    using FT = CAN1_TMI1_FT_Values<CAN1::TMI1, 1, 1, ReadWriteMode, CAN1TMI1Base> ;
    using TEN = CAN1_TMI1_TEN_Values<CAN1::TMI1, 0, 1, ReadWriteMode, CAN1TMI1Base> ;
    using FieldValues = CAN1_TMI1_TEN_Values<CAN1::TMI1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMI1Pack  = Register<0x40006990, 32, ReadWriteMode, CAN1TMI1Base, T...> ;

  struct CAN1TMP1Base {} ;

  struct TMP1 : public RegisterBase<0x40006994, 32, ReadWriteMode>
  {
    using TS = CAN1_TMP1_TS_Values<CAN1::TMP1, 16, 16, ReadWriteMode, CAN1TMP1Base> ;
    using TSEN = CAN1_TMP1_TSEN_Values<CAN1::TMP1, 8, 1, ReadWriteMode, CAN1TMP1Base> ;
    using DLENC = CAN1_TMP1_DLENC_Values<CAN1::TMP1, 0, 4, ReadWriteMode, CAN1TMP1Base> ;
    using FieldValues = CAN1_TMP1_DLENC_Values<CAN1::TMP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMP1Pack  = Register<0x40006994, 32, ReadWriteMode, CAN1TMP1Base, T...> ;

  struct CAN1TMDATA01Base {} ;

  struct TMDATA01 : public RegisterBase<0x40006998, 32, ReadWriteMode>
  {
    using DB3 = CAN1_TMDATA01_DB3_Values<CAN1::TMDATA01, 24, 8, ReadWriteMode, CAN1TMDATA01Base> ;
    using DB2 = CAN1_TMDATA01_DB2_Values<CAN1::TMDATA01, 16, 8, ReadWriteMode, CAN1TMDATA01Base> ;
    using DB1 = CAN1_TMDATA01_DB1_Values<CAN1::TMDATA01, 8, 8, ReadWriteMode, CAN1TMDATA01Base> ;
    using DB0 = CAN1_TMDATA01_DB0_Values<CAN1::TMDATA01, 0, 8, ReadWriteMode, CAN1TMDATA01Base> ;
    using FieldValues = CAN1_TMDATA01_DB0_Values<CAN1::TMDATA01, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA01Pack  = Register<0x40006998, 32, ReadWriteMode, CAN1TMDATA01Base, T...> ;

  struct CAN1TMDATA11Base {} ;

  struct TMDATA11 : public RegisterBase<0x4000699C, 32, ReadWriteMode>
  {
    using DB7 = CAN1_TMDATA11_DB7_Values<CAN1::TMDATA11, 24, 8, ReadWriteMode, CAN1TMDATA11Base> ;
    using DB6 = CAN1_TMDATA11_DB6_Values<CAN1::TMDATA11, 16, 8, ReadWriteMode, CAN1TMDATA11Base> ;
    using DB5 = CAN1_TMDATA11_DB5_Values<CAN1::TMDATA11, 8, 8, ReadWriteMode, CAN1TMDATA11Base> ;
    using DB4 = CAN1_TMDATA11_DB4_Values<CAN1::TMDATA11, 0, 8, ReadWriteMode, CAN1TMDATA11Base> ;
    using FieldValues = CAN1_TMDATA11_DB4_Values<CAN1::TMDATA11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA11Pack  = Register<0x4000699C, 32, ReadWriteMode, CAN1TMDATA11Base, T...> ;

  struct CAN1TMI2Base {} ;

  struct TMI2 : public RegisterBase<0x400069A0, 32, ReadWriteMode>
  {
    using SFID_EFID = CAN1_TMI2_SFID_EFID_Values<CAN1::TMI2, 21, 11, ReadWriteMode, CAN1TMI2Base> ;
    using EFID = CAN1_TMI2_EFID_Values<CAN1::TMI2, 3, 18, ReadWriteMode, CAN1TMI2Base> ;
    using FF = CAN1_TMI2_FF_Values<CAN1::TMI2, 2, 1, ReadWriteMode, CAN1TMI2Base> ;
    using FT = CAN1_TMI2_FT_Values<CAN1::TMI2, 1, 1, ReadWriteMode, CAN1TMI2Base> ;
    using TEN = CAN1_TMI2_TEN_Values<CAN1::TMI2, 0, 1, ReadWriteMode, CAN1TMI2Base> ;
    using FieldValues = CAN1_TMI2_TEN_Values<CAN1::TMI2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMI2Pack  = Register<0x400069A0, 32, ReadWriteMode, CAN1TMI2Base, T...> ;

  struct CAN1TMP2Base {} ;

  struct TMP2 : public RegisterBase<0x400069A4, 32, ReadWriteMode>
  {
    using TS = CAN1_TMP2_TS_Values<CAN1::TMP2, 16, 16, ReadWriteMode, CAN1TMP2Base> ;
    using TSEN = CAN1_TMP2_TSEN_Values<CAN1::TMP2, 8, 1, ReadWriteMode, CAN1TMP2Base> ;
    using DLENC = CAN1_TMP2_DLENC_Values<CAN1::TMP2, 0, 4, ReadWriteMode, CAN1TMP2Base> ;
    using FieldValues = CAN1_TMP2_DLENC_Values<CAN1::TMP2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMP2Pack  = Register<0x400069A4, 32, ReadWriteMode, CAN1TMP2Base, T...> ;

  struct CAN1TMDATA02Base {} ;

  struct TMDATA02 : public RegisterBase<0x400069A8, 32, ReadWriteMode>
  {
    using DB3 = CAN1_TMDATA02_DB3_Values<CAN1::TMDATA02, 24, 8, ReadWriteMode, CAN1TMDATA02Base> ;
    using DB2 = CAN1_TMDATA02_DB2_Values<CAN1::TMDATA02, 16, 8, ReadWriteMode, CAN1TMDATA02Base> ;
    using DB1 = CAN1_TMDATA02_DB1_Values<CAN1::TMDATA02, 8, 8, ReadWriteMode, CAN1TMDATA02Base> ;
    using DB0 = CAN1_TMDATA02_DB0_Values<CAN1::TMDATA02, 0, 8, ReadWriteMode, CAN1TMDATA02Base> ;
    using FieldValues = CAN1_TMDATA02_DB0_Values<CAN1::TMDATA02, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA02Pack  = Register<0x400069A8, 32, ReadWriteMode, CAN1TMDATA02Base, T...> ;

  struct CAN1TMDATA12Base {} ;

  struct TMDATA12 : public RegisterBase<0x400069AC, 32, ReadWriteMode>
  {
    using DB7 = CAN1_TMDATA12_DB7_Values<CAN1::TMDATA12, 24, 8, ReadWriteMode, CAN1TMDATA12Base> ;
    using DB6 = CAN1_TMDATA12_DB6_Values<CAN1::TMDATA12, 16, 8, ReadWriteMode, CAN1TMDATA12Base> ;
    using DB5 = CAN1_TMDATA12_DB5_Values<CAN1::TMDATA12, 8, 8, ReadWriteMode, CAN1TMDATA12Base> ;
    using DB4 = CAN1_TMDATA12_DB4_Values<CAN1::TMDATA12, 0, 8, ReadWriteMode, CAN1TMDATA12Base> ;
    using FieldValues = CAN1_TMDATA12_DB4_Values<CAN1::TMDATA12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TMDATA12Pack  = Register<0x400069AC, 32, ReadWriteMode, CAN1TMDATA12Base, T...> ;

  struct CAN1RFIFOMI0Base {} ;

  struct RFIFOMI0 : public RegisterBase<0x400069B0, 32, ReadMode>
  {
    using SFID_EFID = CAN1_RFIFOMI0_SFID_EFID_Values<CAN1::RFIFOMI0, 21, 11, ReadMode, CAN1RFIFOMI0Base> ;
    using EFID = CAN1_RFIFOMI0_EFID_Values<CAN1::RFIFOMI0, 3, 18, ReadMode, CAN1RFIFOMI0Base> ;
    using FF = CAN1_RFIFOMI0_FF_Values<CAN1::RFIFOMI0, 2, 1, ReadMode, CAN1RFIFOMI0Base> ;
    using FT = CAN1_RFIFOMI0_FT_Values<CAN1::RFIFOMI0, 1, 1, ReadMode, CAN1RFIFOMI0Base> ;
    using FieldValues = CAN1_RFIFOMI0_FT_Values<CAN1::RFIFOMI0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMI0Pack  = Register<0x400069B0, 32, ReadMode, CAN1RFIFOMI0Base, T...> ;

  struct CAN1RFIFOMP0Base {} ;

  struct RFIFOMP0 : public RegisterBase<0x400069B4, 32, ReadMode>
  {
    using TS = CAN1_RFIFOMP0_TS_Values<CAN1::RFIFOMP0, 16, 16, ReadMode, CAN1RFIFOMP0Base> ;
    using FI = CAN1_RFIFOMP0_FI_Values<CAN1::RFIFOMP0, 8, 8, ReadMode, CAN1RFIFOMP0Base> ;
    using DLENC = CAN1_RFIFOMP0_DLENC_Values<CAN1::RFIFOMP0, 0, 4, ReadMode, CAN1RFIFOMP0Base> ;
    using FieldValues = CAN1_RFIFOMP0_DLENC_Values<CAN1::RFIFOMP0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMP0Pack  = Register<0x400069B4, 32, ReadMode, CAN1RFIFOMP0Base, T...> ;

  struct CAN1RFIFOMDATA00Base {} ;

  struct RFIFOMDATA00 : public RegisterBase<0x400069B8, 32, ReadMode>
  {
    using DB3 = CAN1_RFIFOMDATA00_DB3_Values<CAN1::RFIFOMDATA00, 24, 8, ReadMode, CAN1RFIFOMDATA00Base> ;
    using DB2 = CAN1_RFIFOMDATA00_DB2_Values<CAN1::RFIFOMDATA00, 16, 8, ReadMode, CAN1RFIFOMDATA00Base> ;
    using DB1 = CAN1_RFIFOMDATA00_DB1_Values<CAN1::RFIFOMDATA00, 8, 8, ReadMode, CAN1RFIFOMDATA00Base> ;
    using DB0 = CAN1_RFIFOMDATA00_DB0_Values<CAN1::RFIFOMDATA00, 0, 8, ReadMode, CAN1RFIFOMDATA00Base> ;
    using FieldValues = CAN1_RFIFOMDATA00_DB0_Values<CAN1::RFIFOMDATA00, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMDATA00Pack  = Register<0x400069B8, 32, ReadMode, CAN1RFIFOMDATA00Base, T...> ;

  struct CAN1RFIFOMDATA10Base {} ;

  struct RFIFOMDATA10 : public RegisterBase<0x400069BC, 32, ReadMode>
  {
    using DB7 = CAN1_RFIFOMDATA10_DB7_Values<CAN1::RFIFOMDATA10, 24, 8, ReadMode, CAN1RFIFOMDATA10Base> ;
    using DB6 = CAN1_RFIFOMDATA10_DB6_Values<CAN1::RFIFOMDATA10, 16, 8, ReadMode, CAN1RFIFOMDATA10Base> ;
    using DB5 = CAN1_RFIFOMDATA10_DB5_Values<CAN1::RFIFOMDATA10, 8, 8, ReadMode, CAN1RFIFOMDATA10Base> ;
    using DB4 = CAN1_RFIFOMDATA10_DB4_Values<CAN1::RFIFOMDATA10, 0, 8, ReadMode, CAN1RFIFOMDATA10Base> ;
    using FieldValues = CAN1_RFIFOMDATA10_DB4_Values<CAN1::RFIFOMDATA10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMDATA10Pack  = Register<0x400069BC, 32, ReadMode, CAN1RFIFOMDATA10Base, T...> ;

  struct CAN1RFIFOMI1Base {} ;

  struct RFIFOMI1 : public RegisterBase<0x400069C0, 32, ReadMode>
  {
    using SFID_EFID = CAN1_RFIFOMI1_SFID_EFID_Values<CAN1::RFIFOMI1, 21, 11, ReadMode, CAN1RFIFOMI1Base> ;
    using EFID = CAN1_RFIFOMI1_EFID_Values<CAN1::RFIFOMI1, 3, 18, ReadMode, CAN1RFIFOMI1Base> ;
    using FF = CAN1_RFIFOMI1_FF_Values<CAN1::RFIFOMI1, 2, 1, ReadMode, CAN1RFIFOMI1Base> ;
    using FT = CAN1_RFIFOMI1_FT_Values<CAN1::RFIFOMI1, 1, 1, ReadMode, CAN1RFIFOMI1Base> ;
    using FieldValues = CAN1_RFIFOMI1_FT_Values<CAN1::RFIFOMI1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMI1Pack  = Register<0x400069C0, 32, ReadMode, CAN1RFIFOMI1Base, T...> ;

  struct CAN1RFIFOMP1Base {} ;

  struct RFIFOMP1 : public RegisterBase<0x400069C4, 32, ReadMode>
  {
    using TS = CAN1_RFIFOMP1_TS_Values<CAN1::RFIFOMP1, 16, 16, ReadMode, CAN1RFIFOMP1Base> ;
    using FI = CAN1_RFIFOMP1_FI_Values<CAN1::RFIFOMP1, 8, 8, ReadMode, CAN1RFIFOMP1Base> ;
    using DLENC = CAN1_RFIFOMP1_DLENC_Values<CAN1::RFIFOMP1, 0, 4, ReadMode, CAN1RFIFOMP1Base> ;
    using FieldValues = CAN1_RFIFOMP1_DLENC_Values<CAN1::RFIFOMP1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMP1Pack  = Register<0x400069C4, 32, ReadMode, CAN1RFIFOMP1Base, T...> ;

  struct CAN1RFIFOMDATA01Base {} ;

  struct RFIFOMDATA01 : public RegisterBase<0x400069C8, 32, ReadMode>
  {
    using DB3 = CAN1_RFIFOMDATA01_DB3_Values<CAN1::RFIFOMDATA01, 24, 8, ReadMode, CAN1RFIFOMDATA01Base> ;
    using DB2 = CAN1_RFIFOMDATA01_DB2_Values<CAN1::RFIFOMDATA01, 16, 8, ReadMode, CAN1RFIFOMDATA01Base> ;
    using DB1 = CAN1_RFIFOMDATA01_DB1_Values<CAN1::RFIFOMDATA01, 8, 8, ReadMode, CAN1RFIFOMDATA01Base> ;
    using DB0 = CAN1_RFIFOMDATA01_DB0_Values<CAN1::RFIFOMDATA01, 0, 8, ReadMode, CAN1RFIFOMDATA01Base> ;
    using FieldValues = CAN1_RFIFOMDATA01_DB0_Values<CAN1::RFIFOMDATA01, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMDATA01Pack  = Register<0x400069C8, 32, ReadMode, CAN1RFIFOMDATA01Base, T...> ;

  struct CAN1RFIFOMDATA11Base {} ;

  struct RFIFOMDATA11 : public RegisterBase<0x400069CC, 32, ReadMode>
  {
    using DB7 = CAN1_RFIFOMDATA11_DB7_Values<CAN1::RFIFOMDATA11, 24, 8, ReadMode, CAN1RFIFOMDATA11Base> ;
    using DB6 = CAN1_RFIFOMDATA11_DB6_Values<CAN1::RFIFOMDATA11, 16, 8, ReadMode, CAN1RFIFOMDATA11Base> ;
    using DB5 = CAN1_RFIFOMDATA11_DB5_Values<CAN1::RFIFOMDATA11, 8, 8, ReadMode, CAN1RFIFOMDATA11Base> ;
    using DB4 = CAN1_RFIFOMDATA11_DB4_Values<CAN1::RFIFOMDATA11, 0, 8, ReadMode, CAN1RFIFOMDATA11Base> ;
    using FieldValues = CAN1_RFIFOMDATA11_DB4_Values<CAN1::RFIFOMDATA11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFIFOMDATA11Pack  = Register<0x400069CC, 32, ReadMode, CAN1RFIFOMDATA11Base, T...> ;

  struct CAN1FCTLBase {} ;

  struct FCTL : public RegisterBase<0x40006A00, 32, ReadWriteMode>
  {
    using HBC1F = CAN1_FCTL_HBC1F_Values<CAN1::FCTL, 8, 6, ReadWriteMode, CAN1FCTLBase> ;
    using FLD = CAN1_FCTL_FLD_Values<CAN1::FCTL, 0, 1, ReadWriteMode, CAN1FCTLBase> ;
    using FieldValues = CAN1_FCTL_FLD_Values<CAN1::FCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FCTLPack  = Register<0x40006A00, 32, ReadWriteMode, CAN1FCTLBase, T...> ;

  struct CAN1FMCFGBase {} ;

  struct FMCFG : public RegisterBase<0x40006A04, 32, ReadWriteMode>
  {
    using FMOD27 = CAN1_FMCFG_FMOD27_Values<CAN1::FMCFG, 27, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD26 = CAN1_FMCFG_FMOD26_Values<CAN1::FMCFG, 26, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD25 = CAN1_FMCFG_FMOD25_Values<CAN1::FMCFG, 25, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD24 = CAN1_FMCFG_FMOD24_Values<CAN1::FMCFG, 24, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD23 = CAN1_FMCFG_FMOD23_Values<CAN1::FMCFG, 23, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD22 = CAN1_FMCFG_FMOD22_Values<CAN1::FMCFG, 22, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD21 = CAN1_FMCFG_FMOD21_Values<CAN1::FMCFG, 21, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD20 = CAN1_FMCFG_FMOD20_Values<CAN1::FMCFG, 20, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD19 = CAN1_FMCFG_FMOD19_Values<CAN1::FMCFG, 19, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD18 = CAN1_FMCFG_FMOD18_Values<CAN1::FMCFG, 18, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD17 = CAN1_FMCFG_FMOD17_Values<CAN1::FMCFG, 17, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD16 = CAN1_FMCFG_FMOD16_Values<CAN1::FMCFG, 16, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD15 = CAN1_FMCFG_FMOD15_Values<CAN1::FMCFG, 15, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD14 = CAN1_FMCFG_FMOD14_Values<CAN1::FMCFG, 14, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD13 = CAN1_FMCFG_FMOD13_Values<CAN1::FMCFG, 13, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD12 = CAN1_FMCFG_FMOD12_Values<CAN1::FMCFG, 12, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD11 = CAN1_FMCFG_FMOD11_Values<CAN1::FMCFG, 11, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD10 = CAN1_FMCFG_FMOD10_Values<CAN1::FMCFG, 10, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD9 = CAN1_FMCFG_FMOD9_Values<CAN1::FMCFG, 9, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD8 = CAN1_FMCFG_FMOD8_Values<CAN1::FMCFG, 8, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD7 = CAN1_FMCFG_FMOD7_Values<CAN1::FMCFG, 7, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD6 = CAN1_FMCFG_FMOD6_Values<CAN1::FMCFG, 6, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD5 = CAN1_FMCFG_FMOD5_Values<CAN1::FMCFG, 5, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD4 = CAN1_FMCFG_FMOD4_Values<CAN1::FMCFG, 4, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD3 = CAN1_FMCFG_FMOD3_Values<CAN1::FMCFG, 3, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD2 = CAN1_FMCFG_FMOD2_Values<CAN1::FMCFG, 2, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD1 = CAN1_FMCFG_FMOD1_Values<CAN1::FMCFG, 1, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FMOD0 = CAN1_FMCFG_FMOD0_Values<CAN1::FMCFG, 0, 1, ReadWriteMode, CAN1FMCFGBase> ;
    using FieldValues = CAN1_FMCFG_FMOD0_Values<CAN1::FMCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FMCFGPack  = Register<0x40006A04, 32, ReadWriteMode, CAN1FMCFGBase, T...> ;

  struct CAN1FSCFGBase {} ;

  struct FSCFG : public RegisterBase<0x40006A0C, 32, ReadWriteMode>
  {
    using FS0 = CAN1_FSCFG_FS0_Values<CAN1::FSCFG, 0, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS1 = CAN1_FSCFG_FS1_Values<CAN1::FSCFG, 1, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS2 = CAN1_FSCFG_FS2_Values<CAN1::FSCFG, 2, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS3 = CAN1_FSCFG_FS3_Values<CAN1::FSCFG, 3, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS4 = CAN1_FSCFG_FS4_Values<CAN1::FSCFG, 4, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS5 = CAN1_FSCFG_FS5_Values<CAN1::FSCFG, 5, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS6 = CAN1_FSCFG_FS6_Values<CAN1::FSCFG, 6, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS7 = CAN1_FSCFG_FS7_Values<CAN1::FSCFG, 7, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS8 = CAN1_FSCFG_FS8_Values<CAN1::FSCFG, 8, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS9 = CAN1_FSCFG_FS9_Values<CAN1::FSCFG, 9, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS10 = CAN1_FSCFG_FS10_Values<CAN1::FSCFG, 10, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS11 = CAN1_FSCFG_FS11_Values<CAN1::FSCFG, 11, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS12 = CAN1_FSCFG_FS12_Values<CAN1::FSCFG, 12, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS13 = CAN1_FSCFG_FS13_Values<CAN1::FSCFG, 13, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS14 = CAN1_FSCFG_FS14_Values<CAN1::FSCFG, 14, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS15 = CAN1_FSCFG_FS15_Values<CAN1::FSCFG, 15, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS16 = CAN1_FSCFG_FS16_Values<CAN1::FSCFG, 16, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS17 = CAN1_FSCFG_FS17_Values<CAN1::FSCFG, 17, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS18 = CAN1_FSCFG_FS18_Values<CAN1::FSCFG, 18, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS19 = CAN1_FSCFG_FS19_Values<CAN1::FSCFG, 19, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS20 = CAN1_FSCFG_FS20_Values<CAN1::FSCFG, 20, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS21 = CAN1_FSCFG_FS21_Values<CAN1::FSCFG, 21, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS22 = CAN1_FSCFG_FS22_Values<CAN1::FSCFG, 22, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS23 = CAN1_FSCFG_FS23_Values<CAN1::FSCFG, 23, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS24 = CAN1_FSCFG_FS24_Values<CAN1::FSCFG, 24, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS25 = CAN1_FSCFG_FS25_Values<CAN1::FSCFG, 25, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS26 = CAN1_FSCFG_FS26_Values<CAN1::FSCFG, 26, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FS27 = CAN1_FSCFG_FS27_Values<CAN1::FSCFG, 27, 1, ReadWriteMode, CAN1FSCFGBase> ;
    using FieldValues = CAN1_FSCFG_FS27_Values<CAN1::FSCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FSCFGPack  = Register<0x40006A0C, 32, ReadWriteMode, CAN1FSCFGBase, T...> ;

  struct CAN1FAFIFOBase {} ;

  struct FAFIFO : public RegisterBase<0x40006A14, 32, ReadWriteMode>
  {
    using FAF0 = CAN1_FAFIFO_FAF0_Values<CAN1::FAFIFO, 0, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF1 = CAN1_FAFIFO_FAF1_Values<CAN1::FAFIFO, 1, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF2 = CAN1_FAFIFO_FAF2_Values<CAN1::FAFIFO, 2, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF3 = CAN1_FAFIFO_FAF3_Values<CAN1::FAFIFO, 3, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF4 = CAN1_FAFIFO_FAF4_Values<CAN1::FAFIFO, 4, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF5 = CAN1_FAFIFO_FAF5_Values<CAN1::FAFIFO, 5, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF6 = CAN1_FAFIFO_FAF6_Values<CAN1::FAFIFO, 6, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF7 = CAN1_FAFIFO_FAF7_Values<CAN1::FAFIFO, 7, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF8 = CAN1_FAFIFO_FAF8_Values<CAN1::FAFIFO, 8, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF9 = CAN1_FAFIFO_FAF9_Values<CAN1::FAFIFO, 9, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF10 = CAN1_FAFIFO_FAF10_Values<CAN1::FAFIFO, 10, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF11 = CAN1_FAFIFO_FAF11_Values<CAN1::FAFIFO, 11, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF12 = CAN1_FAFIFO_FAF12_Values<CAN1::FAFIFO, 12, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF13 = CAN1_FAFIFO_FAF13_Values<CAN1::FAFIFO, 13, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF14 = CAN1_FAFIFO_FAF14_Values<CAN1::FAFIFO, 14, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF15 = CAN1_FAFIFO_FAF15_Values<CAN1::FAFIFO, 15, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF16 = CAN1_FAFIFO_FAF16_Values<CAN1::FAFIFO, 16, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF17 = CAN1_FAFIFO_FAF17_Values<CAN1::FAFIFO, 17, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF18 = CAN1_FAFIFO_FAF18_Values<CAN1::FAFIFO, 18, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF19 = CAN1_FAFIFO_FAF19_Values<CAN1::FAFIFO, 19, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF20 = CAN1_FAFIFO_FAF20_Values<CAN1::FAFIFO, 20, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF21 = CAN1_FAFIFO_FAF21_Values<CAN1::FAFIFO, 21, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF22 = CAN1_FAFIFO_FAF22_Values<CAN1::FAFIFO, 22, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF23 = CAN1_FAFIFO_FAF23_Values<CAN1::FAFIFO, 23, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF24 = CAN1_FAFIFO_FAF24_Values<CAN1::FAFIFO, 24, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF25 = CAN1_FAFIFO_FAF25_Values<CAN1::FAFIFO, 25, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF26 = CAN1_FAFIFO_FAF26_Values<CAN1::FAFIFO, 26, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FAF27 = CAN1_FAFIFO_FAF27_Values<CAN1::FAFIFO, 27, 1, ReadWriteMode, CAN1FAFIFOBase> ;
    using FieldValues = CAN1_FAFIFO_FAF27_Values<CAN1::FAFIFO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FAFIFOPack  = Register<0x40006A14, 32, ReadWriteMode, CAN1FAFIFOBase, T...> ;

  struct CAN1FWBase {} ;

  struct FW : public RegisterBase<0x40006A1C, 32, ReadWriteMode>
  {
    using FW0 = CAN1_FW_FW0_Values<CAN1::FW, 0, 1, ReadWriteMode, CAN1FWBase> ;
    using FW1 = CAN1_FW_FW1_Values<CAN1::FW, 1, 1, ReadWriteMode, CAN1FWBase> ;
    using FW2 = CAN1_FW_FW2_Values<CAN1::FW, 2, 1, ReadWriteMode, CAN1FWBase> ;
    using FW3 = CAN1_FW_FW3_Values<CAN1::FW, 3, 1, ReadWriteMode, CAN1FWBase> ;
    using FW4 = CAN1_FW_FW4_Values<CAN1::FW, 4, 1, ReadWriteMode, CAN1FWBase> ;
    using FW5 = CAN1_FW_FW5_Values<CAN1::FW, 5, 1, ReadWriteMode, CAN1FWBase> ;
    using FW6 = CAN1_FW_FW6_Values<CAN1::FW, 6, 1, ReadWriteMode, CAN1FWBase> ;
    using FW7 = CAN1_FW_FW7_Values<CAN1::FW, 7, 1, ReadWriteMode, CAN1FWBase> ;
    using FW8 = CAN1_FW_FW8_Values<CAN1::FW, 8, 1, ReadWriteMode, CAN1FWBase> ;
    using FW9 = CAN1_FW_FW9_Values<CAN1::FW, 9, 1, ReadWriteMode, CAN1FWBase> ;
    using FW10 = CAN1_FW_FW10_Values<CAN1::FW, 10, 1, ReadWriteMode, CAN1FWBase> ;
    using FW11 = CAN1_FW_FW11_Values<CAN1::FW, 11, 1, ReadWriteMode, CAN1FWBase> ;
    using FW12 = CAN1_FW_FW12_Values<CAN1::FW, 12, 1, ReadWriteMode, CAN1FWBase> ;
    using FW13 = CAN1_FW_FW13_Values<CAN1::FW, 13, 1, ReadWriteMode, CAN1FWBase> ;
    using FW14 = CAN1_FW_FW14_Values<CAN1::FW, 14, 1, ReadWriteMode, CAN1FWBase> ;
    using FW15 = CAN1_FW_FW15_Values<CAN1::FW, 15, 1, ReadWriteMode, CAN1FWBase> ;
    using FW16 = CAN1_FW_FW16_Values<CAN1::FW, 16, 1, ReadWriteMode, CAN1FWBase> ;
    using FW17 = CAN1_FW_FW17_Values<CAN1::FW, 17, 1, ReadWriteMode, CAN1FWBase> ;
    using FW18 = CAN1_FW_FW18_Values<CAN1::FW, 18, 1, ReadWriteMode, CAN1FWBase> ;
    using FW19 = CAN1_FW_FW19_Values<CAN1::FW, 19, 1, ReadWriteMode, CAN1FWBase> ;
    using FW20 = CAN1_FW_FW20_Values<CAN1::FW, 20, 1, ReadWriteMode, CAN1FWBase> ;
    using FW21 = CAN1_FW_FW21_Values<CAN1::FW, 21, 1, ReadWriteMode, CAN1FWBase> ;
    using FW22 = CAN1_FW_FW22_Values<CAN1::FW, 22, 1, ReadWriteMode, CAN1FWBase> ;
    using FW23 = CAN1_FW_FW23_Values<CAN1::FW, 23, 1, ReadWriteMode, CAN1FWBase> ;
    using FW24 = CAN1_FW_FW24_Values<CAN1::FW, 24, 1, ReadWriteMode, CAN1FWBase> ;
    using FW25 = CAN1_FW_FW25_Values<CAN1::FW, 25, 1, ReadWriteMode, CAN1FWBase> ;
    using FW26 = CAN1_FW_FW26_Values<CAN1::FW, 26, 1, ReadWriteMode, CAN1FWBase> ;
    using FW27 = CAN1_FW_FW27_Values<CAN1::FW, 27, 1, ReadWriteMode, CAN1FWBase> ;
    using FieldValues = CAN1_FW_FW27_Values<CAN1::FW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FWPack  = Register<0x40006A1C, 32, ReadWriteMode, CAN1FWBase, T...> ;

  struct CAN1F0DATA0Base {} ;

  struct F0DATA0 : public RegisterBase<0x40006A40, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F0DATA0_FD0_Values<CAN1::F0DATA0, 0, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD1 = CAN1_F0DATA0_FD1_Values<CAN1::F0DATA0, 1, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD2 = CAN1_F0DATA0_FD2_Values<CAN1::F0DATA0, 2, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD3 = CAN1_F0DATA0_FD3_Values<CAN1::F0DATA0, 3, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD4 = CAN1_F0DATA0_FD4_Values<CAN1::F0DATA0, 4, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD5 = CAN1_F0DATA0_FD5_Values<CAN1::F0DATA0, 5, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD6 = CAN1_F0DATA0_FD6_Values<CAN1::F0DATA0, 6, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD7 = CAN1_F0DATA0_FD7_Values<CAN1::F0DATA0, 7, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD8 = CAN1_F0DATA0_FD8_Values<CAN1::F0DATA0, 8, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD9 = CAN1_F0DATA0_FD9_Values<CAN1::F0DATA0, 9, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD10 = CAN1_F0DATA0_FD10_Values<CAN1::F0DATA0, 10, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD11 = CAN1_F0DATA0_FD11_Values<CAN1::F0DATA0, 11, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD12 = CAN1_F0DATA0_FD12_Values<CAN1::F0DATA0, 12, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD13 = CAN1_F0DATA0_FD13_Values<CAN1::F0DATA0, 13, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD14 = CAN1_F0DATA0_FD14_Values<CAN1::F0DATA0, 14, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD15 = CAN1_F0DATA0_FD15_Values<CAN1::F0DATA0, 15, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD16 = CAN1_F0DATA0_FD16_Values<CAN1::F0DATA0, 16, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD17 = CAN1_F0DATA0_FD17_Values<CAN1::F0DATA0, 17, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD18 = CAN1_F0DATA0_FD18_Values<CAN1::F0DATA0, 18, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD19 = CAN1_F0DATA0_FD19_Values<CAN1::F0DATA0, 19, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD20 = CAN1_F0DATA0_FD20_Values<CAN1::F0DATA0, 20, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD21 = CAN1_F0DATA0_FD21_Values<CAN1::F0DATA0, 21, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD22 = CAN1_F0DATA0_FD22_Values<CAN1::F0DATA0, 22, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD23 = CAN1_F0DATA0_FD23_Values<CAN1::F0DATA0, 23, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD24 = CAN1_F0DATA0_FD24_Values<CAN1::F0DATA0, 24, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD25 = CAN1_F0DATA0_FD25_Values<CAN1::F0DATA0, 25, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD26 = CAN1_F0DATA0_FD26_Values<CAN1::F0DATA0, 26, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD27 = CAN1_F0DATA0_FD27_Values<CAN1::F0DATA0, 27, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD28 = CAN1_F0DATA0_FD28_Values<CAN1::F0DATA0, 28, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD29 = CAN1_F0DATA0_FD29_Values<CAN1::F0DATA0, 29, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD30 = CAN1_F0DATA0_FD30_Values<CAN1::F0DATA0, 30, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FD31 = CAN1_F0DATA0_FD31_Values<CAN1::F0DATA0, 31, 1, ReadWriteMode, CAN1F0DATA0Base> ;
    using FieldValues = CAN1_F0DATA0_FD31_Values<CAN1::F0DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0DATA0Pack  = Register<0x40006A40, 32, ReadWriteMode, CAN1F0DATA0Base, T...> ;

  struct CAN1F0DATA1Base {} ;

  struct F0DATA1 : public RegisterBase<0x40006A44, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F0DATA1_FD0_Values<CAN1::F0DATA1, 0, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD1 = CAN1_F0DATA1_FD1_Values<CAN1::F0DATA1, 1, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD2 = CAN1_F0DATA1_FD2_Values<CAN1::F0DATA1, 2, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD3 = CAN1_F0DATA1_FD3_Values<CAN1::F0DATA1, 3, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD4 = CAN1_F0DATA1_FD4_Values<CAN1::F0DATA1, 4, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD5 = CAN1_F0DATA1_FD5_Values<CAN1::F0DATA1, 5, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD6 = CAN1_F0DATA1_FD6_Values<CAN1::F0DATA1, 6, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD7 = CAN1_F0DATA1_FD7_Values<CAN1::F0DATA1, 7, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD8 = CAN1_F0DATA1_FD8_Values<CAN1::F0DATA1, 8, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD9 = CAN1_F0DATA1_FD9_Values<CAN1::F0DATA1, 9, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD10 = CAN1_F0DATA1_FD10_Values<CAN1::F0DATA1, 10, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD11 = CAN1_F0DATA1_FD11_Values<CAN1::F0DATA1, 11, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD12 = CAN1_F0DATA1_FD12_Values<CAN1::F0DATA1, 12, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD13 = CAN1_F0DATA1_FD13_Values<CAN1::F0DATA1, 13, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD14 = CAN1_F0DATA1_FD14_Values<CAN1::F0DATA1, 14, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD15 = CAN1_F0DATA1_FD15_Values<CAN1::F0DATA1, 15, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD16 = CAN1_F0DATA1_FD16_Values<CAN1::F0DATA1, 16, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD17 = CAN1_F0DATA1_FD17_Values<CAN1::F0DATA1, 17, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD18 = CAN1_F0DATA1_FD18_Values<CAN1::F0DATA1, 18, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD19 = CAN1_F0DATA1_FD19_Values<CAN1::F0DATA1, 19, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD20 = CAN1_F0DATA1_FD20_Values<CAN1::F0DATA1, 20, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD21 = CAN1_F0DATA1_FD21_Values<CAN1::F0DATA1, 21, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD22 = CAN1_F0DATA1_FD22_Values<CAN1::F0DATA1, 22, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD23 = CAN1_F0DATA1_FD23_Values<CAN1::F0DATA1, 23, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD24 = CAN1_F0DATA1_FD24_Values<CAN1::F0DATA1, 24, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD25 = CAN1_F0DATA1_FD25_Values<CAN1::F0DATA1, 25, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD26 = CAN1_F0DATA1_FD26_Values<CAN1::F0DATA1, 26, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD27 = CAN1_F0DATA1_FD27_Values<CAN1::F0DATA1, 27, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD28 = CAN1_F0DATA1_FD28_Values<CAN1::F0DATA1, 28, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD29 = CAN1_F0DATA1_FD29_Values<CAN1::F0DATA1, 29, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD30 = CAN1_F0DATA1_FD30_Values<CAN1::F0DATA1, 30, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FD31 = CAN1_F0DATA1_FD31_Values<CAN1::F0DATA1, 31, 1, ReadWriteMode, CAN1F0DATA1Base> ;
    using FieldValues = CAN1_F0DATA1_FD31_Values<CAN1::F0DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F0DATA1Pack  = Register<0x40006A44, 32, ReadWriteMode, CAN1F0DATA1Base, T...> ;

  struct CAN1F1DATA0Base {} ;

  struct F1DATA0 : public RegisterBase<0x40006A48, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F1DATA0_FD0_Values<CAN1::F1DATA0, 0, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD1 = CAN1_F1DATA0_FD1_Values<CAN1::F1DATA0, 1, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD2 = CAN1_F1DATA0_FD2_Values<CAN1::F1DATA0, 2, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD3 = CAN1_F1DATA0_FD3_Values<CAN1::F1DATA0, 3, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD4 = CAN1_F1DATA0_FD4_Values<CAN1::F1DATA0, 4, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD5 = CAN1_F1DATA0_FD5_Values<CAN1::F1DATA0, 5, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD6 = CAN1_F1DATA0_FD6_Values<CAN1::F1DATA0, 6, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD7 = CAN1_F1DATA0_FD7_Values<CAN1::F1DATA0, 7, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD8 = CAN1_F1DATA0_FD8_Values<CAN1::F1DATA0, 8, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD9 = CAN1_F1DATA0_FD9_Values<CAN1::F1DATA0, 9, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD10 = CAN1_F1DATA0_FD10_Values<CAN1::F1DATA0, 10, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD11 = CAN1_F1DATA0_FD11_Values<CAN1::F1DATA0, 11, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD12 = CAN1_F1DATA0_FD12_Values<CAN1::F1DATA0, 12, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD13 = CAN1_F1DATA0_FD13_Values<CAN1::F1DATA0, 13, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD14 = CAN1_F1DATA0_FD14_Values<CAN1::F1DATA0, 14, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD15 = CAN1_F1DATA0_FD15_Values<CAN1::F1DATA0, 15, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD16 = CAN1_F1DATA0_FD16_Values<CAN1::F1DATA0, 16, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD17 = CAN1_F1DATA0_FD17_Values<CAN1::F1DATA0, 17, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD18 = CAN1_F1DATA0_FD18_Values<CAN1::F1DATA0, 18, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD19 = CAN1_F1DATA0_FD19_Values<CAN1::F1DATA0, 19, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD20 = CAN1_F1DATA0_FD20_Values<CAN1::F1DATA0, 20, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD21 = CAN1_F1DATA0_FD21_Values<CAN1::F1DATA0, 21, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD22 = CAN1_F1DATA0_FD22_Values<CAN1::F1DATA0, 22, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD23 = CAN1_F1DATA0_FD23_Values<CAN1::F1DATA0, 23, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD24 = CAN1_F1DATA0_FD24_Values<CAN1::F1DATA0, 24, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD25 = CAN1_F1DATA0_FD25_Values<CAN1::F1DATA0, 25, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD26 = CAN1_F1DATA0_FD26_Values<CAN1::F1DATA0, 26, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD27 = CAN1_F1DATA0_FD27_Values<CAN1::F1DATA0, 27, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD28 = CAN1_F1DATA0_FD28_Values<CAN1::F1DATA0, 28, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD29 = CAN1_F1DATA0_FD29_Values<CAN1::F1DATA0, 29, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD30 = CAN1_F1DATA0_FD30_Values<CAN1::F1DATA0, 30, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FD31 = CAN1_F1DATA0_FD31_Values<CAN1::F1DATA0, 31, 1, ReadWriteMode, CAN1F1DATA0Base> ;
    using FieldValues = CAN1_F1DATA0_FD31_Values<CAN1::F1DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1DATA0Pack  = Register<0x40006A48, 32, ReadWriteMode, CAN1F1DATA0Base, T...> ;

  struct CAN1F1DATA1Base {} ;

  struct F1DATA1 : public RegisterBase<0x40006A4C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F1DATA1_FD0_Values<CAN1::F1DATA1, 0, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD1 = CAN1_F1DATA1_FD1_Values<CAN1::F1DATA1, 1, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD2 = CAN1_F1DATA1_FD2_Values<CAN1::F1DATA1, 2, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD3 = CAN1_F1DATA1_FD3_Values<CAN1::F1DATA1, 3, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD4 = CAN1_F1DATA1_FD4_Values<CAN1::F1DATA1, 4, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD5 = CAN1_F1DATA1_FD5_Values<CAN1::F1DATA1, 5, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD6 = CAN1_F1DATA1_FD6_Values<CAN1::F1DATA1, 6, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD7 = CAN1_F1DATA1_FD7_Values<CAN1::F1DATA1, 7, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD8 = CAN1_F1DATA1_FD8_Values<CAN1::F1DATA1, 8, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD9 = CAN1_F1DATA1_FD9_Values<CAN1::F1DATA1, 9, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD10 = CAN1_F1DATA1_FD10_Values<CAN1::F1DATA1, 10, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD11 = CAN1_F1DATA1_FD11_Values<CAN1::F1DATA1, 11, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD12 = CAN1_F1DATA1_FD12_Values<CAN1::F1DATA1, 12, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD13 = CAN1_F1DATA1_FD13_Values<CAN1::F1DATA1, 13, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD14 = CAN1_F1DATA1_FD14_Values<CAN1::F1DATA1, 14, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD15 = CAN1_F1DATA1_FD15_Values<CAN1::F1DATA1, 15, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD16 = CAN1_F1DATA1_FD16_Values<CAN1::F1DATA1, 16, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD17 = CAN1_F1DATA1_FD17_Values<CAN1::F1DATA1, 17, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD18 = CAN1_F1DATA1_FD18_Values<CAN1::F1DATA1, 18, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD19 = CAN1_F1DATA1_FD19_Values<CAN1::F1DATA1, 19, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD20 = CAN1_F1DATA1_FD20_Values<CAN1::F1DATA1, 20, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD21 = CAN1_F1DATA1_FD21_Values<CAN1::F1DATA1, 21, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD22 = CAN1_F1DATA1_FD22_Values<CAN1::F1DATA1, 22, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD23 = CAN1_F1DATA1_FD23_Values<CAN1::F1DATA1, 23, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD24 = CAN1_F1DATA1_FD24_Values<CAN1::F1DATA1, 24, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD25 = CAN1_F1DATA1_FD25_Values<CAN1::F1DATA1, 25, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD26 = CAN1_F1DATA1_FD26_Values<CAN1::F1DATA1, 26, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD27 = CAN1_F1DATA1_FD27_Values<CAN1::F1DATA1, 27, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD28 = CAN1_F1DATA1_FD28_Values<CAN1::F1DATA1, 28, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD29 = CAN1_F1DATA1_FD29_Values<CAN1::F1DATA1, 29, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD30 = CAN1_F1DATA1_FD30_Values<CAN1::F1DATA1, 30, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FD31 = CAN1_F1DATA1_FD31_Values<CAN1::F1DATA1, 31, 1, ReadWriteMode, CAN1F1DATA1Base> ;
    using FieldValues = CAN1_F1DATA1_FD31_Values<CAN1::F1DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F1DATA1Pack  = Register<0x40006A4C, 32, ReadWriteMode, CAN1F1DATA1Base, T...> ;

  struct CAN1F2DATA0Base {} ;

  struct F2DATA0 : public RegisterBase<0x40006A50, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F2DATA0_FD0_Values<CAN1::F2DATA0, 0, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD1 = CAN1_F2DATA0_FD1_Values<CAN1::F2DATA0, 1, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD2 = CAN1_F2DATA0_FD2_Values<CAN1::F2DATA0, 2, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD3 = CAN1_F2DATA0_FD3_Values<CAN1::F2DATA0, 3, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD4 = CAN1_F2DATA0_FD4_Values<CAN1::F2DATA0, 4, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD5 = CAN1_F2DATA0_FD5_Values<CAN1::F2DATA0, 5, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD6 = CAN1_F2DATA0_FD6_Values<CAN1::F2DATA0, 6, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD7 = CAN1_F2DATA0_FD7_Values<CAN1::F2DATA0, 7, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD8 = CAN1_F2DATA0_FD8_Values<CAN1::F2DATA0, 8, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD9 = CAN1_F2DATA0_FD9_Values<CAN1::F2DATA0, 9, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD10 = CAN1_F2DATA0_FD10_Values<CAN1::F2DATA0, 10, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD11 = CAN1_F2DATA0_FD11_Values<CAN1::F2DATA0, 11, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD12 = CAN1_F2DATA0_FD12_Values<CAN1::F2DATA0, 12, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD13 = CAN1_F2DATA0_FD13_Values<CAN1::F2DATA0, 13, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD14 = CAN1_F2DATA0_FD14_Values<CAN1::F2DATA0, 14, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD15 = CAN1_F2DATA0_FD15_Values<CAN1::F2DATA0, 15, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD16 = CAN1_F2DATA0_FD16_Values<CAN1::F2DATA0, 16, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD17 = CAN1_F2DATA0_FD17_Values<CAN1::F2DATA0, 17, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD18 = CAN1_F2DATA0_FD18_Values<CAN1::F2DATA0, 18, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD19 = CAN1_F2DATA0_FD19_Values<CAN1::F2DATA0, 19, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD20 = CAN1_F2DATA0_FD20_Values<CAN1::F2DATA0, 20, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD21 = CAN1_F2DATA0_FD21_Values<CAN1::F2DATA0, 21, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD22 = CAN1_F2DATA0_FD22_Values<CAN1::F2DATA0, 22, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD23 = CAN1_F2DATA0_FD23_Values<CAN1::F2DATA0, 23, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD24 = CAN1_F2DATA0_FD24_Values<CAN1::F2DATA0, 24, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD25 = CAN1_F2DATA0_FD25_Values<CAN1::F2DATA0, 25, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD26 = CAN1_F2DATA0_FD26_Values<CAN1::F2DATA0, 26, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD27 = CAN1_F2DATA0_FD27_Values<CAN1::F2DATA0, 27, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD28 = CAN1_F2DATA0_FD28_Values<CAN1::F2DATA0, 28, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD29 = CAN1_F2DATA0_FD29_Values<CAN1::F2DATA0, 29, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD30 = CAN1_F2DATA0_FD30_Values<CAN1::F2DATA0, 30, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FD31 = CAN1_F2DATA0_FD31_Values<CAN1::F2DATA0, 31, 1, ReadWriteMode, CAN1F2DATA0Base> ;
    using FieldValues = CAN1_F2DATA0_FD31_Values<CAN1::F2DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2DATA0Pack  = Register<0x40006A50, 32, ReadWriteMode, CAN1F2DATA0Base, T...> ;

  struct CAN1F2DATA1Base {} ;

  struct F2DATA1 : public RegisterBase<0x40006A54, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F2DATA1_FD0_Values<CAN1::F2DATA1, 0, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD1 = CAN1_F2DATA1_FD1_Values<CAN1::F2DATA1, 1, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD2 = CAN1_F2DATA1_FD2_Values<CAN1::F2DATA1, 2, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD3 = CAN1_F2DATA1_FD3_Values<CAN1::F2DATA1, 3, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD4 = CAN1_F2DATA1_FD4_Values<CAN1::F2DATA1, 4, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD5 = CAN1_F2DATA1_FD5_Values<CAN1::F2DATA1, 5, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD6 = CAN1_F2DATA1_FD6_Values<CAN1::F2DATA1, 6, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD7 = CAN1_F2DATA1_FD7_Values<CAN1::F2DATA1, 7, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD8 = CAN1_F2DATA1_FD8_Values<CAN1::F2DATA1, 8, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD9 = CAN1_F2DATA1_FD9_Values<CAN1::F2DATA1, 9, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD10 = CAN1_F2DATA1_FD10_Values<CAN1::F2DATA1, 10, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD11 = CAN1_F2DATA1_FD11_Values<CAN1::F2DATA1, 11, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD12 = CAN1_F2DATA1_FD12_Values<CAN1::F2DATA1, 12, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD13 = CAN1_F2DATA1_FD13_Values<CAN1::F2DATA1, 13, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD14 = CAN1_F2DATA1_FD14_Values<CAN1::F2DATA1, 14, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD15 = CAN1_F2DATA1_FD15_Values<CAN1::F2DATA1, 15, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD16 = CAN1_F2DATA1_FD16_Values<CAN1::F2DATA1, 16, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD17 = CAN1_F2DATA1_FD17_Values<CAN1::F2DATA1, 17, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD18 = CAN1_F2DATA1_FD18_Values<CAN1::F2DATA1, 18, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD19 = CAN1_F2DATA1_FD19_Values<CAN1::F2DATA1, 19, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD20 = CAN1_F2DATA1_FD20_Values<CAN1::F2DATA1, 20, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD21 = CAN1_F2DATA1_FD21_Values<CAN1::F2DATA1, 21, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD22 = CAN1_F2DATA1_FD22_Values<CAN1::F2DATA1, 22, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD23 = CAN1_F2DATA1_FD23_Values<CAN1::F2DATA1, 23, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD24 = CAN1_F2DATA1_FD24_Values<CAN1::F2DATA1, 24, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD25 = CAN1_F2DATA1_FD25_Values<CAN1::F2DATA1, 25, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD26 = CAN1_F2DATA1_FD26_Values<CAN1::F2DATA1, 26, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD27 = CAN1_F2DATA1_FD27_Values<CAN1::F2DATA1, 27, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD28 = CAN1_F2DATA1_FD28_Values<CAN1::F2DATA1, 28, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD29 = CAN1_F2DATA1_FD29_Values<CAN1::F2DATA1, 29, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD30 = CAN1_F2DATA1_FD30_Values<CAN1::F2DATA1, 30, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FD31 = CAN1_F2DATA1_FD31_Values<CAN1::F2DATA1, 31, 1, ReadWriteMode, CAN1F2DATA1Base> ;
    using FieldValues = CAN1_F2DATA1_FD31_Values<CAN1::F2DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F2DATA1Pack  = Register<0x40006A54, 32, ReadWriteMode, CAN1F2DATA1Base, T...> ;

  struct CAN1F3DATA0Base {} ;

  struct F3DATA0 : public RegisterBase<0x40006A58, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F3DATA0_FD0_Values<CAN1::F3DATA0, 0, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD1 = CAN1_F3DATA0_FD1_Values<CAN1::F3DATA0, 1, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD2 = CAN1_F3DATA0_FD2_Values<CAN1::F3DATA0, 2, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD3 = CAN1_F3DATA0_FD3_Values<CAN1::F3DATA0, 3, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD4 = CAN1_F3DATA0_FD4_Values<CAN1::F3DATA0, 4, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD5 = CAN1_F3DATA0_FD5_Values<CAN1::F3DATA0, 5, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD6 = CAN1_F3DATA0_FD6_Values<CAN1::F3DATA0, 6, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD7 = CAN1_F3DATA0_FD7_Values<CAN1::F3DATA0, 7, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD8 = CAN1_F3DATA0_FD8_Values<CAN1::F3DATA0, 8, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD9 = CAN1_F3DATA0_FD9_Values<CAN1::F3DATA0, 9, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD10 = CAN1_F3DATA0_FD10_Values<CAN1::F3DATA0, 10, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD11 = CAN1_F3DATA0_FD11_Values<CAN1::F3DATA0, 11, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD12 = CAN1_F3DATA0_FD12_Values<CAN1::F3DATA0, 12, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD13 = CAN1_F3DATA0_FD13_Values<CAN1::F3DATA0, 13, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD14 = CAN1_F3DATA0_FD14_Values<CAN1::F3DATA0, 14, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD15 = CAN1_F3DATA0_FD15_Values<CAN1::F3DATA0, 15, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD16 = CAN1_F3DATA0_FD16_Values<CAN1::F3DATA0, 16, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD17 = CAN1_F3DATA0_FD17_Values<CAN1::F3DATA0, 17, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD18 = CAN1_F3DATA0_FD18_Values<CAN1::F3DATA0, 18, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD19 = CAN1_F3DATA0_FD19_Values<CAN1::F3DATA0, 19, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD20 = CAN1_F3DATA0_FD20_Values<CAN1::F3DATA0, 20, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD21 = CAN1_F3DATA0_FD21_Values<CAN1::F3DATA0, 21, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD22 = CAN1_F3DATA0_FD22_Values<CAN1::F3DATA0, 22, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD23 = CAN1_F3DATA0_FD23_Values<CAN1::F3DATA0, 23, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD24 = CAN1_F3DATA0_FD24_Values<CAN1::F3DATA0, 24, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD25 = CAN1_F3DATA0_FD25_Values<CAN1::F3DATA0, 25, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD26 = CAN1_F3DATA0_FD26_Values<CAN1::F3DATA0, 26, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD27 = CAN1_F3DATA0_FD27_Values<CAN1::F3DATA0, 27, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD28 = CAN1_F3DATA0_FD28_Values<CAN1::F3DATA0, 28, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD29 = CAN1_F3DATA0_FD29_Values<CAN1::F3DATA0, 29, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD30 = CAN1_F3DATA0_FD30_Values<CAN1::F3DATA0, 30, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FD31 = CAN1_F3DATA0_FD31_Values<CAN1::F3DATA0, 31, 1, ReadWriteMode, CAN1F3DATA0Base> ;
    using FieldValues = CAN1_F3DATA0_FD31_Values<CAN1::F3DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3DATA0Pack  = Register<0x40006A58, 32, ReadWriteMode, CAN1F3DATA0Base, T...> ;

  struct CAN1F3DATA1Base {} ;

  struct F3DATA1 : public RegisterBase<0x40006A5C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F3DATA1_FD0_Values<CAN1::F3DATA1, 0, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD1 = CAN1_F3DATA1_FD1_Values<CAN1::F3DATA1, 1, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD2 = CAN1_F3DATA1_FD2_Values<CAN1::F3DATA1, 2, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD3 = CAN1_F3DATA1_FD3_Values<CAN1::F3DATA1, 3, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD4 = CAN1_F3DATA1_FD4_Values<CAN1::F3DATA1, 4, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD5 = CAN1_F3DATA1_FD5_Values<CAN1::F3DATA1, 5, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD6 = CAN1_F3DATA1_FD6_Values<CAN1::F3DATA1, 6, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD7 = CAN1_F3DATA1_FD7_Values<CAN1::F3DATA1, 7, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD8 = CAN1_F3DATA1_FD8_Values<CAN1::F3DATA1, 8, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD9 = CAN1_F3DATA1_FD9_Values<CAN1::F3DATA1, 9, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD10 = CAN1_F3DATA1_FD10_Values<CAN1::F3DATA1, 10, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD11 = CAN1_F3DATA1_FD11_Values<CAN1::F3DATA1, 11, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD12 = CAN1_F3DATA1_FD12_Values<CAN1::F3DATA1, 12, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD13 = CAN1_F3DATA1_FD13_Values<CAN1::F3DATA1, 13, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD14 = CAN1_F3DATA1_FD14_Values<CAN1::F3DATA1, 14, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD15 = CAN1_F3DATA1_FD15_Values<CAN1::F3DATA1, 15, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD16 = CAN1_F3DATA1_FD16_Values<CAN1::F3DATA1, 16, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD17 = CAN1_F3DATA1_FD17_Values<CAN1::F3DATA1, 17, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD18 = CAN1_F3DATA1_FD18_Values<CAN1::F3DATA1, 18, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD19 = CAN1_F3DATA1_FD19_Values<CAN1::F3DATA1, 19, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD20 = CAN1_F3DATA1_FD20_Values<CAN1::F3DATA1, 20, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD21 = CAN1_F3DATA1_FD21_Values<CAN1::F3DATA1, 21, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD22 = CAN1_F3DATA1_FD22_Values<CAN1::F3DATA1, 22, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD23 = CAN1_F3DATA1_FD23_Values<CAN1::F3DATA1, 23, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD24 = CAN1_F3DATA1_FD24_Values<CAN1::F3DATA1, 24, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD25 = CAN1_F3DATA1_FD25_Values<CAN1::F3DATA1, 25, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD26 = CAN1_F3DATA1_FD26_Values<CAN1::F3DATA1, 26, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD27 = CAN1_F3DATA1_FD27_Values<CAN1::F3DATA1, 27, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD28 = CAN1_F3DATA1_FD28_Values<CAN1::F3DATA1, 28, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD29 = CAN1_F3DATA1_FD29_Values<CAN1::F3DATA1, 29, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD30 = CAN1_F3DATA1_FD30_Values<CAN1::F3DATA1, 30, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FD31 = CAN1_F3DATA1_FD31_Values<CAN1::F3DATA1, 31, 1, ReadWriteMode, CAN1F3DATA1Base> ;
    using FieldValues = CAN1_F3DATA1_FD31_Values<CAN1::F3DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F3DATA1Pack  = Register<0x40006A5C, 32, ReadWriteMode, CAN1F3DATA1Base, T...> ;

  struct CAN1F4DATA0Base {} ;

  struct F4DATA0 : public RegisterBase<0x40006A60, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F4DATA0_FD0_Values<CAN1::F4DATA0, 0, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD1 = CAN1_F4DATA0_FD1_Values<CAN1::F4DATA0, 1, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD2 = CAN1_F4DATA0_FD2_Values<CAN1::F4DATA0, 2, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD3 = CAN1_F4DATA0_FD3_Values<CAN1::F4DATA0, 3, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD4 = CAN1_F4DATA0_FD4_Values<CAN1::F4DATA0, 4, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD5 = CAN1_F4DATA0_FD5_Values<CAN1::F4DATA0, 5, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD6 = CAN1_F4DATA0_FD6_Values<CAN1::F4DATA0, 6, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD7 = CAN1_F4DATA0_FD7_Values<CAN1::F4DATA0, 7, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD8 = CAN1_F4DATA0_FD8_Values<CAN1::F4DATA0, 8, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD9 = CAN1_F4DATA0_FD9_Values<CAN1::F4DATA0, 9, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD10 = CAN1_F4DATA0_FD10_Values<CAN1::F4DATA0, 10, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD11 = CAN1_F4DATA0_FD11_Values<CAN1::F4DATA0, 11, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD12 = CAN1_F4DATA0_FD12_Values<CAN1::F4DATA0, 12, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD13 = CAN1_F4DATA0_FD13_Values<CAN1::F4DATA0, 13, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD14 = CAN1_F4DATA0_FD14_Values<CAN1::F4DATA0, 14, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD15 = CAN1_F4DATA0_FD15_Values<CAN1::F4DATA0, 15, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD16 = CAN1_F4DATA0_FD16_Values<CAN1::F4DATA0, 16, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD17 = CAN1_F4DATA0_FD17_Values<CAN1::F4DATA0, 17, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD18 = CAN1_F4DATA0_FD18_Values<CAN1::F4DATA0, 18, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD19 = CAN1_F4DATA0_FD19_Values<CAN1::F4DATA0, 19, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD20 = CAN1_F4DATA0_FD20_Values<CAN1::F4DATA0, 20, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD21 = CAN1_F4DATA0_FD21_Values<CAN1::F4DATA0, 21, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD22 = CAN1_F4DATA0_FD22_Values<CAN1::F4DATA0, 22, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD23 = CAN1_F4DATA0_FD23_Values<CAN1::F4DATA0, 23, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD24 = CAN1_F4DATA0_FD24_Values<CAN1::F4DATA0, 24, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD25 = CAN1_F4DATA0_FD25_Values<CAN1::F4DATA0, 25, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD26 = CAN1_F4DATA0_FD26_Values<CAN1::F4DATA0, 26, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD27 = CAN1_F4DATA0_FD27_Values<CAN1::F4DATA0, 27, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD28 = CAN1_F4DATA0_FD28_Values<CAN1::F4DATA0, 28, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD29 = CAN1_F4DATA0_FD29_Values<CAN1::F4DATA0, 29, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD30 = CAN1_F4DATA0_FD30_Values<CAN1::F4DATA0, 30, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FD31 = CAN1_F4DATA0_FD31_Values<CAN1::F4DATA0, 31, 1, ReadWriteMode, CAN1F4DATA0Base> ;
    using FieldValues = CAN1_F4DATA0_FD31_Values<CAN1::F4DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4DATA0Pack  = Register<0x40006A60, 32, ReadWriteMode, CAN1F4DATA0Base, T...> ;

  struct CAN1F4DATA1Base {} ;

  struct F4DATA1 : public RegisterBase<0x40006A64, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F4DATA1_FD0_Values<CAN1::F4DATA1, 0, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD1 = CAN1_F4DATA1_FD1_Values<CAN1::F4DATA1, 1, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD2 = CAN1_F4DATA1_FD2_Values<CAN1::F4DATA1, 2, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD3 = CAN1_F4DATA1_FD3_Values<CAN1::F4DATA1, 3, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD4 = CAN1_F4DATA1_FD4_Values<CAN1::F4DATA1, 4, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD5 = CAN1_F4DATA1_FD5_Values<CAN1::F4DATA1, 5, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD6 = CAN1_F4DATA1_FD6_Values<CAN1::F4DATA1, 6, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD7 = CAN1_F4DATA1_FD7_Values<CAN1::F4DATA1, 7, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD8 = CAN1_F4DATA1_FD8_Values<CAN1::F4DATA1, 8, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD9 = CAN1_F4DATA1_FD9_Values<CAN1::F4DATA1, 9, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD10 = CAN1_F4DATA1_FD10_Values<CAN1::F4DATA1, 10, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD11 = CAN1_F4DATA1_FD11_Values<CAN1::F4DATA1, 11, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD12 = CAN1_F4DATA1_FD12_Values<CAN1::F4DATA1, 12, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD13 = CAN1_F4DATA1_FD13_Values<CAN1::F4DATA1, 13, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD14 = CAN1_F4DATA1_FD14_Values<CAN1::F4DATA1, 14, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD15 = CAN1_F4DATA1_FD15_Values<CAN1::F4DATA1, 15, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD16 = CAN1_F4DATA1_FD16_Values<CAN1::F4DATA1, 16, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD17 = CAN1_F4DATA1_FD17_Values<CAN1::F4DATA1, 17, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD18 = CAN1_F4DATA1_FD18_Values<CAN1::F4DATA1, 18, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD19 = CAN1_F4DATA1_FD19_Values<CAN1::F4DATA1, 19, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD20 = CAN1_F4DATA1_FD20_Values<CAN1::F4DATA1, 20, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD21 = CAN1_F4DATA1_FD21_Values<CAN1::F4DATA1, 21, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD22 = CAN1_F4DATA1_FD22_Values<CAN1::F4DATA1, 22, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD23 = CAN1_F4DATA1_FD23_Values<CAN1::F4DATA1, 23, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD24 = CAN1_F4DATA1_FD24_Values<CAN1::F4DATA1, 24, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD25 = CAN1_F4DATA1_FD25_Values<CAN1::F4DATA1, 25, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD26 = CAN1_F4DATA1_FD26_Values<CAN1::F4DATA1, 26, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD27 = CAN1_F4DATA1_FD27_Values<CAN1::F4DATA1, 27, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD28 = CAN1_F4DATA1_FD28_Values<CAN1::F4DATA1, 28, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD29 = CAN1_F4DATA1_FD29_Values<CAN1::F4DATA1, 29, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD30 = CAN1_F4DATA1_FD30_Values<CAN1::F4DATA1, 30, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FD31 = CAN1_F4DATA1_FD31_Values<CAN1::F4DATA1, 31, 1, ReadWriteMode, CAN1F4DATA1Base> ;
    using FieldValues = CAN1_F4DATA1_FD31_Values<CAN1::F4DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F4DATA1Pack  = Register<0x40006A64, 32, ReadWriteMode, CAN1F4DATA1Base, T...> ;

  struct CAN1F5DATA0Base {} ;

  struct F5DATA0 : public RegisterBase<0x40006A68, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F5DATA0_FD0_Values<CAN1::F5DATA0, 0, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD1 = CAN1_F5DATA0_FD1_Values<CAN1::F5DATA0, 1, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD2 = CAN1_F5DATA0_FD2_Values<CAN1::F5DATA0, 2, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD3 = CAN1_F5DATA0_FD3_Values<CAN1::F5DATA0, 3, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD4 = CAN1_F5DATA0_FD4_Values<CAN1::F5DATA0, 4, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD5 = CAN1_F5DATA0_FD5_Values<CAN1::F5DATA0, 5, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD6 = CAN1_F5DATA0_FD6_Values<CAN1::F5DATA0, 6, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD7 = CAN1_F5DATA0_FD7_Values<CAN1::F5DATA0, 7, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD8 = CAN1_F5DATA0_FD8_Values<CAN1::F5DATA0, 8, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD9 = CAN1_F5DATA0_FD9_Values<CAN1::F5DATA0, 9, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD10 = CAN1_F5DATA0_FD10_Values<CAN1::F5DATA0, 10, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD11 = CAN1_F5DATA0_FD11_Values<CAN1::F5DATA0, 11, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD12 = CAN1_F5DATA0_FD12_Values<CAN1::F5DATA0, 12, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD13 = CAN1_F5DATA0_FD13_Values<CAN1::F5DATA0, 13, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD14 = CAN1_F5DATA0_FD14_Values<CAN1::F5DATA0, 14, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD15 = CAN1_F5DATA0_FD15_Values<CAN1::F5DATA0, 15, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD16 = CAN1_F5DATA0_FD16_Values<CAN1::F5DATA0, 16, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD17 = CAN1_F5DATA0_FD17_Values<CAN1::F5DATA0, 17, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD18 = CAN1_F5DATA0_FD18_Values<CAN1::F5DATA0, 18, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD19 = CAN1_F5DATA0_FD19_Values<CAN1::F5DATA0, 19, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD20 = CAN1_F5DATA0_FD20_Values<CAN1::F5DATA0, 20, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD21 = CAN1_F5DATA0_FD21_Values<CAN1::F5DATA0, 21, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD22 = CAN1_F5DATA0_FD22_Values<CAN1::F5DATA0, 22, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD23 = CAN1_F5DATA0_FD23_Values<CAN1::F5DATA0, 23, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD24 = CAN1_F5DATA0_FD24_Values<CAN1::F5DATA0, 24, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD25 = CAN1_F5DATA0_FD25_Values<CAN1::F5DATA0, 25, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD26 = CAN1_F5DATA0_FD26_Values<CAN1::F5DATA0, 26, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD27 = CAN1_F5DATA0_FD27_Values<CAN1::F5DATA0, 27, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD28 = CAN1_F5DATA0_FD28_Values<CAN1::F5DATA0, 28, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD29 = CAN1_F5DATA0_FD29_Values<CAN1::F5DATA0, 29, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD30 = CAN1_F5DATA0_FD30_Values<CAN1::F5DATA0, 30, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FD31 = CAN1_F5DATA0_FD31_Values<CAN1::F5DATA0, 31, 1, ReadWriteMode, CAN1F5DATA0Base> ;
    using FieldValues = CAN1_F5DATA0_FD31_Values<CAN1::F5DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5DATA0Pack  = Register<0x40006A68, 32, ReadWriteMode, CAN1F5DATA0Base, T...> ;

  struct CAN1F5DATA1Base {} ;

  struct F5DATA1 : public RegisterBase<0x40006A6C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F5DATA1_FD0_Values<CAN1::F5DATA1, 0, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD1 = CAN1_F5DATA1_FD1_Values<CAN1::F5DATA1, 1, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD2 = CAN1_F5DATA1_FD2_Values<CAN1::F5DATA1, 2, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD3 = CAN1_F5DATA1_FD3_Values<CAN1::F5DATA1, 3, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD4 = CAN1_F5DATA1_FD4_Values<CAN1::F5DATA1, 4, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD5 = CAN1_F5DATA1_FD5_Values<CAN1::F5DATA1, 5, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD6 = CAN1_F5DATA1_FD6_Values<CAN1::F5DATA1, 6, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD7 = CAN1_F5DATA1_FD7_Values<CAN1::F5DATA1, 7, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD8 = CAN1_F5DATA1_FD8_Values<CAN1::F5DATA1, 8, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD9 = CAN1_F5DATA1_FD9_Values<CAN1::F5DATA1, 9, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD10 = CAN1_F5DATA1_FD10_Values<CAN1::F5DATA1, 10, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD11 = CAN1_F5DATA1_FD11_Values<CAN1::F5DATA1, 11, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD12 = CAN1_F5DATA1_FD12_Values<CAN1::F5DATA1, 12, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD13 = CAN1_F5DATA1_FD13_Values<CAN1::F5DATA1, 13, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD14 = CAN1_F5DATA1_FD14_Values<CAN1::F5DATA1, 14, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD15 = CAN1_F5DATA1_FD15_Values<CAN1::F5DATA1, 15, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD16 = CAN1_F5DATA1_FD16_Values<CAN1::F5DATA1, 16, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD17 = CAN1_F5DATA1_FD17_Values<CAN1::F5DATA1, 17, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD18 = CAN1_F5DATA1_FD18_Values<CAN1::F5DATA1, 18, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD19 = CAN1_F5DATA1_FD19_Values<CAN1::F5DATA1, 19, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD20 = CAN1_F5DATA1_FD20_Values<CAN1::F5DATA1, 20, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD21 = CAN1_F5DATA1_FD21_Values<CAN1::F5DATA1, 21, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD22 = CAN1_F5DATA1_FD22_Values<CAN1::F5DATA1, 22, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD23 = CAN1_F5DATA1_FD23_Values<CAN1::F5DATA1, 23, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD24 = CAN1_F5DATA1_FD24_Values<CAN1::F5DATA1, 24, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD25 = CAN1_F5DATA1_FD25_Values<CAN1::F5DATA1, 25, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD26 = CAN1_F5DATA1_FD26_Values<CAN1::F5DATA1, 26, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD27 = CAN1_F5DATA1_FD27_Values<CAN1::F5DATA1, 27, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD28 = CAN1_F5DATA1_FD28_Values<CAN1::F5DATA1, 28, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD29 = CAN1_F5DATA1_FD29_Values<CAN1::F5DATA1, 29, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD30 = CAN1_F5DATA1_FD30_Values<CAN1::F5DATA1, 30, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FD31 = CAN1_F5DATA1_FD31_Values<CAN1::F5DATA1, 31, 1, ReadWriteMode, CAN1F5DATA1Base> ;
    using FieldValues = CAN1_F5DATA1_FD31_Values<CAN1::F5DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F5DATA1Pack  = Register<0x40006A6C, 32, ReadWriteMode, CAN1F5DATA1Base, T...> ;

  struct CAN1F6DATA0Base {} ;

  struct F6DATA0 : public RegisterBase<0x40006A70, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F6DATA0_FD0_Values<CAN1::F6DATA0, 0, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD1 = CAN1_F6DATA0_FD1_Values<CAN1::F6DATA0, 1, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD2 = CAN1_F6DATA0_FD2_Values<CAN1::F6DATA0, 2, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD3 = CAN1_F6DATA0_FD3_Values<CAN1::F6DATA0, 3, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD4 = CAN1_F6DATA0_FD4_Values<CAN1::F6DATA0, 4, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD5 = CAN1_F6DATA0_FD5_Values<CAN1::F6DATA0, 5, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD6 = CAN1_F6DATA0_FD6_Values<CAN1::F6DATA0, 6, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD7 = CAN1_F6DATA0_FD7_Values<CAN1::F6DATA0, 7, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD8 = CAN1_F6DATA0_FD8_Values<CAN1::F6DATA0, 8, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD9 = CAN1_F6DATA0_FD9_Values<CAN1::F6DATA0, 9, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD10 = CAN1_F6DATA0_FD10_Values<CAN1::F6DATA0, 10, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD11 = CAN1_F6DATA0_FD11_Values<CAN1::F6DATA0, 11, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD12 = CAN1_F6DATA0_FD12_Values<CAN1::F6DATA0, 12, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD13 = CAN1_F6DATA0_FD13_Values<CAN1::F6DATA0, 13, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD14 = CAN1_F6DATA0_FD14_Values<CAN1::F6DATA0, 14, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD15 = CAN1_F6DATA0_FD15_Values<CAN1::F6DATA0, 15, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD16 = CAN1_F6DATA0_FD16_Values<CAN1::F6DATA0, 16, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD17 = CAN1_F6DATA0_FD17_Values<CAN1::F6DATA0, 17, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD18 = CAN1_F6DATA0_FD18_Values<CAN1::F6DATA0, 18, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD19 = CAN1_F6DATA0_FD19_Values<CAN1::F6DATA0, 19, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD20 = CAN1_F6DATA0_FD20_Values<CAN1::F6DATA0, 20, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD21 = CAN1_F6DATA0_FD21_Values<CAN1::F6DATA0, 21, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD22 = CAN1_F6DATA0_FD22_Values<CAN1::F6DATA0, 22, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD23 = CAN1_F6DATA0_FD23_Values<CAN1::F6DATA0, 23, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD24 = CAN1_F6DATA0_FD24_Values<CAN1::F6DATA0, 24, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD25 = CAN1_F6DATA0_FD25_Values<CAN1::F6DATA0, 25, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD26 = CAN1_F6DATA0_FD26_Values<CAN1::F6DATA0, 26, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD27 = CAN1_F6DATA0_FD27_Values<CAN1::F6DATA0, 27, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD28 = CAN1_F6DATA0_FD28_Values<CAN1::F6DATA0, 28, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD29 = CAN1_F6DATA0_FD29_Values<CAN1::F6DATA0, 29, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD30 = CAN1_F6DATA0_FD30_Values<CAN1::F6DATA0, 30, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FD31 = CAN1_F6DATA0_FD31_Values<CAN1::F6DATA0, 31, 1, ReadWriteMode, CAN1F6DATA0Base> ;
    using FieldValues = CAN1_F6DATA0_FD31_Values<CAN1::F6DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6DATA0Pack  = Register<0x40006A70, 32, ReadWriteMode, CAN1F6DATA0Base, T...> ;

  struct CAN1F6DATA1Base {} ;

  struct F6DATA1 : public RegisterBase<0x40006A74, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F6DATA1_FD0_Values<CAN1::F6DATA1, 0, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD1 = CAN1_F6DATA1_FD1_Values<CAN1::F6DATA1, 1, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD2 = CAN1_F6DATA1_FD2_Values<CAN1::F6DATA1, 2, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD3 = CAN1_F6DATA1_FD3_Values<CAN1::F6DATA1, 3, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD4 = CAN1_F6DATA1_FD4_Values<CAN1::F6DATA1, 4, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD5 = CAN1_F6DATA1_FD5_Values<CAN1::F6DATA1, 5, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD6 = CAN1_F6DATA1_FD6_Values<CAN1::F6DATA1, 6, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD7 = CAN1_F6DATA1_FD7_Values<CAN1::F6DATA1, 7, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD8 = CAN1_F6DATA1_FD8_Values<CAN1::F6DATA1, 8, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD9 = CAN1_F6DATA1_FD9_Values<CAN1::F6DATA1, 9, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD10 = CAN1_F6DATA1_FD10_Values<CAN1::F6DATA1, 10, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD11 = CAN1_F6DATA1_FD11_Values<CAN1::F6DATA1, 11, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD12 = CAN1_F6DATA1_FD12_Values<CAN1::F6DATA1, 12, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD13 = CAN1_F6DATA1_FD13_Values<CAN1::F6DATA1, 13, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD14 = CAN1_F6DATA1_FD14_Values<CAN1::F6DATA1, 14, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD15 = CAN1_F6DATA1_FD15_Values<CAN1::F6DATA1, 15, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD16 = CAN1_F6DATA1_FD16_Values<CAN1::F6DATA1, 16, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD17 = CAN1_F6DATA1_FD17_Values<CAN1::F6DATA1, 17, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD18 = CAN1_F6DATA1_FD18_Values<CAN1::F6DATA1, 18, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD19 = CAN1_F6DATA1_FD19_Values<CAN1::F6DATA1, 19, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD20 = CAN1_F6DATA1_FD20_Values<CAN1::F6DATA1, 20, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD21 = CAN1_F6DATA1_FD21_Values<CAN1::F6DATA1, 21, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD22 = CAN1_F6DATA1_FD22_Values<CAN1::F6DATA1, 22, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD23 = CAN1_F6DATA1_FD23_Values<CAN1::F6DATA1, 23, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD24 = CAN1_F6DATA1_FD24_Values<CAN1::F6DATA1, 24, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD25 = CAN1_F6DATA1_FD25_Values<CAN1::F6DATA1, 25, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD26 = CAN1_F6DATA1_FD26_Values<CAN1::F6DATA1, 26, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD27 = CAN1_F6DATA1_FD27_Values<CAN1::F6DATA1, 27, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD28 = CAN1_F6DATA1_FD28_Values<CAN1::F6DATA1, 28, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD29 = CAN1_F6DATA1_FD29_Values<CAN1::F6DATA1, 29, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD30 = CAN1_F6DATA1_FD30_Values<CAN1::F6DATA1, 30, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FD31 = CAN1_F6DATA1_FD31_Values<CAN1::F6DATA1, 31, 1, ReadWriteMode, CAN1F6DATA1Base> ;
    using FieldValues = CAN1_F6DATA1_FD31_Values<CAN1::F6DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F6DATA1Pack  = Register<0x40006A74, 32, ReadWriteMode, CAN1F6DATA1Base, T...> ;

  struct CAN1F7DATA0Base {} ;

  struct F7DATA0 : public RegisterBase<0x40006A78, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F7DATA0_FD0_Values<CAN1::F7DATA0, 0, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD1 = CAN1_F7DATA0_FD1_Values<CAN1::F7DATA0, 1, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD2 = CAN1_F7DATA0_FD2_Values<CAN1::F7DATA0, 2, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD3 = CAN1_F7DATA0_FD3_Values<CAN1::F7DATA0, 3, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD4 = CAN1_F7DATA0_FD4_Values<CAN1::F7DATA0, 4, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD5 = CAN1_F7DATA0_FD5_Values<CAN1::F7DATA0, 5, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD6 = CAN1_F7DATA0_FD6_Values<CAN1::F7DATA0, 6, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD7 = CAN1_F7DATA0_FD7_Values<CAN1::F7DATA0, 7, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD8 = CAN1_F7DATA0_FD8_Values<CAN1::F7DATA0, 8, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD9 = CAN1_F7DATA0_FD9_Values<CAN1::F7DATA0, 9, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD10 = CAN1_F7DATA0_FD10_Values<CAN1::F7DATA0, 10, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD11 = CAN1_F7DATA0_FD11_Values<CAN1::F7DATA0, 11, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD12 = CAN1_F7DATA0_FD12_Values<CAN1::F7DATA0, 12, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD13 = CAN1_F7DATA0_FD13_Values<CAN1::F7DATA0, 13, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD14 = CAN1_F7DATA0_FD14_Values<CAN1::F7DATA0, 14, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD15 = CAN1_F7DATA0_FD15_Values<CAN1::F7DATA0, 15, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD16 = CAN1_F7DATA0_FD16_Values<CAN1::F7DATA0, 16, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD17 = CAN1_F7DATA0_FD17_Values<CAN1::F7DATA0, 17, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD18 = CAN1_F7DATA0_FD18_Values<CAN1::F7DATA0, 18, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD19 = CAN1_F7DATA0_FD19_Values<CAN1::F7DATA0, 19, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD20 = CAN1_F7DATA0_FD20_Values<CAN1::F7DATA0, 20, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD21 = CAN1_F7DATA0_FD21_Values<CAN1::F7DATA0, 21, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD22 = CAN1_F7DATA0_FD22_Values<CAN1::F7DATA0, 22, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD23 = CAN1_F7DATA0_FD23_Values<CAN1::F7DATA0, 23, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD24 = CAN1_F7DATA0_FD24_Values<CAN1::F7DATA0, 24, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD25 = CAN1_F7DATA0_FD25_Values<CAN1::F7DATA0, 25, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD26 = CAN1_F7DATA0_FD26_Values<CAN1::F7DATA0, 26, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD27 = CAN1_F7DATA0_FD27_Values<CAN1::F7DATA0, 27, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD28 = CAN1_F7DATA0_FD28_Values<CAN1::F7DATA0, 28, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD29 = CAN1_F7DATA0_FD29_Values<CAN1::F7DATA0, 29, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD30 = CAN1_F7DATA0_FD30_Values<CAN1::F7DATA0, 30, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FD31 = CAN1_F7DATA0_FD31_Values<CAN1::F7DATA0, 31, 1, ReadWriteMode, CAN1F7DATA0Base> ;
    using FieldValues = CAN1_F7DATA0_FD31_Values<CAN1::F7DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7DATA0Pack  = Register<0x40006A78, 32, ReadWriteMode, CAN1F7DATA0Base, T...> ;

  struct CAN1F7DATA1Base {} ;

  struct F7DATA1 : public RegisterBase<0x40006A7C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F7DATA1_FD0_Values<CAN1::F7DATA1, 0, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD1 = CAN1_F7DATA1_FD1_Values<CAN1::F7DATA1, 1, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD2 = CAN1_F7DATA1_FD2_Values<CAN1::F7DATA1, 2, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD3 = CAN1_F7DATA1_FD3_Values<CAN1::F7DATA1, 3, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD4 = CAN1_F7DATA1_FD4_Values<CAN1::F7DATA1, 4, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD5 = CAN1_F7DATA1_FD5_Values<CAN1::F7DATA1, 5, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD6 = CAN1_F7DATA1_FD6_Values<CAN1::F7DATA1, 6, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD7 = CAN1_F7DATA1_FD7_Values<CAN1::F7DATA1, 7, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD8 = CAN1_F7DATA1_FD8_Values<CAN1::F7DATA1, 8, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD9 = CAN1_F7DATA1_FD9_Values<CAN1::F7DATA1, 9, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD10 = CAN1_F7DATA1_FD10_Values<CAN1::F7DATA1, 10, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD11 = CAN1_F7DATA1_FD11_Values<CAN1::F7DATA1, 11, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD12 = CAN1_F7DATA1_FD12_Values<CAN1::F7DATA1, 12, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD13 = CAN1_F7DATA1_FD13_Values<CAN1::F7DATA1, 13, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD14 = CAN1_F7DATA1_FD14_Values<CAN1::F7DATA1, 14, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD15 = CAN1_F7DATA1_FD15_Values<CAN1::F7DATA1, 15, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD16 = CAN1_F7DATA1_FD16_Values<CAN1::F7DATA1, 16, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD17 = CAN1_F7DATA1_FD17_Values<CAN1::F7DATA1, 17, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD18 = CAN1_F7DATA1_FD18_Values<CAN1::F7DATA1, 18, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD19 = CAN1_F7DATA1_FD19_Values<CAN1::F7DATA1, 19, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD20 = CAN1_F7DATA1_FD20_Values<CAN1::F7DATA1, 20, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD21 = CAN1_F7DATA1_FD21_Values<CAN1::F7DATA1, 21, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD22 = CAN1_F7DATA1_FD22_Values<CAN1::F7DATA1, 22, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD23 = CAN1_F7DATA1_FD23_Values<CAN1::F7DATA1, 23, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD24 = CAN1_F7DATA1_FD24_Values<CAN1::F7DATA1, 24, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD25 = CAN1_F7DATA1_FD25_Values<CAN1::F7DATA1, 25, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD26 = CAN1_F7DATA1_FD26_Values<CAN1::F7DATA1, 26, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD27 = CAN1_F7DATA1_FD27_Values<CAN1::F7DATA1, 27, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD28 = CAN1_F7DATA1_FD28_Values<CAN1::F7DATA1, 28, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD29 = CAN1_F7DATA1_FD29_Values<CAN1::F7DATA1, 29, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD30 = CAN1_F7DATA1_FD30_Values<CAN1::F7DATA1, 30, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FD31 = CAN1_F7DATA1_FD31_Values<CAN1::F7DATA1, 31, 1, ReadWriteMode, CAN1F7DATA1Base> ;
    using FieldValues = CAN1_F7DATA1_FD31_Values<CAN1::F7DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F7DATA1Pack  = Register<0x40006A7C, 32, ReadWriteMode, CAN1F7DATA1Base, T...> ;

  struct CAN1F8DATA0Base {} ;

  struct F8DATA0 : public RegisterBase<0x40006A80, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F8DATA0_FD0_Values<CAN1::F8DATA0, 0, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD1 = CAN1_F8DATA0_FD1_Values<CAN1::F8DATA0, 1, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD2 = CAN1_F8DATA0_FD2_Values<CAN1::F8DATA0, 2, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD3 = CAN1_F8DATA0_FD3_Values<CAN1::F8DATA0, 3, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD4 = CAN1_F8DATA0_FD4_Values<CAN1::F8DATA0, 4, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD5 = CAN1_F8DATA0_FD5_Values<CAN1::F8DATA0, 5, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD6 = CAN1_F8DATA0_FD6_Values<CAN1::F8DATA0, 6, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD7 = CAN1_F8DATA0_FD7_Values<CAN1::F8DATA0, 7, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD8 = CAN1_F8DATA0_FD8_Values<CAN1::F8DATA0, 8, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD9 = CAN1_F8DATA0_FD9_Values<CAN1::F8DATA0, 9, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD10 = CAN1_F8DATA0_FD10_Values<CAN1::F8DATA0, 10, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD11 = CAN1_F8DATA0_FD11_Values<CAN1::F8DATA0, 11, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD12 = CAN1_F8DATA0_FD12_Values<CAN1::F8DATA0, 12, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD13 = CAN1_F8DATA0_FD13_Values<CAN1::F8DATA0, 13, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD14 = CAN1_F8DATA0_FD14_Values<CAN1::F8DATA0, 14, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD15 = CAN1_F8DATA0_FD15_Values<CAN1::F8DATA0, 15, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD16 = CAN1_F8DATA0_FD16_Values<CAN1::F8DATA0, 16, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD17 = CAN1_F8DATA0_FD17_Values<CAN1::F8DATA0, 17, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD18 = CAN1_F8DATA0_FD18_Values<CAN1::F8DATA0, 18, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD19 = CAN1_F8DATA0_FD19_Values<CAN1::F8DATA0, 19, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD20 = CAN1_F8DATA0_FD20_Values<CAN1::F8DATA0, 20, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD21 = CAN1_F8DATA0_FD21_Values<CAN1::F8DATA0, 21, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD22 = CAN1_F8DATA0_FD22_Values<CAN1::F8DATA0, 22, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD23 = CAN1_F8DATA0_FD23_Values<CAN1::F8DATA0, 23, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD24 = CAN1_F8DATA0_FD24_Values<CAN1::F8DATA0, 24, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD25 = CAN1_F8DATA0_FD25_Values<CAN1::F8DATA0, 25, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD26 = CAN1_F8DATA0_FD26_Values<CAN1::F8DATA0, 26, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD27 = CAN1_F8DATA0_FD27_Values<CAN1::F8DATA0, 27, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD28 = CAN1_F8DATA0_FD28_Values<CAN1::F8DATA0, 28, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD29 = CAN1_F8DATA0_FD29_Values<CAN1::F8DATA0, 29, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD30 = CAN1_F8DATA0_FD30_Values<CAN1::F8DATA0, 30, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FD31 = CAN1_F8DATA0_FD31_Values<CAN1::F8DATA0, 31, 1, ReadWriteMode, CAN1F8DATA0Base> ;
    using FieldValues = CAN1_F8DATA0_FD31_Values<CAN1::F8DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8DATA0Pack  = Register<0x40006A80, 32, ReadWriteMode, CAN1F8DATA0Base, T...> ;

  struct CAN1F8DATA1Base {} ;

  struct F8DATA1 : public RegisterBase<0x40006A84, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F8DATA1_FD0_Values<CAN1::F8DATA1, 0, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD1 = CAN1_F8DATA1_FD1_Values<CAN1::F8DATA1, 1, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD2 = CAN1_F8DATA1_FD2_Values<CAN1::F8DATA1, 2, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD3 = CAN1_F8DATA1_FD3_Values<CAN1::F8DATA1, 3, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD4 = CAN1_F8DATA1_FD4_Values<CAN1::F8DATA1, 4, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD5 = CAN1_F8DATA1_FD5_Values<CAN1::F8DATA1, 5, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD6 = CAN1_F8DATA1_FD6_Values<CAN1::F8DATA1, 6, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD7 = CAN1_F8DATA1_FD7_Values<CAN1::F8DATA1, 7, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD8 = CAN1_F8DATA1_FD8_Values<CAN1::F8DATA1, 8, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD9 = CAN1_F8DATA1_FD9_Values<CAN1::F8DATA1, 9, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD10 = CAN1_F8DATA1_FD10_Values<CAN1::F8DATA1, 10, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD11 = CAN1_F8DATA1_FD11_Values<CAN1::F8DATA1, 11, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD12 = CAN1_F8DATA1_FD12_Values<CAN1::F8DATA1, 12, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD13 = CAN1_F8DATA1_FD13_Values<CAN1::F8DATA1, 13, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD14 = CAN1_F8DATA1_FD14_Values<CAN1::F8DATA1, 14, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD15 = CAN1_F8DATA1_FD15_Values<CAN1::F8DATA1, 15, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD16 = CAN1_F8DATA1_FD16_Values<CAN1::F8DATA1, 16, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD17 = CAN1_F8DATA1_FD17_Values<CAN1::F8DATA1, 17, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD18 = CAN1_F8DATA1_FD18_Values<CAN1::F8DATA1, 18, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD19 = CAN1_F8DATA1_FD19_Values<CAN1::F8DATA1, 19, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD20 = CAN1_F8DATA1_FD20_Values<CAN1::F8DATA1, 20, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD21 = CAN1_F8DATA1_FD21_Values<CAN1::F8DATA1, 21, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD22 = CAN1_F8DATA1_FD22_Values<CAN1::F8DATA1, 22, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD23 = CAN1_F8DATA1_FD23_Values<CAN1::F8DATA1, 23, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD24 = CAN1_F8DATA1_FD24_Values<CAN1::F8DATA1, 24, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD25 = CAN1_F8DATA1_FD25_Values<CAN1::F8DATA1, 25, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD26 = CAN1_F8DATA1_FD26_Values<CAN1::F8DATA1, 26, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD27 = CAN1_F8DATA1_FD27_Values<CAN1::F8DATA1, 27, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD28 = CAN1_F8DATA1_FD28_Values<CAN1::F8DATA1, 28, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD29 = CAN1_F8DATA1_FD29_Values<CAN1::F8DATA1, 29, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD30 = CAN1_F8DATA1_FD30_Values<CAN1::F8DATA1, 30, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FD31 = CAN1_F8DATA1_FD31_Values<CAN1::F8DATA1, 31, 1, ReadWriteMode, CAN1F8DATA1Base> ;
    using FieldValues = CAN1_F8DATA1_FD31_Values<CAN1::F8DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F8DATA1Pack  = Register<0x40006A84, 32, ReadWriteMode, CAN1F8DATA1Base, T...> ;

  struct CAN1F9DATA0Base {} ;

  struct F9DATA0 : public RegisterBase<0x40006A88, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F9DATA0_FD0_Values<CAN1::F9DATA0, 0, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD1 = CAN1_F9DATA0_FD1_Values<CAN1::F9DATA0, 1, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD2 = CAN1_F9DATA0_FD2_Values<CAN1::F9DATA0, 2, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD3 = CAN1_F9DATA0_FD3_Values<CAN1::F9DATA0, 3, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD4 = CAN1_F9DATA0_FD4_Values<CAN1::F9DATA0, 4, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD5 = CAN1_F9DATA0_FD5_Values<CAN1::F9DATA0, 5, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD6 = CAN1_F9DATA0_FD6_Values<CAN1::F9DATA0, 6, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD7 = CAN1_F9DATA0_FD7_Values<CAN1::F9DATA0, 7, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD8 = CAN1_F9DATA0_FD8_Values<CAN1::F9DATA0, 8, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD9 = CAN1_F9DATA0_FD9_Values<CAN1::F9DATA0, 9, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD10 = CAN1_F9DATA0_FD10_Values<CAN1::F9DATA0, 10, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD11 = CAN1_F9DATA0_FD11_Values<CAN1::F9DATA0, 11, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD12 = CAN1_F9DATA0_FD12_Values<CAN1::F9DATA0, 12, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD13 = CAN1_F9DATA0_FD13_Values<CAN1::F9DATA0, 13, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD14 = CAN1_F9DATA0_FD14_Values<CAN1::F9DATA0, 14, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD15 = CAN1_F9DATA0_FD15_Values<CAN1::F9DATA0, 15, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD16 = CAN1_F9DATA0_FD16_Values<CAN1::F9DATA0, 16, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD17 = CAN1_F9DATA0_FD17_Values<CAN1::F9DATA0, 17, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD18 = CAN1_F9DATA0_FD18_Values<CAN1::F9DATA0, 18, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD19 = CAN1_F9DATA0_FD19_Values<CAN1::F9DATA0, 19, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD20 = CAN1_F9DATA0_FD20_Values<CAN1::F9DATA0, 20, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD21 = CAN1_F9DATA0_FD21_Values<CAN1::F9DATA0, 21, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD22 = CAN1_F9DATA0_FD22_Values<CAN1::F9DATA0, 22, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD23 = CAN1_F9DATA0_FD23_Values<CAN1::F9DATA0, 23, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD24 = CAN1_F9DATA0_FD24_Values<CAN1::F9DATA0, 24, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD25 = CAN1_F9DATA0_FD25_Values<CAN1::F9DATA0, 25, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD26 = CAN1_F9DATA0_FD26_Values<CAN1::F9DATA0, 26, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD27 = CAN1_F9DATA0_FD27_Values<CAN1::F9DATA0, 27, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD28 = CAN1_F9DATA0_FD28_Values<CAN1::F9DATA0, 28, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD29 = CAN1_F9DATA0_FD29_Values<CAN1::F9DATA0, 29, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD30 = CAN1_F9DATA0_FD30_Values<CAN1::F9DATA0, 30, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FD31 = CAN1_F9DATA0_FD31_Values<CAN1::F9DATA0, 31, 1, ReadWriteMode, CAN1F9DATA0Base> ;
    using FieldValues = CAN1_F9DATA0_FD31_Values<CAN1::F9DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9DATA0Pack  = Register<0x40006A88, 32, ReadWriteMode, CAN1F9DATA0Base, T...> ;

  struct CAN1F9DATA1Base {} ;

  struct F9DATA1 : public RegisterBase<0x40006A8C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F9DATA1_FD0_Values<CAN1::F9DATA1, 0, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD1 = CAN1_F9DATA1_FD1_Values<CAN1::F9DATA1, 1, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD2 = CAN1_F9DATA1_FD2_Values<CAN1::F9DATA1, 2, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD3 = CAN1_F9DATA1_FD3_Values<CAN1::F9DATA1, 3, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD4 = CAN1_F9DATA1_FD4_Values<CAN1::F9DATA1, 4, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD5 = CAN1_F9DATA1_FD5_Values<CAN1::F9DATA1, 5, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD6 = CAN1_F9DATA1_FD6_Values<CAN1::F9DATA1, 6, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD7 = CAN1_F9DATA1_FD7_Values<CAN1::F9DATA1, 7, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD8 = CAN1_F9DATA1_FD8_Values<CAN1::F9DATA1, 8, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD9 = CAN1_F9DATA1_FD9_Values<CAN1::F9DATA1, 9, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD10 = CAN1_F9DATA1_FD10_Values<CAN1::F9DATA1, 10, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD11 = CAN1_F9DATA1_FD11_Values<CAN1::F9DATA1, 11, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD12 = CAN1_F9DATA1_FD12_Values<CAN1::F9DATA1, 12, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD13 = CAN1_F9DATA1_FD13_Values<CAN1::F9DATA1, 13, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD14 = CAN1_F9DATA1_FD14_Values<CAN1::F9DATA1, 14, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD15 = CAN1_F9DATA1_FD15_Values<CAN1::F9DATA1, 15, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD16 = CAN1_F9DATA1_FD16_Values<CAN1::F9DATA1, 16, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD17 = CAN1_F9DATA1_FD17_Values<CAN1::F9DATA1, 17, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD18 = CAN1_F9DATA1_FD18_Values<CAN1::F9DATA1, 18, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD19 = CAN1_F9DATA1_FD19_Values<CAN1::F9DATA1, 19, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD20 = CAN1_F9DATA1_FD20_Values<CAN1::F9DATA1, 20, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD21 = CAN1_F9DATA1_FD21_Values<CAN1::F9DATA1, 21, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD22 = CAN1_F9DATA1_FD22_Values<CAN1::F9DATA1, 22, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD23 = CAN1_F9DATA1_FD23_Values<CAN1::F9DATA1, 23, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD24 = CAN1_F9DATA1_FD24_Values<CAN1::F9DATA1, 24, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD25 = CAN1_F9DATA1_FD25_Values<CAN1::F9DATA1, 25, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD26 = CAN1_F9DATA1_FD26_Values<CAN1::F9DATA1, 26, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD27 = CAN1_F9DATA1_FD27_Values<CAN1::F9DATA1, 27, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD28 = CAN1_F9DATA1_FD28_Values<CAN1::F9DATA1, 28, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD29 = CAN1_F9DATA1_FD29_Values<CAN1::F9DATA1, 29, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD30 = CAN1_F9DATA1_FD30_Values<CAN1::F9DATA1, 30, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FD31 = CAN1_F9DATA1_FD31_Values<CAN1::F9DATA1, 31, 1, ReadWriteMode, CAN1F9DATA1Base> ;
    using FieldValues = CAN1_F9DATA1_FD31_Values<CAN1::F9DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F9DATA1Pack  = Register<0x40006A8C, 32, ReadWriteMode, CAN1F9DATA1Base, T...> ;

  struct CAN1F10DATA0Base {} ;

  struct F10DATA0 : public RegisterBase<0x40006A90, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F10DATA0_FD0_Values<CAN1::F10DATA0, 0, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD1 = CAN1_F10DATA0_FD1_Values<CAN1::F10DATA0, 1, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD2 = CAN1_F10DATA0_FD2_Values<CAN1::F10DATA0, 2, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD3 = CAN1_F10DATA0_FD3_Values<CAN1::F10DATA0, 3, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD4 = CAN1_F10DATA0_FD4_Values<CAN1::F10DATA0, 4, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD5 = CAN1_F10DATA0_FD5_Values<CAN1::F10DATA0, 5, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD6 = CAN1_F10DATA0_FD6_Values<CAN1::F10DATA0, 6, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD7 = CAN1_F10DATA0_FD7_Values<CAN1::F10DATA0, 7, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD8 = CAN1_F10DATA0_FD8_Values<CAN1::F10DATA0, 8, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD9 = CAN1_F10DATA0_FD9_Values<CAN1::F10DATA0, 9, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD10 = CAN1_F10DATA0_FD10_Values<CAN1::F10DATA0, 10, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD11 = CAN1_F10DATA0_FD11_Values<CAN1::F10DATA0, 11, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD12 = CAN1_F10DATA0_FD12_Values<CAN1::F10DATA0, 12, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD13 = CAN1_F10DATA0_FD13_Values<CAN1::F10DATA0, 13, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD14 = CAN1_F10DATA0_FD14_Values<CAN1::F10DATA0, 14, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD15 = CAN1_F10DATA0_FD15_Values<CAN1::F10DATA0, 15, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD16 = CAN1_F10DATA0_FD16_Values<CAN1::F10DATA0, 16, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD17 = CAN1_F10DATA0_FD17_Values<CAN1::F10DATA0, 17, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD18 = CAN1_F10DATA0_FD18_Values<CAN1::F10DATA0, 18, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD19 = CAN1_F10DATA0_FD19_Values<CAN1::F10DATA0, 19, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD20 = CAN1_F10DATA0_FD20_Values<CAN1::F10DATA0, 20, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD21 = CAN1_F10DATA0_FD21_Values<CAN1::F10DATA0, 21, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD22 = CAN1_F10DATA0_FD22_Values<CAN1::F10DATA0, 22, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD23 = CAN1_F10DATA0_FD23_Values<CAN1::F10DATA0, 23, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD24 = CAN1_F10DATA0_FD24_Values<CAN1::F10DATA0, 24, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD25 = CAN1_F10DATA0_FD25_Values<CAN1::F10DATA0, 25, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD26 = CAN1_F10DATA0_FD26_Values<CAN1::F10DATA0, 26, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD27 = CAN1_F10DATA0_FD27_Values<CAN1::F10DATA0, 27, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD28 = CAN1_F10DATA0_FD28_Values<CAN1::F10DATA0, 28, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD29 = CAN1_F10DATA0_FD29_Values<CAN1::F10DATA0, 29, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD30 = CAN1_F10DATA0_FD30_Values<CAN1::F10DATA0, 30, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FD31 = CAN1_F10DATA0_FD31_Values<CAN1::F10DATA0, 31, 1, ReadWriteMode, CAN1F10DATA0Base> ;
    using FieldValues = CAN1_F10DATA0_FD31_Values<CAN1::F10DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10DATA0Pack  = Register<0x40006A90, 32, ReadWriteMode, CAN1F10DATA0Base, T...> ;

  struct CAN1F10DATA1Base {} ;

  struct F10DATA1 : public RegisterBase<0x40006A94, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F10DATA1_FD0_Values<CAN1::F10DATA1, 0, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD1 = CAN1_F10DATA1_FD1_Values<CAN1::F10DATA1, 1, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD2 = CAN1_F10DATA1_FD2_Values<CAN1::F10DATA1, 2, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD3 = CAN1_F10DATA1_FD3_Values<CAN1::F10DATA1, 3, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD4 = CAN1_F10DATA1_FD4_Values<CAN1::F10DATA1, 4, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD5 = CAN1_F10DATA1_FD5_Values<CAN1::F10DATA1, 5, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD6 = CAN1_F10DATA1_FD6_Values<CAN1::F10DATA1, 6, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD7 = CAN1_F10DATA1_FD7_Values<CAN1::F10DATA1, 7, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD8 = CAN1_F10DATA1_FD8_Values<CAN1::F10DATA1, 8, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD9 = CAN1_F10DATA1_FD9_Values<CAN1::F10DATA1, 9, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD10 = CAN1_F10DATA1_FD10_Values<CAN1::F10DATA1, 10, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD11 = CAN1_F10DATA1_FD11_Values<CAN1::F10DATA1, 11, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD12 = CAN1_F10DATA1_FD12_Values<CAN1::F10DATA1, 12, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD13 = CAN1_F10DATA1_FD13_Values<CAN1::F10DATA1, 13, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD14 = CAN1_F10DATA1_FD14_Values<CAN1::F10DATA1, 14, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD15 = CAN1_F10DATA1_FD15_Values<CAN1::F10DATA1, 15, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD16 = CAN1_F10DATA1_FD16_Values<CAN1::F10DATA1, 16, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD17 = CAN1_F10DATA1_FD17_Values<CAN1::F10DATA1, 17, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD18 = CAN1_F10DATA1_FD18_Values<CAN1::F10DATA1, 18, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD19 = CAN1_F10DATA1_FD19_Values<CAN1::F10DATA1, 19, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD20 = CAN1_F10DATA1_FD20_Values<CAN1::F10DATA1, 20, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD21 = CAN1_F10DATA1_FD21_Values<CAN1::F10DATA1, 21, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD22 = CAN1_F10DATA1_FD22_Values<CAN1::F10DATA1, 22, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD23 = CAN1_F10DATA1_FD23_Values<CAN1::F10DATA1, 23, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD24 = CAN1_F10DATA1_FD24_Values<CAN1::F10DATA1, 24, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD25 = CAN1_F10DATA1_FD25_Values<CAN1::F10DATA1, 25, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD26 = CAN1_F10DATA1_FD26_Values<CAN1::F10DATA1, 26, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD27 = CAN1_F10DATA1_FD27_Values<CAN1::F10DATA1, 27, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD28 = CAN1_F10DATA1_FD28_Values<CAN1::F10DATA1, 28, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD29 = CAN1_F10DATA1_FD29_Values<CAN1::F10DATA1, 29, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD30 = CAN1_F10DATA1_FD30_Values<CAN1::F10DATA1, 30, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FD31 = CAN1_F10DATA1_FD31_Values<CAN1::F10DATA1, 31, 1, ReadWriteMode, CAN1F10DATA1Base> ;
    using FieldValues = CAN1_F10DATA1_FD31_Values<CAN1::F10DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F10DATA1Pack  = Register<0x40006A94, 32, ReadWriteMode, CAN1F10DATA1Base, T...> ;

  struct CAN1F11DATA0Base {} ;

  struct F11DATA0 : public RegisterBase<0x40006A98, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F11DATA0_FD0_Values<CAN1::F11DATA0, 0, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD1 = CAN1_F11DATA0_FD1_Values<CAN1::F11DATA0, 1, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD2 = CAN1_F11DATA0_FD2_Values<CAN1::F11DATA0, 2, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD3 = CAN1_F11DATA0_FD3_Values<CAN1::F11DATA0, 3, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD4 = CAN1_F11DATA0_FD4_Values<CAN1::F11DATA0, 4, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD5 = CAN1_F11DATA0_FD5_Values<CAN1::F11DATA0, 5, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD6 = CAN1_F11DATA0_FD6_Values<CAN1::F11DATA0, 6, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD7 = CAN1_F11DATA0_FD7_Values<CAN1::F11DATA0, 7, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD8 = CAN1_F11DATA0_FD8_Values<CAN1::F11DATA0, 8, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD9 = CAN1_F11DATA0_FD9_Values<CAN1::F11DATA0, 9, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD10 = CAN1_F11DATA0_FD10_Values<CAN1::F11DATA0, 10, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD11 = CAN1_F11DATA0_FD11_Values<CAN1::F11DATA0, 11, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD12 = CAN1_F11DATA0_FD12_Values<CAN1::F11DATA0, 12, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD13 = CAN1_F11DATA0_FD13_Values<CAN1::F11DATA0, 13, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD14 = CAN1_F11DATA0_FD14_Values<CAN1::F11DATA0, 14, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD15 = CAN1_F11DATA0_FD15_Values<CAN1::F11DATA0, 15, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD16 = CAN1_F11DATA0_FD16_Values<CAN1::F11DATA0, 16, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD17 = CAN1_F11DATA0_FD17_Values<CAN1::F11DATA0, 17, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD18 = CAN1_F11DATA0_FD18_Values<CAN1::F11DATA0, 18, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD19 = CAN1_F11DATA0_FD19_Values<CAN1::F11DATA0, 19, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD20 = CAN1_F11DATA0_FD20_Values<CAN1::F11DATA0, 20, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD21 = CAN1_F11DATA0_FD21_Values<CAN1::F11DATA0, 21, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD22 = CAN1_F11DATA0_FD22_Values<CAN1::F11DATA0, 22, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD23 = CAN1_F11DATA0_FD23_Values<CAN1::F11DATA0, 23, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD24 = CAN1_F11DATA0_FD24_Values<CAN1::F11DATA0, 24, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD25 = CAN1_F11DATA0_FD25_Values<CAN1::F11DATA0, 25, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD26 = CAN1_F11DATA0_FD26_Values<CAN1::F11DATA0, 26, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD27 = CAN1_F11DATA0_FD27_Values<CAN1::F11DATA0, 27, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD28 = CAN1_F11DATA0_FD28_Values<CAN1::F11DATA0, 28, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD29 = CAN1_F11DATA0_FD29_Values<CAN1::F11DATA0, 29, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD30 = CAN1_F11DATA0_FD30_Values<CAN1::F11DATA0, 30, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FD31 = CAN1_F11DATA0_FD31_Values<CAN1::F11DATA0, 31, 1, ReadWriteMode, CAN1F11DATA0Base> ;
    using FieldValues = CAN1_F11DATA0_FD31_Values<CAN1::F11DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11DATA0Pack  = Register<0x40006A98, 32, ReadWriteMode, CAN1F11DATA0Base, T...> ;

  struct CAN1F11DATA1Base {} ;

  struct F11DATA1 : public RegisterBase<0x40006A9C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F11DATA1_FD0_Values<CAN1::F11DATA1, 0, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD1 = CAN1_F11DATA1_FD1_Values<CAN1::F11DATA1, 1, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD2 = CAN1_F11DATA1_FD2_Values<CAN1::F11DATA1, 2, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD3 = CAN1_F11DATA1_FD3_Values<CAN1::F11DATA1, 3, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD4 = CAN1_F11DATA1_FD4_Values<CAN1::F11DATA1, 4, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD5 = CAN1_F11DATA1_FD5_Values<CAN1::F11DATA1, 5, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD6 = CAN1_F11DATA1_FD6_Values<CAN1::F11DATA1, 6, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD7 = CAN1_F11DATA1_FD7_Values<CAN1::F11DATA1, 7, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD8 = CAN1_F11DATA1_FD8_Values<CAN1::F11DATA1, 8, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD9 = CAN1_F11DATA1_FD9_Values<CAN1::F11DATA1, 9, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD10 = CAN1_F11DATA1_FD10_Values<CAN1::F11DATA1, 10, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD11 = CAN1_F11DATA1_FD11_Values<CAN1::F11DATA1, 11, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD12 = CAN1_F11DATA1_FD12_Values<CAN1::F11DATA1, 12, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD13 = CAN1_F11DATA1_FD13_Values<CAN1::F11DATA1, 13, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD14 = CAN1_F11DATA1_FD14_Values<CAN1::F11DATA1, 14, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD15 = CAN1_F11DATA1_FD15_Values<CAN1::F11DATA1, 15, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD16 = CAN1_F11DATA1_FD16_Values<CAN1::F11DATA1, 16, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD17 = CAN1_F11DATA1_FD17_Values<CAN1::F11DATA1, 17, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD18 = CAN1_F11DATA1_FD18_Values<CAN1::F11DATA1, 18, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD19 = CAN1_F11DATA1_FD19_Values<CAN1::F11DATA1, 19, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD20 = CAN1_F11DATA1_FD20_Values<CAN1::F11DATA1, 20, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD21 = CAN1_F11DATA1_FD21_Values<CAN1::F11DATA1, 21, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD22 = CAN1_F11DATA1_FD22_Values<CAN1::F11DATA1, 22, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD23 = CAN1_F11DATA1_FD23_Values<CAN1::F11DATA1, 23, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD24 = CAN1_F11DATA1_FD24_Values<CAN1::F11DATA1, 24, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD25 = CAN1_F11DATA1_FD25_Values<CAN1::F11DATA1, 25, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD26 = CAN1_F11DATA1_FD26_Values<CAN1::F11DATA1, 26, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD27 = CAN1_F11DATA1_FD27_Values<CAN1::F11DATA1, 27, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD28 = CAN1_F11DATA1_FD28_Values<CAN1::F11DATA1, 28, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD29 = CAN1_F11DATA1_FD29_Values<CAN1::F11DATA1, 29, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD30 = CAN1_F11DATA1_FD30_Values<CAN1::F11DATA1, 30, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FD31 = CAN1_F11DATA1_FD31_Values<CAN1::F11DATA1, 31, 1, ReadWriteMode, CAN1F11DATA1Base> ;
    using FieldValues = CAN1_F11DATA1_FD31_Values<CAN1::F11DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F11DATA1Pack  = Register<0x40006A9C, 32, ReadWriteMode, CAN1F11DATA1Base, T...> ;

  struct CAN1F12DATA0Base {} ;

  struct F12DATA0 : public RegisterBase<0x40006AA0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F12DATA0_FD0_Values<CAN1::F12DATA0, 0, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD1 = CAN1_F12DATA0_FD1_Values<CAN1::F12DATA0, 1, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD2 = CAN1_F12DATA0_FD2_Values<CAN1::F12DATA0, 2, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD3 = CAN1_F12DATA0_FD3_Values<CAN1::F12DATA0, 3, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD4 = CAN1_F12DATA0_FD4_Values<CAN1::F12DATA0, 4, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD5 = CAN1_F12DATA0_FD5_Values<CAN1::F12DATA0, 5, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD6 = CAN1_F12DATA0_FD6_Values<CAN1::F12DATA0, 6, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD7 = CAN1_F12DATA0_FD7_Values<CAN1::F12DATA0, 7, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD8 = CAN1_F12DATA0_FD8_Values<CAN1::F12DATA0, 8, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD9 = CAN1_F12DATA0_FD9_Values<CAN1::F12DATA0, 9, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD10 = CAN1_F12DATA0_FD10_Values<CAN1::F12DATA0, 10, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD11 = CAN1_F12DATA0_FD11_Values<CAN1::F12DATA0, 11, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD12 = CAN1_F12DATA0_FD12_Values<CAN1::F12DATA0, 12, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD13 = CAN1_F12DATA0_FD13_Values<CAN1::F12DATA0, 13, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD14 = CAN1_F12DATA0_FD14_Values<CAN1::F12DATA0, 14, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD15 = CAN1_F12DATA0_FD15_Values<CAN1::F12DATA0, 15, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD16 = CAN1_F12DATA0_FD16_Values<CAN1::F12DATA0, 16, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD17 = CAN1_F12DATA0_FD17_Values<CAN1::F12DATA0, 17, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD18 = CAN1_F12DATA0_FD18_Values<CAN1::F12DATA0, 18, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD19 = CAN1_F12DATA0_FD19_Values<CAN1::F12DATA0, 19, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD20 = CAN1_F12DATA0_FD20_Values<CAN1::F12DATA0, 20, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD21 = CAN1_F12DATA0_FD21_Values<CAN1::F12DATA0, 21, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD22 = CAN1_F12DATA0_FD22_Values<CAN1::F12DATA0, 22, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD23 = CAN1_F12DATA0_FD23_Values<CAN1::F12DATA0, 23, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD24 = CAN1_F12DATA0_FD24_Values<CAN1::F12DATA0, 24, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD25 = CAN1_F12DATA0_FD25_Values<CAN1::F12DATA0, 25, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD26 = CAN1_F12DATA0_FD26_Values<CAN1::F12DATA0, 26, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD27 = CAN1_F12DATA0_FD27_Values<CAN1::F12DATA0, 27, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD28 = CAN1_F12DATA0_FD28_Values<CAN1::F12DATA0, 28, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD29 = CAN1_F12DATA0_FD29_Values<CAN1::F12DATA0, 29, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD30 = CAN1_F12DATA0_FD30_Values<CAN1::F12DATA0, 30, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FD31 = CAN1_F12DATA0_FD31_Values<CAN1::F12DATA0, 31, 1, ReadWriteMode, CAN1F12DATA0Base> ;
    using FieldValues = CAN1_F12DATA0_FD31_Values<CAN1::F12DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12DATA0Pack  = Register<0x40006AA0, 32, ReadWriteMode, CAN1F12DATA0Base, T...> ;

  struct CAN1F12DATA1Base {} ;

  struct F12DATA1 : public RegisterBase<0x40006AA4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F12DATA1_FD0_Values<CAN1::F12DATA1, 0, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD1 = CAN1_F12DATA1_FD1_Values<CAN1::F12DATA1, 1, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD2 = CAN1_F12DATA1_FD2_Values<CAN1::F12DATA1, 2, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD3 = CAN1_F12DATA1_FD3_Values<CAN1::F12DATA1, 3, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD4 = CAN1_F12DATA1_FD4_Values<CAN1::F12DATA1, 4, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD5 = CAN1_F12DATA1_FD5_Values<CAN1::F12DATA1, 5, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD6 = CAN1_F12DATA1_FD6_Values<CAN1::F12DATA1, 6, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD7 = CAN1_F12DATA1_FD7_Values<CAN1::F12DATA1, 7, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD8 = CAN1_F12DATA1_FD8_Values<CAN1::F12DATA1, 8, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD9 = CAN1_F12DATA1_FD9_Values<CAN1::F12DATA1, 9, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD10 = CAN1_F12DATA1_FD10_Values<CAN1::F12DATA1, 10, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD11 = CAN1_F12DATA1_FD11_Values<CAN1::F12DATA1, 11, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD12 = CAN1_F12DATA1_FD12_Values<CAN1::F12DATA1, 12, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD13 = CAN1_F12DATA1_FD13_Values<CAN1::F12DATA1, 13, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD14 = CAN1_F12DATA1_FD14_Values<CAN1::F12DATA1, 14, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD15 = CAN1_F12DATA1_FD15_Values<CAN1::F12DATA1, 15, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD16 = CAN1_F12DATA1_FD16_Values<CAN1::F12DATA1, 16, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD17 = CAN1_F12DATA1_FD17_Values<CAN1::F12DATA1, 17, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD18 = CAN1_F12DATA1_FD18_Values<CAN1::F12DATA1, 18, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD19 = CAN1_F12DATA1_FD19_Values<CAN1::F12DATA1, 19, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD20 = CAN1_F12DATA1_FD20_Values<CAN1::F12DATA1, 20, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD21 = CAN1_F12DATA1_FD21_Values<CAN1::F12DATA1, 21, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD22 = CAN1_F12DATA1_FD22_Values<CAN1::F12DATA1, 22, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD23 = CAN1_F12DATA1_FD23_Values<CAN1::F12DATA1, 23, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD24 = CAN1_F12DATA1_FD24_Values<CAN1::F12DATA1, 24, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD25 = CAN1_F12DATA1_FD25_Values<CAN1::F12DATA1, 25, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD26 = CAN1_F12DATA1_FD26_Values<CAN1::F12DATA1, 26, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD27 = CAN1_F12DATA1_FD27_Values<CAN1::F12DATA1, 27, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD28 = CAN1_F12DATA1_FD28_Values<CAN1::F12DATA1, 28, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD29 = CAN1_F12DATA1_FD29_Values<CAN1::F12DATA1, 29, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD30 = CAN1_F12DATA1_FD30_Values<CAN1::F12DATA1, 30, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FD31 = CAN1_F12DATA1_FD31_Values<CAN1::F12DATA1, 31, 1, ReadWriteMode, CAN1F12DATA1Base> ;
    using FieldValues = CAN1_F12DATA1_FD31_Values<CAN1::F12DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F12DATA1Pack  = Register<0x40006AA4, 32, ReadWriteMode, CAN1F12DATA1Base, T...> ;

  struct CAN1F13DATA0Base {} ;

  struct F13DATA0 : public RegisterBase<0x40006AA8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F13DATA0_FD0_Values<CAN1::F13DATA0, 0, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD1 = CAN1_F13DATA0_FD1_Values<CAN1::F13DATA0, 1, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD2 = CAN1_F13DATA0_FD2_Values<CAN1::F13DATA0, 2, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD3 = CAN1_F13DATA0_FD3_Values<CAN1::F13DATA0, 3, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD4 = CAN1_F13DATA0_FD4_Values<CAN1::F13DATA0, 4, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD5 = CAN1_F13DATA0_FD5_Values<CAN1::F13DATA0, 5, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD6 = CAN1_F13DATA0_FD6_Values<CAN1::F13DATA0, 6, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD7 = CAN1_F13DATA0_FD7_Values<CAN1::F13DATA0, 7, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD8 = CAN1_F13DATA0_FD8_Values<CAN1::F13DATA0, 8, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD9 = CAN1_F13DATA0_FD9_Values<CAN1::F13DATA0, 9, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD10 = CAN1_F13DATA0_FD10_Values<CAN1::F13DATA0, 10, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD11 = CAN1_F13DATA0_FD11_Values<CAN1::F13DATA0, 11, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD12 = CAN1_F13DATA0_FD12_Values<CAN1::F13DATA0, 12, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD13 = CAN1_F13DATA0_FD13_Values<CAN1::F13DATA0, 13, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD14 = CAN1_F13DATA0_FD14_Values<CAN1::F13DATA0, 14, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD15 = CAN1_F13DATA0_FD15_Values<CAN1::F13DATA0, 15, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD16 = CAN1_F13DATA0_FD16_Values<CAN1::F13DATA0, 16, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD17 = CAN1_F13DATA0_FD17_Values<CAN1::F13DATA0, 17, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD18 = CAN1_F13DATA0_FD18_Values<CAN1::F13DATA0, 18, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD19 = CAN1_F13DATA0_FD19_Values<CAN1::F13DATA0, 19, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD20 = CAN1_F13DATA0_FD20_Values<CAN1::F13DATA0, 20, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD21 = CAN1_F13DATA0_FD21_Values<CAN1::F13DATA0, 21, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD22 = CAN1_F13DATA0_FD22_Values<CAN1::F13DATA0, 22, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD23 = CAN1_F13DATA0_FD23_Values<CAN1::F13DATA0, 23, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD24 = CAN1_F13DATA0_FD24_Values<CAN1::F13DATA0, 24, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD25 = CAN1_F13DATA0_FD25_Values<CAN1::F13DATA0, 25, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD26 = CAN1_F13DATA0_FD26_Values<CAN1::F13DATA0, 26, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD27 = CAN1_F13DATA0_FD27_Values<CAN1::F13DATA0, 27, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD28 = CAN1_F13DATA0_FD28_Values<CAN1::F13DATA0, 28, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD29 = CAN1_F13DATA0_FD29_Values<CAN1::F13DATA0, 29, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD30 = CAN1_F13DATA0_FD30_Values<CAN1::F13DATA0, 30, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FD31 = CAN1_F13DATA0_FD31_Values<CAN1::F13DATA0, 31, 1, ReadWriteMode, CAN1F13DATA0Base> ;
    using FieldValues = CAN1_F13DATA0_FD31_Values<CAN1::F13DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13DATA0Pack  = Register<0x40006AA8, 32, ReadWriteMode, CAN1F13DATA0Base, T...> ;

  struct CAN1F13DATA1Base {} ;

  struct F13DATA1 : public RegisterBase<0x40006AAC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F13DATA1_FD0_Values<CAN1::F13DATA1, 0, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD1 = CAN1_F13DATA1_FD1_Values<CAN1::F13DATA1, 1, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD2 = CAN1_F13DATA1_FD2_Values<CAN1::F13DATA1, 2, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD3 = CAN1_F13DATA1_FD3_Values<CAN1::F13DATA1, 3, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD4 = CAN1_F13DATA1_FD4_Values<CAN1::F13DATA1, 4, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD5 = CAN1_F13DATA1_FD5_Values<CAN1::F13DATA1, 5, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD6 = CAN1_F13DATA1_FD6_Values<CAN1::F13DATA1, 6, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD7 = CAN1_F13DATA1_FD7_Values<CAN1::F13DATA1, 7, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD8 = CAN1_F13DATA1_FD8_Values<CAN1::F13DATA1, 8, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD9 = CAN1_F13DATA1_FD9_Values<CAN1::F13DATA1, 9, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD10 = CAN1_F13DATA1_FD10_Values<CAN1::F13DATA1, 10, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD11 = CAN1_F13DATA1_FD11_Values<CAN1::F13DATA1, 11, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD12 = CAN1_F13DATA1_FD12_Values<CAN1::F13DATA1, 12, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD13 = CAN1_F13DATA1_FD13_Values<CAN1::F13DATA1, 13, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD14 = CAN1_F13DATA1_FD14_Values<CAN1::F13DATA1, 14, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD15 = CAN1_F13DATA1_FD15_Values<CAN1::F13DATA1, 15, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD16 = CAN1_F13DATA1_FD16_Values<CAN1::F13DATA1, 16, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD17 = CAN1_F13DATA1_FD17_Values<CAN1::F13DATA1, 17, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD18 = CAN1_F13DATA1_FD18_Values<CAN1::F13DATA1, 18, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD19 = CAN1_F13DATA1_FD19_Values<CAN1::F13DATA1, 19, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD20 = CAN1_F13DATA1_FD20_Values<CAN1::F13DATA1, 20, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD21 = CAN1_F13DATA1_FD21_Values<CAN1::F13DATA1, 21, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD22 = CAN1_F13DATA1_FD22_Values<CAN1::F13DATA1, 22, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD23 = CAN1_F13DATA1_FD23_Values<CAN1::F13DATA1, 23, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD24 = CAN1_F13DATA1_FD24_Values<CAN1::F13DATA1, 24, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD25 = CAN1_F13DATA1_FD25_Values<CAN1::F13DATA1, 25, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD26 = CAN1_F13DATA1_FD26_Values<CAN1::F13DATA1, 26, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD27 = CAN1_F13DATA1_FD27_Values<CAN1::F13DATA1, 27, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD28 = CAN1_F13DATA1_FD28_Values<CAN1::F13DATA1, 28, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD29 = CAN1_F13DATA1_FD29_Values<CAN1::F13DATA1, 29, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD30 = CAN1_F13DATA1_FD30_Values<CAN1::F13DATA1, 30, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FD31 = CAN1_F13DATA1_FD31_Values<CAN1::F13DATA1, 31, 1, ReadWriteMode, CAN1F13DATA1Base> ;
    using FieldValues = CAN1_F13DATA1_FD31_Values<CAN1::F13DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F13DATA1Pack  = Register<0x40006AAC, 32, ReadWriteMode, CAN1F13DATA1Base, T...> ;

  struct CAN1F14DATA0Base {} ;

  struct F14DATA0 : public RegisterBase<0x40006AB0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F14DATA0_FD0_Values<CAN1::F14DATA0, 0, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD1 = CAN1_F14DATA0_FD1_Values<CAN1::F14DATA0, 1, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD2 = CAN1_F14DATA0_FD2_Values<CAN1::F14DATA0, 2, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD3 = CAN1_F14DATA0_FD3_Values<CAN1::F14DATA0, 3, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD4 = CAN1_F14DATA0_FD4_Values<CAN1::F14DATA0, 4, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD5 = CAN1_F14DATA0_FD5_Values<CAN1::F14DATA0, 5, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD6 = CAN1_F14DATA0_FD6_Values<CAN1::F14DATA0, 6, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD7 = CAN1_F14DATA0_FD7_Values<CAN1::F14DATA0, 7, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD8 = CAN1_F14DATA0_FD8_Values<CAN1::F14DATA0, 8, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD9 = CAN1_F14DATA0_FD9_Values<CAN1::F14DATA0, 9, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD10 = CAN1_F14DATA0_FD10_Values<CAN1::F14DATA0, 10, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD11 = CAN1_F14DATA0_FD11_Values<CAN1::F14DATA0, 11, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD12 = CAN1_F14DATA0_FD12_Values<CAN1::F14DATA0, 12, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD13 = CAN1_F14DATA0_FD13_Values<CAN1::F14DATA0, 13, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD14 = CAN1_F14DATA0_FD14_Values<CAN1::F14DATA0, 14, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD15 = CAN1_F14DATA0_FD15_Values<CAN1::F14DATA0, 15, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD16 = CAN1_F14DATA0_FD16_Values<CAN1::F14DATA0, 16, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD17 = CAN1_F14DATA0_FD17_Values<CAN1::F14DATA0, 17, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD18 = CAN1_F14DATA0_FD18_Values<CAN1::F14DATA0, 18, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD19 = CAN1_F14DATA0_FD19_Values<CAN1::F14DATA0, 19, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD20 = CAN1_F14DATA0_FD20_Values<CAN1::F14DATA0, 20, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD21 = CAN1_F14DATA0_FD21_Values<CAN1::F14DATA0, 21, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD22 = CAN1_F14DATA0_FD22_Values<CAN1::F14DATA0, 22, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD23 = CAN1_F14DATA0_FD23_Values<CAN1::F14DATA0, 23, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD24 = CAN1_F14DATA0_FD24_Values<CAN1::F14DATA0, 24, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD25 = CAN1_F14DATA0_FD25_Values<CAN1::F14DATA0, 25, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD26 = CAN1_F14DATA0_FD26_Values<CAN1::F14DATA0, 26, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD27 = CAN1_F14DATA0_FD27_Values<CAN1::F14DATA0, 27, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD28 = CAN1_F14DATA0_FD28_Values<CAN1::F14DATA0, 28, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD29 = CAN1_F14DATA0_FD29_Values<CAN1::F14DATA0, 29, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD30 = CAN1_F14DATA0_FD30_Values<CAN1::F14DATA0, 30, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FD31 = CAN1_F14DATA0_FD31_Values<CAN1::F14DATA0, 31, 1, ReadWriteMode, CAN1F14DATA0Base> ;
    using FieldValues = CAN1_F14DATA0_FD31_Values<CAN1::F14DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14DATA0Pack  = Register<0x40006AB0, 32, ReadWriteMode, CAN1F14DATA0Base, T...> ;

  struct CAN1F14DATA1Base {} ;

  struct F14DATA1 : public RegisterBase<0x40006AB4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F14DATA1_FD0_Values<CAN1::F14DATA1, 0, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD1 = CAN1_F14DATA1_FD1_Values<CAN1::F14DATA1, 1, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD2 = CAN1_F14DATA1_FD2_Values<CAN1::F14DATA1, 2, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD3 = CAN1_F14DATA1_FD3_Values<CAN1::F14DATA1, 3, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD4 = CAN1_F14DATA1_FD4_Values<CAN1::F14DATA1, 4, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD5 = CAN1_F14DATA1_FD5_Values<CAN1::F14DATA1, 5, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD6 = CAN1_F14DATA1_FD6_Values<CAN1::F14DATA1, 6, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD7 = CAN1_F14DATA1_FD7_Values<CAN1::F14DATA1, 7, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD8 = CAN1_F14DATA1_FD8_Values<CAN1::F14DATA1, 8, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD9 = CAN1_F14DATA1_FD9_Values<CAN1::F14DATA1, 9, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD10 = CAN1_F14DATA1_FD10_Values<CAN1::F14DATA1, 10, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD11 = CAN1_F14DATA1_FD11_Values<CAN1::F14DATA1, 11, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD12 = CAN1_F14DATA1_FD12_Values<CAN1::F14DATA1, 12, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD13 = CAN1_F14DATA1_FD13_Values<CAN1::F14DATA1, 13, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD14 = CAN1_F14DATA1_FD14_Values<CAN1::F14DATA1, 14, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD15 = CAN1_F14DATA1_FD15_Values<CAN1::F14DATA1, 15, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD16 = CAN1_F14DATA1_FD16_Values<CAN1::F14DATA1, 16, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD17 = CAN1_F14DATA1_FD17_Values<CAN1::F14DATA1, 17, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD18 = CAN1_F14DATA1_FD18_Values<CAN1::F14DATA1, 18, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD19 = CAN1_F14DATA1_FD19_Values<CAN1::F14DATA1, 19, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD20 = CAN1_F14DATA1_FD20_Values<CAN1::F14DATA1, 20, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD21 = CAN1_F14DATA1_FD21_Values<CAN1::F14DATA1, 21, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD22 = CAN1_F14DATA1_FD22_Values<CAN1::F14DATA1, 22, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD23 = CAN1_F14DATA1_FD23_Values<CAN1::F14DATA1, 23, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD24 = CAN1_F14DATA1_FD24_Values<CAN1::F14DATA1, 24, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD25 = CAN1_F14DATA1_FD25_Values<CAN1::F14DATA1, 25, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD26 = CAN1_F14DATA1_FD26_Values<CAN1::F14DATA1, 26, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD27 = CAN1_F14DATA1_FD27_Values<CAN1::F14DATA1, 27, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD28 = CAN1_F14DATA1_FD28_Values<CAN1::F14DATA1, 28, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD29 = CAN1_F14DATA1_FD29_Values<CAN1::F14DATA1, 29, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD30 = CAN1_F14DATA1_FD30_Values<CAN1::F14DATA1, 30, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FD31 = CAN1_F14DATA1_FD31_Values<CAN1::F14DATA1, 31, 1, ReadWriteMode, CAN1F14DATA1Base> ;
    using FieldValues = CAN1_F14DATA1_FD31_Values<CAN1::F14DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F14DATA1Pack  = Register<0x40006AB4, 32, ReadWriteMode, CAN1F14DATA1Base, T...> ;

  struct CAN1F15DATA0Base {} ;

  struct F15DATA0 : public RegisterBase<0x40006AB8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F15DATA0_FD0_Values<CAN1::F15DATA0, 0, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD1 = CAN1_F15DATA0_FD1_Values<CAN1::F15DATA0, 1, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD2 = CAN1_F15DATA0_FD2_Values<CAN1::F15DATA0, 2, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD3 = CAN1_F15DATA0_FD3_Values<CAN1::F15DATA0, 3, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD4 = CAN1_F15DATA0_FD4_Values<CAN1::F15DATA0, 4, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD5 = CAN1_F15DATA0_FD5_Values<CAN1::F15DATA0, 5, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD6 = CAN1_F15DATA0_FD6_Values<CAN1::F15DATA0, 6, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD7 = CAN1_F15DATA0_FD7_Values<CAN1::F15DATA0, 7, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD8 = CAN1_F15DATA0_FD8_Values<CAN1::F15DATA0, 8, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD9 = CAN1_F15DATA0_FD9_Values<CAN1::F15DATA0, 9, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD10 = CAN1_F15DATA0_FD10_Values<CAN1::F15DATA0, 10, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD11 = CAN1_F15DATA0_FD11_Values<CAN1::F15DATA0, 11, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD12 = CAN1_F15DATA0_FD12_Values<CAN1::F15DATA0, 12, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD13 = CAN1_F15DATA0_FD13_Values<CAN1::F15DATA0, 13, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD14 = CAN1_F15DATA0_FD14_Values<CAN1::F15DATA0, 14, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD15 = CAN1_F15DATA0_FD15_Values<CAN1::F15DATA0, 15, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD16 = CAN1_F15DATA0_FD16_Values<CAN1::F15DATA0, 16, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD17 = CAN1_F15DATA0_FD17_Values<CAN1::F15DATA0, 17, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD18 = CAN1_F15DATA0_FD18_Values<CAN1::F15DATA0, 18, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD19 = CAN1_F15DATA0_FD19_Values<CAN1::F15DATA0, 19, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD20 = CAN1_F15DATA0_FD20_Values<CAN1::F15DATA0, 20, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD21 = CAN1_F15DATA0_FD21_Values<CAN1::F15DATA0, 21, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD22 = CAN1_F15DATA0_FD22_Values<CAN1::F15DATA0, 22, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD23 = CAN1_F15DATA0_FD23_Values<CAN1::F15DATA0, 23, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD24 = CAN1_F15DATA0_FD24_Values<CAN1::F15DATA0, 24, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD25 = CAN1_F15DATA0_FD25_Values<CAN1::F15DATA0, 25, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD26 = CAN1_F15DATA0_FD26_Values<CAN1::F15DATA0, 26, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD27 = CAN1_F15DATA0_FD27_Values<CAN1::F15DATA0, 27, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD28 = CAN1_F15DATA0_FD28_Values<CAN1::F15DATA0, 28, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD29 = CAN1_F15DATA0_FD29_Values<CAN1::F15DATA0, 29, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD30 = CAN1_F15DATA0_FD30_Values<CAN1::F15DATA0, 30, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FD31 = CAN1_F15DATA0_FD31_Values<CAN1::F15DATA0, 31, 1, ReadWriteMode, CAN1F15DATA0Base> ;
    using FieldValues = CAN1_F15DATA0_FD31_Values<CAN1::F15DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15DATA0Pack  = Register<0x40006AB8, 32, ReadWriteMode, CAN1F15DATA0Base, T...> ;

  struct CAN1F15DATA1Base {} ;

  struct F15DATA1 : public RegisterBase<0x40006ABC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F15DATA1_FD0_Values<CAN1::F15DATA1, 0, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD1 = CAN1_F15DATA1_FD1_Values<CAN1::F15DATA1, 1, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD2 = CAN1_F15DATA1_FD2_Values<CAN1::F15DATA1, 2, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD3 = CAN1_F15DATA1_FD3_Values<CAN1::F15DATA1, 3, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD4 = CAN1_F15DATA1_FD4_Values<CAN1::F15DATA1, 4, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD5 = CAN1_F15DATA1_FD5_Values<CAN1::F15DATA1, 5, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD6 = CAN1_F15DATA1_FD6_Values<CAN1::F15DATA1, 6, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD7 = CAN1_F15DATA1_FD7_Values<CAN1::F15DATA1, 7, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD8 = CAN1_F15DATA1_FD8_Values<CAN1::F15DATA1, 8, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD9 = CAN1_F15DATA1_FD9_Values<CAN1::F15DATA1, 9, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD10 = CAN1_F15DATA1_FD10_Values<CAN1::F15DATA1, 10, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD11 = CAN1_F15DATA1_FD11_Values<CAN1::F15DATA1, 11, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD12 = CAN1_F15DATA1_FD12_Values<CAN1::F15DATA1, 12, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD13 = CAN1_F15DATA1_FD13_Values<CAN1::F15DATA1, 13, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD14 = CAN1_F15DATA1_FD14_Values<CAN1::F15DATA1, 14, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD15 = CAN1_F15DATA1_FD15_Values<CAN1::F15DATA1, 15, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD16 = CAN1_F15DATA1_FD16_Values<CAN1::F15DATA1, 16, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD17 = CAN1_F15DATA1_FD17_Values<CAN1::F15DATA1, 17, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD18 = CAN1_F15DATA1_FD18_Values<CAN1::F15DATA1, 18, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD19 = CAN1_F15DATA1_FD19_Values<CAN1::F15DATA1, 19, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD20 = CAN1_F15DATA1_FD20_Values<CAN1::F15DATA1, 20, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD21 = CAN1_F15DATA1_FD21_Values<CAN1::F15DATA1, 21, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD22 = CAN1_F15DATA1_FD22_Values<CAN1::F15DATA1, 22, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD23 = CAN1_F15DATA1_FD23_Values<CAN1::F15DATA1, 23, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD24 = CAN1_F15DATA1_FD24_Values<CAN1::F15DATA1, 24, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD25 = CAN1_F15DATA1_FD25_Values<CAN1::F15DATA1, 25, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD26 = CAN1_F15DATA1_FD26_Values<CAN1::F15DATA1, 26, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD27 = CAN1_F15DATA1_FD27_Values<CAN1::F15DATA1, 27, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD28 = CAN1_F15DATA1_FD28_Values<CAN1::F15DATA1, 28, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD29 = CAN1_F15DATA1_FD29_Values<CAN1::F15DATA1, 29, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD30 = CAN1_F15DATA1_FD30_Values<CAN1::F15DATA1, 30, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FD31 = CAN1_F15DATA1_FD31_Values<CAN1::F15DATA1, 31, 1, ReadWriteMode, CAN1F15DATA1Base> ;
    using FieldValues = CAN1_F15DATA1_FD31_Values<CAN1::F15DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F15DATA1Pack  = Register<0x40006ABC, 32, ReadWriteMode, CAN1F15DATA1Base, T...> ;

  struct CAN1F16DATA0Base {} ;

  struct F16DATA0 : public RegisterBase<0x40006AC0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F16DATA0_FD0_Values<CAN1::F16DATA0, 0, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD1 = CAN1_F16DATA0_FD1_Values<CAN1::F16DATA0, 1, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD2 = CAN1_F16DATA0_FD2_Values<CAN1::F16DATA0, 2, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD3 = CAN1_F16DATA0_FD3_Values<CAN1::F16DATA0, 3, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD4 = CAN1_F16DATA0_FD4_Values<CAN1::F16DATA0, 4, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD5 = CAN1_F16DATA0_FD5_Values<CAN1::F16DATA0, 5, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD6 = CAN1_F16DATA0_FD6_Values<CAN1::F16DATA0, 6, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD7 = CAN1_F16DATA0_FD7_Values<CAN1::F16DATA0, 7, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD8 = CAN1_F16DATA0_FD8_Values<CAN1::F16DATA0, 8, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD9 = CAN1_F16DATA0_FD9_Values<CAN1::F16DATA0, 9, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD10 = CAN1_F16DATA0_FD10_Values<CAN1::F16DATA0, 10, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD11 = CAN1_F16DATA0_FD11_Values<CAN1::F16DATA0, 11, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD12 = CAN1_F16DATA0_FD12_Values<CAN1::F16DATA0, 12, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD13 = CAN1_F16DATA0_FD13_Values<CAN1::F16DATA0, 13, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD14 = CAN1_F16DATA0_FD14_Values<CAN1::F16DATA0, 14, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD15 = CAN1_F16DATA0_FD15_Values<CAN1::F16DATA0, 15, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD16 = CAN1_F16DATA0_FD16_Values<CAN1::F16DATA0, 16, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD17 = CAN1_F16DATA0_FD17_Values<CAN1::F16DATA0, 17, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD18 = CAN1_F16DATA0_FD18_Values<CAN1::F16DATA0, 18, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD19 = CAN1_F16DATA0_FD19_Values<CAN1::F16DATA0, 19, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD20 = CAN1_F16DATA0_FD20_Values<CAN1::F16DATA0, 20, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD21 = CAN1_F16DATA0_FD21_Values<CAN1::F16DATA0, 21, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD22 = CAN1_F16DATA0_FD22_Values<CAN1::F16DATA0, 22, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD23 = CAN1_F16DATA0_FD23_Values<CAN1::F16DATA0, 23, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD24 = CAN1_F16DATA0_FD24_Values<CAN1::F16DATA0, 24, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD25 = CAN1_F16DATA0_FD25_Values<CAN1::F16DATA0, 25, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD26 = CAN1_F16DATA0_FD26_Values<CAN1::F16DATA0, 26, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD27 = CAN1_F16DATA0_FD27_Values<CAN1::F16DATA0, 27, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD28 = CAN1_F16DATA0_FD28_Values<CAN1::F16DATA0, 28, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD29 = CAN1_F16DATA0_FD29_Values<CAN1::F16DATA0, 29, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD30 = CAN1_F16DATA0_FD30_Values<CAN1::F16DATA0, 30, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FD31 = CAN1_F16DATA0_FD31_Values<CAN1::F16DATA0, 31, 1, ReadWriteMode, CAN1F16DATA0Base> ;
    using FieldValues = CAN1_F16DATA0_FD31_Values<CAN1::F16DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16DATA0Pack  = Register<0x40006AC0, 32, ReadWriteMode, CAN1F16DATA0Base, T...> ;

  struct CAN1F16DATA1Base {} ;

  struct F16DATA1 : public RegisterBase<0x40006AC4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F16DATA1_FD0_Values<CAN1::F16DATA1, 0, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD1 = CAN1_F16DATA1_FD1_Values<CAN1::F16DATA1, 1, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD2 = CAN1_F16DATA1_FD2_Values<CAN1::F16DATA1, 2, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD3 = CAN1_F16DATA1_FD3_Values<CAN1::F16DATA1, 3, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD4 = CAN1_F16DATA1_FD4_Values<CAN1::F16DATA1, 4, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD5 = CAN1_F16DATA1_FD5_Values<CAN1::F16DATA1, 5, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD6 = CAN1_F16DATA1_FD6_Values<CAN1::F16DATA1, 6, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD7 = CAN1_F16DATA1_FD7_Values<CAN1::F16DATA1, 7, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD8 = CAN1_F16DATA1_FD8_Values<CAN1::F16DATA1, 8, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD9 = CAN1_F16DATA1_FD9_Values<CAN1::F16DATA1, 9, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD10 = CAN1_F16DATA1_FD10_Values<CAN1::F16DATA1, 10, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD11 = CAN1_F16DATA1_FD11_Values<CAN1::F16DATA1, 11, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD12 = CAN1_F16DATA1_FD12_Values<CAN1::F16DATA1, 12, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD13 = CAN1_F16DATA1_FD13_Values<CAN1::F16DATA1, 13, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD14 = CAN1_F16DATA1_FD14_Values<CAN1::F16DATA1, 14, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD15 = CAN1_F16DATA1_FD15_Values<CAN1::F16DATA1, 15, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD16 = CAN1_F16DATA1_FD16_Values<CAN1::F16DATA1, 16, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD17 = CAN1_F16DATA1_FD17_Values<CAN1::F16DATA1, 17, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD18 = CAN1_F16DATA1_FD18_Values<CAN1::F16DATA1, 18, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD19 = CAN1_F16DATA1_FD19_Values<CAN1::F16DATA1, 19, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD20 = CAN1_F16DATA1_FD20_Values<CAN1::F16DATA1, 20, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD21 = CAN1_F16DATA1_FD21_Values<CAN1::F16DATA1, 21, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD22 = CAN1_F16DATA1_FD22_Values<CAN1::F16DATA1, 22, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD23 = CAN1_F16DATA1_FD23_Values<CAN1::F16DATA1, 23, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD24 = CAN1_F16DATA1_FD24_Values<CAN1::F16DATA1, 24, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD25 = CAN1_F16DATA1_FD25_Values<CAN1::F16DATA1, 25, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD26 = CAN1_F16DATA1_FD26_Values<CAN1::F16DATA1, 26, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD27 = CAN1_F16DATA1_FD27_Values<CAN1::F16DATA1, 27, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD28 = CAN1_F16DATA1_FD28_Values<CAN1::F16DATA1, 28, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD29 = CAN1_F16DATA1_FD29_Values<CAN1::F16DATA1, 29, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD30 = CAN1_F16DATA1_FD30_Values<CAN1::F16DATA1, 30, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FD31 = CAN1_F16DATA1_FD31_Values<CAN1::F16DATA1, 31, 1, ReadWriteMode, CAN1F16DATA1Base> ;
    using FieldValues = CAN1_F16DATA1_FD31_Values<CAN1::F16DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F16DATA1Pack  = Register<0x40006AC4, 32, ReadWriteMode, CAN1F16DATA1Base, T...> ;

  struct CAN1F17DATA0Base {} ;

  struct F17DATA0 : public RegisterBase<0x40006AC8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F17DATA0_FD0_Values<CAN1::F17DATA0, 0, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD1 = CAN1_F17DATA0_FD1_Values<CAN1::F17DATA0, 1, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD2 = CAN1_F17DATA0_FD2_Values<CAN1::F17DATA0, 2, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD3 = CAN1_F17DATA0_FD3_Values<CAN1::F17DATA0, 3, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD4 = CAN1_F17DATA0_FD4_Values<CAN1::F17DATA0, 4, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD5 = CAN1_F17DATA0_FD5_Values<CAN1::F17DATA0, 5, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD6 = CAN1_F17DATA0_FD6_Values<CAN1::F17DATA0, 6, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD7 = CAN1_F17DATA0_FD7_Values<CAN1::F17DATA0, 7, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD8 = CAN1_F17DATA0_FD8_Values<CAN1::F17DATA0, 8, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD9 = CAN1_F17DATA0_FD9_Values<CAN1::F17DATA0, 9, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD10 = CAN1_F17DATA0_FD10_Values<CAN1::F17DATA0, 10, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD11 = CAN1_F17DATA0_FD11_Values<CAN1::F17DATA0, 11, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD12 = CAN1_F17DATA0_FD12_Values<CAN1::F17DATA0, 12, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD13 = CAN1_F17DATA0_FD13_Values<CAN1::F17DATA0, 13, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD14 = CAN1_F17DATA0_FD14_Values<CAN1::F17DATA0, 14, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD15 = CAN1_F17DATA0_FD15_Values<CAN1::F17DATA0, 15, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD16 = CAN1_F17DATA0_FD16_Values<CAN1::F17DATA0, 16, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD17 = CAN1_F17DATA0_FD17_Values<CAN1::F17DATA0, 17, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD18 = CAN1_F17DATA0_FD18_Values<CAN1::F17DATA0, 18, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD19 = CAN1_F17DATA0_FD19_Values<CAN1::F17DATA0, 19, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD20 = CAN1_F17DATA0_FD20_Values<CAN1::F17DATA0, 20, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD21 = CAN1_F17DATA0_FD21_Values<CAN1::F17DATA0, 21, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD22 = CAN1_F17DATA0_FD22_Values<CAN1::F17DATA0, 22, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD23 = CAN1_F17DATA0_FD23_Values<CAN1::F17DATA0, 23, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD24 = CAN1_F17DATA0_FD24_Values<CAN1::F17DATA0, 24, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD25 = CAN1_F17DATA0_FD25_Values<CAN1::F17DATA0, 25, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD26 = CAN1_F17DATA0_FD26_Values<CAN1::F17DATA0, 26, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD27 = CAN1_F17DATA0_FD27_Values<CAN1::F17DATA0, 27, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD28 = CAN1_F17DATA0_FD28_Values<CAN1::F17DATA0, 28, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD29 = CAN1_F17DATA0_FD29_Values<CAN1::F17DATA0, 29, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD30 = CAN1_F17DATA0_FD30_Values<CAN1::F17DATA0, 30, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FD31 = CAN1_F17DATA0_FD31_Values<CAN1::F17DATA0, 31, 1, ReadWriteMode, CAN1F17DATA0Base> ;
    using FieldValues = CAN1_F17DATA0_FD31_Values<CAN1::F17DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17DATA0Pack  = Register<0x40006AC8, 32, ReadWriteMode, CAN1F17DATA0Base, T...> ;

  struct CAN1F17DATA1Base {} ;

  struct F17DATA1 : public RegisterBase<0x40006ACC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F17DATA1_FD0_Values<CAN1::F17DATA1, 0, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD1 = CAN1_F17DATA1_FD1_Values<CAN1::F17DATA1, 1, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD2 = CAN1_F17DATA1_FD2_Values<CAN1::F17DATA1, 2, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD3 = CAN1_F17DATA1_FD3_Values<CAN1::F17DATA1, 3, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD4 = CAN1_F17DATA1_FD4_Values<CAN1::F17DATA1, 4, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD5 = CAN1_F17DATA1_FD5_Values<CAN1::F17DATA1, 5, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD6 = CAN1_F17DATA1_FD6_Values<CAN1::F17DATA1, 6, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD7 = CAN1_F17DATA1_FD7_Values<CAN1::F17DATA1, 7, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD8 = CAN1_F17DATA1_FD8_Values<CAN1::F17DATA1, 8, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD9 = CAN1_F17DATA1_FD9_Values<CAN1::F17DATA1, 9, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD10 = CAN1_F17DATA1_FD10_Values<CAN1::F17DATA1, 10, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD11 = CAN1_F17DATA1_FD11_Values<CAN1::F17DATA1, 11, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD12 = CAN1_F17DATA1_FD12_Values<CAN1::F17DATA1, 12, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD13 = CAN1_F17DATA1_FD13_Values<CAN1::F17DATA1, 13, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD14 = CAN1_F17DATA1_FD14_Values<CAN1::F17DATA1, 14, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD15 = CAN1_F17DATA1_FD15_Values<CAN1::F17DATA1, 15, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD16 = CAN1_F17DATA1_FD16_Values<CAN1::F17DATA1, 16, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD17 = CAN1_F17DATA1_FD17_Values<CAN1::F17DATA1, 17, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD18 = CAN1_F17DATA1_FD18_Values<CAN1::F17DATA1, 18, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD19 = CAN1_F17DATA1_FD19_Values<CAN1::F17DATA1, 19, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD20 = CAN1_F17DATA1_FD20_Values<CAN1::F17DATA1, 20, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD21 = CAN1_F17DATA1_FD21_Values<CAN1::F17DATA1, 21, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD22 = CAN1_F17DATA1_FD22_Values<CAN1::F17DATA1, 22, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD23 = CAN1_F17DATA1_FD23_Values<CAN1::F17DATA1, 23, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD24 = CAN1_F17DATA1_FD24_Values<CAN1::F17DATA1, 24, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD25 = CAN1_F17DATA1_FD25_Values<CAN1::F17DATA1, 25, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD26 = CAN1_F17DATA1_FD26_Values<CAN1::F17DATA1, 26, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD27 = CAN1_F17DATA1_FD27_Values<CAN1::F17DATA1, 27, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD28 = CAN1_F17DATA1_FD28_Values<CAN1::F17DATA1, 28, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD29 = CAN1_F17DATA1_FD29_Values<CAN1::F17DATA1, 29, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD30 = CAN1_F17DATA1_FD30_Values<CAN1::F17DATA1, 30, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FD31 = CAN1_F17DATA1_FD31_Values<CAN1::F17DATA1, 31, 1, ReadWriteMode, CAN1F17DATA1Base> ;
    using FieldValues = CAN1_F17DATA1_FD31_Values<CAN1::F17DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F17DATA1Pack  = Register<0x40006ACC, 32, ReadWriteMode, CAN1F17DATA1Base, T...> ;

  struct CAN1F18DATA0Base {} ;

  struct F18DATA0 : public RegisterBase<0x40006AD0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F18DATA0_FD0_Values<CAN1::F18DATA0, 0, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD1 = CAN1_F18DATA0_FD1_Values<CAN1::F18DATA0, 1, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD2 = CAN1_F18DATA0_FD2_Values<CAN1::F18DATA0, 2, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD3 = CAN1_F18DATA0_FD3_Values<CAN1::F18DATA0, 3, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD4 = CAN1_F18DATA0_FD4_Values<CAN1::F18DATA0, 4, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD5 = CAN1_F18DATA0_FD5_Values<CAN1::F18DATA0, 5, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD6 = CAN1_F18DATA0_FD6_Values<CAN1::F18DATA0, 6, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD7 = CAN1_F18DATA0_FD7_Values<CAN1::F18DATA0, 7, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD8 = CAN1_F18DATA0_FD8_Values<CAN1::F18DATA0, 8, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD9 = CAN1_F18DATA0_FD9_Values<CAN1::F18DATA0, 9, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD10 = CAN1_F18DATA0_FD10_Values<CAN1::F18DATA0, 10, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD11 = CAN1_F18DATA0_FD11_Values<CAN1::F18DATA0, 11, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD12 = CAN1_F18DATA0_FD12_Values<CAN1::F18DATA0, 12, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD13 = CAN1_F18DATA0_FD13_Values<CAN1::F18DATA0, 13, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD14 = CAN1_F18DATA0_FD14_Values<CAN1::F18DATA0, 14, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD15 = CAN1_F18DATA0_FD15_Values<CAN1::F18DATA0, 15, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD16 = CAN1_F18DATA0_FD16_Values<CAN1::F18DATA0, 16, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD17 = CAN1_F18DATA0_FD17_Values<CAN1::F18DATA0, 17, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD18 = CAN1_F18DATA0_FD18_Values<CAN1::F18DATA0, 18, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD19 = CAN1_F18DATA0_FD19_Values<CAN1::F18DATA0, 19, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD20 = CAN1_F18DATA0_FD20_Values<CAN1::F18DATA0, 20, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD21 = CAN1_F18DATA0_FD21_Values<CAN1::F18DATA0, 21, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD22 = CAN1_F18DATA0_FD22_Values<CAN1::F18DATA0, 22, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD23 = CAN1_F18DATA0_FD23_Values<CAN1::F18DATA0, 23, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD24 = CAN1_F18DATA0_FD24_Values<CAN1::F18DATA0, 24, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD25 = CAN1_F18DATA0_FD25_Values<CAN1::F18DATA0, 25, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD26 = CAN1_F18DATA0_FD26_Values<CAN1::F18DATA0, 26, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD27 = CAN1_F18DATA0_FD27_Values<CAN1::F18DATA0, 27, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD28 = CAN1_F18DATA0_FD28_Values<CAN1::F18DATA0, 28, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD29 = CAN1_F18DATA0_FD29_Values<CAN1::F18DATA0, 29, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD30 = CAN1_F18DATA0_FD30_Values<CAN1::F18DATA0, 30, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FD31 = CAN1_F18DATA0_FD31_Values<CAN1::F18DATA0, 31, 1, ReadWriteMode, CAN1F18DATA0Base> ;
    using FieldValues = CAN1_F18DATA0_FD31_Values<CAN1::F18DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18DATA0Pack  = Register<0x40006AD0, 32, ReadWriteMode, CAN1F18DATA0Base, T...> ;

  struct CAN1F18DATA1Base {} ;

  struct F18DATA1 : public RegisterBase<0x40006AD4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F18DATA1_FD0_Values<CAN1::F18DATA1, 0, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD1 = CAN1_F18DATA1_FD1_Values<CAN1::F18DATA1, 1, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD2 = CAN1_F18DATA1_FD2_Values<CAN1::F18DATA1, 2, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD3 = CAN1_F18DATA1_FD3_Values<CAN1::F18DATA1, 3, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD4 = CAN1_F18DATA1_FD4_Values<CAN1::F18DATA1, 4, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD5 = CAN1_F18DATA1_FD5_Values<CAN1::F18DATA1, 5, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD6 = CAN1_F18DATA1_FD6_Values<CAN1::F18DATA1, 6, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD7 = CAN1_F18DATA1_FD7_Values<CAN1::F18DATA1, 7, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD8 = CAN1_F18DATA1_FD8_Values<CAN1::F18DATA1, 8, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD9 = CAN1_F18DATA1_FD9_Values<CAN1::F18DATA1, 9, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD10 = CAN1_F18DATA1_FD10_Values<CAN1::F18DATA1, 10, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD11 = CAN1_F18DATA1_FD11_Values<CAN1::F18DATA1, 11, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD12 = CAN1_F18DATA1_FD12_Values<CAN1::F18DATA1, 12, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD13 = CAN1_F18DATA1_FD13_Values<CAN1::F18DATA1, 13, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD14 = CAN1_F18DATA1_FD14_Values<CAN1::F18DATA1, 14, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD15 = CAN1_F18DATA1_FD15_Values<CAN1::F18DATA1, 15, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD16 = CAN1_F18DATA1_FD16_Values<CAN1::F18DATA1, 16, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD17 = CAN1_F18DATA1_FD17_Values<CAN1::F18DATA1, 17, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD18 = CAN1_F18DATA1_FD18_Values<CAN1::F18DATA1, 18, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD19 = CAN1_F18DATA1_FD19_Values<CAN1::F18DATA1, 19, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD20 = CAN1_F18DATA1_FD20_Values<CAN1::F18DATA1, 20, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD21 = CAN1_F18DATA1_FD21_Values<CAN1::F18DATA1, 21, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD22 = CAN1_F18DATA1_FD22_Values<CAN1::F18DATA1, 22, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD23 = CAN1_F18DATA1_FD23_Values<CAN1::F18DATA1, 23, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD24 = CAN1_F18DATA1_FD24_Values<CAN1::F18DATA1, 24, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD25 = CAN1_F18DATA1_FD25_Values<CAN1::F18DATA1, 25, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD26 = CAN1_F18DATA1_FD26_Values<CAN1::F18DATA1, 26, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD27 = CAN1_F18DATA1_FD27_Values<CAN1::F18DATA1, 27, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD28 = CAN1_F18DATA1_FD28_Values<CAN1::F18DATA1, 28, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD29 = CAN1_F18DATA1_FD29_Values<CAN1::F18DATA1, 29, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD30 = CAN1_F18DATA1_FD30_Values<CAN1::F18DATA1, 30, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FD31 = CAN1_F18DATA1_FD31_Values<CAN1::F18DATA1, 31, 1, ReadWriteMode, CAN1F18DATA1Base> ;
    using FieldValues = CAN1_F18DATA1_FD31_Values<CAN1::F18DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F18DATA1Pack  = Register<0x40006AD4, 32, ReadWriteMode, CAN1F18DATA1Base, T...> ;

  struct CAN1F19DATA0Base {} ;

  struct F19DATA0 : public RegisterBase<0x40006AD8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F19DATA0_FD0_Values<CAN1::F19DATA0, 0, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD1 = CAN1_F19DATA0_FD1_Values<CAN1::F19DATA0, 1, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD2 = CAN1_F19DATA0_FD2_Values<CAN1::F19DATA0, 2, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD3 = CAN1_F19DATA0_FD3_Values<CAN1::F19DATA0, 3, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD4 = CAN1_F19DATA0_FD4_Values<CAN1::F19DATA0, 4, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD5 = CAN1_F19DATA0_FD5_Values<CAN1::F19DATA0, 5, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD6 = CAN1_F19DATA0_FD6_Values<CAN1::F19DATA0, 6, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD7 = CAN1_F19DATA0_FD7_Values<CAN1::F19DATA0, 7, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD8 = CAN1_F19DATA0_FD8_Values<CAN1::F19DATA0, 8, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD9 = CAN1_F19DATA0_FD9_Values<CAN1::F19DATA0, 9, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD10 = CAN1_F19DATA0_FD10_Values<CAN1::F19DATA0, 10, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD11 = CAN1_F19DATA0_FD11_Values<CAN1::F19DATA0, 11, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD12 = CAN1_F19DATA0_FD12_Values<CAN1::F19DATA0, 12, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD13 = CAN1_F19DATA0_FD13_Values<CAN1::F19DATA0, 13, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD14 = CAN1_F19DATA0_FD14_Values<CAN1::F19DATA0, 14, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD15 = CAN1_F19DATA0_FD15_Values<CAN1::F19DATA0, 15, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD16 = CAN1_F19DATA0_FD16_Values<CAN1::F19DATA0, 16, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD17 = CAN1_F19DATA0_FD17_Values<CAN1::F19DATA0, 17, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD18 = CAN1_F19DATA0_FD18_Values<CAN1::F19DATA0, 18, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD19 = CAN1_F19DATA0_FD19_Values<CAN1::F19DATA0, 19, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD20 = CAN1_F19DATA0_FD20_Values<CAN1::F19DATA0, 20, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD21 = CAN1_F19DATA0_FD21_Values<CAN1::F19DATA0, 21, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD22 = CAN1_F19DATA0_FD22_Values<CAN1::F19DATA0, 22, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD23 = CAN1_F19DATA0_FD23_Values<CAN1::F19DATA0, 23, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD24 = CAN1_F19DATA0_FD24_Values<CAN1::F19DATA0, 24, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD25 = CAN1_F19DATA0_FD25_Values<CAN1::F19DATA0, 25, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD26 = CAN1_F19DATA0_FD26_Values<CAN1::F19DATA0, 26, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD27 = CAN1_F19DATA0_FD27_Values<CAN1::F19DATA0, 27, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD28 = CAN1_F19DATA0_FD28_Values<CAN1::F19DATA0, 28, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD29 = CAN1_F19DATA0_FD29_Values<CAN1::F19DATA0, 29, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD30 = CAN1_F19DATA0_FD30_Values<CAN1::F19DATA0, 30, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FD31 = CAN1_F19DATA0_FD31_Values<CAN1::F19DATA0, 31, 1, ReadWriteMode, CAN1F19DATA0Base> ;
    using FieldValues = CAN1_F19DATA0_FD31_Values<CAN1::F19DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19DATA0Pack  = Register<0x40006AD8, 32, ReadWriteMode, CAN1F19DATA0Base, T...> ;

  struct CAN1F19DATA1Base {} ;

  struct F19DATA1 : public RegisterBase<0x40006ADC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F19DATA1_FD0_Values<CAN1::F19DATA1, 0, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD1 = CAN1_F19DATA1_FD1_Values<CAN1::F19DATA1, 1, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD2 = CAN1_F19DATA1_FD2_Values<CAN1::F19DATA1, 2, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD3 = CAN1_F19DATA1_FD3_Values<CAN1::F19DATA1, 3, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD4 = CAN1_F19DATA1_FD4_Values<CAN1::F19DATA1, 4, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD5 = CAN1_F19DATA1_FD5_Values<CAN1::F19DATA1, 5, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD6 = CAN1_F19DATA1_FD6_Values<CAN1::F19DATA1, 6, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD7 = CAN1_F19DATA1_FD7_Values<CAN1::F19DATA1, 7, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD8 = CAN1_F19DATA1_FD8_Values<CAN1::F19DATA1, 8, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD9 = CAN1_F19DATA1_FD9_Values<CAN1::F19DATA1, 9, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD10 = CAN1_F19DATA1_FD10_Values<CAN1::F19DATA1, 10, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD11 = CAN1_F19DATA1_FD11_Values<CAN1::F19DATA1, 11, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD12 = CAN1_F19DATA1_FD12_Values<CAN1::F19DATA1, 12, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD13 = CAN1_F19DATA1_FD13_Values<CAN1::F19DATA1, 13, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD14 = CAN1_F19DATA1_FD14_Values<CAN1::F19DATA1, 14, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD15 = CAN1_F19DATA1_FD15_Values<CAN1::F19DATA1, 15, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD16 = CAN1_F19DATA1_FD16_Values<CAN1::F19DATA1, 16, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD17 = CAN1_F19DATA1_FD17_Values<CAN1::F19DATA1, 17, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD18 = CAN1_F19DATA1_FD18_Values<CAN1::F19DATA1, 18, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD19 = CAN1_F19DATA1_FD19_Values<CAN1::F19DATA1, 19, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD20 = CAN1_F19DATA1_FD20_Values<CAN1::F19DATA1, 20, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD21 = CAN1_F19DATA1_FD21_Values<CAN1::F19DATA1, 21, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD22 = CAN1_F19DATA1_FD22_Values<CAN1::F19DATA1, 22, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD23 = CAN1_F19DATA1_FD23_Values<CAN1::F19DATA1, 23, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD24 = CAN1_F19DATA1_FD24_Values<CAN1::F19DATA1, 24, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD25 = CAN1_F19DATA1_FD25_Values<CAN1::F19DATA1, 25, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD26 = CAN1_F19DATA1_FD26_Values<CAN1::F19DATA1, 26, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD27 = CAN1_F19DATA1_FD27_Values<CAN1::F19DATA1, 27, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD28 = CAN1_F19DATA1_FD28_Values<CAN1::F19DATA1, 28, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD29 = CAN1_F19DATA1_FD29_Values<CAN1::F19DATA1, 29, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD30 = CAN1_F19DATA1_FD30_Values<CAN1::F19DATA1, 30, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FD31 = CAN1_F19DATA1_FD31_Values<CAN1::F19DATA1, 31, 1, ReadWriteMode, CAN1F19DATA1Base> ;
    using FieldValues = CAN1_F19DATA1_FD31_Values<CAN1::F19DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F19DATA1Pack  = Register<0x40006ADC, 32, ReadWriteMode, CAN1F19DATA1Base, T...> ;

  struct CAN1F20DATA0Base {} ;

  struct F20DATA0 : public RegisterBase<0x40006AE0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F20DATA0_FD0_Values<CAN1::F20DATA0, 0, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD1 = CAN1_F20DATA0_FD1_Values<CAN1::F20DATA0, 1, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD2 = CAN1_F20DATA0_FD2_Values<CAN1::F20DATA0, 2, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD3 = CAN1_F20DATA0_FD3_Values<CAN1::F20DATA0, 3, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD4 = CAN1_F20DATA0_FD4_Values<CAN1::F20DATA0, 4, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD5 = CAN1_F20DATA0_FD5_Values<CAN1::F20DATA0, 5, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD6 = CAN1_F20DATA0_FD6_Values<CAN1::F20DATA0, 6, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD7 = CAN1_F20DATA0_FD7_Values<CAN1::F20DATA0, 7, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD8 = CAN1_F20DATA0_FD8_Values<CAN1::F20DATA0, 8, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD9 = CAN1_F20DATA0_FD9_Values<CAN1::F20DATA0, 9, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD10 = CAN1_F20DATA0_FD10_Values<CAN1::F20DATA0, 10, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD11 = CAN1_F20DATA0_FD11_Values<CAN1::F20DATA0, 11, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD12 = CAN1_F20DATA0_FD12_Values<CAN1::F20DATA0, 12, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD13 = CAN1_F20DATA0_FD13_Values<CAN1::F20DATA0, 13, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD14 = CAN1_F20DATA0_FD14_Values<CAN1::F20DATA0, 14, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD15 = CAN1_F20DATA0_FD15_Values<CAN1::F20DATA0, 15, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD16 = CAN1_F20DATA0_FD16_Values<CAN1::F20DATA0, 16, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD17 = CAN1_F20DATA0_FD17_Values<CAN1::F20DATA0, 17, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD18 = CAN1_F20DATA0_FD18_Values<CAN1::F20DATA0, 18, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD19 = CAN1_F20DATA0_FD19_Values<CAN1::F20DATA0, 19, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD20 = CAN1_F20DATA0_FD20_Values<CAN1::F20DATA0, 20, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD21 = CAN1_F20DATA0_FD21_Values<CAN1::F20DATA0, 21, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD22 = CAN1_F20DATA0_FD22_Values<CAN1::F20DATA0, 22, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD23 = CAN1_F20DATA0_FD23_Values<CAN1::F20DATA0, 23, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD24 = CAN1_F20DATA0_FD24_Values<CAN1::F20DATA0, 24, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD25 = CAN1_F20DATA0_FD25_Values<CAN1::F20DATA0, 25, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD26 = CAN1_F20DATA0_FD26_Values<CAN1::F20DATA0, 26, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD27 = CAN1_F20DATA0_FD27_Values<CAN1::F20DATA0, 27, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD28 = CAN1_F20DATA0_FD28_Values<CAN1::F20DATA0, 28, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD29 = CAN1_F20DATA0_FD29_Values<CAN1::F20DATA0, 29, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD30 = CAN1_F20DATA0_FD30_Values<CAN1::F20DATA0, 30, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FD31 = CAN1_F20DATA0_FD31_Values<CAN1::F20DATA0, 31, 1, ReadWriteMode, CAN1F20DATA0Base> ;
    using FieldValues = CAN1_F20DATA0_FD31_Values<CAN1::F20DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20DATA0Pack  = Register<0x40006AE0, 32, ReadWriteMode, CAN1F20DATA0Base, T...> ;

  struct CAN1F20DATA1Base {} ;

  struct F20DATA1 : public RegisterBase<0x40006AE4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F20DATA1_FD0_Values<CAN1::F20DATA1, 0, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD1 = CAN1_F20DATA1_FD1_Values<CAN1::F20DATA1, 1, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD2 = CAN1_F20DATA1_FD2_Values<CAN1::F20DATA1, 2, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD3 = CAN1_F20DATA1_FD3_Values<CAN1::F20DATA1, 3, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD4 = CAN1_F20DATA1_FD4_Values<CAN1::F20DATA1, 4, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD5 = CAN1_F20DATA1_FD5_Values<CAN1::F20DATA1, 5, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD6 = CAN1_F20DATA1_FD6_Values<CAN1::F20DATA1, 6, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD7 = CAN1_F20DATA1_FD7_Values<CAN1::F20DATA1, 7, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD8 = CAN1_F20DATA1_FD8_Values<CAN1::F20DATA1, 8, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD9 = CAN1_F20DATA1_FD9_Values<CAN1::F20DATA1, 9, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD10 = CAN1_F20DATA1_FD10_Values<CAN1::F20DATA1, 10, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD11 = CAN1_F20DATA1_FD11_Values<CAN1::F20DATA1, 11, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD12 = CAN1_F20DATA1_FD12_Values<CAN1::F20DATA1, 12, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD13 = CAN1_F20DATA1_FD13_Values<CAN1::F20DATA1, 13, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD14 = CAN1_F20DATA1_FD14_Values<CAN1::F20DATA1, 14, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD15 = CAN1_F20DATA1_FD15_Values<CAN1::F20DATA1, 15, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD16 = CAN1_F20DATA1_FD16_Values<CAN1::F20DATA1, 16, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD17 = CAN1_F20DATA1_FD17_Values<CAN1::F20DATA1, 17, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD18 = CAN1_F20DATA1_FD18_Values<CAN1::F20DATA1, 18, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD19 = CAN1_F20DATA1_FD19_Values<CAN1::F20DATA1, 19, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD20 = CAN1_F20DATA1_FD20_Values<CAN1::F20DATA1, 20, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD21 = CAN1_F20DATA1_FD21_Values<CAN1::F20DATA1, 21, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD22 = CAN1_F20DATA1_FD22_Values<CAN1::F20DATA1, 22, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD23 = CAN1_F20DATA1_FD23_Values<CAN1::F20DATA1, 23, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD24 = CAN1_F20DATA1_FD24_Values<CAN1::F20DATA1, 24, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD25 = CAN1_F20DATA1_FD25_Values<CAN1::F20DATA1, 25, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD26 = CAN1_F20DATA1_FD26_Values<CAN1::F20DATA1, 26, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD27 = CAN1_F20DATA1_FD27_Values<CAN1::F20DATA1, 27, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD28 = CAN1_F20DATA1_FD28_Values<CAN1::F20DATA1, 28, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD29 = CAN1_F20DATA1_FD29_Values<CAN1::F20DATA1, 29, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD30 = CAN1_F20DATA1_FD30_Values<CAN1::F20DATA1, 30, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FD31 = CAN1_F20DATA1_FD31_Values<CAN1::F20DATA1, 31, 1, ReadWriteMode, CAN1F20DATA1Base> ;
    using FieldValues = CAN1_F20DATA1_FD31_Values<CAN1::F20DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F20DATA1Pack  = Register<0x40006AE4, 32, ReadWriteMode, CAN1F20DATA1Base, T...> ;

  struct CAN1F21DATA0Base {} ;

  struct F21DATA0 : public RegisterBase<0x40006AE8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F21DATA0_FD0_Values<CAN1::F21DATA0, 0, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD1 = CAN1_F21DATA0_FD1_Values<CAN1::F21DATA0, 1, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD2 = CAN1_F21DATA0_FD2_Values<CAN1::F21DATA0, 2, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD3 = CAN1_F21DATA0_FD3_Values<CAN1::F21DATA0, 3, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD4 = CAN1_F21DATA0_FD4_Values<CAN1::F21DATA0, 4, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD5 = CAN1_F21DATA0_FD5_Values<CAN1::F21DATA0, 5, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD6 = CAN1_F21DATA0_FD6_Values<CAN1::F21DATA0, 6, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD7 = CAN1_F21DATA0_FD7_Values<CAN1::F21DATA0, 7, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD8 = CAN1_F21DATA0_FD8_Values<CAN1::F21DATA0, 8, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD9 = CAN1_F21DATA0_FD9_Values<CAN1::F21DATA0, 9, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD10 = CAN1_F21DATA0_FD10_Values<CAN1::F21DATA0, 10, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD11 = CAN1_F21DATA0_FD11_Values<CAN1::F21DATA0, 11, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD12 = CAN1_F21DATA0_FD12_Values<CAN1::F21DATA0, 12, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD13 = CAN1_F21DATA0_FD13_Values<CAN1::F21DATA0, 13, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD14 = CAN1_F21DATA0_FD14_Values<CAN1::F21DATA0, 14, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD15 = CAN1_F21DATA0_FD15_Values<CAN1::F21DATA0, 15, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD16 = CAN1_F21DATA0_FD16_Values<CAN1::F21DATA0, 16, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD17 = CAN1_F21DATA0_FD17_Values<CAN1::F21DATA0, 17, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD18 = CAN1_F21DATA0_FD18_Values<CAN1::F21DATA0, 18, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD19 = CAN1_F21DATA0_FD19_Values<CAN1::F21DATA0, 19, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD20 = CAN1_F21DATA0_FD20_Values<CAN1::F21DATA0, 20, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD21 = CAN1_F21DATA0_FD21_Values<CAN1::F21DATA0, 21, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD22 = CAN1_F21DATA0_FD22_Values<CAN1::F21DATA0, 22, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD23 = CAN1_F21DATA0_FD23_Values<CAN1::F21DATA0, 23, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD24 = CAN1_F21DATA0_FD24_Values<CAN1::F21DATA0, 24, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD25 = CAN1_F21DATA0_FD25_Values<CAN1::F21DATA0, 25, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD26 = CAN1_F21DATA0_FD26_Values<CAN1::F21DATA0, 26, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD27 = CAN1_F21DATA0_FD27_Values<CAN1::F21DATA0, 27, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD28 = CAN1_F21DATA0_FD28_Values<CAN1::F21DATA0, 28, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD29 = CAN1_F21DATA0_FD29_Values<CAN1::F21DATA0, 29, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD30 = CAN1_F21DATA0_FD30_Values<CAN1::F21DATA0, 30, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FD31 = CAN1_F21DATA0_FD31_Values<CAN1::F21DATA0, 31, 1, ReadWriteMode, CAN1F21DATA0Base> ;
    using FieldValues = CAN1_F21DATA0_FD31_Values<CAN1::F21DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21DATA0Pack  = Register<0x40006AE8, 32, ReadWriteMode, CAN1F21DATA0Base, T...> ;

  struct CAN1F21DATA1Base {} ;

  struct F21DATA1 : public RegisterBase<0x40006AEC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F21DATA1_FD0_Values<CAN1::F21DATA1, 0, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD1 = CAN1_F21DATA1_FD1_Values<CAN1::F21DATA1, 1, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD2 = CAN1_F21DATA1_FD2_Values<CAN1::F21DATA1, 2, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD3 = CAN1_F21DATA1_FD3_Values<CAN1::F21DATA1, 3, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD4 = CAN1_F21DATA1_FD4_Values<CAN1::F21DATA1, 4, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD5 = CAN1_F21DATA1_FD5_Values<CAN1::F21DATA1, 5, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD6 = CAN1_F21DATA1_FD6_Values<CAN1::F21DATA1, 6, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD7 = CAN1_F21DATA1_FD7_Values<CAN1::F21DATA1, 7, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD8 = CAN1_F21DATA1_FD8_Values<CAN1::F21DATA1, 8, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD9 = CAN1_F21DATA1_FD9_Values<CAN1::F21DATA1, 9, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD10 = CAN1_F21DATA1_FD10_Values<CAN1::F21DATA1, 10, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD11 = CAN1_F21DATA1_FD11_Values<CAN1::F21DATA1, 11, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD12 = CAN1_F21DATA1_FD12_Values<CAN1::F21DATA1, 12, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD13 = CAN1_F21DATA1_FD13_Values<CAN1::F21DATA1, 13, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD14 = CAN1_F21DATA1_FD14_Values<CAN1::F21DATA1, 14, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD15 = CAN1_F21DATA1_FD15_Values<CAN1::F21DATA1, 15, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD16 = CAN1_F21DATA1_FD16_Values<CAN1::F21DATA1, 16, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD17 = CAN1_F21DATA1_FD17_Values<CAN1::F21DATA1, 17, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD18 = CAN1_F21DATA1_FD18_Values<CAN1::F21DATA1, 18, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD19 = CAN1_F21DATA1_FD19_Values<CAN1::F21DATA1, 19, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD20 = CAN1_F21DATA1_FD20_Values<CAN1::F21DATA1, 20, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD21 = CAN1_F21DATA1_FD21_Values<CAN1::F21DATA1, 21, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD22 = CAN1_F21DATA1_FD22_Values<CAN1::F21DATA1, 22, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD23 = CAN1_F21DATA1_FD23_Values<CAN1::F21DATA1, 23, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD24 = CAN1_F21DATA1_FD24_Values<CAN1::F21DATA1, 24, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD25 = CAN1_F21DATA1_FD25_Values<CAN1::F21DATA1, 25, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD26 = CAN1_F21DATA1_FD26_Values<CAN1::F21DATA1, 26, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD27 = CAN1_F21DATA1_FD27_Values<CAN1::F21DATA1, 27, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD28 = CAN1_F21DATA1_FD28_Values<CAN1::F21DATA1, 28, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD29 = CAN1_F21DATA1_FD29_Values<CAN1::F21DATA1, 29, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD30 = CAN1_F21DATA1_FD30_Values<CAN1::F21DATA1, 30, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FD31 = CAN1_F21DATA1_FD31_Values<CAN1::F21DATA1, 31, 1, ReadWriteMode, CAN1F21DATA1Base> ;
    using FieldValues = CAN1_F21DATA1_FD31_Values<CAN1::F21DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F21DATA1Pack  = Register<0x40006AEC, 32, ReadWriteMode, CAN1F21DATA1Base, T...> ;

  struct CAN1F22DATA0Base {} ;

  struct F22DATA0 : public RegisterBase<0x40006AF0, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F22DATA0_FD0_Values<CAN1::F22DATA0, 0, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD1 = CAN1_F22DATA0_FD1_Values<CAN1::F22DATA0, 1, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD2 = CAN1_F22DATA0_FD2_Values<CAN1::F22DATA0, 2, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD3 = CAN1_F22DATA0_FD3_Values<CAN1::F22DATA0, 3, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD4 = CAN1_F22DATA0_FD4_Values<CAN1::F22DATA0, 4, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD5 = CAN1_F22DATA0_FD5_Values<CAN1::F22DATA0, 5, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD6 = CAN1_F22DATA0_FD6_Values<CAN1::F22DATA0, 6, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD7 = CAN1_F22DATA0_FD7_Values<CAN1::F22DATA0, 7, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD8 = CAN1_F22DATA0_FD8_Values<CAN1::F22DATA0, 8, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD9 = CAN1_F22DATA0_FD9_Values<CAN1::F22DATA0, 9, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD10 = CAN1_F22DATA0_FD10_Values<CAN1::F22DATA0, 10, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD11 = CAN1_F22DATA0_FD11_Values<CAN1::F22DATA0, 11, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD12 = CAN1_F22DATA0_FD12_Values<CAN1::F22DATA0, 12, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD13 = CAN1_F22DATA0_FD13_Values<CAN1::F22DATA0, 13, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD14 = CAN1_F22DATA0_FD14_Values<CAN1::F22DATA0, 14, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD15 = CAN1_F22DATA0_FD15_Values<CAN1::F22DATA0, 15, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD16 = CAN1_F22DATA0_FD16_Values<CAN1::F22DATA0, 16, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD17 = CAN1_F22DATA0_FD17_Values<CAN1::F22DATA0, 17, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD18 = CAN1_F22DATA0_FD18_Values<CAN1::F22DATA0, 18, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD19 = CAN1_F22DATA0_FD19_Values<CAN1::F22DATA0, 19, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD20 = CAN1_F22DATA0_FD20_Values<CAN1::F22DATA0, 20, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD21 = CAN1_F22DATA0_FD21_Values<CAN1::F22DATA0, 21, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD22 = CAN1_F22DATA0_FD22_Values<CAN1::F22DATA0, 22, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD23 = CAN1_F22DATA0_FD23_Values<CAN1::F22DATA0, 23, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD24 = CAN1_F22DATA0_FD24_Values<CAN1::F22DATA0, 24, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD25 = CAN1_F22DATA0_FD25_Values<CAN1::F22DATA0, 25, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD26 = CAN1_F22DATA0_FD26_Values<CAN1::F22DATA0, 26, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD27 = CAN1_F22DATA0_FD27_Values<CAN1::F22DATA0, 27, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD28 = CAN1_F22DATA0_FD28_Values<CAN1::F22DATA0, 28, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD29 = CAN1_F22DATA0_FD29_Values<CAN1::F22DATA0, 29, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD30 = CAN1_F22DATA0_FD30_Values<CAN1::F22DATA0, 30, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FD31 = CAN1_F22DATA0_FD31_Values<CAN1::F22DATA0, 31, 1, ReadWriteMode, CAN1F22DATA0Base> ;
    using FieldValues = CAN1_F22DATA0_FD31_Values<CAN1::F22DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22DATA0Pack  = Register<0x40006AF0, 32, ReadWriteMode, CAN1F22DATA0Base, T...> ;

  struct CAN1F22DATA1Base {} ;

  struct F22DATA1 : public RegisterBase<0x40006AF4, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F22DATA1_FD0_Values<CAN1::F22DATA1, 0, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD1 = CAN1_F22DATA1_FD1_Values<CAN1::F22DATA1, 1, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD2 = CAN1_F22DATA1_FD2_Values<CAN1::F22DATA1, 2, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD3 = CAN1_F22DATA1_FD3_Values<CAN1::F22DATA1, 3, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD4 = CAN1_F22DATA1_FD4_Values<CAN1::F22DATA1, 4, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD5 = CAN1_F22DATA1_FD5_Values<CAN1::F22DATA1, 5, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD6 = CAN1_F22DATA1_FD6_Values<CAN1::F22DATA1, 6, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD7 = CAN1_F22DATA1_FD7_Values<CAN1::F22DATA1, 7, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD8 = CAN1_F22DATA1_FD8_Values<CAN1::F22DATA1, 8, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD9 = CAN1_F22DATA1_FD9_Values<CAN1::F22DATA1, 9, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD10 = CAN1_F22DATA1_FD10_Values<CAN1::F22DATA1, 10, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD11 = CAN1_F22DATA1_FD11_Values<CAN1::F22DATA1, 11, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD12 = CAN1_F22DATA1_FD12_Values<CAN1::F22DATA1, 12, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD13 = CAN1_F22DATA1_FD13_Values<CAN1::F22DATA1, 13, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD14 = CAN1_F22DATA1_FD14_Values<CAN1::F22DATA1, 14, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD15 = CAN1_F22DATA1_FD15_Values<CAN1::F22DATA1, 15, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD16 = CAN1_F22DATA1_FD16_Values<CAN1::F22DATA1, 16, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD17 = CAN1_F22DATA1_FD17_Values<CAN1::F22DATA1, 17, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD18 = CAN1_F22DATA1_FD18_Values<CAN1::F22DATA1, 18, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD19 = CAN1_F22DATA1_FD19_Values<CAN1::F22DATA1, 19, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD20 = CAN1_F22DATA1_FD20_Values<CAN1::F22DATA1, 20, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD21 = CAN1_F22DATA1_FD21_Values<CAN1::F22DATA1, 21, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD22 = CAN1_F22DATA1_FD22_Values<CAN1::F22DATA1, 22, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD23 = CAN1_F22DATA1_FD23_Values<CAN1::F22DATA1, 23, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD24 = CAN1_F22DATA1_FD24_Values<CAN1::F22DATA1, 24, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD25 = CAN1_F22DATA1_FD25_Values<CAN1::F22DATA1, 25, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD26 = CAN1_F22DATA1_FD26_Values<CAN1::F22DATA1, 26, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD27 = CAN1_F22DATA1_FD27_Values<CAN1::F22DATA1, 27, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD28 = CAN1_F22DATA1_FD28_Values<CAN1::F22DATA1, 28, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD29 = CAN1_F22DATA1_FD29_Values<CAN1::F22DATA1, 29, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD30 = CAN1_F22DATA1_FD30_Values<CAN1::F22DATA1, 30, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FD31 = CAN1_F22DATA1_FD31_Values<CAN1::F22DATA1, 31, 1, ReadWriteMode, CAN1F22DATA1Base> ;
    using FieldValues = CAN1_F22DATA1_FD31_Values<CAN1::F22DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F22DATA1Pack  = Register<0x40006AF4, 32, ReadWriteMode, CAN1F22DATA1Base, T...> ;

  struct CAN1F23DATA0Base {} ;

  struct F23DATA0 : public RegisterBase<0x40006AF8, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F23DATA0_FD0_Values<CAN1::F23DATA0, 0, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD1 = CAN1_F23DATA0_FD1_Values<CAN1::F23DATA0, 1, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD2 = CAN1_F23DATA0_FD2_Values<CAN1::F23DATA0, 2, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD3 = CAN1_F23DATA0_FD3_Values<CAN1::F23DATA0, 3, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD4 = CAN1_F23DATA0_FD4_Values<CAN1::F23DATA0, 4, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD5 = CAN1_F23DATA0_FD5_Values<CAN1::F23DATA0, 5, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD6 = CAN1_F23DATA0_FD6_Values<CAN1::F23DATA0, 6, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD7 = CAN1_F23DATA0_FD7_Values<CAN1::F23DATA0, 7, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD8 = CAN1_F23DATA0_FD8_Values<CAN1::F23DATA0, 8, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD9 = CAN1_F23DATA0_FD9_Values<CAN1::F23DATA0, 9, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD10 = CAN1_F23DATA0_FD10_Values<CAN1::F23DATA0, 10, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD11 = CAN1_F23DATA0_FD11_Values<CAN1::F23DATA0, 11, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD12 = CAN1_F23DATA0_FD12_Values<CAN1::F23DATA0, 12, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD13 = CAN1_F23DATA0_FD13_Values<CAN1::F23DATA0, 13, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD14 = CAN1_F23DATA0_FD14_Values<CAN1::F23DATA0, 14, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD15 = CAN1_F23DATA0_FD15_Values<CAN1::F23DATA0, 15, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD16 = CAN1_F23DATA0_FD16_Values<CAN1::F23DATA0, 16, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD17 = CAN1_F23DATA0_FD17_Values<CAN1::F23DATA0, 17, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD18 = CAN1_F23DATA0_FD18_Values<CAN1::F23DATA0, 18, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD19 = CAN1_F23DATA0_FD19_Values<CAN1::F23DATA0, 19, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD20 = CAN1_F23DATA0_FD20_Values<CAN1::F23DATA0, 20, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD21 = CAN1_F23DATA0_FD21_Values<CAN1::F23DATA0, 21, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD22 = CAN1_F23DATA0_FD22_Values<CAN1::F23DATA0, 22, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD23 = CAN1_F23DATA0_FD23_Values<CAN1::F23DATA0, 23, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD24 = CAN1_F23DATA0_FD24_Values<CAN1::F23DATA0, 24, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD25 = CAN1_F23DATA0_FD25_Values<CAN1::F23DATA0, 25, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD26 = CAN1_F23DATA0_FD26_Values<CAN1::F23DATA0, 26, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD27 = CAN1_F23DATA0_FD27_Values<CAN1::F23DATA0, 27, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD28 = CAN1_F23DATA0_FD28_Values<CAN1::F23DATA0, 28, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD29 = CAN1_F23DATA0_FD29_Values<CAN1::F23DATA0, 29, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD30 = CAN1_F23DATA0_FD30_Values<CAN1::F23DATA0, 30, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FD31 = CAN1_F23DATA0_FD31_Values<CAN1::F23DATA0, 31, 1, ReadWriteMode, CAN1F23DATA0Base> ;
    using FieldValues = CAN1_F23DATA0_FD31_Values<CAN1::F23DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23DATA0Pack  = Register<0x40006AF8, 32, ReadWriteMode, CAN1F23DATA0Base, T...> ;

  struct CAN1F23DATA1Base {} ;

  struct F23DATA1 : public RegisterBase<0x40006AFC, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F23DATA1_FD0_Values<CAN1::F23DATA1, 0, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD1 = CAN1_F23DATA1_FD1_Values<CAN1::F23DATA1, 1, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD2 = CAN1_F23DATA1_FD2_Values<CAN1::F23DATA1, 2, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD3 = CAN1_F23DATA1_FD3_Values<CAN1::F23DATA1, 3, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD4 = CAN1_F23DATA1_FD4_Values<CAN1::F23DATA1, 4, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD5 = CAN1_F23DATA1_FD5_Values<CAN1::F23DATA1, 5, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD6 = CAN1_F23DATA1_FD6_Values<CAN1::F23DATA1, 6, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD7 = CAN1_F23DATA1_FD7_Values<CAN1::F23DATA1, 7, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD8 = CAN1_F23DATA1_FD8_Values<CAN1::F23DATA1, 8, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD9 = CAN1_F23DATA1_FD9_Values<CAN1::F23DATA1, 9, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD10 = CAN1_F23DATA1_FD10_Values<CAN1::F23DATA1, 10, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD11 = CAN1_F23DATA1_FD11_Values<CAN1::F23DATA1, 11, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD12 = CAN1_F23DATA1_FD12_Values<CAN1::F23DATA1, 12, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD13 = CAN1_F23DATA1_FD13_Values<CAN1::F23DATA1, 13, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD14 = CAN1_F23DATA1_FD14_Values<CAN1::F23DATA1, 14, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD15 = CAN1_F23DATA1_FD15_Values<CAN1::F23DATA1, 15, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD16 = CAN1_F23DATA1_FD16_Values<CAN1::F23DATA1, 16, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD17 = CAN1_F23DATA1_FD17_Values<CAN1::F23DATA1, 17, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD18 = CAN1_F23DATA1_FD18_Values<CAN1::F23DATA1, 18, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD19 = CAN1_F23DATA1_FD19_Values<CAN1::F23DATA1, 19, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD20 = CAN1_F23DATA1_FD20_Values<CAN1::F23DATA1, 20, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD21 = CAN1_F23DATA1_FD21_Values<CAN1::F23DATA1, 21, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD22 = CAN1_F23DATA1_FD22_Values<CAN1::F23DATA1, 22, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD23 = CAN1_F23DATA1_FD23_Values<CAN1::F23DATA1, 23, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD24 = CAN1_F23DATA1_FD24_Values<CAN1::F23DATA1, 24, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD25 = CAN1_F23DATA1_FD25_Values<CAN1::F23DATA1, 25, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD26 = CAN1_F23DATA1_FD26_Values<CAN1::F23DATA1, 26, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD27 = CAN1_F23DATA1_FD27_Values<CAN1::F23DATA1, 27, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD28 = CAN1_F23DATA1_FD28_Values<CAN1::F23DATA1, 28, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD29 = CAN1_F23DATA1_FD29_Values<CAN1::F23DATA1, 29, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD30 = CAN1_F23DATA1_FD30_Values<CAN1::F23DATA1, 30, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FD31 = CAN1_F23DATA1_FD31_Values<CAN1::F23DATA1, 31, 1, ReadWriteMode, CAN1F23DATA1Base> ;
    using FieldValues = CAN1_F23DATA1_FD31_Values<CAN1::F23DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F23DATA1Pack  = Register<0x40006AFC, 32, ReadWriteMode, CAN1F23DATA1Base, T...> ;

  struct CAN1F24DATA0Base {} ;

  struct F24DATA0 : public RegisterBase<0x40006B00, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F24DATA0_FD0_Values<CAN1::F24DATA0, 0, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD1 = CAN1_F24DATA0_FD1_Values<CAN1::F24DATA0, 1, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD2 = CAN1_F24DATA0_FD2_Values<CAN1::F24DATA0, 2, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD3 = CAN1_F24DATA0_FD3_Values<CAN1::F24DATA0, 3, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD4 = CAN1_F24DATA0_FD4_Values<CAN1::F24DATA0, 4, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD5 = CAN1_F24DATA0_FD5_Values<CAN1::F24DATA0, 5, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD6 = CAN1_F24DATA0_FD6_Values<CAN1::F24DATA0, 6, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD7 = CAN1_F24DATA0_FD7_Values<CAN1::F24DATA0, 7, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD8 = CAN1_F24DATA0_FD8_Values<CAN1::F24DATA0, 8, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD9 = CAN1_F24DATA0_FD9_Values<CAN1::F24DATA0, 9, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD10 = CAN1_F24DATA0_FD10_Values<CAN1::F24DATA0, 10, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD11 = CAN1_F24DATA0_FD11_Values<CAN1::F24DATA0, 11, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD12 = CAN1_F24DATA0_FD12_Values<CAN1::F24DATA0, 12, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD13 = CAN1_F24DATA0_FD13_Values<CAN1::F24DATA0, 13, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD14 = CAN1_F24DATA0_FD14_Values<CAN1::F24DATA0, 14, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD15 = CAN1_F24DATA0_FD15_Values<CAN1::F24DATA0, 15, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD16 = CAN1_F24DATA0_FD16_Values<CAN1::F24DATA0, 16, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD17 = CAN1_F24DATA0_FD17_Values<CAN1::F24DATA0, 17, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD18 = CAN1_F24DATA0_FD18_Values<CAN1::F24DATA0, 18, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD19 = CAN1_F24DATA0_FD19_Values<CAN1::F24DATA0, 19, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD20 = CAN1_F24DATA0_FD20_Values<CAN1::F24DATA0, 20, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD21 = CAN1_F24DATA0_FD21_Values<CAN1::F24DATA0, 21, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD22 = CAN1_F24DATA0_FD22_Values<CAN1::F24DATA0, 22, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD23 = CAN1_F24DATA0_FD23_Values<CAN1::F24DATA0, 23, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD24 = CAN1_F24DATA0_FD24_Values<CAN1::F24DATA0, 24, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD25 = CAN1_F24DATA0_FD25_Values<CAN1::F24DATA0, 25, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD26 = CAN1_F24DATA0_FD26_Values<CAN1::F24DATA0, 26, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD27 = CAN1_F24DATA0_FD27_Values<CAN1::F24DATA0, 27, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD28 = CAN1_F24DATA0_FD28_Values<CAN1::F24DATA0, 28, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD29 = CAN1_F24DATA0_FD29_Values<CAN1::F24DATA0, 29, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD30 = CAN1_F24DATA0_FD30_Values<CAN1::F24DATA0, 30, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FD31 = CAN1_F24DATA0_FD31_Values<CAN1::F24DATA0, 31, 1, ReadWriteMode, CAN1F24DATA0Base> ;
    using FieldValues = CAN1_F24DATA0_FD31_Values<CAN1::F24DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24DATA0Pack  = Register<0x40006B00, 32, ReadWriteMode, CAN1F24DATA0Base, T...> ;

  struct CAN1F24DATA1Base {} ;

  struct F24DATA1 : public RegisterBase<0x40006B04, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F24DATA1_FD0_Values<CAN1::F24DATA1, 0, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD1 = CAN1_F24DATA1_FD1_Values<CAN1::F24DATA1, 1, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD2 = CAN1_F24DATA1_FD2_Values<CAN1::F24DATA1, 2, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD3 = CAN1_F24DATA1_FD3_Values<CAN1::F24DATA1, 3, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD4 = CAN1_F24DATA1_FD4_Values<CAN1::F24DATA1, 4, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD5 = CAN1_F24DATA1_FD5_Values<CAN1::F24DATA1, 5, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD6 = CAN1_F24DATA1_FD6_Values<CAN1::F24DATA1, 6, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD7 = CAN1_F24DATA1_FD7_Values<CAN1::F24DATA1, 7, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD8 = CAN1_F24DATA1_FD8_Values<CAN1::F24DATA1, 8, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD9 = CAN1_F24DATA1_FD9_Values<CAN1::F24DATA1, 9, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD10 = CAN1_F24DATA1_FD10_Values<CAN1::F24DATA1, 10, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD11 = CAN1_F24DATA1_FD11_Values<CAN1::F24DATA1, 11, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD12 = CAN1_F24DATA1_FD12_Values<CAN1::F24DATA1, 12, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD13 = CAN1_F24DATA1_FD13_Values<CAN1::F24DATA1, 13, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD14 = CAN1_F24DATA1_FD14_Values<CAN1::F24DATA1, 14, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD15 = CAN1_F24DATA1_FD15_Values<CAN1::F24DATA1, 15, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD16 = CAN1_F24DATA1_FD16_Values<CAN1::F24DATA1, 16, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD17 = CAN1_F24DATA1_FD17_Values<CAN1::F24DATA1, 17, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD18 = CAN1_F24DATA1_FD18_Values<CAN1::F24DATA1, 18, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD19 = CAN1_F24DATA1_FD19_Values<CAN1::F24DATA1, 19, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD20 = CAN1_F24DATA1_FD20_Values<CAN1::F24DATA1, 20, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD21 = CAN1_F24DATA1_FD21_Values<CAN1::F24DATA1, 21, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD22 = CAN1_F24DATA1_FD22_Values<CAN1::F24DATA1, 22, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD23 = CAN1_F24DATA1_FD23_Values<CAN1::F24DATA1, 23, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD24 = CAN1_F24DATA1_FD24_Values<CAN1::F24DATA1, 24, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD25 = CAN1_F24DATA1_FD25_Values<CAN1::F24DATA1, 25, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD26 = CAN1_F24DATA1_FD26_Values<CAN1::F24DATA1, 26, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD27 = CAN1_F24DATA1_FD27_Values<CAN1::F24DATA1, 27, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD28 = CAN1_F24DATA1_FD28_Values<CAN1::F24DATA1, 28, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD29 = CAN1_F24DATA1_FD29_Values<CAN1::F24DATA1, 29, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD30 = CAN1_F24DATA1_FD30_Values<CAN1::F24DATA1, 30, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FD31 = CAN1_F24DATA1_FD31_Values<CAN1::F24DATA1, 31, 1, ReadWriteMode, CAN1F24DATA1Base> ;
    using FieldValues = CAN1_F24DATA1_FD31_Values<CAN1::F24DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F24DATA1Pack  = Register<0x40006B04, 32, ReadWriteMode, CAN1F24DATA1Base, T...> ;

  struct CAN1F25DATA0Base {} ;

  struct F25DATA0 : public RegisterBase<0x40006B08, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F25DATA0_FD0_Values<CAN1::F25DATA0, 0, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD1 = CAN1_F25DATA0_FD1_Values<CAN1::F25DATA0, 1, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD2 = CAN1_F25DATA0_FD2_Values<CAN1::F25DATA0, 2, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD3 = CAN1_F25DATA0_FD3_Values<CAN1::F25DATA0, 3, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD4 = CAN1_F25DATA0_FD4_Values<CAN1::F25DATA0, 4, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD5 = CAN1_F25DATA0_FD5_Values<CAN1::F25DATA0, 5, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD6 = CAN1_F25DATA0_FD6_Values<CAN1::F25DATA0, 6, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD7 = CAN1_F25DATA0_FD7_Values<CAN1::F25DATA0, 7, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD8 = CAN1_F25DATA0_FD8_Values<CAN1::F25DATA0, 8, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD9 = CAN1_F25DATA0_FD9_Values<CAN1::F25DATA0, 9, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD10 = CAN1_F25DATA0_FD10_Values<CAN1::F25DATA0, 10, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD11 = CAN1_F25DATA0_FD11_Values<CAN1::F25DATA0, 11, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD12 = CAN1_F25DATA0_FD12_Values<CAN1::F25DATA0, 12, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD13 = CAN1_F25DATA0_FD13_Values<CAN1::F25DATA0, 13, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD14 = CAN1_F25DATA0_FD14_Values<CAN1::F25DATA0, 14, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD15 = CAN1_F25DATA0_FD15_Values<CAN1::F25DATA0, 15, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD16 = CAN1_F25DATA0_FD16_Values<CAN1::F25DATA0, 16, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD17 = CAN1_F25DATA0_FD17_Values<CAN1::F25DATA0, 17, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD18 = CAN1_F25DATA0_FD18_Values<CAN1::F25DATA0, 18, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD19 = CAN1_F25DATA0_FD19_Values<CAN1::F25DATA0, 19, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD20 = CAN1_F25DATA0_FD20_Values<CAN1::F25DATA0, 20, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD21 = CAN1_F25DATA0_FD21_Values<CAN1::F25DATA0, 21, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD22 = CAN1_F25DATA0_FD22_Values<CAN1::F25DATA0, 22, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD23 = CAN1_F25DATA0_FD23_Values<CAN1::F25DATA0, 23, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD24 = CAN1_F25DATA0_FD24_Values<CAN1::F25DATA0, 24, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD25 = CAN1_F25DATA0_FD25_Values<CAN1::F25DATA0, 25, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD26 = CAN1_F25DATA0_FD26_Values<CAN1::F25DATA0, 26, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD27 = CAN1_F25DATA0_FD27_Values<CAN1::F25DATA0, 27, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD28 = CAN1_F25DATA0_FD28_Values<CAN1::F25DATA0, 28, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD29 = CAN1_F25DATA0_FD29_Values<CAN1::F25DATA0, 29, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD30 = CAN1_F25DATA0_FD30_Values<CAN1::F25DATA0, 30, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FD31 = CAN1_F25DATA0_FD31_Values<CAN1::F25DATA0, 31, 1, ReadWriteMode, CAN1F25DATA0Base> ;
    using FieldValues = CAN1_F25DATA0_FD31_Values<CAN1::F25DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25DATA0Pack  = Register<0x40006B08, 32, ReadWriteMode, CAN1F25DATA0Base, T...> ;

  struct CAN1F25DATA1Base {} ;

  struct F25DATA1 : public RegisterBase<0x40006B0C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F25DATA1_FD0_Values<CAN1::F25DATA1, 0, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD1 = CAN1_F25DATA1_FD1_Values<CAN1::F25DATA1, 1, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD2 = CAN1_F25DATA1_FD2_Values<CAN1::F25DATA1, 2, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD3 = CAN1_F25DATA1_FD3_Values<CAN1::F25DATA1, 3, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD4 = CAN1_F25DATA1_FD4_Values<CAN1::F25DATA1, 4, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD5 = CAN1_F25DATA1_FD5_Values<CAN1::F25DATA1, 5, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD6 = CAN1_F25DATA1_FD6_Values<CAN1::F25DATA1, 6, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD7 = CAN1_F25DATA1_FD7_Values<CAN1::F25DATA1, 7, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD8 = CAN1_F25DATA1_FD8_Values<CAN1::F25DATA1, 8, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD9 = CAN1_F25DATA1_FD9_Values<CAN1::F25DATA1, 9, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD10 = CAN1_F25DATA1_FD10_Values<CAN1::F25DATA1, 10, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD11 = CAN1_F25DATA1_FD11_Values<CAN1::F25DATA1, 11, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD12 = CAN1_F25DATA1_FD12_Values<CAN1::F25DATA1, 12, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD13 = CAN1_F25DATA1_FD13_Values<CAN1::F25DATA1, 13, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD14 = CAN1_F25DATA1_FD14_Values<CAN1::F25DATA1, 14, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD15 = CAN1_F25DATA1_FD15_Values<CAN1::F25DATA1, 15, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD16 = CAN1_F25DATA1_FD16_Values<CAN1::F25DATA1, 16, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD17 = CAN1_F25DATA1_FD17_Values<CAN1::F25DATA1, 17, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD18 = CAN1_F25DATA1_FD18_Values<CAN1::F25DATA1, 18, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD19 = CAN1_F25DATA1_FD19_Values<CAN1::F25DATA1, 19, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD20 = CAN1_F25DATA1_FD20_Values<CAN1::F25DATA1, 20, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD21 = CAN1_F25DATA1_FD21_Values<CAN1::F25DATA1, 21, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD22 = CAN1_F25DATA1_FD22_Values<CAN1::F25DATA1, 22, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD23 = CAN1_F25DATA1_FD23_Values<CAN1::F25DATA1, 23, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD24 = CAN1_F25DATA1_FD24_Values<CAN1::F25DATA1, 24, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD25 = CAN1_F25DATA1_FD25_Values<CAN1::F25DATA1, 25, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD26 = CAN1_F25DATA1_FD26_Values<CAN1::F25DATA1, 26, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD27 = CAN1_F25DATA1_FD27_Values<CAN1::F25DATA1, 27, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD28 = CAN1_F25DATA1_FD28_Values<CAN1::F25DATA1, 28, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD29 = CAN1_F25DATA1_FD29_Values<CAN1::F25DATA1, 29, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD30 = CAN1_F25DATA1_FD30_Values<CAN1::F25DATA1, 30, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FD31 = CAN1_F25DATA1_FD31_Values<CAN1::F25DATA1, 31, 1, ReadWriteMode, CAN1F25DATA1Base> ;
    using FieldValues = CAN1_F25DATA1_FD31_Values<CAN1::F25DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F25DATA1Pack  = Register<0x40006B0C, 32, ReadWriteMode, CAN1F25DATA1Base, T...> ;

  struct CAN1F26DATA0Base {} ;

  struct F26DATA0 : public RegisterBase<0x40006B10, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F26DATA0_FD0_Values<CAN1::F26DATA0, 0, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD1 = CAN1_F26DATA0_FD1_Values<CAN1::F26DATA0, 1, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD2 = CAN1_F26DATA0_FD2_Values<CAN1::F26DATA0, 2, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD3 = CAN1_F26DATA0_FD3_Values<CAN1::F26DATA0, 3, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD4 = CAN1_F26DATA0_FD4_Values<CAN1::F26DATA0, 4, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD5 = CAN1_F26DATA0_FD5_Values<CAN1::F26DATA0, 5, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD6 = CAN1_F26DATA0_FD6_Values<CAN1::F26DATA0, 6, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD7 = CAN1_F26DATA0_FD7_Values<CAN1::F26DATA0, 7, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD8 = CAN1_F26DATA0_FD8_Values<CAN1::F26DATA0, 8, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD9 = CAN1_F26DATA0_FD9_Values<CAN1::F26DATA0, 9, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD10 = CAN1_F26DATA0_FD10_Values<CAN1::F26DATA0, 10, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD11 = CAN1_F26DATA0_FD11_Values<CAN1::F26DATA0, 11, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD12 = CAN1_F26DATA0_FD12_Values<CAN1::F26DATA0, 12, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD13 = CAN1_F26DATA0_FD13_Values<CAN1::F26DATA0, 13, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD14 = CAN1_F26DATA0_FD14_Values<CAN1::F26DATA0, 14, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD15 = CAN1_F26DATA0_FD15_Values<CAN1::F26DATA0, 15, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD16 = CAN1_F26DATA0_FD16_Values<CAN1::F26DATA0, 16, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD17 = CAN1_F26DATA0_FD17_Values<CAN1::F26DATA0, 17, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD18 = CAN1_F26DATA0_FD18_Values<CAN1::F26DATA0, 18, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD19 = CAN1_F26DATA0_FD19_Values<CAN1::F26DATA0, 19, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD20 = CAN1_F26DATA0_FD20_Values<CAN1::F26DATA0, 20, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD21 = CAN1_F26DATA0_FD21_Values<CAN1::F26DATA0, 21, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD22 = CAN1_F26DATA0_FD22_Values<CAN1::F26DATA0, 22, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD23 = CAN1_F26DATA0_FD23_Values<CAN1::F26DATA0, 23, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD24 = CAN1_F26DATA0_FD24_Values<CAN1::F26DATA0, 24, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD25 = CAN1_F26DATA0_FD25_Values<CAN1::F26DATA0, 25, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD26 = CAN1_F26DATA0_FD26_Values<CAN1::F26DATA0, 26, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD27 = CAN1_F26DATA0_FD27_Values<CAN1::F26DATA0, 27, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD28 = CAN1_F26DATA0_FD28_Values<CAN1::F26DATA0, 28, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD29 = CAN1_F26DATA0_FD29_Values<CAN1::F26DATA0, 29, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD30 = CAN1_F26DATA0_FD30_Values<CAN1::F26DATA0, 30, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FD31 = CAN1_F26DATA0_FD31_Values<CAN1::F26DATA0, 31, 1, ReadWriteMode, CAN1F26DATA0Base> ;
    using FieldValues = CAN1_F26DATA0_FD31_Values<CAN1::F26DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26DATA0Pack  = Register<0x40006B10, 32, ReadWriteMode, CAN1F26DATA0Base, T...> ;

  struct CAN1F26DATA1Base {} ;

  struct F26DATA1 : public RegisterBase<0x40006B14, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F26DATA1_FD0_Values<CAN1::F26DATA1, 0, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD1 = CAN1_F26DATA1_FD1_Values<CAN1::F26DATA1, 1, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD2 = CAN1_F26DATA1_FD2_Values<CAN1::F26DATA1, 2, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD3 = CAN1_F26DATA1_FD3_Values<CAN1::F26DATA1, 3, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD4 = CAN1_F26DATA1_FD4_Values<CAN1::F26DATA1, 4, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD5 = CAN1_F26DATA1_FD5_Values<CAN1::F26DATA1, 5, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD6 = CAN1_F26DATA1_FD6_Values<CAN1::F26DATA1, 6, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD7 = CAN1_F26DATA1_FD7_Values<CAN1::F26DATA1, 7, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD8 = CAN1_F26DATA1_FD8_Values<CAN1::F26DATA1, 8, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD9 = CAN1_F26DATA1_FD9_Values<CAN1::F26DATA1, 9, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD10 = CAN1_F26DATA1_FD10_Values<CAN1::F26DATA1, 10, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD11 = CAN1_F26DATA1_FD11_Values<CAN1::F26DATA1, 11, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD12 = CAN1_F26DATA1_FD12_Values<CAN1::F26DATA1, 12, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD13 = CAN1_F26DATA1_FD13_Values<CAN1::F26DATA1, 13, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD14 = CAN1_F26DATA1_FD14_Values<CAN1::F26DATA1, 14, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD15 = CAN1_F26DATA1_FD15_Values<CAN1::F26DATA1, 15, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD16 = CAN1_F26DATA1_FD16_Values<CAN1::F26DATA1, 16, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD17 = CAN1_F26DATA1_FD17_Values<CAN1::F26DATA1, 17, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD18 = CAN1_F26DATA1_FD18_Values<CAN1::F26DATA1, 18, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD19 = CAN1_F26DATA1_FD19_Values<CAN1::F26DATA1, 19, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD20 = CAN1_F26DATA1_FD20_Values<CAN1::F26DATA1, 20, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD21 = CAN1_F26DATA1_FD21_Values<CAN1::F26DATA1, 21, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD22 = CAN1_F26DATA1_FD22_Values<CAN1::F26DATA1, 22, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD23 = CAN1_F26DATA1_FD23_Values<CAN1::F26DATA1, 23, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD24 = CAN1_F26DATA1_FD24_Values<CAN1::F26DATA1, 24, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD25 = CAN1_F26DATA1_FD25_Values<CAN1::F26DATA1, 25, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD26 = CAN1_F26DATA1_FD26_Values<CAN1::F26DATA1, 26, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD27 = CAN1_F26DATA1_FD27_Values<CAN1::F26DATA1, 27, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD28 = CAN1_F26DATA1_FD28_Values<CAN1::F26DATA1, 28, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD29 = CAN1_F26DATA1_FD29_Values<CAN1::F26DATA1, 29, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD30 = CAN1_F26DATA1_FD30_Values<CAN1::F26DATA1, 30, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FD31 = CAN1_F26DATA1_FD31_Values<CAN1::F26DATA1, 31, 1, ReadWriteMode, CAN1F26DATA1Base> ;
    using FieldValues = CAN1_F26DATA1_FD31_Values<CAN1::F26DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F26DATA1Pack  = Register<0x40006B14, 32, ReadWriteMode, CAN1F26DATA1Base, T...> ;

  struct CAN1F27DATA0Base {} ;

  struct F27DATA0 : public RegisterBase<0x40006B18, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F27DATA0_FD0_Values<CAN1::F27DATA0, 0, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD1 = CAN1_F27DATA0_FD1_Values<CAN1::F27DATA0, 1, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD2 = CAN1_F27DATA0_FD2_Values<CAN1::F27DATA0, 2, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD3 = CAN1_F27DATA0_FD3_Values<CAN1::F27DATA0, 3, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD4 = CAN1_F27DATA0_FD4_Values<CAN1::F27DATA0, 4, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD5 = CAN1_F27DATA0_FD5_Values<CAN1::F27DATA0, 5, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD6 = CAN1_F27DATA0_FD6_Values<CAN1::F27DATA0, 6, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD7 = CAN1_F27DATA0_FD7_Values<CAN1::F27DATA0, 7, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD8 = CAN1_F27DATA0_FD8_Values<CAN1::F27DATA0, 8, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD9 = CAN1_F27DATA0_FD9_Values<CAN1::F27DATA0, 9, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD10 = CAN1_F27DATA0_FD10_Values<CAN1::F27DATA0, 10, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD11 = CAN1_F27DATA0_FD11_Values<CAN1::F27DATA0, 11, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD12 = CAN1_F27DATA0_FD12_Values<CAN1::F27DATA0, 12, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD13 = CAN1_F27DATA0_FD13_Values<CAN1::F27DATA0, 13, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD14 = CAN1_F27DATA0_FD14_Values<CAN1::F27DATA0, 14, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD15 = CAN1_F27DATA0_FD15_Values<CAN1::F27DATA0, 15, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD16 = CAN1_F27DATA0_FD16_Values<CAN1::F27DATA0, 16, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD17 = CAN1_F27DATA0_FD17_Values<CAN1::F27DATA0, 17, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD18 = CAN1_F27DATA0_FD18_Values<CAN1::F27DATA0, 18, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD19 = CAN1_F27DATA0_FD19_Values<CAN1::F27DATA0, 19, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD20 = CAN1_F27DATA0_FD20_Values<CAN1::F27DATA0, 20, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD21 = CAN1_F27DATA0_FD21_Values<CAN1::F27DATA0, 21, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD22 = CAN1_F27DATA0_FD22_Values<CAN1::F27DATA0, 22, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD23 = CAN1_F27DATA0_FD23_Values<CAN1::F27DATA0, 23, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD24 = CAN1_F27DATA0_FD24_Values<CAN1::F27DATA0, 24, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD25 = CAN1_F27DATA0_FD25_Values<CAN1::F27DATA0, 25, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD26 = CAN1_F27DATA0_FD26_Values<CAN1::F27DATA0, 26, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD27 = CAN1_F27DATA0_FD27_Values<CAN1::F27DATA0, 27, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD28 = CAN1_F27DATA0_FD28_Values<CAN1::F27DATA0, 28, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD29 = CAN1_F27DATA0_FD29_Values<CAN1::F27DATA0, 29, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD30 = CAN1_F27DATA0_FD30_Values<CAN1::F27DATA0, 30, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FD31 = CAN1_F27DATA0_FD31_Values<CAN1::F27DATA0, 31, 1, ReadWriteMode, CAN1F27DATA0Base> ;
    using FieldValues = CAN1_F27DATA0_FD31_Values<CAN1::F27DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27DATA0Pack  = Register<0x40006B18, 32, ReadWriteMode, CAN1F27DATA0Base, T...> ;

  struct CAN1F27DATA1Base {} ;

  struct F27DATA1 : public RegisterBase<0x40006B1C, 32, ReadWriteMode>
  {
    using FD0 = CAN1_F27DATA1_FD0_Values<CAN1::F27DATA1, 0, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD1 = CAN1_F27DATA1_FD1_Values<CAN1::F27DATA1, 1, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD2 = CAN1_F27DATA1_FD2_Values<CAN1::F27DATA1, 2, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD3 = CAN1_F27DATA1_FD3_Values<CAN1::F27DATA1, 3, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD4 = CAN1_F27DATA1_FD4_Values<CAN1::F27DATA1, 4, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD5 = CAN1_F27DATA1_FD5_Values<CAN1::F27DATA1, 5, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD6 = CAN1_F27DATA1_FD6_Values<CAN1::F27DATA1, 6, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD7 = CAN1_F27DATA1_FD7_Values<CAN1::F27DATA1, 7, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD8 = CAN1_F27DATA1_FD8_Values<CAN1::F27DATA1, 8, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD9 = CAN1_F27DATA1_FD9_Values<CAN1::F27DATA1, 9, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD10 = CAN1_F27DATA1_FD10_Values<CAN1::F27DATA1, 10, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD11 = CAN1_F27DATA1_FD11_Values<CAN1::F27DATA1, 11, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD12 = CAN1_F27DATA1_FD12_Values<CAN1::F27DATA1, 12, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD13 = CAN1_F27DATA1_FD13_Values<CAN1::F27DATA1, 13, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD14 = CAN1_F27DATA1_FD14_Values<CAN1::F27DATA1, 14, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD15 = CAN1_F27DATA1_FD15_Values<CAN1::F27DATA1, 15, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD16 = CAN1_F27DATA1_FD16_Values<CAN1::F27DATA1, 16, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD17 = CAN1_F27DATA1_FD17_Values<CAN1::F27DATA1, 17, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD18 = CAN1_F27DATA1_FD18_Values<CAN1::F27DATA1, 18, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD19 = CAN1_F27DATA1_FD19_Values<CAN1::F27DATA1, 19, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD20 = CAN1_F27DATA1_FD20_Values<CAN1::F27DATA1, 20, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD21 = CAN1_F27DATA1_FD21_Values<CAN1::F27DATA1, 21, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD22 = CAN1_F27DATA1_FD22_Values<CAN1::F27DATA1, 22, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD23 = CAN1_F27DATA1_FD23_Values<CAN1::F27DATA1, 23, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD24 = CAN1_F27DATA1_FD24_Values<CAN1::F27DATA1, 24, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD25 = CAN1_F27DATA1_FD25_Values<CAN1::F27DATA1, 25, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD26 = CAN1_F27DATA1_FD26_Values<CAN1::F27DATA1, 26, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD27 = CAN1_F27DATA1_FD27_Values<CAN1::F27DATA1, 27, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD28 = CAN1_F27DATA1_FD28_Values<CAN1::F27DATA1, 28, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD29 = CAN1_F27DATA1_FD29_Values<CAN1::F27DATA1, 29, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD30 = CAN1_F27DATA1_FD30_Values<CAN1::F27DATA1, 30, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FD31 = CAN1_F27DATA1_FD31_Values<CAN1::F27DATA1, 31, 1, ReadWriteMode, CAN1F27DATA1Base> ;
    using FieldValues = CAN1_F27DATA1_FD31_Values<CAN1::F27DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using F27DATA1Pack  = Register<0x40006B1C, 32, ReadWriteMode, CAN1F27DATA1Base, T...> ;

} ;

#endif //#if !defined(CAN1REGISTERS_HPP)
