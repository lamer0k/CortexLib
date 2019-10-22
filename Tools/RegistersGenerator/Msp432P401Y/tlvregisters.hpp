/*******************************************************************************
* Filename      : tlvregisters.hpp
*
* Details       : TLV. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(TLVREGISTERS_HPP)
#define TLVREGISTERS_HPP

#include "tlvbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TLV
{
  struct TLVTLV_CHECKSUMBase {} ;

  struct TLV_CHECKSUM : public RegisterBase<0x201000, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using TLV_CHECKSUMPack  = Register<0x201000, 32, ReadMode, TLVTLV_CHECKSUMBase, T...> ;

  struct TLVDEVICE_INFO_TAGBase {} ;

  struct DEVICE_INFO_TAG : public RegisterBase<0x201004, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICE_INFO_TAGPack  = Register<0x201004, 32, ReadMode, TLVDEVICE_INFO_TAGBase, T...> ;

  struct TLVDEVICE_INFO_LENBase {} ;

  struct DEVICE_INFO_LEN : public RegisterBase<0x201008, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICE_INFO_LENPack  = Register<0x201008, 32, ReadMode, TLVDEVICE_INFO_LENBase, T...> ;

  struct TLVDEVICE_IDBase {} ;

  struct DEVICE_ID : public RegisterBase<0x20100C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DEVICE_IDPack  = Register<0x20100C, 32, ReadMode, TLVDEVICE_IDBase, T...> ;

  struct TLVHWREVBase {} ;

  struct HWREV : public RegisterBase<0x201010, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using HWREVPack  = Register<0x201010, 32, ReadMode, TLVHWREVBase, T...> ;

  struct TLVBCREVBase {} ;

  struct BCREV : public RegisterBase<0x201014, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BCREVPack  = Register<0x201014, 32, ReadMode, TLVBCREVBase, T...> ;

  struct TLVROM_DRVLIB_REVBase {} ;

  struct ROM_DRVLIB_REV : public RegisterBase<0x201018, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ROM_DRVLIB_REVPack  = Register<0x201018, 32, ReadMode, TLVROM_DRVLIB_REVBase, T...> ;

  struct TLVDIE_REC_TAGBase {} ;

  struct DIE_REC_TAG : public RegisterBase<0x20101C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DIE_REC_TAGPack  = Register<0x20101C, 32, ReadMode, TLVDIE_REC_TAGBase, T...> ;

  struct TLVDIE_REC_LENBase {} ;

  struct DIE_REC_LEN : public RegisterBase<0x201020, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DIE_REC_LENPack  = Register<0x201020, 32, ReadMode, TLVDIE_REC_LENBase, T...> ;

  struct TLVDIE_XPOSBase {} ;

  struct DIE_XPOS : public RegisterBase<0x201024, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DIE_XPOSPack  = Register<0x201024, 32, ReadMode, TLVDIE_XPOSBase, T...> ;

  struct TLVDIE_YPOSBase {} ;

  struct DIE_YPOS : public RegisterBase<0x201028, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DIE_YPOSPack  = Register<0x201028, 32, ReadMode, TLVDIE_YPOSBase, T...> ;

  struct TLVWAFER_IDBase {} ;

  struct WAFER_ID : public RegisterBase<0x20102C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using WAFER_IDPack  = Register<0x20102C, 32, ReadMode, TLVWAFER_IDBase, T...> ;

  struct TLVLOT_IDBase {} ;

  struct LOT_ID : public RegisterBase<0x201030, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using LOT_IDPack  = Register<0x201030, 32, ReadMode, TLVLOT_IDBase, T...> ;

  struct TLVRESERVED0Base {} ;

  struct RESERVED0 : public RegisterBase<0x201034, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED0Pack  = Register<0x201034, 32, ReadMode, TLVRESERVED0Base, T...> ;

  struct TLVRESERVED1Base {} ;

  struct RESERVED1 : public RegisterBase<0x201038, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED1Pack  = Register<0x201038, 32, ReadMode, TLVRESERVED1Base, T...> ;

  struct TLVRESERVED2Base {} ;

  struct RESERVED2 : public RegisterBase<0x20103C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED2Pack  = Register<0x20103C, 32, ReadMode, TLVRESERVED2Base, T...> ;

  struct TLVTEST_RESULTSBase {} ;

  struct TEST_RESULTS : public RegisterBase<0x201040, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using TEST_RESULTSPack  = Register<0x201040, 32, ReadMode, TLVTEST_RESULTSBase, T...> ;

  struct TLVCS_CAL_TAGBase {} ;

  struct CS_CAL_TAG : public RegisterBase<0x201044, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using CS_CAL_TAGPack  = Register<0x201044, 32, ReadMode, TLVCS_CAL_TAGBase, T...> ;

  struct TLVCS_CAL_LENBase {} ;

  struct CS_CAL_LEN : public RegisterBase<0x201048, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using CS_CAL_LENPack  = Register<0x201048, 32, ReadMode, TLVCS_CAL_LENBase, T...> ;

  struct TLVDCOIR_FCAL_RSEL04Base {} ;

  struct DCOIR_FCAL_RSEL04 : public RegisterBase<0x20104C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOIR_FCAL_RSEL04Pack  = Register<0x20104C, 32, ReadMode, TLVDCOIR_FCAL_RSEL04Base, T...> ;

  struct TLVDCOIR_FCAL_RSEL5Base {} ;

  struct DCOIR_FCAL_RSEL5 : public RegisterBase<0x201050, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOIR_FCAL_RSEL5Pack  = Register<0x201050, 32, ReadMode, TLVDCOIR_FCAL_RSEL5Base, T...> ;

  struct TLVRESERVED3Base {} ;

  struct RESERVED3 : public RegisterBase<0x201054, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED3Pack  = Register<0x201054, 32, ReadMode, TLVRESERVED3Base, T...> ;

  struct TLVRESERVED4Base {} ;

  struct RESERVED4 : public RegisterBase<0x201058, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED4Pack  = Register<0x201058, 32, ReadMode, TLVRESERVED4Base, T...> ;

  struct TLVRESERVED5Base {} ;

  struct RESERVED5 : public RegisterBase<0x20105C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED5Pack  = Register<0x20105C, 32, ReadMode, TLVRESERVED5Base, T...> ;

  struct TLVRESERVED6Base {} ;

  struct RESERVED6 : public RegisterBase<0x201060, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED6Pack  = Register<0x201060, 32, ReadMode, TLVRESERVED6Base, T...> ;

  struct TLVDCOIR_CONSTK_RSEL04Base {} ;

  struct DCOIR_CONSTK_RSEL04 : public RegisterBase<0x201064, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOIR_CONSTK_RSEL04Pack  = Register<0x201064, 32, ReadMode, TLVDCOIR_CONSTK_RSEL04Base, T...> ;

  struct TLVDCOIR_CONSTK_RSEL5Base {} ;

  struct DCOIR_CONSTK_RSEL5 : public RegisterBase<0x201068, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOIR_CONSTK_RSEL5Pack  = Register<0x201068, 32, ReadMode, TLVDCOIR_CONSTK_RSEL5Base, T...> ;

  struct TLVDCOER_FCAL_RSEL04Base {} ;

  struct DCOER_FCAL_RSEL04 : public RegisterBase<0x20106C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOER_FCAL_RSEL04Pack  = Register<0x20106C, 32, ReadMode, TLVDCOER_FCAL_RSEL04Base, T...> ;

  struct TLVDCOER_FCAL_RSEL5Base {} ;

  struct DCOER_FCAL_RSEL5 : public RegisterBase<0x201070, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOER_FCAL_RSEL5Pack  = Register<0x201070, 32, ReadMode, TLVDCOER_FCAL_RSEL5Base, T...> ;

  struct TLVRESERVED7Base {} ;

  struct RESERVED7 : public RegisterBase<0x201074, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED7Pack  = Register<0x201074, 32, ReadMode, TLVRESERVED7Base, T...> ;

  struct TLVRESERVED8Base {} ;

  struct RESERVED8 : public RegisterBase<0x201078, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED8Pack  = Register<0x201078, 32, ReadMode, TLVRESERVED8Base, T...> ;

  struct TLVRESERVED9Base {} ;

  struct RESERVED9 : public RegisterBase<0x20107C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED9Pack  = Register<0x20107C, 32, ReadMode, TLVRESERVED9Base, T...> ;

  struct TLVRESERVED10Base {} ;

  struct RESERVED10 : public RegisterBase<0x201080, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED10Pack  = Register<0x201080, 32, ReadMode, TLVRESERVED10Base, T...> ;

  struct TLVDCOER_CONSTK_RSEL04Base {} ;

  struct DCOER_CONSTK_RSEL04 : public RegisterBase<0x201084, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOER_CONSTK_RSEL04Pack  = Register<0x201084, 32, ReadMode, TLVDCOER_CONSTK_RSEL04Base, T...> ;

  struct TLVDCOER_CONSTK_RSEL5Base {} ;

  struct DCOER_CONSTK_RSEL5 : public RegisterBase<0x201088, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using DCOER_CONSTK_RSEL5Pack  = Register<0x201088, 32, ReadMode, TLVDCOER_CONSTK_RSEL5Base, T...> ;

  struct TLVADC14_CAL_TAGBase {} ;

  struct ADC14_CAL_TAG : public RegisterBase<0x20108C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_CAL_TAGPack  = Register<0x20108C, 32, ReadMode, TLVADC14_CAL_TAGBase, T...> ;

  struct TLVADC14_CAL_LENBase {} ;

  struct ADC14_CAL_LEN : public RegisterBase<0x201090, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_CAL_LENPack  = Register<0x201090, 32, ReadMode, TLVADC14_CAL_LENBase, T...> ;

  struct TLVADC_GAIN_FACTORBase {} ;

  struct ADC_GAIN_FACTOR : public RegisterBase<0x201094, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC_GAIN_FACTORPack  = Register<0x201094, 32, ReadMode, TLVADC_GAIN_FACTORBase, T...> ;

  struct TLVADC_OFFSETBase {} ;

  struct ADC_OFFSET : public RegisterBase<0x201098, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC_OFFSETPack  = Register<0x201098, 32, ReadMode, TLVADC_OFFSETBase, T...> ;

  struct TLVRESERVED11Base {} ;

  struct RESERVED11 : public RegisterBase<0x20109C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED11Pack  = Register<0x20109C, 32, ReadMode, TLVRESERVED11Base, T...> ;

  struct TLVRESERVED12Base {} ;

  struct RESERVED12 : public RegisterBase<0x2010A0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED12Pack  = Register<0x2010A0, 32, ReadMode, TLVRESERVED12Base, T...> ;

  struct TLVRESERVED13Base {} ;

  struct RESERVED13 : public RegisterBase<0x2010A4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED13Pack  = Register<0x2010A4, 32, ReadMode, TLVRESERVED13Base, T...> ;

  struct TLVRESERVED14Base {} ;

  struct RESERVED14 : public RegisterBase<0x2010A8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED14Pack  = Register<0x2010A8, 32, ReadMode, TLVRESERVED14Base, T...> ;

  struct TLVRESERVED15Base {} ;

  struct RESERVED15 : public RegisterBase<0x2010AC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED15Pack  = Register<0x2010AC, 32, ReadMode, TLVRESERVED15Base, T...> ;

  struct TLVRESERVED16Base {} ;

  struct RESERVED16 : public RegisterBase<0x2010B0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED16Pack  = Register<0x2010B0, 32, ReadMode, TLVRESERVED16Base, T...> ;

  struct TLVRESERVED17Base {} ;

  struct RESERVED17 : public RegisterBase<0x2010B4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED17Pack  = Register<0x2010B4, 32, ReadMode, TLVRESERVED17Base, T...> ;

  struct TLVRESERVED18Base {} ;

  struct RESERVED18 : public RegisterBase<0x2010B8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED18Pack  = Register<0x2010B8, 32, ReadMode, TLVRESERVED18Base, T...> ;

  struct TLVRESERVED19Base {} ;

  struct RESERVED19 : public RegisterBase<0x2010BC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED19Pack  = Register<0x2010BC, 32, ReadMode, TLVRESERVED19Base, T...> ;

  struct TLVRESERVED20Base {} ;

  struct RESERVED20 : public RegisterBase<0x2010C0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED20Pack  = Register<0x2010C0, 32, ReadMode, TLVRESERVED20Base, T...> ;

  struct TLVRESERVED21Base {} ;

  struct RESERVED21 : public RegisterBase<0x2010C4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED21Pack  = Register<0x2010C4, 32, ReadMode, TLVRESERVED21Base, T...> ;

  struct TLVRESERVED22Base {} ;

  struct RESERVED22 : public RegisterBase<0x2010C8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED22Pack  = Register<0x2010C8, 32, ReadMode, TLVRESERVED22Base, T...> ;

  struct TLVRESERVED23Base {} ;

  struct RESERVED23 : public RegisterBase<0x2010CC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED23Pack  = Register<0x2010CC, 32, ReadMode, TLVRESERVED23Base, T...> ;

  struct TLVRESERVED24Base {} ;

  struct RESERVED24 : public RegisterBase<0x2010D0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED24Pack  = Register<0x2010D0, 32, ReadMode, TLVRESERVED24Base, T...> ;

  struct TLVRESERVED25Base {} ;

  struct RESERVED25 : public RegisterBase<0x2010D4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED25Pack  = Register<0x2010D4, 32, ReadMode, TLVRESERVED25Base, T...> ;

  struct TLVRESERVED26Base {} ;

  struct RESERVED26 : public RegisterBase<0x2010D8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RESERVED26Pack  = Register<0x2010D8, 32, ReadMode, TLVRESERVED26Base, T...> ;

  struct TLVADC14_REF1P2V_TS30CBase {} ;

  struct ADC14_REF1P2V_TS30C : public RegisterBase<0x2010DC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF1P2V_TS30CPack  = Register<0x2010DC, 32, ReadMode, TLVADC14_REF1P2V_TS30CBase, T...> ;

  struct TLVADC14_REF1P2V_TS85CBase {} ;

  struct ADC14_REF1P2V_TS85C : public RegisterBase<0x2010E0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF1P2V_TS85CPack  = Register<0x2010E0, 32, ReadMode, TLVADC14_REF1P2V_TS85CBase, T...> ;

  struct TLVADC14_REF1P45V_TS30CBase {} ;

  struct ADC14_REF1P45V_TS30C : public RegisterBase<0x2010E4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF1P45V_TS30CPack  = Register<0x2010E4, 32, ReadMode, TLVADC14_REF1P45V_TS30CBase, T...> ;

  struct TLVADC14_REF1P45V_TS85CBase {} ;

  struct ADC14_REF1P45V_TS85C : public RegisterBase<0x2010E8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF1P45V_TS85CPack  = Register<0x2010E8, 32, ReadMode, TLVADC14_REF1P45V_TS85CBase, T...> ;

  struct TLVADC14_REF2P5V_TS30CBase {} ;

  struct ADC14_REF2P5V_TS30C : public RegisterBase<0x2010EC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF2P5V_TS30CPack  = Register<0x2010EC, 32, ReadMode, TLVADC14_REF2P5V_TS30CBase, T...> ;

  struct TLVADC14_REF2P5V_TS85CBase {} ;

  struct ADC14_REF2P5V_TS85C : public RegisterBase<0x2010F0, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using ADC14_REF2P5V_TS85CPack  = Register<0x2010F0, 32, ReadMode, TLVADC14_REF2P5V_TS85CBase, T...> ;

  struct TLVREF_CAL_TAGBase {} ;

  struct REF_CAL_TAG : public RegisterBase<0x2010F4, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using REF_CAL_TAGPack  = Register<0x2010F4, 32, ReadMode, TLVREF_CAL_TAGBase, T...> ;

  struct TLVREF_CAL_LENBase {} ;

  struct REF_CAL_LEN : public RegisterBase<0x2010F8, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using REF_CAL_LENPack  = Register<0x2010F8, 32, ReadMode, TLVREF_CAL_LENBase, T...> ;

  struct TLVREF_1P2VBase {} ;

  struct REF_1P2V : public RegisterBase<0x2010FC, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using REF_1P2VPack  = Register<0x2010FC, 32, ReadMode, TLVREF_1P2VBase, T...> ;

  struct TLVREF_1P45VBase {} ;

  struct REF_1P45V : public RegisterBase<0x201100, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using REF_1P45VPack  = Register<0x201100, 32, ReadMode, TLVREF_1P45VBase, T...> ;

  struct TLVREF_2P5VBase {} ;

  struct REF_2P5V : public RegisterBase<0x201104, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using REF_2P5VPack  = Register<0x201104, 32, ReadMode, TLVREF_2P5VBase, T...> ;

  struct TLVFLASH_INFO_TAGBase {} ;

  struct FLASH_INFO_TAG : public RegisterBase<0x201108, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using FLASH_INFO_TAGPack  = Register<0x201108, 32, ReadMode, TLVFLASH_INFO_TAGBase, T...> ;

  struct TLVFLASH_INFO_LENBase {} ;

  struct FLASH_INFO_LEN : public RegisterBase<0x20110C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using FLASH_INFO_LENPack  = Register<0x20110C, 32, ReadMode, TLVFLASH_INFO_LENBase, T...> ;

  struct TLVFLASH_MAX_PROG_PULSESBase {} ;

  struct FLASH_MAX_PROG_PULSES : public RegisterBase<0x201110, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using FLASH_MAX_PROG_PULSESPack  = Register<0x201110, 32, ReadMode, TLVFLASH_MAX_PROG_PULSESBase, T...> ;

  struct TLVFLASH_MAX_ERASE_PULSESBase {} ;

  struct FLASH_MAX_ERASE_PULSES : public RegisterBase<0x201114, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using FLASH_MAX_ERASE_PULSESPack  = Register<0x201114, 32, ReadMode, TLVFLASH_MAX_ERASE_PULSESBase, T...> ;

  struct TLVRANDOM_NUM_TAGBase {} ;

  struct RANDOM_NUM_TAG : public RegisterBase<0x201118, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_TAGPack  = Register<0x201118, 32, ReadMode, TLVRANDOM_NUM_TAGBase, T...> ;

  struct TLVRANDOM_NUM_LENBase {} ;

  struct RANDOM_NUM_LEN : public RegisterBase<0x20111C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_LENPack  = Register<0x20111C, 32, ReadMode, TLVRANDOM_NUM_LENBase, T...> ;

  struct TLVRANDOM_NUM_1Base {} ;

  struct RANDOM_NUM_1 : public RegisterBase<0x201120, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_1Pack  = Register<0x201120, 32, ReadMode, TLVRANDOM_NUM_1Base, T...> ;

  struct TLVRANDOM_NUM_2Base {} ;

  struct RANDOM_NUM_2 : public RegisterBase<0x201124, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_2Pack  = Register<0x201124, 32, ReadMode, TLVRANDOM_NUM_2Base, T...> ;

  struct TLVRANDOM_NUM_3Base {} ;

  struct RANDOM_NUM_3 : public RegisterBase<0x201128, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_3Pack  = Register<0x201128, 32, ReadMode, TLVRANDOM_NUM_3Base, T...> ;

  struct TLVRANDOM_NUM_4Base {} ;

  struct RANDOM_NUM_4 : public RegisterBase<0x20112C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using RANDOM_NUM_4Pack  = Register<0x20112C, 32, ReadMode, TLVRANDOM_NUM_4Base, T...> ;

  struct TLVBSL_CFG_TAGBase {} ;

  struct BSL_CFG_TAG : public RegisterBase<0x201130, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_CFG_TAGPack  = Register<0x201130, 32, ReadMode, TLVBSL_CFG_TAGBase, T...> ;

  struct TLVBSL_CFG_LENBase {} ;

  struct BSL_CFG_LEN : public RegisterBase<0x201134, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_CFG_LENPack  = Register<0x201134, 32, ReadMode, TLVBSL_CFG_LENBase, T...> ;

  struct TLVBSL_PERIPHIF_SELBase {} ;

  struct BSL_PERIPHIF_SEL : public RegisterBase<0x201138, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_PERIPHIF_SELPack  = Register<0x201138, 32, ReadMode, TLVBSL_PERIPHIF_SELBase, T...> ;

  struct TLVBSL_PORTIF_CFG_UARTBase {} ;

  struct BSL_PORTIF_CFG_UART : public RegisterBase<0x20113C, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_PORTIF_CFG_UARTPack  = Register<0x20113C, 32, ReadMode, TLVBSL_PORTIF_CFG_UARTBase, T...> ;

  struct TLVBSL_PORTIF_CFG_SPIBase {} ;

  struct BSL_PORTIF_CFG_SPI : public RegisterBase<0x201140, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_PORTIF_CFG_SPIPack  = Register<0x201140, 32, ReadMode, TLVBSL_PORTIF_CFG_SPIBase, T...> ;

  struct TLVBSL_PORTIF_CFG_I2CBase {} ;

  struct BSL_PORTIF_CFG_I2C : public RegisterBase<0x201144, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using BSL_PORTIF_CFG_I2CPack  = Register<0x201144, 32, ReadMode, TLVBSL_PORTIF_CFG_I2CBase, T...> ;

  struct TLVTLV_ENDBase {} ;

  struct TLV_END : public RegisterBase<0x201148, 32, ReadMode>
  {
  } ;

  template<typename... T> 
  using TLV_ENDPack  = Register<0x201148, 32, ReadMode, TLVTLV_ENDBase, T...> ;

} ;

#endif //#if !defined(TLVREGISTERS_HPP)
