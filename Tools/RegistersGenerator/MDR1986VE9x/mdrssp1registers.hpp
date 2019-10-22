/*******************************************************************************
* Filename      : mdrssp1registers.hpp
*
* Details       : Synchronous Serial Port. This header file is auto-generated
*                 for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRSSP1REGISTERS_HPP)
#define MDRSSP1REGISTERS_HPP

#include "mdrssp1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_SSP1
{
  struct MDR_SSP1CR0Base {} ;

  struct CR0 : public RegisterBase<0x40040000, 32, ReadWriteMode>
  {
    using DSS = MDR_SSP1_CR0_DSS_Values<MDR_SSP1::CR0, 0, 4, ReadWriteMode, MDR_SSP1CR0Base> ;
    using FRF = MDR_SSP1_CR0_FRF_Values<MDR_SSP1::CR0, 4, 2, ReadWriteMode, MDR_SSP1CR0Base> ;
    using SPO = MDR_SSP1_CR0_SPO_Values<MDR_SSP1::CR0, 6, 1, ReadWriteMode, MDR_SSP1CR0Base> ;
    using SPH = MDR_SSP1_CR0_SPH_Values<MDR_SSP1::CR0, 7, 1, ReadWriteMode, MDR_SSP1CR0Base> ;
    using SCR = MDR_SSP1_CR0_SCR_Values<MDR_SSP1::CR0, 8, 8, ReadWriteMode, MDR_SSP1CR0Base> ;
    using FieldValues = MDR_SSP1_CR0_SCR_Values<MDR_SSP1::CR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR0Pack  = Register<0x40040000, 32, ReadWriteMode, MDR_SSP1CR0Base, T...> ;

  struct MDR_SSP1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40040004, 32, ReadWriteMode>
  {
    using LBM = MDR_SSP1_CR1_LBM_Values<MDR_SSP1::CR1, 0, 1, ReadWriteMode, MDR_SSP1CR1Base> ;
    using SSE = MDR_SSP1_CR1_SSE_Values<MDR_SSP1::CR1, 1, 1, ReadWriteMode, MDR_SSP1CR1Base> ;
    using MS = MDR_SSP1_CR1_MS_Values<MDR_SSP1::CR1, 2, 1, ReadWriteMode, MDR_SSP1CR1Base> ;
    using SOD = MDR_SSP1_CR1_SOD_Values<MDR_SSP1::CR1, 3, 1, ReadWriteMode, MDR_SSP1CR1Base> ;
    using FieldValues = MDR_SSP1_CR1_SOD_Values<MDR_SSP1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40040004, 32, ReadWriteMode, MDR_SSP1CR1Base, T...> ;

  struct MDR_SSP1DRBase {} ;

  struct DR : public RegisterBase<0x40040008, 32, ReadWriteMode>
  {
    using Data = MDR_SSP1_DR_Data_Values<MDR_SSP1::DR, 0, 16, ReadWriteMode, MDR_SSP1DRBase> ;
    using FieldValues = MDR_SSP1_DR_Data_Values<MDR_SSP1::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40040008, 32, ReadWriteMode, MDR_SSP1DRBase, T...> ;

  struct MDR_SSP1SRBase {} ;

  struct SR : public RegisterBase<0x4004000C, 32, ReadMode>
  {
    using TFE = MDR_SSP1_SR_TFE_Values<MDR_SSP1::SR, 0, 1, ReadMode, MDR_SSP1SRBase> ;
    using TNF = MDR_SSP1_SR_TNF_Values<MDR_SSP1::SR, 1, 1, ReadMode, MDR_SSP1SRBase> ;
    using RNE = MDR_SSP1_SR_RNE_Values<MDR_SSP1::SR, 2, 1, ReadMode, MDR_SSP1SRBase> ;
    using RFF = MDR_SSP1_SR_RFF_Values<MDR_SSP1::SR, 3, 1, ReadMode, MDR_SSP1SRBase> ;
    using BSY = MDR_SSP1_SR_BSY_Values<MDR_SSP1::SR, 4, 1, ReadMode, MDR_SSP1SRBase> ;
    using FieldValues = MDR_SSP1_SR_BSY_Values<MDR_SSP1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4004000C, 32, ReadMode, MDR_SSP1SRBase, T...> ;

  struct MDR_SSP1CPSRBase {} ;

  struct CPSR : public RegisterBase<0x40040010, 32, ReadWriteMode>
  {
    using CPSDVSR = MDR_SSP1_CPSR_CPSDVSR_Values<MDR_SSP1::CPSR, 0, 8, ReadWriteMode, MDR_SSP1CPSRBase> ;
    using FieldValues = MDR_SSP1_CPSR_CPSDVSR_Values<MDR_SSP1::CPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPSRPack  = Register<0x40040010, 32, ReadWriteMode, MDR_SSP1CPSRBase, T...> ;

  struct MDR_SSP1IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40040014, 32, ReadWriteMode>
  {
    using RORIM = MDR_SSP1_IMSC_RORIM_Values<MDR_SSP1::IMSC, 0, 1, ReadWriteMode, MDR_SSP1IMSCBase> ;
    using RTIM = MDR_SSP1_IMSC_RTIM_Values<MDR_SSP1::IMSC, 1, 1, ReadWriteMode, MDR_SSP1IMSCBase> ;
    using RXIM = MDR_SSP1_IMSC_RXIM_Values<MDR_SSP1::IMSC, 2, 1, ReadWriteMode, MDR_SSP1IMSCBase> ;
    using TXIM = MDR_SSP1_IMSC_TXIM_Values<MDR_SSP1::IMSC, 3, 1, ReadWriteMode, MDR_SSP1IMSCBase> ;
    using FieldValues = MDR_SSP1_IMSC_TXIM_Values<MDR_SSP1::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40040014, 32, ReadWriteMode, MDR_SSP1IMSCBase, T...> ;

  struct MDR_SSP1RISBase {} ;

  struct RIS : public RegisterBase<0x40040018, 32, ReadMode>
  {
    using RORRIS = MDR_SSP1_RIS_RORRIS_Values<MDR_SSP1::RIS, 0, 1, ReadMode, MDR_SSP1RISBase> ;
    using RTRIS = MDR_SSP1_RIS_RTRIS_Values<MDR_SSP1::RIS, 1, 1, ReadMode, MDR_SSP1RISBase> ;
    using RXRIS = MDR_SSP1_RIS_RXRIS_Values<MDR_SSP1::RIS, 2, 1, ReadMode, MDR_SSP1RISBase> ;
    using TXRIS = MDR_SSP1_RIS_TXRIS_Values<MDR_SSP1::RIS, 3, 1, ReadMode, MDR_SSP1RISBase> ;
    using FieldValues = MDR_SSP1_RIS_TXRIS_Values<MDR_SSP1::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x40040018, 32, ReadMode, MDR_SSP1RISBase, T...> ;

  struct MDR_SSP1MISBase {} ;

  struct MIS : public RegisterBase<0x4004001C, 32, ReadMode>
  {
    using RORMIS = MDR_SSP1_MIS_RORMIS_Values<MDR_SSP1::MIS, 0, 1, ReadMode, MDR_SSP1MISBase> ;
    using RTMIS = MDR_SSP1_MIS_RTMIS_Values<MDR_SSP1::MIS, 1, 1, ReadMode, MDR_SSP1MISBase> ;
    using RXMIS = MDR_SSP1_MIS_RXMIS_Values<MDR_SSP1::MIS, 2, 1, ReadMode, MDR_SSP1MISBase> ;
    using TXMIS = MDR_SSP1_MIS_TXMIS_Values<MDR_SSP1::MIS, 3, 1, ReadMode, MDR_SSP1MISBase> ;
    using FieldValues = MDR_SSP1_MIS_TXMIS_Values<MDR_SSP1::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x4004001C, 32, ReadMode, MDR_SSP1MISBase, T...> ;

  struct MDR_SSP1ICRBase {} ;

  struct ICR : public RegisterBase<0x40040020, 32, WriteMode>
  {
    using RORIC = MDR_SSP1_ICR_RORIC_Values<MDR_SSP1::ICR, 0, 1, WriteMode, MDR_SSP1ICRBase> ;
    using RTIC = MDR_SSP1_ICR_RTIC_Values<MDR_SSP1::ICR, 1, 1, WriteMode, MDR_SSP1ICRBase> ;
    using FieldValues = MDR_SSP1_ICR_RTIC_Values<MDR_SSP1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40040020, 32, WriteMode, MDR_SSP1ICRBase, T...> ;

  struct MDR_SSP1DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40040024, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_SSP1_DMACR_RXDMAE_Values<MDR_SSP1::DMACR, 0, 1, ReadWriteMode, MDR_SSP1DMACRBase> ;
    using TXDMAE = MDR_SSP1_DMACR_TXDMAE_Values<MDR_SSP1::DMACR, 1, 1, ReadWriteMode, MDR_SSP1DMACRBase> ;
    using FieldValues = MDR_SSP1_DMACR_TXDMAE_Values<MDR_SSP1::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40040024, 32, ReadWriteMode, MDR_SSP1DMACRBase, T...> ;

} ;

#endif //#if !defined(MDRSSP1REGISTERS_HPP)
