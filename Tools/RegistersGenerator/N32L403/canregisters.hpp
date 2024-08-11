/*******************************************************************************
* Filename      : canregisters.hpp
*
* Details       : Controller area network. This header file is auto-generated
*                 for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "canfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAN
{
  struct CANCAN_MCTRLBase {} ;

  struct CAN_MCTRL : public RegisterBase<0x40006400, 32, ReadWriteMode>
  {
    using INIRQ = CAN_CAN_MCTRL_INIRQ_Values<CAN::CAN_MCTRL, 0, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using SLPRQ = CAN_CAN_MCTRL_SLPRQ_Values<CAN::CAN_MCTRL, 1, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using TXFP = CAN_CAN_MCTRL_TXFP_Values<CAN::CAN_MCTRL, 2, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using RFLM = CAN_CAN_MCTRL_RFLM_Values<CAN::CAN_MCTRL, 3, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using NART = CAN_CAN_MCTRL_NART_Values<CAN::CAN_MCTRL, 4, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using AWKUM = CAN_CAN_MCTRL_AWKUM_Values<CAN::CAN_MCTRL, 5, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using ABOM = CAN_CAN_MCTRL_ABOM_Values<CAN::CAN_MCTRL, 6, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using TTCM = CAN_CAN_MCTRL_TTCM_Values<CAN::CAN_MCTRL, 7, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using MRST = CAN_CAN_MCTRL_MRST_Values<CAN::CAN_MCTRL, 15, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using DBGF = CAN_CAN_MCTRL_DBGF_Values<CAN::CAN_MCTRL, 16, 1, ReadWriteMode, CANCAN_MCTRLBase> ;
    using FieldValues = CAN_CAN_MCTRL_DBGF_Values<CAN::CAN_MCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_MCTRLPack  = Register<0x40006400, 32, ReadWriteMode, CANCAN_MCTRLBase, T...> ;

  struct CANCAN_MSTSBase {} ;

  struct CAN_MSTS : public RegisterBase<0x40006404, 32, ReadWriteMode>
  {
    using INIAK = CAN_CAN_MSTS_INIAK_Values<CAN::CAN_MSTS, 0, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using SLPAK = CAN_CAN_MSTS_SLPAK_Values<CAN::CAN_MSTS, 1, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using ERRINT = CAN_CAN_MSTS_ERRINT_Values<CAN::CAN_MSTS, 2, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using WKUINT = CAN_CAN_MSTS_WKUINT_Values<CAN::CAN_MSTS, 3, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using SLAKINT = CAN_CAN_MSTS_SLAKINT_Values<CAN::CAN_MSTS, 4, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using TXMD = CAN_CAN_MSTS_TXMD_Values<CAN::CAN_MSTS, 8, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using RXMD = CAN_CAN_MSTS_RXMD_Values<CAN::CAN_MSTS, 9, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using LSMP = CAN_CAN_MSTS_LSMP_Values<CAN::CAN_MSTS, 10, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using RXS = CAN_CAN_MSTS_RXS_Values<CAN::CAN_MSTS, 11, 1, ReadWriteMode, CANCAN_MSTSBase> ;
    using FieldValues = CAN_CAN_MSTS_RXS_Values<CAN::CAN_MSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_MSTSPack  = Register<0x40006404, 32, ReadWriteMode, CANCAN_MSTSBase, T...> ;

  struct CANCAN_TSTSBase {} ;

  struct CAN_TSTS : public RegisterBase<0x40006408, 32, ReadWriteMode>
  {
    using RQCPM0 = CAN_CAN_TSTS_RQCPM0_Values<CAN::CAN_TSTS, 0, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TXOKM0 = CAN_CAN_TSTS_TXOKM0_Values<CAN::CAN_TSTS, 1, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ALSTM0 = CAN_CAN_TSTS_ALSTM0_Values<CAN::CAN_TSTS, 2, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TERRM0 = CAN_CAN_TSTS_TERRM0_Values<CAN::CAN_TSTS, 3, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ABRQM0 = CAN_CAN_TSTS_ABRQM0_Values<CAN::CAN_TSTS, 7, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using RQCPM1 = CAN_CAN_TSTS_RQCPM1_Values<CAN::CAN_TSTS, 8, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TXOKM1 = CAN_CAN_TSTS_TXOKM1_Values<CAN::CAN_TSTS, 9, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ALSTM1 = CAN_CAN_TSTS_ALSTM1_Values<CAN::CAN_TSTS, 10, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TERRM1 = CAN_CAN_TSTS_TERRM1_Values<CAN::CAN_TSTS, 11, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ABRQM1 = CAN_CAN_TSTS_ABRQM1_Values<CAN::CAN_TSTS, 15, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using RQCPM2 = CAN_CAN_TSTS_RQCPM2_Values<CAN::CAN_TSTS, 16, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TXOKM2 = CAN_CAN_TSTS_TXOKM2_Values<CAN::CAN_TSTS, 17, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ALSTM2 = CAN_CAN_TSTS_ALSTM2_Values<CAN::CAN_TSTS, 18, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using TERRM2 = CAN_CAN_TSTS_TERRM2_Values<CAN::CAN_TSTS, 19, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using ABRQM2 = CAN_CAN_TSTS_ABRQM2_Values<CAN::CAN_TSTS, 23, 1, ReadWriteMode, CANCAN_TSTSBase> ;
    using CODE = CAN_CAN_TSTS_CODE_Values<CAN::CAN_TSTS, 24, 2, ReadWriteMode, CANCAN_TSTSBase> ;
    using TMEM = CAN_CAN_TSTS_TMEM_Values<CAN::CAN_TSTS, 26, 3, ReadWriteMode, CANCAN_TSTSBase> ;
    using LOWM = CAN_CAN_TSTS_LOWM_Values<CAN::CAN_TSTS, 29, 3, ReadWriteMode, CANCAN_TSTSBase> ;
    using FieldValues = CAN_CAN_TSTS_LOWM_Values<CAN::CAN_TSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TSTSPack  = Register<0x40006408, 32, ReadWriteMode, CANCAN_TSTSBase, T...> ;

  struct CANCAN_RFF0Base {} ;

  struct CAN_RFF0 : public RegisterBase<0x4000640C, 32, ReadWriteMode>
  {
    using FFMP0 = CAN_CAN_RFF0_FFMP0_Values<CAN::CAN_RFF0, 0, 2, ReadWriteMode, CANCAN_RFF0Base> ;
    using FFULL0 = CAN_CAN_RFF0_FFULL0_Values<CAN::CAN_RFF0, 3, 1, ReadWriteMode, CANCAN_RFF0Base> ;
    using FFOVR0 = CAN_CAN_RFF0_FFOVR0_Values<CAN::CAN_RFF0, 4, 1, ReadWriteMode, CANCAN_RFF0Base> ;
    using RFFOM0 = CAN_CAN_RFF0_RFFOM0_Values<CAN::CAN_RFF0, 5, 1, ReadWriteMode, CANCAN_RFF0Base> ;
    using FieldValues = CAN_CAN_RFF0_RFFOM0_Values<CAN::CAN_RFF0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RFF0Pack  = Register<0x4000640C, 32, ReadWriteMode, CANCAN_RFF0Base, T...> ;

  struct CANCAN_RFF1Base {} ;

  struct CAN_RFF1 : public RegisterBase<0x40006410, 32, ReadWriteMode>
  {
    using FFMP1 = CAN_CAN_RFF1_FFMP1_Values<CAN::CAN_RFF1, 0, 2, ReadWriteMode, CANCAN_RFF1Base> ;
    using FFULL1 = CAN_CAN_RFF1_FFULL1_Values<CAN::CAN_RFF1, 3, 1, ReadWriteMode, CANCAN_RFF1Base> ;
    using FFOVR1 = CAN_CAN_RFF1_FFOVR1_Values<CAN::CAN_RFF1, 4, 1, ReadWriteMode, CANCAN_RFF1Base> ;
    using RFFOM1 = CAN_CAN_RFF1_RFFOM1_Values<CAN::CAN_RFF1, 5, 1, ReadWriteMode, CANCAN_RFF1Base> ;
    using FieldValues = CAN_CAN_RFF1_RFFOM1_Values<CAN::CAN_RFF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RFF1Pack  = Register<0x40006410, 32, ReadWriteMode, CANCAN_RFF1Base, T...> ;

  struct CANCAN_INTEBase {} ;

  struct CAN_INTE : public RegisterBase<0x40006414, 32, ReadWriteMode>
  {
    using TMEITE = CAN_CAN_INTE_TMEITE_Values<CAN::CAN_INTE, 0, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FMPITE0 = CAN_CAN_INTE_FMPITE0_Values<CAN::CAN_INTE, 1, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FFITE0 = CAN_CAN_INTE_FFITE0_Values<CAN::CAN_INTE, 2, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FOVITE0 = CAN_CAN_INTE_FOVITE0_Values<CAN::CAN_INTE, 3, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FMPITE1 = CAN_CAN_INTE_FMPITE1_Values<CAN::CAN_INTE, 4, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FFITE1 = CAN_CAN_INTE_FFITE1_Values<CAN::CAN_INTE, 5, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FOVITE1 = CAN_CAN_INTE_FOVITE1_Values<CAN::CAN_INTE, 6, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using EWGITE = CAN_CAN_INTE_EWGITE_Values<CAN::CAN_INTE, 8, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using EPVITE = CAN_CAN_INTE_EPVITE_Values<CAN::CAN_INTE, 9, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using BOFITE = CAN_CAN_INTE_BOFITE_Values<CAN::CAN_INTE, 10, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using LECITE = CAN_CAN_INTE_LECITE_Values<CAN::CAN_INTE, 11, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using ERRITE = CAN_CAN_INTE_ERRITE_Values<CAN::CAN_INTE, 15, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using WKUITE = CAN_CAN_INTE_WKUITE_Values<CAN::CAN_INTE, 16, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using SLKITE = CAN_CAN_INTE_SLKITE_Values<CAN::CAN_INTE, 17, 1, ReadWriteMode, CANCAN_INTEBase> ;
    using FieldValues = CAN_CAN_INTE_SLKITE_Values<CAN::CAN_INTE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_INTEPack  = Register<0x40006414, 32, ReadWriteMode, CANCAN_INTEBase, T...> ;

  struct CANCAN_ESTSBase {} ;

  struct CAN_ESTS : public RegisterBase<0x40006418, 32, ReadWriteMode>
  {
    using EWGFL = CAN_CAN_ESTS_EWGFL_Values<CAN::CAN_ESTS, 0, 1, ReadWriteMode, CANCAN_ESTSBase> ;
    using EPVFL = CAN_CAN_ESTS_EPVFL_Values<CAN::CAN_ESTS, 1, 1, ReadWriteMode, CANCAN_ESTSBase> ;
    using BOFFL = CAN_CAN_ESTS_BOFFL_Values<CAN::CAN_ESTS, 2, 1, ReadWriteMode, CANCAN_ESTSBase> ;
    using LEC = CAN_CAN_ESTS_LEC_Values<CAN::CAN_ESTS, 4, 3, ReadWriteMode, CANCAN_ESTSBase> ;
    using TXEC = CAN_CAN_ESTS_TXEC_Values<CAN::CAN_ESTS, 16, 8, ReadWriteMode, CANCAN_ESTSBase> ;
    using RXEC = CAN_CAN_ESTS_RXEC_Values<CAN::CAN_ESTS, 24, 8, ReadWriteMode, CANCAN_ESTSBase> ;
    using FieldValues = CAN_CAN_ESTS_RXEC_Values<CAN::CAN_ESTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_ESTSPack  = Register<0x40006418, 32, ReadWriteMode, CANCAN_ESTSBase, T...> ;

  struct CANCAN_BTIMBase {} ;

  struct CAN_BTIM : public RegisterBase<0x4000641C, 32, ReadWriteMode>
  {
    using BRTP = CAN_CAN_BTIM_BRTP_Values<CAN::CAN_BTIM, 0, 10, ReadWriteMode, CANCAN_BTIMBase> ;
    using TBS1 = CAN_CAN_BTIM_TBS1_Values<CAN::CAN_BTIM, 16, 4, ReadWriteMode, CANCAN_BTIMBase> ;
    using TBS2 = CAN_CAN_BTIM_TBS2_Values<CAN::CAN_BTIM, 20, 3, ReadWriteMode, CANCAN_BTIMBase> ;
    using RSJW = CAN_CAN_BTIM_RSJW_Values<CAN::CAN_BTIM, 24, 2, ReadWriteMode, CANCAN_BTIMBase> ;
    using LBM = CAN_CAN_BTIM_LBM_Values<CAN::CAN_BTIM, 30, 1, ReadWriteMode, CANCAN_BTIMBase> ;
    using SLM = CAN_CAN_BTIM_SLM_Values<CAN::CAN_BTIM, 31, 1, ReadWriteMode, CANCAN_BTIMBase> ;
    using FieldValues = CAN_CAN_BTIM_SLM_Values<CAN::CAN_BTIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_BTIMPack  = Register<0x4000641C, 32, ReadWriteMode, CANCAN_BTIMBase, T...> ;

  struct CANCAN_TMI0Base {} ;

  struct CAN_TMI0 : public RegisterBase<0x40006580, 32, ReadWriteMode>
  {
    using TXRQ = CAN_CAN_TMI0_TXRQ_Values<CAN::CAN_TMI0, 0, 1, ReadWriteMode, CANCAN_TMI0Base> ;
    using RTRQ = CAN_CAN_TMI0_RTRQ_Values<CAN::CAN_TMI0, 1, 1, ReadWriteMode, CANCAN_TMI0Base> ;
    using IDE = CAN_CAN_TMI0_IDE_Values<CAN::CAN_TMI0, 2, 1, ReadWriteMode, CANCAN_TMI0Base> ;
    using EXTID = CAN_CAN_TMI0_EXTID_Values<CAN::CAN_TMI0, 3, 18, ReadWriteMode, CANCAN_TMI0Base> ;
    using STDID = CAN_CAN_TMI0_STDID_Values<CAN::CAN_TMI0, 21, 11, ReadWriteMode, CANCAN_TMI0Base> ;
    using FieldValues = CAN_CAN_TMI0_STDID_Values<CAN::CAN_TMI0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMI0Pack  = Register<0x40006580, 32, ReadWriteMode, CANCAN_TMI0Base, T...> ;

  struct CANCAN_TMDT0Base {} ;

  struct CAN_TMDT0 : public RegisterBase<0x40006584, 32, ReadWriteMode>
  {
    using DLC = CAN_CAN_TMDT0_DLC_Values<CAN::CAN_TMDT0, 0, 4, ReadWriteMode, CANCAN_TMDT0Base> ;
    using TGT = CAN_CAN_TMDT0_TGT_Values<CAN::CAN_TMDT0, 8, 1, ReadWriteMode, CANCAN_TMDT0Base> ;
    using MTIM = CAN_CAN_TMDT0_MTIM_Values<CAN::CAN_TMDT0, 16, 16, ReadWriteMode, CANCAN_TMDT0Base> ;
    using FieldValues = CAN_CAN_TMDT0_MTIM_Values<CAN::CAN_TMDT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDT0Pack  = Register<0x40006584, 32, ReadWriteMode, CANCAN_TMDT0Base, T...> ;

  struct CANCAN_TMDL0Base {} ;

  struct CAN_TMDL0 : public RegisterBase<0x40006588, 32, ReadWriteMode>
  {
    using DATA0 = CAN_CAN_TMDL0_DATA0_Values<CAN::CAN_TMDL0, 0, 8, ReadWriteMode, CANCAN_TMDL0Base> ;
    using DATA1 = CAN_CAN_TMDL0_DATA1_Values<CAN::CAN_TMDL0, 8, 8, ReadWriteMode, CANCAN_TMDL0Base> ;
    using DATA2 = CAN_CAN_TMDL0_DATA2_Values<CAN::CAN_TMDL0, 16, 8, ReadWriteMode, CANCAN_TMDL0Base> ;
    using DATA3 = CAN_CAN_TMDL0_DATA3_Values<CAN::CAN_TMDL0, 24, 8, ReadWriteMode, CANCAN_TMDL0Base> ;
    using FieldValues = CAN_CAN_TMDL0_DATA3_Values<CAN::CAN_TMDL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDL0Pack  = Register<0x40006588, 32, ReadWriteMode, CANCAN_TMDL0Base, T...> ;

  struct CANCAN_TMDH0Base {} ;

  struct CAN_TMDH0 : public RegisterBase<0x4000658C, 32, ReadWriteMode>
  {
    using DATA4 = CAN_CAN_TMDH0_DATA4_Values<CAN::CAN_TMDH0, 0, 8, ReadWriteMode, CANCAN_TMDH0Base> ;
    using DATA5 = CAN_CAN_TMDH0_DATA5_Values<CAN::CAN_TMDH0, 8, 8, ReadWriteMode, CANCAN_TMDH0Base> ;
    using DATA6 = CAN_CAN_TMDH0_DATA6_Values<CAN::CAN_TMDH0, 16, 8, ReadWriteMode, CANCAN_TMDH0Base> ;
    using DATA7 = CAN_CAN_TMDH0_DATA7_Values<CAN::CAN_TMDH0, 24, 8, ReadWriteMode, CANCAN_TMDH0Base> ;
    using FieldValues = CAN_CAN_TMDH0_DATA7_Values<CAN::CAN_TMDH0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDH0Pack  = Register<0x4000658C, 32, ReadWriteMode, CANCAN_TMDH0Base, T...> ;

  struct CANCAN_TMI1Base {} ;

  struct CAN_TMI1 : public RegisterBase<0x40006590, 32, ReadWriteMode>
  {
    using TXRQ = CAN_CAN_TMI1_TXRQ_Values<CAN::CAN_TMI1, 0, 1, ReadWriteMode, CANCAN_TMI1Base> ;
    using RTRQ = CAN_CAN_TMI1_RTRQ_Values<CAN::CAN_TMI1, 1, 1, ReadWriteMode, CANCAN_TMI1Base> ;
    using IDE = CAN_CAN_TMI1_IDE_Values<CAN::CAN_TMI1, 2, 1, ReadWriteMode, CANCAN_TMI1Base> ;
    using EXTID = CAN_CAN_TMI1_EXTID_Values<CAN::CAN_TMI1, 3, 18, ReadWriteMode, CANCAN_TMI1Base> ;
    using STDID = CAN_CAN_TMI1_STDID_Values<CAN::CAN_TMI1, 21, 11, ReadWriteMode, CANCAN_TMI1Base> ;
    using FieldValues = CAN_CAN_TMI1_STDID_Values<CAN::CAN_TMI1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMI1Pack  = Register<0x40006590, 32, ReadWriteMode, CANCAN_TMI1Base, T...> ;

  struct CANCAN_TMDT1Base {} ;

  struct CAN_TMDT1 : public RegisterBase<0x40006594, 32, ReadWriteMode>
  {
    using DLC = CAN_CAN_TMDT1_DLC_Values<CAN::CAN_TMDT1, 0, 4, ReadWriteMode, CANCAN_TMDT1Base> ;
    using TGT = CAN_CAN_TMDT1_TGT_Values<CAN::CAN_TMDT1, 8, 1, ReadWriteMode, CANCAN_TMDT1Base> ;
    using MTIM = CAN_CAN_TMDT1_MTIM_Values<CAN::CAN_TMDT1, 16, 16, ReadWriteMode, CANCAN_TMDT1Base> ;
    using FieldValues = CAN_CAN_TMDT1_MTIM_Values<CAN::CAN_TMDT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDT1Pack  = Register<0x40006594, 32, ReadWriteMode, CANCAN_TMDT1Base, T...> ;

  struct CANCAN_TMDL1Base {} ;

  struct CAN_TMDL1 : public RegisterBase<0x40006598, 32, ReadWriteMode>
  {
    using DATA0 = CAN_CAN_TMDL1_DATA0_Values<CAN::CAN_TMDL1, 0, 8, ReadWriteMode, CANCAN_TMDL1Base> ;
    using DATA1 = CAN_CAN_TMDL1_DATA1_Values<CAN::CAN_TMDL1, 8, 8, ReadWriteMode, CANCAN_TMDL1Base> ;
    using DATA2 = CAN_CAN_TMDL1_DATA2_Values<CAN::CAN_TMDL1, 16, 8, ReadWriteMode, CANCAN_TMDL1Base> ;
    using DATA3 = CAN_CAN_TMDL1_DATA3_Values<CAN::CAN_TMDL1, 24, 8, ReadWriteMode, CANCAN_TMDL1Base> ;
    using FieldValues = CAN_CAN_TMDL1_DATA3_Values<CAN::CAN_TMDL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDL1Pack  = Register<0x40006598, 32, ReadWriteMode, CANCAN_TMDL1Base, T...> ;

  struct CANCAN_TMDH1Base {} ;

  struct CAN_TMDH1 : public RegisterBase<0x4000659C, 32, ReadWriteMode>
  {
    using DATA4 = CAN_CAN_TMDH1_DATA4_Values<CAN::CAN_TMDH1, 0, 8, ReadWriteMode, CANCAN_TMDH1Base> ;
    using DATA5 = CAN_CAN_TMDH1_DATA5_Values<CAN::CAN_TMDH1, 8, 8, ReadWriteMode, CANCAN_TMDH1Base> ;
    using DATA6 = CAN_CAN_TMDH1_DATA6_Values<CAN::CAN_TMDH1, 16, 8, ReadWriteMode, CANCAN_TMDH1Base> ;
    using DATA7 = CAN_CAN_TMDH1_DATA7_Values<CAN::CAN_TMDH1, 24, 8, ReadWriteMode, CANCAN_TMDH1Base> ;
    using FieldValues = CAN_CAN_TMDH1_DATA7_Values<CAN::CAN_TMDH1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDH1Pack  = Register<0x4000659C, 32, ReadWriteMode, CANCAN_TMDH1Base, T...> ;

  struct CANCAN_TMI2Base {} ;

  struct CAN_TMI2 : public RegisterBase<0x400065A0, 32, ReadWriteMode>
  {
    using TXRQ = CAN_CAN_TMI2_TXRQ_Values<CAN::CAN_TMI2, 0, 1, ReadWriteMode, CANCAN_TMI2Base> ;
    using RTRQ = CAN_CAN_TMI2_RTRQ_Values<CAN::CAN_TMI2, 1, 1, ReadWriteMode, CANCAN_TMI2Base> ;
    using IDE = CAN_CAN_TMI2_IDE_Values<CAN::CAN_TMI2, 2, 1, ReadWriteMode, CANCAN_TMI2Base> ;
    using EXTID = CAN_CAN_TMI2_EXTID_Values<CAN::CAN_TMI2, 3, 18, ReadWriteMode, CANCAN_TMI2Base> ;
    using STDID = CAN_CAN_TMI2_STDID_Values<CAN::CAN_TMI2, 21, 11, ReadWriteMode, CANCAN_TMI2Base> ;
    using FieldValues = CAN_CAN_TMI2_STDID_Values<CAN::CAN_TMI2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMI2Pack  = Register<0x400065A0, 32, ReadWriteMode, CANCAN_TMI2Base, T...> ;

  struct CANCAN_TMDT2Base {} ;

  struct CAN_TMDT2 : public RegisterBase<0x400065A4, 32, ReadWriteMode>
  {
    using DLC = CAN_CAN_TMDT2_DLC_Values<CAN::CAN_TMDT2, 0, 4, ReadWriteMode, CANCAN_TMDT2Base> ;
    using TGT = CAN_CAN_TMDT2_TGT_Values<CAN::CAN_TMDT2, 8, 1, ReadWriteMode, CANCAN_TMDT2Base> ;
    using MTIM = CAN_CAN_TMDT2_MTIM_Values<CAN::CAN_TMDT2, 16, 16, ReadWriteMode, CANCAN_TMDT2Base> ;
    using FieldValues = CAN_CAN_TMDT2_MTIM_Values<CAN::CAN_TMDT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDT2Pack  = Register<0x400065A4, 32, ReadWriteMode, CANCAN_TMDT2Base, T...> ;

  struct CANCAN_TMDL2Base {} ;

  struct CAN_TMDL2 : public RegisterBase<0x400065A8, 32, ReadWriteMode>
  {
    using DATA0 = CAN_CAN_TMDL2_DATA0_Values<CAN::CAN_TMDL2, 0, 8, ReadWriteMode, CANCAN_TMDL2Base> ;
    using DATA1 = CAN_CAN_TMDL2_DATA1_Values<CAN::CAN_TMDL2, 8, 8, ReadWriteMode, CANCAN_TMDL2Base> ;
    using DATA2 = CAN_CAN_TMDL2_DATA2_Values<CAN::CAN_TMDL2, 16, 8, ReadWriteMode, CANCAN_TMDL2Base> ;
    using DATA3 = CAN_CAN_TMDL2_DATA3_Values<CAN::CAN_TMDL2, 24, 8, ReadWriteMode, CANCAN_TMDL2Base> ;
    using FieldValues = CAN_CAN_TMDL2_DATA3_Values<CAN::CAN_TMDL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDL2Pack  = Register<0x400065A8, 32, ReadWriteMode, CANCAN_TMDL2Base, T...> ;

  struct CANCAN_TMDH2Base {} ;

  struct CAN_TMDH2 : public RegisterBase<0x400065AC, 32, ReadWriteMode>
  {
    using DATA4 = CAN_CAN_TMDH2_DATA4_Values<CAN::CAN_TMDH2, 0, 8, ReadWriteMode, CANCAN_TMDH2Base> ;
    using DATA5 = CAN_CAN_TMDH2_DATA5_Values<CAN::CAN_TMDH2, 8, 8, ReadWriteMode, CANCAN_TMDH2Base> ;
    using DATA6 = CAN_CAN_TMDH2_DATA6_Values<CAN::CAN_TMDH2, 16, 8, ReadWriteMode, CANCAN_TMDH2Base> ;
    using DATA7 = CAN_CAN_TMDH2_DATA7_Values<CAN::CAN_TMDH2, 24, 8, ReadWriteMode, CANCAN_TMDH2Base> ;
    using FieldValues = CAN_CAN_TMDH2_DATA7_Values<CAN::CAN_TMDH2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TMDH2Pack  = Register<0x400065AC, 32, ReadWriteMode, CANCAN_TMDH2Base, T...> ;

  struct CANCAN_RMI0Base {} ;

  struct CAN_RMI0 : public RegisterBase<0x400065B0, 32, ReadWriteMode>
  {
    using RTRQ = CAN_CAN_RMI0_RTRQ_Values<CAN::CAN_RMI0, 1, 1, ReadWriteMode, CANCAN_RMI0Base> ;
    using IDE = CAN_CAN_RMI0_IDE_Values<CAN::CAN_RMI0, 2, 1, ReadWriteMode, CANCAN_RMI0Base> ;
    using EXTID = CAN_CAN_RMI0_EXTID_Values<CAN::CAN_RMI0, 3, 18, ReadWriteMode, CANCAN_RMI0Base> ;
    using STDID = CAN_CAN_RMI0_STDID_Values<CAN::CAN_RMI0, 21, 11, ReadWriteMode, CANCAN_RMI0Base> ;
    using FieldValues = CAN_CAN_RMI0_STDID_Values<CAN::CAN_RMI0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMI0Pack  = Register<0x400065B0, 32, ReadWriteMode, CANCAN_RMI0Base, T...> ;

  struct CANCAN_RMDT0Base {} ;

  struct CAN_RMDT0 : public RegisterBase<0x400065B4, 32, ReadWriteMode>
  {
    using DLC = CAN_CAN_RMDT0_DLC_Values<CAN::CAN_RMDT0, 0, 4, ReadWriteMode, CANCAN_RMDT0Base> ;
    using FMI = CAN_CAN_RMDT0_FMI_Values<CAN::CAN_RMDT0, 8, 8, ReadWriteMode, CANCAN_RMDT0Base> ;
    using MTIM = CAN_CAN_RMDT0_MTIM_Values<CAN::CAN_RMDT0, 16, 16, ReadWriteMode, CANCAN_RMDT0Base> ;
    using FieldValues = CAN_CAN_RMDT0_MTIM_Values<CAN::CAN_RMDT0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDT0Pack  = Register<0x400065B4, 32, ReadWriteMode, CANCAN_RMDT0Base, T...> ;

  struct CANCAN_RMDL0Base {} ;

  struct CAN_RMDL0 : public RegisterBase<0x400065B8, 32, ReadWriteMode>
  {
    using DATA0 = CAN_CAN_RMDL0_DATA0_Values<CAN::CAN_RMDL0, 0, 8, ReadWriteMode, CANCAN_RMDL0Base> ;
    using DATA1 = CAN_CAN_RMDL0_DATA1_Values<CAN::CAN_RMDL0, 8, 8, ReadWriteMode, CANCAN_RMDL0Base> ;
    using DATA2 = CAN_CAN_RMDL0_DATA2_Values<CAN::CAN_RMDL0, 16, 8, ReadWriteMode, CANCAN_RMDL0Base> ;
    using DATA3 = CAN_CAN_RMDL0_DATA3_Values<CAN::CAN_RMDL0, 24, 8, ReadWriteMode, CANCAN_RMDL0Base> ;
    using FieldValues = CAN_CAN_RMDL0_DATA3_Values<CAN::CAN_RMDL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDL0Pack  = Register<0x400065B8, 32, ReadWriteMode, CANCAN_RMDL0Base, T...> ;

  struct CANCAN_RMDH0Base {} ;

  struct CAN_RMDH0 : public RegisterBase<0x400065BC, 32, ReadWriteMode>
  {
    using DATA4 = CAN_CAN_RMDH0_DATA4_Values<CAN::CAN_RMDH0, 0, 8, ReadWriteMode, CANCAN_RMDH0Base> ;
    using DATA5 = CAN_CAN_RMDH0_DATA5_Values<CAN::CAN_RMDH0, 8, 8, ReadWriteMode, CANCAN_RMDH0Base> ;
    using DATA6 = CAN_CAN_RMDH0_DATA6_Values<CAN::CAN_RMDH0, 16, 8, ReadWriteMode, CANCAN_RMDH0Base> ;
    using DATA7 = CAN_CAN_RMDH0_DATA7_Values<CAN::CAN_RMDH0, 24, 8, ReadWriteMode, CANCAN_RMDH0Base> ;
    using FieldValues = CAN_CAN_RMDH0_DATA7_Values<CAN::CAN_RMDH0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDH0Pack  = Register<0x400065BC, 32, ReadWriteMode, CANCAN_RMDH0Base, T...> ;

  struct CANCAN_RMI1Base {} ;

  struct CAN_RMI1 : public RegisterBase<0x400065C0, 32, ReadWriteMode>
  {
    using RTRQ = CAN_CAN_RMI1_RTRQ_Values<CAN::CAN_RMI1, 1, 1, ReadWriteMode, CANCAN_RMI1Base> ;
    using IDE = CAN_CAN_RMI1_IDE_Values<CAN::CAN_RMI1, 2, 1, ReadWriteMode, CANCAN_RMI1Base> ;
    using EXTID = CAN_CAN_RMI1_EXTID_Values<CAN::CAN_RMI1, 3, 18, ReadWriteMode, CANCAN_RMI1Base> ;
    using STDID = CAN_CAN_RMI1_STDID_Values<CAN::CAN_RMI1, 21, 11, ReadWriteMode, CANCAN_RMI1Base> ;
    using FieldValues = CAN_CAN_RMI1_STDID_Values<CAN::CAN_RMI1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMI1Pack  = Register<0x400065C0, 32, ReadWriteMode, CANCAN_RMI1Base, T...> ;

  struct CANCAN_RMDT1Base {} ;

  struct CAN_RMDT1 : public RegisterBase<0x400065C4, 32, ReadWriteMode>
  {
    using DLC = CAN_CAN_RMDT1_DLC_Values<CAN::CAN_RMDT1, 0, 4, ReadWriteMode, CANCAN_RMDT1Base> ;
    using FMI = CAN_CAN_RMDT1_FMI_Values<CAN::CAN_RMDT1, 8, 8, ReadWriteMode, CANCAN_RMDT1Base> ;
    using MTIM = CAN_CAN_RMDT1_MTIM_Values<CAN::CAN_RMDT1, 16, 16, ReadWriteMode, CANCAN_RMDT1Base> ;
    using FieldValues = CAN_CAN_RMDT1_MTIM_Values<CAN::CAN_RMDT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDT1Pack  = Register<0x400065C4, 32, ReadWriteMode, CANCAN_RMDT1Base, T...> ;

  struct CANCAN_RMDL1Base {} ;

  struct CAN_RMDL1 : public RegisterBase<0x400065C8, 32, ReadWriteMode>
  {
    using DATA0 = CAN_CAN_RMDL1_DATA0_Values<CAN::CAN_RMDL1, 0, 8, ReadWriteMode, CANCAN_RMDL1Base> ;
    using DATA1 = CAN_CAN_RMDL1_DATA1_Values<CAN::CAN_RMDL1, 8, 8, ReadWriteMode, CANCAN_RMDL1Base> ;
    using DATA2 = CAN_CAN_RMDL1_DATA2_Values<CAN::CAN_RMDL1, 16, 8, ReadWriteMode, CANCAN_RMDL1Base> ;
    using DATA3 = CAN_CAN_RMDL1_DATA3_Values<CAN::CAN_RMDL1, 24, 8, ReadWriteMode, CANCAN_RMDL1Base> ;
    using FieldValues = CAN_CAN_RMDL1_DATA3_Values<CAN::CAN_RMDL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDL1Pack  = Register<0x400065C8, 32, ReadWriteMode, CANCAN_RMDL1Base, T...> ;

  struct CANCAN_RMDH1Base {} ;

  struct CAN_RMDH1 : public RegisterBase<0x400065CC, 32, ReadWriteMode>
  {
    using DATA4 = CAN_CAN_RMDH1_DATA4_Values<CAN::CAN_RMDH1, 0, 8, ReadWriteMode, CANCAN_RMDH1Base> ;
    using DATA5 = CAN_CAN_RMDH1_DATA5_Values<CAN::CAN_RMDH1, 8, 8, ReadWriteMode, CANCAN_RMDH1Base> ;
    using DATA6 = CAN_CAN_RMDH1_DATA6_Values<CAN::CAN_RMDH1, 16, 8, ReadWriteMode, CANCAN_RMDH1Base> ;
    using DATA7 = CAN_CAN_RMDH1_DATA7_Values<CAN::CAN_RMDH1, 24, 8, ReadWriteMode, CANCAN_RMDH1Base> ;
    using FieldValues = CAN_CAN_RMDH1_DATA7_Values<CAN::CAN_RMDH1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_RMDH1Pack  = Register<0x400065CC, 32, ReadWriteMode, CANCAN_RMDH1Base, T...> ;

  struct CANCAN_FMCBase {} ;

  struct CAN_FMC : public RegisterBase<0x40006600, 32, ReadWriteMode>
  {
    using FINITM = CAN_CAN_FMC_FINITM_Values<CAN::CAN_FMC, 0, 1, ReadWriteMode, CANCAN_FMCBase> ;
    using FieldValues = CAN_CAN_FMC_FINITM_Values<CAN::CAN_FMC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_FMCPack  = Register<0x40006600, 32, ReadWriteMode, CANCAN_FMCBase, T...> ;

  struct CANCAN_FM1Base {} ;

  struct CAN_FM1 : public RegisterBase<0x40006604, 32, ReadWriteMode>
  {
    using FB = CAN_CAN_FM1_FB_Values<CAN::CAN_FM1, 0, 14, ReadWriteMode, CANCAN_FM1Base> ;
    using FieldValues = CAN_CAN_FM1_FB_Values<CAN::CAN_FM1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_FM1Pack  = Register<0x40006604, 32, ReadWriteMode, CANCAN_FM1Base, T...> ;

  struct CANCAN_FS1Base {} ;

  struct CAN_FS1 : public RegisterBase<0x4000660C, 32, ReadWriteMode>
  {
    using FSC = CAN_CAN_FS1_FSC_Values<CAN::CAN_FS1, 0, 14, ReadWriteMode, CANCAN_FS1Base> ;
    using FieldValues = CAN_CAN_FS1_FSC_Values<CAN::CAN_FS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_FS1Pack  = Register<0x4000660C, 32, ReadWriteMode, CANCAN_FS1Base, T...> ;

  struct CANCAN_FFA1Base {} ;

  struct CAN_FFA1 : public RegisterBase<0x40006614, 32, ReadWriteMode>
  {
    using FAF = CAN_CAN_FFA1_FAF_Values<CAN::CAN_FFA1, 0, 14, ReadWriteMode, CANCAN_FFA1Base> ;
    using FieldValues = CAN_CAN_FFA1_FAF_Values<CAN::CAN_FFA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_FFA1Pack  = Register<0x40006614, 32, ReadWriteMode, CANCAN_FFA1Base, T...> ;

  struct CANCAN_FA1Base {} ;

  struct CAN_FA1 : public RegisterBase<0x4000661C, 32, ReadWriteMode>
  {
    using FAC = CAN_CAN_FA1_FAC_Values<CAN::CAN_FA1, 0, 14, ReadWriteMode, CANCAN_FA1Base> ;
    using FieldValues = CAN_CAN_FA1_FAC_Values<CAN::CAN_FA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_FA1Pack  = Register<0x4000661C, 32, ReadWriteMode, CANCAN_FA1Base, T...> ;

  struct CANCAN_F0B1Base {} ;

  struct CAN_F0B1 : public RegisterBase<0x40006640, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F0B1_FBC_Values<CAN::CAN_F0B1, 0, 32, ReadWriteMode, CANCAN_F0B1Base> ;
    using FieldValues = CAN_CAN_F0B1_FBC_Values<CAN::CAN_F0B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F0B1Pack  = Register<0x40006640, 32, ReadWriteMode, CANCAN_F0B1Base, T...> ;

  struct CANCAN_F0B2Base {} ;

  struct CAN_F0B2 : public RegisterBase<0x40006644, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F0B2_FBC_Values<CAN::CAN_F0B2, 0, 32, ReadWriteMode, CANCAN_F0B2Base> ;
    using FieldValues = CAN_CAN_F0B2_FBC_Values<CAN::CAN_F0B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F0B2Pack  = Register<0x40006644, 32, ReadWriteMode, CANCAN_F0B2Base, T...> ;

  struct CANCAN_F1B1Base {} ;

  struct CAN_F1B1 : public RegisterBase<0x40006648, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F1B1_FBC_Values<CAN::CAN_F1B1, 0, 32, ReadWriteMode, CANCAN_F1B1Base> ;
    using FieldValues = CAN_CAN_F1B1_FBC_Values<CAN::CAN_F1B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F1B1Pack  = Register<0x40006648, 32, ReadWriteMode, CANCAN_F1B1Base, T...> ;

  struct CANCAN_F1B2Base {} ;

  struct CAN_F1B2 : public RegisterBase<0x4000664C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F1B2_FBC_Values<CAN::CAN_F1B2, 0, 32, ReadWriteMode, CANCAN_F1B2Base> ;
    using FieldValues = CAN_CAN_F1B2_FBC_Values<CAN::CAN_F1B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F1B2Pack  = Register<0x4000664C, 32, ReadWriteMode, CANCAN_F1B2Base, T...> ;

  struct CANCAN_F2B1Base {} ;

  struct CAN_F2B1 : public RegisterBase<0x40006650, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F2B1_FBC_Values<CAN::CAN_F2B1, 0, 32, ReadWriteMode, CANCAN_F2B1Base> ;
    using FieldValues = CAN_CAN_F2B1_FBC_Values<CAN::CAN_F2B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F2B1Pack  = Register<0x40006650, 32, ReadWriteMode, CANCAN_F2B1Base, T...> ;

  struct CANCAN_F2B2Base {} ;

  struct CAN_F2B2 : public RegisterBase<0x40006654, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F2B2_FBC_Values<CAN::CAN_F2B2, 0, 32, ReadWriteMode, CANCAN_F2B2Base> ;
    using FieldValues = CAN_CAN_F2B2_FBC_Values<CAN::CAN_F2B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F2B2Pack  = Register<0x40006654, 32, ReadWriteMode, CANCAN_F2B2Base, T...> ;

  struct CANCAN_F3B1Base {} ;

  struct CAN_F3B1 : public RegisterBase<0x40006658, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F3B1_FBC_Values<CAN::CAN_F3B1, 0, 32, ReadWriteMode, CANCAN_F3B1Base> ;
    using FieldValues = CAN_CAN_F3B1_FBC_Values<CAN::CAN_F3B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F3B1Pack  = Register<0x40006658, 32, ReadWriteMode, CANCAN_F3B1Base, T...> ;

  struct CANCAN_F3B2Base {} ;

  struct CAN_F3B2 : public RegisterBase<0x4000665C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F3B2_FBC_Values<CAN::CAN_F3B2, 0, 32, ReadWriteMode, CANCAN_F3B2Base> ;
    using FieldValues = CAN_CAN_F3B2_FBC_Values<CAN::CAN_F3B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F3B2Pack  = Register<0x4000665C, 32, ReadWriteMode, CANCAN_F3B2Base, T...> ;

  struct CANCAN_F4B1Base {} ;

  struct CAN_F4B1 : public RegisterBase<0x40006660, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F4B1_FBC_Values<CAN::CAN_F4B1, 0, 32, ReadWriteMode, CANCAN_F4B1Base> ;
    using FieldValues = CAN_CAN_F4B1_FBC_Values<CAN::CAN_F4B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F4B1Pack  = Register<0x40006660, 32, ReadWriteMode, CANCAN_F4B1Base, T...> ;

  struct CANCAN_F4B2Base {} ;

  struct CAN_F4B2 : public RegisterBase<0x40006664, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F4B2_FBC_Values<CAN::CAN_F4B2, 0, 32, ReadWriteMode, CANCAN_F4B2Base> ;
    using FieldValues = CAN_CAN_F4B2_FBC_Values<CAN::CAN_F4B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F4B2Pack  = Register<0x40006664, 32, ReadWriteMode, CANCAN_F4B2Base, T...> ;

  struct CANCAN_F5B1Base {} ;

  struct CAN_F5B1 : public RegisterBase<0x40006668, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F5B1_FBC_Values<CAN::CAN_F5B1, 0, 32, ReadWriteMode, CANCAN_F5B1Base> ;
    using FieldValues = CAN_CAN_F5B1_FBC_Values<CAN::CAN_F5B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F5B1Pack  = Register<0x40006668, 32, ReadWriteMode, CANCAN_F5B1Base, T...> ;

  struct CANCAN_F5B2Base {} ;

  struct CAN_F5B2 : public RegisterBase<0x4000666C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F5B2_FBC_Values<CAN::CAN_F5B2, 0, 32, ReadWriteMode, CANCAN_F5B2Base> ;
    using FieldValues = CAN_CAN_F5B2_FBC_Values<CAN::CAN_F5B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F5B2Pack  = Register<0x4000666C, 32, ReadWriteMode, CANCAN_F5B2Base, T...> ;

  struct CANCAN_F6B1Base {} ;

  struct CAN_F6B1 : public RegisterBase<0x40006670, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F6B1_FBC_Values<CAN::CAN_F6B1, 0, 32, ReadWriteMode, CANCAN_F6B1Base> ;
    using FieldValues = CAN_CAN_F6B1_FBC_Values<CAN::CAN_F6B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F6B1Pack  = Register<0x40006670, 32, ReadWriteMode, CANCAN_F6B1Base, T...> ;

  struct CANCAN_F6B2Base {} ;

  struct CAN_F6B2 : public RegisterBase<0x40006674, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F6B2_FBC_Values<CAN::CAN_F6B2, 0, 32, ReadWriteMode, CANCAN_F6B2Base> ;
    using FieldValues = CAN_CAN_F6B2_FBC_Values<CAN::CAN_F6B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F6B2Pack  = Register<0x40006674, 32, ReadWriteMode, CANCAN_F6B2Base, T...> ;

  struct CANCAN_F7B1Base {} ;

  struct CAN_F7B1 : public RegisterBase<0x40006678, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F7B1_FBC_Values<CAN::CAN_F7B1, 0, 32, ReadWriteMode, CANCAN_F7B1Base> ;
    using FieldValues = CAN_CAN_F7B1_FBC_Values<CAN::CAN_F7B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F7B1Pack  = Register<0x40006678, 32, ReadWriteMode, CANCAN_F7B1Base, T...> ;

  struct CANCAN_F7B2Base {} ;

  struct CAN_F7B2 : public RegisterBase<0x4000667C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F7B2_FBC_Values<CAN::CAN_F7B2, 0, 32, ReadWriteMode, CANCAN_F7B2Base> ;
    using FieldValues = CAN_CAN_F7B2_FBC_Values<CAN::CAN_F7B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F7B2Pack  = Register<0x4000667C, 32, ReadWriteMode, CANCAN_F7B2Base, T...> ;

  struct CANCAN_F8B1Base {} ;

  struct CAN_F8B1 : public RegisterBase<0x40006680, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F8B1_FBC_Values<CAN::CAN_F8B1, 0, 32, ReadWriteMode, CANCAN_F8B1Base> ;
    using FieldValues = CAN_CAN_F8B1_FBC_Values<CAN::CAN_F8B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F8B1Pack  = Register<0x40006680, 32, ReadWriteMode, CANCAN_F8B1Base, T...> ;

  struct CANCAN_F8B2Base {} ;

  struct CAN_F8B2 : public RegisterBase<0x40006684, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F8B2_FBC_Values<CAN::CAN_F8B2, 0, 32, ReadWriteMode, CANCAN_F8B2Base> ;
    using FieldValues = CAN_CAN_F8B2_FBC_Values<CAN::CAN_F8B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F8B2Pack  = Register<0x40006684, 32, ReadWriteMode, CANCAN_F8B2Base, T...> ;

  struct CANCAN_F9B1Base {} ;

  struct CAN_F9B1 : public RegisterBase<0x40006688, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F9B1_FBC_Values<CAN::CAN_F9B1, 0, 32, ReadWriteMode, CANCAN_F9B1Base> ;
    using FieldValues = CAN_CAN_F9B1_FBC_Values<CAN::CAN_F9B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F9B1Pack  = Register<0x40006688, 32, ReadWriteMode, CANCAN_F9B1Base, T...> ;

  struct CANCAN_F9B2Base {} ;

  struct CAN_F9B2 : public RegisterBase<0x4000668C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F9B2_FBC_Values<CAN::CAN_F9B2, 0, 32, ReadWriteMode, CANCAN_F9B2Base> ;
    using FieldValues = CAN_CAN_F9B2_FBC_Values<CAN::CAN_F9B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F9B2Pack  = Register<0x4000668C, 32, ReadWriteMode, CANCAN_F9B2Base, T...> ;

  struct CANCAN_F10B1Base {} ;

  struct CAN_F10B1 : public RegisterBase<0x40006690, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F10B1_FBC_Values<CAN::CAN_F10B1, 0, 32, ReadWriteMode, CANCAN_F10B1Base> ;
    using FieldValues = CAN_CAN_F10B1_FBC_Values<CAN::CAN_F10B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F10B1Pack  = Register<0x40006690, 32, ReadWriteMode, CANCAN_F10B1Base, T...> ;

  struct CANCAN_F10B2Base {} ;

  struct CAN_F10B2 : public RegisterBase<0x40006694, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F10B2_FBC_Values<CAN::CAN_F10B2, 0, 32, ReadWriteMode, CANCAN_F10B2Base> ;
    using FieldValues = CAN_CAN_F10B2_FBC_Values<CAN::CAN_F10B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F10B2Pack  = Register<0x40006694, 32, ReadWriteMode, CANCAN_F10B2Base, T...> ;

  struct CANCAN_F11B1Base {} ;

  struct CAN_F11B1 : public RegisterBase<0x40006698, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F11B1_FBC_Values<CAN::CAN_F11B1, 0, 32, ReadWriteMode, CANCAN_F11B1Base> ;
    using FieldValues = CAN_CAN_F11B1_FBC_Values<CAN::CAN_F11B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F11B1Pack  = Register<0x40006698, 32, ReadWriteMode, CANCAN_F11B1Base, T...> ;

  struct CANCAN_F11B2Base {} ;

  struct CAN_F11B2 : public RegisterBase<0x4000669C, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F11B2_FBC_Values<CAN::CAN_F11B2, 0, 32, ReadWriteMode, CANCAN_F11B2Base> ;
    using FieldValues = CAN_CAN_F11B2_FBC_Values<CAN::CAN_F11B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F11B2Pack  = Register<0x4000669C, 32, ReadWriteMode, CANCAN_F11B2Base, T...> ;

  struct CANCAN_F12B1Base {} ;

  struct CAN_F12B1 : public RegisterBase<0x400066A0, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F12B1_FBC_Values<CAN::CAN_F12B1, 0, 32, ReadWriteMode, CANCAN_F12B1Base> ;
    using FieldValues = CAN_CAN_F12B1_FBC_Values<CAN::CAN_F12B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F12B1Pack  = Register<0x400066A0, 32, ReadWriteMode, CANCAN_F12B1Base, T...> ;

  struct CANCAN_F12B2Base {} ;

  struct CAN_F12B2 : public RegisterBase<0x400066A4, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F12B2_FBC_Values<CAN::CAN_F12B2, 0, 32, ReadWriteMode, CANCAN_F12B2Base> ;
    using FieldValues = CAN_CAN_F12B2_FBC_Values<CAN::CAN_F12B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F12B2Pack  = Register<0x400066A4, 32, ReadWriteMode, CANCAN_F12B2Base, T...> ;

  struct CANCAN_F13B1Base {} ;

  struct CAN_F13B1 : public RegisterBase<0x400066A8, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F13B1_FBC_Values<CAN::CAN_F13B1, 0, 32, ReadWriteMode, CANCAN_F13B1Base> ;
    using FieldValues = CAN_CAN_F13B1_FBC_Values<CAN::CAN_F13B1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F13B1Pack  = Register<0x400066A8, 32, ReadWriteMode, CANCAN_F13B1Base, T...> ;

  struct CANCAN_F13B2Base {} ;

  struct CAN_F13B2 : public RegisterBase<0x400066AC, 32, ReadWriteMode>
  {
    using FBC = CAN_CAN_F13B2_FBC_Values<CAN::CAN_F13B2, 0, 32, ReadWriteMode, CANCAN_F13B2Base> ;
    using FieldValues = CAN_CAN_F13B2_FBC_Values<CAN::CAN_F13B2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_F13B2Pack  = Register<0x400066AC, 32, ReadWriteMode, CANCAN_F13B2Base, T...> ;

} ;

