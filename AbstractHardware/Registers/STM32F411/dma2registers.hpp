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

#include "dma2bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Dma2
{
  struct Lisr : public RegisterBase<0x40026400, 32, ReadMode>
  {
    using Tcif3 = DmaLisrTcifValues<Dma2::Lisr, 27, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif3 = DmaLisrHtifValues<Dma2::Lisr, 26, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif3 = DmaLisrTeifValues<Dma2::Lisr, 25, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif3 = DmaLisrDmeifValues<Dma2::Lisr, 24, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif3 = DmaLisrFeifValues<Dma2::Lisr, 22, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif2 = DmaLisrTcifValues<Dma2::Lisr, 21, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif2 = DmaLisrHtifValues<Dma2::Lisr, 20, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif2 = DmaLisrTeifValues<Dma2::Lisr, 19, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif2 = DmaLisrDmeifValues<Dma2::Lisr, 18, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif2 = DmaLisrFeifValues<Dma2::Lisr, 16, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif1 = DmaLisrTcifValues<Dma2::Lisr, 11, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif1 = DmaLisrHtifValues<Dma2::Lisr, 10, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif1 = DmaLisrTeifValues<Dma2::Lisr, 9, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif1 = DmaLisrDmeifValues<Dma2::Lisr, 8, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif1 = DmaLisrFeifValues<Dma2::Lisr, 6, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif0 = DmaLisrTcifValues<Dma2::Lisr, 5, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif0 = DmaLisrHtifValues<Dma2::Lisr, 4, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif0 = DmaLisrTeifValues<Dma2::Lisr, 3, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif0 = DmaLisrDmeifValues<Dma2::Lisr, 2, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif0 = DmaLisrFeifValues<Dma2::Lisr, 0, 1, ReadMode, DmaLisrFeifValuesBase> ;
  } ;

  template<typename... T> 
  using LisrPack  = Register<0x40026400, 32, ReadMode, DmaLisrTcifValuesBase, T...> ;

  struct Hisr : public RegisterBase<0x40026404, 32, ReadMode>
  {
    using Tcif7 = DmaHisrTcifValues<Dma2::Hisr, 27, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif7 = DmaHisrHtifValues<Dma2::Hisr, 26, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif7 = DmaHisrTeifValues<Dma2::Hisr, 25, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif7 = DmaHisrDmeifValues<Dma2::Hisr, 24, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif7 = DmaHisrFeifValues<Dma2::Hisr, 22, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif6 = DmaHisrTcifValues<Dma2::Hisr, 21, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif6 = DmaHisrHtifValues<Dma2::Hisr, 20, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif6 = DmaHisrTeifValues<Dma2::Hisr, 19, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif6 = DmaHisrDmeifValues<Dma2::Hisr, 18, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif6 = DmaHisrFeifValues<Dma2::Hisr, 16, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif5 = DmaHisrTcifValues<Dma2::Hisr, 11, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif5 = DmaHisrHtifValues<Dma2::Hisr, 10, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif5 = DmaHisrTeifValues<Dma2::Hisr, 9, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif5 = DmaHisrDmeifValues<Dma2::Hisr, 8, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif5 = DmaHisrFeifValues<Dma2::Hisr, 6, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif4 = DmaHisrTcifValues<Dma2::Hisr, 5, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif4 = DmaHisrHtifValues<Dma2::Hisr, 4, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif4 = DmaHisrTeifValues<Dma2::Hisr, 3, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif4 = DmaHisrDmeifValues<Dma2::Hisr, 2, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif4 = DmaHisrFeifValues<Dma2::Hisr, 0, 1, ReadMode, DmaHisrFeifValuesBase> ;
  } ;

  template<typename... T> 
  using HisrPack  = Register<0x40026404, 32, ReadMode, DmaHisrTcifValuesBase, T...> ;

  struct Lifcr : public RegisterBase<0x40026408, 32, WriteMode>
  {
    using Ctcif3 = DmaLifcrCtcifValues<Dma2::Lifcr, 27, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif3 = DmaLifcrChtifValues<Dma2::Lifcr, 26, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif3 = DmaLifcrCteifValues<Dma2::Lifcr, 25, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif3 = DmaLifcrCdmeifValues<Dma2::Lifcr, 24, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif3 = DmaLifcrCfeifValues<Dma2::Lifcr, 22, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif2 = DmaLifcrCtcifValues<Dma2::Lifcr, 21, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif2 = DmaLifcrChtifValues<Dma2::Lifcr, 20, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif2 = DmaLifcrCteifValues<Dma2::Lifcr, 19, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif2 = DmaLifcrCdmeifValues<Dma2::Lifcr, 18, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif2 = DmaLifcrCfeifValues<Dma2::Lifcr, 16, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif1 = DmaLifcrCtcifValues<Dma2::Lifcr, 11, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif1 = DmaLifcrChtifValues<Dma2::Lifcr, 10, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif1 = DmaLifcrCteifValues<Dma2::Lifcr, 9, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif1 = DmaLifcrCdmeifValues<Dma2::Lifcr, 8, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif1 = DmaLifcrCfeifValues<Dma2::Lifcr, 6, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif0 = DmaLifcrCtcifValues<Dma2::Lifcr, 5, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif0 = DmaLifcrChtifValues<Dma2::Lifcr, 4, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif0 = DmaLifcrCteifValues<Dma2::Lifcr, 3, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif0 = DmaLifcrCdmeifValues<Dma2::Lifcr, 2, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif0 = DmaLifcrCfeifValues<Dma2::Lifcr, 0, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
  } ;

  template<typename... T> 
  using LifcrPack  = Register<0x40026408, 32, WriteMode, DmaLifcrCtcifValuesBase, T...> ;

  struct Hifcr : public RegisterBase<0x4002640C, 32, WriteMode>
  {
    using Ctcif7 = DmaHifcrCtcifValues<Dma2::Hifcr, 27, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif7 = DmaHifcrChtifValues<Dma2::Hifcr, 26, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif7 = DmaHifcrCteifValues<Dma2::Hifcr, 25, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif7 = DmaHifcrCdmeifValues<Dma2::Hifcr, 24, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif7 = DmaHifcrCfeifValues<Dma2::Hifcr, 22, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif6 = DmaHifcrCtcifValues<Dma2::Hifcr, 21, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif6 = DmaHifcrChtifValues<Dma2::Hifcr, 20, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif6 = DmaHifcrCteifValues<Dma2::Hifcr, 19, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif6 = DmaHifcrCdmeifValues<Dma2::Hifcr, 18, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif6 = DmaHifcrCfeifValues<Dma2::Hifcr, 16, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif5 = DmaHifcrCtcifValues<Dma2::Hifcr, 11, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif5 = DmaHifcrChtifValues<Dma2::Hifcr, 10, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif5 = DmaHifcrCteifValues<Dma2::Hifcr, 9, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif5 = DmaHifcrCdmeifValues<Dma2::Hifcr, 8, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif5 = DmaHifcrCfeifValues<Dma2::Hifcr, 6, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif4 = DmaHifcrCtcifValues<Dma2::Hifcr, 5, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif4 = DmaHifcrChtifValues<Dma2::Hifcr, 4, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif4 = DmaHifcrCteifValues<Dma2::Hifcr, 3, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif4 = DmaHifcrCdmeifValues<Dma2::Hifcr, 2, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif4 = DmaHifcrCfeifValues<Dma2::Hifcr, 0, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
  } ;

  template<typename... T> 
  using HifcrPack  = Register<0x4002640C, 32, WriteMode, DmaHifcrCtcifValuesBase, T...> ;

  struct S0Cr : public RegisterBase<0x40026410, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S0Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S0Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S0Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S0Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S0Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S0Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S0Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S0Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S0Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S0Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S0Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S0Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S0Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S0Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S0Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S0Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S0Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S0Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S0Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S0CrPack  = Register<0x40026410, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S0Ndtr : public RegisterBase<0x40026414, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S0Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S0NdtrPack  = Register<0x40026414, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S0Par : public RegisterBase<0x40026418, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S0Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S0ParPack  = Register<0x40026418, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S0M0Ar : public RegisterBase<0x4002641C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S0M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S0M0ArPack  = Register<0x4002641C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S0M1Ar : public RegisterBase<0x40026420, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S0M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S0M1ArPack  = Register<0x40026420, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S0Fcr : public RegisterBase<0x40026424, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S0Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S0Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S0Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S0Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S0FcrPack  = Register<0x40026424, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S1Cr : public RegisterBase<0x40026428, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S1Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S1Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S1Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S1Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S1Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S1Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S1Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S1Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S1Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S1Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S1Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S1Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S1Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S1Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S1Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S1Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S1Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S1Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S1Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S1Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S1CrPack  = Register<0x40026428, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S1Ndtr : public RegisterBase<0x4002642C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S1Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S1NdtrPack  = Register<0x4002642C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S1Par : public RegisterBase<0x40026430, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S1Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S1ParPack  = Register<0x40026430, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S1M0Ar : public RegisterBase<0x40026434, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S1M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S1M0ArPack  = Register<0x40026434, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S1M1Ar : public RegisterBase<0x40026438, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S1M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S1M1ArPack  = Register<0x40026438, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S1Fcr : public RegisterBase<0x4002643C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S1Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S1Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S1Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S1Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S1FcrPack  = Register<0x4002643C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S2Cr : public RegisterBase<0x40026440, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S2Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S2Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S2Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S2Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S2Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S2Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S2Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S2Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S2Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S2Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S2Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S2Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S2Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S2Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S2Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S2Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S2Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S2Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S2Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S2Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S2CrPack  = Register<0x40026440, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S2Ndtr : public RegisterBase<0x40026444, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S2Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S2NdtrPack  = Register<0x40026444, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S2Par : public RegisterBase<0x40026448, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S2Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S2ParPack  = Register<0x40026448, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S2M0Ar : public RegisterBase<0x4002644C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S2M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S2M0ArPack  = Register<0x4002644C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S2M1Ar : public RegisterBase<0x40026450, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S2M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S2M1ArPack  = Register<0x40026450, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S2Fcr : public RegisterBase<0x40026454, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S2Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S2Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S2Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S2Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S2FcrPack  = Register<0x40026454, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S3Cr : public RegisterBase<0x40026458, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S3Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S3Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S3Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S3Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S3Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S3Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S3Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S3Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S3Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S3Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S3Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S3Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S3Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S3Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S3Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S3Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S3Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S3Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S3Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S3Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S3CrPack  = Register<0x40026458, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S3Ndtr : public RegisterBase<0x4002645C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S3Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S3NdtrPack  = Register<0x4002645C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S3Par : public RegisterBase<0x40026460, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S3Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S3ParPack  = Register<0x40026460, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S3M0Ar : public RegisterBase<0x40026464, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S3M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S3M0ArPack  = Register<0x40026464, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S3M1Ar : public RegisterBase<0x40026468, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S3M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S3M1ArPack  = Register<0x40026468, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S3Fcr : public RegisterBase<0x4002646C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S3Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S3Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S3Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S3Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S3FcrPack  = Register<0x4002646C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S4Cr : public RegisterBase<0x40026470, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S4Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S4Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S4Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S4Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S4Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S4Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S4Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S4Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S4Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S4Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S4Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S4Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S4Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S4Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S4Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S4Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S4Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S4Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S4Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S4Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S4CrPack  = Register<0x40026470, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S4Ndtr : public RegisterBase<0x40026474, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S4Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S4NdtrPack  = Register<0x40026474, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S4Par : public RegisterBase<0x40026478, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S4Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S4ParPack  = Register<0x40026478, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S4M0Ar : public RegisterBase<0x4002647C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S4M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S4M0ArPack  = Register<0x4002647C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S4M1Ar : public RegisterBase<0x40026480, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S4M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S4M1ArPack  = Register<0x40026480, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S4Fcr : public RegisterBase<0x40026484, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S4Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S4Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S4Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S4Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S4FcrPack  = Register<0x40026484, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S5Cr : public RegisterBase<0x40026488, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S5Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S5Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S5Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S5Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S5Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S5Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S5Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S5Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S5Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S5Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S5Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S5Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S5Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S5Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S5Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S5Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S5Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S5Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S5Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S5Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S5CrPack  = Register<0x40026488, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S5Ndtr : public RegisterBase<0x4002648C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S5Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S5NdtrPack  = Register<0x4002648C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S5Par : public RegisterBase<0x40026490, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S5Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S5ParPack  = Register<0x40026490, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S5M0Ar : public RegisterBase<0x40026494, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S5M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S5M0ArPack  = Register<0x40026494, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S5M1Ar : public RegisterBase<0x40026498, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S5M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S5M1ArPack  = Register<0x40026498, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S5Fcr : public RegisterBase<0x4002649C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S5Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S5Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S5Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S5Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S5FcrPack  = Register<0x4002649C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S6Cr : public RegisterBase<0x400264A0, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S6Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S6Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S6Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S6Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S6Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S6Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S6Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S6Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S6Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S6Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S6Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S6Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S6Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S6Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S6Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S6Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S6Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S6Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S6Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S6Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S6CrPack  = Register<0x400264A0, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S6Ndtr : public RegisterBase<0x400264A4, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S6Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S6NdtrPack  = Register<0x400264A4, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S6Par : public RegisterBase<0x400264A8, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S6Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S6ParPack  = Register<0x400264A8, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S6M0Ar : public RegisterBase<0x400264AC, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S6M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S6M0ArPack  = Register<0x400264AC, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S6M1Ar : public RegisterBase<0x400264B0, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S6M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S6M1ArPack  = Register<0x400264B0, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S6Fcr : public RegisterBase<0x400264B4, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S6Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S6Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S6Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S6Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S6FcrPack  = Register<0x400264B4, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S7Cr : public RegisterBase<0x400264B8, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma2::S7Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma2::S7Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma2::S7Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma2::S7Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma2::S7Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma2::S7Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma2::S7Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma2::S7Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma2::S7Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma2::S7Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma2::S7Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma2::S7Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma2::S7Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma2::S7Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma2::S7Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma2::S7Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma2::S7Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma2::S7Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma2::S7Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma2::S7Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S7CrPack  = Register<0x400264B8, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S7Ndtr : public RegisterBase<0x400264BC, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma2::S7Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S7NdtrPack  = Register<0x400264BC, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S7Par : public RegisterBase<0x400264C0, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma2::S7Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S7ParPack  = Register<0x400264C0, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S7M0Ar : public RegisterBase<0x400264C4, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma2::S7M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S7M0ArPack  = Register<0x400264C4, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S7M1Ar : public RegisterBase<0x400264C8, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma2::S7M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S7M1ArPack  = Register<0x400264C8, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S7Fcr : public RegisterBase<0x400264CC, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma2::S7Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma2::S7Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma2::S7Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma2::S7Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S7FcrPack  = Register<0x400264CC, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

} ;

#endif //#if !defined(DMA2REGISTERS_HPP)
