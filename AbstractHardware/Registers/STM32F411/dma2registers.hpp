/*******************************************************************************
* Filename      : dma2registers.hpp
*
* Details       : DMA controller. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(DMA2REGISTERS_HPP)
#define DMA2REGISTERS_HPP

#include "dma2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA2
{
  struct DMA2LISRBase {} ;

  struct LISR : public RegisterBase<0x40026400, 32, ReadMode>
  {
    using TCIF3 = DMA_LISR_TCIF_Values<DMA2::LISR, 27, 1, ReadMode, DMA2LISRBase> ;
    using HTIF3 = DMA_LISR_HTIF_Values<DMA2::LISR, 26, 1, ReadMode, DMA2LISRBase> ;
    using TEIF3 = DMA_LISR_TEIF_Values<DMA2::LISR, 25, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF3 = DMA_LISR_DMEIF_Values<DMA2::LISR, 24, 1, ReadMode, DMA2LISRBase> ;
    using FEIF3 = DMA_LISR_FEIF_Values<DMA2::LISR, 22, 1, ReadMode, DMA2LISRBase> ;
    using TCIF2 = DMA_LISR_TCIF_Values<DMA2::LISR, 21, 1, ReadMode, DMA2LISRBase> ;
    using HTIF2 = DMA_LISR_HTIF_Values<DMA2::LISR, 20, 1, ReadMode, DMA2LISRBase> ;
    using TEIF2 = DMA_LISR_TEIF_Values<DMA2::LISR, 19, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF2 = DMA_LISR_DMEIF_Values<DMA2::LISR, 18, 1, ReadMode, DMA2LISRBase> ;
    using FEIF2 = DMA_LISR_FEIF_Values<DMA2::LISR, 16, 1, ReadMode, DMA2LISRBase> ;
    using TCIF1 = DMA_LISR_TCIF_Values<DMA2::LISR, 11, 1, ReadMode, DMA2LISRBase> ;
    using HTIF1 = DMA_LISR_HTIF_Values<DMA2::LISR, 10, 1, ReadMode, DMA2LISRBase> ;
    using TEIF1 = DMA_LISR_TEIF_Values<DMA2::LISR, 9, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF1 = DMA_LISR_DMEIF_Values<DMA2::LISR, 8, 1, ReadMode, DMA2LISRBase> ;
    using FEIF1 = DMA_LISR_FEIF_Values<DMA2::LISR, 6, 1, ReadMode, DMA2LISRBase> ;
    using TCIF0 = DMA_LISR_TCIF_Values<DMA2::LISR, 5, 1, ReadMode, DMA2LISRBase> ;
    using HTIF0 = DMA_LISR_HTIF_Values<DMA2::LISR, 4, 1, ReadMode, DMA2LISRBase> ;
    using TEIF0 = DMA_LISR_TEIF_Values<DMA2::LISR, 3, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF0 = DMA_LISR_DMEIF_Values<DMA2::LISR, 2, 1, ReadMode, DMA2LISRBase> ;
    using FEIF0 = DMA_LISR_FEIF_Values<DMA2::LISR, 0, 1, ReadMode, DMA2LISRBase> ;
  } ;

  template<typename... T> 
  using LISRPack  = Register<0x40026400, 32, ReadMode, DMA2LISRBase, T...> ;

  struct DMA2HISRBase {} ;

  struct HISR : public RegisterBase<0x40026404, 32, ReadMode>
  {
    using TCIF7 = DMA_HISR_TCIF_Values<DMA2::HISR, 27, 1, ReadMode, DMA2HISRBase> ;
    using HTIF7 = DMA_HISR_HTIF_Values<DMA2::HISR, 26, 1, ReadMode, DMA2HISRBase> ;
    using TEIF7 = DMA_HISR_TEIF_Values<DMA2::HISR, 25, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF7 = DMA_HISR_DMEIF_Values<DMA2::HISR, 24, 1, ReadMode, DMA2HISRBase> ;
    using FEIF7 = DMA_HISR_FEIF_Values<DMA2::HISR, 22, 1, ReadMode, DMA2HISRBase> ;
    using TCIF6 = DMA_HISR_TCIF_Values<DMA2::HISR, 21, 1, ReadMode, DMA2HISRBase> ;
    using HTIF6 = DMA_HISR_HTIF_Values<DMA2::HISR, 20, 1, ReadMode, DMA2HISRBase> ;
    using TEIF6 = DMA_HISR_TEIF_Values<DMA2::HISR, 19, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF6 = DMA_HISR_DMEIF_Values<DMA2::HISR, 18, 1, ReadMode, DMA2HISRBase> ;
    using FEIF6 = DMA_HISR_FEIF_Values<DMA2::HISR, 16, 1, ReadMode, DMA2HISRBase> ;
    using TCIF5 = DMA_HISR_TCIF_Values<DMA2::HISR, 11, 1, ReadMode, DMA2HISRBase> ;
    using HTIF5 = DMA_HISR_HTIF_Values<DMA2::HISR, 10, 1, ReadMode, DMA2HISRBase> ;
    using TEIF5 = DMA_HISR_TEIF_Values<DMA2::HISR, 9, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF5 = DMA_HISR_DMEIF_Values<DMA2::HISR, 8, 1, ReadMode, DMA2HISRBase> ;
    using FEIF5 = DMA_HISR_FEIF_Values<DMA2::HISR, 6, 1, ReadMode, DMA2HISRBase> ;
    using TCIF4 = DMA_HISR_TCIF_Values<DMA2::HISR, 5, 1, ReadMode, DMA2HISRBase> ;
    using HTIF4 = DMA_HISR_HTIF_Values<DMA2::HISR, 4, 1, ReadMode, DMA2HISRBase> ;
    using TEIF4 = DMA_HISR_TEIF_Values<DMA2::HISR, 3, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF4 = DMA_HISR_DMEIF_Values<DMA2::HISR, 2, 1, ReadMode, DMA2HISRBase> ;
    using FEIF4 = DMA_HISR_FEIF_Values<DMA2::HISR, 0, 1, ReadMode, DMA2HISRBase> ;
  } ;

  template<typename... T> 
  using HISRPack  = Register<0x40026404, 32, ReadMode, DMA2HISRBase, T...> ;

  struct DMA2LIFCRBase {} ;

  struct LIFCR : public RegisterBase<0x40026408, 32, WriteMode>
  {
    using CTCIF3 = DMA_LIFCR_CTCIF_Values<DMA2::LIFCR, 27, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF3 = DMA_LIFCR_CHTIF_Values<DMA2::LIFCR, 26, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF3 = DMA_LIFCR_CTEIF_Values<DMA2::LIFCR, 25, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF3 = DMA_LIFCR_CDMEIF_Values<DMA2::LIFCR, 24, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF3 = DMA_LIFCR_CFEIF_Values<DMA2::LIFCR, 22, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF2 = DMA_LIFCR_CTCIF_Values<DMA2::LIFCR, 21, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF2 = DMA_LIFCR_CHTIF_Values<DMA2::LIFCR, 20, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF2 = DMA_LIFCR_CTEIF_Values<DMA2::LIFCR, 19, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF2 = DMA_LIFCR_CDMEIF_Values<DMA2::LIFCR, 18, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF2 = DMA_LIFCR_CFEIF_Values<DMA2::LIFCR, 16, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF1 = DMA_LIFCR_CTCIF_Values<DMA2::LIFCR, 11, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF1 = DMA_LIFCR_CHTIF_Values<DMA2::LIFCR, 10, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF1 = DMA_LIFCR_CTEIF_Values<DMA2::LIFCR, 9, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF1 = DMA_LIFCR_CDMEIF_Values<DMA2::LIFCR, 8, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF1 = DMA_LIFCR_CFEIF_Values<DMA2::LIFCR, 6, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF0 = DMA_LIFCR_CTCIF_Values<DMA2::LIFCR, 5, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF0 = DMA_LIFCR_CHTIF_Values<DMA2::LIFCR, 4, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF0 = DMA_LIFCR_CTEIF_Values<DMA2::LIFCR, 3, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF0 = DMA_LIFCR_CDMEIF_Values<DMA2::LIFCR, 2, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF0 = DMA_LIFCR_CFEIF_Values<DMA2::LIFCR, 0, 1, WriteMode, DMA2LIFCRBase> ;
  } ;

  template<typename... T> 
  using LIFCRPack  = Register<0x40026408, 32, WriteMode, DMA2LIFCRBase, T...> ;

  struct DMA2HIFCRBase {} ;

  struct HIFCR : public RegisterBase<0x4002640C, 32, WriteMode>
  {
    using CTCIF7 = DMA_HIFCR_CTCIF_Values<DMA2::HIFCR, 27, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF7 = DMA_HIFCR_CHTIF_Values<DMA2::HIFCR, 26, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF7 = DMA_HIFCR_CTEIF_Values<DMA2::HIFCR, 25, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF7 = DMA_HIFCR_CDMEIF_Values<DMA2::HIFCR, 24, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF7 = DMA_HIFCR_CFEIF_Values<DMA2::HIFCR, 22, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF6 = DMA_HIFCR_CTCIF_Values<DMA2::HIFCR, 21, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF6 = DMA_HIFCR_CHTIF_Values<DMA2::HIFCR, 20, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF6 = DMA_HIFCR_CTEIF_Values<DMA2::HIFCR, 19, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF6 = DMA_HIFCR_CDMEIF_Values<DMA2::HIFCR, 18, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF6 = DMA_HIFCR_CFEIF_Values<DMA2::HIFCR, 16, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF5 = DMA_HIFCR_CTCIF_Values<DMA2::HIFCR, 11, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF5 = DMA_HIFCR_CHTIF_Values<DMA2::HIFCR, 10, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF5 = DMA_HIFCR_CTEIF_Values<DMA2::HIFCR, 9, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF5 = DMA_HIFCR_CDMEIF_Values<DMA2::HIFCR, 8, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF5 = DMA_HIFCR_CFEIF_Values<DMA2::HIFCR, 6, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF4 = DMA_HIFCR_CTCIF_Values<DMA2::HIFCR, 5, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF4 = DMA_HIFCR_CHTIF_Values<DMA2::HIFCR, 4, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF4 = DMA_HIFCR_CTEIF_Values<DMA2::HIFCR, 3, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF4 = DMA_HIFCR_CDMEIF_Values<DMA2::HIFCR, 2, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF4 = DMA_HIFCR_CFEIF_Values<DMA2::HIFCR, 0, 1, WriteMode, DMA2HIFCRBase> ;
  } ;

  template<typename... T> 
  using HIFCRPack  = Register<0x4002640C, 32, WriteMode, DMA2HIFCRBase, T...> ;

  struct DMA2S0CRBase {} ;

  struct S0CR : public RegisterBase<0x40026410, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S0CR, 25, 3, ReadWriteMode, DMA2S0CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S0CR, 23, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S0CR, 21, 2, ReadWriteMode, DMA2S0CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S0CR, 19, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S0CR, 18, 1, ReadWriteMode, DMA2S0CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S0CR, 16, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S0CR, 15, 1, ReadWriteMode, DMA2S0CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S0CR, 13, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S0CR, 11, 2, ReadWriteMode, DMA2S0CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S0CR, 10, 1, ReadWriteMode, DMA2S0CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S0CR, 9, 1, ReadWriteMode, DMA2S0CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S0CR, 8, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S0CR, 6, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S0CR, 5, 1, ReadWriteMode, DMA2S0CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S0CR, 4, 1, ReadWriteMode, DMA2S0CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S0CR, 3, 1, ReadWriteMode, DMA2S0CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S0CR, 2, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S0CR, 1, 1, ReadWriteMode, DMA2S0CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S0CR, 0, 1, ReadWriteMode, DMA2S0CRBase> ;
  } ;

  template<typename... T> 
  using S0CRPack  = Register<0x40026410, 32, ReadWriteMode, DMA2S0CRBase, T...> ;

  struct DMA2S0NDTRBase {} ;

  struct S0NDTR : public RegisterBase<0x40026414, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S0NDTR, 0, 16, ReadWriteMode, DMA2S0NDTRBase> ;
  } ;

  template<typename... T> 
  using S0NDTRPack  = Register<0x40026414, 32, ReadWriteMode, DMA2S0NDTRBase, T...> ;

  struct DMA2S0PARBase {} ;

  struct S0PAR : public RegisterBase<0x40026418, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S0PAR, 0, 32, ReadWriteMode, DMA2S0PARBase> ;
  } ;

  template<typename... T> 
  using S0PARPack  = Register<0x40026418, 32, ReadWriteMode, DMA2S0PARBase, T...> ;

  struct DMA2S0M0ARBase {} ;

  struct S0M0AR : public RegisterBase<0x4002641C, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S0M0AR, 0, 32, ReadWriteMode, DMA2S0M0ARBase> ;
  } ;

  template<typename... T> 
  using S0M0ARPack  = Register<0x4002641C, 32, ReadWriteMode, DMA2S0M0ARBase, T...> ;

  struct DMA2S0M1ARBase {} ;

  struct S0M1AR : public RegisterBase<0x40026420, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S0M1AR, 0, 32, ReadWriteMode, DMA2S0M1ARBase> ;
  } ;

  template<typename... T> 
  using S0M1ARPack  = Register<0x40026420, 32, ReadWriteMode, DMA2S0M1ARBase, T...> ;

  struct DMA2S0FCRBase {} ;

  struct S0FCR : public RegisterBase<0x40026424, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S0FCR, 7, 1, ReadWriteMode, DMA2S0FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S0FCR, 3, 3, ReadMode, DMA2S0FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S0FCR, 2, 1, ReadWriteMode, DMA2S0FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S0FCR, 0, 2, ReadWriteMode, DMA2S0FCRBase> ;
  } ;

  template<typename... T> 
  using S0FCRPack  = Register<0x40026424, 32, ReadWriteMode, DMA2S0FCRBase, T...> ;

  struct DMA2S1CRBase {} ;

  struct S1CR : public RegisterBase<0x40026428, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S1CR, 25, 3, ReadWriteMode, DMA2S1CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S1CR, 23, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S1CR, 21, 2, ReadWriteMode, DMA2S1CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S1CR, 20, 1, ReadWriteMode, DMA2S1CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S1CR, 19, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S1CR, 18, 1, ReadWriteMode, DMA2S1CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S1CR, 16, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S1CR, 15, 1, ReadWriteMode, DMA2S1CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S1CR, 13, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S1CR, 11, 2, ReadWriteMode, DMA2S1CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S1CR, 10, 1, ReadWriteMode, DMA2S1CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S1CR, 9, 1, ReadWriteMode, DMA2S1CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S1CR, 8, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S1CR, 6, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S1CR, 5, 1, ReadWriteMode, DMA2S1CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S1CR, 4, 1, ReadWriteMode, DMA2S1CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S1CR, 3, 1, ReadWriteMode, DMA2S1CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S1CR, 2, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S1CR, 1, 1, ReadWriteMode, DMA2S1CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S1CR, 0, 1, ReadWriteMode, DMA2S1CRBase> ;
  } ;

  template<typename... T> 
  using S1CRPack  = Register<0x40026428, 32, ReadWriteMode, DMA2S1CRBase, T...> ;

  struct DMA2S1NDTRBase {} ;

  struct S1NDTR : public RegisterBase<0x4002642C, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S1NDTR, 0, 16, ReadWriteMode, DMA2S1NDTRBase> ;
  } ;

  template<typename... T> 
  using S1NDTRPack  = Register<0x4002642C, 32, ReadWriteMode, DMA2S1NDTRBase, T...> ;

  struct DMA2S1PARBase {} ;

  struct S1PAR : public RegisterBase<0x40026430, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S1PAR, 0, 32, ReadWriteMode, DMA2S1PARBase> ;
  } ;

  template<typename... T> 
  using S1PARPack  = Register<0x40026430, 32, ReadWriteMode, DMA2S1PARBase, T...> ;

  struct DMA2S1M0ARBase {} ;

  struct S1M0AR : public RegisterBase<0x40026434, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S1M0AR, 0, 32, ReadWriteMode, DMA2S1M0ARBase> ;
  } ;

  template<typename... T> 
  using S1M0ARPack  = Register<0x40026434, 32, ReadWriteMode, DMA2S1M0ARBase, T...> ;

  struct DMA2S1M1ARBase {} ;

  struct S1M1AR : public RegisterBase<0x40026438, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S1M1AR, 0, 32, ReadWriteMode, DMA2S1M1ARBase> ;
  } ;

  template<typename... T> 
  using S1M1ARPack  = Register<0x40026438, 32, ReadWriteMode, DMA2S1M1ARBase, T...> ;

  struct DMA2S1FCRBase {} ;

  struct S1FCR : public RegisterBase<0x4002643C, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S1FCR, 7, 1, ReadWriteMode, DMA2S1FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S1FCR, 3, 3, ReadMode, DMA2S1FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S1FCR, 2, 1, ReadWriteMode, DMA2S1FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S1FCR, 0, 2, ReadWriteMode, DMA2S1FCRBase> ;
  } ;

  template<typename... T> 
  using S1FCRPack  = Register<0x4002643C, 32, ReadWriteMode, DMA2S1FCRBase, T...> ;

  struct DMA2S2CRBase {} ;

  struct S2CR : public RegisterBase<0x40026440, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S2CR, 25, 3, ReadWriteMode, DMA2S2CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S2CR, 23, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S2CR, 21, 2, ReadWriteMode, DMA2S2CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S2CR, 20, 1, ReadWriteMode, DMA2S2CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S2CR, 19, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S2CR, 18, 1, ReadWriteMode, DMA2S2CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S2CR, 16, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S2CR, 15, 1, ReadWriteMode, DMA2S2CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S2CR, 13, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S2CR, 11, 2, ReadWriteMode, DMA2S2CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S2CR, 10, 1, ReadWriteMode, DMA2S2CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S2CR, 9, 1, ReadWriteMode, DMA2S2CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S2CR, 8, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S2CR, 6, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S2CR, 5, 1, ReadWriteMode, DMA2S2CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S2CR, 4, 1, ReadWriteMode, DMA2S2CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S2CR, 3, 1, ReadWriteMode, DMA2S2CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S2CR, 2, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S2CR, 1, 1, ReadWriteMode, DMA2S2CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S2CR, 0, 1, ReadWriteMode, DMA2S2CRBase> ;
  } ;

  template<typename... T> 
  using S2CRPack  = Register<0x40026440, 32, ReadWriteMode, DMA2S2CRBase, T...> ;

  struct DMA2S2NDTRBase {} ;

  struct S2NDTR : public RegisterBase<0x40026444, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S2NDTR, 0, 16, ReadWriteMode, DMA2S2NDTRBase> ;
  } ;

  template<typename... T> 
  using S2NDTRPack  = Register<0x40026444, 32, ReadWriteMode, DMA2S2NDTRBase, T...> ;

  struct DMA2S2PARBase {} ;

  struct S2PAR : public RegisterBase<0x40026448, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S2PAR, 0, 32, ReadWriteMode, DMA2S2PARBase> ;
  } ;

  template<typename... T> 
  using S2PARPack  = Register<0x40026448, 32, ReadWriteMode, DMA2S2PARBase, T...> ;

  struct DMA2S2M0ARBase {} ;

  struct S2M0AR : public RegisterBase<0x4002644C, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S2M0AR, 0, 32, ReadWriteMode, DMA2S2M0ARBase> ;
  } ;

  template<typename... T> 
  using S2M0ARPack  = Register<0x4002644C, 32, ReadWriteMode, DMA2S2M0ARBase, T...> ;

  struct DMA2S2M1ARBase {} ;

  struct S2M1AR : public RegisterBase<0x40026450, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S2M1AR, 0, 32, ReadWriteMode, DMA2S2M1ARBase> ;
  } ;

  template<typename... T> 
  using S2M1ARPack  = Register<0x40026450, 32, ReadWriteMode, DMA2S2M1ARBase, T...> ;

  struct DMA2S2FCRBase {} ;

  struct S2FCR : public RegisterBase<0x40026454, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S2FCR, 7, 1, ReadWriteMode, DMA2S2FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S2FCR, 3, 3, ReadMode, DMA2S2FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S2FCR, 2, 1, ReadWriteMode, DMA2S2FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S2FCR, 0, 2, ReadWriteMode, DMA2S2FCRBase> ;
  } ;

  template<typename... T> 
  using S2FCRPack  = Register<0x40026454, 32, ReadWriteMode, DMA2S2FCRBase, T...> ;

  struct DMA2S3CRBase {} ;

  struct S3CR : public RegisterBase<0x40026458, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S3CR, 25, 3, ReadWriteMode, DMA2S3CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S3CR, 23, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S3CR, 21, 2, ReadWriteMode, DMA2S3CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S3CR, 20, 1, ReadWriteMode, DMA2S3CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S3CR, 19, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S3CR, 18, 1, ReadWriteMode, DMA2S3CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S3CR, 16, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S3CR, 15, 1, ReadWriteMode, DMA2S3CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S3CR, 13, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S3CR, 11, 2, ReadWriteMode, DMA2S3CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S3CR, 10, 1, ReadWriteMode, DMA2S3CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S3CR, 9, 1, ReadWriteMode, DMA2S3CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S3CR, 8, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S3CR, 6, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S3CR, 5, 1, ReadWriteMode, DMA2S3CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S3CR, 4, 1, ReadWriteMode, DMA2S3CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S3CR, 3, 1, ReadWriteMode, DMA2S3CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S3CR, 2, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S3CR, 1, 1, ReadWriteMode, DMA2S3CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S3CR, 0, 1, ReadWriteMode, DMA2S3CRBase> ;
  } ;

  template<typename... T> 
  using S3CRPack  = Register<0x40026458, 32, ReadWriteMode, DMA2S3CRBase, T...> ;

  struct DMA2S3NDTRBase {} ;

  struct S3NDTR : public RegisterBase<0x4002645C, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S3NDTR, 0, 16, ReadWriteMode, DMA2S3NDTRBase> ;
  } ;

  template<typename... T> 
  using S3NDTRPack  = Register<0x4002645C, 32, ReadWriteMode, DMA2S3NDTRBase, T...> ;

  struct DMA2S3PARBase {} ;

  struct S3PAR : public RegisterBase<0x40026460, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S3PAR, 0, 32, ReadWriteMode, DMA2S3PARBase> ;
  } ;

  template<typename... T> 
  using S3PARPack  = Register<0x40026460, 32, ReadWriteMode, DMA2S3PARBase, T...> ;

  struct DMA2S3M0ARBase {} ;

  struct S3M0AR : public RegisterBase<0x40026464, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S3M0AR, 0, 32, ReadWriteMode, DMA2S3M0ARBase> ;
  } ;

  template<typename... T> 
  using S3M0ARPack  = Register<0x40026464, 32, ReadWriteMode, DMA2S3M0ARBase, T...> ;

  struct DMA2S3M1ARBase {} ;

  struct S3M1AR : public RegisterBase<0x40026468, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S3M1AR, 0, 32, ReadWriteMode, DMA2S3M1ARBase> ;
  } ;

  template<typename... T> 
  using S3M1ARPack  = Register<0x40026468, 32, ReadWriteMode, DMA2S3M1ARBase, T...> ;

  struct DMA2S3FCRBase {} ;

  struct S3FCR : public RegisterBase<0x4002646C, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S3FCR, 7, 1, ReadWriteMode, DMA2S3FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S3FCR, 3, 3, ReadMode, DMA2S3FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S3FCR, 2, 1, ReadWriteMode, DMA2S3FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S3FCR, 0, 2, ReadWriteMode, DMA2S3FCRBase> ;
  } ;

  template<typename... T> 
  using S3FCRPack  = Register<0x4002646C, 32, ReadWriteMode, DMA2S3FCRBase, T...> ;

  struct DMA2S4CRBase {} ;

  struct S4CR : public RegisterBase<0x40026470, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S4CR, 25, 3, ReadWriteMode, DMA2S4CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S4CR, 23, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S4CR, 21, 2, ReadWriteMode, DMA2S4CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S4CR, 20, 1, ReadWriteMode, DMA2S4CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S4CR, 19, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S4CR, 18, 1, ReadWriteMode, DMA2S4CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S4CR, 16, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S4CR, 15, 1, ReadWriteMode, DMA2S4CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S4CR, 13, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S4CR, 11, 2, ReadWriteMode, DMA2S4CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S4CR, 10, 1, ReadWriteMode, DMA2S4CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S4CR, 9, 1, ReadWriteMode, DMA2S4CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S4CR, 8, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S4CR, 6, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S4CR, 5, 1, ReadWriteMode, DMA2S4CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S4CR, 4, 1, ReadWriteMode, DMA2S4CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S4CR, 3, 1, ReadWriteMode, DMA2S4CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S4CR, 2, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S4CR, 1, 1, ReadWriteMode, DMA2S4CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S4CR, 0, 1, ReadWriteMode, DMA2S4CRBase> ;
  } ;

  template<typename... T> 
  using S4CRPack  = Register<0x40026470, 32, ReadWriteMode, DMA2S4CRBase, T...> ;

  struct DMA2S4NDTRBase {} ;

  struct S4NDTR : public RegisterBase<0x40026474, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S4NDTR, 0, 16, ReadWriteMode, DMA2S4NDTRBase> ;
  } ;

  template<typename... T> 
  using S4NDTRPack  = Register<0x40026474, 32, ReadWriteMode, DMA2S4NDTRBase, T...> ;

  struct DMA2S4PARBase {} ;

  struct S4PAR : public RegisterBase<0x40026478, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S4PAR, 0, 32, ReadWriteMode, DMA2S4PARBase> ;
  } ;

  template<typename... T> 
  using S4PARPack  = Register<0x40026478, 32, ReadWriteMode, DMA2S4PARBase, T...> ;

  struct DMA2S4M0ARBase {} ;

  struct S4M0AR : public RegisterBase<0x4002647C, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S4M0AR, 0, 32, ReadWriteMode, DMA2S4M0ARBase> ;
  } ;

  template<typename... T> 
  using S4M0ARPack  = Register<0x4002647C, 32, ReadWriteMode, DMA2S4M0ARBase, T...> ;

  struct DMA2S4M1ARBase {} ;

  struct S4M1AR : public RegisterBase<0x40026480, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S4M1AR, 0, 32, ReadWriteMode, DMA2S4M1ARBase> ;
  } ;

  template<typename... T> 
  using S4M1ARPack  = Register<0x40026480, 32, ReadWriteMode, DMA2S4M1ARBase, T...> ;

  struct DMA2S4FCRBase {} ;

  struct S4FCR : public RegisterBase<0x40026484, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S4FCR, 7, 1, ReadWriteMode, DMA2S4FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S4FCR, 3, 3, ReadMode, DMA2S4FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S4FCR, 2, 1, ReadWriteMode, DMA2S4FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S4FCR, 0, 2, ReadWriteMode, DMA2S4FCRBase> ;
  } ;

  template<typename... T> 
  using S4FCRPack  = Register<0x40026484, 32, ReadWriteMode, DMA2S4FCRBase, T...> ;

  struct DMA2S5CRBase {} ;

  struct S5CR : public RegisterBase<0x40026488, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S5CR, 25, 3, ReadWriteMode, DMA2S5CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S5CR, 23, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S5CR, 21, 2, ReadWriteMode, DMA2S5CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S5CR, 20, 1, ReadWriteMode, DMA2S5CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S5CR, 19, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S5CR, 18, 1, ReadWriteMode, DMA2S5CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S5CR, 16, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S5CR, 15, 1, ReadWriteMode, DMA2S5CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S5CR, 13, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S5CR, 11, 2, ReadWriteMode, DMA2S5CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S5CR, 10, 1, ReadWriteMode, DMA2S5CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S5CR, 9, 1, ReadWriteMode, DMA2S5CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S5CR, 8, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S5CR, 6, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S5CR, 5, 1, ReadWriteMode, DMA2S5CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S5CR, 4, 1, ReadWriteMode, DMA2S5CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S5CR, 3, 1, ReadWriteMode, DMA2S5CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S5CR, 2, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S5CR, 1, 1, ReadWriteMode, DMA2S5CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S5CR, 0, 1, ReadWriteMode, DMA2S5CRBase> ;
  } ;

  template<typename... T> 
  using S5CRPack  = Register<0x40026488, 32, ReadWriteMode, DMA2S5CRBase, T...> ;

  struct DMA2S5NDTRBase {} ;

  struct S5NDTR : public RegisterBase<0x4002648C, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S5NDTR, 0, 16, ReadWriteMode, DMA2S5NDTRBase> ;
  } ;

  template<typename... T> 
  using S5NDTRPack  = Register<0x4002648C, 32, ReadWriteMode, DMA2S5NDTRBase, T...> ;

  struct DMA2S5PARBase {} ;

  struct S5PAR : public RegisterBase<0x40026490, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S5PAR, 0, 32, ReadWriteMode, DMA2S5PARBase> ;
  } ;

  template<typename... T> 
  using S5PARPack  = Register<0x40026490, 32, ReadWriteMode, DMA2S5PARBase, T...> ;

  struct DMA2S5M0ARBase {} ;

  struct S5M0AR : public RegisterBase<0x40026494, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S5M0AR, 0, 32, ReadWriteMode, DMA2S5M0ARBase> ;
  } ;

  template<typename... T> 
  using S5M0ARPack  = Register<0x40026494, 32, ReadWriteMode, DMA2S5M0ARBase, T...> ;

  struct DMA2S5M1ARBase {} ;

  struct S5M1AR : public RegisterBase<0x40026498, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S5M1AR, 0, 32, ReadWriteMode, DMA2S5M1ARBase> ;
  } ;

  template<typename... T> 
  using S5M1ARPack  = Register<0x40026498, 32, ReadWriteMode, DMA2S5M1ARBase, T...> ;

  struct DMA2S5FCRBase {} ;

  struct S5FCR : public RegisterBase<0x4002649C, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S5FCR, 7, 1, ReadWriteMode, DMA2S5FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S5FCR, 3, 3, ReadMode, DMA2S5FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S5FCR, 2, 1, ReadWriteMode, DMA2S5FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S5FCR, 0, 2, ReadWriteMode, DMA2S5FCRBase> ;
  } ;

  template<typename... T> 
  using S5FCRPack  = Register<0x4002649C, 32, ReadWriteMode, DMA2S5FCRBase, T...> ;

  struct DMA2S6CRBase {} ;

  struct S6CR : public RegisterBase<0x400264A0, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S6CR, 25, 3, ReadWriteMode, DMA2S6CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S6CR, 23, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S6CR, 21, 2, ReadWriteMode, DMA2S6CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S6CR, 20, 1, ReadWriteMode, DMA2S6CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S6CR, 19, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S6CR, 18, 1, ReadWriteMode, DMA2S6CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S6CR, 16, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S6CR, 15, 1, ReadWriteMode, DMA2S6CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S6CR, 13, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S6CR, 11, 2, ReadWriteMode, DMA2S6CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S6CR, 10, 1, ReadWriteMode, DMA2S6CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S6CR, 9, 1, ReadWriteMode, DMA2S6CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S6CR, 8, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S6CR, 6, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S6CR, 5, 1, ReadWriteMode, DMA2S6CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S6CR, 4, 1, ReadWriteMode, DMA2S6CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S6CR, 3, 1, ReadWriteMode, DMA2S6CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S6CR, 2, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S6CR, 1, 1, ReadWriteMode, DMA2S6CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S6CR, 0, 1, ReadWriteMode, DMA2S6CRBase> ;
  } ;

  template<typename... T> 
  using S6CRPack  = Register<0x400264A0, 32, ReadWriteMode, DMA2S6CRBase, T...> ;

  struct DMA2S6NDTRBase {} ;

  struct S6NDTR : public RegisterBase<0x400264A4, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S6NDTR, 0, 16, ReadWriteMode, DMA2S6NDTRBase> ;
  } ;

  template<typename... T> 
  using S6NDTRPack  = Register<0x400264A4, 32, ReadWriteMode, DMA2S6NDTRBase, T...> ;

  struct DMA2S6PARBase {} ;

  struct S6PAR : public RegisterBase<0x400264A8, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S6PAR, 0, 32, ReadWriteMode, DMA2S6PARBase> ;
  } ;

  template<typename... T> 
  using S6PARPack  = Register<0x400264A8, 32, ReadWriteMode, DMA2S6PARBase, T...> ;

  struct DMA2S6M0ARBase {} ;

  struct S6M0AR : public RegisterBase<0x400264AC, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S6M0AR, 0, 32, ReadWriteMode, DMA2S6M0ARBase> ;
  } ;

  template<typename... T> 
  using S6M0ARPack  = Register<0x400264AC, 32, ReadWriteMode, DMA2S6M0ARBase, T...> ;

  struct DMA2S6M1ARBase {} ;

  struct S6M1AR : public RegisterBase<0x400264B0, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S6M1AR, 0, 32, ReadWriteMode, DMA2S6M1ARBase> ;
  } ;

  template<typename... T> 
  using S6M1ARPack  = Register<0x400264B0, 32, ReadWriteMode, DMA2S6M1ARBase, T...> ;

  struct DMA2S6FCRBase {} ;

  struct S6FCR : public RegisterBase<0x400264B4, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S6FCR, 7, 1, ReadWriteMode, DMA2S6FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S6FCR, 3, 3, ReadMode, DMA2S6FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S6FCR, 2, 1, ReadWriteMode, DMA2S6FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S6FCR, 0, 2, ReadWriteMode, DMA2S6FCRBase> ;
  } ;

  template<typename... T> 
  using S6FCRPack  = Register<0x400264B4, 32, ReadWriteMode, DMA2S6FCRBase, T...> ;

  struct DMA2S7CRBase {} ;

  struct S7CR : public RegisterBase<0x400264B8, 32, ReadWriteMode>
  {
    using CHSEL = DMA_SCR_CHSEL_Values<DMA2::S7CR, 25, 3, ReadWriteMode, DMA2S7CRBase> ;
    using MBURST = DMA_SCR_MBURST_Values<DMA2::S7CR, 23, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PBURST = DMA_SCR_PBURST_Values<DMA2::S7CR, 21, 2, ReadWriteMode, DMA2S7CRBase> ;
    using ACK = DMA_SCR_ACK_Values<DMA2::S7CR, 20, 1, ReadWriteMode, DMA2S7CRBase> ;
    using CT = DMA_SCR_CT_Values<DMA2::S7CR, 19, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DBM = DMA_SCR_DBM_Values<DMA2::S7CR, 18, 1, ReadWriteMode, DMA2S7CRBase> ;
    using PL = DMA_SCR_PL_Values<DMA2::S7CR, 16, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PINCOS = DMA_SCR_PINCOS_Values<DMA2::S7CR, 15, 1, ReadWriteMode, DMA2S7CRBase> ;
    using MSIZE = DMA_SCR_MSIZE_Values<DMA2::S7CR, 13, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PSIZE = DMA_SCR_PSIZE_Values<DMA2::S7CR, 11, 2, ReadWriteMode, DMA2S7CRBase> ;
    using MINC = DMA_SCR_MINC_Values<DMA2::S7CR, 10, 1, ReadWriteMode, DMA2S7CRBase> ;
    using PINC = DMA_SCR_PINC_Values<DMA2::S7CR, 9, 1, ReadWriteMode, DMA2S7CRBase> ;
    using CIRC = DMA_SCR_CIRC_Values<DMA2::S7CR, 8, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DIR = DMA_SCR_DIR_Values<DMA2::S7CR, 6, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PFCTRL = DMA_SCR_PFCTRL_Values<DMA2::S7CR, 5, 1, ReadWriteMode, DMA2S7CRBase> ;
    using TCIE = DMA_SCR_TCIE_Values<DMA2::S7CR, 4, 1, ReadWriteMode, DMA2S7CRBase> ;
    using HTIE = DMA_SCR_HTIE_Values<DMA2::S7CR, 3, 1, ReadWriteMode, DMA2S7CRBase> ;
    using TEIE = DMA_SCR_TEIE_Values<DMA2::S7CR, 2, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DMEIE = DMA_SCR_DMEIE_Values<DMA2::S7CR, 1, 1, ReadWriteMode, DMA2S7CRBase> ;
    using EN = DMA_SCR_EN_Values<DMA2::S7CR, 0, 1, ReadWriteMode, DMA2S7CRBase> ;
  } ;

  template<typename... T> 
  using S7CRPack  = Register<0x400264B8, 32, ReadWriteMode, DMA2S7CRBase, T...> ;

  struct DMA2S7NDTRBase {} ;

  struct S7NDTR : public RegisterBase<0x400264BC, 32, ReadWriteMode>
  {
    using NDT = DMA_SNDTR_NDT_Values<DMA2::S7NDTR, 0, 16, ReadWriteMode, DMA2S7NDTRBase> ;
  } ;

  template<typename... T> 
  using S7NDTRPack  = Register<0x400264BC, 32, ReadWriteMode, DMA2S7NDTRBase, T...> ;

  struct DMA2S7PARBase {} ;

  struct S7PAR : public RegisterBase<0x400264C0, 32, ReadWriteMode>
  {
    using PA = DMA_SPAR_PA_Values<DMA2::S7PAR, 0, 32, ReadWriteMode, DMA2S7PARBase> ;
  } ;

  template<typename... T> 
  using S7PARPack  = Register<0x400264C0, 32, ReadWriteMode, DMA2S7PARBase, T...> ;

  struct DMA2S7M0ARBase {} ;

  struct S7M0AR : public RegisterBase<0x400264C4, 32, ReadWriteMode>
  {
    using M0A = DMA_SMAR_MA_Values<DMA2::S7M0AR, 0, 32, ReadWriteMode, DMA2S7M0ARBase> ;
  } ;

  template<typename... T> 
  using S7M0ARPack  = Register<0x400264C4, 32, ReadWriteMode, DMA2S7M0ARBase, T...> ;

  struct DMA2S7M1ARBase {} ;

  struct S7M1AR : public RegisterBase<0x400264C8, 32, ReadWriteMode>
  {
    using M1A = DMA_SMAR_MA_Values<DMA2::S7M1AR, 0, 32, ReadWriteMode, DMA2S7M1ARBase> ;
  } ;

  template<typename... T> 
  using S7M1ARPack  = Register<0x400264C8, 32, ReadWriteMode, DMA2S7M1ARBase, T...> ;

  struct DMA2S7FCRBase {} ;

  struct S7FCR : public RegisterBase<0x400264CC, 32, ReadWriteMode>
  {
    using FEIE = DMA_SFCR_FEIE_Values<DMA2::S7FCR, 7, 1, ReadWriteMode, DMA2S7FCRBase> ;
    using FS = DMA_SFCR_FS_Values<DMA2::S7FCR, 3, 3, ReadMode, DMA2S7FCRBase> ;
    using DMDIS = DMA_SFCR_DMDIS_Values<DMA2::S7FCR, 2, 1, ReadWriteMode, DMA2S7FCRBase> ;
    using FTH = DMA_SFCR_FTH_Values<DMA2::S7FCR, 0, 2, ReadWriteMode, DMA2S7FCRBase> ;
  } ;

  template<typename... T> 
  using S7FCRPack  = Register<0x400264CC, 32, ReadWriteMode, DMA2S7FCRBase, T...> ;

} ;

#endif //#if !defined(DMA2REGISTERS_HPP)
