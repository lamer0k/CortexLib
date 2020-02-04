/*******************************************************************************
* Filename      : dma2registers.hpp
*
* Details       : DMA controller. This header file is auto-generated for
*                 STM32F0x1 device.
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
  struct DMA2ISRBase {} ;

  struct ISR : public RegisterBase<0x40020400, 32, ReadMode>
  {
    using GIF1 = DMA2_ISR_GIF1_Values<DMA2::ISR, 0, 1, ReadMode, DMA2ISRBase> ;
    using TCIF1 = DMA2_ISR_TCIF1_Values<DMA2::ISR, 1, 1, ReadMode, DMA2ISRBase> ;
    using HTIF1 = DMA2_ISR_HTIF1_Values<DMA2::ISR, 2, 1, ReadMode, DMA2ISRBase> ;
    using TEIF1 = DMA2_ISR_TEIF1_Values<DMA2::ISR, 3, 1, ReadMode, DMA2ISRBase> ;
    using GIF2 = DMA2_ISR_GIF2_Values<DMA2::ISR, 4, 1, ReadMode, DMA2ISRBase> ;
    using TCIF2 = DMA2_ISR_TCIF2_Values<DMA2::ISR, 5, 1, ReadMode, DMA2ISRBase> ;
    using HTIF2 = DMA2_ISR_HTIF2_Values<DMA2::ISR, 6, 1, ReadMode, DMA2ISRBase> ;
    using TEIF2 = DMA2_ISR_TEIF2_Values<DMA2::ISR, 7, 1, ReadMode, DMA2ISRBase> ;
    using GIF3 = DMA2_ISR_GIF3_Values<DMA2::ISR, 8, 1, ReadMode, DMA2ISRBase> ;
    using TCIF3 = DMA2_ISR_TCIF3_Values<DMA2::ISR, 9, 1, ReadMode, DMA2ISRBase> ;
    using HTIF3 = DMA2_ISR_HTIF3_Values<DMA2::ISR, 10, 1, ReadMode, DMA2ISRBase> ;
    using TEIF3 = DMA2_ISR_TEIF3_Values<DMA2::ISR, 11, 1, ReadMode, DMA2ISRBase> ;
    using GIF4 = DMA2_ISR_GIF4_Values<DMA2::ISR, 12, 1, ReadMode, DMA2ISRBase> ;
    using TCIF4 = DMA2_ISR_TCIF4_Values<DMA2::ISR, 13, 1, ReadMode, DMA2ISRBase> ;
    using HTIF4 = DMA2_ISR_HTIF4_Values<DMA2::ISR, 14, 1, ReadMode, DMA2ISRBase> ;
    using TEIF4 = DMA2_ISR_TEIF4_Values<DMA2::ISR, 15, 1, ReadMode, DMA2ISRBase> ;
    using GIF5 = DMA2_ISR_GIF5_Values<DMA2::ISR, 16, 1, ReadMode, DMA2ISRBase> ;
    using TCIF5 = DMA2_ISR_TCIF5_Values<DMA2::ISR, 17, 1, ReadMode, DMA2ISRBase> ;
    using HTIF5 = DMA2_ISR_HTIF5_Values<DMA2::ISR, 18, 1, ReadMode, DMA2ISRBase> ;
    using TEIF5 = DMA2_ISR_TEIF5_Values<DMA2::ISR, 19, 1, ReadMode, DMA2ISRBase> ;
    using GIF6 = DMA2_ISR_GIF6_Values<DMA2::ISR, 20, 1, ReadMode, DMA2ISRBase> ;
    using TCIF6 = DMA2_ISR_TCIF6_Values<DMA2::ISR, 21, 1, ReadMode, DMA2ISRBase> ;
    using HTIF6 = DMA2_ISR_HTIF6_Values<DMA2::ISR, 22, 1, ReadMode, DMA2ISRBase> ;
    using TEIF6 = DMA2_ISR_TEIF6_Values<DMA2::ISR, 23, 1, ReadMode, DMA2ISRBase> ;
    using GIF7 = DMA2_ISR_GIF7_Values<DMA2::ISR, 24, 1, ReadMode, DMA2ISRBase> ;
    using TCIF7 = DMA2_ISR_TCIF7_Values<DMA2::ISR, 25, 1, ReadMode, DMA2ISRBase> ;
    using HTIF7 = DMA2_ISR_HTIF7_Values<DMA2::ISR, 26, 1, ReadMode, DMA2ISRBase> ;
    using TEIF7 = DMA2_ISR_TEIF7_Values<DMA2::ISR, 27, 1, ReadMode, DMA2ISRBase> ;
    using FieldValues = DMA2_ISR_TEIF7_Values<DMA2::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40020400, 32, ReadMode, DMA2ISRBase, T...> ;

  struct DMA2IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40020404, 32, WriteMode>
  {
    using CGIF1 = DMA2_IFCR_CGIF1_Values<DMA2::IFCR, 0, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF1 = DMA2_IFCR_CTCIF1_Values<DMA2::IFCR, 1, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF1 = DMA2_IFCR_CHTIF1_Values<DMA2::IFCR, 2, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF1 = DMA2_IFCR_CTEIF1_Values<DMA2::IFCR, 3, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF2 = DMA2_IFCR_CGIF2_Values<DMA2::IFCR, 4, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF2 = DMA2_IFCR_CTCIF2_Values<DMA2::IFCR, 5, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF2 = DMA2_IFCR_CHTIF2_Values<DMA2::IFCR, 6, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF2 = DMA2_IFCR_CTEIF2_Values<DMA2::IFCR, 7, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF3 = DMA2_IFCR_CGIF3_Values<DMA2::IFCR, 8, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF3 = DMA2_IFCR_CTCIF3_Values<DMA2::IFCR, 9, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF3 = DMA2_IFCR_CHTIF3_Values<DMA2::IFCR, 10, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF3 = DMA2_IFCR_CTEIF3_Values<DMA2::IFCR, 11, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF4 = DMA2_IFCR_CGIF4_Values<DMA2::IFCR, 12, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF4 = DMA2_IFCR_CTCIF4_Values<DMA2::IFCR, 13, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF4 = DMA2_IFCR_CHTIF4_Values<DMA2::IFCR, 14, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF4 = DMA2_IFCR_CTEIF4_Values<DMA2::IFCR, 15, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF5 = DMA2_IFCR_CGIF5_Values<DMA2::IFCR, 16, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF5 = DMA2_IFCR_CTCIF5_Values<DMA2::IFCR, 17, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF5 = DMA2_IFCR_CHTIF5_Values<DMA2::IFCR, 18, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF5 = DMA2_IFCR_CTEIF5_Values<DMA2::IFCR, 19, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF6 = DMA2_IFCR_CGIF6_Values<DMA2::IFCR, 20, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF6 = DMA2_IFCR_CTCIF6_Values<DMA2::IFCR, 21, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF6 = DMA2_IFCR_CHTIF6_Values<DMA2::IFCR, 22, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF6 = DMA2_IFCR_CTEIF6_Values<DMA2::IFCR, 23, 1, WriteMode, DMA2IFCRBase> ;
    using CGIF7 = DMA2_IFCR_CGIF7_Values<DMA2::IFCR, 24, 1, WriteMode, DMA2IFCRBase> ;
    using CTCIF7 = DMA2_IFCR_CTCIF7_Values<DMA2::IFCR, 25, 1, WriteMode, DMA2IFCRBase> ;
    using CHTIF7 = DMA2_IFCR_CHTIF7_Values<DMA2::IFCR, 26, 1, WriteMode, DMA2IFCRBase> ;
    using CTEIF7 = DMA2_IFCR_CTEIF7_Values<DMA2::IFCR, 27, 1, WriteMode, DMA2IFCRBase> ;
    using FieldValues = DMA2_IFCR_CTEIF7_Values<DMA2::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40020404, 32, WriteMode, DMA2IFCRBase, T...> ;

  struct DMA2CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40020408, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR1_EN_Values<DMA2::CCR1, 0, 1, ReadWriteMode, DMA2CCR1Base> ;
    using TCIE = DMA2_CCR1_TCIE_Values<DMA2::CCR1, 1, 1, ReadWriteMode, DMA2CCR1Base> ;
    using HTIE = DMA2_CCR1_HTIE_Values<DMA2::CCR1, 2, 1, ReadWriteMode, DMA2CCR1Base> ;
    using TEIE = DMA2_CCR1_TEIE_Values<DMA2::CCR1, 3, 1, ReadWriteMode, DMA2CCR1Base> ;
    using DIR = DMA2_CCR1_DIR_Values<DMA2::CCR1, 4, 1, ReadWriteMode, DMA2CCR1Base> ;
    using CIRC = DMA2_CCR1_CIRC_Values<DMA2::CCR1, 5, 1, ReadWriteMode, DMA2CCR1Base> ;
    using PINC = DMA2_CCR1_PINC_Values<DMA2::CCR1, 6, 1, ReadWriteMode, DMA2CCR1Base> ;
    using MINC = DMA2_CCR1_MINC_Values<DMA2::CCR1, 7, 1, ReadWriteMode, DMA2CCR1Base> ;
    using PSIZE = DMA2_CCR1_PSIZE_Values<DMA2::CCR1, 8, 2, ReadWriteMode, DMA2CCR1Base> ;
    using MSIZE = DMA2_CCR1_MSIZE_Values<DMA2::CCR1, 10, 2, ReadWriteMode, DMA2CCR1Base> ;
    using PL = DMA2_CCR1_PL_Values<DMA2::CCR1, 12, 2, ReadWriteMode, DMA2CCR1Base> ;
    using MEM2MEM = DMA2_CCR1_MEM2MEM_Values<DMA2::CCR1, 14, 1, ReadWriteMode, DMA2CCR1Base> ;
    using FieldValues = DMA2_CCR1_MEM2MEM_Values<DMA2::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40020408, 32, ReadWriteMode, DMA2CCR1Base, T...> ;

  struct DMA2CNDTR1Base {} ;

  struct CNDTR1 : public RegisterBase<0x4002040C, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR1_NDT_Values<DMA2::CNDTR1, 0, 16, ReadWriteMode, DMA2CNDTR1Base> ;
    using FieldValues = DMA2_CNDTR1_NDT_Values<DMA2::CNDTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR1Pack  = Register<0x4002040C, 32, ReadWriteMode, DMA2CNDTR1Base, T...> ;

  struct DMA2CPAR1Base {} ;

  struct CPAR1 : public RegisterBase<0x40020410, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR1_PA_Values<DMA2::CPAR1, 0, 32, ReadWriteMode, DMA2CPAR1Base> ;
    using FieldValues = DMA2_CPAR1_PA_Values<DMA2::CPAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR1Pack  = Register<0x40020410, 32, ReadWriteMode, DMA2CPAR1Base, T...> ;

  struct DMA2CMAR1Base {} ;

  struct CMAR1 : public RegisterBase<0x40020414, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR1_MA_Values<DMA2::CMAR1, 0, 32, ReadWriteMode, DMA2CMAR1Base> ;
    using FieldValues = DMA2_CMAR1_MA_Values<DMA2::CMAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR1Pack  = Register<0x40020414, 32, ReadWriteMode, DMA2CMAR1Base, T...> ;

  struct DMA2CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x4002041C, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR2_EN_Values<DMA2::CCR2, 0, 1, ReadWriteMode, DMA2CCR2Base> ;
    using TCIE = DMA2_CCR2_TCIE_Values<DMA2::CCR2, 1, 1, ReadWriteMode, DMA2CCR2Base> ;
    using HTIE = DMA2_CCR2_HTIE_Values<DMA2::CCR2, 2, 1, ReadWriteMode, DMA2CCR2Base> ;
    using TEIE = DMA2_CCR2_TEIE_Values<DMA2::CCR2, 3, 1, ReadWriteMode, DMA2CCR2Base> ;
    using DIR = DMA2_CCR2_DIR_Values<DMA2::CCR2, 4, 1, ReadWriteMode, DMA2CCR2Base> ;
    using CIRC = DMA2_CCR2_CIRC_Values<DMA2::CCR2, 5, 1, ReadWriteMode, DMA2CCR2Base> ;
    using PINC = DMA2_CCR2_PINC_Values<DMA2::CCR2, 6, 1, ReadWriteMode, DMA2CCR2Base> ;
    using MINC = DMA2_CCR2_MINC_Values<DMA2::CCR2, 7, 1, ReadWriteMode, DMA2CCR2Base> ;
    using PSIZE = DMA2_CCR2_PSIZE_Values<DMA2::CCR2, 8, 2, ReadWriteMode, DMA2CCR2Base> ;
    using MSIZE = DMA2_CCR2_MSIZE_Values<DMA2::CCR2, 10, 2, ReadWriteMode, DMA2CCR2Base> ;
    using PL = DMA2_CCR2_PL_Values<DMA2::CCR2, 12, 2, ReadWriteMode, DMA2CCR2Base> ;
    using MEM2MEM = DMA2_CCR2_MEM2MEM_Values<DMA2::CCR2, 14, 1, ReadWriteMode, DMA2CCR2Base> ;
    using FieldValues = DMA2_CCR2_MEM2MEM_Values<DMA2::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x4002041C, 32, ReadWriteMode, DMA2CCR2Base, T...> ;

  struct DMA2CNDTR2Base {} ;

  struct CNDTR2 : public RegisterBase<0x40020420, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR2_NDT_Values<DMA2::CNDTR2, 0, 16, ReadWriteMode, DMA2CNDTR2Base> ;
    using FieldValues = DMA2_CNDTR2_NDT_Values<DMA2::CNDTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR2Pack  = Register<0x40020420, 32, ReadWriteMode, DMA2CNDTR2Base, T...> ;

  struct DMA2CPAR2Base {} ;

  struct CPAR2 : public RegisterBase<0x40020424, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR2_PA_Values<DMA2::CPAR2, 0, 32, ReadWriteMode, DMA2CPAR2Base> ;
    using FieldValues = DMA2_CPAR2_PA_Values<DMA2::CPAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR2Pack  = Register<0x40020424, 32, ReadWriteMode, DMA2CPAR2Base, T...> ;

  struct DMA2CMAR2Base {} ;

  struct CMAR2 : public RegisterBase<0x40020428, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR2_MA_Values<DMA2::CMAR2, 0, 32, ReadWriteMode, DMA2CMAR2Base> ;
    using FieldValues = DMA2_CMAR2_MA_Values<DMA2::CMAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR2Pack  = Register<0x40020428, 32, ReadWriteMode, DMA2CMAR2Base, T...> ;

  struct DMA2CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40020430, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR3_EN_Values<DMA2::CCR3, 0, 1, ReadWriteMode, DMA2CCR3Base> ;
    using TCIE = DMA2_CCR3_TCIE_Values<DMA2::CCR3, 1, 1, ReadWriteMode, DMA2CCR3Base> ;
    using HTIE = DMA2_CCR3_HTIE_Values<DMA2::CCR3, 2, 1, ReadWriteMode, DMA2CCR3Base> ;
    using TEIE = DMA2_CCR3_TEIE_Values<DMA2::CCR3, 3, 1, ReadWriteMode, DMA2CCR3Base> ;
    using DIR = DMA2_CCR3_DIR_Values<DMA2::CCR3, 4, 1, ReadWriteMode, DMA2CCR3Base> ;
    using CIRC = DMA2_CCR3_CIRC_Values<DMA2::CCR3, 5, 1, ReadWriteMode, DMA2CCR3Base> ;
    using PINC = DMA2_CCR3_PINC_Values<DMA2::CCR3, 6, 1, ReadWriteMode, DMA2CCR3Base> ;
    using MINC = DMA2_CCR3_MINC_Values<DMA2::CCR3, 7, 1, ReadWriteMode, DMA2CCR3Base> ;
    using PSIZE = DMA2_CCR3_PSIZE_Values<DMA2::CCR3, 8, 2, ReadWriteMode, DMA2CCR3Base> ;
    using MSIZE = DMA2_CCR3_MSIZE_Values<DMA2::CCR3, 10, 2, ReadWriteMode, DMA2CCR3Base> ;
    using PL = DMA2_CCR3_PL_Values<DMA2::CCR3, 12, 2, ReadWriteMode, DMA2CCR3Base> ;
    using MEM2MEM = DMA2_CCR3_MEM2MEM_Values<DMA2::CCR3, 14, 1, ReadWriteMode, DMA2CCR3Base> ;
    using FieldValues = DMA2_CCR3_MEM2MEM_Values<DMA2::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40020430, 32, ReadWriteMode, DMA2CCR3Base, T...> ;

  struct DMA2CNDTR3Base {} ;

  struct CNDTR3 : public RegisterBase<0x40020434, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR3_NDT_Values<DMA2::CNDTR3, 0, 16, ReadWriteMode, DMA2CNDTR3Base> ;
    using FieldValues = DMA2_CNDTR3_NDT_Values<DMA2::CNDTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR3Pack  = Register<0x40020434, 32, ReadWriteMode, DMA2CNDTR3Base, T...> ;

  struct DMA2CPAR3Base {} ;

  struct CPAR3 : public RegisterBase<0x40020438, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR3_PA_Values<DMA2::CPAR3, 0, 32, ReadWriteMode, DMA2CPAR3Base> ;
    using FieldValues = DMA2_CPAR3_PA_Values<DMA2::CPAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR3Pack  = Register<0x40020438, 32, ReadWriteMode, DMA2CPAR3Base, T...> ;

  struct DMA2CMAR3Base {} ;

  struct CMAR3 : public RegisterBase<0x4002043C, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR3_MA_Values<DMA2::CMAR3, 0, 32, ReadWriteMode, DMA2CMAR3Base> ;
    using FieldValues = DMA2_CMAR3_MA_Values<DMA2::CMAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR3Pack  = Register<0x4002043C, 32, ReadWriteMode, DMA2CMAR3Base, T...> ;

  struct DMA2CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40020444, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR4_EN_Values<DMA2::CCR4, 0, 1, ReadWriteMode, DMA2CCR4Base> ;
    using TCIE = DMA2_CCR4_TCIE_Values<DMA2::CCR4, 1, 1, ReadWriteMode, DMA2CCR4Base> ;
    using HTIE = DMA2_CCR4_HTIE_Values<DMA2::CCR4, 2, 1, ReadWriteMode, DMA2CCR4Base> ;
    using TEIE = DMA2_CCR4_TEIE_Values<DMA2::CCR4, 3, 1, ReadWriteMode, DMA2CCR4Base> ;
    using DIR = DMA2_CCR4_DIR_Values<DMA2::CCR4, 4, 1, ReadWriteMode, DMA2CCR4Base> ;
    using CIRC = DMA2_CCR4_CIRC_Values<DMA2::CCR4, 5, 1, ReadWriteMode, DMA2CCR4Base> ;
    using PINC = DMA2_CCR4_PINC_Values<DMA2::CCR4, 6, 1, ReadWriteMode, DMA2CCR4Base> ;
    using MINC = DMA2_CCR4_MINC_Values<DMA2::CCR4, 7, 1, ReadWriteMode, DMA2CCR4Base> ;
    using PSIZE = DMA2_CCR4_PSIZE_Values<DMA2::CCR4, 8, 2, ReadWriteMode, DMA2CCR4Base> ;
    using MSIZE = DMA2_CCR4_MSIZE_Values<DMA2::CCR4, 10, 2, ReadWriteMode, DMA2CCR4Base> ;
    using PL = DMA2_CCR4_PL_Values<DMA2::CCR4, 12, 2, ReadWriteMode, DMA2CCR4Base> ;
    using MEM2MEM = DMA2_CCR4_MEM2MEM_Values<DMA2::CCR4, 14, 1, ReadWriteMode, DMA2CCR4Base> ;
    using FieldValues = DMA2_CCR4_MEM2MEM_Values<DMA2::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40020444, 32, ReadWriteMode, DMA2CCR4Base, T...> ;

  struct DMA2CNDTR4Base {} ;

  struct CNDTR4 : public RegisterBase<0x40020448, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR4_NDT_Values<DMA2::CNDTR4, 0, 16, ReadWriteMode, DMA2CNDTR4Base> ;
    using FieldValues = DMA2_CNDTR4_NDT_Values<DMA2::CNDTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR4Pack  = Register<0x40020448, 32, ReadWriteMode, DMA2CNDTR4Base, T...> ;

  struct DMA2CPAR4Base {} ;

  struct CPAR4 : public RegisterBase<0x4002044C, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR4_PA_Values<DMA2::CPAR4, 0, 32, ReadWriteMode, DMA2CPAR4Base> ;
    using FieldValues = DMA2_CPAR4_PA_Values<DMA2::CPAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR4Pack  = Register<0x4002044C, 32, ReadWriteMode, DMA2CPAR4Base, T...> ;

  struct DMA2CMAR4Base {} ;

  struct CMAR4 : public RegisterBase<0x40020450, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR4_MA_Values<DMA2::CMAR4, 0, 32, ReadWriteMode, DMA2CMAR4Base> ;
    using FieldValues = DMA2_CMAR4_MA_Values<DMA2::CMAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR4Pack  = Register<0x40020450, 32, ReadWriteMode, DMA2CMAR4Base, T...> ;

  struct DMA2CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40020458, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR5_EN_Values<DMA2::CCR5, 0, 1, ReadWriteMode, DMA2CCR5Base> ;
    using TCIE = DMA2_CCR5_TCIE_Values<DMA2::CCR5, 1, 1, ReadWriteMode, DMA2CCR5Base> ;
    using HTIE = DMA2_CCR5_HTIE_Values<DMA2::CCR5, 2, 1, ReadWriteMode, DMA2CCR5Base> ;
    using TEIE = DMA2_CCR5_TEIE_Values<DMA2::CCR5, 3, 1, ReadWriteMode, DMA2CCR5Base> ;
    using DIR = DMA2_CCR5_DIR_Values<DMA2::CCR5, 4, 1, ReadWriteMode, DMA2CCR5Base> ;
    using CIRC = DMA2_CCR5_CIRC_Values<DMA2::CCR5, 5, 1, ReadWriteMode, DMA2CCR5Base> ;
    using PINC = DMA2_CCR5_PINC_Values<DMA2::CCR5, 6, 1, ReadWriteMode, DMA2CCR5Base> ;
    using MINC = DMA2_CCR5_MINC_Values<DMA2::CCR5, 7, 1, ReadWriteMode, DMA2CCR5Base> ;
    using PSIZE = DMA2_CCR5_PSIZE_Values<DMA2::CCR5, 8, 2, ReadWriteMode, DMA2CCR5Base> ;
    using MSIZE = DMA2_CCR5_MSIZE_Values<DMA2::CCR5, 10, 2, ReadWriteMode, DMA2CCR5Base> ;
    using PL = DMA2_CCR5_PL_Values<DMA2::CCR5, 12, 2, ReadWriteMode, DMA2CCR5Base> ;
    using MEM2MEM = DMA2_CCR5_MEM2MEM_Values<DMA2::CCR5, 14, 1, ReadWriteMode, DMA2CCR5Base> ;
    using FieldValues = DMA2_CCR5_MEM2MEM_Values<DMA2::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40020458, 32, ReadWriteMode, DMA2CCR5Base, T...> ;

  struct DMA2CNDTR5Base {} ;

  struct CNDTR5 : public RegisterBase<0x4002045C, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR5_NDT_Values<DMA2::CNDTR5, 0, 16, ReadWriteMode, DMA2CNDTR5Base> ;
    using FieldValues = DMA2_CNDTR5_NDT_Values<DMA2::CNDTR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR5Pack  = Register<0x4002045C, 32, ReadWriteMode, DMA2CNDTR5Base, T...> ;

  struct DMA2CPAR5Base {} ;

  struct CPAR5 : public RegisterBase<0x40020460, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR5_PA_Values<DMA2::CPAR5, 0, 32, ReadWriteMode, DMA2CPAR5Base> ;
    using FieldValues = DMA2_CPAR5_PA_Values<DMA2::CPAR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR5Pack  = Register<0x40020460, 32, ReadWriteMode, DMA2CPAR5Base, T...> ;

  struct DMA2CMAR5Base {} ;

  struct CMAR5 : public RegisterBase<0x40020464, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR5_MA_Values<DMA2::CMAR5, 0, 32, ReadWriteMode, DMA2CMAR5Base> ;
    using FieldValues = DMA2_CMAR5_MA_Values<DMA2::CMAR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR5Pack  = Register<0x40020464, 32, ReadWriteMode, DMA2CMAR5Base, T...> ;

  struct DMA2CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4002046C, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR6_EN_Values<DMA2::CCR6, 0, 1, ReadWriteMode, DMA2CCR6Base> ;
    using TCIE = DMA2_CCR6_TCIE_Values<DMA2::CCR6, 1, 1, ReadWriteMode, DMA2CCR6Base> ;
    using HTIE = DMA2_CCR6_HTIE_Values<DMA2::CCR6, 2, 1, ReadWriteMode, DMA2CCR6Base> ;
    using TEIE = DMA2_CCR6_TEIE_Values<DMA2::CCR6, 3, 1, ReadWriteMode, DMA2CCR6Base> ;
    using DIR = DMA2_CCR6_DIR_Values<DMA2::CCR6, 4, 1, ReadWriteMode, DMA2CCR6Base> ;
    using CIRC = DMA2_CCR6_CIRC_Values<DMA2::CCR6, 5, 1, ReadWriteMode, DMA2CCR6Base> ;
    using PINC = DMA2_CCR6_PINC_Values<DMA2::CCR6, 6, 1, ReadWriteMode, DMA2CCR6Base> ;
    using MINC = DMA2_CCR6_MINC_Values<DMA2::CCR6, 7, 1, ReadWriteMode, DMA2CCR6Base> ;
    using PSIZE = DMA2_CCR6_PSIZE_Values<DMA2::CCR6, 8, 2, ReadWriteMode, DMA2CCR6Base> ;
    using MSIZE = DMA2_CCR6_MSIZE_Values<DMA2::CCR6, 10, 2, ReadWriteMode, DMA2CCR6Base> ;
    using PL = DMA2_CCR6_PL_Values<DMA2::CCR6, 12, 2, ReadWriteMode, DMA2CCR6Base> ;
    using MEM2MEM = DMA2_CCR6_MEM2MEM_Values<DMA2::CCR6, 14, 1, ReadWriteMode, DMA2CCR6Base> ;
    using FieldValues = DMA2_CCR6_MEM2MEM_Values<DMA2::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4002046C, 32, ReadWriteMode, DMA2CCR6Base, T...> ;

  struct DMA2CNDTR6Base {} ;

  struct CNDTR6 : public RegisterBase<0x40020470, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR6_NDT_Values<DMA2::CNDTR6, 0, 16, ReadWriteMode, DMA2CNDTR6Base> ;
    using FieldValues = DMA2_CNDTR6_NDT_Values<DMA2::CNDTR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR6Pack  = Register<0x40020470, 32, ReadWriteMode, DMA2CNDTR6Base, T...> ;

  struct DMA2CPAR6Base {} ;

  struct CPAR6 : public RegisterBase<0x40020474, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR6_PA_Values<DMA2::CPAR6, 0, 32, ReadWriteMode, DMA2CPAR6Base> ;
    using FieldValues = DMA2_CPAR6_PA_Values<DMA2::CPAR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR6Pack  = Register<0x40020474, 32, ReadWriteMode, DMA2CPAR6Base, T...> ;

  struct DMA2CMAR6Base {} ;

  struct CMAR6 : public RegisterBase<0x40020478, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR6_MA_Values<DMA2::CMAR6, 0, 32, ReadWriteMode, DMA2CMAR6Base> ;
    using FieldValues = DMA2_CMAR6_MA_Values<DMA2::CMAR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR6Pack  = Register<0x40020478, 32, ReadWriteMode, DMA2CMAR6Base, T...> ;

  struct DMA2CCR7Base {} ;

  struct CCR7 : public RegisterBase<0x40020480, 32, ReadWriteMode>
  {
    using EN = DMA2_CCR7_EN_Values<DMA2::CCR7, 0, 1, ReadWriteMode, DMA2CCR7Base> ;
    using TCIE = DMA2_CCR7_TCIE_Values<DMA2::CCR7, 1, 1, ReadWriteMode, DMA2CCR7Base> ;
    using HTIE = DMA2_CCR7_HTIE_Values<DMA2::CCR7, 2, 1, ReadWriteMode, DMA2CCR7Base> ;
    using TEIE = DMA2_CCR7_TEIE_Values<DMA2::CCR7, 3, 1, ReadWriteMode, DMA2CCR7Base> ;
    using DIR = DMA2_CCR7_DIR_Values<DMA2::CCR7, 4, 1, ReadWriteMode, DMA2CCR7Base> ;
    using CIRC = DMA2_CCR7_CIRC_Values<DMA2::CCR7, 5, 1, ReadWriteMode, DMA2CCR7Base> ;
    using PINC = DMA2_CCR7_PINC_Values<DMA2::CCR7, 6, 1, ReadWriteMode, DMA2CCR7Base> ;
    using MINC = DMA2_CCR7_MINC_Values<DMA2::CCR7, 7, 1, ReadWriteMode, DMA2CCR7Base> ;
    using PSIZE = DMA2_CCR7_PSIZE_Values<DMA2::CCR7, 8, 2, ReadWriteMode, DMA2CCR7Base> ;
    using MSIZE = DMA2_CCR7_MSIZE_Values<DMA2::CCR7, 10, 2, ReadWriteMode, DMA2CCR7Base> ;
    using PL = DMA2_CCR7_PL_Values<DMA2::CCR7, 12, 2, ReadWriteMode, DMA2CCR7Base> ;
    using MEM2MEM = DMA2_CCR7_MEM2MEM_Values<DMA2::CCR7, 14, 1, ReadWriteMode, DMA2CCR7Base> ;
    using FieldValues = DMA2_CCR7_MEM2MEM_Values<DMA2::CCR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR7Pack  = Register<0x40020480, 32, ReadWriteMode, DMA2CCR7Base, T...> ;

  struct DMA2CNDTR7Base {} ;

  struct CNDTR7 : public RegisterBase<0x40020484, 32, ReadWriteMode>
  {
    using NDT = DMA2_CNDTR7_NDT_Values<DMA2::CNDTR7, 0, 16, ReadWriteMode, DMA2CNDTR7Base> ;
    using FieldValues = DMA2_CNDTR7_NDT_Values<DMA2::CNDTR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR7Pack  = Register<0x40020484, 32, ReadWriteMode, DMA2CNDTR7Base, T...> ;

  struct DMA2CPAR7Base {} ;

  struct CPAR7 : public RegisterBase<0x40020488, 32, ReadWriteMode>
  {
    using PA = DMA2_CPAR7_PA_Values<DMA2::CPAR7, 0, 32, ReadWriteMode, DMA2CPAR7Base> ;
    using FieldValues = DMA2_CPAR7_PA_Values<DMA2::CPAR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR7Pack  = Register<0x40020488, 32, ReadWriteMode, DMA2CPAR7Base, T...> ;

  struct DMA2CMAR7Base {} ;

  struct CMAR7 : public RegisterBase<0x4002048C, 32, ReadWriteMode>
  {
    using MA = DMA2_CMAR7_MA_Values<DMA2::CMAR7, 0, 32, ReadWriteMode, DMA2CMAR7Base> ;
    using FieldValues = DMA2_CMAR7_MA_Values<DMA2::CMAR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR7Pack  = Register<0x4002048C, 32, ReadWriteMode, DMA2CMAR7Base, T...> ;

} ;

#endif //#if !defined(DMA2REGISTERS_HPP)
