/*******************************************************************************
* Filename      : quadspiregisters.hpp
*
* Details       : QuadSPI interface. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(QUADSPIREGISTERS_HPP)
#define QUADSPIREGISTERS_HPP

#include "quadspifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct QUADSPI
{
  struct QUADSPICRBase {} ;

  struct CR : public RegisterBase<0xA0001000, 32, ReadWriteMode>
  {
    using PRESCALER = QUADSPI_CR_PRESCALER_Values<QUADSPI::CR, 24, 8, ReadWriteMode, QUADSPICRBase> ;
    using PMM = QUADSPI_CR_PMM_Values<QUADSPI::CR, 23, 1, ReadWriteMode, QUADSPICRBase> ;
    using APMS = QUADSPI_CR_APMS_Values<QUADSPI::CR, 22, 1, ReadWriteMode, QUADSPICRBase> ;
    using TOIE = QUADSPI_CR_TOIE_Values<QUADSPI::CR, 20, 1, ReadWriteMode, QUADSPICRBase> ;
    using SMIE = QUADSPI_CR_SMIE_Values<QUADSPI::CR, 19, 1, ReadWriteMode, QUADSPICRBase> ;
    using FTIE = QUADSPI_CR_FTIE_Values<QUADSPI::CR, 18, 1, ReadWriteMode, QUADSPICRBase> ;
    using TCIE = QUADSPI_CR_TCIE_Values<QUADSPI::CR, 17, 1, ReadWriteMode, QUADSPICRBase> ;
    using TEIE = QUADSPI_CR_TEIE_Values<QUADSPI::CR, 16, 1, ReadWriteMode, QUADSPICRBase> ;
    using FTHRES = QUADSPI_CR_FTHRES_Values<QUADSPI::CR, 8, 5, ReadWriteMode, QUADSPICRBase> ;
    using FSEL = QUADSPI_CR_FSEL_Values<QUADSPI::CR, 7, 1, ReadWriteMode, QUADSPICRBase> ;
    using DFM = QUADSPI_CR_DFM_Values<QUADSPI::CR, 6, 1, ReadWriteMode, QUADSPICRBase> ;
    using SSHIFT = QUADSPI_CR_SSHIFT_Values<QUADSPI::CR, 4, 1, ReadWriteMode, QUADSPICRBase> ;
    using TCEN = QUADSPI_CR_TCEN_Values<QUADSPI::CR, 3, 1, ReadWriteMode, QUADSPICRBase> ;
    using DMAEN = QUADSPI_CR_DMAEN_Values<QUADSPI::CR, 2, 1, ReadWriteMode, QUADSPICRBase> ;
    using ABORT = QUADSPI_CR_ABORT_Values<QUADSPI::CR, 1, 1, ReadWriteMode, QUADSPICRBase> ;
    using EN = QUADSPI_CR_EN_Values<QUADSPI::CR, 0, 1, ReadWriteMode, QUADSPICRBase> ;
    using FieldValues = QUADSPI_CR_EN_Values<QUADSPI::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0xA0001000, 32, ReadWriteMode, QUADSPICRBase, T...> ;

  struct QUADSPIDCRBase {} ;

  struct DCR : public RegisterBase<0xA0001004, 32, ReadWriteMode>
  {
    using FSIZE = QUADSPI_DCR_FSIZE_Values<QUADSPI::DCR, 16, 5, ReadWriteMode, QUADSPIDCRBase> ;
    using CSHT = QUADSPI_DCR_CSHT_Values<QUADSPI::DCR, 8, 3, ReadWriteMode, QUADSPIDCRBase> ;
    using CKMODE = QUADSPI_DCR_CKMODE_Values<QUADSPI::DCR, 0, 1, ReadWriteMode, QUADSPIDCRBase> ;
    using FieldValues = QUADSPI_DCR_CKMODE_Values<QUADSPI::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0xA0001004, 32, ReadWriteMode, QUADSPIDCRBase, T...> ;

  struct QUADSPISRBase {} ;

  struct SR : public RegisterBase<0xA0001008, 32, ReadMode>
  {
    using FLEVEL = QUADSPI_SR_FLEVEL_Values<QUADSPI::SR, 8, 7, ReadMode, QUADSPISRBase> ;
    using BUSY = QUADSPI_SR_BUSY_Values<QUADSPI::SR, 5, 1, ReadMode, QUADSPISRBase> ;
    using TOF = QUADSPI_SR_TOF_Values<QUADSPI::SR, 4, 1, ReadMode, QUADSPISRBase> ;
    using SMF = QUADSPI_SR_SMF_Values<QUADSPI::SR, 3, 1, ReadMode, QUADSPISRBase> ;
    using FTF = QUADSPI_SR_FTF_Values<QUADSPI::SR, 2, 1, ReadMode, QUADSPISRBase> ;
    using TCF = QUADSPI_SR_TCF_Values<QUADSPI::SR, 1, 1, ReadMode, QUADSPISRBase> ;
    using TEF = QUADSPI_SR_TEF_Values<QUADSPI::SR, 0, 1, ReadMode, QUADSPISRBase> ;
    using FieldValues = QUADSPI_SR_TEF_Values<QUADSPI::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0xA0001008, 32, ReadMode, QUADSPISRBase, T...> ;

  struct QUADSPIFCRBase {} ;

  struct FCR : public RegisterBase<0xA000100C, 32, ReadWriteMode>
  {
    using CTOF = QUADSPI_FCR_CTOF_Values<QUADSPI::FCR, 4, 1, ReadWriteMode, QUADSPIFCRBase> ;
    using CSMF = QUADSPI_FCR_CSMF_Values<QUADSPI::FCR, 3, 1, ReadWriteMode, QUADSPIFCRBase> ;
    using CTCF = QUADSPI_FCR_CTCF_Values<QUADSPI::FCR, 1, 1, ReadWriteMode, QUADSPIFCRBase> ;
    using CTEF = QUADSPI_FCR_CTEF_Values<QUADSPI::FCR, 0, 1, ReadWriteMode, QUADSPIFCRBase> ;
    using FieldValues = QUADSPI_FCR_CTEF_Values<QUADSPI::FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FCRPack  = Register<0xA000100C, 32, ReadWriteMode, QUADSPIFCRBase, T...> ;

  struct QUADSPIDLRBase {} ;

  struct DLR : public RegisterBase<0xA0001010, 32, ReadWriteMode>
  {
    using DL = QUADSPI_DLR_DL_Values<QUADSPI::DLR, 0, 32, ReadWriteMode, QUADSPIDLRBase> ;
    using FieldValues = QUADSPI_DLR_DL_Values<QUADSPI::DLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLRPack  = Register<0xA0001010, 32, ReadWriteMode, QUADSPIDLRBase, T...> ;

  struct QUADSPICCRBase {} ;

  struct CCR : public RegisterBase<0xA0001014, 32, ReadWriteMode>
  {
    using DDRM = QUADSPI_CCR_DDRM_Values<QUADSPI::CCR, 31, 1, ReadWriteMode, QUADSPICCRBase> ;
    using DHHC = QUADSPI_CCR_DHHC_Values<QUADSPI::CCR, 30, 1, ReadWriteMode, QUADSPICCRBase> ;
    using SIOO = QUADSPI_CCR_SIOO_Values<QUADSPI::CCR, 28, 1, ReadWriteMode, QUADSPICCRBase> ;
    using FMODE = QUADSPI_CCR_FMODE_Values<QUADSPI::CCR, 26, 2, ReadWriteMode, QUADSPICCRBase> ;
    using DMODE = QUADSPI_CCR_DMODE_Values<QUADSPI::CCR, 24, 2, ReadWriteMode, QUADSPICCRBase> ;
    using DCYC = QUADSPI_CCR_DCYC_Values<QUADSPI::CCR, 18, 5, ReadWriteMode, QUADSPICCRBase> ;
    using ABSIZE = QUADSPI_CCR_ABSIZE_Values<QUADSPI::CCR, 16, 2, ReadWriteMode, QUADSPICCRBase> ;
    using ABMODE = QUADSPI_CCR_ABMODE_Values<QUADSPI::CCR, 14, 2, ReadWriteMode, QUADSPICCRBase> ;
    using ADSIZE = QUADSPI_CCR_ADSIZE_Values<QUADSPI::CCR, 12, 2, ReadWriteMode, QUADSPICCRBase> ;
    using ADMODE = QUADSPI_CCR_ADMODE_Values<QUADSPI::CCR, 10, 2, ReadWriteMode, QUADSPICCRBase> ;
    using IMODE = QUADSPI_CCR_IMODE_Values<QUADSPI::CCR, 8, 2, ReadWriteMode, QUADSPICCRBase> ;
    using INSTRUCTION = QUADSPI_CCR_INSTRUCTION_Values<QUADSPI::CCR, 0, 8, ReadWriteMode, QUADSPICCRBase> ;
    using FieldValues = QUADSPI_CCR_INSTRUCTION_Values<QUADSPI::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0xA0001014, 32, ReadWriteMode, QUADSPICCRBase, T...> ;

  struct QUADSPIARBase {} ;

  struct AR : public RegisterBase<0xA0001018, 32, ReadWriteMode>
  {
    using ADDRESS = QUADSPI_AR_ADDRESS_Values<QUADSPI::AR, 0, 32, ReadWriteMode, QUADSPIARBase> ;
    using FieldValues = QUADSPI_AR_ADDRESS_Values<QUADSPI::AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARPack  = Register<0xA0001018, 32, ReadWriteMode, QUADSPIARBase, T...> ;

  struct QUADSPIABRBase {} ;

  struct ABR : public RegisterBase<0xA000101C, 32, ReadWriteMode>
  {
    using ALTERNATE = QUADSPI_ABR_ALTERNATE_Values<QUADSPI::ABR, 0, 32, ReadWriteMode, QUADSPIABRBase> ;
    using FieldValues = QUADSPI_ABR_ALTERNATE_Values<QUADSPI::ABR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ABRPack  = Register<0xA000101C, 32, ReadWriteMode, QUADSPIABRBase, T...> ;

  struct QUADSPIDRBase {} ;

  struct DR : public RegisterBase<0xA0001020, 32, ReadWriteMode>
  {
    using DATA = QUADSPI_DR_DATA_Values<QUADSPI::DR, 0, 32, ReadWriteMode, QUADSPIDRBase> ;
    using FieldValues = QUADSPI_DR_DATA_Values<QUADSPI::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0xA0001020, 32, ReadWriteMode, QUADSPIDRBase, T...> ;

  struct QUADSPIPSMKRBase {} ;

  struct PSMKR : public RegisterBase<0xA0001024, 32, ReadWriteMode>
  {
    using MASK = QUADSPI_PSMKR_MASK_Values<QUADSPI::PSMKR, 0, 32, ReadWriteMode, QUADSPIPSMKRBase> ;
    using FieldValues = QUADSPI_PSMKR_MASK_Values<QUADSPI::PSMKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSMKRPack  = Register<0xA0001024, 32, ReadWriteMode, QUADSPIPSMKRBase, T...> ;

  struct QUADSPIPSMARBase {} ;

  struct PSMAR : public RegisterBase<0xA0001028, 32, ReadWriteMode>
  {
    using MATCH = QUADSPI_PSMAR_MATCH_Values<QUADSPI::PSMAR, 0, 32, ReadWriteMode, QUADSPIPSMARBase> ;
    using FieldValues = QUADSPI_PSMAR_MATCH_Values<QUADSPI::PSMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSMARPack  = Register<0xA0001028, 32, ReadWriteMode, QUADSPIPSMARBase, T...> ;

  struct QUADSPIPIRBase {} ;

  struct PIR : public RegisterBase<0xA000102C, 32, ReadWriteMode>
  {
    using INTERVAL = QUADSPI_PIR_INTERVAL_Values<QUADSPI::PIR, 0, 16, ReadWriteMode, QUADSPIPIRBase> ;
    using FieldValues = QUADSPI_PIR_INTERVAL_Values<QUADSPI::PIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PIRPack  = Register<0xA000102C, 32, ReadWriteMode, QUADSPIPIRBase, T...> ;

  struct QUADSPILPTRBase {} ;

  struct LPTR : public RegisterBase<0xA0001030, 32, ReadWriteMode>
  {
    using TIMEOUT = QUADSPI_LPTR_TIMEOUT_Values<QUADSPI::LPTR, 0, 16, ReadWriteMode, QUADSPILPTRBase> ;
    using FieldValues = QUADSPI_LPTR_TIMEOUT_Values<QUADSPI::LPTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPTRPack  = Register<0xA0001030, 32, ReadWriteMode, QUADSPILPTRBase, T...> ;

} ;

#endif //#if !defined(QUADSPIREGISTERS_HPP)
