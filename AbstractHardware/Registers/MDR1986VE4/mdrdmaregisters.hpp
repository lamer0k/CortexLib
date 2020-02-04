/*******************************************************************************
* Filename      : mdrdmaregisters.hpp
*
* Details       : DMA Controler. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRDMAREGISTERS_HPP)
#define MDRDMAREGISTERS_HPP

#include "mdrdmafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_DMA
{
  struct MDR_DMASTATUSBase {} ;

  struct STATUS : public RegisterBase<0x40028000, 32, ReadMode>
  {
    using Enable = MDR_DMA_STATUS_Enable_Values<MDR_DMA::STATUS, 0, 1, ReadMode, MDR_DMASTATUSBase> ;
    using State = MDR_DMA_STATUS_State_Values<MDR_DMA::STATUS, 4, 4, ReadMode, MDR_DMASTATUSBase> ;
    using Chnls_minus1 = MDR_DMA_STATUS_Chnls_minus1_Values<MDR_DMA::STATUS, 16, 5, ReadMode, MDR_DMASTATUSBase> ;
    using test_status = MDR_DMA_STATUS_test_status_Values<MDR_DMA::STATUS, 28, 1, ReadMode, MDR_DMASTATUSBase> ;
    using FieldValues = MDR_DMA_STATUS_test_status_Values<MDR_DMA::STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATUSPack  = Register<0x40028000, 32, ReadMode, MDR_DMASTATUSBase, T...> ;

  struct MDR_DMACFGBase {} ;

  struct CFG : public RegisterBase<0x40028004, 32, WriteMode>
  {
    using Enable = MDR_DMA_CFG_Enable_Values<MDR_DMA::CFG, 0, 1, WriteMode, MDR_DMACFGBase> ;
    using Privileged = MDR_DMA_CFG_Privileged_Values<MDR_DMA::CFG, 5, 1, WriteMode, MDR_DMACFGBase> ;
    using Bufferable = MDR_DMA_CFG_Bufferable_Values<MDR_DMA::CFG, 6, 1, WriteMode, MDR_DMACFGBase> ;
    using Cachable = MDR_DMA_CFG_Cachable_Values<MDR_DMA::CFG, 7, 1, WriteMode, MDR_DMACFGBase> ;
    using FieldValues = MDR_DMA_CFG_Cachable_Values<MDR_DMA::CFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGPack  = Register<0x40028004, 32, WriteMode, MDR_DMACFGBase, T...> ;

  struct MDR_DMACTRL_BASE_PTRBase {} ;

  struct CTRL_BASE_PTR : public RegisterBase<0x40028008, 32, ReadWriteMode>
  {
    using Addr_Hi = MDR_DMA_CTRL_BASE_PTR_Addr_Hi_Values<MDR_DMA::CTRL_BASE_PTR, 10, 22, ReadWriteMode, MDR_DMACTRL_BASE_PTRBase> ;
    using FieldValues = MDR_DMA_CTRL_BASE_PTR_Addr_Hi_Values<MDR_DMA::CTRL_BASE_PTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRL_BASE_PTRPack  = Register<0x40028008, 32, ReadWriteMode, MDR_DMACTRL_BASE_PTRBase, T...> ;

  struct MDR_DMAALT_CTRL_BASE_PTRBase {} ;

  struct ALT_CTRL_BASE_PTR : public RegisterBase<0x4002800C, 32, ReadMode>
  {
    using Addr = MDR_DMA_ALT_CTRL_BASE_PTR_Addr_Values<MDR_DMA::ALT_CTRL_BASE_PTR, 0, 32, ReadMode, MDR_DMAALT_CTRL_BASE_PTRBase> ;
    using FieldValues = MDR_DMA_ALT_CTRL_BASE_PTR_Addr_Values<MDR_DMA::ALT_CTRL_BASE_PTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALT_CTRL_BASE_PTRPack  = Register<0x4002800C, 32, ReadMode, MDR_DMAALT_CTRL_BASE_PTRBase, T...> ;

  struct MDR_DMAWAITONREQ_STATUSBase {} ;

  struct WAITONREQ_STATUS : public RegisterBase<0x40028010, 32, ReadMode>
  {
    using Ch_0 = MDR_DMA_WAITONREQ_STATUS_Ch_0_Values<MDR_DMA::WAITONREQ_STATUS, 0, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_1 = MDR_DMA_WAITONREQ_STATUS_Ch_1_Values<MDR_DMA::WAITONREQ_STATUS, 1, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_2 = MDR_DMA_WAITONREQ_STATUS_Ch_2_Values<MDR_DMA::WAITONREQ_STATUS, 2, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_3 = MDR_DMA_WAITONREQ_STATUS_Ch_3_Values<MDR_DMA::WAITONREQ_STATUS, 3, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_4 = MDR_DMA_WAITONREQ_STATUS_Ch_4_Values<MDR_DMA::WAITONREQ_STATUS, 4, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_5 = MDR_DMA_WAITONREQ_STATUS_Ch_5_Values<MDR_DMA::WAITONREQ_STATUS, 5, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_6 = MDR_DMA_WAITONREQ_STATUS_Ch_6_Values<MDR_DMA::WAITONREQ_STATUS, 6, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_7 = MDR_DMA_WAITONREQ_STATUS_Ch_7_Values<MDR_DMA::WAITONREQ_STATUS, 7, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_8 = MDR_DMA_WAITONREQ_STATUS_Ch_8_Values<MDR_DMA::WAITONREQ_STATUS, 8, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_9 = MDR_DMA_WAITONREQ_STATUS_Ch_9_Values<MDR_DMA::WAITONREQ_STATUS, 9, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_10 = MDR_DMA_WAITONREQ_STATUS_Ch_10_Values<MDR_DMA::WAITONREQ_STATUS, 10, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_11 = MDR_DMA_WAITONREQ_STATUS_Ch_11_Values<MDR_DMA::WAITONREQ_STATUS, 11, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_12 = MDR_DMA_WAITONREQ_STATUS_Ch_12_Values<MDR_DMA::WAITONREQ_STATUS, 12, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_13 = MDR_DMA_WAITONREQ_STATUS_Ch_13_Values<MDR_DMA::WAITONREQ_STATUS, 13, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_14 = MDR_DMA_WAITONREQ_STATUS_Ch_14_Values<MDR_DMA::WAITONREQ_STATUS, 14, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_15 = MDR_DMA_WAITONREQ_STATUS_Ch_15_Values<MDR_DMA::WAITONREQ_STATUS, 15, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_16 = MDR_DMA_WAITONREQ_STATUS_Ch_16_Values<MDR_DMA::WAITONREQ_STATUS, 16, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_17 = MDR_DMA_WAITONREQ_STATUS_Ch_17_Values<MDR_DMA::WAITONREQ_STATUS, 17, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_18 = MDR_DMA_WAITONREQ_STATUS_Ch_18_Values<MDR_DMA::WAITONREQ_STATUS, 18, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_19 = MDR_DMA_WAITONREQ_STATUS_Ch_19_Values<MDR_DMA::WAITONREQ_STATUS, 19, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_20 = MDR_DMA_WAITONREQ_STATUS_Ch_20_Values<MDR_DMA::WAITONREQ_STATUS, 20, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_21 = MDR_DMA_WAITONREQ_STATUS_Ch_21_Values<MDR_DMA::WAITONREQ_STATUS, 21, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_22 = MDR_DMA_WAITONREQ_STATUS_Ch_22_Values<MDR_DMA::WAITONREQ_STATUS, 22, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_23 = MDR_DMA_WAITONREQ_STATUS_Ch_23_Values<MDR_DMA::WAITONREQ_STATUS, 23, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_24 = MDR_DMA_WAITONREQ_STATUS_Ch_24_Values<MDR_DMA::WAITONREQ_STATUS, 24, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_25 = MDR_DMA_WAITONREQ_STATUS_Ch_25_Values<MDR_DMA::WAITONREQ_STATUS, 25, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_26 = MDR_DMA_WAITONREQ_STATUS_Ch_26_Values<MDR_DMA::WAITONREQ_STATUS, 26, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_27 = MDR_DMA_WAITONREQ_STATUS_Ch_27_Values<MDR_DMA::WAITONREQ_STATUS, 27, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_28 = MDR_DMA_WAITONREQ_STATUS_Ch_28_Values<MDR_DMA::WAITONREQ_STATUS, 28, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_29 = MDR_DMA_WAITONREQ_STATUS_Ch_29_Values<MDR_DMA::WAITONREQ_STATUS, 29, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_30 = MDR_DMA_WAITONREQ_STATUS_Ch_30_Values<MDR_DMA::WAITONREQ_STATUS, 30, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using Ch_31 = MDR_DMA_WAITONREQ_STATUS_Ch_31_Values<MDR_DMA::WAITONREQ_STATUS, 31, 1, ReadMode, MDR_DMAWAITONREQ_STATUSBase> ;
    using FieldValues = MDR_DMA_WAITONREQ_STATUS_Ch_31_Values<MDR_DMA::WAITONREQ_STATUS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WAITONREQ_STATUSPack  = Register<0x40028010, 32, ReadMode, MDR_DMAWAITONREQ_STATUSBase, T...> ;

  struct MDR_DMACHNL_SW_REQUESTBase {} ;

  struct CHNL_SW_REQUEST : public RegisterBase<0x40028014, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_SW_REQUESTPack  = Register<0x40028014, 32, WriteMode, MDR_DMACHNL_SW_REQUESTBase, T...> ;

  struct MDR_DMACHNL_USEBURST_SETBase {} ;

  struct CHNL_USEBURST_SET : public RegisterBase<0x40028018, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_USEBURST_SETPack  = Register<0x40028018, 32, ReadWriteMode, MDR_DMACHNL_USEBURST_SETBase, T...> ;

  struct MDR_DMACHNL_USEBURST_CLRBase {} ;

  struct CHNL_USEBURST_CLR : public RegisterBase<0x4002801C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_USEBURST_CLRPack  = Register<0x4002801C, 32, WriteMode, MDR_DMACHNL_USEBURST_CLRBase, T...> ;

  struct MDR_DMACHNL_REQ_MASK_SETBase {} ;

  struct CHNL_REQ_MASK_SET : public RegisterBase<0x40028020, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_REQ_MASK_SETPack  = Register<0x40028020, 32, ReadWriteMode, MDR_DMACHNL_REQ_MASK_SETBase, T...> ;

  struct MDR_DMACHNL_REQ_MASK_CLRBase {} ;

  struct CHNL_REQ_MASK_CLR : public RegisterBase<0x40028024, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_REQ_MASK_CLRPack  = Register<0x40028024, 32, WriteMode, MDR_DMACHNL_REQ_MASK_CLRBase, T...> ;

  struct MDR_DMACHNL_ENABLE_SETBase {} ;

  struct CHNL_ENABLE_SET : public RegisterBase<0x40028028, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_ENABLE_SETPack  = Register<0x40028028, 32, ReadWriteMode, MDR_DMACHNL_ENABLE_SETBase, T...> ;

  struct MDR_DMACHNL_ENABLE_CLRBase {} ;

  struct CHNL_ENABLE_CLR : public RegisterBase<0x4002802C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_ENABLE_CLRPack  = Register<0x4002802C, 32, WriteMode, MDR_DMACHNL_ENABLE_CLRBase, T...> ;

  struct MDR_DMACHNL_PRI_ALT_SETBase {} ;

  struct CHNL_PRI_ALT_SET : public RegisterBase<0x40028030, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_PRI_ALT_SETPack  = Register<0x40028030, 32, ReadWriteMode, MDR_DMACHNL_PRI_ALT_SETBase, T...> ;

  struct MDR_DMACHNL_PRI_ALT_CLRBase {} ;

  struct CHNL_PRI_ALT_CLR : public RegisterBase<0x40028034, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_PRI_ALT_CLRPack  = Register<0x40028034, 32, WriteMode, MDR_DMACHNL_PRI_ALT_CLRBase, T...> ;

  struct MDR_DMACHNL_PRIORITY_SETBase {} ;

  struct CHNL_PRIORITY_SET : public RegisterBase<0x40028038, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_PRIORITY_SETPack  = Register<0x40028038, 32, ReadWriteMode, MDR_DMACHNL_PRIORITY_SETBase, T...> ;

  struct MDR_DMACHNL_PRIORITY_CLRBase {} ;

  struct CHNL_PRIORITY_CLR : public RegisterBase<0x4002803C, 32, WriteMode>
  {
  } ;

  template<typename... T> 
  using CHNL_PRIORITY_CLRPack  = Register<0x4002803C, 32, WriteMode, MDR_DMACHNL_PRIORITY_CLRBase, T...> ;

  struct MDR_DMAERR_CLRBase {} ;

  struct ERR_CLR : public RegisterBase<0x4002804C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ERR_CLRPack  = Register<0x4002804C, 32, ReadWriteMode, MDR_DMAERR_CLRBase, T...> ;

} ;

#endif //#if !defined(MDRDMAREGISTERS_HPP)
