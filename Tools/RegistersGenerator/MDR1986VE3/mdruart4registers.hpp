/*******************************************************************************
* Filename      : mdruart4registers.hpp
*
* Details       : UART Control. This header file is auto-generated for
*                 MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRUART4REGISTERS_HPP)
#define MDRUART4REGISTERS_HPP

#include "mdruart4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_UART4
{
  struct MDR_UART4DRBase {} ;

  struct DR : public RegisterBase<0x40128000, 32, ReadWriteMode>
  {
    using DATA = MDR_UART4_DR_DATA_Values<MDR_UART4::DR, 0, 8, ReadWriteMode, MDR_UART4DRBase> ;
    using FE = MDR_UART4_DR_FE_Values<MDR_UART4::DR, 8, 1, ReadWriteMode, MDR_UART4DRBase> ;
    using PE = MDR_UART4_DR_PE_Values<MDR_UART4::DR, 9, 1, ReadWriteMode, MDR_UART4DRBase> ;
    using BE = MDR_UART4_DR_BE_Values<MDR_UART4::DR, 10, 1, ReadWriteMode, MDR_UART4DRBase> ;
    using OE = MDR_UART4_DR_OE_Values<MDR_UART4::DR, 11, 1, ReadWriteMode, MDR_UART4DRBase> ;
    using FieldValues = MDR_UART4_DR_OE_Values<MDR_UART4::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40128000, 32, ReadWriteMode, MDR_UART4DRBase, T...> ;

  struct MDR_UART4RSR_ECRBase {} ;

  struct RSR_ECR : public RegisterBase<0x40128004, 32, ReadWriteMode>
  {
    using FE = MDR_UART4_RSR_ECR_FE_Values<MDR_UART4::RSR_ECR, 0, 1, ReadWriteMode, MDR_UART4RSR_ECRBase> ;
    using PE = MDR_UART4_RSR_ECR_PE_Values<MDR_UART4::RSR_ECR, 1, 1, ReadWriteMode, MDR_UART4RSR_ECRBase> ;
    using BE = MDR_UART4_RSR_ECR_BE_Values<MDR_UART4::RSR_ECR, 2, 1, ReadWriteMode, MDR_UART4RSR_ECRBase> ;
    using OE = MDR_UART4_RSR_ECR_OE_Values<MDR_UART4::RSR_ECR, 3, 1, ReadWriteMode, MDR_UART4RSR_ECRBase> ;
    using FieldValues = MDR_UART4_RSR_ECR_OE_Values<MDR_UART4::RSR_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSR_ECRPack  = Register<0x40128004, 32, ReadWriteMode, MDR_UART4RSR_ECRBase, T...> ;

  struct MDR_UART4FRBase {} ;

  struct FR : public RegisterBase<0x40128018, 32, ReadMode>
  {
    using CTS = MDR_UART4_FR_CTS_Values<MDR_UART4::FR, 0, 1, ReadMode, MDR_UART4FRBase> ;
    using DSR = MDR_UART4_FR_DSR_Values<MDR_UART4::FR, 1, 1, ReadMode, MDR_UART4FRBase> ;
    using DCD = MDR_UART4_FR_DCD_Values<MDR_UART4::FR, 2, 1, ReadMode, MDR_UART4FRBase> ;
    using BUSY = MDR_UART4_FR_BUSY_Values<MDR_UART4::FR, 3, 1, ReadMode, MDR_UART4FRBase> ;
    using RXFE = MDR_UART4_FR_RXFE_Values<MDR_UART4::FR, 4, 1, ReadMode, MDR_UART4FRBase> ;
    using TXFF = MDR_UART4_FR_TXFF_Values<MDR_UART4::FR, 5, 1, ReadMode, MDR_UART4FRBase> ;
    using RXFF = MDR_UART4_FR_RXFF_Values<MDR_UART4::FR, 6, 1, ReadMode, MDR_UART4FRBase> ;
    using TXFE = MDR_UART4_FR_TXFE_Values<MDR_UART4::FR, 7, 1, ReadMode, MDR_UART4FRBase> ;
    using RI = MDR_UART4_FR_RI_Values<MDR_UART4::FR, 8, 1, ReadMode, MDR_UART4FRBase> ;
    using FieldValues = MDR_UART4_FR_RI_Values<MDR_UART4::FR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FRPack  = Register<0x40128018, 32, ReadMode, MDR_UART4FRBase, T...> ;

  struct MDR_UART4ILPRBase {} ;

  struct ILPR : public RegisterBase<0x40128020, 32, ReadWriteMode>
  {
    using DVSR = MDR_UART4_ILPR_DVSR_Values<MDR_UART4::ILPR, 0, 8, ReadWriteMode, MDR_UART4ILPRBase> ;
    using FieldValues = MDR_UART4_ILPR_DVSR_Values<MDR_UART4::ILPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ILPRPack  = Register<0x40128020, 32, ReadWriteMode, MDR_UART4ILPRBase, T...> ;

  struct MDR_UART4IBRDBase {} ;

  struct IBRD : public RegisterBase<0x40128024, 32, ReadWriteMode>
  {
    using Baud_DivInt = MDR_UART4_IBRD_Baud_DivInt_Values<MDR_UART4::IBRD, 0, 16, ReadWriteMode, MDR_UART4IBRDBase> ;
    using FieldValues = MDR_UART4_IBRD_Baud_DivInt_Values<MDR_UART4::IBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IBRDPack  = Register<0x40128024, 32, ReadWriteMode, MDR_UART4IBRDBase, T...> ;

  struct MDR_UART4FBRDBase {} ;

  struct FBRD : public RegisterBase<0x40128028, 32, ReadWriteMode>
  {
    using Baud_DivFrac = MDR_UART4_FBRD_Baud_DivFrac_Values<MDR_UART4::FBRD, 0, 6, ReadWriteMode, MDR_UART4FBRDBase> ;
    using FieldValues = MDR_UART4_FBRD_Baud_DivFrac_Values<MDR_UART4::FBRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FBRDPack  = Register<0x40128028, 32, ReadWriteMode, MDR_UART4FBRDBase, T...> ;

  struct MDR_UART4LCR_HBase {} ;

  struct LCR_H : public RegisterBase<0x4012802C, 32, ReadWriteMode>
  {
    using BRK = MDR_UART4_LCR_H_BRK_Values<MDR_UART4::LCR_H, 0, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using PEN = MDR_UART4_LCR_H_PEN_Values<MDR_UART4::LCR_H, 1, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using EPS = MDR_UART4_LCR_H_EPS_Values<MDR_UART4::LCR_H, 2, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using STP2 = MDR_UART4_LCR_H_STP2_Values<MDR_UART4::LCR_H, 3, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using FEN = MDR_UART4_LCR_H_FEN_Values<MDR_UART4::LCR_H, 4, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using WLEN = MDR_UART4_LCR_H_WLEN_Values<MDR_UART4::LCR_H, 5, 2, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using SPS = MDR_UART4_LCR_H_SPS_Values<MDR_UART4::LCR_H, 7, 1, ReadWriteMode, MDR_UART4LCR_HBase> ;
    using FieldValues = MDR_UART4_LCR_H_SPS_Values<MDR_UART4::LCR_H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCR_HPack  = Register<0x4012802C, 32, ReadWriteMode, MDR_UART4LCR_HBase, T...> ;

  struct MDR_UART4CRBase {} ;

  struct CR : public RegisterBase<0x40128030, 32, ReadWriteMode>
  {
    using EN = MDR_UART4_CR_EN_Values<MDR_UART4::CR, 0, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using SIREN = MDR_UART4_CR_SIREN_Values<MDR_UART4::CR, 1, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using SIRLP = MDR_UART4_CR_SIRLP_Values<MDR_UART4::CR, 2, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using LBE = MDR_UART4_CR_LBE_Values<MDR_UART4::CR, 7, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using TXE = MDR_UART4_CR_TXE_Values<MDR_UART4::CR, 8, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using RXE = MDR_UART4_CR_RXE_Values<MDR_UART4::CR, 9, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using DTR = MDR_UART4_CR_DTR_Values<MDR_UART4::CR, 10, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using RTS = MDR_UART4_CR_RTS_Values<MDR_UART4::CR, 11, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using Out1 = MDR_UART4_CR_Out1_Values<MDR_UART4::CR, 12, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using Out2 = MDR_UART4_CR_Out2_Values<MDR_UART4::CR, 13, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using RTSEn = MDR_UART4_CR_RTSEn_Values<MDR_UART4::CR, 14, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using CTSEn = MDR_UART4_CR_CTSEn_Values<MDR_UART4::CR, 15, 1, ReadWriteMode, MDR_UART4CRBase> ;
    using FieldValues = MDR_UART4_CR_CTSEn_Values<MDR_UART4::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40128030, 32, ReadWriteMode, MDR_UART4CRBase, T...> ;

  struct MDR_UART4IFLSBase {} ;

  struct IFLS : public RegisterBase<0x40128034, 32, ReadWriteMode>
  {
    using TXIFLSES = MDR_UART4_IFLS_TXIFLSES_Values<MDR_UART4::IFLS, 0, 3, ReadWriteMode, MDR_UART4IFLSBase> ;
    using RXIFLSES = MDR_UART4_IFLS_RXIFLSES_Values<MDR_UART4::IFLS, 3, 3, ReadWriteMode, MDR_UART4IFLSBase> ;
    using FieldValues = MDR_UART4_IFLS_RXIFLSES_Values<MDR_UART4::IFLS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFLSPack  = Register<0x40128034, 32, ReadWriteMode, MDR_UART4IFLSBase, T...> ;

  struct MDR_UART4IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40128038, 32, ReadWriteMode>
  {
    using RIM_IM = MDR_UART4_IMSC_RIM_IM_Values<MDR_UART4::IMSC, 0, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using STCM_IM = MDR_UART4_IMSC_STCM_IM_Values<MDR_UART4::IMSC, 1, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using DCDM_IM = MDR_UART4_IMSC_DCDM_IM_Values<MDR_UART4::IMSC, 2, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using DSRM_IM = MDR_UART4_IMSC_DSRM_IM_Values<MDR_UART4::IMSC, 3, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using RX_IM = MDR_UART4_IMSC_RX_IM_Values<MDR_UART4::IMSC, 4, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using TX_IM = MDR_UART4_IMSC_TX_IM_Values<MDR_UART4::IMSC, 5, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using RT_IM = MDR_UART4_IMSC_RT_IM_Values<MDR_UART4::IMSC, 6, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using FE_IM = MDR_UART4_IMSC_FE_IM_Values<MDR_UART4::IMSC, 7, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using PE_IM = MDR_UART4_IMSC_PE_IM_Values<MDR_UART4::IMSC, 8, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using BE_IM = MDR_UART4_IMSC_BE_IM_Values<MDR_UART4::IMSC, 9, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using OE_IM = MDR_UART4_IMSC_OE_IM_Values<MDR_UART4::IMSC, 10, 1, ReadWriteMode, MDR_UART4IMSCBase> ;
    using FieldValues = MDR_UART4_IMSC_OE_IM_Values<MDR_UART4::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40128038, 32, ReadWriteMode, MDR_UART4IMSCBase, T...> ;

  struct MDR_UART4RISBase {} ;

  struct RIS : public RegisterBase<0x4012803C, 32, ReadMode>
  {
    using RIM_RIS = MDR_UART4_RIS_RIM_RIS_Values<MDR_UART4::RIS, 0, 1, ReadMode, MDR_UART4RISBase> ;
    using STCM_RIS = MDR_UART4_RIS_STCM_RIS_Values<MDR_UART4::RIS, 1, 1, ReadMode, MDR_UART4RISBase> ;
    using DCDM_RIS = MDR_UART4_RIS_DCDM_RIS_Values<MDR_UART4::RIS, 2, 1, ReadMode, MDR_UART4RISBase> ;
    using DSRM_RIS = MDR_UART4_RIS_DSRM_RIS_Values<MDR_UART4::RIS, 3, 1, ReadMode, MDR_UART4RISBase> ;
    using RX_RIS = MDR_UART4_RIS_RX_RIS_Values<MDR_UART4::RIS, 4, 1, ReadMode, MDR_UART4RISBase> ;
    using TX_RIS = MDR_UART4_RIS_TX_RIS_Values<MDR_UART4::RIS, 5, 1, ReadMode, MDR_UART4RISBase> ;
    using RT_RIS = MDR_UART4_RIS_RT_RIS_Values<MDR_UART4::RIS, 6, 1, ReadMode, MDR_UART4RISBase> ;
    using FE_RIS = MDR_UART4_RIS_FE_RIS_Values<MDR_UART4::RIS, 7, 1, ReadMode, MDR_UART4RISBase> ;
    using PE_RIS = MDR_UART4_RIS_PE_RIS_Values<MDR_UART4::RIS, 8, 1, ReadMode, MDR_UART4RISBase> ;
    using BE_RIS = MDR_UART4_RIS_BE_RIS_Values<MDR_UART4::RIS, 9, 1, ReadMode, MDR_UART4RISBase> ;
    using OE_RIS = MDR_UART4_RIS_OE_RIS_Values<MDR_UART4::RIS, 10, 1, ReadMode, MDR_UART4RISBase> ;
    using FieldValues = MDR_UART4_RIS_OE_RIS_Values<MDR_UART4::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x4012803C, 32, ReadMode, MDR_UART4RISBase, T...> ;

  struct MDR_UART4MISBase {} ;

  struct MIS : public RegisterBase<0x40128040, 32, ReadMode>
  {
    using RIM_MIS = MDR_UART4_MIS_RIM_MIS_Values<MDR_UART4::MIS, 0, 1, ReadMode, MDR_UART4MISBase> ;
    using STCM_MIS = MDR_UART4_MIS_STCM_MIS_Values<MDR_UART4::MIS, 1, 1, ReadMode, MDR_UART4MISBase> ;
    using DCDM_MIS = MDR_UART4_MIS_DCDM_MIS_Values<MDR_UART4::MIS, 2, 1, ReadMode, MDR_UART4MISBase> ;
    using DSRM_MIS = MDR_UART4_MIS_DSRM_MIS_Values<MDR_UART4::MIS, 3, 1, ReadMode, MDR_UART4MISBase> ;
    using RX_MIS = MDR_UART4_MIS_RX_MIS_Values<MDR_UART4::MIS, 4, 1, ReadMode, MDR_UART4MISBase> ;
    using TX_MIS = MDR_UART4_MIS_TX_MIS_Values<MDR_UART4::MIS, 5, 1, ReadMode, MDR_UART4MISBase> ;
    using RT_MIS = MDR_UART4_MIS_RT_MIS_Values<MDR_UART4::MIS, 6, 1, ReadMode, MDR_UART4MISBase> ;
    using FE_MIS = MDR_UART4_MIS_FE_MIS_Values<MDR_UART4::MIS, 7, 1, ReadMode, MDR_UART4MISBase> ;
    using PE_MIS = MDR_UART4_MIS_PE_MIS_Values<MDR_UART4::MIS, 8, 1, ReadMode, MDR_UART4MISBase> ;
    using BE_MIS = MDR_UART4_MIS_BE_MIS_Values<MDR_UART4::MIS, 9, 1, ReadMode, MDR_UART4MISBase> ;
    using OE_MIS = MDR_UART4_MIS_OE_MIS_Values<MDR_UART4::MIS, 10, 1, ReadMode, MDR_UART4MISBase> ;
    using FieldValues = MDR_UART4_MIS_OE_MIS_Values<MDR_UART4::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x40128040, 32, ReadMode, MDR_UART4MISBase, T...> ;

  struct MDR_UART4ICRBase {} ;

  struct ICR : public RegisterBase<0x40128044, 32, WriteMode>
  {
    using RIM_IC = MDR_UART4_ICR_RIM_IC_Values<MDR_UART4::ICR, 0, 1, WriteMode, MDR_UART4ICRBase> ;
    using STCM_IC = MDR_UART4_ICR_STCM_IC_Values<MDR_UART4::ICR, 1, 1, WriteMode, MDR_UART4ICRBase> ;
    using DCDM_IC = MDR_UART4_ICR_DCDM_IC_Values<MDR_UART4::ICR, 2, 1, WriteMode, MDR_UART4ICRBase> ;
    using DSRM_IC = MDR_UART4_ICR_DSRM_IC_Values<MDR_UART4::ICR, 3, 1, WriteMode, MDR_UART4ICRBase> ;
    using RX_IC = MDR_UART4_ICR_RX_IC_Values<MDR_UART4::ICR, 4, 1, WriteMode, MDR_UART4ICRBase> ;
    using TX_IC = MDR_UART4_ICR_TX_IC_Values<MDR_UART4::ICR, 5, 1, WriteMode, MDR_UART4ICRBase> ;
    using RT_IC = MDR_UART4_ICR_RT_IC_Values<MDR_UART4::ICR, 6, 1, WriteMode, MDR_UART4ICRBase> ;
    using FE_IC = MDR_UART4_ICR_FE_IC_Values<MDR_UART4::ICR, 7, 1, WriteMode, MDR_UART4ICRBase> ;
    using PE_IC = MDR_UART4_ICR_PE_IC_Values<MDR_UART4::ICR, 8, 1, WriteMode, MDR_UART4ICRBase> ;
    using BE_IC = MDR_UART4_ICR_BE_IC_Values<MDR_UART4::ICR, 9, 1, WriteMode, MDR_UART4ICRBase> ;
    using OE_IC = MDR_UART4_ICR_OE_IC_Values<MDR_UART4::ICR, 10, 1, WriteMode, MDR_UART4ICRBase> ;
    using FieldValues = MDR_UART4_ICR_OE_IC_Values<MDR_UART4::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40128044, 32, WriteMode, MDR_UART4ICRBase, T...> ;

  struct MDR_UART4DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40128048, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_UART4_DMACR_RXDMAE_Values<MDR_UART4::DMACR, 0, 1, ReadWriteMode, MDR_UART4DMACRBase> ;
    using TXDMAE = MDR_UART4_DMACR_TXDMAE_Values<MDR_UART4::DMACR, 1, 1, ReadWriteMode, MDR_UART4DMACRBase> ;
    using DMAonErr = MDR_UART4_DMACR_DMAonErr_Values<MDR_UART4::DMACR, 2, 1, ReadWriteMode, MDR_UART4DMACRBase> ;
    using FieldValues = MDR_UART4_DMACR_DMAonErr_Values<MDR_UART4::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40128048, 32, ReadWriteMode, MDR_UART4DMACRBase, T...> ;

  struct MDR_UART4TCRBase {} ;

  struct TCR : public RegisterBase<0x40128080, 32, ReadWriteMode>
  {
    using ITEN = MDR_UART4_TCR_ITEN_Values<MDR_UART4::TCR, 0, 1, ReadWriteMode, MDR_UART4TCRBase> ;
    using TestFIFO = MDR_UART4_TCR_TestFIFO_Values<MDR_UART4::TCR, 1, 1, ReadWriteMode, MDR_UART4TCRBase> ;
    using SIRTest = MDR_UART4_TCR_SIRTest_Values<MDR_UART4::TCR, 2, 1, ReadWriteMode, MDR_UART4TCRBase> ;
    using FieldValues = MDR_UART4_TCR_SIRTest_Values<MDR_UART4::TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TCRPack  = Register<0x40128080, 32, ReadWriteMode, MDR_UART4TCRBase, T...> ;

} ;

#endif //#if !defined(MDRUART4REGISTERS_HPP)
