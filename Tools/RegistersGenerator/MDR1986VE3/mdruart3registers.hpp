/*******************************************************************************
* Filename      : mdruart3registers.hpp
*
* Details       : UART Control. This header file is auto-generated for
*                 MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRUART3REGISTERS_HPP)
#define MDRUART3REGISTERS_HPP

#include "mdruart3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_UART3
{
  struct MDR_UART3DRBase {} ;

  struct DR : public RegisterBase<0x40120000, 32, ReadWriteMode>
  {
    using DATA = MDR_UART3_DR_DATA_Values<MDR_UART3::DR, 0, 8, ReadWriteMode, MDR_UART3DRBase> ;
    using FE = MDR_UART3_DR_FE_Values<MDR_UART3::DR, 8, 1, ReadWriteMode, MDR_UART3DRBase> ;
    using PE = MDR_UART3_DR_PE_Values<MDR_UART3::DR, 9, 1, ReadWriteMode, MDR_UART3DRBase> ;
    using BE = MDR_UART3_DR_BE_Values<MDR_UART3::DR, 10, 1, ReadWriteMode, MDR_UART3DRBase> ;
    using OE = MDR_UART3_DR_OE_Values<MDR_UART3::DR, 11, 1, ReadWriteMode, MDR_UART3DRBase> ;
    using FieldValues = MDR_UART3_DR_OE_Values<MDR_UART3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40120000, 32, ReadWriteMode, MDR_UART3DRBase, T...> ;

  struct MDR_UART3RSR_ECRBase {} ;

  struct RSR_ECR : public RegisterBase<0x40120004, 32, ReadWriteMode>
  {
    using FE = MDR_UART3_RSR_ECR_FE_Values<MDR_UART3::RSR_ECR, 0, 1, ReadWriteMode, MDR_UART3RSR_ECRBase> ;
    using PE = MDR_UART3_RSR_ECR_PE_Values<MDR_UART3::RSR_ECR, 1, 1, ReadWriteMode, MDR_UART3RSR_ECRBase> ;
    using BE = MDR_UART3_RSR_ECR_BE_Values<MDR_UART3::RSR_ECR, 2, 1, ReadWriteMode, MDR_UART3RSR_ECRBase> ;
    using OE = MDR_UART3_RSR_ECR_OE_Values<MDR_UART3::RSR_ECR, 3, 1, ReadWriteMode, MDR_UART3RSR_ECRBase> ;
    using FieldValues = MDR_UART3_RSR_ECR_OE_Values<MDR_UART3::RSR_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSR_ECRPack  = Register<0x40120004, 32, ReadWriteMode, MDR_UART3RSR_ECRBase, T...> ;

  struct MDR_UART3FRBase {} ;

  struct FR : public RegisterBase<0x40120018, 32, ReadMode>
  {
    using CTS = MDR_UART3_FR_CTS_Values<MDR_UART3::FR, 0, 1, ReadMode, MDR_UART3FRBase> ;
    using DSR = MDR_UART3_FR_DSR_Values<MDR_UART3::FR, 1, 1, ReadMode, MDR_UART3FRBase> ;
    using DCD = MDR_UART3_FR_DCD_Values<MDR_UART3::FR, 2, 1, ReadMode, MDR_UART3FRBase> ;
    using BUSY = MDR_UART3_FR_BUSY_Values<MDR_UART3::FR, 3, 1, ReadMode, MDR_UART3FRBase> ;
    using RXFE = MDR_UART3_FR_RXFE_Values<MDR_UART3::FR, 4, 1, ReadMode, MDR_UART3FRBase> ;
    using TXFF = MDR_UART3_FR_TXFF_Values<MDR_UART3::FR, 5, 1, ReadMode, MDR_UART3FRBase> ;
    using RXFF = MDR_UART3_FR_RXFF_Values<MDR_UART3::FR, 6, 1, ReadMode, MDR_UART3FRBase> ;
    using TXFE = MDR_UART3_FR_TXFE_Values<MDR_UART3::FR, 7, 1, ReadMode, MDR_UART3FRBase> ;
    using RI = MDR_UART3_FR_RI_Values<MDR_UART3::FR, 8, 1, ReadMode, MDR_UART3FRBase> ;
    using FieldValues = MDR_UART3_FR_RI_Values<MDR_UART3::FR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FRPack  = Register<0x40120018, 32, ReadMode, MDR_UART3FRBase, T...> ;

  struct MDR_UART3ILPRBase {} ;

  struct ILPR : public RegisterBase<0x40120020, 32, ReadWriteMode>
  {
    using DVSR = MDR_UART3_ILPR_DVSR_Values<MDR_UART3::ILPR, 0, 8, ReadWriteMode, MDR_UART3ILPRBase> ;
    using FieldValues = MDR_UART3_ILPR_DVSR_Values<MDR_UART3::ILPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ILPRPack  = Register<0x40120020, 32, ReadWriteMode, MDR_UART3ILPRBase, T...> ;

  struct MDR_UART3IBRDBase {} ;

  struct IBRD : public RegisterBase<0x40120024, 32, ReadWriteMode>
  {
    using Baud_DivInt = MDR_UART3_IBRD_Baud_DivInt_Values<MDR_UART3::IBRD, 0, 16, ReadWriteMode, MDR_UART3IBRDBase> ;
    using FieldValues = MDR_UART3_IBRD_Baud_DivInt_Values<MDR_UART3::IBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IBRDPack  = Register<0x40120024, 32, ReadWriteMode, MDR_UART3IBRDBase, T...> ;

  struct MDR_UART3FBRDBase {} ;

  struct FBRD : public RegisterBase<0x40120028, 32, ReadWriteMode>
  {
    using Baud_DivFrac = MDR_UART3_FBRD_Baud_DivFrac_Values<MDR_UART3::FBRD, 0, 6, ReadWriteMode, MDR_UART3FBRDBase> ;
    using FieldValues = MDR_UART3_FBRD_Baud_DivFrac_Values<MDR_UART3::FBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FBRDPack  = Register<0x40120028, 32, ReadWriteMode, MDR_UART3FBRDBase, T...> ;

  struct MDR_UART3LCR_HBase {} ;

  struct LCR_H : public RegisterBase<0x4012002C, 32, ReadWriteMode>
  {
    using BRK = MDR_UART3_LCR_H_BRK_Values<MDR_UART3::LCR_H, 0, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using PEN = MDR_UART3_LCR_H_PEN_Values<MDR_UART3::LCR_H, 1, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using EPS = MDR_UART3_LCR_H_EPS_Values<MDR_UART3::LCR_H, 2, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using STP2 = MDR_UART3_LCR_H_STP2_Values<MDR_UART3::LCR_H, 3, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using FEN = MDR_UART3_LCR_H_FEN_Values<MDR_UART3::LCR_H, 4, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using WLEN = MDR_UART3_LCR_H_WLEN_Values<MDR_UART3::LCR_H, 5, 2, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using SPS = MDR_UART3_LCR_H_SPS_Values<MDR_UART3::LCR_H, 7, 1, ReadWriteMode, MDR_UART3LCR_HBase> ;
    using FieldValues = MDR_UART3_LCR_H_SPS_Values<MDR_UART3::LCR_H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCR_HPack  = Register<0x4012002C, 32, ReadWriteMode, MDR_UART3LCR_HBase, T...> ;

  struct MDR_UART3CRBase {} ;

  struct CR : public RegisterBase<0x40120030, 32, ReadWriteMode>
  {
    using EN = MDR_UART3_CR_EN_Values<MDR_UART3::CR, 0, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using SIREN = MDR_UART3_CR_SIREN_Values<MDR_UART3::CR, 1, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using SIRLP = MDR_UART3_CR_SIRLP_Values<MDR_UART3::CR, 2, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using LBE = MDR_UART3_CR_LBE_Values<MDR_UART3::CR, 7, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using TXE = MDR_UART3_CR_TXE_Values<MDR_UART3::CR, 8, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using RXE = MDR_UART3_CR_RXE_Values<MDR_UART3::CR, 9, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using DTR = MDR_UART3_CR_DTR_Values<MDR_UART3::CR, 10, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using RTS = MDR_UART3_CR_RTS_Values<MDR_UART3::CR, 11, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using Out1 = MDR_UART3_CR_Out1_Values<MDR_UART3::CR, 12, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using Out2 = MDR_UART3_CR_Out2_Values<MDR_UART3::CR, 13, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using RTSEn = MDR_UART3_CR_RTSEn_Values<MDR_UART3::CR, 14, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using CTSEn = MDR_UART3_CR_CTSEn_Values<MDR_UART3::CR, 15, 1, ReadWriteMode, MDR_UART3CRBase> ;
    using FieldValues = MDR_UART3_CR_CTSEn_Values<MDR_UART3::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40120030, 32, ReadWriteMode, MDR_UART3CRBase, T...> ;

  struct MDR_UART3IFLSBase {} ;

  struct IFLS : public RegisterBase<0x40120034, 32, ReadWriteMode>
  {
    using TXIFLSES = MDR_UART3_IFLS_TXIFLSES_Values<MDR_UART3::IFLS, 0, 3, ReadWriteMode, MDR_UART3IFLSBase> ;
    using RXIFLSES = MDR_UART3_IFLS_RXIFLSES_Values<MDR_UART3::IFLS, 3, 3, ReadWriteMode, MDR_UART3IFLSBase> ;
    using FieldValues = MDR_UART3_IFLS_RXIFLSES_Values<MDR_UART3::IFLS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFLSPack  = Register<0x40120034, 32, ReadWriteMode, MDR_UART3IFLSBase, T...> ;

  struct MDR_UART3IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40120038, 32, ReadWriteMode>
  {
    using RIM_IM = MDR_UART3_IMSC_RIM_IM_Values<MDR_UART3::IMSC, 0, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using STCM_IM = MDR_UART3_IMSC_STCM_IM_Values<MDR_UART3::IMSC, 1, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using DCDM_IM = MDR_UART3_IMSC_DCDM_IM_Values<MDR_UART3::IMSC, 2, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using DSRM_IM = MDR_UART3_IMSC_DSRM_IM_Values<MDR_UART3::IMSC, 3, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using RX_IM = MDR_UART3_IMSC_RX_IM_Values<MDR_UART3::IMSC, 4, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using TX_IM = MDR_UART3_IMSC_TX_IM_Values<MDR_UART3::IMSC, 5, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using RT_IM = MDR_UART3_IMSC_RT_IM_Values<MDR_UART3::IMSC, 6, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using FE_IM = MDR_UART3_IMSC_FE_IM_Values<MDR_UART3::IMSC, 7, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using PE_IM = MDR_UART3_IMSC_PE_IM_Values<MDR_UART3::IMSC, 8, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using BE_IM = MDR_UART3_IMSC_BE_IM_Values<MDR_UART3::IMSC, 9, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using OE_IM = MDR_UART3_IMSC_OE_IM_Values<MDR_UART3::IMSC, 10, 1, ReadWriteMode, MDR_UART3IMSCBase> ;
    using FieldValues = MDR_UART3_IMSC_OE_IM_Values<MDR_UART3::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40120038, 32, ReadWriteMode, MDR_UART3IMSCBase, T...> ;

  struct MDR_UART3RISBase {} ;

  struct RIS : public RegisterBase<0x4012003C, 32, ReadMode>
  {
    using RIM_RIS = MDR_UART3_RIS_RIM_RIS_Values<MDR_UART3::RIS, 0, 1, ReadMode, MDR_UART3RISBase> ;
    using STCM_RIS = MDR_UART3_RIS_STCM_RIS_Values<MDR_UART3::RIS, 1, 1, ReadMode, MDR_UART3RISBase> ;
    using DCDM_RIS = MDR_UART3_RIS_DCDM_RIS_Values<MDR_UART3::RIS, 2, 1, ReadMode, MDR_UART3RISBase> ;
    using DSRM_RIS = MDR_UART3_RIS_DSRM_RIS_Values<MDR_UART3::RIS, 3, 1, ReadMode, MDR_UART3RISBase> ;
    using RX_RIS = MDR_UART3_RIS_RX_RIS_Values<MDR_UART3::RIS, 4, 1, ReadMode, MDR_UART3RISBase> ;
    using TX_RIS = MDR_UART3_RIS_TX_RIS_Values<MDR_UART3::RIS, 5, 1, ReadMode, MDR_UART3RISBase> ;
    using RT_RIS = MDR_UART3_RIS_RT_RIS_Values<MDR_UART3::RIS, 6, 1, ReadMode, MDR_UART3RISBase> ;
    using FE_RIS = MDR_UART3_RIS_FE_RIS_Values<MDR_UART3::RIS, 7, 1, ReadMode, MDR_UART3RISBase> ;
    using PE_RIS = MDR_UART3_RIS_PE_RIS_Values<MDR_UART3::RIS, 8, 1, ReadMode, MDR_UART3RISBase> ;
    using BE_RIS = MDR_UART3_RIS_BE_RIS_Values<MDR_UART3::RIS, 9, 1, ReadMode, MDR_UART3RISBase> ;
    using OE_RIS = MDR_UART3_RIS_OE_RIS_Values<MDR_UART3::RIS, 10, 1, ReadMode, MDR_UART3RISBase> ;
    using FieldValues = MDR_UART3_RIS_OE_RIS_Values<MDR_UART3::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x4012003C, 32, ReadMode, MDR_UART3RISBase, T...> ;

  struct MDR_UART3MISBase {} ;

  struct MIS : public RegisterBase<0x40120040, 32, ReadMode>
  {
    using RIM_MIS = MDR_UART3_MIS_RIM_MIS_Values<MDR_UART3::MIS, 0, 1, ReadMode, MDR_UART3MISBase> ;
    using STCM_MIS = MDR_UART3_MIS_STCM_MIS_Values<MDR_UART3::MIS, 1, 1, ReadMode, MDR_UART3MISBase> ;
    using DCDM_MIS = MDR_UART3_MIS_DCDM_MIS_Values<MDR_UART3::MIS, 2, 1, ReadMode, MDR_UART3MISBase> ;
    using DSRM_MIS = MDR_UART3_MIS_DSRM_MIS_Values<MDR_UART3::MIS, 3, 1, ReadMode, MDR_UART3MISBase> ;
    using RX_MIS = MDR_UART3_MIS_RX_MIS_Values<MDR_UART3::MIS, 4, 1, ReadMode, MDR_UART3MISBase> ;
    using TX_MIS = MDR_UART3_MIS_TX_MIS_Values<MDR_UART3::MIS, 5, 1, ReadMode, MDR_UART3MISBase> ;
    using RT_MIS = MDR_UART3_MIS_RT_MIS_Values<MDR_UART3::MIS, 6, 1, ReadMode, MDR_UART3MISBase> ;
    using FE_MIS = MDR_UART3_MIS_FE_MIS_Values<MDR_UART3::MIS, 7, 1, ReadMode, MDR_UART3MISBase> ;
    using PE_MIS = MDR_UART3_MIS_PE_MIS_Values<MDR_UART3::MIS, 8, 1, ReadMode, MDR_UART3MISBase> ;
    using BE_MIS = MDR_UART3_MIS_BE_MIS_Values<MDR_UART3::MIS, 9, 1, ReadMode, MDR_UART3MISBase> ;
    using OE_MIS = MDR_UART3_MIS_OE_MIS_Values<MDR_UART3::MIS, 10, 1, ReadMode, MDR_UART3MISBase> ;
    using FieldValues = MDR_UART3_MIS_OE_MIS_Values<MDR_UART3::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x40120040, 32, ReadMode, MDR_UART3MISBase, T...> ;

  struct MDR_UART3ICRBase {} ;

  struct ICR : public RegisterBase<0x40120044, 32, WriteMode>
  {
    using RIM_IC = MDR_UART3_ICR_RIM_IC_Values<MDR_UART3::ICR, 0, 1, WriteMode, MDR_UART3ICRBase> ;
    using STCM_IC = MDR_UART3_ICR_STCM_IC_Values<MDR_UART3::ICR, 1, 1, WriteMode, MDR_UART3ICRBase> ;
    using DCDM_IC = MDR_UART3_ICR_DCDM_IC_Values<MDR_UART3::ICR, 2, 1, WriteMode, MDR_UART3ICRBase> ;
    using DSRM_IC = MDR_UART3_ICR_DSRM_IC_Values<MDR_UART3::ICR, 3, 1, WriteMode, MDR_UART3ICRBase> ;
    using RX_IC = MDR_UART3_ICR_RX_IC_Values<MDR_UART3::ICR, 4, 1, WriteMode, MDR_UART3ICRBase> ;
    using TX_IC = MDR_UART3_ICR_TX_IC_Values<MDR_UART3::ICR, 5, 1, WriteMode, MDR_UART3ICRBase> ;
    using RT_IC = MDR_UART3_ICR_RT_IC_Values<MDR_UART3::ICR, 6, 1, WriteMode, MDR_UART3ICRBase> ;
    using FE_IC = MDR_UART3_ICR_FE_IC_Values<MDR_UART3::ICR, 7, 1, WriteMode, MDR_UART3ICRBase> ;
    using PE_IC = MDR_UART3_ICR_PE_IC_Values<MDR_UART3::ICR, 8, 1, WriteMode, MDR_UART3ICRBase> ;
    using BE_IC = MDR_UART3_ICR_BE_IC_Values<MDR_UART3::ICR, 9, 1, WriteMode, MDR_UART3ICRBase> ;
    using OE_IC = MDR_UART3_ICR_OE_IC_Values<MDR_UART3::ICR, 10, 1, WriteMode, MDR_UART3ICRBase> ;
    using FieldValues = MDR_UART3_ICR_OE_IC_Values<MDR_UART3::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40120044, 32, WriteMode, MDR_UART3ICRBase, T...> ;

  struct MDR_UART3DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40120048, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_UART3_DMACR_RXDMAE_Values<MDR_UART3::DMACR, 0, 1, ReadWriteMode, MDR_UART3DMACRBase> ;
    using TXDMAE = MDR_UART3_DMACR_TXDMAE_Values<MDR_UART3::DMACR, 1, 1, ReadWriteMode, MDR_UART3DMACRBase> ;
    using DMAonErr = MDR_UART3_DMACR_DMAonErr_Values<MDR_UART3::DMACR, 2, 1, ReadWriteMode, MDR_UART3DMACRBase> ;
    using FieldValues = MDR_UART3_DMACR_DMAonErr_Values<MDR_UART3::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40120048, 32, ReadWriteMode, MDR_UART3DMACRBase, T...> ;

  struct MDR_UART3TCRBase {} ;

  struct TCR : public RegisterBase<0x40120080, 32, ReadWriteMode>
  {
    using ITEN = MDR_UART3_TCR_ITEN_Values<MDR_UART3::TCR, 0, 1, ReadWriteMode, MDR_UART3TCRBase> ;
    using TestFIFO = MDR_UART3_TCR_TestFIFO_Values<MDR_UART3::TCR, 1, 1, ReadWriteMode, MDR_UART3TCRBase> ;
    using SIRTest = MDR_UART3_TCR_SIRTest_Values<MDR_UART3::TCR, 2, 1, ReadWriteMode, MDR_UART3TCRBase> ;
    using FieldValues = MDR_UART3_TCR_SIRTest_Values<MDR_UART3::TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRPack  = Register<0x40120080, 32, ReadWriteMode, MDR_UART3TCRBase, T...> ;

} ;

#endif //#if !defined(MDRUART3REGISTERS_HPP)
