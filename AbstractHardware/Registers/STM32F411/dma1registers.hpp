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

#include "dma1bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Dma1
{
  struct Lisr : public RegisterBase<0x40026000, 32, ReadMode>
  {
    using Tcif3 = DmaLisrTcifValues<Dma1::Lisr, 27, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif3 = DmaLisrHtifValues<Dma1::Lisr, 26, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif3 = DmaLisrTeifValues<Dma1::Lisr, 25, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif3 = DmaLisrDmeifValues<Dma1::Lisr, 24, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif3 = DmaLisrFeifValues<Dma1::Lisr, 22, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif2 = DmaLisrTcifValues<Dma1::Lisr, 21, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif2 = DmaLisrHtifValues<Dma1::Lisr, 20, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif2 = DmaLisrTeifValues<Dma1::Lisr, 19, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif2 = DmaLisrDmeifValues<Dma1::Lisr, 18, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif2 = DmaLisrFeifValues<Dma1::Lisr, 16, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif1 = DmaLisrTcifValues<Dma1::Lisr, 11, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif1 = DmaLisrHtifValues<Dma1::Lisr, 10, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif1 = DmaLisrTeifValues<Dma1::Lisr, 9, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif1 = DmaLisrDmeifValues<Dma1::Lisr, 8, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif1 = DmaLisrFeifValues<Dma1::Lisr, 6, 1, ReadMode, DmaLisrFeifValuesBase> ;
    using Tcif0 = DmaLisrTcifValues<Dma1::Lisr, 5, 1, ReadMode, DmaLisrTcifValuesBase> ;
    using Htif0 = DmaLisrHtifValues<Dma1::Lisr, 4, 1, ReadMode, DmaLisrHtifValuesBase> ;
    using Teif0 = DmaLisrTeifValues<Dma1::Lisr, 3, 1, ReadMode, DmaLisrTeifValuesBase> ;
    using Dmeif0 = DmaLisrDmeifValues<Dma1::Lisr, 2, 1, ReadMode, DmaLisrDmeifValuesBase> ;
    using Feif0 = DmaLisrFeifValues<Dma1::Lisr, 0, 1, ReadMode, DmaLisrFeifValuesBase> ;
  } ;

  template<typename... T> 
  using LisrPack  = Register<0x40026000, 32, ReadMode, DmaLisrTcifValuesBase, T...> ;

  struct Hisr : public RegisterBase<0x40026004, 32, ReadMode>
  {
    using Tcif7 = DmaHisrTcifValues<Dma1::Hisr, 27, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif7 = DmaHisrHtifValues<Dma1::Hisr, 26, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif7 = DmaHisrTeifValues<Dma1::Hisr, 25, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif7 = DmaHisrDmeifValues<Dma1::Hisr, 24, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif7 = DmaHisrFeifValues<Dma1::Hisr, 22, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif6 = DmaHisrTcifValues<Dma1::Hisr, 21, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif6 = DmaHisrHtifValues<Dma1::Hisr, 20, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif6 = DmaHisrTeifValues<Dma1::Hisr, 19, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif6 = DmaHisrDmeifValues<Dma1::Hisr, 18, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif6 = DmaHisrFeifValues<Dma1::Hisr, 16, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif5 = DmaHisrTcifValues<Dma1::Hisr, 11, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif5 = DmaHisrHtifValues<Dma1::Hisr, 10, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif5 = DmaHisrTeifValues<Dma1::Hisr, 9, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif5 = DmaHisrDmeifValues<Dma1::Hisr, 8, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif5 = DmaHisrFeifValues<Dma1::Hisr, 6, 1, ReadMode, DmaHisrFeifValuesBase> ;
    using Tcif4 = DmaHisrTcifValues<Dma1::Hisr, 5, 1, ReadMode, DmaHisrTcifValuesBase> ;
    using Htif4 = DmaHisrHtifValues<Dma1::Hisr, 4, 1, ReadMode, DmaHisrHtifValuesBase> ;
    using Teif4 = DmaHisrTeifValues<Dma1::Hisr, 3, 1, ReadMode, DmaHisrTeifValuesBase> ;
    using Dmeif4 = DmaHisrDmeifValues<Dma1::Hisr, 2, 1, ReadMode, DmaHisrDmeifValuesBase> ;
    using Feif4 = DmaHisrFeifValues<Dma1::Hisr, 0, 1, ReadMode, DmaHisrFeifValuesBase> ;
  } ;

  template<typename... T> 
  using HisrPack  = Register<0x40026004, 32, ReadMode, DmaHisrTcifValuesBase, T...> ;

  struct Lifcr : public RegisterBase<0x40026008, 32, WriteMode>
  {
    using Ctcif3 = DmaLifcrCtcifValues<Dma1::Lifcr, 27, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif3 = DmaLifcrChtifValues<Dma1::Lifcr, 26, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif3 = DmaLifcrCteifValues<Dma1::Lifcr, 25, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif3 = DmaLifcrCdmeifValues<Dma1::Lifcr, 24, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif3 = DmaLifcrCfeifValues<Dma1::Lifcr, 22, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif2 = DmaLifcrCtcifValues<Dma1::Lifcr, 21, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif2 = DmaLifcrChtifValues<Dma1::Lifcr, 20, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif2 = DmaLifcrCteifValues<Dma1::Lifcr, 19, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif2 = DmaLifcrCdmeifValues<Dma1::Lifcr, 18, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif2 = DmaLifcrCfeifValues<Dma1::Lifcr, 16, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif1 = DmaLifcrCtcifValues<Dma1::Lifcr, 11, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif1 = DmaLifcrChtifValues<Dma1::Lifcr, 10, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif1 = DmaLifcrCteifValues<Dma1::Lifcr, 9, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif1 = DmaLifcrCdmeifValues<Dma1::Lifcr, 8, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif1 = DmaLifcrCfeifValues<Dma1::Lifcr, 6, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
    using Ctcif0 = DmaLifcrCtcifValues<Dma1::Lifcr, 5, 1, WriteMode, DmaLifcrCtcifValuesBase> ;
    using Chtif0 = DmaLifcrChtifValues<Dma1::Lifcr, 4, 1, WriteMode, DmaLifcrChtifValuesBase> ;
    using Cteif0 = DmaLifcrCteifValues<Dma1::Lifcr, 3, 1, WriteMode, DmaLifcrCteifValuesBase> ;
    using Cdmeif0 = DmaLifcrCdmeifValues<Dma1::Lifcr, 2, 1, WriteMode, DmaLifcrCdmeifValuesBase> ;
    using Cfeif0 = DmaLifcrCfeifValues<Dma1::Lifcr, 0, 1, WriteMode, DmaLifcrCfeifValuesBase> ;
  } ;

  template<typename... T> 
  using LifcrPack  = Register<0x40026008, 32, WriteMode, DmaLifcrCtcifValuesBase, T...> ;

  struct Hifcr : public RegisterBase<0x4002600C, 32, WriteMode>
  {
    using Ctcif7 = DmaHifcrCtcifValues<Dma1::Hifcr, 27, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif7 = DmaHifcrChtifValues<Dma1::Hifcr, 26, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif7 = DmaHifcrCteifValues<Dma1::Hifcr, 25, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif7 = DmaHifcrCdmeifValues<Dma1::Hifcr, 24, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif7 = DmaHifcrCfeifValues<Dma1::Hifcr, 22, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif6 = DmaHifcrCtcifValues<Dma1::Hifcr, 21, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif6 = DmaHifcrChtifValues<Dma1::Hifcr, 20, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif6 = DmaHifcrCteifValues<Dma1::Hifcr, 19, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif6 = DmaHifcrCdmeifValues<Dma1::Hifcr, 18, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif6 = DmaHifcrCfeifValues<Dma1::Hifcr, 16, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif5 = DmaHifcrCtcifValues<Dma1::Hifcr, 11, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif5 = DmaHifcrChtifValues<Dma1::Hifcr, 10, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif5 = DmaHifcrCteifValues<Dma1::Hifcr, 9, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif5 = DmaHifcrCdmeifValues<Dma1::Hifcr, 8, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif5 = DmaHifcrCfeifValues<Dma1::Hifcr, 6, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
    using Ctcif4 = DmaHifcrCtcifValues<Dma1::Hifcr, 5, 1, WriteMode, DmaHifcrCtcifValuesBase> ;
    using Chtif4 = DmaHifcrChtifValues<Dma1::Hifcr, 4, 1, WriteMode, DmaHifcrChtifValuesBase> ;
    using Cteif4 = DmaHifcrCteifValues<Dma1::Hifcr, 3, 1, WriteMode, DmaHifcrCteifValuesBase> ;
    using Cdmeif4 = DmaHifcrCdmeifValues<Dma1::Hifcr, 2, 1, WriteMode, DmaHifcrCdmeifValuesBase> ;
    using Cfeif4 = DmaHifcrCfeifValues<Dma1::Hifcr, 0, 1, WriteMode, DmaHifcrCfeifValuesBase> ;
  } ;

  template<typename... T> 
  using HifcrPack  = Register<0x4002600C, 32, WriteMode, DmaHifcrCtcifValuesBase, T...> ;

  struct S0Cr : public RegisterBase<0x40026010, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S0Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S0Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S0Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S0Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S0Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S0Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S0Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S0Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S0Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S0Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S0Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S0Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S0Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S0Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S0Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S0Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S0Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S0Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S0Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S0CrPack  = Register<0x40026010, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S0Ndtr : public RegisterBase<0x40026014, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S0Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S0NdtrPack  = Register<0x40026014, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S0Par : public RegisterBase<0x40026018, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S0Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S0ParPack  = Register<0x40026018, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S0M0Ar : public RegisterBase<0x4002601C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S0M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S0M0ArPack  = Register<0x4002601C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S0M1Ar : public RegisterBase<0x40026020, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S0M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S0M1ArPack  = Register<0x40026020, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S0Fcr : public RegisterBase<0x40026024, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S0Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S0Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S0Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S0Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S0FcrPack  = Register<0x40026024, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S1Cr : public RegisterBase<0x40026028, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S1Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S1Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S1Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S1Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S1Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S1Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S1Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S1Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S1Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S1Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S1Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S1Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S1Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S1Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S1Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S1Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S1Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S1Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S1Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S1Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S1CrPack  = Register<0x40026028, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S1Ndtr : public RegisterBase<0x4002602C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S1Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S1NdtrPack  = Register<0x4002602C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S1Par : public RegisterBase<0x40026030, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S1Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S1ParPack  = Register<0x40026030, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S1M0Ar : public RegisterBase<0x40026034, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S1M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S1M0ArPack  = Register<0x40026034, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S1M1Ar : public RegisterBase<0x40026038, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S1M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S1M1ArPack  = Register<0x40026038, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S1Fcr : public RegisterBase<0x4002603C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S1Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S1Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S1Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S1Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S1FcrPack  = Register<0x4002603C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S2Cr : public RegisterBase<0x40026040, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S2Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S2Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S2Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S2Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S2Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S2Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S2Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S2Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S2Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S2Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S2Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S2Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S2Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S2Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S2Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S2Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S2Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S2Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S2Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S2Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S2CrPack  = Register<0x40026040, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S2Ndtr : public RegisterBase<0x40026044, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S2Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S2NdtrPack  = Register<0x40026044, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S2Par : public RegisterBase<0x40026048, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S2Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S2ParPack  = Register<0x40026048, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S2M0Ar : public RegisterBase<0x4002604C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S2M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S2M0ArPack  = Register<0x4002604C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S2M1Ar : public RegisterBase<0x40026050, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S2M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S2M1ArPack  = Register<0x40026050, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S2Fcr : public RegisterBase<0x40026054, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S2Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S2Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S2Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S2Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S2FcrPack  = Register<0x40026054, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S3Cr : public RegisterBase<0x40026058, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S3Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S3Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S3Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S3Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S3Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S3Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S3Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S3Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S3Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S3Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S3Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S3Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S3Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S3Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S3Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S3Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S3Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S3Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S3Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S3Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S3CrPack  = Register<0x40026058, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S3Ndtr : public RegisterBase<0x4002605C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S3Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S3NdtrPack  = Register<0x4002605C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S3Par : public RegisterBase<0x40026060, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S3Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S3ParPack  = Register<0x40026060, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S3M0Ar : public RegisterBase<0x40026064, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S3M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S3M0ArPack  = Register<0x40026064, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S3M1Ar : public RegisterBase<0x40026068, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S3M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S3M1ArPack  = Register<0x40026068, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S3Fcr : public RegisterBase<0x4002606C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S3Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S3Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S3Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S3Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S3FcrPack  = Register<0x4002606C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S4Cr : public RegisterBase<0x40026070, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S4Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S4Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S4Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S4Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S4Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S4Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S4Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S4Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S4Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S4Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S4Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S4Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S4Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S4Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S4Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S4Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S4Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S4Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S4Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S4Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S4CrPack  = Register<0x40026070, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S4Ndtr : public RegisterBase<0x40026074, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S4Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S4NdtrPack  = Register<0x40026074, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S4Par : public RegisterBase<0x40026078, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S4Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S4ParPack  = Register<0x40026078, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S4M0Ar : public RegisterBase<0x4002607C, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S4M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S4M0ArPack  = Register<0x4002607C, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S4M1Ar : public RegisterBase<0x40026080, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S4M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S4M1ArPack  = Register<0x40026080, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S4Fcr : public RegisterBase<0x40026084, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S4Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S4Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S4Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S4Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S4FcrPack  = Register<0x40026084, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S5Cr : public RegisterBase<0x40026088, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S5Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S5Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S5Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S5Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S5Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S5Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S5Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S5Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S5Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S5Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S5Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S5Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S5Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S5Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S5Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S5Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S5Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S5Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S5Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S5Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S5CrPack  = Register<0x40026088, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S5Ndtr : public RegisterBase<0x4002608C, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S5Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S5NdtrPack  = Register<0x4002608C, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S5Par : public RegisterBase<0x40026090, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S5Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S5ParPack  = Register<0x40026090, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S5M0Ar : public RegisterBase<0x40026094, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S5M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S5M0ArPack  = Register<0x40026094, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S5M1Ar : public RegisterBase<0x40026098, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S5M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S5M1ArPack  = Register<0x40026098, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S5Fcr : public RegisterBase<0x4002609C, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S5Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S5Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S5Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S5Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S5FcrPack  = Register<0x4002609C, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S6Cr : public RegisterBase<0x400260A0, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S6Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S6Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S6Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S6Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S6Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S6Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S6Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S6Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S6Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S6Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S6Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S6Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S6Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S6Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S6Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S6Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S6Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S6Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S6Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S6Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S6CrPack  = Register<0x400260A0, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S6Ndtr : public RegisterBase<0x400260A4, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S6Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S6NdtrPack  = Register<0x400260A4, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S6Par : public RegisterBase<0x400260A8, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S6Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S6ParPack  = Register<0x400260A8, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S6M0Ar : public RegisterBase<0x400260AC, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S6M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S6M0ArPack  = Register<0x400260AC, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S6M1Ar : public RegisterBase<0x400260B0, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S6M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S6M1ArPack  = Register<0x400260B0, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S6Fcr : public RegisterBase<0x400260B4, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S6Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S6Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S6Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S6Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S6FcrPack  = Register<0x400260B4, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

  struct S7Cr : public RegisterBase<0x400260B8, 32, ReadWriteMode>
  {
    using Chsel = DmaSCrChselValues<Dma1::S7Cr, 25, 3, ReadWriteMode, DmaSCrChselValuesBase> ;
    using Mburst = DmaSCrMburstValues<Dma1::S7Cr, 23, 2, ReadWriteMode, DmaSCrMburstValuesBase> ;
    using Pburst = DmaSCrPburstValues<Dma1::S7Cr, 21, 2, ReadWriteMode, DmaSCrPburstValuesBase> ;
    using Ack = DmaSCrAckValues<Dma1::S7Cr, 20, 1, ReadWriteMode, DmaSCrAckValuesBase> ;
    using Ct = DmaSCrCtValues<Dma1::S7Cr, 19, 1, ReadWriteMode, DmaSCrCtValuesBase> ;
    using Dbm = DmaSCrDbmValues<Dma1::S7Cr, 18, 1, ReadWriteMode, DmaSCrDbmValuesBase> ;
    using Pl = DmaSCrPlValues<Dma1::S7Cr, 16, 2, ReadWriteMode, DmaSCrPlValuesBase> ;
    using Pincos = DmaSCrPincosValues<Dma1::S7Cr, 15, 1, ReadWriteMode, DmaSCrPincosValuesBase> ;
    using Msize = DmaSCrMsizeValues<Dma1::S7Cr, 13, 2, ReadWriteMode, DmaSCrMsizeValuesBase> ;
    using Psize = DmaSCrPsizeValues<Dma1::S7Cr, 11, 2, ReadWriteMode, DmaSCrPsizeValuesBase> ;
    using Minc = DmaSCrMincValues<Dma1::S7Cr, 10, 1, ReadWriteMode, DmaSCrMincValuesBase> ;
    using Pinc = DmaSCrPincValues<Dma1::S7Cr, 9, 1, ReadWriteMode, DmaSCrPincValuesBase> ;
    using Circ = DmaSCrCircValues<Dma1::S7Cr, 8, 1, ReadWriteMode, DmaSCrCircValuesBase> ;
    using Dir = DmaSCrDirValues<Dma1::S7Cr, 6, 2, ReadWriteMode, DmaSCrDirValuesBase> ;
    using Pfctrl = DmaSCrPfctrlValues<Dma1::S7Cr, 5, 1, ReadWriteMode, DmaSCrPfctrlValuesBase> ;
    using Tcie = DmaSCrTcieValues<Dma1::S7Cr, 4, 1, ReadWriteMode, DmaSCrTcieValuesBase> ;
    using Htie = DmaSCrHtieValues<Dma1::S7Cr, 3, 1, ReadWriteMode, DmaSCrHtieValuesBase> ;
    using Teie = DmaSCrTeieValues<Dma1::S7Cr, 2, 1, ReadWriteMode, DmaSCrTeieValuesBase> ;
    using Dmeie = DmaSCrDmeieValues<Dma1::S7Cr, 1, 1, ReadWriteMode, DmaSCrDmeieValuesBase> ;
    using En = DmaSCrEnValues<Dma1::S7Cr, 0, 1, ReadWriteMode, DmaSCrEnValuesBase> ;
  } ;

  template<typename... T> 
  using S7CrPack  = Register<0x400260B8, 32, ReadWriteMode, DmaSCrChselValuesBase, T...> ;

  struct S7Ndtr : public RegisterBase<0x400260BC, 32, ReadWriteMode>
  {
    using Ndt = ReadWriteMode<Dma1::S7Ndtr, 0, 16> ;
  } ;

  template<typename... T> 
  using S7NdtrPack  = Register<0x400260BC, 32, ReadWriteMode, DmaSNdtrNdtValuesBase, T...> ;

  struct S7Par : public RegisterBase<0x400260C0, 32, ReadWriteMode>
  {
    using Pa = ReadWriteMode<Dma1::S7Par, 0, 32> ;
  } ;

  template<typename... T> 
  using S7ParPack  = Register<0x400260C0, 32, ReadWriteMode, DmaSParPaValuesBase, T...> ;

  struct S7M0Ar : public RegisterBase<0x400260C4, 32, ReadWriteMode>
  {
    using M0A = ReadWriteMode<Dma1::S7M0Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S7M0ArPack  = Register<0x400260C4, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S7M1Ar : public RegisterBase<0x400260C8, 32, ReadWriteMode>
  {
    using M1A = ReadWriteMode<Dma1::S7M1Ar, 0, 32> ;
  } ;

  template<typename... T> 
  using S7M1ArPack  = Register<0x400260C8, 32, ReadWriteMode, DmaSMArMAValuesBase, T...> ;

  struct S7Fcr : public RegisterBase<0x400260CC, 32, ReadWriteMode>
  {
    using Feie = DmaSFcrFeieValues<Dma1::S7Fcr, 7, 1, ReadWriteMode, DmaSFcrFeieValuesBase> ;
    using Fs = DmaSFcrFsValues<Dma1::S7Fcr, 3, 3, ReadMode, DmaSFcrFsValuesBase> ;
    using Dmdis = DmaSFcrDmdisValues<Dma1::S7Fcr, 2, 1, ReadWriteMode, DmaSFcrDmdisValuesBase> ;
    using Fth = DmaSFcrFthValues<Dma1::S7Fcr, 0, 2, ReadWriteMode, DmaSFcrFthValuesBase> ;
  } ;

  template<typename... T> 
  using S7FcrPack  = Register<0x400260CC, 32, ReadWriteMode, DmaSFcrFeieValuesBase, T...> ;

} ;

#endif //#if !defined(DMA1REGISTERS_HPP)
