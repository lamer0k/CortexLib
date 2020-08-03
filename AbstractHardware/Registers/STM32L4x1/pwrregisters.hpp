/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(PWRREGISTERS_HPP)
#define PWRREGISTERS_HPP

#include "pwrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PWR
{
  struct PWRCR1Base {} ;

  struct CR1 : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using LPR = PWR_CR1_LPR_Values<PWR::CR1, 14, 1, ReadWriteMode, PWRCR1Base> ;
    using VOS = PWR_CR1_VOS_Values<PWR::CR1, 9, 2, ReadWriteMode, PWRCR1Base> ;
    using DBP = PWR_CR1_DBP_Values<PWR::CR1, 8, 1, ReadWriteMode, PWRCR1Base> ;
    using LPMS = PWR_CR1_LPMS_Values<PWR::CR1, 0, 3, ReadWriteMode, PWRCR1Base> ;
    using FieldValues = PWR_CR1_LPMS_Values<PWR::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40007000, 32, ReadWriteMode, PWRCR1Base, T...> ;

  struct PWRCR2Base {} ;

  struct CR2 : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using USV = PWR_CR2_USV_Values<PWR::CR2, 10, 1, ReadWriteMode, PWRCR2Base> ;
    using IOSV = PWR_CR2_IOSV_Values<PWR::CR2, 9, 1, ReadWriteMode, PWRCR2Base> ;
    using PVME4 = PWR_CR2_PVME4_Values<PWR::CR2, 7, 1, ReadWriteMode, PWRCR2Base> ;
    using PVME3 = PWR_CR2_PVME3_Values<PWR::CR2, 6, 1, ReadWriteMode, PWRCR2Base> ;
    using PVME2 = PWR_CR2_PVME2_Values<PWR::CR2, 5, 1, ReadWriteMode, PWRCR2Base> ;
    using PVME1 = PWR_CR2_PVME1_Values<PWR::CR2, 4, 1, ReadWriteMode, PWRCR2Base> ;
    using PLS = PWR_CR2_PLS_Values<PWR::CR2, 1, 3, ReadWriteMode, PWRCR2Base> ;
    using PVDE = PWR_CR2_PVDE_Values<PWR::CR2, 0, 1, ReadWriteMode, PWRCR2Base> ;
    using FieldValues = PWR_CR2_PVDE_Values<PWR::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007004, 32, ReadWriteMode, PWRCR2Base, T...> ;

  struct PWRCR3Base {} ;

  struct CR3 : public RegisterBase<0x40007008, 32, ReadWriteMode>
  {
    using EWF = PWR_CR3_EWF_Values<PWR::CR3, 15, 1, ReadWriteMode, PWRCR3Base> ;
    using APC = PWR_CR3_APC_Values<PWR::CR3, 10, 1, ReadWriteMode, PWRCR3Base> ;
    using RRS = PWR_CR3_RRS_Values<PWR::CR3, 8, 1, ReadWriteMode, PWRCR3Base> ;
    using EWUP5 = PWR_CR3_EWUP5_Values<PWR::CR3, 4, 1, ReadWriteMode, PWRCR3Base> ;
    using EWUP4 = PWR_CR3_EWUP4_Values<PWR::CR3, 3, 1, ReadWriteMode, PWRCR3Base> ;
    using EWUP3 = PWR_CR3_EWUP3_Values<PWR::CR3, 2, 1, ReadWriteMode, PWRCR3Base> ;
    using EWUP2 = PWR_CR3_EWUP2_Values<PWR::CR3, 1, 1, ReadWriteMode, PWRCR3Base> ;
    using EWUP1 = PWR_CR3_EWUP1_Values<PWR::CR3, 0, 1, ReadWriteMode, PWRCR3Base> ;
    using FieldValues = PWR_CR3_EWUP1_Values<PWR::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40007008, 32, ReadWriteMode, PWRCR3Base, T...> ;

  struct PWRCR4Base {} ;

  struct CR4 : public RegisterBase<0x4000700C, 32, ReadWriteMode>
  {
    using VBRS = PWR_CR4_VBRS_Values<PWR::CR4, 9, 1, ReadWriteMode, PWRCR4Base> ;
    using VBE = PWR_CR4_VBE_Values<PWR::CR4, 8, 1, ReadWriteMode, PWRCR4Base> ;
    using WP5 = PWR_CR4_WP5_Values<PWR::CR4, 4, 1, ReadWriteMode, PWRCR4Base> ;
    using WP4 = PWR_CR4_WP4_Values<PWR::CR4, 3, 1, ReadWriteMode, PWRCR4Base> ;
    using WP3 = PWR_CR4_WP3_Values<PWR::CR4, 2, 1, ReadWriteMode, PWRCR4Base> ;
    using WP2 = PWR_CR4_WP2_Values<PWR::CR4, 1, 1, ReadWriteMode, PWRCR4Base> ;
    using WP1 = PWR_CR4_WP1_Values<PWR::CR4, 0, 1, ReadWriteMode, PWRCR4Base> ;
    using FieldValues = PWR_CR4_WP1_Values<PWR::CR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR4Pack  = Register<0x4000700C, 32, ReadWriteMode, PWRCR4Base, T...> ;

  struct PWRSR1Base {} ;

  struct SR1 : public RegisterBase<0x40007010, 32, ReadMode>
  {
    using WUFI = PWR_SR1_WUFI_Values<PWR::SR1, 15, 1, ReadMode, PWRSR1Base> ;
    using CSBF = PWR_SR1_CSBF_Values<PWR::SR1, 8, 1, ReadMode, PWRSR1Base> ;
    using CWUF5 = PWR_SR1_CWUF5_Values<PWR::SR1, 4, 1, ReadMode, PWRSR1Base> ;
    using CWUF4 = PWR_SR1_CWUF4_Values<PWR::SR1, 3, 1, ReadMode, PWRSR1Base> ;
    using CWUF3 = PWR_SR1_CWUF3_Values<PWR::SR1, 2, 1, ReadMode, PWRSR1Base> ;
    using CWUF2 = PWR_SR1_CWUF2_Values<PWR::SR1, 1, 1, ReadMode, PWRSR1Base> ;
    using CWUF1 = PWR_SR1_CWUF1_Values<PWR::SR1, 0, 1, ReadMode, PWRSR1Base> ;
    using FieldValues = PWR_SR1_CWUF1_Values<PWR::SR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR1Pack  = Register<0x40007010, 32, ReadMode, PWRSR1Base, T...> ;

  struct PWRSR2Base {} ;

  struct SR2 : public RegisterBase<0x40007014, 32, ReadMode>
  {
    using PVMO4 = PWR_SR2_PVMO4_Values<PWR::SR2, 15, 1, ReadMode, PWRSR2Base> ;
    using PVMO3 = PWR_SR2_PVMO3_Values<PWR::SR2, 14, 1, ReadMode, PWRSR2Base> ;
    using PVMO2 = PWR_SR2_PVMO2_Values<PWR::SR2, 13, 1, ReadMode, PWRSR2Base> ;
    using PVMO1 = PWR_SR2_PVMO1_Values<PWR::SR2, 12, 1, ReadMode, PWRSR2Base> ;
    using PVDO = PWR_SR2_PVDO_Values<PWR::SR2, 11, 1, ReadMode, PWRSR2Base> ;
    using VOSF = PWR_SR2_VOSF_Values<PWR::SR2, 10, 1, ReadMode, PWRSR2Base> ;
    using REGLPF = PWR_SR2_REGLPF_Values<PWR::SR2, 9, 1, ReadMode, PWRSR2Base> ;
    using REGLPS = PWR_SR2_REGLPS_Values<PWR::SR2, 8, 1, ReadMode, PWRSR2Base> ;
    using FieldValues = PWR_SR2_REGLPS_Values<PWR::SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0x40007014, 32, ReadMode, PWRSR2Base, T...> ;

  struct PWRSCRBase {} ;

  struct SCR : public RegisterBase<0x40007018, 32, WriteMode>
  {
    using SBF = PWR_SCR_SBF_Values<PWR::SCR, 8, 1, WriteMode, PWRSCRBase> ;
    using WUF5 = PWR_SCR_WUF5_Values<PWR::SCR, 4, 1, WriteMode, PWRSCRBase> ;
    using WUF4 = PWR_SCR_WUF4_Values<PWR::SCR, 3, 1, WriteMode, PWRSCRBase> ;
    using WUF3 = PWR_SCR_WUF3_Values<PWR::SCR, 2, 1, WriteMode, PWRSCRBase> ;
    using WUF2 = PWR_SCR_WUF2_Values<PWR::SCR, 1, 1, WriteMode, PWRSCRBase> ;
    using WUF1 = PWR_SCR_WUF1_Values<PWR::SCR, 0, 1, WriteMode, PWRSCRBase> ;
    using FieldValues = PWR_SCR_WUF1_Values<PWR::SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCRPack  = Register<0x40007018, 32, WriteMode, PWRSCRBase, T...> ;

  struct PWRPUCRABase {} ;

  struct PUCRA : public RegisterBase<0x40007020, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRA_PU15_Values<PWR::PUCRA, 15, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU14 = PWR_PUCRA_PU14_Values<PWR::PUCRA, 14, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU13 = PWR_PUCRA_PU13_Values<PWR::PUCRA, 13, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU12 = PWR_PUCRA_PU12_Values<PWR::PUCRA, 12, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU11 = PWR_PUCRA_PU11_Values<PWR::PUCRA, 11, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU10 = PWR_PUCRA_PU10_Values<PWR::PUCRA, 10, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU9 = PWR_PUCRA_PU9_Values<PWR::PUCRA, 9, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU8 = PWR_PUCRA_PU8_Values<PWR::PUCRA, 8, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU7 = PWR_PUCRA_PU7_Values<PWR::PUCRA, 7, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU6 = PWR_PUCRA_PU6_Values<PWR::PUCRA, 6, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU5 = PWR_PUCRA_PU5_Values<PWR::PUCRA, 5, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU4 = PWR_PUCRA_PU4_Values<PWR::PUCRA, 4, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU3 = PWR_PUCRA_PU3_Values<PWR::PUCRA, 3, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU2 = PWR_PUCRA_PU2_Values<PWR::PUCRA, 2, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU1 = PWR_PUCRA_PU1_Values<PWR::PUCRA, 1, 1, ReadWriteMode, PWRPUCRABase> ;
    using PU0 = PWR_PUCRA_PU0_Values<PWR::PUCRA, 0, 1, ReadWriteMode, PWRPUCRABase> ;
    using FieldValues = PWR_PUCRA_PU0_Values<PWR::PUCRA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRAPack  = Register<0x40007020, 32, ReadWriteMode, PWRPUCRABase, T...> ;

  struct PWRPDCRABase {} ;

  struct PDCRA : public RegisterBase<0x40007024, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRA_PD15_Values<PWR::PDCRA, 15, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD14 = PWR_PDCRA_PD14_Values<PWR::PDCRA, 14, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD13 = PWR_PDCRA_PD13_Values<PWR::PDCRA, 13, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD12 = PWR_PDCRA_PD12_Values<PWR::PDCRA, 12, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD11 = PWR_PDCRA_PD11_Values<PWR::PDCRA, 11, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD10 = PWR_PDCRA_PD10_Values<PWR::PDCRA, 10, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD9 = PWR_PDCRA_PD9_Values<PWR::PDCRA, 9, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD8 = PWR_PDCRA_PD8_Values<PWR::PDCRA, 8, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD7 = PWR_PDCRA_PD7_Values<PWR::PDCRA, 7, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD6 = PWR_PDCRA_PD6_Values<PWR::PDCRA, 6, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD5 = PWR_PDCRA_PD5_Values<PWR::PDCRA, 5, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD4 = PWR_PDCRA_PD4_Values<PWR::PDCRA, 4, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD3 = PWR_PDCRA_PD3_Values<PWR::PDCRA, 3, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD2 = PWR_PDCRA_PD2_Values<PWR::PDCRA, 2, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD1 = PWR_PDCRA_PD1_Values<PWR::PDCRA, 1, 1, ReadWriteMode, PWRPDCRABase> ;
    using PD0 = PWR_PDCRA_PD0_Values<PWR::PDCRA, 0, 1, ReadWriteMode, PWRPDCRABase> ;
    using FieldValues = PWR_PDCRA_PD0_Values<PWR::PDCRA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRAPack  = Register<0x40007024, 32, ReadWriteMode, PWRPDCRABase, T...> ;

  struct PWRPUCRBBase {} ;

  struct PUCRB : public RegisterBase<0x40007028, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRB_PU15_Values<PWR::PUCRB, 15, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU14 = PWR_PUCRB_PU14_Values<PWR::PUCRB, 14, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU13 = PWR_PUCRB_PU13_Values<PWR::PUCRB, 13, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU12 = PWR_PUCRB_PU12_Values<PWR::PUCRB, 12, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU11 = PWR_PUCRB_PU11_Values<PWR::PUCRB, 11, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU10 = PWR_PUCRB_PU10_Values<PWR::PUCRB, 10, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU9 = PWR_PUCRB_PU9_Values<PWR::PUCRB, 9, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU8 = PWR_PUCRB_PU8_Values<PWR::PUCRB, 8, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU7 = PWR_PUCRB_PU7_Values<PWR::PUCRB, 7, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU6 = PWR_PUCRB_PU6_Values<PWR::PUCRB, 6, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU5 = PWR_PUCRB_PU5_Values<PWR::PUCRB, 5, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU4 = PWR_PUCRB_PU4_Values<PWR::PUCRB, 4, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU3 = PWR_PUCRB_PU3_Values<PWR::PUCRB, 3, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU2 = PWR_PUCRB_PU2_Values<PWR::PUCRB, 2, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU1 = PWR_PUCRB_PU1_Values<PWR::PUCRB, 1, 1, ReadWriteMode, PWRPUCRBBase> ;
    using PU0 = PWR_PUCRB_PU0_Values<PWR::PUCRB, 0, 1, ReadWriteMode, PWRPUCRBBase> ;
    using FieldValues = PWR_PUCRB_PU0_Values<PWR::PUCRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRBPack  = Register<0x40007028, 32, ReadWriteMode, PWRPUCRBBase, T...> ;

  struct PWRPDCRBBase {} ;

  struct PDCRB : public RegisterBase<0x4000702C, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRB_PD15_Values<PWR::PDCRB, 15, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD14 = PWR_PDCRB_PD14_Values<PWR::PDCRB, 14, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD13 = PWR_PDCRB_PD13_Values<PWR::PDCRB, 13, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD12 = PWR_PDCRB_PD12_Values<PWR::PDCRB, 12, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD11 = PWR_PDCRB_PD11_Values<PWR::PDCRB, 11, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD10 = PWR_PDCRB_PD10_Values<PWR::PDCRB, 10, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD9 = PWR_PDCRB_PD9_Values<PWR::PDCRB, 9, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD8 = PWR_PDCRB_PD8_Values<PWR::PDCRB, 8, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD7 = PWR_PDCRB_PD7_Values<PWR::PDCRB, 7, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD6 = PWR_PDCRB_PD6_Values<PWR::PDCRB, 6, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD5 = PWR_PDCRB_PD5_Values<PWR::PDCRB, 5, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD4 = PWR_PDCRB_PD4_Values<PWR::PDCRB, 4, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD3 = PWR_PDCRB_PD3_Values<PWR::PDCRB, 3, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD2 = PWR_PDCRB_PD2_Values<PWR::PDCRB, 2, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD1 = PWR_PDCRB_PD1_Values<PWR::PDCRB, 1, 1, ReadWriteMode, PWRPDCRBBase> ;
    using PD0 = PWR_PDCRB_PD0_Values<PWR::PDCRB, 0, 1, ReadWriteMode, PWRPDCRBBase> ;
    using FieldValues = PWR_PDCRB_PD0_Values<PWR::PDCRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRBPack  = Register<0x4000702C, 32, ReadWriteMode, PWRPDCRBBase, T...> ;

  struct PWRPUCRCBase {} ;

  struct PUCRC : public RegisterBase<0x40007030, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRC_PU15_Values<PWR::PUCRC, 15, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU14 = PWR_PUCRC_PU14_Values<PWR::PUCRC, 14, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU13 = PWR_PUCRC_PU13_Values<PWR::PUCRC, 13, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU12 = PWR_PUCRC_PU12_Values<PWR::PUCRC, 12, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU11 = PWR_PUCRC_PU11_Values<PWR::PUCRC, 11, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU10 = PWR_PUCRC_PU10_Values<PWR::PUCRC, 10, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU9 = PWR_PUCRC_PU9_Values<PWR::PUCRC, 9, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU8 = PWR_PUCRC_PU8_Values<PWR::PUCRC, 8, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU7 = PWR_PUCRC_PU7_Values<PWR::PUCRC, 7, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU6 = PWR_PUCRC_PU6_Values<PWR::PUCRC, 6, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU5 = PWR_PUCRC_PU5_Values<PWR::PUCRC, 5, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU4 = PWR_PUCRC_PU4_Values<PWR::PUCRC, 4, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU3 = PWR_PUCRC_PU3_Values<PWR::PUCRC, 3, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU2 = PWR_PUCRC_PU2_Values<PWR::PUCRC, 2, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU1 = PWR_PUCRC_PU1_Values<PWR::PUCRC, 1, 1, ReadWriteMode, PWRPUCRCBase> ;
    using PU0 = PWR_PUCRC_PU0_Values<PWR::PUCRC, 0, 1, ReadWriteMode, PWRPUCRCBase> ;
    using FieldValues = PWR_PUCRC_PU0_Values<PWR::PUCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRCPack  = Register<0x40007030, 32, ReadWriteMode, PWRPUCRCBase, T...> ;

  struct PWRPDCRCBase {} ;

  struct PDCRC : public RegisterBase<0x40007034, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRC_PD15_Values<PWR::PDCRC, 15, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD14 = PWR_PDCRC_PD14_Values<PWR::PDCRC, 14, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD13 = PWR_PDCRC_PD13_Values<PWR::PDCRC, 13, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD12 = PWR_PDCRC_PD12_Values<PWR::PDCRC, 12, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD11 = PWR_PDCRC_PD11_Values<PWR::PDCRC, 11, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD10 = PWR_PDCRC_PD10_Values<PWR::PDCRC, 10, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD9 = PWR_PDCRC_PD9_Values<PWR::PDCRC, 9, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD8 = PWR_PDCRC_PD8_Values<PWR::PDCRC, 8, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD7 = PWR_PDCRC_PD7_Values<PWR::PDCRC, 7, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD6 = PWR_PDCRC_PD6_Values<PWR::PDCRC, 6, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD5 = PWR_PDCRC_PD5_Values<PWR::PDCRC, 5, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD4 = PWR_PDCRC_PD4_Values<PWR::PDCRC, 4, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD3 = PWR_PDCRC_PD3_Values<PWR::PDCRC, 3, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD2 = PWR_PDCRC_PD2_Values<PWR::PDCRC, 2, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD1 = PWR_PDCRC_PD1_Values<PWR::PDCRC, 1, 1, ReadWriteMode, PWRPDCRCBase> ;
    using PD0 = PWR_PDCRC_PD0_Values<PWR::PDCRC, 0, 1, ReadWriteMode, PWRPDCRCBase> ;
    using FieldValues = PWR_PDCRC_PD0_Values<PWR::PDCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRCPack  = Register<0x40007034, 32, ReadWriteMode, PWRPDCRCBase, T...> ;

  struct PWRPUCRDBase {} ;

  struct PUCRD : public RegisterBase<0x40007038, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRD_PU15_Values<PWR::PUCRD, 15, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU14 = PWR_PUCRD_PU14_Values<PWR::PUCRD, 14, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU13 = PWR_PUCRD_PU13_Values<PWR::PUCRD, 13, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU12 = PWR_PUCRD_PU12_Values<PWR::PUCRD, 12, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU11 = PWR_PUCRD_PU11_Values<PWR::PUCRD, 11, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU10 = PWR_PUCRD_PU10_Values<PWR::PUCRD, 10, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU9 = PWR_PUCRD_PU9_Values<PWR::PUCRD, 9, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU8 = PWR_PUCRD_PU8_Values<PWR::PUCRD, 8, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU7 = PWR_PUCRD_PU7_Values<PWR::PUCRD, 7, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU6 = PWR_PUCRD_PU6_Values<PWR::PUCRD, 6, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU5 = PWR_PUCRD_PU5_Values<PWR::PUCRD, 5, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU4 = PWR_PUCRD_PU4_Values<PWR::PUCRD, 4, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU3 = PWR_PUCRD_PU3_Values<PWR::PUCRD, 3, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU2 = PWR_PUCRD_PU2_Values<PWR::PUCRD, 2, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU1 = PWR_PUCRD_PU1_Values<PWR::PUCRD, 1, 1, ReadWriteMode, PWRPUCRDBase> ;
    using PU0 = PWR_PUCRD_PU0_Values<PWR::PUCRD, 0, 1, ReadWriteMode, PWRPUCRDBase> ;
    using FieldValues = PWR_PUCRD_PU0_Values<PWR::PUCRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRDPack  = Register<0x40007038, 32, ReadWriteMode, PWRPUCRDBase, T...> ;

  struct PWRPDCRDBase {} ;

  struct PDCRD : public RegisterBase<0x4000703C, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRD_PD15_Values<PWR::PDCRD, 15, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD14 = PWR_PDCRD_PD14_Values<PWR::PDCRD, 14, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD13 = PWR_PDCRD_PD13_Values<PWR::PDCRD, 13, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD12 = PWR_PDCRD_PD12_Values<PWR::PDCRD, 12, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD11 = PWR_PDCRD_PD11_Values<PWR::PDCRD, 11, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD10 = PWR_PDCRD_PD10_Values<PWR::PDCRD, 10, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD9 = PWR_PDCRD_PD9_Values<PWR::PDCRD, 9, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD8 = PWR_PDCRD_PD8_Values<PWR::PDCRD, 8, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD7 = PWR_PDCRD_PD7_Values<PWR::PDCRD, 7, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD6 = PWR_PDCRD_PD6_Values<PWR::PDCRD, 6, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD5 = PWR_PDCRD_PD5_Values<PWR::PDCRD, 5, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD4 = PWR_PDCRD_PD4_Values<PWR::PDCRD, 4, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD3 = PWR_PDCRD_PD3_Values<PWR::PDCRD, 3, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD2 = PWR_PDCRD_PD2_Values<PWR::PDCRD, 2, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD1 = PWR_PDCRD_PD1_Values<PWR::PDCRD, 1, 1, ReadWriteMode, PWRPDCRDBase> ;
    using PD0 = PWR_PDCRD_PD0_Values<PWR::PDCRD, 0, 1, ReadWriteMode, PWRPDCRDBase> ;
    using FieldValues = PWR_PDCRD_PD0_Values<PWR::PDCRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRDPack  = Register<0x4000703C, 32, ReadWriteMode, PWRPDCRDBase, T...> ;

  struct PWRPUCREBase {} ;

  struct PUCRE : public RegisterBase<0x40007040, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRE_PU15_Values<PWR::PUCRE, 15, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU14 = PWR_PUCRE_PU14_Values<PWR::PUCRE, 14, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU13 = PWR_PUCRE_PU13_Values<PWR::PUCRE, 13, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU12 = PWR_PUCRE_PU12_Values<PWR::PUCRE, 12, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU11 = PWR_PUCRE_PU11_Values<PWR::PUCRE, 11, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU10 = PWR_PUCRE_PU10_Values<PWR::PUCRE, 10, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU9 = PWR_PUCRE_PU9_Values<PWR::PUCRE, 9, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU8 = PWR_PUCRE_PU8_Values<PWR::PUCRE, 8, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU7 = PWR_PUCRE_PU7_Values<PWR::PUCRE, 7, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU6 = PWR_PUCRE_PU6_Values<PWR::PUCRE, 6, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU5 = PWR_PUCRE_PU5_Values<PWR::PUCRE, 5, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU4 = PWR_PUCRE_PU4_Values<PWR::PUCRE, 4, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU3 = PWR_PUCRE_PU3_Values<PWR::PUCRE, 3, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU2 = PWR_PUCRE_PU2_Values<PWR::PUCRE, 2, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU1 = PWR_PUCRE_PU1_Values<PWR::PUCRE, 1, 1, ReadWriteMode, PWRPUCREBase> ;
    using PU0 = PWR_PUCRE_PU0_Values<PWR::PUCRE, 0, 1, ReadWriteMode, PWRPUCREBase> ;
    using FieldValues = PWR_PUCRE_PU0_Values<PWR::PUCRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCREPack  = Register<0x40007040, 32, ReadWriteMode, PWRPUCREBase, T...> ;

  struct PWRPDCREBase {} ;

  struct PDCRE : public RegisterBase<0x40007044, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRE_PD15_Values<PWR::PDCRE, 15, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD14 = PWR_PDCRE_PD14_Values<PWR::PDCRE, 14, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD13 = PWR_PDCRE_PD13_Values<PWR::PDCRE, 13, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD12 = PWR_PDCRE_PD12_Values<PWR::PDCRE, 12, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD11 = PWR_PDCRE_PD11_Values<PWR::PDCRE, 11, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD10 = PWR_PDCRE_PD10_Values<PWR::PDCRE, 10, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD9 = PWR_PDCRE_PD9_Values<PWR::PDCRE, 9, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD8 = PWR_PDCRE_PD8_Values<PWR::PDCRE, 8, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD7 = PWR_PDCRE_PD7_Values<PWR::PDCRE, 7, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD6 = PWR_PDCRE_PD6_Values<PWR::PDCRE, 6, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD5 = PWR_PDCRE_PD5_Values<PWR::PDCRE, 5, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD4 = PWR_PDCRE_PD4_Values<PWR::PDCRE, 4, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD3 = PWR_PDCRE_PD3_Values<PWR::PDCRE, 3, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD2 = PWR_PDCRE_PD2_Values<PWR::PDCRE, 2, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD1 = PWR_PDCRE_PD1_Values<PWR::PDCRE, 1, 1, ReadWriteMode, PWRPDCREBase> ;
    using PD0 = PWR_PDCRE_PD0_Values<PWR::PDCRE, 0, 1, ReadWriteMode, PWRPDCREBase> ;
    using FieldValues = PWR_PDCRE_PD0_Values<PWR::PDCRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCREPack  = Register<0x40007044, 32, ReadWriteMode, PWRPDCREBase, T...> ;

  struct PWRPUCRFBase {} ;

  struct PUCRF : public RegisterBase<0x40007048, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRF_PU15_Values<PWR::PUCRF, 15, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU14 = PWR_PUCRF_PU14_Values<PWR::PUCRF, 14, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU13 = PWR_PUCRF_PU13_Values<PWR::PUCRF, 13, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU12 = PWR_PUCRF_PU12_Values<PWR::PUCRF, 12, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU11 = PWR_PUCRF_PU11_Values<PWR::PUCRF, 11, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU10 = PWR_PUCRF_PU10_Values<PWR::PUCRF, 10, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU9 = PWR_PUCRF_PU9_Values<PWR::PUCRF, 9, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU8 = PWR_PUCRF_PU8_Values<PWR::PUCRF, 8, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU7 = PWR_PUCRF_PU7_Values<PWR::PUCRF, 7, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU6 = PWR_PUCRF_PU6_Values<PWR::PUCRF, 6, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU5 = PWR_PUCRF_PU5_Values<PWR::PUCRF, 5, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU4 = PWR_PUCRF_PU4_Values<PWR::PUCRF, 4, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU3 = PWR_PUCRF_PU3_Values<PWR::PUCRF, 3, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU2 = PWR_PUCRF_PU2_Values<PWR::PUCRF, 2, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU1 = PWR_PUCRF_PU1_Values<PWR::PUCRF, 1, 1, ReadWriteMode, PWRPUCRFBase> ;
    using PU0 = PWR_PUCRF_PU0_Values<PWR::PUCRF, 0, 1, ReadWriteMode, PWRPUCRFBase> ;
    using FieldValues = PWR_PUCRF_PU0_Values<PWR::PUCRF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRFPack  = Register<0x40007048, 32, ReadWriteMode, PWRPUCRFBase, T...> ;

  struct PWRPDCRFBase {} ;

  struct PDCRF : public RegisterBase<0x4000704C, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRF_PD15_Values<PWR::PDCRF, 15, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD14 = PWR_PDCRF_PD14_Values<PWR::PDCRF, 14, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD13 = PWR_PDCRF_PD13_Values<PWR::PDCRF, 13, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD12 = PWR_PDCRF_PD12_Values<PWR::PDCRF, 12, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD11 = PWR_PDCRF_PD11_Values<PWR::PDCRF, 11, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD10 = PWR_PDCRF_PD10_Values<PWR::PDCRF, 10, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD9 = PWR_PDCRF_PD9_Values<PWR::PDCRF, 9, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD8 = PWR_PDCRF_PD8_Values<PWR::PDCRF, 8, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD7 = PWR_PDCRF_PD7_Values<PWR::PDCRF, 7, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD6 = PWR_PDCRF_PD6_Values<PWR::PDCRF, 6, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD5 = PWR_PDCRF_PD5_Values<PWR::PDCRF, 5, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD4 = PWR_PDCRF_PD4_Values<PWR::PDCRF, 4, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD3 = PWR_PDCRF_PD3_Values<PWR::PDCRF, 3, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD2 = PWR_PDCRF_PD2_Values<PWR::PDCRF, 2, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD1 = PWR_PDCRF_PD1_Values<PWR::PDCRF, 1, 1, ReadWriteMode, PWRPDCRFBase> ;
    using PD0 = PWR_PDCRF_PD0_Values<PWR::PDCRF, 0, 1, ReadWriteMode, PWRPDCRFBase> ;
    using FieldValues = PWR_PDCRF_PD0_Values<PWR::PDCRF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRFPack  = Register<0x4000704C, 32, ReadWriteMode, PWRPDCRFBase, T...> ;

  struct PWRPUCRGBase {} ;

  struct PUCRG : public RegisterBase<0x40007050, 32, ReadWriteMode>
  {
    using PU15 = PWR_PUCRG_PU15_Values<PWR::PUCRG, 15, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU14 = PWR_PUCRG_PU14_Values<PWR::PUCRG, 14, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU13 = PWR_PUCRG_PU13_Values<PWR::PUCRG, 13, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU12 = PWR_PUCRG_PU12_Values<PWR::PUCRG, 12, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU11 = PWR_PUCRG_PU11_Values<PWR::PUCRG, 11, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU10 = PWR_PUCRG_PU10_Values<PWR::PUCRG, 10, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU9 = PWR_PUCRG_PU9_Values<PWR::PUCRG, 9, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU8 = PWR_PUCRG_PU8_Values<PWR::PUCRG, 8, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU7 = PWR_PUCRG_PU7_Values<PWR::PUCRG, 7, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU6 = PWR_PUCRG_PU6_Values<PWR::PUCRG, 6, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU5 = PWR_PUCRG_PU5_Values<PWR::PUCRG, 5, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU4 = PWR_PUCRG_PU4_Values<PWR::PUCRG, 4, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU3 = PWR_PUCRG_PU3_Values<PWR::PUCRG, 3, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU2 = PWR_PUCRG_PU2_Values<PWR::PUCRG, 2, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU1 = PWR_PUCRG_PU1_Values<PWR::PUCRG, 1, 1, ReadWriteMode, PWRPUCRGBase> ;
    using PU0 = PWR_PUCRG_PU0_Values<PWR::PUCRG, 0, 1, ReadWriteMode, PWRPUCRGBase> ;
    using FieldValues = PWR_PUCRG_PU0_Values<PWR::PUCRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRGPack  = Register<0x40007050, 32, ReadWriteMode, PWRPUCRGBase, T...> ;

  struct PWRPDCRGBase {} ;

  struct PDCRG : public RegisterBase<0x40007054, 32, ReadWriteMode>
  {
    using PD15 = PWR_PDCRG_PD15_Values<PWR::PDCRG, 15, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD14 = PWR_PDCRG_PD14_Values<PWR::PDCRG, 14, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD13 = PWR_PDCRG_PD13_Values<PWR::PDCRG, 13, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD12 = PWR_PDCRG_PD12_Values<PWR::PDCRG, 12, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD11 = PWR_PDCRG_PD11_Values<PWR::PDCRG, 11, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD10 = PWR_PDCRG_PD10_Values<PWR::PDCRG, 10, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD9 = PWR_PDCRG_PD9_Values<PWR::PDCRG, 9, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD8 = PWR_PDCRG_PD8_Values<PWR::PDCRG, 8, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD7 = PWR_PDCRG_PD7_Values<PWR::PDCRG, 7, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD6 = PWR_PDCRG_PD6_Values<PWR::PDCRG, 6, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD5 = PWR_PDCRG_PD5_Values<PWR::PDCRG, 5, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD4 = PWR_PDCRG_PD4_Values<PWR::PDCRG, 4, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD3 = PWR_PDCRG_PD3_Values<PWR::PDCRG, 3, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD2 = PWR_PDCRG_PD2_Values<PWR::PDCRG, 2, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD1 = PWR_PDCRG_PD1_Values<PWR::PDCRG, 1, 1, ReadWriteMode, PWRPDCRGBase> ;
    using PD0 = PWR_PDCRG_PD0_Values<PWR::PDCRG, 0, 1, ReadWriteMode, PWRPDCRGBase> ;
    using FieldValues = PWR_PDCRG_PD0_Values<PWR::PDCRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRGPack  = Register<0x40007054, 32, ReadWriteMode, PWRPDCRGBase, T...> ;

  struct PWRPUCRHBase {} ;

  struct PUCRH : public RegisterBase<0x40007058, 32, ReadWriteMode>
  {
    using PU1 = PWR_PUCRH_PU1_Values<PWR::PUCRH, 1, 1, ReadWriteMode, PWRPUCRHBase> ;
    using PU0 = PWR_PUCRH_PU0_Values<PWR::PUCRH, 0, 1, ReadWriteMode, PWRPUCRHBase> ;
    using FieldValues = PWR_PUCRH_PU0_Values<PWR::PUCRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUCRHPack  = Register<0x40007058, 32, ReadWriteMode, PWRPUCRHBase, T...> ;

  struct PWRPDCRHBase {} ;

  struct PDCRH : public RegisterBase<0x4000705C, 32, ReadWriteMode>
  {
    using PD1 = PWR_PDCRH_PD1_Values<PWR::PDCRH, 1, 1, ReadWriteMode, PWRPDCRHBase> ;
    using PD0 = PWR_PDCRH_PD0_Values<PWR::PDCRH, 0, 1, ReadWriteMode, PWRPDCRHBase> ;
    using FieldValues = PWR_PDCRH_PD0_Values<PWR::PDCRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDCRHPack  = Register<0x4000705C, 32, ReadWriteMode, PWRPDCRHBase, T...> ;

} ;

#endif //#if !defined(PWRREGISTERS_HPP)
