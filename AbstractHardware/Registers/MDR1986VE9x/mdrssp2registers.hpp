/*******************************************************************************
* Filename      : mdrssp2registers.hpp
*
* Details       : Synchronous Serial Port. This header file is auto-generated
*                 for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRSSP2REGISTERS_HPP)
#define MDRSSP2REGISTERS_HPP

#include "mdrssp2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_SSP2
{
  struct MDR_SSP2CR0Base {} ;

  struct CR0 : public RegisterBase<0x400A0000, 32, ReadWriteMode>
  {
    using DSS = MDR_SSP2_CR0_DSS_Values<MDR_SSP2::CR0, 0, 4, ReadWriteMode, MDR_SSP2CR0Base> ;
    using FRF = MDR_SSP2_CR0_FRF_Values<MDR_SSP2::CR0, 4, 2, ReadWriteMode, MDR_SSP2CR0Base> ;
    using SPO = MDR_SSP2_CR0_SPO_Values<MDR_SSP2::CR0, 6, 1, ReadWriteMode, MDR_SSP2CR0Base> ;
    using SPH = MDR_SSP2_CR0_SPH_Values<MDR_SSP2::CR0, 7, 1, ReadWriteMode, MDR_SSP2CR0Base> ;
    using SCR = MDR_SSP2_CR0_SCR_Values<MDR_SSP2::CR0, 8, 8, ReadWriteMode, MDR_SSP2CR0Base> ;
    using FieldValues = MDR_SSP2_CR0_SCR_Values<MDR_SSP2::CR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR0Pack  = Register<0x400A0000, 32, ReadWriteMode, MDR_SSP2CR0Base, T...> ;

  struct MDR_SSP2CR1Base {} ;

  struct CR1 : public RegisterBase<0x400A0004, 32, ReadWriteMode>
  {
    using LBM = MDR_SSP2_CR1_LBM_Values<MDR_SSP2::CR1, 0, 1, ReadWriteMode, MDR_SSP2CR1Base> ;
    using SSE = MDR_SSP2_CR1_SSE_Values<MDR_SSP2::CR1, 1, 1, ReadWriteMode, MDR_SSP2CR1Base> ;
    using MS = MDR_SSP2_CR1_MS_Values<MDR_SSP2::CR1, 2, 1, ReadWriteMode, MDR_SSP2CR1Base> ;
    using SOD = MDR_SSP2_CR1_SOD_Values<MDR_SSP2::CR1, 3, 1, ReadWriteMode, MDR_SSP2CR1Base> ;
    using FieldValues = MDR_SSP2_CR1_SOD_Values<MDR_SSP2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x400A0004, 32, ReadWriteMode, MDR_SSP2CR1Base, T...> ;

  struct MDR_SSP2DRBase {} ;

  struct DR : public RegisterBase<0x400A0008, 32, ReadWriteMode>
  {
    using Data = MDR_SSP2_DR_Data_Values<MDR_SSP2::DR, 0, 16, ReadWriteMode, MDR_SSP2DRBase> ;
    using FieldValues = MDR_SSP2_DR_Data_Values<MDR_SSP2::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x400A0008, 32, ReadWriteMode, MDR_SSP2DRBase, T...> ;

  struct MDR_SSP2SRBase {} ;

  struct SR : public RegisterBase<0x400A000C, 32, ReadMode>
  {
    using TFE = MDR_SSP2_SR_TFE_Values<MDR_SSP2::SR, 0, 1, ReadMode, MDR_SSP2SRBase> ;
    using TNF = MDR_SSP2_SR_TNF_Values<MDR_SSP2::SR, 1, 1, ReadMode, MDR_SSP2SRBase> ;
    using RNE = MDR_SSP2_SR_RNE_Values<MDR_SSP2::SR, 2, 1, ReadMode, MDR_SSP2SRBase> ;
    using RFF = MDR_SSP2_SR_RFF_Values<MDR_SSP2::SR, 3, 1, ReadMode, MDR_SSP2SRBase> ;
    using BSY = MDR_SSP2_SR_BSY_Values<MDR_SSP2::SR, 4, 1, ReadMode, MDR_SSP2SRBase> ;
    using FieldValues = MDR_SSP2_SR_BSY_Values<MDR_SSP2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x400A000C, 32, ReadMode, MDR_SSP2SRBase, T...> ;

  struct MDR_SSP2CPSRBase {} ;

  struct CPSR : public RegisterBase<0x400A0010, 32, ReadWriteMode>
  {
    using CPSDVSR = MDR_SSP2_CPSR_CPSDVSR_Values<MDR_SSP2::CPSR, 0, 8, ReadWriteMode, MDR_SSP2CPSRBase> ;
    using FieldValues = MDR_SSP2_CPSR_CPSDVSR_Values<MDR_SSP2::CPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPSRPack  = Register<0x400A0010, 32, ReadWriteMode, MDR_SSP2CPSRBase, T...> ;

  struct MDR_SSP2IMSCBase {} ;

  struct IMSC : public RegisterBase<0x400A0014, 32, ReadWriteMode>
  {
    using RORIM = MDR_SSP2_IMSC_RORIM_Values<MDR_SSP2::IMSC, 0, 1, ReadWriteMode, MDR_SSP2IMSCBase> ;
    using RTIM = MDR_SSP2_IMSC_RTIM_Values<MDR_SSP2::IMSC, 1, 1, ReadWriteMode, MDR_SSP2IMSCBase> ;
    using RXIM = MDR_SSP2_IMSC_RXIM_Values<MDR_SSP2::IMSC, 2, 1, ReadWriteMode, MDR_SSP2IMSCBase> ;
    using TXIM = MDR_SSP2_IMSC_TXIM_Values<MDR_SSP2::IMSC, 3, 1, ReadWriteMode, MDR_SSP2IMSCBase> ;
    using FieldValues = MDR_SSP2_IMSC_TXIM_Values<MDR_SSP2::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x400A0014, 32, ReadWriteMode, MDR_SSP2IMSCBase, T...> ;

  struct MDR_SSP2RISBase {} ;

  struct RIS : public RegisterBase<0x400A0018, 32, ReadMode>
  {
    using RORRIS = MDR_SSP2_RIS_RORRIS_Values<MDR_SSP2::RIS, 0, 1, ReadMode, MDR_SSP2RISBase> ;
    using RTRIS = MDR_SSP2_RIS_RTRIS_Values<MDR_SSP2::RIS, 1, 1, ReadMode, MDR_SSP2RISBase> ;
    using RXRIS = MDR_SSP2_RIS_RXRIS_Values<MDR_SSP2::RIS, 2, 1, ReadMode, MDR_SSP2RISBase> ;
    using TXRIS = MDR_SSP2_RIS_TXRIS_Values<MDR_SSP2::RIS, 3, 1, ReadMode, MDR_SSP2RISBase> ;
    using FieldValues = MDR_SSP2_RIS_TXRIS_Values<MDR_SSP2::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x400A0018, 32, ReadMode, MDR_SSP2RISBase, T...> ;

  struct MDR_SSP2MISBase {} ;

  struct MIS : public RegisterBase<0x400A001C, 32, ReadMode>
  {
    using RORMIS = MDR_SSP2_MIS_RORMIS_Values<MDR_SSP2::MIS, 0, 1, ReadMode, MDR_SSP2MISBase> ;
    using RTMIS = MDR_SSP2_MIS_RTMIS_Values<MDR_SSP2::MIS, 1, 1, ReadMode, MDR_SSP2MISBase> ;
    using RXMIS = MDR_SSP2_MIS_RXMIS_Values<MDR_SSP2::MIS, 2, 1, ReadMode, MDR_SSP2MISBase> ;
    using TXMIS = MDR_SSP2_MIS_TXMIS_Values<MDR_SSP2::MIS, 3, 1, ReadMode, MDR_SSP2MISBase> ;
    using FieldValues = MDR_SSP2_MIS_TXMIS_Values<MDR_SSP2::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x400A001C, 32, ReadMode, MDR_SSP2MISBase, T...> ;

  struct MDR_SSP2ICRBase {} ;

  struct ICR : public RegisterBase<0x400A0020, 32, WriteMode>
  {
    using RORIC = MDR_SSP2_ICR_RORIC_Values<MDR_SSP2::ICR, 0, 1, WriteMode, MDR_SSP2ICRBase> ;
    using RTIC = MDR_SSP2_ICR_RTIC_Values<MDR_SSP2::ICR, 1, 1, WriteMode, MDR_SSP2ICRBase> ;
    using FieldValues = MDR_SSP2_ICR_RTIC_Values<MDR_SSP2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x400A0020, 32, WriteMode, MDR_SSP2ICRBase, T...> ;

  struct MDR_SSP2DMACRBase {} ;

  struct DMACR : public RegisterBase<0x400A0024, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_SSP2_DMACR_RXDMAE_Values<MDR_SSP2::DMACR, 0, 1, ReadWriteMode, MDR_SSP2DMACRBase> ;
    using TXDMAE = MDR_SSP2_DMACR_TXDMAE_Values<MDR_SSP2::DMACR, 1, 1, ReadWriteMode, MDR_SSP2DMACRBase> ;
    using FieldValues = MDR_SSP2_DMACR_TXDMAE_Values<MDR_SSP2::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x400A0024, 32, ReadWriteMode, MDR_SSP2DMACRBase, T...> ;

} ;

#endif //#if !defined(MDRSSP2REGISTERS_HPP)
