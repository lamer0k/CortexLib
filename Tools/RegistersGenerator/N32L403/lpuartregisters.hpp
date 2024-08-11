/*******************************************************************************
* Filename      : lpuartregisters.hpp
*
* Details       : Low-power universal asynchronous receiver transmitter. This
*                 header file is auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "lpuartfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPUART
{
  struct LPUARTLPUART_STSBase {} ;

  struct LPUART_STS : public RegisterBase<0x40005000, 32, ReadWriteMode>
  {
    using PEF = LPUART_LPUART_STS_PEF_Values<LPUART::LPUART_STS, 0, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using TXC = LPUART_LPUART_STS_TXC_Values<LPUART::LPUART_STS, 1, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using FIFO_OV = LPUART_LPUART_STS_FIFO_OV_Values<LPUART::LPUART_STS, 2, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using FIFO_FU = LPUART_LPUART_STS_FIFO_FU_Values<LPUART::LPUART_STS, 3, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using FIFO_HF = LPUART_LPUART_STS_FIFO_HF_Values<LPUART::LPUART_STS, 4, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using FIFO_NE = LPUART_LPUART_STS_FIFO_NE_Values<LPUART::LPUART_STS, 5, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using CTS = LPUART_LPUART_STS_CTS_Values<LPUART::LPUART_STS, 6, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using WUF = LPUART_LPUART_STS_WUF_Values<LPUART::LPUART_STS, 7, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using NF = LPUART_LPUART_STS_NF_Values<LPUART::LPUART_STS, 8, 1, ReadWriteMode, LPUARTLPUART_STSBase> ;
    using FieldValues = LPUART_LPUART_STS_NF_Values<LPUART::LPUART_STS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_STSPack  = Register<0x40005000, 32, ReadWriteMode, LPUARTLPUART_STSBase, T...> ;

  struct LPUARTLPUART_INTENBase {} ;

  struct LPUART_INTEN : public RegisterBase<0x40005004, 32, ReadWriteMode>
  {
    using PEIE = LPUART_LPUART_INTEN_PEIE_Values<LPUART::LPUART_INTEN, 0, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using TXCIE = LPUART_LPUART_INTEN_TXCIE_Values<LPUART::LPUART_INTEN, 1, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using FIFO_OVIE = LPUART_LPUART_INTEN_FIFO_OVIE_Values<LPUART::LPUART_INTEN, 2, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using FIFO_FUIE = LPUART_LPUART_INTEN_FIFO_FUIE_Values<LPUART::LPUART_INTEN, 3, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using FIFO_HFIE = LPUART_LPUART_INTEN_FIFO_HFIE_Values<LPUART::LPUART_INTEN, 4, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using FIFO_NEIE = LPUART_LPUART_INTEN_FIFO_NEIE_Values<LPUART::LPUART_INTEN, 5, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using WUFIE = LPUART_LPUART_INTEN_WUFIE_Values<LPUART::LPUART_INTEN, 6, 1, ReadWriteMode, LPUARTLPUART_INTENBase> ;
    using FieldValues = LPUART_LPUART_INTEN_WUFIE_Values<LPUART::LPUART_INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_INTENPack  = Register<0x40005004, 32, ReadWriteMode, LPUARTLPUART_INTENBase, T...> ;

  struct LPUARTLPUART_CTRLBase {} ;

  struct LPUART_CTRL : public RegisterBase<0x40005008, 32, ReadWriteMode>
  {
    using PSEL = LPUART_LPUART_CTRL_PSEL_Values<LPUART::LPUART_CTRL, 0, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using TXEN = LPUART_LPUART_CTRL_TXEN_Values<LPUART::LPUART_CTRL, 1, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using FLUSH = LPUART_LPUART_CTRL_FLUSH_Values<LPUART::LPUART_CTRL, 2, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using PCDIS = LPUART_LPUART_CTRL_PCDIS_Values<LPUART::LPUART_CTRL, 3, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using LOOKBACK = LPUART_LPUART_CTRL_LOOKBACK_Values<LPUART::LPUART_CTRL, 4, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using DMA_TXEN = LPUART_LPUART_CTRL_DMA_TXEN_Values<LPUART::LPUART_CTRL, 5, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using DMA_RXEN = LPUART_LPUART_CTRL_DMA_RXEN_Values<LPUART::LPUART_CTRL, 6, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using WUSTP = LPUART_LPUART_CTRL_WUSTP_Values<LPUART::LPUART_CTRL, 7, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using RTS_THSEL = LPUART_LPUART_CTRL_RTS_THSEL_Values<LPUART::LPUART_CTRL, 8, 2, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using RTSEN = LPUART_LPUART_CTRL_RTSEN_Values<LPUART::LPUART_CTRL, 10, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using CTSEN = LPUART_LPUART_CTRL_CTSEN_Values<LPUART::LPUART_CTRL, 11, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using WESEL = LPUART_LPUART_CTRL_WESEL_Values<LPUART::LPUART_CTRL, 12, 2, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using SMPCNT = LPUART_LPUART_CTRL_SMPCNT_Values<LPUART::LPUART_CTRL, 14, 1, ReadWriteMode, LPUARTLPUART_CTRLBase> ;
    using FieldValues = LPUART_LPUART_CTRL_SMPCNT_Values<LPUART::LPUART_CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_CTRLPack  = Register<0x40005008, 32, ReadWriteMode, LPUARTLPUART_CTRLBase, T...> ;

  struct LPUARTLPUART_BRCFG1Base {} ;

  struct LPUART_BRCFG1 : public RegisterBase<0x4000500C, 32, ReadWriteMode>
  {
    using INTEGER = LPUART_LPUART_BRCFG1_INTEGER_Values<LPUART::LPUART_BRCFG1, 0, 16, ReadWriteMode, LPUARTLPUART_BRCFG1Base> ;
    using FieldValues = LPUART_LPUART_BRCFG1_INTEGER_Values<LPUART::LPUART_BRCFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_BRCFG1Pack  = Register<0x4000500C, 32, ReadWriteMode, LPUARTLPUART_BRCFG1Base, T...> ;

  struct LPUARTLPUART_DATBase {} ;

  struct LPUART_DAT : public RegisterBase<0x40005010, 32, ReadWriteMode>
  {
    using DAT = LPUART_LPUART_DAT_DAT_Values<LPUART::LPUART_DAT, 0, 8, ReadWriteMode, LPUARTLPUART_DATBase> ;
    using FieldValues = LPUART_LPUART_DAT_DAT_Values<LPUART::LPUART_DAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_DATPack  = Register<0x40005010, 32, ReadWriteMode, LPUARTLPUART_DATBase, T...> ;

  struct LPUARTLPUART_BRCFG2Base {} ;

  struct LPUART_BRCFG2 : public RegisterBase<0x40005014, 32, ReadWriteMode>
  {
    using DECIMAL = LPUART_LPUART_BRCFG2_DECIMAL_Values<LPUART::LPUART_BRCFG2, 0, 8, ReadWriteMode, LPUARTLPUART_BRCFG2Base> ;
    using FieldValues = LPUART_LPUART_BRCFG2_DECIMAL_Values<LPUART::LPUART_BRCFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_BRCFG2Pack  = Register<0x40005014, 32, ReadWriteMode, LPUARTLPUART_BRCFG2Base, T...> ;

  struct LPUARTLPUART_WUDATBase {} ;

  struct LPUART_WUDAT : public RegisterBase<0x40005018, 32, ReadWriteMode>
  {
    using WUDAT = LPUART_LPUART_WUDAT_WUDAT_Values<LPUART::LPUART_WUDAT, 0, 32, ReadWriteMode, LPUARTLPUART_WUDATBase> ;
    using FieldValues = LPUART_LPUART_WUDAT_WUDAT_Values<LPUART::LPUART_WUDAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPUART_WUDATPack  = Register<0x40005018, 32, ReadWriteMode, LPUARTLPUART_WUDATBase, T...> ;

} ;

