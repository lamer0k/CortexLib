/*******************************************************************************
* Filename      : dmaregisters.hpp
*
* Details       : Direct memory access controller. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "dmafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA
{
  struct DMADMA_INTSTSBase {} ;

  struct DMA_INTSTS : public RegisterBase<0x40020000, 32, ReadWriteMode>
  {
    using GLBF1 = DMA_DMA_INTSTS_GLBF1_Values<DMA::DMA_INTSTS, 0, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF1 = DMA_DMA_INTSTS_TXCF1_Values<DMA::DMA_INTSTS, 1, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF1 = DMA_DMA_INTSTS_HTXF1_Values<DMA::DMA_INTSTS, 2, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF1 = DMA_DMA_INTSTS_ERRF1_Values<DMA::DMA_INTSTS, 3, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF2 = DMA_DMA_INTSTS_GLBF2_Values<DMA::DMA_INTSTS, 4, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF2 = DMA_DMA_INTSTS_TXCF2_Values<DMA::DMA_INTSTS, 5, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF2 = DMA_DMA_INTSTS_HTXF2_Values<DMA::DMA_INTSTS, 6, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF2 = DMA_DMA_INTSTS_ERRF2_Values<DMA::DMA_INTSTS, 7, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF3 = DMA_DMA_INTSTS_GLBF3_Values<DMA::DMA_INTSTS, 8, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF3 = DMA_DMA_INTSTS_TXCF3_Values<DMA::DMA_INTSTS, 9, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF3 = DMA_DMA_INTSTS_HTXF3_Values<DMA::DMA_INTSTS, 10, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF3 = DMA_DMA_INTSTS_ERRF3_Values<DMA::DMA_INTSTS, 11, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF4 = DMA_DMA_INTSTS_GLBF4_Values<DMA::DMA_INTSTS, 12, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF4 = DMA_DMA_INTSTS_TXCF4_Values<DMA::DMA_INTSTS, 13, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF4 = DMA_DMA_INTSTS_HTXF4_Values<DMA::DMA_INTSTS, 14, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF4 = DMA_DMA_INTSTS_ERRF4_Values<DMA::DMA_INTSTS, 15, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF5 = DMA_DMA_INTSTS_GLBF5_Values<DMA::DMA_INTSTS, 16, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF5 = DMA_DMA_INTSTS_TXCF5_Values<DMA::DMA_INTSTS, 17, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF5 = DMA_DMA_INTSTS_HTXF5_Values<DMA::DMA_INTSTS, 18, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF5 = DMA_DMA_INTSTS_ERRF5_Values<DMA::DMA_INTSTS, 19, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF6 = DMA_DMA_INTSTS_GLBF6_Values<DMA::DMA_INTSTS, 20, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF6 = DMA_DMA_INTSTS_TXCF6_Values<DMA::DMA_INTSTS, 21, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF6 = DMA_DMA_INTSTS_HTXF6_Values<DMA::DMA_INTSTS, 22, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF6 = DMA_DMA_INTSTS_ERRF6_Values<DMA::DMA_INTSTS, 23, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF7 = DMA_DMA_INTSTS_GLBF7_Values<DMA::DMA_INTSTS, 24, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF7 = DMA_DMA_INTSTS_TXCF7_Values<DMA::DMA_INTSTS, 25, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF7 = DMA_DMA_INTSTS_HTXF7_Values<DMA::DMA_INTSTS, 26, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF7 = DMA_DMA_INTSTS_ERRF7_Values<DMA::DMA_INTSTS, 27, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using GLBF8 = DMA_DMA_INTSTS_GLBF8_Values<DMA::DMA_INTSTS, 28, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using TXCF8 = DMA_DMA_INTSTS_TXCF8_Values<DMA::DMA_INTSTS, 29, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using HTXF8 = DMA_DMA_INTSTS_HTXF8_Values<DMA::DMA_INTSTS, 30, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using ERRF8 = DMA_DMA_INTSTS_ERRF8_Values<DMA::DMA_INTSTS, 31, 1, ReadWriteMode, DMADMA_INTSTSBase> ;
    using FieldValues = DMA_DMA_INTSTS_ERRF8_Values<DMA::DMA_INTSTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_INTSTSPack  = Register<0x40020000, 32, ReadWriteMode, DMADMA_INTSTSBase, T...> ;

  struct DMADMA_INTCLRBase {} ;

  struct DMA_INTCLR : public RegisterBase<0x40020004, 32, ReadWriteMode>
  {
    using CGLBF1 = DMA_DMA_INTCLR_CGLBF1_Values<DMA::DMA_INTCLR, 0, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF1 = DMA_DMA_INTCLR_CTXCF1_Values<DMA::DMA_INTCLR, 1, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF1 = DMA_DMA_INTCLR_CHTXF1_Values<DMA::DMA_INTCLR, 2, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF1 = DMA_DMA_INTCLR_CERRF1_Values<DMA::DMA_INTCLR, 3, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF2 = DMA_DMA_INTCLR_CGLBF2_Values<DMA::DMA_INTCLR, 4, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF2 = DMA_DMA_INTCLR_CTXCF2_Values<DMA::DMA_INTCLR, 5, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF2 = DMA_DMA_INTCLR_CHTXF2_Values<DMA::DMA_INTCLR, 6, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF2 = DMA_DMA_INTCLR_CERRF2_Values<DMA::DMA_INTCLR, 7, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF3 = DMA_DMA_INTCLR_CGLBF3_Values<DMA::DMA_INTCLR, 8, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF3 = DMA_DMA_INTCLR_CTXCF3_Values<DMA::DMA_INTCLR, 9, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF3 = DMA_DMA_INTCLR_CHTXF3_Values<DMA::DMA_INTCLR, 10, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF3 = DMA_DMA_INTCLR_CERRF3_Values<DMA::DMA_INTCLR, 11, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF4 = DMA_DMA_INTCLR_CGLBF4_Values<DMA::DMA_INTCLR, 12, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF4 = DMA_DMA_INTCLR_CTXCF4_Values<DMA::DMA_INTCLR, 13, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF4 = DMA_DMA_INTCLR_CHTXF4_Values<DMA::DMA_INTCLR, 14, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF4 = DMA_DMA_INTCLR_CERRF4_Values<DMA::DMA_INTCLR, 15, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF5 = DMA_DMA_INTCLR_CGLBF5_Values<DMA::DMA_INTCLR, 16, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF5 = DMA_DMA_INTCLR_CTXCF5_Values<DMA::DMA_INTCLR, 17, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF5 = DMA_DMA_INTCLR_CHTXF5_Values<DMA::DMA_INTCLR, 18, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF5 = DMA_DMA_INTCLR_CERRF5_Values<DMA::DMA_INTCLR, 19, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF6 = DMA_DMA_INTCLR_CGLBF6_Values<DMA::DMA_INTCLR, 20, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF6 = DMA_DMA_INTCLR_CTXCF6_Values<DMA::DMA_INTCLR, 21, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF6 = DMA_DMA_INTCLR_CHTXF6_Values<DMA::DMA_INTCLR, 22, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF6 = DMA_DMA_INTCLR_CERRF6_Values<DMA::DMA_INTCLR, 23, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF7 = DMA_DMA_INTCLR_CGLBF7_Values<DMA::DMA_INTCLR, 24, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF7 = DMA_DMA_INTCLR_CTXCF7_Values<DMA::DMA_INTCLR, 25, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF7 = DMA_DMA_INTCLR_CHTXF7_Values<DMA::DMA_INTCLR, 26, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF7 = DMA_DMA_INTCLR_CERRF7_Values<DMA::DMA_INTCLR, 27, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CGLBF8 = DMA_DMA_INTCLR_CGLBF8_Values<DMA::DMA_INTCLR, 28, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CTXCF8 = DMA_DMA_INTCLR_CTXCF8_Values<DMA::DMA_INTCLR, 29, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CHTXF8 = DMA_DMA_INTCLR_CHTXF8_Values<DMA::DMA_INTCLR, 30, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using CERRF8 = DMA_DMA_INTCLR_CERRF8_Values<DMA::DMA_INTCLR, 31, 1, ReadWriteMode, DMADMA_INTCLRBase> ;
    using FieldValues = DMA_DMA_INTCLR_CERRF8_Values<DMA::DMA_INTCLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_INTCLRPack  = Register<0x40020004, 32, ReadWriteMode, DMADMA_INTCLRBase, T...> ;

  struct DMADMA_CHCFG1Base {} ;

  struct DMA_CHCFG1 : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG1_CHEN_Values<DMA::DMA_CHCFG1, 0, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using TXCIE = DMA_DMA_CHCFG1_TXCIE_Values<DMA::DMA_CHCFG1, 1, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using HTXIE = DMA_DMA_CHCFG1_HTXIE_Values<DMA::DMA_CHCFG1, 2, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using ERRIE = DMA_DMA_CHCFG1_ERRIE_Values<DMA::DMA_CHCFG1, 3, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using DIR = DMA_DMA_CHCFG1_DIR_Values<DMA::DMA_CHCFG1, 4, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using CIRC = DMA_DMA_CHCFG1_CIRC_Values<DMA::DMA_CHCFG1, 5, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using PINC = DMA_DMA_CHCFG1_PINC_Values<DMA::DMA_CHCFG1, 6, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using MINC = DMA_DMA_CHCFG1_MINC_Values<DMA::DMA_CHCFG1, 7, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using PSIZE = DMA_DMA_CHCFG1_PSIZE_Values<DMA::DMA_CHCFG1, 8, 2, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using MSIZE = DMA_DMA_CHCFG1_MSIZE_Values<DMA::DMA_CHCFG1, 10, 2, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using PRIOLVL = DMA_DMA_CHCFG1_PRIOLVL_Values<DMA::DMA_CHCFG1, 12, 2, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using MEM2MEM = DMA_DMA_CHCFG1_MEM2MEM_Values<DMA::DMA_CHCFG1, 14, 1, ReadWriteMode, DMADMA_CHCFG1Base> ;
    using FieldValues = DMA_DMA_CHCFG1_MEM2MEM_Values<DMA::DMA_CHCFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG1Pack  = Register<0x40020008, 32, ReadWriteMode, DMADMA_CHCFG1Base, T...> ;

  struct DMADMA_TXNUM1Base {} ;

  struct DMA_TXNUM1 : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM1_NDTX_Values<DMA::DMA_TXNUM1, 0, 16, ReadWriteMode, DMADMA_TXNUM1Base> ;
    using FieldValues = DMA_DMA_TXNUM1_NDTX_Values<DMA::DMA_TXNUM1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM1Pack  = Register<0x4002000C, 32, ReadWriteMode, DMADMA_TXNUM1Base, T...> ;

  struct DMADMA_PADDR1Base {} ;

  struct DMA_PADDR1 : public RegisterBase<0x40020010, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR1_ADDR_Values<DMA::DMA_PADDR1, 0, 32, ReadWriteMode, DMADMA_PADDR1Base> ;
    using FieldValues = DMA_DMA_PADDR1_ADDR_Values<DMA::DMA_PADDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR1Pack  = Register<0x40020010, 32, ReadWriteMode, DMADMA_PADDR1Base, T...> ;

  struct DMADMA_MADDR1Base {} ;

  struct DMA_MADDR1 : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR1_ADDR_Values<DMA::DMA_MADDR1, 0, 32, ReadWriteMode, DMADMA_MADDR1Base> ;
    using FieldValues = DMA_DMA_MADDR1_ADDR_Values<DMA::DMA_MADDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR1Pack  = Register<0x40020014, 32, ReadWriteMode, DMADMA_MADDR1Base, T...> ;

  struct DMADMA_CHSEL1Base {} ;

  struct DMA_CHSEL1 : public RegisterBase<0x40020018, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL1_CH_SEL_Values<DMA::DMA_CHSEL1, 0, 6, ReadWriteMode, DMADMA_CHSEL1Base> ;
    using FieldValues = DMA_DMA_CHSEL1_CH_SEL_Values<DMA::DMA_CHSEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL1Pack  = Register<0x40020018, 32, ReadWriteMode, DMADMA_CHSEL1Base, T...> ;

  struct DMADMA_CHCFG2Base {} ;

  struct DMA_CHCFG2 : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG2_CHEN_Values<DMA::DMA_CHCFG2, 0, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using TXCIE = DMA_DMA_CHCFG2_TXCIE_Values<DMA::DMA_CHCFG2, 1, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using HTXIE = DMA_DMA_CHCFG2_HTXIE_Values<DMA::DMA_CHCFG2, 2, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using ERRIE = DMA_DMA_CHCFG2_ERRIE_Values<DMA::DMA_CHCFG2, 3, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using DIR = DMA_DMA_CHCFG2_DIR_Values<DMA::DMA_CHCFG2, 4, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using CIRC = DMA_DMA_CHCFG2_CIRC_Values<DMA::DMA_CHCFG2, 5, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using PINC = DMA_DMA_CHCFG2_PINC_Values<DMA::DMA_CHCFG2, 6, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using MINC = DMA_DMA_CHCFG2_MINC_Values<DMA::DMA_CHCFG2, 7, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using PSIZE = DMA_DMA_CHCFG2_PSIZE_Values<DMA::DMA_CHCFG2, 8, 2, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using MSIZE = DMA_DMA_CHCFG2_MSIZE_Values<DMA::DMA_CHCFG2, 10, 2, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using PRIOLVL = DMA_DMA_CHCFG2_PRIOLVL_Values<DMA::DMA_CHCFG2, 12, 2, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using MEM2MEM = DMA_DMA_CHCFG2_MEM2MEM_Values<DMA::DMA_CHCFG2, 14, 1, ReadWriteMode, DMADMA_CHCFG2Base> ;
    using FieldValues = DMA_DMA_CHCFG2_MEM2MEM_Values<DMA::DMA_CHCFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG2Pack  = Register<0x4002001C, 32, ReadWriteMode, DMADMA_CHCFG2Base, T...> ;

  struct DMADMA_TXNUM2Base {} ;

  struct DMA_TXNUM2 : public RegisterBase<0x40020020, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM2_NDTX_Values<DMA::DMA_TXNUM2, 0, 16, ReadWriteMode, DMADMA_TXNUM2Base> ;
    using FieldValues = DMA_DMA_TXNUM2_NDTX_Values<DMA::DMA_TXNUM2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM2Pack  = Register<0x40020020, 32, ReadWriteMode, DMADMA_TXNUM2Base, T...> ;

  struct DMADMA_PADDR2Base {} ;

  struct DMA_PADDR2 : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR2_ADDR_Values<DMA::DMA_PADDR2, 0, 32, ReadWriteMode, DMADMA_PADDR2Base> ;
    using FieldValues = DMA_DMA_PADDR2_ADDR_Values<DMA::DMA_PADDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR2Pack  = Register<0x40020024, 32, ReadWriteMode, DMADMA_PADDR2Base, T...> ;

  struct DMADMA_MADDR2Base {} ;

  struct DMA_MADDR2 : public RegisterBase<0x40020028, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR2_ADDR_Values<DMA::DMA_MADDR2, 0, 32, ReadWriteMode, DMADMA_MADDR2Base> ;
    using FieldValues = DMA_DMA_MADDR2_ADDR_Values<DMA::DMA_MADDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR2Pack  = Register<0x40020028, 32, ReadWriteMode, DMADMA_MADDR2Base, T...> ;

  struct DMADMA_CHSEL2Base {} ;

  struct DMA_CHSEL2 : public RegisterBase<0x4002002C, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL2_CH_SEL_Values<DMA::DMA_CHSEL2, 0, 6, ReadWriteMode, DMADMA_CHSEL2Base> ;
    using FieldValues = DMA_DMA_CHSEL2_CH_SEL_Values<DMA::DMA_CHSEL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL2Pack  = Register<0x4002002C, 32, ReadWriteMode, DMADMA_CHSEL2Base, T...> ;

  struct DMADMA_CHCFG3Base {} ;

  struct DMA_CHCFG3 : public RegisterBase<0x40020030, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG3_CHEN_Values<DMA::DMA_CHCFG3, 0, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using TXCIE = DMA_DMA_CHCFG3_TXCIE_Values<DMA::DMA_CHCFG3, 1, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using HTXIE = DMA_DMA_CHCFG3_HTXIE_Values<DMA::DMA_CHCFG3, 2, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using ERRIE = DMA_DMA_CHCFG3_ERRIE_Values<DMA::DMA_CHCFG3, 3, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using DIR = DMA_DMA_CHCFG3_DIR_Values<DMA::DMA_CHCFG3, 4, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using CIRC = DMA_DMA_CHCFG3_CIRC_Values<DMA::DMA_CHCFG3, 5, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using PINC = DMA_DMA_CHCFG3_PINC_Values<DMA::DMA_CHCFG3, 6, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using MINC = DMA_DMA_CHCFG3_MINC_Values<DMA::DMA_CHCFG3, 7, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using PSIZE = DMA_DMA_CHCFG3_PSIZE_Values<DMA::DMA_CHCFG3, 8, 2, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using MSIZE = DMA_DMA_CHCFG3_MSIZE_Values<DMA::DMA_CHCFG3, 10, 2, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using PRIOLVL = DMA_DMA_CHCFG3_PRIOLVL_Values<DMA::DMA_CHCFG3, 12, 2, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using MEM2MEM = DMA_DMA_CHCFG3_MEM2MEM_Values<DMA::DMA_CHCFG3, 14, 1, ReadWriteMode, DMADMA_CHCFG3Base> ;
    using FieldValues = DMA_DMA_CHCFG3_MEM2MEM_Values<DMA::DMA_CHCFG3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG3Pack  = Register<0x40020030, 32, ReadWriteMode, DMADMA_CHCFG3Base, T...> ;

  struct DMADMA_TXNUM3Base {} ;

  struct DMA_TXNUM3 : public RegisterBase<0x40020034, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM3_NDTX_Values<DMA::DMA_TXNUM3, 0, 16, ReadWriteMode, DMADMA_TXNUM3Base> ;
    using FieldValues = DMA_DMA_TXNUM3_NDTX_Values<DMA::DMA_TXNUM3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM3Pack  = Register<0x40020034, 32, ReadWriteMode, DMADMA_TXNUM3Base, T...> ;

  struct DMADMA_PADDR3Base {} ;

  struct DMA_PADDR3 : public RegisterBase<0x40020038, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR3_ADDR_Values<DMA::DMA_PADDR3, 0, 32, ReadWriteMode, DMADMA_PADDR3Base> ;
    using FieldValues = DMA_DMA_PADDR3_ADDR_Values<DMA::DMA_PADDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR3Pack  = Register<0x40020038, 32, ReadWriteMode, DMADMA_PADDR3Base, T...> ;

  struct DMADMA_MADDR3Base {} ;

  struct DMA_MADDR3 : public RegisterBase<0x4002003C, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR3_ADDR_Values<DMA::DMA_MADDR3, 0, 32, ReadWriteMode, DMADMA_MADDR3Base> ;
    using FieldValues = DMA_DMA_MADDR3_ADDR_Values<DMA::DMA_MADDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR3Pack  = Register<0x4002003C, 32, ReadWriteMode, DMADMA_MADDR3Base, T...> ;

  struct DMADMA_CHSEL3Base {} ;

  struct DMA_CHSEL3 : public RegisterBase<0x40020040, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL3_CH_SEL_Values<DMA::DMA_CHSEL3, 0, 6, ReadWriteMode, DMADMA_CHSEL3Base> ;
    using FieldValues = DMA_DMA_CHSEL3_CH_SEL_Values<DMA::DMA_CHSEL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL3Pack  = Register<0x40020040, 32, ReadWriteMode, DMADMA_CHSEL3Base, T...> ;

  struct DMADMA_CHCFG4Base {} ;

  struct DMA_CHCFG4 : public RegisterBase<0x40020044, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG4_CHEN_Values<DMA::DMA_CHCFG4, 0, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using TXCIE = DMA_DMA_CHCFG4_TXCIE_Values<DMA::DMA_CHCFG4, 1, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using HTXIE = DMA_DMA_CHCFG4_HTXIE_Values<DMA::DMA_CHCFG4, 2, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using ERRIE = DMA_DMA_CHCFG4_ERRIE_Values<DMA::DMA_CHCFG4, 3, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using DIR = DMA_DMA_CHCFG4_DIR_Values<DMA::DMA_CHCFG4, 4, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using CIRC = DMA_DMA_CHCFG4_CIRC_Values<DMA::DMA_CHCFG4, 5, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using PINC = DMA_DMA_CHCFG4_PINC_Values<DMA::DMA_CHCFG4, 6, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using MINC = DMA_DMA_CHCFG4_MINC_Values<DMA::DMA_CHCFG4, 7, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using PSIZE = DMA_DMA_CHCFG4_PSIZE_Values<DMA::DMA_CHCFG4, 8, 2, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using MSIZE = DMA_DMA_CHCFG4_MSIZE_Values<DMA::DMA_CHCFG4, 10, 2, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using PRIOLVL = DMA_DMA_CHCFG4_PRIOLVL_Values<DMA::DMA_CHCFG4, 12, 2, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using MEM2MEM = DMA_DMA_CHCFG4_MEM2MEM_Values<DMA::DMA_CHCFG4, 14, 1, ReadWriteMode, DMADMA_CHCFG4Base> ;
    using FieldValues = DMA_DMA_CHCFG4_MEM2MEM_Values<DMA::DMA_CHCFG4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG4Pack  = Register<0x40020044, 32, ReadWriteMode, DMADMA_CHCFG4Base, T...> ;

  struct DMADMA_TXNUM4Base {} ;

  struct DMA_TXNUM4 : public RegisterBase<0x40020048, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM4_NDTX_Values<DMA::DMA_TXNUM4, 0, 16, ReadWriteMode, DMADMA_TXNUM4Base> ;
    using FieldValues = DMA_DMA_TXNUM4_NDTX_Values<DMA::DMA_TXNUM4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM4Pack  = Register<0x40020048, 32, ReadWriteMode, DMADMA_TXNUM4Base, T...> ;

  struct DMADMA_PADDR4Base {} ;

  struct DMA_PADDR4 : public RegisterBase<0x4002004C, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR4_ADDR_Values<DMA::DMA_PADDR4, 0, 32, ReadWriteMode, DMADMA_PADDR4Base> ;
    using FieldValues = DMA_DMA_PADDR4_ADDR_Values<DMA::DMA_PADDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR4Pack  = Register<0x4002004C, 32, ReadWriteMode, DMADMA_PADDR4Base, T...> ;

  struct DMADMA_MADDR4Base {} ;

  struct DMA_MADDR4 : public RegisterBase<0x40020050, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR4_ADDR_Values<DMA::DMA_MADDR4, 0, 32, ReadWriteMode, DMADMA_MADDR4Base> ;
    using FieldValues = DMA_DMA_MADDR4_ADDR_Values<DMA::DMA_MADDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR4Pack  = Register<0x40020050, 32, ReadWriteMode, DMADMA_MADDR4Base, T...> ;

  struct DMADMA_CHSEL4Base {} ;

  struct DMA_CHSEL4 : public RegisterBase<0x40020054, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL4_CH_SEL_Values<DMA::DMA_CHSEL4, 0, 6, ReadWriteMode, DMADMA_CHSEL4Base> ;
    using FieldValues = DMA_DMA_CHSEL4_CH_SEL_Values<DMA::DMA_CHSEL4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL4Pack  = Register<0x40020054, 32, ReadWriteMode, DMADMA_CHSEL4Base, T...> ;

  struct DMADMA_CHCFG5Base {} ;

  struct DMA_CHCFG5 : public RegisterBase<0x40020058, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG5_CHEN_Values<DMA::DMA_CHCFG5, 0, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using TXCIE = DMA_DMA_CHCFG5_TXCIE_Values<DMA::DMA_CHCFG5, 1, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using HTXIE = DMA_DMA_CHCFG5_HTXIE_Values<DMA::DMA_CHCFG5, 2, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using ERRIE = DMA_DMA_CHCFG5_ERRIE_Values<DMA::DMA_CHCFG5, 3, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using DIR = DMA_DMA_CHCFG5_DIR_Values<DMA::DMA_CHCFG5, 4, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using CIRC = DMA_DMA_CHCFG5_CIRC_Values<DMA::DMA_CHCFG5, 5, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using PINC = DMA_DMA_CHCFG5_PINC_Values<DMA::DMA_CHCFG5, 6, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using MINC = DMA_DMA_CHCFG5_MINC_Values<DMA::DMA_CHCFG5, 7, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using PSIZE = DMA_DMA_CHCFG5_PSIZE_Values<DMA::DMA_CHCFG5, 8, 2, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using MSIZE = DMA_DMA_CHCFG5_MSIZE_Values<DMA::DMA_CHCFG5, 10, 2, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using PRIOLVL = DMA_DMA_CHCFG5_PRIOLVL_Values<DMA::DMA_CHCFG5, 12, 2, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using MEM2MEM = DMA_DMA_CHCFG5_MEM2MEM_Values<DMA::DMA_CHCFG5, 14, 1, ReadWriteMode, DMADMA_CHCFG5Base> ;
    using FieldValues = DMA_DMA_CHCFG5_MEM2MEM_Values<DMA::DMA_CHCFG5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG5Pack  = Register<0x40020058, 32, ReadWriteMode, DMADMA_CHCFG5Base, T...> ;

  struct DMADMA_TXNUM5Base {} ;

  struct DMA_TXNUM5 : public RegisterBase<0x4002005C, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM5_NDTX_Values<DMA::DMA_TXNUM5, 0, 16, ReadWriteMode, DMADMA_TXNUM5Base> ;
    using FieldValues = DMA_DMA_TXNUM5_NDTX_Values<DMA::DMA_TXNUM5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM5Pack  = Register<0x4002005C, 32, ReadWriteMode, DMADMA_TXNUM5Base, T...> ;

  struct DMADMA_PADDR5Base {} ;

  struct DMA_PADDR5 : public RegisterBase<0x40020060, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR5_ADDR_Values<DMA::DMA_PADDR5, 0, 32, ReadWriteMode, DMADMA_PADDR5Base> ;
    using FieldValues = DMA_DMA_PADDR5_ADDR_Values<DMA::DMA_PADDR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR5Pack  = Register<0x40020060, 32, ReadWriteMode, DMADMA_PADDR5Base, T...> ;

  struct DMADMA_MADDR5Base {} ;

  struct DMA_MADDR5 : public RegisterBase<0x40020064, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR5_ADDR_Values<DMA::DMA_MADDR5, 0, 32, ReadWriteMode, DMADMA_MADDR5Base> ;
    using FieldValues = DMA_DMA_MADDR5_ADDR_Values<DMA::DMA_MADDR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR5Pack  = Register<0x40020064, 32, ReadWriteMode, DMADMA_MADDR5Base, T...> ;

  struct DMADMA_CHSEL5Base {} ;

  struct DMA_CHSEL5 : public RegisterBase<0x40020068, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL5_CH_SEL_Values<DMA::DMA_CHSEL5, 0, 6, ReadWriteMode, DMADMA_CHSEL5Base> ;
    using FieldValues = DMA_DMA_CHSEL5_CH_SEL_Values<DMA::DMA_CHSEL5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL5Pack  = Register<0x40020068, 32, ReadWriteMode, DMADMA_CHSEL5Base, T...> ;

  struct DMADMA_CHCFG6Base {} ;

  struct DMA_CHCFG6 : public RegisterBase<0x4002006C, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG6_CHEN_Values<DMA::DMA_CHCFG6, 0, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using TXCIE = DMA_DMA_CHCFG6_TXCIE_Values<DMA::DMA_CHCFG6, 1, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using HTXIE = DMA_DMA_CHCFG6_HTXIE_Values<DMA::DMA_CHCFG6, 2, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using ERRIE = DMA_DMA_CHCFG6_ERRIE_Values<DMA::DMA_CHCFG6, 3, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using DIR = DMA_DMA_CHCFG6_DIR_Values<DMA::DMA_CHCFG6, 4, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using CIRC = DMA_DMA_CHCFG6_CIRC_Values<DMA::DMA_CHCFG6, 5, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using PINC = DMA_DMA_CHCFG6_PINC_Values<DMA::DMA_CHCFG6, 6, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using MINC = DMA_DMA_CHCFG6_MINC_Values<DMA::DMA_CHCFG6, 7, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using PSIZE = DMA_DMA_CHCFG6_PSIZE_Values<DMA::DMA_CHCFG6, 8, 2, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using MSIZE = DMA_DMA_CHCFG6_MSIZE_Values<DMA::DMA_CHCFG6, 10, 2, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using PRIOLVL = DMA_DMA_CHCFG6_PRIOLVL_Values<DMA::DMA_CHCFG6, 12, 2, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using MEM2MEM = DMA_DMA_CHCFG6_MEM2MEM_Values<DMA::DMA_CHCFG6, 14, 1, ReadWriteMode, DMADMA_CHCFG6Base> ;
    using FieldValues = DMA_DMA_CHCFG6_MEM2MEM_Values<DMA::DMA_CHCFG6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG6Pack  = Register<0x4002006C, 32, ReadWriteMode, DMADMA_CHCFG6Base, T...> ;

  struct DMADMA_TXNUM6Base {} ;

  struct DMA_TXNUM6 : public RegisterBase<0x40020070, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM6_NDTX_Values<DMA::DMA_TXNUM6, 0, 16, ReadWriteMode, DMADMA_TXNUM6Base> ;
    using FieldValues = DMA_DMA_TXNUM6_NDTX_Values<DMA::DMA_TXNUM6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM6Pack  = Register<0x40020070, 32, ReadWriteMode, DMADMA_TXNUM6Base, T...> ;

  struct DMADMA_PADDR6Base {} ;

  struct DMA_PADDR6 : public RegisterBase<0x40020074, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR6_ADDR_Values<DMA::DMA_PADDR6, 0, 32, ReadWriteMode, DMADMA_PADDR6Base> ;
    using FieldValues = DMA_DMA_PADDR6_ADDR_Values<DMA::DMA_PADDR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR6Pack  = Register<0x40020074, 32, ReadWriteMode, DMADMA_PADDR6Base, T...> ;

  struct DMADMA_MADDR6Base {} ;

  struct DMA_MADDR6 : public RegisterBase<0x40020078, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR6_ADDR_Values<DMA::DMA_MADDR6, 0, 32, ReadWriteMode, DMADMA_MADDR6Base> ;
    using FieldValues = DMA_DMA_MADDR6_ADDR_Values<DMA::DMA_MADDR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR6Pack  = Register<0x40020078, 32, ReadWriteMode, DMADMA_MADDR6Base, T...> ;

  struct DMADMA_CHSEL6Base {} ;

  struct DMA_CHSEL6 : public RegisterBase<0x4002007C, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL6_CH_SEL_Values<DMA::DMA_CHSEL6, 0, 6, ReadWriteMode, DMADMA_CHSEL6Base> ;
    using FieldValues = DMA_DMA_CHSEL6_CH_SEL_Values<DMA::DMA_CHSEL6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL6Pack  = Register<0x4002007C, 32, ReadWriteMode, DMADMA_CHSEL6Base, T...> ;

  struct DMADMA_CHCFG7Base {} ;

  struct DMA_CHCFG7 : public RegisterBase<0x40020080, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG7_CHEN_Values<DMA::DMA_CHCFG7, 0, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using TXCIE = DMA_DMA_CHCFG7_TXCIE_Values<DMA::DMA_CHCFG7, 1, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using HTXIE = DMA_DMA_CHCFG7_HTXIE_Values<DMA::DMA_CHCFG7, 2, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using ERRIE = DMA_DMA_CHCFG7_ERRIE_Values<DMA::DMA_CHCFG7, 3, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using DIR = DMA_DMA_CHCFG7_DIR_Values<DMA::DMA_CHCFG7, 4, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using CIRC = DMA_DMA_CHCFG7_CIRC_Values<DMA::DMA_CHCFG7, 5, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using PINC = DMA_DMA_CHCFG7_PINC_Values<DMA::DMA_CHCFG7, 6, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using MINC = DMA_DMA_CHCFG7_MINC_Values<DMA::DMA_CHCFG7, 7, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using PSIZE = DMA_DMA_CHCFG7_PSIZE_Values<DMA::DMA_CHCFG7, 8, 2, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using MSIZE = DMA_DMA_CHCFG7_MSIZE_Values<DMA::DMA_CHCFG7, 10, 2, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using PRIOLVL = DMA_DMA_CHCFG7_PRIOLVL_Values<DMA::DMA_CHCFG7, 12, 2, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using MEM2MEM = DMA_DMA_CHCFG7_MEM2MEM_Values<DMA::DMA_CHCFG7, 14, 1, ReadWriteMode, DMADMA_CHCFG7Base> ;
    using FieldValues = DMA_DMA_CHCFG7_MEM2MEM_Values<DMA::DMA_CHCFG7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG7Pack  = Register<0x40020080, 32, ReadWriteMode, DMADMA_CHCFG7Base, T...> ;

  struct DMADMA_TXNUM7Base {} ;

  struct DMA_TXNUM7 : public RegisterBase<0x40020084, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM7_NDTX_Values<DMA::DMA_TXNUM7, 0, 16, ReadWriteMode, DMADMA_TXNUM7Base> ;
    using FieldValues = DMA_DMA_TXNUM7_NDTX_Values<DMA::DMA_TXNUM7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM7Pack  = Register<0x40020084, 32, ReadWriteMode, DMADMA_TXNUM7Base, T...> ;

  struct DMADMA_PADDR7Base {} ;

  struct DMA_PADDR7 : public RegisterBase<0x40020088, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR7_ADDR_Values<DMA::DMA_PADDR7, 0, 32, ReadWriteMode, DMADMA_PADDR7Base> ;
    using FieldValues = DMA_DMA_PADDR7_ADDR_Values<DMA::DMA_PADDR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR7Pack  = Register<0x40020088, 32, ReadWriteMode, DMADMA_PADDR7Base, T...> ;

  struct DMADMA_MADDR7Base {} ;

  struct DMA_MADDR7 : public RegisterBase<0x4002008C, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR7_ADDR_Values<DMA::DMA_MADDR7, 0, 32, ReadWriteMode, DMADMA_MADDR7Base> ;
    using FieldValues = DMA_DMA_MADDR7_ADDR_Values<DMA::DMA_MADDR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR7Pack  = Register<0x4002008C, 32, ReadWriteMode, DMADMA_MADDR7Base, T...> ;

  struct DMADMA_CHSEL7Base {} ;

  struct DMA_CHSEL7 : public RegisterBase<0x40020090, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL7_CH_SEL_Values<DMA::DMA_CHSEL7, 0, 6, ReadWriteMode, DMADMA_CHSEL7Base> ;
    using FieldValues = DMA_DMA_CHSEL7_CH_SEL_Values<DMA::DMA_CHSEL7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL7Pack  = Register<0x40020090, 32, ReadWriteMode, DMADMA_CHSEL7Base, T...> ;

  struct DMADMA_CHCFG8Base {} ;

  struct DMA_CHCFG8 : public RegisterBase<0x40020094, 32, ReadWriteMode>
  {
    using CHEN = DMA_DMA_CHCFG8_CHEN_Values<DMA::DMA_CHCFG8, 0, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using TXCIE = DMA_DMA_CHCFG8_TXCIE_Values<DMA::DMA_CHCFG8, 1, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using HTXIE = DMA_DMA_CHCFG8_HTXIE_Values<DMA::DMA_CHCFG8, 2, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using ERRIE = DMA_DMA_CHCFG8_ERRIE_Values<DMA::DMA_CHCFG8, 3, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using DIR = DMA_DMA_CHCFG8_DIR_Values<DMA::DMA_CHCFG8, 4, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using CIRC = DMA_DMA_CHCFG8_CIRC_Values<DMA::DMA_CHCFG8, 5, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using PINC = DMA_DMA_CHCFG8_PINC_Values<DMA::DMA_CHCFG8, 6, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using MINC = DMA_DMA_CHCFG8_MINC_Values<DMA::DMA_CHCFG8, 7, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using PSIZE = DMA_DMA_CHCFG8_PSIZE_Values<DMA::DMA_CHCFG8, 8, 2, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using MSIZE = DMA_DMA_CHCFG8_MSIZE_Values<DMA::DMA_CHCFG8, 10, 2, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using PRIOLVL = DMA_DMA_CHCFG8_PRIOLVL_Values<DMA::DMA_CHCFG8, 12, 2, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using MEM2MEM = DMA_DMA_CHCFG8_MEM2MEM_Values<DMA::DMA_CHCFG8, 14, 1, ReadWriteMode, DMADMA_CHCFG8Base> ;
    using FieldValues = DMA_DMA_CHCFG8_MEM2MEM_Values<DMA::DMA_CHCFG8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHCFG8Pack  = Register<0x40020094, 32, ReadWriteMode, DMADMA_CHCFG8Base, T...> ;

  struct DMADMA_TXNUM8Base {} ;

  struct DMA_TXNUM8 : public RegisterBase<0x40020098, 32, ReadWriteMode>
  {
    using NDTX = DMA_DMA_TXNUM8_NDTX_Values<DMA::DMA_TXNUM8, 0, 16, ReadWriteMode, DMADMA_TXNUM8Base> ;
    using FieldValues = DMA_DMA_TXNUM8_NDTX_Values<DMA::DMA_TXNUM8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_TXNUM8Pack  = Register<0x40020098, 32, ReadWriteMode, DMADMA_TXNUM8Base, T...> ;

  struct DMADMA_PADDR8Base {} ;

  struct DMA_PADDR8 : public RegisterBase<0x4002009C, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_PADDR8_ADDR_Values<DMA::DMA_PADDR8, 0, 32, ReadWriteMode, DMADMA_PADDR8Base> ;
    using FieldValues = DMA_DMA_PADDR8_ADDR_Values<DMA::DMA_PADDR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_PADDR8Pack  = Register<0x4002009C, 32, ReadWriteMode, DMADMA_PADDR8Base, T...> ;

  struct DMADMA_MADDR8Base {} ;

  struct DMA_MADDR8 : public RegisterBase<0x400200A0, 32, ReadWriteMode>
  {
    using ADDR = DMA_DMA_MADDR8_ADDR_Values<DMA::DMA_MADDR8, 0, 32, ReadWriteMode, DMADMA_MADDR8Base> ;
    using FieldValues = DMA_DMA_MADDR8_ADDR_Values<DMA::DMA_MADDR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_MADDR8Pack  = Register<0x400200A0, 32, ReadWriteMode, DMADMA_MADDR8Base, T...> ;

  struct DMADMA_CHSEL8Base {} ;

  struct DMA_CHSEL8 : public RegisterBase<0x400200A4, 32, ReadWriteMode>
  {
    using CH_SEL = DMA_DMA_CHSEL8_CH_SEL_Values<DMA::DMA_CHSEL8, 0, 6, ReadWriteMode, DMADMA_CHSEL8Base> ;
    using FieldValues = DMA_DMA_CHSEL8_CH_SEL_Values<DMA::DMA_CHSEL8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMA_CHSEL8Pack  = Register<0x400200A4, 32, ReadWriteMode, DMADMA_CHSEL8Base, T...> ;

} ;

