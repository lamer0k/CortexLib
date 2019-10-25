/*******************************************************************************
* Filename      : dma1registers.hpp
*
* Details       : DMA controller. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(DMA1REGISTERS_HPP)
#define DMA1REGISTERS_HPP

#include "dma1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA1
{
  struct DMA1LISRBase {} ;

  struct LISR : public RegisterBase<0x40026000, 32, ReadMode>
  {
    using TCIF3 = DMA1_LISR_TCIF3_Values<DMA1::LISR, 27, 1, ReadMode, DMA1LISRBase> ;
    using HTIF3 = DMA1_LISR_HTIF3_Values<DMA1::LISR, 26, 1, ReadMode, DMA1LISRBase> ;
    using TEIF3 = DMA1_LISR_TEIF3_Values<DMA1::LISR, 25, 1, ReadMode, DMA1LISRBase> ;
    using DMEIF3 = DMA1_LISR_DMEIF3_Values<DMA1::LISR, 24, 1, ReadMode, DMA1LISRBase> ;
    using FEIF3 = DMA1_LISR_FEIF3_Values<DMA1::LISR, 22, 1, ReadMode, DMA1LISRBase> ;
    using TCIF2 = DMA1_LISR_TCIF2_Values<DMA1::LISR, 21, 1, ReadMode, DMA1LISRBase> ;
    using HTIF2 = DMA1_LISR_HTIF2_Values<DMA1::LISR, 20, 1, ReadMode, DMA1LISRBase> ;
    using TEIF2 = DMA1_LISR_TEIF2_Values<DMA1::LISR, 19, 1, ReadMode, DMA1LISRBase> ;
    using DMEIF2 = DMA1_LISR_DMEIF2_Values<DMA1::LISR, 18, 1, ReadMode, DMA1LISRBase> ;
    using FEIF2 = DMA1_LISR_FEIF2_Values<DMA1::LISR, 16, 1, ReadMode, DMA1LISRBase> ;
    using TCIF1 = DMA1_LISR_TCIF1_Values<DMA1::LISR, 11, 1, ReadMode, DMA1LISRBase> ;
    using HTIF1 = DMA1_LISR_HTIF1_Values<DMA1::LISR, 10, 1, ReadMode, DMA1LISRBase> ;
    using TEIF1 = DMA1_LISR_TEIF1_Values<DMA1::LISR, 9, 1, ReadMode, DMA1LISRBase> ;
    using DMEIF1 = DMA1_LISR_DMEIF1_Values<DMA1::LISR, 8, 1, ReadMode, DMA1LISRBase> ;
    using FEIF1 = DMA1_LISR_FEIF1_Values<DMA1::LISR, 6, 1, ReadMode, DMA1LISRBase> ;
    using TCIF0 = DMA1_LISR_TCIF0_Values<DMA1::LISR, 5, 1, ReadMode, DMA1LISRBase> ;
    using HTIF0 = DMA1_LISR_HTIF0_Values<DMA1::LISR, 4, 1, ReadMode, DMA1LISRBase> ;
    using TEIF0 = DMA1_LISR_TEIF0_Values<DMA1::LISR, 3, 1, ReadMode, DMA1LISRBase> ;
    using DMEIF0 = DMA1_LISR_DMEIF0_Values<DMA1::LISR, 2, 1, ReadMode, DMA1LISRBase> ;
    using FEIF0 = DMA1_LISR_FEIF0_Values<DMA1::LISR, 0, 1, ReadMode, DMA1LISRBase> ;
    using FieldValues = DMA1_LISR_FEIF0_Values<DMA1::LISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LISRPack  = Register<0x40026000, 32, ReadMode, DMA1LISRBase, T...> ;

  struct DMA1HISRBase {} ;

  struct HISR : public RegisterBase<0x40026004, 32, ReadMode>
  {
    using TCIF7 = DMA1_HISR_TCIF7_Values<DMA1::HISR, 27, 1, ReadMode, DMA1HISRBase> ;
    using HTIF7 = DMA1_HISR_HTIF7_Values<DMA1::HISR, 26, 1, ReadMode, DMA1HISRBase> ;
    using TEIF7 = DMA1_HISR_TEIF7_Values<DMA1::HISR, 25, 1, ReadMode, DMA1HISRBase> ;
    using DMEIF7 = DMA1_HISR_DMEIF7_Values<DMA1::HISR, 24, 1, ReadMode, DMA1HISRBase> ;
    using FEIF7 = DMA1_HISR_FEIF7_Values<DMA1::HISR, 22, 1, ReadMode, DMA1HISRBase> ;
    using TCIF6 = DMA1_HISR_TCIF6_Values<DMA1::HISR, 21, 1, ReadMode, DMA1HISRBase> ;
    using HTIF6 = DMA1_HISR_HTIF6_Values<DMA1::HISR, 20, 1, ReadMode, DMA1HISRBase> ;
    using TEIF6 = DMA1_HISR_TEIF6_Values<DMA1::HISR, 19, 1, ReadMode, DMA1HISRBase> ;
    using DMEIF6 = DMA1_HISR_DMEIF6_Values<DMA1::HISR, 18, 1, ReadMode, DMA1HISRBase> ;
    using FEIF6 = DMA1_HISR_FEIF6_Values<DMA1::HISR, 16, 1, ReadMode, DMA1HISRBase> ;
    using TCIF5 = DMA1_HISR_TCIF5_Values<DMA1::HISR, 11, 1, ReadMode, DMA1HISRBase> ;
    using HTIF5 = DMA1_HISR_HTIF5_Values<DMA1::HISR, 10, 1, ReadMode, DMA1HISRBase> ;
    using TEIF5 = DMA1_HISR_TEIF5_Values<DMA1::HISR, 9, 1, ReadMode, DMA1HISRBase> ;
    using DMEIF5 = DMA1_HISR_DMEIF5_Values<DMA1::HISR, 8, 1, ReadMode, DMA1HISRBase> ;
    using FEIF5 = DMA1_HISR_FEIF5_Values<DMA1::HISR, 6, 1, ReadMode, DMA1HISRBase> ;
    using TCIF4 = DMA1_HISR_TCIF4_Values<DMA1::HISR, 5, 1, ReadMode, DMA1HISRBase> ;
    using HTIF4 = DMA1_HISR_HTIF4_Values<DMA1::HISR, 4, 1, ReadMode, DMA1HISRBase> ;
    using TEIF4 = DMA1_HISR_TEIF4_Values<DMA1::HISR, 3, 1, ReadMode, DMA1HISRBase> ;
    using DMEIF4 = DMA1_HISR_DMEIF4_Values<DMA1::HISR, 2, 1, ReadMode, DMA1HISRBase> ;
    using FEIF4 = DMA1_HISR_FEIF4_Values<DMA1::HISR, 0, 1, ReadMode, DMA1HISRBase> ;
    using FieldValues = DMA1_HISR_FEIF4_Values<DMA1::HISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HISRPack  = Register<0x40026004, 32, ReadMode, DMA1HISRBase, T...> ;

  struct DMA1LIFCRBase {} ;

  struct LIFCR : public RegisterBase<0x40026008, 32, WriteMode>
  {
    using CTCIF3 = DMA1_LIFCR_CTCIF3_Values<DMA1::LIFCR, 27, 1, WriteMode, DMA1LIFCRBase> ;
    using CHTIF3 = DMA1_LIFCR_CHTIF3_Values<DMA1::LIFCR, 26, 1, WriteMode, DMA1LIFCRBase> ;
    using CTEIF3 = DMA1_LIFCR_CTEIF3_Values<DMA1::LIFCR, 25, 1, WriteMode, DMA1LIFCRBase> ;
    using CDMEIF3 = DMA1_LIFCR_CDMEIF3_Values<DMA1::LIFCR, 24, 1, WriteMode, DMA1LIFCRBase> ;
    using CFEIF3 = DMA1_LIFCR_CFEIF3_Values<DMA1::LIFCR, 22, 1, WriteMode, DMA1LIFCRBase> ;
    using CTCIF2 = DMA1_LIFCR_CTCIF2_Values<DMA1::LIFCR, 21, 1, WriteMode, DMA1LIFCRBase> ;
    using CHTIF2 = DMA1_LIFCR_CHTIF2_Values<DMA1::LIFCR, 20, 1, WriteMode, DMA1LIFCRBase> ;
    using CTEIF2 = DMA1_LIFCR_CTEIF2_Values<DMA1::LIFCR, 19, 1, WriteMode, DMA1LIFCRBase> ;
    using CDMEIF2 = DMA1_LIFCR_CDMEIF2_Values<DMA1::LIFCR, 18, 1, WriteMode, DMA1LIFCRBase> ;
    using CFEIF2 = DMA1_LIFCR_CFEIF2_Values<DMA1::LIFCR, 16, 1, WriteMode, DMA1LIFCRBase> ;
    using CTCIF1 = DMA1_LIFCR_CTCIF1_Values<DMA1::LIFCR, 11, 1, WriteMode, DMA1LIFCRBase> ;
    using CHTIF1 = DMA1_LIFCR_CHTIF1_Values<DMA1::LIFCR, 10, 1, WriteMode, DMA1LIFCRBase> ;
    using CTEIF1 = DMA1_LIFCR_CTEIF1_Values<DMA1::LIFCR, 9, 1, WriteMode, DMA1LIFCRBase> ;
    using CDMEIF1 = DMA1_LIFCR_CDMEIF1_Values<DMA1::LIFCR, 8, 1, WriteMode, DMA1LIFCRBase> ;
    using CFEIF1 = DMA1_LIFCR_CFEIF1_Values<DMA1::LIFCR, 6, 1, WriteMode, DMA1LIFCRBase> ;
    using CTCIF0 = DMA1_LIFCR_CTCIF0_Values<DMA1::LIFCR, 5, 1, WriteMode, DMA1LIFCRBase> ;
    using CHTIF0 = DMA1_LIFCR_CHTIF0_Values<DMA1::LIFCR, 4, 1, WriteMode, DMA1LIFCRBase> ;
    using CTEIF0 = DMA1_LIFCR_CTEIF0_Values<DMA1::LIFCR, 3, 1, WriteMode, DMA1LIFCRBase> ;
    using CDMEIF0 = DMA1_LIFCR_CDMEIF0_Values<DMA1::LIFCR, 2, 1, WriteMode, DMA1LIFCRBase> ;
    using CFEIF0 = DMA1_LIFCR_CFEIF0_Values<DMA1::LIFCR, 0, 1, WriteMode, DMA1LIFCRBase> ;
    using FieldValues = DMA1_LIFCR_CFEIF0_Values<DMA1::LIFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LIFCRPack  = Register<0x40026008, 32, WriteMode, DMA1LIFCRBase, T...> ;

  struct DMA1HIFCRBase {} ;

  struct HIFCR : public RegisterBase<0x4002600C, 32, WriteMode>
  {
    using CTCIF7 = DMA1_HIFCR_CTCIF7_Values<DMA1::HIFCR, 27, 1, WriteMode, DMA1HIFCRBase> ;
    using CHTIF7 = DMA1_HIFCR_CHTIF7_Values<DMA1::HIFCR, 26, 1, WriteMode, DMA1HIFCRBase> ;
    using CTEIF7 = DMA1_HIFCR_CTEIF7_Values<DMA1::HIFCR, 25, 1, WriteMode, DMA1HIFCRBase> ;
    using CDMEIF7 = DMA1_HIFCR_CDMEIF7_Values<DMA1::HIFCR, 24, 1, WriteMode, DMA1HIFCRBase> ;
    using CFEIF7 = DMA1_HIFCR_CFEIF7_Values<DMA1::HIFCR, 22, 1, WriteMode, DMA1HIFCRBase> ;
    using CTCIF6 = DMA1_HIFCR_CTCIF6_Values<DMA1::HIFCR, 21, 1, WriteMode, DMA1HIFCRBase> ;
    using CHTIF6 = DMA1_HIFCR_CHTIF6_Values<DMA1::HIFCR, 20, 1, WriteMode, DMA1HIFCRBase> ;
    using CTEIF6 = DMA1_HIFCR_CTEIF6_Values<DMA1::HIFCR, 19, 1, WriteMode, DMA1HIFCRBase> ;
    using CDMEIF6 = DMA1_HIFCR_CDMEIF6_Values<DMA1::HIFCR, 18, 1, WriteMode, DMA1HIFCRBase> ;
    using CFEIF6 = DMA1_HIFCR_CFEIF6_Values<DMA1::HIFCR, 16, 1, WriteMode, DMA1HIFCRBase> ;
    using CTCIF5 = DMA1_HIFCR_CTCIF5_Values<DMA1::HIFCR, 11, 1, WriteMode, DMA1HIFCRBase> ;
    using CHTIF5 = DMA1_HIFCR_CHTIF5_Values<DMA1::HIFCR, 10, 1, WriteMode, DMA1HIFCRBase> ;
    using CTEIF5 = DMA1_HIFCR_CTEIF5_Values<DMA1::HIFCR, 9, 1, WriteMode, DMA1HIFCRBase> ;
    using CDMEIF5 = DMA1_HIFCR_CDMEIF5_Values<DMA1::HIFCR, 8, 1, WriteMode, DMA1HIFCRBase> ;
    using CFEIF5 = DMA1_HIFCR_CFEIF5_Values<DMA1::HIFCR, 6, 1, WriteMode, DMA1HIFCRBase> ;
    using CTCIF4 = DMA1_HIFCR_CTCIF4_Values<DMA1::HIFCR, 5, 1, WriteMode, DMA1HIFCRBase> ;
    using CHTIF4 = DMA1_HIFCR_CHTIF4_Values<DMA1::HIFCR, 4, 1, WriteMode, DMA1HIFCRBase> ;
    using CTEIF4 = DMA1_HIFCR_CTEIF4_Values<DMA1::HIFCR, 3, 1, WriteMode, DMA1HIFCRBase> ;
    using CDMEIF4 = DMA1_HIFCR_CDMEIF4_Values<DMA1::HIFCR, 2, 1, WriteMode, DMA1HIFCRBase> ;
    using CFEIF4 = DMA1_HIFCR_CFEIF4_Values<DMA1::HIFCR, 0, 1, WriteMode, DMA1HIFCRBase> ;
    using FieldValues = DMA1_HIFCR_CFEIF4_Values<DMA1::HIFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HIFCRPack  = Register<0x4002600C, 32, WriteMode, DMA1HIFCRBase, T...> ;

  struct DMA1S0CRBase {} ;

  struct S0CR : public RegisterBase<0x40026010, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S0CR_CHSEL_Values<DMA1::S0CR, 25, 3, ReadWriteMode, DMA1S0CRBase> ;
    using MBURST = DMA1_S0CR_MBURST_Values<DMA1::S0CR, 23, 2, ReadWriteMode, DMA1S0CRBase> ;
    using PBURST = DMA1_S0CR_PBURST_Values<DMA1::S0CR, 21, 2, ReadWriteMode, DMA1S0CRBase> ;
    using CT = DMA1_S0CR_CT_Values<DMA1::S0CR, 19, 1, ReadWriteMode, DMA1S0CRBase> ;
    using DBM = DMA1_S0CR_DBM_Values<DMA1::S0CR, 18, 1, ReadWriteMode, DMA1S0CRBase> ;
    using PL = DMA1_S0CR_PL_Values<DMA1::S0CR, 16, 2, ReadWriteMode, DMA1S0CRBase> ;
    using PINCOS = DMA1_S0CR_PINCOS_Values<DMA1::S0CR, 15, 1, ReadWriteMode, DMA1S0CRBase> ;
    using MSIZE = DMA1_S0CR_MSIZE_Values<DMA1::S0CR, 13, 2, ReadWriteMode, DMA1S0CRBase> ;
    using PSIZE = DMA1_S0CR_PSIZE_Values<DMA1::S0CR, 11, 2, ReadWriteMode, DMA1S0CRBase> ;
    using MINC = DMA1_S0CR_MINC_Values<DMA1::S0CR, 10, 1, ReadWriteMode, DMA1S0CRBase> ;
    using PINC = DMA1_S0CR_PINC_Values<DMA1::S0CR, 9, 1, ReadWriteMode, DMA1S0CRBase> ;
    using CIRC = DMA1_S0CR_CIRC_Values<DMA1::S0CR, 8, 1, ReadWriteMode, DMA1S0CRBase> ;
    using DIR = DMA1_S0CR_DIR_Values<DMA1::S0CR, 6, 2, ReadWriteMode, DMA1S0CRBase> ;
    using PFCTRL = DMA1_S0CR_PFCTRL_Values<DMA1::S0CR, 5, 1, ReadWriteMode, DMA1S0CRBase> ;
    using TCIE = DMA1_S0CR_TCIE_Values<DMA1::S0CR, 4, 1, ReadWriteMode, DMA1S0CRBase> ;
    using HTIE = DMA1_S0CR_HTIE_Values<DMA1::S0CR, 3, 1, ReadWriteMode, DMA1S0CRBase> ;
    using TEIE = DMA1_S0CR_TEIE_Values<DMA1::S0CR, 2, 1, ReadWriteMode, DMA1S0CRBase> ;
    using DMEIE = DMA1_S0CR_DMEIE_Values<DMA1::S0CR, 1, 1, ReadWriteMode, DMA1S0CRBase> ;
    using EN = DMA1_S0CR_EN_Values<DMA1::S0CR, 0, 1, ReadWriteMode, DMA1S0CRBase> ;
    using FieldValues = DMA1_S0CR_EN_Values<DMA1::S0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0CRPack  = Register<0x40026010, 32, ReadWriteMode, DMA1S0CRBase, T...> ;

  struct DMA1S0NDTRBase {} ;

  struct S0NDTR : public RegisterBase<0x40026014, 32, ReadWriteMode>
  {
    using NDT = DMA1_S0NDTR_NDT_Values<DMA1::S0NDTR, 0, 16, ReadWriteMode, DMA1S0NDTRBase> ;
    using FieldValues = DMA1_S0NDTR_NDT_Values<DMA1::S0NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0NDTRPack  = Register<0x40026014, 32, ReadWriteMode, DMA1S0NDTRBase, T...> ;

  struct DMA1S0PARBase {} ;

  struct S0PAR : public RegisterBase<0x40026018, 32, ReadWriteMode>
  {
    using PA = DMA1_S0PAR_PA_Values<DMA1::S0PAR, 0, 32, ReadWriteMode, DMA1S0PARBase> ;
    using FieldValues = DMA1_S0PAR_PA_Values<DMA1::S0PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0PARPack  = Register<0x40026018, 32, ReadWriteMode, DMA1S0PARBase, T...> ;

  struct DMA1S0M0ARBase {} ;

  struct S0M0AR : public RegisterBase<0x4002601C, 32, ReadWriteMode>
  {
    using M0A = DMA1_S0M0AR_M0A_Values<DMA1::S0M0AR, 0, 32, ReadWriteMode, DMA1S0M0ARBase> ;
    using FieldValues = DMA1_S0M0AR_M0A_Values<DMA1::S0M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0M0ARPack  = Register<0x4002601C, 32, ReadWriteMode, DMA1S0M0ARBase, T...> ;

  struct DMA1S0M1ARBase {} ;

  struct S0M1AR : public RegisterBase<0x40026020, 32, ReadWriteMode>
  {
    using M1A = DMA1_S0M1AR_M1A_Values<DMA1::S0M1AR, 0, 32, ReadWriteMode, DMA1S0M1ARBase> ;
    using FieldValues = DMA1_S0M1AR_M1A_Values<DMA1::S0M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0M1ARPack  = Register<0x40026020, 32, ReadWriteMode, DMA1S0M1ARBase, T...> ;

  struct DMA1S0FCRBase {} ;

  struct S0FCR : public RegisterBase<0x40026024, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S0FCR_FEIE_Values<DMA1::S0FCR, 7, 1, ReadWriteMode, DMA1S0FCRBase> ;
    using FS = DMA1_S0FCR_FS_Values<DMA1::S0FCR, 3, 3, ReadMode, DMA1S0FCRBase> ;
    using DMDIS = DMA1_S0FCR_DMDIS_Values<DMA1::S0FCR, 2, 1, ReadWriteMode, DMA1S0FCRBase> ;
    using FTH = DMA1_S0FCR_FTH_Values<DMA1::S0FCR, 0, 2, ReadWriteMode, DMA1S0FCRBase> ;
    using FieldValues = DMA1_S0FCR_FTH_Values<DMA1::S0FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S0FCRPack  = Register<0x40026024, 32, ReadWriteMode, DMA1S0FCRBase, T...> ;

  struct DMA1S1CRBase {} ;

  struct S1CR : public RegisterBase<0x40026028, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S1CR_CHSEL_Values<DMA1::S1CR, 25, 3, ReadWriteMode, DMA1S1CRBase> ;
    using MBURST = DMA1_S1CR_MBURST_Values<DMA1::S1CR, 23, 2, ReadWriteMode, DMA1S1CRBase> ;
    using PBURST = DMA1_S1CR_PBURST_Values<DMA1::S1CR, 21, 2, ReadWriteMode, DMA1S1CRBase> ;
    using ACK = DMA1_S1CR_ACK_Values<DMA1::S1CR, 20, 1, ReadWriteMode, DMA1S1CRBase> ;
    using CT = DMA1_S1CR_CT_Values<DMA1::S1CR, 19, 1, ReadWriteMode, DMA1S1CRBase> ;
    using DBM = DMA1_S1CR_DBM_Values<DMA1::S1CR, 18, 1, ReadWriteMode, DMA1S1CRBase> ;
    using PL = DMA1_S1CR_PL_Values<DMA1::S1CR, 16, 2, ReadWriteMode, DMA1S1CRBase> ;
    using PINCOS = DMA1_S1CR_PINCOS_Values<DMA1::S1CR, 15, 1, ReadWriteMode, DMA1S1CRBase> ;
    using MSIZE = DMA1_S1CR_MSIZE_Values<DMA1::S1CR, 13, 2, ReadWriteMode, DMA1S1CRBase> ;
    using PSIZE = DMA1_S1CR_PSIZE_Values<DMA1::S1CR, 11, 2, ReadWriteMode, DMA1S1CRBase> ;
    using MINC = DMA1_S1CR_MINC_Values<DMA1::S1CR, 10, 1, ReadWriteMode, DMA1S1CRBase> ;
    using PINC = DMA1_S1CR_PINC_Values<DMA1::S1CR, 9, 1, ReadWriteMode, DMA1S1CRBase> ;
    using CIRC = DMA1_S1CR_CIRC_Values<DMA1::S1CR, 8, 1, ReadWriteMode, DMA1S1CRBase> ;
    using DIR = DMA1_S1CR_DIR_Values<DMA1::S1CR, 6, 2, ReadWriteMode, DMA1S1CRBase> ;
    using PFCTRL = DMA1_S1CR_PFCTRL_Values<DMA1::S1CR, 5, 1, ReadWriteMode, DMA1S1CRBase> ;
    using TCIE = DMA1_S1CR_TCIE_Values<DMA1::S1CR, 4, 1, ReadWriteMode, DMA1S1CRBase> ;
    using HTIE = DMA1_S1CR_HTIE_Values<DMA1::S1CR, 3, 1, ReadWriteMode, DMA1S1CRBase> ;
    using TEIE = DMA1_S1CR_TEIE_Values<DMA1::S1CR, 2, 1, ReadWriteMode, DMA1S1CRBase> ;
    using DMEIE = DMA1_S1CR_DMEIE_Values<DMA1::S1CR, 1, 1, ReadWriteMode, DMA1S1CRBase> ;
    using EN = DMA1_S1CR_EN_Values<DMA1::S1CR, 0, 1, ReadWriteMode, DMA1S1CRBase> ;
    using FieldValues = DMA1_S1CR_EN_Values<DMA1::S1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1CRPack  = Register<0x40026028, 32, ReadWriteMode, DMA1S1CRBase, T...> ;

  struct DMA1S1NDTRBase {} ;

  struct S1NDTR : public RegisterBase<0x4002602C, 32, ReadWriteMode>
  {
    using NDT = DMA1_S1NDTR_NDT_Values<DMA1::S1NDTR, 0, 16, ReadWriteMode, DMA1S1NDTRBase> ;
    using FieldValues = DMA1_S1NDTR_NDT_Values<DMA1::S1NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1NDTRPack  = Register<0x4002602C, 32, ReadWriteMode, DMA1S1NDTRBase, T...> ;

  struct DMA1S1PARBase {} ;

  struct S1PAR : public RegisterBase<0x40026030, 32, ReadWriteMode>
  {
    using PA = DMA1_S1PAR_PA_Values<DMA1::S1PAR, 0, 32, ReadWriteMode, DMA1S1PARBase> ;
    using FieldValues = DMA1_S1PAR_PA_Values<DMA1::S1PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1PARPack  = Register<0x40026030, 32, ReadWriteMode, DMA1S1PARBase, T...> ;

  struct DMA1S1M0ARBase {} ;

  struct S1M0AR : public RegisterBase<0x40026034, 32, ReadWriteMode>
  {
    using M0A = DMA1_S1M0AR_M0A_Values<DMA1::S1M0AR, 0, 32, ReadWriteMode, DMA1S1M0ARBase> ;
    using FieldValues = DMA1_S1M0AR_M0A_Values<DMA1::S1M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1M0ARPack  = Register<0x40026034, 32, ReadWriteMode, DMA1S1M0ARBase, T...> ;

  struct DMA1S1M1ARBase {} ;

  struct S1M1AR : public RegisterBase<0x40026038, 32, ReadWriteMode>
  {
    using M1A = DMA1_S1M1AR_M1A_Values<DMA1::S1M1AR, 0, 32, ReadWriteMode, DMA1S1M1ARBase> ;
    using FieldValues = DMA1_S1M1AR_M1A_Values<DMA1::S1M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1M1ARPack  = Register<0x40026038, 32, ReadWriteMode, DMA1S1M1ARBase, T...> ;

  struct DMA1S1FCRBase {} ;

  struct S1FCR : public RegisterBase<0x4002603C, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S1FCR_FEIE_Values<DMA1::S1FCR, 7, 1, ReadWriteMode, DMA1S1FCRBase> ;
    using FS = DMA1_S1FCR_FS_Values<DMA1::S1FCR, 3, 3, ReadMode, DMA1S1FCRBase> ;
    using DMDIS = DMA1_S1FCR_DMDIS_Values<DMA1::S1FCR, 2, 1, ReadWriteMode, DMA1S1FCRBase> ;
    using FTH = DMA1_S1FCR_FTH_Values<DMA1::S1FCR, 0, 2, ReadWriteMode, DMA1S1FCRBase> ;
    using FieldValues = DMA1_S1FCR_FTH_Values<DMA1::S1FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S1FCRPack  = Register<0x4002603C, 32, ReadWriteMode, DMA1S1FCRBase, T...> ;

  struct DMA1S2CRBase {} ;

  struct S2CR : public RegisterBase<0x40026040, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S2CR_CHSEL_Values<DMA1::S2CR, 25, 3, ReadWriteMode, DMA1S2CRBase> ;
    using MBURST = DMA1_S2CR_MBURST_Values<DMA1::S2CR, 23, 2, ReadWriteMode, DMA1S2CRBase> ;
    using PBURST = DMA1_S2CR_PBURST_Values<DMA1::S2CR, 21, 2, ReadWriteMode, DMA1S2CRBase> ;
    using ACK = DMA1_S2CR_ACK_Values<DMA1::S2CR, 20, 1, ReadWriteMode, DMA1S2CRBase> ;
    using CT = DMA1_S2CR_CT_Values<DMA1::S2CR, 19, 1, ReadWriteMode, DMA1S2CRBase> ;
    using DBM = DMA1_S2CR_DBM_Values<DMA1::S2CR, 18, 1, ReadWriteMode, DMA1S2CRBase> ;
    using PL = DMA1_S2CR_PL_Values<DMA1::S2CR, 16, 2, ReadWriteMode, DMA1S2CRBase> ;
    using PINCOS = DMA1_S2CR_PINCOS_Values<DMA1::S2CR, 15, 1, ReadWriteMode, DMA1S2CRBase> ;
    using MSIZE = DMA1_S2CR_MSIZE_Values<DMA1::S2CR, 13, 2, ReadWriteMode, DMA1S2CRBase> ;
    using PSIZE = DMA1_S2CR_PSIZE_Values<DMA1::S2CR, 11, 2, ReadWriteMode, DMA1S2CRBase> ;
    using MINC = DMA1_S2CR_MINC_Values<DMA1::S2CR, 10, 1, ReadWriteMode, DMA1S2CRBase> ;
    using PINC = DMA1_S2CR_PINC_Values<DMA1::S2CR, 9, 1, ReadWriteMode, DMA1S2CRBase> ;
    using CIRC = DMA1_S2CR_CIRC_Values<DMA1::S2CR, 8, 1, ReadWriteMode, DMA1S2CRBase> ;
    using DIR = DMA1_S2CR_DIR_Values<DMA1::S2CR, 6, 2, ReadWriteMode, DMA1S2CRBase> ;
    using PFCTRL = DMA1_S2CR_PFCTRL_Values<DMA1::S2CR, 5, 1, ReadWriteMode, DMA1S2CRBase> ;
    using TCIE = DMA1_S2CR_TCIE_Values<DMA1::S2CR, 4, 1, ReadWriteMode, DMA1S2CRBase> ;
    using HTIE = DMA1_S2CR_HTIE_Values<DMA1::S2CR, 3, 1, ReadWriteMode, DMA1S2CRBase> ;
    using TEIE = DMA1_S2CR_TEIE_Values<DMA1::S2CR, 2, 1, ReadWriteMode, DMA1S2CRBase> ;
    using DMEIE = DMA1_S2CR_DMEIE_Values<DMA1::S2CR, 1, 1, ReadWriteMode, DMA1S2CRBase> ;
    using EN = DMA1_S2CR_EN_Values<DMA1::S2CR, 0, 1, ReadWriteMode, DMA1S2CRBase> ;
    using FieldValues = DMA1_S2CR_EN_Values<DMA1::S2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2CRPack  = Register<0x40026040, 32, ReadWriteMode, DMA1S2CRBase, T...> ;

  struct DMA1S2NDTRBase {} ;

  struct S2NDTR : public RegisterBase<0x40026044, 32, ReadWriteMode>
  {
    using NDT = DMA1_S2NDTR_NDT_Values<DMA1::S2NDTR, 0, 16, ReadWriteMode, DMA1S2NDTRBase> ;
    using FieldValues = DMA1_S2NDTR_NDT_Values<DMA1::S2NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2NDTRPack  = Register<0x40026044, 32, ReadWriteMode, DMA1S2NDTRBase, T...> ;

  struct DMA1S2PARBase {} ;

  struct S2PAR : public RegisterBase<0x40026048, 32, ReadWriteMode>
  {
    using PA = DMA1_S2PAR_PA_Values<DMA1::S2PAR, 0, 32, ReadWriteMode, DMA1S2PARBase> ;
    using FieldValues = DMA1_S2PAR_PA_Values<DMA1::S2PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2PARPack  = Register<0x40026048, 32, ReadWriteMode, DMA1S2PARBase, T...> ;

  struct DMA1S2M0ARBase {} ;

  struct S2M0AR : public RegisterBase<0x4002604C, 32, ReadWriteMode>
  {
    using M0A = DMA1_S2M0AR_M0A_Values<DMA1::S2M0AR, 0, 32, ReadWriteMode, DMA1S2M0ARBase> ;
    using FieldValues = DMA1_S2M0AR_M0A_Values<DMA1::S2M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2M0ARPack  = Register<0x4002604C, 32, ReadWriteMode, DMA1S2M0ARBase, T...> ;

  struct DMA1S2M1ARBase {} ;

  struct S2M1AR : public RegisterBase<0x40026050, 32, ReadWriteMode>
  {
    using M1A = DMA1_S2M1AR_M1A_Values<DMA1::S2M1AR, 0, 32, ReadWriteMode, DMA1S2M1ARBase> ;
    using FieldValues = DMA1_S2M1AR_M1A_Values<DMA1::S2M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2M1ARPack  = Register<0x40026050, 32, ReadWriteMode, DMA1S2M1ARBase, T...> ;

  struct DMA1S2FCRBase {} ;

  struct S2FCR : public RegisterBase<0x40026054, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S2FCR_FEIE_Values<DMA1::S2FCR, 7, 1, ReadWriteMode, DMA1S2FCRBase> ;
    using FS = DMA1_S2FCR_FS_Values<DMA1::S2FCR, 3, 3, ReadMode, DMA1S2FCRBase> ;
    using DMDIS = DMA1_S2FCR_DMDIS_Values<DMA1::S2FCR, 2, 1, ReadWriteMode, DMA1S2FCRBase> ;
    using FTH = DMA1_S2FCR_FTH_Values<DMA1::S2FCR, 0, 2, ReadWriteMode, DMA1S2FCRBase> ;
    using FieldValues = DMA1_S2FCR_FTH_Values<DMA1::S2FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S2FCRPack  = Register<0x40026054, 32, ReadWriteMode, DMA1S2FCRBase, T...> ;

  struct DMA1S3CRBase {} ;

  struct S3CR : public RegisterBase<0x40026058, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S3CR_CHSEL_Values<DMA1::S3CR, 25, 3, ReadWriteMode, DMA1S3CRBase> ;
    using MBURST = DMA1_S3CR_MBURST_Values<DMA1::S3CR, 23, 2, ReadWriteMode, DMA1S3CRBase> ;
    using PBURST = DMA1_S3CR_PBURST_Values<DMA1::S3CR, 21, 2, ReadWriteMode, DMA1S3CRBase> ;
    using ACK = DMA1_S3CR_ACK_Values<DMA1::S3CR, 20, 1, ReadWriteMode, DMA1S3CRBase> ;
    using CT = DMA1_S3CR_CT_Values<DMA1::S3CR, 19, 1, ReadWriteMode, DMA1S3CRBase> ;
    using DBM = DMA1_S3CR_DBM_Values<DMA1::S3CR, 18, 1, ReadWriteMode, DMA1S3CRBase> ;
    using PL = DMA1_S3CR_PL_Values<DMA1::S3CR, 16, 2, ReadWriteMode, DMA1S3CRBase> ;
    using PINCOS = DMA1_S3CR_PINCOS_Values<DMA1::S3CR, 15, 1, ReadWriteMode, DMA1S3CRBase> ;
    using MSIZE = DMA1_S3CR_MSIZE_Values<DMA1::S3CR, 13, 2, ReadWriteMode, DMA1S3CRBase> ;
    using PSIZE = DMA1_S3CR_PSIZE_Values<DMA1::S3CR, 11, 2, ReadWriteMode, DMA1S3CRBase> ;
    using MINC = DMA1_S3CR_MINC_Values<DMA1::S3CR, 10, 1, ReadWriteMode, DMA1S3CRBase> ;
    using PINC = DMA1_S3CR_PINC_Values<DMA1::S3CR, 9, 1, ReadWriteMode, DMA1S3CRBase> ;
    using CIRC = DMA1_S3CR_CIRC_Values<DMA1::S3CR, 8, 1, ReadWriteMode, DMA1S3CRBase> ;
    using DIR = DMA1_S3CR_DIR_Values<DMA1::S3CR, 6, 2, ReadWriteMode, DMA1S3CRBase> ;
    using PFCTRL = DMA1_S3CR_PFCTRL_Values<DMA1::S3CR, 5, 1, ReadWriteMode, DMA1S3CRBase> ;
    using TCIE = DMA1_S3CR_TCIE_Values<DMA1::S3CR, 4, 1, ReadWriteMode, DMA1S3CRBase> ;
    using HTIE = DMA1_S3CR_HTIE_Values<DMA1::S3CR, 3, 1, ReadWriteMode, DMA1S3CRBase> ;
    using TEIE = DMA1_S3CR_TEIE_Values<DMA1::S3CR, 2, 1, ReadWriteMode, DMA1S3CRBase> ;
    using DMEIE = DMA1_S3CR_DMEIE_Values<DMA1::S3CR, 1, 1, ReadWriteMode, DMA1S3CRBase> ;
    using EN = DMA1_S3CR_EN_Values<DMA1::S3CR, 0, 1, ReadWriteMode, DMA1S3CRBase> ;
    using FieldValues = DMA1_S3CR_EN_Values<DMA1::S3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3CRPack  = Register<0x40026058, 32, ReadWriteMode, DMA1S3CRBase, T...> ;

  struct DMA1S3NDTRBase {} ;

  struct S3NDTR : public RegisterBase<0x4002605C, 32, ReadWriteMode>
  {
    using NDT = DMA1_S3NDTR_NDT_Values<DMA1::S3NDTR, 0, 16, ReadWriteMode, DMA1S3NDTRBase> ;
    using FieldValues = DMA1_S3NDTR_NDT_Values<DMA1::S3NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3NDTRPack  = Register<0x4002605C, 32, ReadWriteMode, DMA1S3NDTRBase, T...> ;

  struct DMA1S3PARBase {} ;

  struct S3PAR : public RegisterBase<0x40026060, 32, ReadWriteMode>
  {
    using PA = DMA1_S3PAR_PA_Values<DMA1::S3PAR, 0, 32, ReadWriteMode, DMA1S3PARBase> ;
    using FieldValues = DMA1_S3PAR_PA_Values<DMA1::S3PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3PARPack  = Register<0x40026060, 32, ReadWriteMode, DMA1S3PARBase, T...> ;

  struct DMA1S3M0ARBase {} ;

  struct S3M0AR : public RegisterBase<0x40026064, 32, ReadWriteMode>
  {
    using M0A = DMA1_S3M0AR_M0A_Values<DMA1::S3M0AR, 0, 32, ReadWriteMode, DMA1S3M0ARBase> ;
    using FieldValues = DMA1_S3M0AR_M0A_Values<DMA1::S3M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3M0ARPack  = Register<0x40026064, 32, ReadWriteMode, DMA1S3M0ARBase, T...> ;

  struct DMA1S3M1ARBase {} ;

  struct S3M1AR : public RegisterBase<0x40026068, 32, ReadWriteMode>
  {
    using M1A = DMA1_S3M1AR_M1A_Values<DMA1::S3M1AR, 0, 32, ReadWriteMode, DMA1S3M1ARBase> ;
    using FieldValues = DMA1_S3M1AR_M1A_Values<DMA1::S3M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3M1ARPack  = Register<0x40026068, 32, ReadWriteMode, DMA1S3M1ARBase, T...> ;

  struct DMA1S3FCRBase {} ;

  struct S3FCR : public RegisterBase<0x4002606C, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S3FCR_FEIE_Values<DMA1::S3FCR, 7, 1, ReadWriteMode, DMA1S3FCRBase> ;
    using FS = DMA1_S3FCR_FS_Values<DMA1::S3FCR, 3, 3, ReadMode, DMA1S3FCRBase> ;
    using DMDIS = DMA1_S3FCR_DMDIS_Values<DMA1::S3FCR, 2, 1, ReadWriteMode, DMA1S3FCRBase> ;
    using FTH = DMA1_S3FCR_FTH_Values<DMA1::S3FCR, 0, 2, ReadWriteMode, DMA1S3FCRBase> ;
    using FieldValues = DMA1_S3FCR_FTH_Values<DMA1::S3FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S3FCRPack  = Register<0x4002606C, 32, ReadWriteMode, DMA1S3FCRBase, T...> ;

  struct DMA1S4CRBase {} ;

  struct S4CR : public RegisterBase<0x40026070, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S4CR_CHSEL_Values<DMA1::S4CR, 25, 3, ReadWriteMode, DMA1S4CRBase> ;
    using MBURST = DMA1_S4CR_MBURST_Values<DMA1::S4CR, 23, 2, ReadWriteMode, DMA1S4CRBase> ;
    using PBURST = DMA1_S4CR_PBURST_Values<DMA1::S4CR, 21, 2, ReadWriteMode, DMA1S4CRBase> ;
    using ACK = DMA1_S4CR_ACK_Values<DMA1::S4CR, 20, 1, ReadWriteMode, DMA1S4CRBase> ;
    using CT = DMA1_S4CR_CT_Values<DMA1::S4CR, 19, 1, ReadWriteMode, DMA1S4CRBase> ;
    using DBM = DMA1_S4CR_DBM_Values<DMA1::S4CR, 18, 1, ReadWriteMode, DMA1S4CRBase> ;
    using PL = DMA1_S4CR_PL_Values<DMA1::S4CR, 16, 2, ReadWriteMode, DMA1S4CRBase> ;
    using PINCOS = DMA1_S4CR_PINCOS_Values<DMA1::S4CR, 15, 1, ReadWriteMode, DMA1S4CRBase> ;
    using MSIZE = DMA1_S4CR_MSIZE_Values<DMA1::S4CR, 13, 2, ReadWriteMode, DMA1S4CRBase> ;
    using PSIZE = DMA1_S4CR_PSIZE_Values<DMA1::S4CR, 11, 2, ReadWriteMode, DMA1S4CRBase> ;
    using MINC = DMA1_S4CR_MINC_Values<DMA1::S4CR, 10, 1, ReadWriteMode, DMA1S4CRBase> ;
    using PINC = DMA1_S4CR_PINC_Values<DMA1::S4CR, 9, 1, ReadWriteMode, DMA1S4CRBase> ;
    using CIRC = DMA1_S4CR_CIRC_Values<DMA1::S4CR, 8, 1, ReadWriteMode, DMA1S4CRBase> ;
    using DIR = DMA1_S4CR_DIR_Values<DMA1::S4CR, 6, 2, ReadWriteMode, DMA1S4CRBase> ;
    using PFCTRL = DMA1_S4CR_PFCTRL_Values<DMA1::S4CR, 5, 1, ReadWriteMode, DMA1S4CRBase> ;
    using TCIE = DMA1_S4CR_TCIE_Values<DMA1::S4CR, 4, 1, ReadWriteMode, DMA1S4CRBase> ;
    using HTIE = DMA1_S4CR_HTIE_Values<DMA1::S4CR, 3, 1, ReadWriteMode, DMA1S4CRBase> ;
    using TEIE = DMA1_S4CR_TEIE_Values<DMA1::S4CR, 2, 1, ReadWriteMode, DMA1S4CRBase> ;
    using DMEIE = DMA1_S4CR_DMEIE_Values<DMA1::S4CR, 1, 1, ReadWriteMode, DMA1S4CRBase> ;
    using EN = DMA1_S4CR_EN_Values<DMA1::S4CR, 0, 1, ReadWriteMode, DMA1S4CRBase> ;
    using FieldValues = DMA1_S4CR_EN_Values<DMA1::S4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4CRPack  = Register<0x40026070, 32, ReadWriteMode, DMA1S4CRBase, T...> ;

  struct DMA1S4NDTRBase {} ;

  struct S4NDTR : public RegisterBase<0x40026074, 32, ReadWriteMode>
  {
    using NDT = DMA1_S4NDTR_NDT_Values<DMA1::S4NDTR, 0, 16, ReadWriteMode, DMA1S4NDTRBase> ;
    using FieldValues = DMA1_S4NDTR_NDT_Values<DMA1::S4NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4NDTRPack  = Register<0x40026074, 32, ReadWriteMode, DMA1S4NDTRBase, T...> ;

  struct DMA1S4PARBase {} ;

  struct S4PAR : public RegisterBase<0x40026078, 32, ReadWriteMode>
  {
    using PA = DMA1_S4PAR_PA_Values<DMA1::S4PAR, 0, 32, ReadWriteMode, DMA1S4PARBase> ;
    using FieldValues = DMA1_S4PAR_PA_Values<DMA1::S4PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4PARPack  = Register<0x40026078, 32, ReadWriteMode, DMA1S4PARBase, T...> ;

  struct DMA1S4M0ARBase {} ;

  struct S4M0AR : public RegisterBase<0x4002607C, 32, ReadWriteMode>
  {
    using M0A = DMA1_S4M0AR_M0A_Values<DMA1::S4M0AR, 0, 32, ReadWriteMode, DMA1S4M0ARBase> ;
    using FieldValues = DMA1_S4M0AR_M0A_Values<DMA1::S4M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4M0ARPack  = Register<0x4002607C, 32, ReadWriteMode, DMA1S4M0ARBase, T...> ;

  struct DMA1S4M1ARBase {} ;

  struct S4M1AR : public RegisterBase<0x40026080, 32, ReadWriteMode>
  {
    using M1A = DMA1_S4M1AR_M1A_Values<DMA1::S4M1AR, 0, 32, ReadWriteMode, DMA1S4M1ARBase> ;
    using FieldValues = DMA1_S4M1AR_M1A_Values<DMA1::S4M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4M1ARPack  = Register<0x40026080, 32, ReadWriteMode, DMA1S4M1ARBase, T...> ;

  struct DMA1S4FCRBase {} ;

  struct S4FCR : public RegisterBase<0x40026084, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S4FCR_FEIE_Values<DMA1::S4FCR, 7, 1, ReadWriteMode, DMA1S4FCRBase> ;
    using FS = DMA1_S4FCR_FS_Values<DMA1::S4FCR, 3, 3, ReadMode, DMA1S4FCRBase> ;
    using DMDIS = DMA1_S4FCR_DMDIS_Values<DMA1::S4FCR, 2, 1, ReadWriteMode, DMA1S4FCRBase> ;
    using FTH = DMA1_S4FCR_FTH_Values<DMA1::S4FCR, 0, 2, ReadWriteMode, DMA1S4FCRBase> ;
    using FieldValues = DMA1_S4FCR_FTH_Values<DMA1::S4FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S4FCRPack  = Register<0x40026084, 32, ReadWriteMode, DMA1S4FCRBase, T...> ;

  struct DMA1S5CRBase {} ;

  struct S5CR : public RegisterBase<0x40026088, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S5CR_CHSEL_Values<DMA1::S5CR, 25, 3, ReadWriteMode, DMA1S5CRBase> ;
    using MBURST = DMA1_S5CR_MBURST_Values<DMA1::S5CR, 23, 2, ReadWriteMode, DMA1S5CRBase> ;
    using PBURST = DMA1_S5CR_PBURST_Values<DMA1::S5CR, 21, 2, ReadWriteMode, DMA1S5CRBase> ;
    using ACK = DMA1_S5CR_ACK_Values<DMA1::S5CR, 20, 1, ReadWriteMode, DMA1S5CRBase> ;
    using CT = DMA1_S5CR_CT_Values<DMA1::S5CR, 19, 1, ReadWriteMode, DMA1S5CRBase> ;
    using DBM = DMA1_S5CR_DBM_Values<DMA1::S5CR, 18, 1, ReadWriteMode, DMA1S5CRBase> ;
    using PL = DMA1_S5CR_PL_Values<DMA1::S5CR, 16, 2, ReadWriteMode, DMA1S5CRBase> ;
    using PINCOS = DMA1_S5CR_PINCOS_Values<DMA1::S5CR, 15, 1, ReadWriteMode, DMA1S5CRBase> ;
    using MSIZE = DMA1_S5CR_MSIZE_Values<DMA1::S5CR, 13, 2, ReadWriteMode, DMA1S5CRBase> ;
    using PSIZE = DMA1_S5CR_PSIZE_Values<DMA1::S5CR, 11, 2, ReadWriteMode, DMA1S5CRBase> ;
    using MINC = DMA1_S5CR_MINC_Values<DMA1::S5CR, 10, 1, ReadWriteMode, DMA1S5CRBase> ;
    using PINC = DMA1_S5CR_PINC_Values<DMA1::S5CR, 9, 1, ReadWriteMode, DMA1S5CRBase> ;
    using CIRC = DMA1_S5CR_CIRC_Values<DMA1::S5CR, 8, 1, ReadWriteMode, DMA1S5CRBase> ;
    using DIR = DMA1_S5CR_DIR_Values<DMA1::S5CR, 6, 2, ReadWriteMode, DMA1S5CRBase> ;
    using PFCTRL = DMA1_S5CR_PFCTRL_Values<DMA1::S5CR, 5, 1, ReadWriteMode, DMA1S5CRBase> ;
    using TCIE = DMA1_S5CR_TCIE_Values<DMA1::S5CR, 4, 1, ReadWriteMode, DMA1S5CRBase> ;
    using HTIE = DMA1_S5CR_HTIE_Values<DMA1::S5CR, 3, 1, ReadWriteMode, DMA1S5CRBase> ;
    using TEIE = DMA1_S5CR_TEIE_Values<DMA1::S5CR, 2, 1, ReadWriteMode, DMA1S5CRBase> ;
    using DMEIE = DMA1_S5CR_DMEIE_Values<DMA1::S5CR, 1, 1, ReadWriteMode, DMA1S5CRBase> ;
    using EN = DMA1_S5CR_EN_Values<DMA1::S5CR, 0, 1, ReadWriteMode, DMA1S5CRBase> ;
    using FieldValues = DMA1_S5CR_EN_Values<DMA1::S5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5CRPack  = Register<0x40026088, 32, ReadWriteMode, DMA1S5CRBase, T...> ;

  struct DMA1S5NDTRBase {} ;

  struct S5NDTR : public RegisterBase<0x4002608C, 32, ReadWriteMode>
  {
    using NDT = DMA1_S5NDTR_NDT_Values<DMA1::S5NDTR, 0, 16, ReadWriteMode, DMA1S5NDTRBase> ;
    using FieldValues = DMA1_S5NDTR_NDT_Values<DMA1::S5NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5NDTRPack  = Register<0x4002608C, 32, ReadWriteMode, DMA1S5NDTRBase, T...> ;

  struct DMA1S5PARBase {} ;

  struct S5PAR : public RegisterBase<0x40026090, 32, ReadWriteMode>
  {
    using PA = DMA1_S5PAR_PA_Values<DMA1::S5PAR, 0, 32, ReadWriteMode, DMA1S5PARBase> ;
    using FieldValues = DMA1_S5PAR_PA_Values<DMA1::S5PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5PARPack  = Register<0x40026090, 32, ReadWriteMode, DMA1S5PARBase, T...> ;

  struct DMA1S5M0ARBase {} ;

  struct S5M0AR : public RegisterBase<0x40026094, 32, ReadWriteMode>
  {
    using M0A = DMA1_S5M0AR_M0A_Values<DMA1::S5M0AR, 0, 32, ReadWriteMode, DMA1S5M0ARBase> ;
    using FieldValues = DMA1_S5M0AR_M0A_Values<DMA1::S5M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5M0ARPack  = Register<0x40026094, 32, ReadWriteMode, DMA1S5M0ARBase, T...> ;

  struct DMA1S5M1ARBase {} ;

  struct S5M1AR : public RegisterBase<0x40026098, 32, ReadWriteMode>
  {
    using M1A = DMA1_S5M1AR_M1A_Values<DMA1::S5M1AR, 0, 32, ReadWriteMode, DMA1S5M1ARBase> ;
    using FieldValues = DMA1_S5M1AR_M1A_Values<DMA1::S5M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5M1ARPack  = Register<0x40026098, 32, ReadWriteMode, DMA1S5M1ARBase, T...> ;

  struct DMA1S5FCRBase {} ;

  struct S5FCR : public RegisterBase<0x4002609C, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S5FCR_FEIE_Values<DMA1::S5FCR, 7, 1, ReadWriteMode, DMA1S5FCRBase> ;
    using FS = DMA1_S5FCR_FS_Values<DMA1::S5FCR, 3, 3, ReadMode, DMA1S5FCRBase> ;
    using DMDIS = DMA1_S5FCR_DMDIS_Values<DMA1::S5FCR, 2, 1, ReadWriteMode, DMA1S5FCRBase> ;
    using FTH = DMA1_S5FCR_FTH_Values<DMA1::S5FCR, 0, 2, ReadWriteMode, DMA1S5FCRBase> ;
    using FieldValues = DMA1_S5FCR_FTH_Values<DMA1::S5FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S5FCRPack  = Register<0x4002609C, 32, ReadWriteMode, DMA1S5FCRBase, T...> ;

  struct DMA1S6CRBase {} ;

  struct S6CR : public RegisterBase<0x400260A0, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S6CR_CHSEL_Values<DMA1::S6CR, 25, 3, ReadWriteMode, DMA1S6CRBase> ;
    using MBURST = DMA1_S6CR_MBURST_Values<DMA1::S6CR, 23, 2, ReadWriteMode, DMA1S6CRBase> ;
    using PBURST = DMA1_S6CR_PBURST_Values<DMA1::S6CR, 21, 2, ReadWriteMode, DMA1S6CRBase> ;
    using ACK = DMA1_S6CR_ACK_Values<DMA1::S6CR, 20, 1, ReadWriteMode, DMA1S6CRBase> ;
    using CT = DMA1_S6CR_CT_Values<DMA1::S6CR, 19, 1, ReadWriteMode, DMA1S6CRBase> ;
    using DBM = DMA1_S6CR_DBM_Values<DMA1::S6CR, 18, 1, ReadWriteMode, DMA1S6CRBase> ;
    using PL = DMA1_S6CR_PL_Values<DMA1::S6CR, 16, 2, ReadWriteMode, DMA1S6CRBase> ;
    using PINCOS = DMA1_S6CR_PINCOS_Values<DMA1::S6CR, 15, 1, ReadWriteMode, DMA1S6CRBase> ;
    using MSIZE = DMA1_S6CR_MSIZE_Values<DMA1::S6CR, 13, 2, ReadWriteMode, DMA1S6CRBase> ;
    using PSIZE = DMA1_S6CR_PSIZE_Values<DMA1::S6CR, 11, 2, ReadWriteMode, DMA1S6CRBase> ;
    using MINC = DMA1_S6CR_MINC_Values<DMA1::S6CR, 10, 1, ReadWriteMode, DMA1S6CRBase> ;
    using PINC = DMA1_S6CR_PINC_Values<DMA1::S6CR, 9, 1, ReadWriteMode, DMA1S6CRBase> ;
    using CIRC = DMA1_S6CR_CIRC_Values<DMA1::S6CR, 8, 1, ReadWriteMode, DMA1S6CRBase> ;
    using DIR = DMA1_S6CR_DIR_Values<DMA1::S6CR, 6, 2, ReadWriteMode, DMA1S6CRBase> ;
    using PFCTRL = DMA1_S6CR_PFCTRL_Values<DMA1::S6CR, 5, 1, ReadWriteMode, DMA1S6CRBase> ;
    using TCIE = DMA1_S6CR_TCIE_Values<DMA1::S6CR, 4, 1, ReadWriteMode, DMA1S6CRBase> ;
    using HTIE = DMA1_S6CR_HTIE_Values<DMA1::S6CR, 3, 1, ReadWriteMode, DMA1S6CRBase> ;
    using TEIE = DMA1_S6CR_TEIE_Values<DMA1::S6CR, 2, 1, ReadWriteMode, DMA1S6CRBase> ;
    using DMEIE = DMA1_S6CR_DMEIE_Values<DMA1::S6CR, 1, 1, ReadWriteMode, DMA1S6CRBase> ;
    using EN = DMA1_S6CR_EN_Values<DMA1::S6CR, 0, 1, ReadWriteMode, DMA1S6CRBase> ;
    using FieldValues = DMA1_S6CR_EN_Values<DMA1::S6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6CRPack  = Register<0x400260A0, 32, ReadWriteMode, DMA1S6CRBase, T...> ;

  struct DMA1S6NDTRBase {} ;

  struct S6NDTR : public RegisterBase<0x400260A4, 32, ReadWriteMode>
  {
    using NDT = DMA1_S6NDTR_NDT_Values<DMA1::S6NDTR, 0, 16, ReadWriteMode, DMA1S6NDTRBase> ;
    using FieldValues = DMA1_S6NDTR_NDT_Values<DMA1::S6NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6NDTRPack  = Register<0x400260A4, 32, ReadWriteMode, DMA1S6NDTRBase, T...> ;

  struct DMA1S6PARBase {} ;

  struct S6PAR : public RegisterBase<0x400260A8, 32, ReadWriteMode>
  {
    using PA = DMA1_S6PAR_PA_Values<DMA1::S6PAR, 0, 32, ReadWriteMode, DMA1S6PARBase> ;
    using FieldValues = DMA1_S6PAR_PA_Values<DMA1::S6PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6PARPack  = Register<0x400260A8, 32, ReadWriteMode, DMA1S6PARBase, T...> ;

  struct DMA1S6M0ARBase {} ;

  struct S6M0AR : public RegisterBase<0x400260AC, 32, ReadWriteMode>
  {
    using M0A = DMA1_S6M0AR_M0A_Values<DMA1::S6M0AR, 0, 32, ReadWriteMode, DMA1S6M0ARBase> ;
    using FieldValues = DMA1_S6M0AR_M0A_Values<DMA1::S6M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6M0ARPack  = Register<0x400260AC, 32, ReadWriteMode, DMA1S6M0ARBase, T...> ;

  struct DMA1S6M1ARBase {} ;

  struct S6M1AR : public RegisterBase<0x400260B0, 32, ReadWriteMode>
  {
    using M1A = DMA1_S6M1AR_M1A_Values<DMA1::S6M1AR, 0, 32, ReadWriteMode, DMA1S6M1ARBase> ;
    using FieldValues = DMA1_S6M1AR_M1A_Values<DMA1::S6M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6M1ARPack  = Register<0x400260B0, 32, ReadWriteMode, DMA1S6M1ARBase, T...> ;

  struct DMA1S6FCRBase {} ;

  struct S6FCR : public RegisterBase<0x400260B4, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S6FCR_FEIE_Values<DMA1::S6FCR, 7, 1, ReadWriteMode, DMA1S6FCRBase> ;
    using FS = DMA1_S6FCR_FS_Values<DMA1::S6FCR, 3, 3, ReadMode, DMA1S6FCRBase> ;
    using DMDIS = DMA1_S6FCR_DMDIS_Values<DMA1::S6FCR, 2, 1, ReadWriteMode, DMA1S6FCRBase> ;
    using FTH = DMA1_S6FCR_FTH_Values<DMA1::S6FCR, 0, 2, ReadWriteMode, DMA1S6FCRBase> ;
    using FieldValues = DMA1_S6FCR_FTH_Values<DMA1::S6FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S6FCRPack  = Register<0x400260B4, 32, ReadWriteMode, DMA1S6FCRBase, T...> ;

  struct DMA1S7CRBase {} ;

  struct S7CR : public RegisterBase<0x400260B8, 32, ReadWriteMode>
  {
    using CHSEL = DMA1_S7CR_CHSEL_Values<DMA1::S7CR, 25, 3, ReadWriteMode, DMA1S7CRBase> ;
    using MBURST = DMA1_S7CR_MBURST_Values<DMA1::S7CR, 23, 2, ReadWriteMode, DMA1S7CRBase> ;
    using PBURST = DMA1_S7CR_PBURST_Values<DMA1::S7CR, 21, 2, ReadWriteMode, DMA1S7CRBase> ;
    using ACK = DMA1_S7CR_ACK_Values<DMA1::S7CR, 20, 1, ReadWriteMode, DMA1S7CRBase> ;
    using CT = DMA1_S7CR_CT_Values<DMA1::S7CR, 19, 1, ReadWriteMode, DMA1S7CRBase> ;
    using DBM = DMA1_S7CR_DBM_Values<DMA1::S7CR, 18, 1, ReadWriteMode, DMA1S7CRBase> ;
    using PL = DMA1_S7CR_PL_Values<DMA1::S7CR, 16, 2, ReadWriteMode, DMA1S7CRBase> ;
    using PINCOS = DMA1_S7CR_PINCOS_Values<DMA1::S7CR, 15, 1, ReadWriteMode, DMA1S7CRBase> ;
    using MSIZE = DMA1_S7CR_MSIZE_Values<DMA1::S7CR, 13, 2, ReadWriteMode, DMA1S7CRBase> ;
    using PSIZE = DMA1_S7CR_PSIZE_Values<DMA1::S7CR, 11, 2, ReadWriteMode, DMA1S7CRBase> ;
    using MINC = DMA1_S7CR_MINC_Values<DMA1::S7CR, 10, 1, ReadWriteMode, DMA1S7CRBase> ;
    using PINC = DMA1_S7CR_PINC_Values<DMA1::S7CR, 9, 1, ReadWriteMode, DMA1S7CRBase> ;
    using CIRC = DMA1_S7CR_CIRC_Values<DMA1::S7CR, 8, 1, ReadWriteMode, DMA1S7CRBase> ;
    using DIR = DMA1_S7CR_DIR_Values<DMA1::S7CR, 6, 2, ReadWriteMode, DMA1S7CRBase> ;
    using PFCTRL = DMA1_S7CR_PFCTRL_Values<DMA1::S7CR, 5, 1, ReadWriteMode, DMA1S7CRBase> ;
    using TCIE = DMA1_S7CR_TCIE_Values<DMA1::S7CR, 4, 1, ReadWriteMode, DMA1S7CRBase> ;
    using HTIE = DMA1_S7CR_HTIE_Values<DMA1::S7CR, 3, 1, ReadWriteMode, DMA1S7CRBase> ;
    using TEIE = DMA1_S7CR_TEIE_Values<DMA1::S7CR, 2, 1, ReadWriteMode, DMA1S7CRBase> ;
    using DMEIE = DMA1_S7CR_DMEIE_Values<DMA1::S7CR, 1, 1, ReadWriteMode, DMA1S7CRBase> ;
    using EN = DMA1_S7CR_EN_Values<DMA1::S7CR, 0, 1, ReadWriteMode, DMA1S7CRBase> ;
    using FieldValues = DMA1_S7CR_EN_Values<DMA1::S7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7CRPack  = Register<0x400260B8, 32, ReadWriteMode, DMA1S7CRBase, T...> ;

  struct DMA1S7NDTRBase {} ;

  struct S7NDTR : public RegisterBase<0x400260BC, 32, ReadWriteMode>
  {
    using NDT = DMA1_S7NDTR_NDT_Values<DMA1::S7NDTR, 0, 16, ReadWriteMode, DMA1S7NDTRBase> ;
    using FieldValues = DMA1_S7NDTR_NDT_Values<DMA1::S7NDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7NDTRPack  = Register<0x400260BC, 32, ReadWriteMode, DMA1S7NDTRBase, T...> ;

  struct DMA1S7PARBase {} ;

  struct S7PAR : public RegisterBase<0x400260C0, 32, ReadWriteMode>
  {
    using PA = DMA1_S7PAR_PA_Values<DMA1::S7PAR, 0, 32, ReadWriteMode, DMA1S7PARBase> ;
    using FieldValues = DMA1_S7PAR_PA_Values<DMA1::S7PAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7PARPack  = Register<0x400260C0, 32, ReadWriteMode, DMA1S7PARBase, T...> ;

  struct DMA1S7M0ARBase {} ;

  struct S7M0AR : public RegisterBase<0x400260C4, 32, ReadWriteMode>
  {
    using M0A = DMA1_S7M0AR_M0A_Values<DMA1::S7M0AR, 0, 32, ReadWriteMode, DMA1S7M0ARBase> ;
    using FieldValues = DMA1_S7M0AR_M0A_Values<DMA1::S7M0AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7M0ARPack  = Register<0x400260C4, 32, ReadWriteMode, DMA1S7M0ARBase, T...> ;

  struct DMA1S7M1ARBase {} ;

  struct S7M1AR : public RegisterBase<0x400260C8, 32, ReadWriteMode>
  {
    using M1A = DMA1_S7M1AR_M1A_Values<DMA1::S7M1AR, 0, 32, ReadWriteMode, DMA1S7M1ARBase> ;
    using FieldValues = DMA1_S7M1AR_M1A_Values<DMA1::S7M1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7M1ARPack  = Register<0x400260C8, 32, ReadWriteMode, DMA1S7M1ARBase, T...> ;

  struct DMA1S7FCRBase {} ;

  struct S7FCR : public RegisterBase<0x400260CC, 32, ReadWriteMode>
  {
    using FEIE = DMA1_S7FCR_FEIE_Values<DMA1::S7FCR, 7, 1, ReadWriteMode, DMA1S7FCRBase> ;
    using FS = DMA1_S7FCR_FS_Values<DMA1::S7FCR, 3, 3, ReadMode, DMA1S7FCRBase> ;
    using DMDIS = DMA1_S7FCR_DMDIS_Values<DMA1::S7FCR, 2, 1, ReadWriteMode, DMA1S7FCRBase> ;
    using FTH = DMA1_S7FCR_FTH_Values<DMA1::S7FCR, 0, 2, ReadWriteMode, DMA1S7FCRBase> ;
    using FieldValues = DMA1_S7FCR_FTH_Values<DMA1::S7FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using S7FCRPack  = Register<0x400260CC, 32, ReadWriteMode, DMA1S7FCRBase, T...> ;

} ;

#endif //#if !defined(DMA1REGISTERS_HPP)
