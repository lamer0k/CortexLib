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
    using TCIF3 = DMA2_LISR_TCIF3_Values<DMA2::LISR, 27, 1, ReadMode, DMA2LISRBase> ;
    using HTIF3 = DMA2_LISR_HTIF3_Values<DMA2::LISR, 26, 1, ReadMode, DMA2LISRBase> ;
    using TEIF3 = DMA2_LISR_TEIF3_Values<DMA2::LISR, 25, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF3 = DMA2_LISR_DMEIF3_Values<DMA2::LISR, 24, 1, ReadMode, DMA2LISRBase> ;
    using FEIF3 = DMA2_LISR_FEIF3_Values<DMA2::LISR, 22, 1, ReadMode, DMA2LISRBase> ;
    using TCIF2 = DMA2_LISR_TCIF2_Values<DMA2::LISR, 21, 1, ReadMode, DMA2LISRBase> ;
    using HTIF2 = DMA2_LISR_HTIF2_Values<DMA2::LISR, 20, 1, ReadMode, DMA2LISRBase> ;
    using TEIF2 = DMA2_LISR_TEIF2_Values<DMA2::LISR, 19, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF2 = DMA2_LISR_DMEIF2_Values<DMA2::LISR, 18, 1, ReadMode, DMA2LISRBase> ;
    using FEIF2 = DMA2_LISR_FEIF2_Values<DMA2::LISR, 16, 1, ReadMode, DMA2LISRBase> ;
    using TCIF1 = DMA2_LISR_TCIF1_Values<DMA2::LISR, 11, 1, ReadMode, DMA2LISRBase> ;
    using HTIF1 = DMA2_LISR_HTIF1_Values<DMA2::LISR, 10, 1, ReadMode, DMA2LISRBase> ;
    using TEIF1 = DMA2_LISR_TEIF1_Values<DMA2::LISR, 9, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF1 = DMA2_LISR_DMEIF1_Values<DMA2::LISR, 8, 1, ReadMode, DMA2LISRBase> ;
    using FEIF1 = DMA2_LISR_FEIF1_Values<DMA2::LISR, 6, 1, ReadMode, DMA2LISRBase> ;
    using TCIF0 = DMA2_LISR_TCIF0_Values<DMA2::LISR, 5, 1, ReadMode, DMA2LISRBase> ;
    using HTIF0 = DMA2_LISR_HTIF0_Values<DMA2::LISR, 4, 1, ReadMode, DMA2LISRBase> ;
    using TEIF0 = DMA2_LISR_TEIF0_Values<DMA2::LISR, 3, 1, ReadMode, DMA2LISRBase> ;
    using DMEIF0 = DMA2_LISR_DMEIF0_Values<DMA2::LISR, 2, 1, ReadMode, DMA2LISRBase> ;
    using FEIF0 = DMA2_LISR_FEIF0_Values<DMA2::LISR, 0, 1, ReadMode, DMA2LISRBase> ;
    using FieldValues = DMA2_LISR_FEIF0_Values<DMA2::LISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LISRPack  = Register<0x40026400, 32, ReadMode, DMA2LISRBase, T...> ;

  struct DMA2HISRBase {} ;

  struct HISR : public RegisterBase<0x40026404, 32, ReadMode>
  {
    using TCIF7 = DMA2_HISR_TCIF7_Values<DMA2::HISR, 27, 1, ReadMode, DMA2HISRBase> ;
    using HTIF7 = DMA2_HISR_HTIF7_Values<DMA2::HISR, 26, 1, ReadMode, DMA2HISRBase> ;
    using TEIF7 = DMA2_HISR_TEIF7_Values<DMA2::HISR, 25, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF7 = DMA2_HISR_DMEIF7_Values<DMA2::HISR, 24, 1, ReadMode, DMA2HISRBase> ;
    using FEIF7 = DMA2_HISR_FEIF7_Values<DMA2::HISR, 22, 1, ReadMode, DMA2HISRBase> ;
    using TCIF6 = DMA2_HISR_TCIF6_Values<DMA2::HISR, 21, 1, ReadMode, DMA2HISRBase> ;
    using HTIF6 = DMA2_HISR_HTIF6_Values<DMA2::HISR, 20, 1, ReadMode, DMA2HISRBase> ;
    using TEIF6 = DMA2_HISR_TEIF6_Values<DMA2::HISR, 19, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF6 = DMA2_HISR_DMEIF6_Values<DMA2::HISR, 18, 1, ReadMode, DMA2HISRBase> ;
    using FEIF6 = DMA2_HISR_FEIF6_Values<DMA2::HISR, 16, 1, ReadMode, DMA2HISRBase> ;
    using TCIF5 = DMA2_HISR_TCIF5_Values<DMA2::HISR, 11, 1, ReadMode, DMA2HISRBase> ;
    using HTIF5 = DMA2_HISR_HTIF5_Values<DMA2::HISR, 10, 1, ReadMode, DMA2HISRBase> ;
    using TEIF5 = DMA2_HISR_TEIF5_Values<DMA2::HISR, 9, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF5 = DMA2_HISR_DMEIF5_Values<DMA2::HISR, 8, 1, ReadMode, DMA2HISRBase> ;
    using FEIF5 = DMA2_HISR_FEIF5_Values<DMA2::HISR, 6, 1, ReadMode, DMA2HISRBase> ;
    using TCIF4 = DMA2_HISR_TCIF4_Values<DMA2::HISR, 5, 1, ReadMode, DMA2HISRBase> ;
    using HTIF4 = DMA2_HISR_HTIF4_Values<DMA2::HISR, 4, 1, ReadMode, DMA2HISRBase> ;
    using TEIF4 = DMA2_HISR_TEIF4_Values<DMA2::HISR, 3, 1, ReadMode, DMA2HISRBase> ;
    using DMEIF4 = DMA2_HISR_DMEIF4_Values<DMA2::HISR, 2, 1, ReadMode, DMA2HISRBase> ;
    using FEIF4 = DMA2_HISR_FEIF4_Values<DMA2::HISR, 0, 1, ReadMode, DMA2HISRBase> ;
    using FieldValues = DMA2_HISR_FEIF4_Values<DMA2::HISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HISRPack  = Register<0x40026404, 32, ReadMode, DMA2HISRBase, T...> ;

  struct DMA2LIFCRBase {} ;

  struct LIFCR : public RegisterBase<0x40026408, 32, WriteMode>
  {
    using CTCIF3 = DMA2_LIFCR_CTCIF3_Values<DMA2::LIFCR, 27, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF3 = DMA2_LIFCR_CHTIF3_Values<DMA2::LIFCR, 26, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF3 = DMA2_LIFCR_CTEIF3_Values<DMA2::LIFCR, 25, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF3 = DMA2_LIFCR_CDMEIF3_Values<DMA2::LIFCR, 24, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF3 = DMA2_LIFCR_CFEIF3_Values<DMA2::LIFCR, 22, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF2 = DMA2_LIFCR_CTCIF2_Values<DMA2::LIFCR, 21, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF2 = DMA2_LIFCR_CHTIF2_Values<DMA2::LIFCR, 20, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF2 = DMA2_LIFCR_CTEIF2_Values<DMA2::LIFCR, 19, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF2 = DMA2_LIFCR_CDMEIF2_Values<DMA2::LIFCR, 18, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF2 = DMA2_LIFCR_CFEIF2_Values<DMA2::LIFCR, 16, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF1 = DMA2_LIFCR_CTCIF1_Values<DMA2::LIFCR, 11, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF1 = DMA2_LIFCR_CHTIF1_Values<DMA2::LIFCR, 10, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF1 = DMA2_LIFCR_CTEIF1_Values<DMA2::LIFCR, 9, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF1 = DMA2_LIFCR_CDMEIF1_Values<DMA2::LIFCR, 8, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF1 = DMA2_LIFCR_CFEIF1_Values<DMA2::LIFCR, 6, 1, WriteMode, DMA2LIFCRBase> ;
    using CTCIF0 = DMA2_LIFCR_CTCIF0_Values<DMA2::LIFCR, 5, 1, WriteMode, DMA2LIFCRBase> ;
    using CHTIF0 = DMA2_LIFCR_CHTIF0_Values<DMA2::LIFCR, 4, 1, WriteMode, DMA2LIFCRBase> ;
    using CTEIF0 = DMA2_LIFCR_CTEIF0_Values<DMA2::LIFCR, 3, 1, WriteMode, DMA2LIFCRBase> ;
    using CDMEIF0 = DMA2_LIFCR_CDMEIF0_Values<DMA2::LIFCR, 2, 1, WriteMode, DMA2LIFCRBase> ;
    using CFEIF0 = DMA2_LIFCR_CFEIF0_Values<DMA2::LIFCR, 0, 1, WriteMode, DMA2LIFCRBase> ;
    using FieldValues = DMA2_LIFCR_CFEIF0_Values<DMA2::LIFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LIFCRPack  = Register<0x40026408, 32, WriteMode, DMA2LIFCRBase, T...> ;

  struct DMA2HIFCRBase {} ;

  struct HIFCR : public RegisterBase<0x4002640C, 32, WriteMode>
  {
    using CTCIF7 = DMA2_HIFCR_CTCIF7_Values<DMA2::HIFCR, 27, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF7 = DMA2_HIFCR_CHTIF7_Values<DMA2::HIFCR, 26, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF7 = DMA2_HIFCR_CTEIF7_Values<DMA2::HIFCR, 25, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF7 = DMA2_HIFCR_CDMEIF7_Values<DMA2::HIFCR, 24, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF7 = DMA2_HIFCR_CFEIF7_Values<DMA2::HIFCR, 22, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF6 = DMA2_HIFCR_CTCIF6_Values<DMA2::HIFCR, 21, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF6 = DMA2_HIFCR_CHTIF6_Values<DMA2::HIFCR, 20, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF6 = DMA2_HIFCR_CTEIF6_Values<DMA2::HIFCR, 19, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF6 = DMA2_HIFCR_CDMEIF6_Values<DMA2::HIFCR, 18, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF6 = DMA2_HIFCR_CFEIF6_Values<DMA2::HIFCR, 16, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF5 = DMA2_HIFCR_CTCIF5_Values<DMA2::HIFCR, 11, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF5 = DMA2_HIFCR_CHTIF5_Values<DMA2::HIFCR, 10, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF5 = DMA2_HIFCR_CTEIF5_Values<DMA2::HIFCR, 9, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF5 = DMA2_HIFCR_CDMEIF5_Values<DMA2::HIFCR, 8, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF5 = DMA2_HIFCR_CFEIF5_Values<DMA2::HIFCR, 6, 1, WriteMode, DMA2HIFCRBase> ;
    using CTCIF4 = DMA2_HIFCR_CTCIF4_Values<DMA2::HIFCR, 5, 1, WriteMode, DMA2HIFCRBase> ;
    using CHTIF4 = DMA2_HIFCR_CHTIF4_Values<DMA2::HIFCR, 4, 1, WriteMode, DMA2HIFCRBase> ;
    using CTEIF4 = DMA2_HIFCR_CTEIF4_Values<DMA2::HIFCR, 3, 1, WriteMode, DMA2HIFCRBase> ;
    using CDMEIF4 = DMA2_HIFCR_CDMEIF4_Values<DMA2::HIFCR, 2, 1, WriteMode, DMA2HIFCRBase> ;
    using CFEIF4 = DMA2_HIFCR_CFEIF4_Values<DMA2::HIFCR, 0, 1, WriteMode, DMA2HIFCRBase> ;
    using FieldValues = DMA2_HIFCR_CFEIF4_Values<DMA2::HIFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HIFCRPack  = Register<0x4002640C, 32, WriteMode, DMA2HIFCRBase, T...> ;

  struct DMA2S0CRBase {} ;

  struct S0CR : public RegisterBase<0x40026410, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S0CR_CHSEL_Values<DMA2::S0CR, 25, 3, ReadWriteMode, DMA2S0CRBase> ;
    using MBURST = DMA2_S0CR_MBURST_Values<DMA2::S0CR, 23, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PBURST = DMA2_S0CR_PBURST_Values<DMA2::S0CR, 21, 2, ReadWriteMode, DMA2S0CRBase> ;
    using CT = DMA2_S0CR_CT_Values<DMA2::S0CR, 19, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DBM = DMA2_S0CR_DBM_Values<DMA2::S0CR, 18, 1, ReadWriteMode, DMA2S0CRBase> ;
    using PL = DMA2_S0CR_PL_Values<DMA2::S0CR, 16, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PINCOS = DMA2_S0CR_PINCOS_Values<DMA2::S0CR, 15, 1, ReadWriteMode, DMA2S0CRBase> ;
    using MSIZE = DMA2_S0CR_MSIZE_Values<DMA2::S0CR, 13, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PSIZE = DMA2_S0CR_PSIZE_Values<DMA2::S0CR, 11, 2, ReadWriteMode, DMA2S0CRBase> ;
    using MINC = DMA2_S0CR_MINC_Values<DMA2::S0CR, 10, 1, ReadWriteMode, DMA2S0CRBase> ;
    using PINC = DMA2_S0CR_PINC_Values<DMA2::S0CR, 9, 1, ReadWriteMode, DMA2S0CRBase> ;
    using CIRC = DMA2_S0CR_CIRC_Values<DMA2::S0CR, 8, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DIR = DMA2_S0CR_DIR_Values<DMA2::S0CR, 6, 2, ReadWriteMode, DMA2S0CRBase> ;
    using PFCTRL = DMA2_S0CR_PFCTRL_Values<DMA2::S0CR, 5, 1, ReadWriteMode, DMA2S0CRBase> ;
    using TCIE = DMA2_S0CR_TCIE_Values<DMA2::S0CR, 4, 1, ReadWriteMode, DMA2S0CRBase> ;
    using HTIE = DMA2_S0CR_HTIE_Values<DMA2::S0CR, 3, 1, ReadWriteMode, DMA2S0CRBase> ;
    using TEIE = DMA2_S0CR_TEIE_Values<DMA2::S0CR, 2, 1, ReadWriteMode, DMA2S0CRBase> ;
    using DMEIE = DMA2_S0CR_DMEIE_Values<DMA2::S0CR, 1, 1, ReadWriteMode, DMA2S0CRBase> ;
    using EN = DMA2_S0CR_EN_Values<DMA2::S0CR, 0, 1, ReadWriteMode, DMA2S0CRBase> ;
    using FieldValues = DMA2_S0CR_EN_Values<DMA2::S0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0CRPack  = Register<0x40026410, 32, ReadWriteMode, DMA2S0CRBase, T...> ;

  struct DMA2S0NDTRBase {} ;

  struct S0NDTR : public RegisterBase<0x40026414, 32, ReadWriteMode>
  {
    using NDT = DMA2_S0NDTR_NDT_Values<DMA2::S0NDTR, 0, 16, ReadWriteMode, DMA2S0NDTRBase> ;
    using FieldValues = DMA2_S0NDTR_NDT_Values<DMA2::S0NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0NDTRPack  = Register<0x40026414, 32, ReadWriteMode, DMA2S0NDTRBase, T...> ;

  struct DMA2S0PARBase {} ;

  struct S0PAR : public RegisterBase<0x40026418, 32, ReadWriteMode>
  {
    using PA = DMA2_S0PAR_PA_Values<DMA2::S0PAR, 0, 32, ReadWriteMode, DMA2S0PARBase> ;
    using FieldValues = DMA2_S0PAR_PA_Values<DMA2::S0PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0PARPack  = Register<0x40026418, 32, ReadWriteMode, DMA2S0PARBase, T...> ;

  struct DMA2S0M0ARBase {} ;

  struct S0M0AR : public RegisterBase<0x4002641C, 32, ReadWriteMode>
  {
    using M0A = DMA2_S0M0AR_M0A_Values<DMA2::S0M0AR, 0, 32, ReadWriteMode, DMA2S0M0ARBase> ;
    using FieldValues = DMA2_S0M0AR_M0A_Values<DMA2::S0M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0M0ARPack  = Register<0x4002641C, 32, ReadWriteMode, DMA2S0M0ARBase, T...> ;

  struct DMA2S0M1ARBase {} ;

  struct S0M1AR : public RegisterBase<0x40026420, 32, ReadWriteMode>
  {
    using M1A = DMA2_S0M1AR_M1A_Values<DMA2::S0M1AR, 0, 32, ReadWriteMode, DMA2S0M1ARBase> ;
    using FieldValues = DMA2_S0M1AR_M1A_Values<DMA2::S0M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0M1ARPack  = Register<0x40026420, 32, ReadWriteMode, DMA2S0M1ARBase, T...> ;

  struct DMA2S0FCRBase {} ;

  struct S0FCR : public RegisterBase<0x40026424, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S0FCR_FEIE_Values<DMA2::S0FCR, 7, 1, ReadWriteMode, DMA2S0FCRBase> ;
    using FS = DMA2_S0FCR_FS_Values<DMA2::S0FCR, 3, 3, ReadMode, DMA2S0FCRBase> ;
    using DMDIS = DMA2_S0FCR_DMDIS_Values<DMA2::S0FCR, 2, 1, ReadWriteMode, DMA2S0FCRBase> ;
    using FTH = DMA2_S0FCR_FTH_Values<DMA2::S0FCR, 0, 2, ReadWriteMode, DMA2S0FCRBase> ;
    using FieldValues = DMA2_S0FCR_FTH_Values<DMA2::S0FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0FCRPack  = Register<0x40026424, 32, ReadWriteMode, DMA2S0FCRBase, T...> ;

  struct DMA2S1CRBase {} ;

  struct S1CR : public RegisterBase<0x40026428, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S1CR_CHSEL_Values<DMA2::S1CR, 25, 3, ReadWriteMode, DMA2S1CRBase> ;
    using MBURST = DMA2_S1CR_MBURST_Values<DMA2::S1CR, 23, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PBURST = DMA2_S1CR_PBURST_Values<DMA2::S1CR, 21, 2, ReadWriteMode, DMA2S1CRBase> ;
    using ACK = DMA2_S1CR_ACK_Values<DMA2::S1CR, 20, 1, ReadWriteMode, DMA2S1CRBase> ;
    using CT = DMA2_S1CR_CT_Values<DMA2::S1CR, 19, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DBM = DMA2_S1CR_DBM_Values<DMA2::S1CR, 18, 1, ReadWriteMode, DMA2S1CRBase> ;
    using PL = DMA2_S1CR_PL_Values<DMA2::S1CR, 16, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PINCOS = DMA2_S1CR_PINCOS_Values<DMA2::S1CR, 15, 1, ReadWriteMode, DMA2S1CRBase> ;
    using MSIZE = DMA2_S1CR_MSIZE_Values<DMA2::S1CR, 13, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PSIZE = DMA2_S1CR_PSIZE_Values<DMA2::S1CR, 11, 2, ReadWriteMode, DMA2S1CRBase> ;
    using MINC = DMA2_S1CR_MINC_Values<DMA2::S1CR, 10, 1, ReadWriteMode, DMA2S1CRBase> ;
    using PINC = DMA2_S1CR_PINC_Values<DMA2::S1CR, 9, 1, ReadWriteMode, DMA2S1CRBase> ;
    using CIRC = DMA2_S1CR_CIRC_Values<DMA2::S1CR, 8, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DIR = DMA2_S1CR_DIR_Values<DMA2::S1CR, 6, 2, ReadWriteMode, DMA2S1CRBase> ;
    using PFCTRL = DMA2_S1CR_PFCTRL_Values<DMA2::S1CR, 5, 1, ReadWriteMode, DMA2S1CRBase> ;
    using TCIE = DMA2_S1CR_TCIE_Values<DMA2::S1CR, 4, 1, ReadWriteMode, DMA2S1CRBase> ;
    using HTIE = DMA2_S1CR_HTIE_Values<DMA2::S1CR, 3, 1, ReadWriteMode, DMA2S1CRBase> ;
    using TEIE = DMA2_S1CR_TEIE_Values<DMA2::S1CR, 2, 1, ReadWriteMode, DMA2S1CRBase> ;
    using DMEIE = DMA2_S1CR_DMEIE_Values<DMA2::S1CR, 1, 1, ReadWriteMode, DMA2S1CRBase> ;
    using EN = DMA2_S1CR_EN_Values<DMA2::S1CR, 0, 1, ReadWriteMode, DMA2S1CRBase> ;
    using FieldValues = DMA2_S1CR_EN_Values<DMA2::S1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1CRPack  = Register<0x40026428, 32, ReadWriteMode, DMA2S1CRBase, T...> ;

  struct DMA2S1NDTRBase {} ;

  struct S1NDTR : public RegisterBase<0x4002642C, 32, ReadWriteMode>
  {
    using NDT = DMA2_S1NDTR_NDT_Values<DMA2::S1NDTR, 0, 16, ReadWriteMode, DMA2S1NDTRBase> ;
    using FieldValues = DMA2_S1NDTR_NDT_Values<DMA2::S1NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1NDTRPack  = Register<0x4002642C, 32, ReadWriteMode, DMA2S1NDTRBase, T...> ;

  struct DMA2S1PARBase {} ;

  struct S1PAR : public RegisterBase<0x40026430, 32, ReadWriteMode>
  {
    using PA = DMA2_S1PAR_PA_Values<DMA2::S1PAR, 0, 32, ReadWriteMode, DMA2S1PARBase> ;
    using FieldValues = DMA2_S1PAR_PA_Values<DMA2::S1PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1PARPack  = Register<0x40026430, 32, ReadWriteMode, DMA2S1PARBase, T...> ;

  struct DMA2S1M0ARBase {} ;

  struct S1M0AR : public RegisterBase<0x40026434, 32, ReadWriteMode>
  {
    using M0A = DMA2_S1M0AR_M0A_Values<DMA2::S1M0AR, 0, 32, ReadWriteMode, DMA2S1M0ARBase> ;
    using FieldValues = DMA2_S1M0AR_M0A_Values<DMA2::S1M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1M0ARPack  = Register<0x40026434, 32, ReadWriteMode, DMA2S1M0ARBase, T...> ;

  struct DMA2S1M1ARBase {} ;

  struct S1M1AR : public RegisterBase<0x40026438, 32, ReadWriteMode>
  {
    using M1A = DMA2_S1M1AR_M1A_Values<DMA2::S1M1AR, 0, 32, ReadWriteMode, DMA2S1M1ARBase> ;
    using FieldValues = DMA2_S1M1AR_M1A_Values<DMA2::S1M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1M1ARPack  = Register<0x40026438, 32, ReadWriteMode, DMA2S1M1ARBase, T...> ;

  struct DMA2S1FCRBase {} ;

  struct S1FCR : public RegisterBase<0x4002643C, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S1FCR_FEIE_Values<DMA2::S1FCR, 7, 1, ReadWriteMode, DMA2S1FCRBase> ;
    using FS = DMA2_S1FCR_FS_Values<DMA2::S1FCR, 3, 3, ReadMode, DMA2S1FCRBase> ;
    using DMDIS = DMA2_S1FCR_DMDIS_Values<DMA2::S1FCR, 2, 1, ReadWriteMode, DMA2S1FCRBase> ;
    using FTH = DMA2_S1FCR_FTH_Values<DMA2::S1FCR, 0, 2, ReadWriteMode, DMA2S1FCRBase> ;
    using FieldValues = DMA2_S1FCR_FTH_Values<DMA2::S1FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1FCRPack  = Register<0x4002643C, 32, ReadWriteMode, DMA2S1FCRBase, T...> ;

  struct DMA2S2CRBase {} ;

  struct S2CR : public RegisterBase<0x40026440, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S2CR_CHSEL_Values<DMA2::S2CR, 25, 3, ReadWriteMode, DMA2S2CRBase> ;
    using MBURST = DMA2_S2CR_MBURST_Values<DMA2::S2CR, 23, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PBURST = DMA2_S2CR_PBURST_Values<DMA2::S2CR, 21, 2, ReadWriteMode, DMA2S2CRBase> ;
    using ACK = DMA2_S2CR_ACK_Values<DMA2::S2CR, 20, 1, ReadWriteMode, DMA2S2CRBase> ;
    using CT = DMA2_S2CR_CT_Values<DMA2::S2CR, 19, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DBM = DMA2_S2CR_DBM_Values<DMA2::S2CR, 18, 1, ReadWriteMode, DMA2S2CRBase> ;
    using PL = DMA2_S2CR_PL_Values<DMA2::S2CR, 16, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PINCOS = DMA2_S2CR_PINCOS_Values<DMA2::S2CR, 15, 1, ReadWriteMode, DMA2S2CRBase> ;
    using MSIZE = DMA2_S2CR_MSIZE_Values<DMA2::S2CR, 13, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PSIZE = DMA2_S2CR_PSIZE_Values<DMA2::S2CR, 11, 2, ReadWriteMode, DMA2S2CRBase> ;
    using MINC = DMA2_S2CR_MINC_Values<DMA2::S2CR, 10, 1, ReadWriteMode, DMA2S2CRBase> ;
    using PINC = DMA2_S2CR_PINC_Values<DMA2::S2CR, 9, 1, ReadWriteMode, DMA2S2CRBase> ;
    using CIRC = DMA2_S2CR_CIRC_Values<DMA2::S2CR, 8, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DIR = DMA2_S2CR_DIR_Values<DMA2::S2CR, 6, 2, ReadWriteMode, DMA2S2CRBase> ;
    using PFCTRL = DMA2_S2CR_PFCTRL_Values<DMA2::S2CR, 5, 1, ReadWriteMode, DMA2S2CRBase> ;
    using TCIE = DMA2_S2CR_TCIE_Values<DMA2::S2CR, 4, 1, ReadWriteMode, DMA2S2CRBase> ;
    using HTIE = DMA2_S2CR_HTIE_Values<DMA2::S2CR, 3, 1, ReadWriteMode, DMA2S2CRBase> ;
    using TEIE = DMA2_S2CR_TEIE_Values<DMA2::S2CR, 2, 1, ReadWriteMode, DMA2S2CRBase> ;
    using DMEIE = DMA2_S2CR_DMEIE_Values<DMA2::S2CR, 1, 1, ReadWriteMode, DMA2S2CRBase> ;
    using EN = DMA2_S2CR_EN_Values<DMA2::S2CR, 0, 1, ReadWriteMode, DMA2S2CRBase> ;
    using FieldValues = DMA2_S2CR_EN_Values<DMA2::S2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2CRPack  = Register<0x40026440, 32, ReadWriteMode, DMA2S2CRBase, T...> ;

  struct DMA2S2NDTRBase {} ;

  struct S2NDTR : public RegisterBase<0x40026444, 32, ReadWriteMode>
  {
    using NDT = DMA2_S2NDTR_NDT_Values<DMA2::S2NDTR, 0, 16, ReadWriteMode, DMA2S2NDTRBase> ;
    using FieldValues = DMA2_S2NDTR_NDT_Values<DMA2::S2NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2NDTRPack  = Register<0x40026444, 32, ReadWriteMode, DMA2S2NDTRBase, T...> ;

  struct DMA2S2PARBase {} ;

  struct S2PAR : public RegisterBase<0x40026448, 32, ReadWriteMode>
  {
    using PA = DMA2_S2PAR_PA_Values<DMA2::S2PAR, 0, 32, ReadWriteMode, DMA2S2PARBase> ;
    using FieldValues = DMA2_S2PAR_PA_Values<DMA2::S2PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2PARPack  = Register<0x40026448, 32, ReadWriteMode, DMA2S2PARBase, T...> ;

  struct DMA2S2M0ARBase {} ;

  struct S2M0AR : public RegisterBase<0x4002644C, 32, ReadWriteMode>
  {
    using M0A = DMA2_S2M0AR_M0A_Values<DMA2::S2M0AR, 0, 32, ReadWriteMode, DMA2S2M0ARBase> ;
    using FieldValues = DMA2_S2M0AR_M0A_Values<DMA2::S2M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2M0ARPack  = Register<0x4002644C, 32, ReadWriteMode, DMA2S2M0ARBase, T...> ;

  struct DMA2S2M1ARBase {} ;

  struct S2M1AR : public RegisterBase<0x40026450, 32, ReadWriteMode>
  {
    using M1A = DMA2_S2M1AR_M1A_Values<DMA2::S2M1AR, 0, 32, ReadWriteMode, DMA2S2M1ARBase> ;
    using FieldValues = DMA2_S2M1AR_M1A_Values<DMA2::S2M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2M1ARPack  = Register<0x40026450, 32, ReadWriteMode, DMA2S2M1ARBase, T...> ;

  struct DMA2S2FCRBase {} ;

  struct S2FCR : public RegisterBase<0x40026454, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S2FCR_FEIE_Values<DMA2::S2FCR, 7, 1, ReadWriteMode, DMA2S2FCRBase> ;
    using FS = DMA2_S2FCR_FS_Values<DMA2::S2FCR, 3, 3, ReadMode, DMA2S2FCRBase> ;
    using DMDIS = DMA2_S2FCR_DMDIS_Values<DMA2::S2FCR, 2, 1, ReadWriteMode, DMA2S2FCRBase> ;
    using FTH = DMA2_S2FCR_FTH_Values<DMA2::S2FCR, 0, 2, ReadWriteMode, DMA2S2FCRBase> ;
    using FieldValues = DMA2_S2FCR_FTH_Values<DMA2::S2FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2FCRPack  = Register<0x40026454, 32, ReadWriteMode, DMA2S2FCRBase, T...> ;

  struct DMA2S3CRBase {} ;

  struct S3CR : public RegisterBase<0x40026458, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S3CR_CHSEL_Values<DMA2::S3CR, 25, 3, ReadWriteMode, DMA2S3CRBase> ;
    using MBURST = DMA2_S3CR_MBURST_Values<DMA2::S3CR, 23, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PBURST = DMA2_S3CR_PBURST_Values<DMA2::S3CR, 21, 2, ReadWriteMode, DMA2S3CRBase> ;
    using ACK = DMA2_S3CR_ACK_Values<DMA2::S3CR, 20, 1, ReadWriteMode, DMA2S3CRBase> ;
    using CT = DMA2_S3CR_CT_Values<DMA2::S3CR, 19, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DBM = DMA2_S3CR_DBM_Values<DMA2::S3CR, 18, 1, ReadWriteMode, DMA2S3CRBase> ;
    using PL = DMA2_S3CR_PL_Values<DMA2::S3CR, 16, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PINCOS = DMA2_S3CR_PINCOS_Values<DMA2::S3CR, 15, 1, ReadWriteMode, DMA2S3CRBase> ;
    using MSIZE = DMA2_S3CR_MSIZE_Values<DMA2::S3CR, 13, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PSIZE = DMA2_S3CR_PSIZE_Values<DMA2::S3CR, 11, 2, ReadWriteMode, DMA2S3CRBase> ;
    using MINC = DMA2_S3CR_MINC_Values<DMA2::S3CR, 10, 1, ReadWriteMode, DMA2S3CRBase> ;
    using PINC = DMA2_S3CR_PINC_Values<DMA2::S3CR, 9, 1, ReadWriteMode, DMA2S3CRBase> ;
    using CIRC = DMA2_S3CR_CIRC_Values<DMA2::S3CR, 8, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DIR = DMA2_S3CR_DIR_Values<DMA2::S3CR, 6, 2, ReadWriteMode, DMA2S3CRBase> ;
    using PFCTRL = DMA2_S3CR_PFCTRL_Values<DMA2::S3CR, 5, 1, ReadWriteMode, DMA2S3CRBase> ;
    using TCIE = DMA2_S3CR_TCIE_Values<DMA2::S3CR, 4, 1, ReadWriteMode, DMA2S3CRBase> ;
    using HTIE = DMA2_S3CR_HTIE_Values<DMA2::S3CR, 3, 1, ReadWriteMode, DMA2S3CRBase> ;
    using TEIE = DMA2_S3CR_TEIE_Values<DMA2::S3CR, 2, 1, ReadWriteMode, DMA2S3CRBase> ;
    using DMEIE = DMA2_S3CR_DMEIE_Values<DMA2::S3CR, 1, 1, ReadWriteMode, DMA2S3CRBase> ;
    using EN = DMA2_S3CR_EN_Values<DMA2::S3CR, 0, 1, ReadWriteMode, DMA2S3CRBase> ;
    using FieldValues = DMA2_S3CR_EN_Values<DMA2::S3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3CRPack  = Register<0x40026458, 32, ReadWriteMode, DMA2S3CRBase, T...> ;

  struct DMA2S3NDTRBase {} ;

  struct S3NDTR : public RegisterBase<0x4002645C, 32, ReadWriteMode>
  {
    using NDT = DMA2_S3NDTR_NDT_Values<DMA2::S3NDTR, 0, 16, ReadWriteMode, DMA2S3NDTRBase> ;
    using FieldValues = DMA2_S3NDTR_NDT_Values<DMA2::S3NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3NDTRPack  = Register<0x4002645C, 32, ReadWriteMode, DMA2S3NDTRBase, T...> ;

  struct DMA2S3PARBase {} ;

  struct S3PAR : public RegisterBase<0x40026460, 32, ReadWriteMode>
  {
    using PA = DMA2_S3PAR_PA_Values<DMA2::S3PAR, 0, 32, ReadWriteMode, DMA2S3PARBase> ;
    using FieldValues = DMA2_S3PAR_PA_Values<DMA2::S3PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3PARPack  = Register<0x40026460, 32, ReadWriteMode, DMA2S3PARBase, T...> ;

  struct DMA2S3M0ARBase {} ;

  struct S3M0AR : public RegisterBase<0x40026464, 32, ReadWriteMode>
  {
    using M0A = DMA2_S3M0AR_M0A_Values<DMA2::S3M0AR, 0, 32, ReadWriteMode, DMA2S3M0ARBase> ;
    using FieldValues = DMA2_S3M0AR_M0A_Values<DMA2::S3M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3M0ARPack  = Register<0x40026464, 32, ReadWriteMode, DMA2S3M0ARBase, T...> ;

  struct DMA2S3M1ARBase {} ;

  struct S3M1AR : public RegisterBase<0x40026468, 32, ReadWriteMode>
  {
    using M1A = DMA2_S3M1AR_M1A_Values<DMA2::S3M1AR, 0, 32, ReadWriteMode, DMA2S3M1ARBase> ;
    using FieldValues = DMA2_S3M1AR_M1A_Values<DMA2::S3M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3M1ARPack  = Register<0x40026468, 32, ReadWriteMode, DMA2S3M1ARBase, T...> ;

  struct DMA2S3FCRBase {} ;

  struct S3FCR : public RegisterBase<0x4002646C, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S3FCR_FEIE_Values<DMA2::S3FCR, 7, 1, ReadWriteMode, DMA2S3FCRBase> ;
    using FS = DMA2_S3FCR_FS_Values<DMA2::S3FCR, 3, 3, ReadMode, DMA2S3FCRBase> ;
    using DMDIS = DMA2_S3FCR_DMDIS_Values<DMA2::S3FCR, 2, 1, ReadWriteMode, DMA2S3FCRBase> ;
    using FTH = DMA2_S3FCR_FTH_Values<DMA2::S3FCR, 0, 2, ReadWriteMode, DMA2S3FCRBase> ;
    using FieldValues = DMA2_S3FCR_FTH_Values<DMA2::S3FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3FCRPack  = Register<0x4002646C, 32, ReadWriteMode, DMA2S3FCRBase, T...> ;

  struct DMA2S4CRBase {} ;

  struct S4CR : public RegisterBase<0x40026470, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S4CR_CHSEL_Values<DMA2::S4CR, 25, 3, ReadWriteMode, DMA2S4CRBase> ;
    using MBURST = DMA2_S4CR_MBURST_Values<DMA2::S4CR, 23, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PBURST = DMA2_S4CR_PBURST_Values<DMA2::S4CR, 21, 2, ReadWriteMode, DMA2S4CRBase> ;
    using ACK = DMA2_S4CR_ACK_Values<DMA2::S4CR, 20, 1, ReadWriteMode, DMA2S4CRBase> ;
    using CT = DMA2_S4CR_CT_Values<DMA2::S4CR, 19, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DBM = DMA2_S4CR_DBM_Values<DMA2::S4CR, 18, 1, ReadWriteMode, DMA2S4CRBase> ;
    using PL = DMA2_S4CR_PL_Values<DMA2::S4CR, 16, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PINCOS = DMA2_S4CR_PINCOS_Values<DMA2::S4CR, 15, 1, ReadWriteMode, DMA2S4CRBase> ;
    using MSIZE = DMA2_S4CR_MSIZE_Values<DMA2::S4CR, 13, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PSIZE = DMA2_S4CR_PSIZE_Values<DMA2::S4CR, 11, 2, ReadWriteMode, DMA2S4CRBase> ;
    using MINC = DMA2_S4CR_MINC_Values<DMA2::S4CR, 10, 1, ReadWriteMode, DMA2S4CRBase> ;
    using PINC = DMA2_S4CR_PINC_Values<DMA2::S4CR, 9, 1, ReadWriteMode, DMA2S4CRBase> ;
    using CIRC = DMA2_S4CR_CIRC_Values<DMA2::S4CR, 8, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DIR = DMA2_S4CR_DIR_Values<DMA2::S4CR, 6, 2, ReadWriteMode, DMA2S4CRBase> ;
    using PFCTRL = DMA2_S4CR_PFCTRL_Values<DMA2::S4CR, 5, 1, ReadWriteMode, DMA2S4CRBase> ;
    using TCIE = DMA2_S4CR_TCIE_Values<DMA2::S4CR, 4, 1, ReadWriteMode, DMA2S4CRBase> ;
    using HTIE = DMA2_S4CR_HTIE_Values<DMA2::S4CR, 3, 1, ReadWriteMode, DMA2S4CRBase> ;
    using TEIE = DMA2_S4CR_TEIE_Values<DMA2::S4CR, 2, 1, ReadWriteMode, DMA2S4CRBase> ;
    using DMEIE = DMA2_S4CR_DMEIE_Values<DMA2::S4CR, 1, 1, ReadWriteMode, DMA2S4CRBase> ;
    using EN = DMA2_S4CR_EN_Values<DMA2::S4CR, 0, 1, ReadWriteMode, DMA2S4CRBase> ;
    using FieldValues = DMA2_S4CR_EN_Values<DMA2::S4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4CRPack  = Register<0x40026470, 32, ReadWriteMode, DMA2S4CRBase, T...> ;

  struct DMA2S4NDTRBase {} ;

  struct S4NDTR : public RegisterBase<0x40026474, 32, ReadWriteMode>
  {
    using NDT = DMA2_S4NDTR_NDT_Values<DMA2::S4NDTR, 0, 16, ReadWriteMode, DMA2S4NDTRBase> ;
    using FieldValues = DMA2_S4NDTR_NDT_Values<DMA2::S4NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4NDTRPack  = Register<0x40026474, 32, ReadWriteMode, DMA2S4NDTRBase, T...> ;

  struct DMA2S4PARBase {} ;

  struct S4PAR : public RegisterBase<0x40026478, 32, ReadWriteMode>
  {
    using PA = DMA2_S4PAR_PA_Values<DMA2::S4PAR, 0, 32, ReadWriteMode, DMA2S4PARBase> ;
    using FieldValues = DMA2_S4PAR_PA_Values<DMA2::S4PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4PARPack  = Register<0x40026478, 32, ReadWriteMode, DMA2S4PARBase, T...> ;

  struct DMA2S4M0ARBase {} ;

  struct S4M0AR : public RegisterBase<0x4002647C, 32, ReadWriteMode>
  {
    using M0A = DMA2_S4M0AR_M0A_Values<DMA2::S4M0AR, 0, 32, ReadWriteMode, DMA2S4M0ARBase> ;
    using FieldValues = DMA2_S4M0AR_M0A_Values<DMA2::S4M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4M0ARPack  = Register<0x4002647C, 32, ReadWriteMode, DMA2S4M0ARBase, T...> ;

  struct DMA2S4M1ARBase {} ;

  struct S4M1AR : public RegisterBase<0x40026480, 32, ReadWriteMode>
  {
    using M1A = DMA2_S4M1AR_M1A_Values<DMA2::S4M1AR, 0, 32, ReadWriteMode, DMA2S4M1ARBase> ;
    using FieldValues = DMA2_S4M1AR_M1A_Values<DMA2::S4M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4M1ARPack  = Register<0x40026480, 32, ReadWriteMode, DMA2S4M1ARBase, T...> ;

  struct DMA2S4FCRBase {} ;

  struct S4FCR : public RegisterBase<0x40026484, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S4FCR_FEIE_Values<DMA2::S4FCR, 7, 1, ReadWriteMode, DMA2S4FCRBase> ;
    using FS = DMA2_S4FCR_FS_Values<DMA2::S4FCR, 3, 3, ReadMode, DMA2S4FCRBase> ;
    using DMDIS = DMA2_S4FCR_DMDIS_Values<DMA2::S4FCR, 2, 1, ReadWriteMode, DMA2S4FCRBase> ;
    using FTH = DMA2_S4FCR_FTH_Values<DMA2::S4FCR, 0, 2, ReadWriteMode, DMA2S4FCRBase> ;
    using FieldValues = DMA2_S4FCR_FTH_Values<DMA2::S4FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4FCRPack  = Register<0x40026484, 32, ReadWriteMode, DMA2S4FCRBase, T...> ;

  struct DMA2S5CRBase {} ;

  struct S5CR : public RegisterBase<0x40026488, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S5CR_CHSEL_Values<DMA2::S5CR, 25, 3, ReadWriteMode, DMA2S5CRBase> ;
    using MBURST = DMA2_S5CR_MBURST_Values<DMA2::S5CR, 23, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PBURST = DMA2_S5CR_PBURST_Values<DMA2::S5CR, 21, 2, ReadWriteMode, DMA2S5CRBase> ;
    using ACK = DMA2_S5CR_ACK_Values<DMA2::S5CR, 20, 1, ReadWriteMode, DMA2S5CRBase> ;
    using CT = DMA2_S5CR_CT_Values<DMA2::S5CR, 19, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DBM = DMA2_S5CR_DBM_Values<DMA2::S5CR, 18, 1, ReadWriteMode, DMA2S5CRBase> ;
    using PL = DMA2_S5CR_PL_Values<DMA2::S5CR, 16, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PINCOS = DMA2_S5CR_PINCOS_Values<DMA2::S5CR, 15, 1, ReadWriteMode, DMA2S5CRBase> ;
    using MSIZE = DMA2_S5CR_MSIZE_Values<DMA2::S5CR, 13, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PSIZE = DMA2_S5CR_PSIZE_Values<DMA2::S5CR, 11, 2, ReadWriteMode, DMA2S5CRBase> ;
    using MINC = DMA2_S5CR_MINC_Values<DMA2::S5CR, 10, 1, ReadWriteMode, DMA2S5CRBase> ;
    using PINC = DMA2_S5CR_PINC_Values<DMA2::S5CR, 9, 1, ReadWriteMode, DMA2S5CRBase> ;
    using CIRC = DMA2_S5CR_CIRC_Values<DMA2::S5CR, 8, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DIR = DMA2_S5CR_DIR_Values<DMA2::S5CR, 6, 2, ReadWriteMode, DMA2S5CRBase> ;
    using PFCTRL = DMA2_S5CR_PFCTRL_Values<DMA2::S5CR, 5, 1, ReadWriteMode, DMA2S5CRBase> ;
    using TCIE = DMA2_S5CR_TCIE_Values<DMA2::S5CR, 4, 1, ReadWriteMode, DMA2S5CRBase> ;
    using HTIE = DMA2_S5CR_HTIE_Values<DMA2::S5CR, 3, 1, ReadWriteMode, DMA2S5CRBase> ;
    using TEIE = DMA2_S5CR_TEIE_Values<DMA2::S5CR, 2, 1, ReadWriteMode, DMA2S5CRBase> ;
    using DMEIE = DMA2_S5CR_DMEIE_Values<DMA2::S5CR, 1, 1, ReadWriteMode, DMA2S5CRBase> ;
    using EN = DMA2_S5CR_EN_Values<DMA2::S5CR, 0, 1, ReadWriteMode, DMA2S5CRBase> ;
    using FieldValues = DMA2_S5CR_EN_Values<DMA2::S5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5CRPack  = Register<0x40026488, 32, ReadWriteMode, DMA2S5CRBase, T...> ;

  struct DMA2S5NDTRBase {} ;

  struct S5NDTR : public RegisterBase<0x4002648C, 32, ReadWriteMode>
  {
    using NDT = DMA2_S5NDTR_NDT_Values<DMA2::S5NDTR, 0, 16, ReadWriteMode, DMA2S5NDTRBase> ;
    using FieldValues = DMA2_S5NDTR_NDT_Values<DMA2::S5NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5NDTRPack  = Register<0x4002648C, 32, ReadWriteMode, DMA2S5NDTRBase, T...> ;

  struct DMA2S5PARBase {} ;

  struct S5PAR : public RegisterBase<0x40026490, 32, ReadWriteMode>
  {
    using PA = DMA2_S5PAR_PA_Values<DMA2::S5PAR, 0, 32, ReadWriteMode, DMA2S5PARBase> ;
    using FieldValues = DMA2_S5PAR_PA_Values<DMA2::S5PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5PARPack  = Register<0x40026490, 32, ReadWriteMode, DMA2S5PARBase, T...> ;

  struct DMA2S5M0ARBase {} ;

  struct S5M0AR : public RegisterBase<0x40026494, 32, ReadWriteMode>
  {
    using M0A = DMA2_S5M0AR_M0A_Values<DMA2::S5M0AR, 0, 32, ReadWriteMode, DMA2S5M0ARBase> ;
    using FieldValues = DMA2_S5M0AR_M0A_Values<DMA2::S5M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5M0ARPack  = Register<0x40026494, 32, ReadWriteMode, DMA2S5M0ARBase, T...> ;

  struct DMA2S5M1ARBase {} ;

  struct S5M1AR : public RegisterBase<0x40026498, 32, ReadWriteMode>
  {
    using M1A = DMA2_S5M1AR_M1A_Values<DMA2::S5M1AR, 0, 32, ReadWriteMode, DMA2S5M1ARBase> ;
    using FieldValues = DMA2_S5M1AR_M1A_Values<DMA2::S5M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5M1ARPack  = Register<0x40026498, 32, ReadWriteMode, DMA2S5M1ARBase, T...> ;

  struct DMA2S5FCRBase {} ;

  struct S5FCR : public RegisterBase<0x4002649C, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S5FCR_FEIE_Values<DMA2::S5FCR, 7, 1, ReadWriteMode, DMA2S5FCRBase> ;
    using FS = DMA2_S5FCR_FS_Values<DMA2::S5FCR, 3, 3, ReadMode, DMA2S5FCRBase> ;
    using DMDIS = DMA2_S5FCR_DMDIS_Values<DMA2::S5FCR, 2, 1, ReadWriteMode, DMA2S5FCRBase> ;
    using FTH = DMA2_S5FCR_FTH_Values<DMA2::S5FCR, 0, 2, ReadWriteMode, DMA2S5FCRBase> ;
    using FieldValues = DMA2_S5FCR_FTH_Values<DMA2::S5FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5FCRPack  = Register<0x4002649C, 32, ReadWriteMode, DMA2S5FCRBase, T...> ;

  struct DMA2S6CRBase {} ;

  struct S6CR : public RegisterBase<0x400264A0, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S6CR_CHSEL_Values<DMA2::S6CR, 25, 3, ReadWriteMode, DMA2S6CRBase> ;
    using MBURST = DMA2_S6CR_MBURST_Values<DMA2::S6CR, 23, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PBURST = DMA2_S6CR_PBURST_Values<DMA2::S6CR, 21, 2, ReadWriteMode, DMA2S6CRBase> ;
    using ACK = DMA2_S6CR_ACK_Values<DMA2::S6CR, 20, 1, ReadWriteMode, DMA2S6CRBase> ;
    using CT = DMA2_S6CR_CT_Values<DMA2::S6CR, 19, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DBM = DMA2_S6CR_DBM_Values<DMA2::S6CR, 18, 1, ReadWriteMode, DMA2S6CRBase> ;
    using PL = DMA2_S6CR_PL_Values<DMA2::S6CR, 16, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PINCOS = DMA2_S6CR_PINCOS_Values<DMA2::S6CR, 15, 1, ReadWriteMode, DMA2S6CRBase> ;
    using MSIZE = DMA2_S6CR_MSIZE_Values<DMA2::S6CR, 13, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PSIZE = DMA2_S6CR_PSIZE_Values<DMA2::S6CR, 11, 2, ReadWriteMode, DMA2S6CRBase> ;
    using MINC = DMA2_S6CR_MINC_Values<DMA2::S6CR, 10, 1, ReadWriteMode, DMA2S6CRBase> ;
    using PINC = DMA2_S6CR_PINC_Values<DMA2::S6CR, 9, 1, ReadWriteMode, DMA2S6CRBase> ;
    using CIRC = DMA2_S6CR_CIRC_Values<DMA2::S6CR, 8, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DIR = DMA2_S6CR_DIR_Values<DMA2::S6CR, 6, 2, ReadWriteMode, DMA2S6CRBase> ;
    using PFCTRL = DMA2_S6CR_PFCTRL_Values<DMA2::S6CR, 5, 1, ReadWriteMode, DMA2S6CRBase> ;
    using TCIE = DMA2_S6CR_TCIE_Values<DMA2::S6CR, 4, 1, ReadWriteMode, DMA2S6CRBase> ;
    using HTIE = DMA2_S6CR_HTIE_Values<DMA2::S6CR, 3, 1, ReadWriteMode, DMA2S6CRBase> ;
    using TEIE = DMA2_S6CR_TEIE_Values<DMA2::S6CR, 2, 1, ReadWriteMode, DMA2S6CRBase> ;
    using DMEIE = DMA2_S6CR_DMEIE_Values<DMA2::S6CR, 1, 1, ReadWriteMode, DMA2S6CRBase> ;
    using EN = DMA2_S6CR_EN_Values<DMA2::S6CR, 0, 1, ReadWriteMode, DMA2S6CRBase> ;
    using FieldValues = DMA2_S6CR_EN_Values<DMA2::S6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6CRPack  = Register<0x400264A0, 32, ReadWriteMode, DMA2S6CRBase, T...> ;

  struct DMA2S6NDTRBase {} ;

  struct S6NDTR : public RegisterBase<0x400264A4, 32, ReadWriteMode>
  {
    using NDT = DMA2_S6NDTR_NDT_Values<DMA2::S6NDTR, 0, 16, ReadWriteMode, DMA2S6NDTRBase> ;
    using FieldValues = DMA2_S6NDTR_NDT_Values<DMA2::S6NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6NDTRPack  = Register<0x400264A4, 32, ReadWriteMode, DMA2S6NDTRBase, T...> ;

  struct DMA2S6PARBase {} ;

  struct S6PAR : public RegisterBase<0x400264A8, 32, ReadWriteMode>
  {
    using PA = DMA2_S6PAR_PA_Values<DMA2::S6PAR, 0, 32, ReadWriteMode, DMA2S6PARBase> ;
    using FieldValues = DMA2_S6PAR_PA_Values<DMA2::S6PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6PARPack  = Register<0x400264A8, 32, ReadWriteMode, DMA2S6PARBase, T...> ;

  struct DMA2S6M0ARBase {} ;

  struct S6M0AR : public RegisterBase<0x400264AC, 32, ReadWriteMode>
  {
    using M0A = DMA2_S6M0AR_M0A_Values<DMA2::S6M0AR, 0, 32, ReadWriteMode, DMA2S6M0ARBase> ;
    using FieldValues = DMA2_S6M0AR_M0A_Values<DMA2::S6M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6M0ARPack  = Register<0x400264AC, 32, ReadWriteMode, DMA2S6M0ARBase, T...> ;

  struct DMA2S6M1ARBase {} ;

  struct S6M1AR : public RegisterBase<0x400264B0, 32, ReadWriteMode>
  {
    using M1A = DMA2_S6M1AR_M1A_Values<DMA2::S6M1AR, 0, 32, ReadWriteMode, DMA2S6M1ARBase> ;
    using FieldValues = DMA2_S6M1AR_M1A_Values<DMA2::S6M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6M1ARPack  = Register<0x400264B0, 32, ReadWriteMode, DMA2S6M1ARBase, T...> ;

  struct DMA2S6FCRBase {} ;

  struct S6FCR : public RegisterBase<0x400264B4, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S6FCR_FEIE_Values<DMA2::S6FCR, 7, 1, ReadWriteMode, DMA2S6FCRBase> ;
    using FS = DMA2_S6FCR_FS_Values<DMA2::S6FCR, 3, 3, ReadMode, DMA2S6FCRBase> ;
    using DMDIS = DMA2_S6FCR_DMDIS_Values<DMA2::S6FCR, 2, 1, ReadWriteMode, DMA2S6FCRBase> ;
    using FTH = DMA2_S6FCR_FTH_Values<DMA2::S6FCR, 0, 2, ReadWriteMode, DMA2S6FCRBase> ;
    using FieldValues = DMA2_S6FCR_FTH_Values<DMA2::S6FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6FCRPack  = Register<0x400264B4, 32, ReadWriteMode, DMA2S6FCRBase, T...> ;

  struct DMA2S7CRBase {} ;

  struct S7CR : public RegisterBase<0x400264B8, 32, ReadWriteMode>
  {
    using CHSEL = DMA2_S7CR_CHSEL_Values<DMA2::S7CR, 25, 3, ReadWriteMode, DMA2S7CRBase> ;
    using MBURST = DMA2_S7CR_MBURST_Values<DMA2::S7CR, 23, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PBURST = DMA2_S7CR_PBURST_Values<DMA2::S7CR, 21, 2, ReadWriteMode, DMA2S7CRBase> ;
    using ACK = DMA2_S7CR_ACK_Values<DMA2::S7CR, 20, 1, ReadWriteMode, DMA2S7CRBase> ;
    using CT = DMA2_S7CR_CT_Values<DMA2::S7CR, 19, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DBM = DMA2_S7CR_DBM_Values<DMA2::S7CR, 18, 1, ReadWriteMode, DMA2S7CRBase> ;
    using PL = DMA2_S7CR_PL_Values<DMA2::S7CR, 16, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PINCOS = DMA2_S7CR_PINCOS_Values<DMA2::S7CR, 15, 1, ReadWriteMode, DMA2S7CRBase> ;
    using MSIZE = DMA2_S7CR_MSIZE_Values<DMA2::S7CR, 13, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PSIZE = DMA2_S7CR_PSIZE_Values<DMA2::S7CR, 11, 2, ReadWriteMode, DMA2S7CRBase> ;
    using MINC = DMA2_S7CR_MINC_Values<DMA2::S7CR, 10, 1, ReadWriteMode, DMA2S7CRBase> ;
    using PINC = DMA2_S7CR_PINC_Values<DMA2::S7CR, 9, 1, ReadWriteMode, DMA2S7CRBase> ;
    using CIRC = DMA2_S7CR_CIRC_Values<DMA2::S7CR, 8, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DIR = DMA2_S7CR_DIR_Values<DMA2::S7CR, 6, 2, ReadWriteMode, DMA2S7CRBase> ;
    using PFCTRL = DMA2_S7CR_PFCTRL_Values<DMA2::S7CR, 5, 1, ReadWriteMode, DMA2S7CRBase> ;
    using TCIE = DMA2_S7CR_TCIE_Values<DMA2::S7CR, 4, 1, ReadWriteMode, DMA2S7CRBase> ;
    using HTIE = DMA2_S7CR_HTIE_Values<DMA2::S7CR, 3, 1, ReadWriteMode, DMA2S7CRBase> ;
    using TEIE = DMA2_S7CR_TEIE_Values<DMA2::S7CR, 2, 1, ReadWriteMode, DMA2S7CRBase> ;
    using DMEIE = DMA2_S7CR_DMEIE_Values<DMA2::S7CR, 1, 1, ReadWriteMode, DMA2S7CRBase> ;
    using EN = DMA2_S7CR_EN_Values<DMA2::S7CR, 0, 1, ReadWriteMode, DMA2S7CRBase> ;
    using FieldValues = DMA2_S7CR_EN_Values<DMA2::S7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7CRPack  = Register<0x400264B8, 32, ReadWriteMode, DMA2S7CRBase, T...> ;

  struct DMA2S7NDTRBase {} ;

  struct S7NDTR : public RegisterBase<0x400264BC, 32, ReadWriteMode>
  {
    using NDT = DMA2_S7NDTR_NDT_Values<DMA2::S7NDTR, 0, 16, ReadWriteMode, DMA2S7NDTRBase> ;
    using FieldValues = DMA2_S7NDTR_NDT_Values<DMA2::S7NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7NDTRPack  = Register<0x400264BC, 32, ReadWriteMode, DMA2S7NDTRBase, T...> ;

  struct DMA2S7PARBase {} ;

  struct S7PAR : public RegisterBase<0x400264C0, 32, ReadWriteMode>
  {
    using PA = DMA2_S7PAR_PA_Values<DMA2::S7PAR, 0, 32, ReadWriteMode, DMA2S7PARBase> ;
    using FieldValues = DMA2_S7PAR_PA_Values<DMA2::S7PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7PARPack  = Register<0x400264C0, 32, ReadWriteMode, DMA2S7PARBase, T...> ;

  struct DMA2S7M0ARBase {} ;

  struct S7M0AR : public RegisterBase<0x400264C4, 32, ReadWriteMode>
  {
    using M0A = DMA2_S7M0AR_M0A_Values<DMA2::S7M0AR, 0, 32, ReadWriteMode, DMA2S7M0ARBase> ;
    using FieldValues = DMA2_S7M0AR_M0A_Values<DMA2::S7M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7M0ARPack  = Register<0x400264C4, 32, ReadWriteMode, DMA2S7M0ARBase, T...> ;

  struct DMA2S7M1ARBase {} ;

  struct S7M1AR : public RegisterBase<0x400264C8, 32, ReadWriteMode>
  {
    using M1A = DMA2_S7M1AR_M1A_Values<DMA2::S7M1AR, 0, 32, ReadWriteMode, DMA2S7M1ARBase> ;
    using FieldValues = DMA2_S7M1AR_M1A_Values<DMA2::S7M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7M1ARPack  = Register<0x400264C8, 32, ReadWriteMode, DMA2S7M1ARBase, T...> ;

  struct DMA2S7FCRBase {} ;

  struct S7FCR : public RegisterBase<0x400264CC, 32, ReadWriteMode>
  {
    using FEIE = DMA2_S7FCR_FEIE_Values<DMA2::S7FCR, 7, 1, ReadWriteMode, DMA2S7FCRBase> ;
    using FS = DMA2_S7FCR_FS_Values<DMA2::S7FCR, 3, 3, ReadMode, DMA2S7FCRBase> ;
    using DMDIS = DMA2_S7FCR_DMDIS_Values<DMA2::S7FCR, 2, 1, ReadWriteMode, DMA2S7FCRBase> ;
    using FTH = DMA2_S7FCR_FTH_Values<DMA2::S7FCR, 0, 2, ReadWriteMode, DMA2S7FCRBase> ;
    using FieldValues = DMA2_S7FCR_FTH_Values<DMA2::S7FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7FCRPack  = Register<0x400264CC, 32, ReadWriteMode, DMA2S7FCRBase, T...> ;

} ;

#endif //#if !defined(DMA2REGISTERS_HPP)
