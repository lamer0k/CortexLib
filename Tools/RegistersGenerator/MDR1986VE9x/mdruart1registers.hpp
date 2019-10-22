/*******************************************************************************
* Filename      : mdruart1registers.hpp
*
* Details       : UART Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRUART1REGISTERS_HPP)
#define MDRUART1REGISTERS_HPP

#include "mdruart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_UART1
{
  struct MDR_UART1DRBase {} ;

  struct DR : public RegisterBase<0x40030000, 32, ReadWriteMode>
  {
    using DATA = MDR_UART1_DR_DATA_Values<MDR_UART1::DR, 0, 8, ReadWriteMode, MDR_UART1DRBase> ;
    using FE = MDR_UART1_DR_FE_Values<MDR_UART1::DR, 8, 1, ReadWriteMode, MDR_UART1DRBase> ;
    using PE = MDR_UART1_DR_PE_Values<MDR_UART1::DR, 9, 1, ReadWriteMode, MDR_UART1DRBase> ;
    using BE = MDR_UART1_DR_BE_Values<MDR_UART1::DR, 10, 1, ReadWriteMode, MDR_UART1DRBase> ;
    using OE = MDR_UART1_DR_OE_Values<MDR_UART1::DR, 11, 1, ReadWriteMode, MDR_UART1DRBase> ;
    using FieldValues = MDR_UART1_DR_OE_Values<MDR_UART1::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40030000, 32, ReadWriteMode, MDR_UART1DRBase, T...> ;

  struct MDR_UART1RSR_ECRBase {} ;

  struct RSR_ECR : public RegisterBase<0x40030004, 32, ReadWriteMode>
  {
    using FE = MDR_UART1_RSR_ECR_FE_Values<MDR_UART1::RSR_ECR, 0, 1, ReadWriteMode, MDR_UART1RSR_ECRBase> ;
    using PE = MDR_UART1_RSR_ECR_PE_Values<MDR_UART1::RSR_ECR, 1, 1, ReadWriteMode, MDR_UART1RSR_ECRBase> ;
    using BE = MDR_UART1_RSR_ECR_BE_Values<MDR_UART1::RSR_ECR, 2, 1, ReadWriteMode, MDR_UART1RSR_ECRBase> ;
    using OE = MDR_UART1_RSR_ECR_OE_Values<MDR_UART1::RSR_ECR, 3, 1, ReadWriteMode, MDR_UART1RSR_ECRBase> ;
    using FieldValues = MDR_UART1_RSR_ECR_OE_Values<MDR_UART1::RSR_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSR_ECRPack  = Register<0x40030004, 32, ReadWriteMode, MDR_UART1RSR_ECRBase, T...> ;

  struct MDR_UART1FRBase {} ;

  struct FR : public RegisterBase<0x40030018, 32, ReadMode>
  {
    using CTS = MDR_UART1_FR_CTS_Values<MDR_UART1::FR, 0, 1, ReadMode, MDR_UART1FRBase> ;
    using DSR = MDR_UART1_FR_DSR_Values<MDR_UART1::FR, 1, 1, ReadMode, MDR_UART1FRBase> ;
    using DCD = MDR_UART1_FR_DCD_Values<MDR_UART1::FR, 2, 1, ReadMode, MDR_UART1FRBase> ;
    using BUSY = MDR_UART1_FR_BUSY_Values<MDR_UART1::FR, 3, 1, ReadMode, MDR_UART1FRBase> ;
    using RXFE = MDR_UART1_FR_RXFE_Values<MDR_UART1::FR, 4, 1, ReadMode, MDR_UART1FRBase> ;
    using TXFF = MDR_UART1_FR_TXFF_Values<MDR_UART1::FR, 5, 1, ReadMode, MDR_UART1FRBase> ;
    using RXFF = MDR_UART1_FR_RXFF_Values<MDR_UART1::FR, 6, 1, ReadMode, MDR_UART1FRBase> ;
    using TXFE = MDR_UART1_FR_TXFE_Values<MDR_UART1::FR, 7, 1, ReadMode, MDR_UART1FRBase> ;
    using RI = MDR_UART1_FR_RI_Values<MDR_UART1::FR, 8, 1, ReadMode, MDR_UART1FRBase> ;
    using FieldValues = MDR_UART1_FR_RI_Values<MDR_UART1::FR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FRPack  = Register<0x40030018, 32, ReadMode, MDR_UART1FRBase, T...> ;

  struct MDR_UART1ILPRBase {} ;

  struct ILPR : public RegisterBase<0x40030020, 32, ReadWriteMode>
  {
    using DVSR = MDR_UART1_ILPR_DVSR_Values<MDR_UART1::ILPR, 0, 8, ReadWriteMode, MDR_UART1ILPRBase> ;
    using FieldValues = MDR_UART1_ILPR_DVSR_Values<MDR_UART1::ILPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ILPRPack  = Register<0x40030020, 32, ReadWriteMode, MDR_UART1ILPRBase, T...> ;

  struct MDR_UART1IBRDBase {} ;

  struct IBRD : public RegisterBase<0x40030024, 32, ReadWriteMode>
  {
    using Baud_DivInt = MDR_UART1_IBRD_Baud_DivInt_Values<MDR_UART1::IBRD, 0, 16, ReadWriteMode, MDR_UART1IBRDBase> ;
    using FieldValues = MDR_UART1_IBRD_Baud_DivInt_Values<MDR_UART1::IBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IBRDPack  = Register<0x40030024, 32, ReadWriteMode, MDR_UART1IBRDBase, T...> ;

  struct MDR_UART1FBRDBase {} ;

  struct FBRD : public RegisterBase<0x40030028, 32, ReadWriteMode>
  {
    using Baud_DivFrac = MDR_UART1_FBRD_Baud_DivFrac_Values<MDR_UART1::FBRD, 0, 6, ReadWriteMode, MDR_UART1FBRDBase> ;
    using FieldValues = MDR_UART1_FBRD_Baud_DivFrac_Values<MDR_UART1::FBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FBRDPack  = Register<0x40030028, 32, ReadWriteMode, MDR_UART1FBRDBase, T...> ;

  struct MDR_UART1LCR_HBase {} ;

  struct LCR_H : public RegisterBase<0x4003002C, 32, ReadWriteMode>
  {
    using BRK = MDR_UART1_LCR_H_BRK_Values<MDR_UART1::LCR_H, 0, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using PEN = MDR_UART1_LCR_H_PEN_Values<MDR_UART1::LCR_H, 1, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using EPS = MDR_UART1_LCR_H_EPS_Values<MDR_UART1::LCR_H, 2, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using STP2 = MDR_UART1_LCR_H_STP2_Values<MDR_UART1::LCR_H, 3, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using FEN = MDR_UART1_LCR_H_FEN_Values<MDR_UART1::LCR_H, 4, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using WLEN = MDR_UART1_LCR_H_WLEN_Values<MDR_UART1::LCR_H, 5, 2, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using SPS = MDR_UART1_LCR_H_SPS_Values<MDR_UART1::LCR_H, 7, 1, ReadWriteMode, MDR_UART1LCR_HBase> ;
    using FieldValues = MDR_UART1_LCR_H_SPS_Values<MDR_UART1::LCR_H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCR_HPack  = Register<0x4003002C, 32, ReadWriteMode, MDR_UART1LCR_HBase, T...> ;

  struct MDR_UART1CRBase {} ;

  struct CR : public RegisterBase<0x40030030, 32, ReadWriteMode>
  {
    using EN = MDR_UART1_CR_EN_Values<MDR_UART1::CR, 0, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using SIREN = MDR_UART1_CR_SIREN_Values<MDR_UART1::CR, 1, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using SIRLP = MDR_UART1_CR_SIRLP_Values<MDR_UART1::CR, 2, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using LBE = MDR_UART1_CR_LBE_Values<MDR_UART1::CR, 7, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using TXE = MDR_UART1_CR_TXE_Values<MDR_UART1::CR, 8, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using RXE = MDR_UART1_CR_RXE_Values<MDR_UART1::CR, 9, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using DTR = MDR_UART1_CR_DTR_Values<MDR_UART1::CR, 10, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using RTS = MDR_UART1_CR_RTS_Values<MDR_UART1::CR, 11, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using Out1 = MDR_UART1_CR_Out1_Values<MDR_UART1::CR, 12, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using Out2 = MDR_UART1_CR_Out2_Values<MDR_UART1::CR, 13, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using RTSEn = MDR_UART1_CR_RTSEn_Values<MDR_UART1::CR, 14, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using CTSEn = MDR_UART1_CR_CTSEn_Values<MDR_UART1::CR, 15, 1, ReadWriteMode, MDR_UART1CRBase> ;
    using FieldValues = MDR_UART1_CR_CTSEn_Values<MDR_UART1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40030030, 32, ReadWriteMode, MDR_UART1CRBase, T...> ;

  struct MDR_UART1IFLSBase {} ;

  struct IFLS : public RegisterBase<0x40030034, 32, ReadWriteMode>
  {
    using TXIFLSES = MDR_UART1_IFLS_TXIFLSES_Values<MDR_UART1::IFLS, 0, 3, ReadWriteMode, MDR_UART1IFLSBase> ;
    using RXIFLSES = MDR_UART1_IFLS_RXIFLSES_Values<MDR_UART1::IFLS, 3, 3, ReadWriteMode, MDR_UART1IFLSBase> ;
    using FieldValues = MDR_UART1_IFLS_RXIFLSES_Values<MDR_UART1::IFLS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFLSPack  = Register<0x40030034, 32, ReadWriteMode, MDR_UART1IFLSBase, T...> ;

  struct MDR_UART1IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40030038, 32, ReadWriteMode>
  {
    using RIM_IM = MDR_UART1_IMSC_RIM_IM_Values<MDR_UART1::IMSC, 0, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using STCM_IM = MDR_UART1_IMSC_STCM_IM_Values<MDR_UART1::IMSC, 1, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using DCDM_IM = MDR_UART1_IMSC_DCDM_IM_Values<MDR_UART1::IMSC, 2, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using DSRM_IM = MDR_UART1_IMSC_DSRM_IM_Values<MDR_UART1::IMSC, 3, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using RX_IM = MDR_UART1_IMSC_RX_IM_Values<MDR_UART1::IMSC, 4, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using TX_IM = MDR_UART1_IMSC_TX_IM_Values<MDR_UART1::IMSC, 5, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using RT_IM = MDR_UART1_IMSC_RT_IM_Values<MDR_UART1::IMSC, 6, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using FE_IM = MDR_UART1_IMSC_FE_IM_Values<MDR_UART1::IMSC, 7, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using PE_IM = MDR_UART1_IMSC_PE_IM_Values<MDR_UART1::IMSC, 8, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using BE_IM = MDR_UART1_IMSC_BE_IM_Values<MDR_UART1::IMSC, 9, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using OE_IM = MDR_UART1_IMSC_OE_IM_Values<MDR_UART1::IMSC, 10, 1, ReadWriteMode, MDR_UART1IMSCBase> ;
    using FieldValues = MDR_UART1_IMSC_OE_IM_Values<MDR_UART1::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40030038, 32, ReadWriteMode, MDR_UART1IMSCBase, T...> ;

  struct MDR_UART1RISBase {} ;

  struct RIS : public RegisterBase<0x4003003C, 32, ReadMode>
  {
    using RIM_RIS = MDR_UART1_RIS_RIM_RIS_Values<MDR_UART1::RIS, 0, 1, ReadMode, MDR_UART1RISBase> ;
    using STCM_RIS = MDR_UART1_RIS_STCM_RIS_Values<MDR_UART1::RIS, 1, 1, ReadMode, MDR_UART1RISBase> ;
    using DCDM_RIS = MDR_UART1_RIS_DCDM_RIS_Values<MDR_UART1::RIS, 2, 1, ReadMode, MDR_UART1RISBase> ;
    using DSRM_RIS = MDR_UART1_RIS_DSRM_RIS_Values<MDR_UART1::RIS, 3, 1, ReadMode, MDR_UART1RISBase> ;
    using RX_RIS = MDR_UART1_RIS_RX_RIS_Values<MDR_UART1::RIS, 4, 1, ReadMode, MDR_UART1RISBase> ;
    using TX_RIS = MDR_UART1_RIS_TX_RIS_Values<MDR_UART1::RIS, 5, 1, ReadMode, MDR_UART1RISBase> ;
    using RT_RIS = MDR_UART1_RIS_RT_RIS_Values<MDR_UART1::RIS, 6, 1, ReadMode, MDR_UART1RISBase> ;
    using FE_RIS = MDR_UART1_RIS_FE_RIS_Values<MDR_UART1::RIS, 7, 1, ReadMode, MDR_UART1RISBase> ;
    using PE_RIS = MDR_UART1_RIS_PE_RIS_Values<MDR_UART1::RIS, 8, 1, ReadMode, MDR_UART1RISBase> ;
    using BE_RIS = MDR_UART1_RIS_BE_RIS_Values<MDR_UART1::RIS, 9, 1, ReadMode, MDR_UART1RISBase> ;
    using OE_RIS = MDR_UART1_RIS_OE_RIS_Values<MDR_UART1::RIS, 10, 1, ReadMode, MDR_UART1RISBase> ;
    using FieldValues = MDR_UART1_RIS_OE_RIS_Values<MDR_UART1::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x4003003C, 32, ReadMode, MDR_UART1RISBase, T...> ;

  struct MDR_UART1MISBase {} ;

  struct MIS : public RegisterBase<0x40030040, 32, ReadMode>
  {
    using RIM_MIS = MDR_UART1_MIS_RIM_MIS_Values<MDR_UART1::MIS, 0, 1, ReadMode, MDR_UART1MISBase> ;
    using STCM_MIS = MDR_UART1_MIS_STCM_MIS_Values<MDR_UART1::MIS, 1, 1, ReadMode, MDR_UART1MISBase> ;
    using DCDM_MIS = MDR_UART1_MIS_DCDM_MIS_Values<MDR_UART1::MIS, 2, 1, ReadMode, MDR_UART1MISBase> ;
    using DSRM_MIS = MDR_UART1_MIS_DSRM_MIS_Values<MDR_UART1::MIS, 3, 1, ReadMode, MDR_UART1MISBase> ;
    using RX_MIS = MDR_UART1_MIS_RX_MIS_Values<MDR_UART1::MIS, 4, 1, ReadMode, MDR_UART1MISBase> ;
    using TX_MIS = MDR_UART1_MIS_TX_MIS_Values<MDR_UART1::MIS, 5, 1, ReadMode, MDR_UART1MISBase> ;
    using RT_MIS = MDR_UART1_MIS_RT_MIS_Values<MDR_UART1::MIS, 6, 1, ReadMode, MDR_UART1MISBase> ;
    using FE_MIS = MDR_UART1_MIS_FE_MIS_Values<MDR_UART1::MIS, 7, 1, ReadMode, MDR_UART1MISBase> ;
    using PE_MIS = MDR_UART1_MIS_PE_MIS_Values<MDR_UART1::MIS, 8, 1, ReadMode, MDR_UART1MISBase> ;
    using BE_MIS = MDR_UART1_MIS_BE_MIS_Values<MDR_UART1::MIS, 9, 1, ReadMode, MDR_UART1MISBase> ;
    using OE_MIS = MDR_UART1_MIS_OE_MIS_Values<MDR_UART1::MIS, 10, 1, ReadMode, MDR_UART1MISBase> ;
    using FieldValues = MDR_UART1_MIS_OE_MIS_Values<MDR_UART1::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x40030040, 32, ReadMode, MDR_UART1MISBase, T...> ;

  struct MDR_UART1ICRBase {} ;

  struct ICR : public RegisterBase<0x40030044, 32, WriteMode>
  {
    using RIM_IC = MDR_UART1_ICR_RIM_IC_Values<MDR_UART1::ICR, 0, 1, WriteMode, MDR_UART1ICRBase> ;
    using STCM_IC = MDR_UART1_ICR_STCM_IC_Values<MDR_UART1::ICR, 1, 1, WriteMode, MDR_UART1ICRBase> ;
    using DCDM_IC = MDR_UART1_ICR_DCDM_IC_Values<MDR_UART1::ICR, 2, 1, WriteMode, MDR_UART1ICRBase> ;
    using DSRM_IC = MDR_UART1_ICR_DSRM_IC_Values<MDR_UART1::ICR, 3, 1, WriteMode, MDR_UART1ICRBase> ;
    using RX_IC = MDR_UART1_ICR_RX_IC_Values<MDR_UART1::ICR, 4, 1, WriteMode, MDR_UART1ICRBase> ;
    using TX_IC = MDR_UART1_ICR_TX_IC_Values<MDR_UART1::ICR, 5, 1, WriteMode, MDR_UART1ICRBase> ;
    using RT_IC = MDR_UART1_ICR_RT_IC_Values<MDR_UART1::ICR, 6, 1, WriteMode, MDR_UART1ICRBase> ;
    using FE_IC = MDR_UART1_ICR_FE_IC_Values<MDR_UART1::ICR, 7, 1, WriteMode, MDR_UART1ICRBase> ;
    using PE_IC = MDR_UART1_ICR_PE_IC_Values<MDR_UART1::ICR, 8, 1, WriteMode, MDR_UART1ICRBase> ;
    using BE_IC = MDR_UART1_ICR_BE_IC_Values<MDR_UART1::ICR, 9, 1, WriteMode, MDR_UART1ICRBase> ;
    using OE_IC = MDR_UART1_ICR_OE_IC_Values<MDR_UART1::ICR, 10, 1, WriteMode, MDR_UART1ICRBase> ;
    using FieldValues = MDR_UART1_ICR_OE_IC_Values<MDR_UART1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40030044, 32, WriteMode, MDR_UART1ICRBase, T...> ;

  struct MDR_UART1DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40030048, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_UART1_DMACR_RXDMAE_Values<MDR_UART1::DMACR, 0, 1, ReadWriteMode, MDR_UART1DMACRBase> ;
    using TXDMAE = MDR_UART1_DMACR_TXDMAE_Values<MDR_UART1::DMACR, 1, 1, ReadWriteMode, MDR_UART1DMACRBase> ;
    using DMAonErr = MDR_UART1_DMACR_DMAonErr_Values<MDR_UART1::DMACR, 2, 1, ReadWriteMode, MDR_UART1DMACRBase> ;
    using FieldValues = MDR_UART1_DMACR_DMAonErr_Values<MDR_UART1::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40030048, 32, ReadWriteMode, MDR_UART1DMACRBase, T...> ;

  struct MDR_UART1TCRBase {} ;

  struct TCR : public RegisterBase<0x40030080, 32, ReadWriteMode>
  {
    using ITEN = MDR_UART1_TCR_ITEN_Values<MDR_UART1::TCR, 0, 1, ReadWriteMode, MDR_UART1TCRBase> ;
    using TestFIFO = MDR_UART1_TCR_TestFIFO_Values<MDR_UART1::TCR, 1, 1, ReadWriteMode, MDR_UART1TCRBase> ;
    using SIRTest = MDR_UART1_TCR_SIRTest_Values<MDR_UART1::TCR, 2, 1, ReadWriteMode, MDR_UART1TCRBase> ;
    using FieldValues = MDR_UART1_TCR_SIRTest_Values<MDR_UART1::TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRPack  = Register<0x40030080, 32, ReadWriteMode, MDR_UART1TCRBase, T...> ;

} ;

#endif //#if !defined(MDRUART1REGISTERS_HPP)
