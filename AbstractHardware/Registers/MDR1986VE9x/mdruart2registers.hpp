/*******************************************************************************
* Filename      : mdruart2registers.hpp
*
* Details       : UART Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRUART2REGISTERS_HPP)
#define MDRUART2REGISTERS_HPP

#include "mdruart2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_UART2
{
  struct MDR_UART2DRBase {} ;

  struct DR : public RegisterBase<0x40038000, 32, ReadWriteMode>
  {
    using DATA = MDR_UART2_DR_DATA_Values<MDR_UART2::DR, 0, 8, ReadWriteMode, MDR_UART2DRBase> ;
    using FE = MDR_UART2_DR_FE_Values<MDR_UART2::DR, 8, 1, ReadWriteMode, MDR_UART2DRBase> ;
    using PE = MDR_UART2_DR_PE_Values<MDR_UART2::DR, 9, 1, ReadWriteMode, MDR_UART2DRBase> ;
    using BE = MDR_UART2_DR_BE_Values<MDR_UART2::DR, 10, 1, ReadWriteMode, MDR_UART2DRBase> ;
    using OE = MDR_UART2_DR_OE_Values<MDR_UART2::DR, 11, 1, ReadWriteMode, MDR_UART2DRBase> ;
    using FieldValues = MDR_UART2_DR_OE_Values<MDR_UART2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40038000, 32, ReadWriteMode, MDR_UART2DRBase, T...> ;

  struct MDR_UART2RSR_ECRBase {} ;

  struct RSR_ECR : public RegisterBase<0x40038004, 32, ReadWriteMode>
  {
    using FE = MDR_UART2_RSR_ECR_FE_Values<MDR_UART2::RSR_ECR, 0, 1, ReadWriteMode, MDR_UART2RSR_ECRBase> ;
    using PE = MDR_UART2_RSR_ECR_PE_Values<MDR_UART2::RSR_ECR, 1, 1, ReadWriteMode, MDR_UART2RSR_ECRBase> ;
    using BE = MDR_UART2_RSR_ECR_BE_Values<MDR_UART2::RSR_ECR, 2, 1, ReadWriteMode, MDR_UART2RSR_ECRBase> ;
    using OE = MDR_UART2_RSR_ECR_OE_Values<MDR_UART2::RSR_ECR, 3, 1, ReadWriteMode, MDR_UART2RSR_ECRBase> ;
    using FieldValues = MDR_UART2_RSR_ECR_OE_Values<MDR_UART2::RSR_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSR_ECRPack  = Register<0x40038004, 32, ReadWriteMode, MDR_UART2RSR_ECRBase, T...> ;

  struct MDR_UART2FRBase {} ;

  struct FR : public RegisterBase<0x40038018, 32, ReadMode>
  {
    using CTS = MDR_UART2_FR_CTS_Values<MDR_UART2::FR, 0, 1, ReadMode, MDR_UART2FRBase> ;
    using DSR = MDR_UART2_FR_DSR_Values<MDR_UART2::FR, 1, 1, ReadMode, MDR_UART2FRBase> ;
    using DCD = MDR_UART2_FR_DCD_Values<MDR_UART2::FR, 2, 1, ReadMode, MDR_UART2FRBase> ;
    using BUSY = MDR_UART2_FR_BUSY_Values<MDR_UART2::FR, 3, 1, ReadMode, MDR_UART2FRBase> ;
    using RXFE = MDR_UART2_FR_RXFE_Values<MDR_UART2::FR, 4, 1, ReadMode, MDR_UART2FRBase> ;
    using TXFF = MDR_UART2_FR_TXFF_Values<MDR_UART2::FR, 5, 1, ReadMode, MDR_UART2FRBase> ;
    using RXFF = MDR_UART2_FR_RXFF_Values<MDR_UART2::FR, 6, 1, ReadMode, MDR_UART2FRBase> ;
    using TXFE = MDR_UART2_FR_TXFE_Values<MDR_UART2::FR, 7, 1, ReadMode, MDR_UART2FRBase> ;
    using RI = MDR_UART2_FR_RI_Values<MDR_UART2::FR, 8, 1, ReadMode, MDR_UART2FRBase> ;
    using FieldValues = MDR_UART2_FR_RI_Values<MDR_UART2::FR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FRPack  = Register<0x40038018, 32, ReadMode, MDR_UART2FRBase, T...> ;

  struct MDR_UART2ILPRBase {} ;

  struct ILPR : public RegisterBase<0x40038020, 32, ReadWriteMode>
  {
    using DVSR = MDR_UART2_ILPR_DVSR_Values<MDR_UART2::ILPR, 0, 8, ReadWriteMode, MDR_UART2ILPRBase> ;
    using FieldValues = MDR_UART2_ILPR_DVSR_Values<MDR_UART2::ILPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ILPRPack  = Register<0x40038020, 32, ReadWriteMode, MDR_UART2ILPRBase, T...> ;

  struct MDR_UART2IBRDBase {} ;

  struct IBRD : public RegisterBase<0x40038024, 32, ReadWriteMode>
  {
    using Baud_DivInt = MDR_UART2_IBRD_Baud_DivInt_Values<MDR_UART2::IBRD, 0, 16, ReadWriteMode, MDR_UART2IBRDBase> ;
    using FieldValues = MDR_UART2_IBRD_Baud_DivInt_Values<MDR_UART2::IBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IBRDPack  = Register<0x40038024, 32, ReadWriteMode, MDR_UART2IBRDBase, T...> ;

  struct MDR_UART2FBRDBase {} ;

  struct FBRD : public RegisterBase<0x40038028, 32, ReadWriteMode>
  {
    using Baud_DivFrac = MDR_UART2_FBRD_Baud_DivFrac_Values<MDR_UART2::FBRD, 0, 6, ReadWriteMode, MDR_UART2FBRDBase> ;
    using FieldValues = MDR_UART2_FBRD_Baud_DivFrac_Values<MDR_UART2::FBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FBRDPack  = Register<0x40038028, 32, ReadWriteMode, MDR_UART2FBRDBase, T...> ;

  struct MDR_UART2LCR_HBase {} ;

  struct LCR_H : public RegisterBase<0x4003802C, 32, ReadWriteMode>
  {
    using BRK = MDR_UART2_LCR_H_BRK_Values<MDR_UART2::LCR_H, 0, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using PEN = MDR_UART2_LCR_H_PEN_Values<MDR_UART2::LCR_H, 1, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using EPS = MDR_UART2_LCR_H_EPS_Values<MDR_UART2::LCR_H, 2, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using STP2 = MDR_UART2_LCR_H_STP2_Values<MDR_UART2::LCR_H, 3, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using FEN = MDR_UART2_LCR_H_FEN_Values<MDR_UART2::LCR_H, 4, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using WLEN = MDR_UART2_LCR_H_WLEN_Values<MDR_UART2::LCR_H, 5, 2, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using SPS = MDR_UART2_LCR_H_SPS_Values<MDR_UART2::LCR_H, 7, 1, ReadWriteMode, MDR_UART2LCR_HBase> ;
    using FieldValues = MDR_UART2_LCR_H_SPS_Values<MDR_UART2::LCR_H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCR_HPack  = Register<0x4003802C, 32, ReadWriteMode, MDR_UART2LCR_HBase, T...> ;

  struct MDR_UART2CRBase {} ;

  struct CR : public RegisterBase<0x40038030, 32, ReadWriteMode>
  {
    using EN = MDR_UART2_CR_EN_Values<MDR_UART2::CR, 0, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using SIREN = MDR_UART2_CR_SIREN_Values<MDR_UART2::CR, 1, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using SIRLP = MDR_UART2_CR_SIRLP_Values<MDR_UART2::CR, 2, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using LBE = MDR_UART2_CR_LBE_Values<MDR_UART2::CR, 7, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using TXE = MDR_UART2_CR_TXE_Values<MDR_UART2::CR, 8, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using RXE = MDR_UART2_CR_RXE_Values<MDR_UART2::CR, 9, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using DTR = MDR_UART2_CR_DTR_Values<MDR_UART2::CR, 10, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using RTS = MDR_UART2_CR_RTS_Values<MDR_UART2::CR, 11, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using Out1 = MDR_UART2_CR_Out1_Values<MDR_UART2::CR, 12, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using Out2 = MDR_UART2_CR_Out2_Values<MDR_UART2::CR, 13, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using RTSEn = MDR_UART2_CR_RTSEn_Values<MDR_UART2::CR, 14, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using CTSEn = MDR_UART2_CR_CTSEn_Values<MDR_UART2::CR, 15, 1, ReadWriteMode, MDR_UART2CRBase> ;
    using FieldValues = MDR_UART2_CR_CTSEn_Values<MDR_UART2::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40038030, 32, ReadWriteMode, MDR_UART2CRBase, T...> ;

  struct MDR_UART2IFLSBase {} ;

  struct IFLS : public RegisterBase<0x40038034, 32, ReadWriteMode>
  {
    using TXIFLSES = MDR_UART2_IFLS_TXIFLSES_Values<MDR_UART2::IFLS, 0, 3, ReadWriteMode, MDR_UART2IFLSBase> ;
    using RXIFLSES = MDR_UART2_IFLS_RXIFLSES_Values<MDR_UART2::IFLS, 3, 3, ReadWriteMode, MDR_UART2IFLSBase> ;
    using FieldValues = MDR_UART2_IFLS_RXIFLSES_Values<MDR_UART2::IFLS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFLSPack  = Register<0x40038034, 32, ReadWriteMode, MDR_UART2IFLSBase, T...> ;

  struct MDR_UART2IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40038038, 32, ReadWriteMode>
  {
    using RIM_IM = MDR_UART2_IMSC_RIM_IM_Values<MDR_UART2::IMSC, 0, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using STCM_IM = MDR_UART2_IMSC_STCM_IM_Values<MDR_UART2::IMSC, 1, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using DCDM_IM = MDR_UART2_IMSC_DCDM_IM_Values<MDR_UART2::IMSC, 2, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using DSRM_IM = MDR_UART2_IMSC_DSRM_IM_Values<MDR_UART2::IMSC, 3, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using RX_IM = MDR_UART2_IMSC_RX_IM_Values<MDR_UART2::IMSC, 4, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using TX_IM = MDR_UART2_IMSC_TX_IM_Values<MDR_UART2::IMSC, 5, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using RT_IM = MDR_UART2_IMSC_RT_IM_Values<MDR_UART2::IMSC, 6, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using FE_IM = MDR_UART2_IMSC_FE_IM_Values<MDR_UART2::IMSC, 7, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using PE_IM = MDR_UART2_IMSC_PE_IM_Values<MDR_UART2::IMSC, 8, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using BE_IM = MDR_UART2_IMSC_BE_IM_Values<MDR_UART2::IMSC, 9, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using OE_IM = MDR_UART2_IMSC_OE_IM_Values<MDR_UART2::IMSC, 10, 1, ReadWriteMode, MDR_UART2IMSCBase> ;
    using FieldValues = MDR_UART2_IMSC_OE_IM_Values<MDR_UART2::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40038038, 32, ReadWriteMode, MDR_UART2IMSCBase, T...> ;

  struct MDR_UART2RISBase {} ;

  struct RIS : public RegisterBase<0x4003803C, 32, ReadMode>
  {
    using RIM_RIS = MDR_UART2_RIS_RIM_RIS_Values<MDR_UART2::RIS, 0, 1, ReadMode, MDR_UART2RISBase> ;
    using STCM_RIS = MDR_UART2_RIS_STCM_RIS_Values<MDR_UART2::RIS, 1, 1, ReadMode, MDR_UART2RISBase> ;
    using DCDM_RIS = MDR_UART2_RIS_DCDM_RIS_Values<MDR_UART2::RIS, 2, 1, ReadMode, MDR_UART2RISBase> ;
    using DSRM_RIS = MDR_UART2_RIS_DSRM_RIS_Values<MDR_UART2::RIS, 3, 1, ReadMode, MDR_UART2RISBase> ;
    using RX_RIS = MDR_UART2_RIS_RX_RIS_Values<MDR_UART2::RIS, 4, 1, ReadMode, MDR_UART2RISBase> ;
    using TX_RIS = MDR_UART2_RIS_TX_RIS_Values<MDR_UART2::RIS, 5, 1, ReadMode, MDR_UART2RISBase> ;
    using RT_RIS = MDR_UART2_RIS_RT_RIS_Values<MDR_UART2::RIS, 6, 1, ReadMode, MDR_UART2RISBase> ;
    using FE_RIS = MDR_UART2_RIS_FE_RIS_Values<MDR_UART2::RIS, 7, 1, ReadMode, MDR_UART2RISBase> ;
    using PE_RIS = MDR_UART2_RIS_PE_RIS_Values<MDR_UART2::RIS, 8, 1, ReadMode, MDR_UART2RISBase> ;
    using BE_RIS = MDR_UART2_RIS_BE_RIS_Values<MDR_UART2::RIS, 9, 1, ReadMode, MDR_UART2RISBase> ;
    using OE_RIS = MDR_UART2_RIS_OE_RIS_Values<MDR_UART2::RIS, 10, 1, ReadMode, MDR_UART2RISBase> ;
    using FieldValues = MDR_UART2_RIS_OE_RIS_Values<MDR_UART2::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x4003803C, 32, ReadMode, MDR_UART2RISBase, T...> ;

  struct MDR_UART2MISBase {} ;

  struct MIS : public RegisterBase<0x40038040, 32, ReadMode>
  {
    using RIM_MIS = MDR_UART2_MIS_RIM_MIS_Values<MDR_UART2::MIS, 0, 1, ReadMode, MDR_UART2MISBase> ;
    using STCM_MIS = MDR_UART2_MIS_STCM_MIS_Values<MDR_UART2::MIS, 1, 1, ReadMode, MDR_UART2MISBase> ;
    using DCDM_MIS = MDR_UART2_MIS_DCDM_MIS_Values<MDR_UART2::MIS, 2, 1, ReadMode, MDR_UART2MISBase> ;
    using DSRM_MIS = MDR_UART2_MIS_DSRM_MIS_Values<MDR_UART2::MIS, 3, 1, ReadMode, MDR_UART2MISBase> ;
    using RX_MIS = MDR_UART2_MIS_RX_MIS_Values<MDR_UART2::MIS, 4, 1, ReadMode, MDR_UART2MISBase> ;
    using TX_MIS = MDR_UART2_MIS_TX_MIS_Values<MDR_UART2::MIS, 5, 1, ReadMode, MDR_UART2MISBase> ;
    using RT_MIS = MDR_UART2_MIS_RT_MIS_Values<MDR_UART2::MIS, 6, 1, ReadMode, MDR_UART2MISBase> ;
    using FE_MIS = MDR_UART2_MIS_FE_MIS_Values<MDR_UART2::MIS, 7, 1, ReadMode, MDR_UART2MISBase> ;
    using PE_MIS = MDR_UART2_MIS_PE_MIS_Values<MDR_UART2::MIS, 8, 1, ReadMode, MDR_UART2MISBase> ;
    using BE_MIS = MDR_UART2_MIS_BE_MIS_Values<MDR_UART2::MIS, 9, 1, ReadMode, MDR_UART2MISBase> ;
    using OE_MIS = MDR_UART2_MIS_OE_MIS_Values<MDR_UART2::MIS, 10, 1, ReadMode, MDR_UART2MISBase> ;
    using FieldValues = MDR_UART2_MIS_OE_MIS_Values<MDR_UART2::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x40038040, 32, ReadMode, MDR_UART2MISBase, T...> ;

  struct MDR_UART2ICRBase {} ;

  struct ICR : public RegisterBase<0x40038044, 32, WriteMode>
  {
    using RIM_IC = MDR_UART2_ICR_RIM_IC_Values<MDR_UART2::ICR, 0, 1, WriteMode, MDR_UART2ICRBase> ;
    using STCM_IC = MDR_UART2_ICR_STCM_IC_Values<MDR_UART2::ICR, 1, 1, WriteMode, MDR_UART2ICRBase> ;
    using DCDM_IC = MDR_UART2_ICR_DCDM_IC_Values<MDR_UART2::ICR, 2, 1, WriteMode, MDR_UART2ICRBase> ;
    using DSRM_IC = MDR_UART2_ICR_DSRM_IC_Values<MDR_UART2::ICR, 3, 1, WriteMode, MDR_UART2ICRBase> ;
    using RX_IC = MDR_UART2_ICR_RX_IC_Values<MDR_UART2::ICR, 4, 1, WriteMode, MDR_UART2ICRBase> ;
    using TX_IC = MDR_UART2_ICR_TX_IC_Values<MDR_UART2::ICR, 5, 1, WriteMode, MDR_UART2ICRBase> ;
    using RT_IC = MDR_UART2_ICR_RT_IC_Values<MDR_UART2::ICR, 6, 1, WriteMode, MDR_UART2ICRBase> ;
    using FE_IC = MDR_UART2_ICR_FE_IC_Values<MDR_UART2::ICR, 7, 1, WriteMode, MDR_UART2ICRBase> ;
    using PE_IC = MDR_UART2_ICR_PE_IC_Values<MDR_UART2::ICR, 8, 1, WriteMode, MDR_UART2ICRBase> ;
    using BE_IC = MDR_UART2_ICR_BE_IC_Values<MDR_UART2::ICR, 9, 1, WriteMode, MDR_UART2ICRBase> ;
    using OE_IC = MDR_UART2_ICR_OE_IC_Values<MDR_UART2::ICR, 10, 1, WriteMode, MDR_UART2ICRBase> ;
    using FieldValues = MDR_UART2_ICR_OE_IC_Values<MDR_UART2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40038044, 32, WriteMode, MDR_UART2ICRBase, T...> ;

  struct MDR_UART2DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40038048, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_UART2_DMACR_RXDMAE_Values<MDR_UART2::DMACR, 0, 1, ReadWriteMode, MDR_UART2DMACRBase> ;
    using TXDMAE = MDR_UART2_DMACR_TXDMAE_Values<MDR_UART2::DMACR, 1, 1, ReadWriteMode, MDR_UART2DMACRBase> ;
    using DMAonErr = MDR_UART2_DMACR_DMAonErr_Values<MDR_UART2::DMACR, 2, 1, ReadWriteMode, MDR_UART2DMACRBase> ;
    using FieldValues = MDR_UART2_DMACR_DMAonErr_Values<MDR_UART2::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40038048, 32, ReadWriteMode, MDR_UART2DMACRBase, T...> ;

  struct MDR_UART2TCRBase {} ;

  struct TCR : public RegisterBase<0x40038080, 32, ReadWriteMode>
  {
    using ITEN = MDR_UART2_TCR_ITEN_Values<MDR_UART2::TCR, 0, 1, ReadWriteMode, MDR_UART2TCRBase> ;
    using TestFIFO = MDR_UART2_TCR_TestFIFO_Values<MDR_UART2::TCR, 1, 1, ReadWriteMode, MDR_UART2TCRBase> ;
    using SIRTest = MDR_UART2_TCR_SIRTest_Values<MDR_UART2::TCR, 2, 1, ReadWriteMode, MDR_UART2TCRBase> ;
    using FieldValues = MDR_UART2_TCR_SIRTest_Values<MDR_UART2::TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRPack  = Register<0x40038080, 32, ReadWriteMode, MDR_UART2TCRBase, T...> ;

} ;

#endif //#if !defined(MDRUART2REGISTERS_HPP)
