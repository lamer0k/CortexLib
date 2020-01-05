/*******************************************************************************
* Filename      : dcmiregisters.hpp
*
* Details       : Digital camera interface. This header file is auto-generated
*                 for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(DCMIREGISTERS_HPP)
#define DCMIREGISTERS_HPP

#include "dcmifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DCMI
{
  struct DCMICRBase {} ;

  struct CR : public RegisterBase<0x50050000, 32, ReadWriteMode>
  {
    using ENABLE = DCMI_CR_ENABLE_Values<DCMI::CR, 14, 1, ReadWriteMode, DCMICRBase> ;
    using EDM = DCMI_CR_EDM_Values<DCMI::CR, 10, 2, ReadWriteMode, DCMICRBase> ;
    using FCRC = DCMI_CR_FCRC_Values<DCMI::CR, 8, 2, ReadWriteMode, DCMICRBase> ;
    using VSPOL = DCMI_CR_VSPOL_Values<DCMI::CR, 7, 1, ReadWriteMode, DCMICRBase> ;
    using HSPOL = DCMI_CR_HSPOL_Values<DCMI::CR, 6, 1, ReadWriteMode, DCMICRBase> ;
    using PCKPOL = DCMI_CR_PCKPOL_Values<DCMI::CR, 5, 1, ReadWriteMode, DCMICRBase> ;
    using ESS = DCMI_CR_ESS_Values<DCMI::CR, 4, 1, ReadWriteMode, DCMICRBase> ;
    using JPEG = DCMI_CR_JPEG_Values<DCMI::CR, 3, 1, ReadWriteMode, DCMICRBase> ;
    using CROP = DCMI_CR_CROP_Values<DCMI::CR, 2, 1, ReadWriteMode, DCMICRBase> ;
    using CM = DCMI_CR_CM_Values<DCMI::CR, 1, 1, ReadWriteMode, DCMICRBase> ;
    using CAPTURE = DCMI_CR_CAPTURE_Values<DCMI::CR, 0, 1, ReadWriteMode, DCMICRBase> ;
    using FieldValues = DCMI_CR_CAPTURE_Values<DCMI::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50050000, 32, ReadWriteMode, DCMICRBase, T...> ;

  struct DCMISRBase {} ;

  struct SR : public RegisterBase<0x50050004, 32, ReadMode>
  {
    using FNE = DCMI_SR_FNE_Values<DCMI::SR, 2, 1, ReadMode, DCMISRBase> ;
    using VSYNC = DCMI_SR_VSYNC_Values<DCMI::SR, 1, 1, ReadMode, DCMISRBase> ;
    using HSYNC = DCMI_SR_HSYNC_Values<DCMI::SR, 0, 1, ReadMode, DCMISRBase> ;
    using FieldValues = DCMI_SR_HSYNC_Values<DCMI::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50050004, 32, ReadMode, DCMISRBase, T...> ;

  struct DCMIRISBase {} ;

  struct RIS : public RegisterBase<0x50050008, 32, ReadMode>
  {
    using LINE_RIS = DCMI_RIS_LINE_RIS_Values<DCMI::RIS, 4, 1, ReadMode, DCMIRISBase> ;
    using VSYNC_RIS = DCMI_RIS_VSYNC_RIS_Values<DCMI::RIS, 3, 1, ReadMode, DCMIRISBase> ;
    using ERR_RIS = DCMI_RIS_ERR_RIS_Values<DCMI::RIS, 2, 1, ReadMode, DCMIRISBase> ;
    using OVR_RIS = DCMI_RIS_OVR_RIS_Values<DCMI::RIS, 1, 1, ReadMode, DCMIRISBase> ;
    using FRAME_RIS = DCMI_RIS_FRAME_RIS_Values<DCMI::RIS, 0, 1, ReadMode, DCMIRISBase> ;
    using FieldValues = DCMI_RIS_FRAME_RIS_Values<DCMI::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x50050008, 32, ReadMode, DCMIRISBase, T...> ;

  struct DCMIIERBase {} ;

  struct IER : public RegisterBase<0x5005000C, 32, ReadWriteMode>
  {
    using LINE_IE = DCMI_IER_LINE_IE_Values<DCMI::IER, 4, 1, ReadWriteMode, DCMIIERBase> ;
    using VSYNC_IE = DCMI_IER_VSYNC_IE_Values<DCMI::IER, 3, 1, ReadWriteMode, DCMIIERBase> ;
    using ERR_IE = DCMI_IER_ERR_IE_Values<DCMI::IER, 2, 1, ReadWriteMode, DCMIIERBase> ;
    using OVR_IE = DCMI_IER_OVR_IE_Values<DCMI::IER, 1, 1, ReadWriteMode, DCMIIERBase> ;
    using FRAME_IE = DCMI_IER_FRAME_IE_Values<DCMI::IER, 0, 1, ReadWriteMode, DCMIIERBase> ;
    using FieldValues = DCMI_IER_FRAME_IE_Values<DCMI::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x5005000C, 32, ReadWriteMode, DCMIIERBase, T...> ;

  struct DCMIMISBase {} ;

  struct MIS : public RegisterBase<0x50050010, 32, ReadMode>
  {
    using LINE_MIS = DCMI_MIS_LINE_MIS_Values<DCMI::MIS, 4, 1, ReadMode, DCMIMISBase> ;
    using VSYNC_MIS = DCMI_MIS_VSYNC_MIS_Values<DCMI::MIS, 3, 1, ReadMode, DCMIMISBase> ;
    using ERR_MIS = DCMI_MIS_ERR_MIS_Values<DCMI::MIS, 2, 1, ReadMode, DCMIMISBase> ;
    using OVR_MIS = DCMI_MIS_OVR_MIS_Values<DCMI::MIS, 1, 1, ReadMode, DCMIMISBase> ;
    using FRAME_MIS = DCMI_MIS_FRAME_MIS_Values<DCMI::MIS, 0, 1, ReadMode, DCMIMISBase> ;
    using FieldValues = DCMI_MIS_FRAME_MIS_Values<DCMI::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x50050010, 32, ReadMode, DCMIMISBase, T...> ;

  struct DCMIICRBase {} ;

  struct ICR : public RegisterBase<0x50050014, 32, WriteMode>
  {
    using LINE_ISC = DCMI_ICR_LINE_ISC_Values<DCMI::ICR, 4, 1, WriteMode, DCMIICRBase> ;
    using VSYNC_ISC = DCMI_ICR_VSYNC_ISC_Values<DCMI::ICR, 3, 1, WriteMode, DCMIICRBase> ;
    using ERR_ISC = DCMI_ICR_ERR_ISC_Values<DCMI::ICR, 2, 1, WriteMode, DCMIICRBase> ;
    using OVR_ISC = DCMI_ICR_OVR_ISC_Values<DCMI::ICR, 1, 1, WriteMode, DCMIICRBase> ;
    using FRAME_ISC = DCMI_ICR_FRAME_ISC_Values<DCMI::ICR, 0, 1, WriteMode, DCMIICRBase> ;
    using FieldValues = DCMI_ICR_FRAME_ISC_Values<DCMI::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x50050014, 32, WriteMode, DCMIICRBase, T...> ;

  struct DCMIESCRBase {} ;

  struct ESCR : public RegisterBase<0x50050018, 32, ReadWriteMode>
  {
    using FEC = DCMI_ESCR_FEC_Values<DCMI::ESCR, 24, 8, ReadWriteMode, DCMIESCRBase> ;
    using LEC = DCMI_ESCR_LEC_Values<DCMI::ESCR, 16, 8, ReadWriteMode, DCMIESCRBase> ;
    using LSC = DCMI_ESCR_LSC_Values<DCMI::ESCR, 8, 8, ReadWriteMode, DCMIESCRBase> ;
    using FSC = DCMI_ESCR_FSC_Values<DCMI::ESCR, 0, 8, ReadWriteMode, DCMIESCRBase> ;
    using FieldValues = DCMI_ESCR_FSC_Values<DCMI::ESCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ESCRPack  = Register<0x50050018, 32, ReadWriteMode, DCMIESCRBase, T...> ;

  struct DCMIESURBase {} ;

  struct ESUR : public RegisterBase<0x5005001C, 32, ReadWriteMode>
  {
    using FEU = DCMI_ESUR_FEU_Values<DCMI::ESUR, 24, 8, ReadWriteMode, DCMIESURBase> ;
    using LEU = DCMI_ESUR_LEU_Values<DCMI::ESUR, 16, 8, ReadWriteMode, DCMIESURBase> ;
    using LSU = DCMI_ESUR_LSU_Values<DCMI::ESUR, 8, 8, ReadWriteMode, DCMIESURBase> ;
    using FSU = DCMI_ESUR_FSU_Values<DCMI::ESUR, 0, 8, ReadWriteMode, DCMIESURBase> ;
    using FieldValues = DCMI_ESUR_FSU_Values<DCMI::ESUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ESURPack  = Register<0x5005001C, 32, ReadWriteMode, DCMIESURBase, T...> ;

  struct DCMICWSTRTBase {} ;

  struct CWSTRT : public RegisterBase<0x50050020, 32, ReadWriteMode>
  {
    using VST = DCMI_CWSTRT_VST_Values<DCMI::CWSTRT, 16, 13, ReadWriteMode, DCMICWSTRTBase> ;
    using HOFFCNT = DCMI_CWSTRT_HOFFCNT_Values<DCMI::CWSTRT, 0, 14, ReadWriteMode, DCMICWSTRTBase> ;
    using FieldValues = DCMI_CWSTRT_HOFFCNT_Values<DCMI::CWSTRT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CWSTRTPack  = Register<0x50050020, 32, ReadWriteMode, DCMICWSTRTBase, T...> ;

  struct DCMICWSIZEBase {} ;

  struct CWSIZE : public RegisterBase<0x50050024, 32, ReadWriteMode>
  {
    using VLINE = DCMI_CWSIZE_VLINE_Values<DCMI::CWSIZE, 16, 14, ReadWriteMode, DCMICWSIZEBase> ;
    using CAPCNT = DCMI_CWSIZE_CAPCNT_Values<DCMI::CWSIZE, 0, 14, ReadWriteMode, DCMICWSIZEBase> ;
    using FieldValues = DCMI_CWSIZE_CAPCNT_Values<DCMI::CWSIZE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CWSIZEPack  = Register<0x50050024, 32, ReadWriteMode, DCMICWSIZEBase, T...> ;

  struct DCMIDRBase {} ;

  struct DR : public RegisterBase<0x50050028, 32, ReadMode>
  {
    using Byte3 = DCMI_DR_Byte3_Values<DCMI::DR, 24, 8, ReadMode, DCMIDRBase> ;
    using Byte2 = DCMI_DR_Byte2_Values<DCMI::DR, 16, 8, ReadMode, DCMIDRBase> ;
    using Byte1 = DCMI_DR_Byte1_Values<DCMI::DR, 8, 8, ReadMode, DCMIDRBase> ;
    using Byte0 = DCMI_DR_Byte0_Values<DCMI::DR, 0, 8, ReadMode, DCMIDRBase> ;
    using FieldValues = DCMI_DR_Byte0_Values<DCMI::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50050028, 32, ReadMode, DCMIDRBase, T...> ;

} ;

#endif //#if !defined(DCMIREGISTERS_HPP)
