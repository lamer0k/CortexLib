/*******************************************************************************
* Filename      : mdrssp3registers.hpp
*
* Details       : Synchronous Serial Port. This header file is auto-generated
*                 for MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRSSP3REGISTERS_HPP)
#define MDRSSP3REGISTERS_HPP

#include "mdrssp3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_SSP3
{
  struct MDR_SSP3CR0Base {} ;

  struct CR0 : public RegisterBase<0x400F8000, 32, ReadWriteMode>
  {
    using DSS = MDR_SSP3_CR0_DSS_Values<MDR_SSP3::CR0, 0, 4, ReadWriteMode, MDR_SSP3CR0Base> ;
    using FRF = MDR_SSP3_CR0_FRF_Values<MDR_SSP3::CR0, 4, 2, ReadWriteMode, MDR_SSP3CR0Base> ;
    using SPO = MDR_SSP3_CR0_SPO_Values<MDR_SSP3::CR0, 6, 1, ReadWriteMode, MDR_SSP3CR0Base> ;
    using SPH = MDR_SSP3_CR0_SPH_Values<MDR_SSP3::CR0, 7, 1, ReadWriteMode, MDR_SSP3CR0Base> ;
    using SCR = MDR_SSP3_CR0_SCR_Values<MDR_SSP3::CR0, 8, 8, ReadWriteMode, MDR_SSP3CR0Base> ;
    using FieldValues = MDR_SSP3_CR0_SCR_Values<MDR_SSP3::CR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR0Pack  = Register<0x400F8000, 32, ReadWriteMode, MDR_SSP3CR0Base, T...> ;

  struct MDR_SSP3CR1Base {} ;

  struct CR1 : public RegisterBase<0x400F8004, 32, ReadWriteMode>
  {
    using LBM = MDR_SSP3_CR1_LBM_Values<MDR_SSP3::CR1, 0, 1, ReadWriteMode, MDR_SSP3CR1Base> ;
    using SSE = MDR_SSP3_CR1_SSE_Values<MDR_SSP3::CR1, 1, 1, ReadWriteMode, MDR_SSP3CR1Base> ;
    using MS = MDR_SSP3_CR1_MS_Values<MDR_SSP3::CR1, 2, 1, ReadWriteMode, MDR_SSP3CR1Base> ;
    using SOD = MDR_SSP3_CR1_SOD_Values<MDR_SSP3::CR1, 3, 1, ReadWriteMode, MDR_SSP3CR1Base> ;
    using FieldValues = MDR_SSP3_CR1_SOD_Values<MDR_SSP3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x400F8004, 32, ReadWriteMode, MDR_SSP3CR1Base, T...> ;

  struct MDR_SSP3DRBase {} ;

  struct DR : public RegisterBase<0x400F8008, 32, ReadWriteMode>
  {
    using Data = MDR_SSP3_DR_Data_Values<MDR_SSP3::DR, 0, 16, ReadWriteMode, MDR_SSP3DRBase> ;
    using FieldValues = MDR_SSP3_DR_Data_Values<MDR_SSP3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x400F8008, 32, ReadWriteMode, MDR_SSP3DRBase, T...> ;

  struct MDR_SSP3SRBase {} ;

  struct SR : public RegisterBase<0x400F800C, 32, ReadMode>
  {
    using TFE = MDR_SSP3_SR_TFE_Values<MDR_SSP3::SR, 0, 1, ReadMode, MDR_SSP3SRBase> ;
    using TNF = MDR_SSP3_SR_TNF_Values<MDR_SSP3::SR, 1, 1, ReadMode, MDR_SSP3SRBase> ;
    using RNE = MDR_SSP3_SR_RNE_Values<MDR_SSP3::SR, 2, 1, ReadMode, MDR_SSP3SRBase> ;
    using RFF = MDR_SSP3_SR_RFF_Values<MDR_SSP3::SR, 3, 1, ReadMode, MDR_SSP3SRBase> ;
    using BSY = MDR_SSP3_SR_BSY_Values<MDR_SSP3::SR, 4, 1, ReadMode, MDR_SSP3SRBase> ;
    using FieldValues = MDR_SSP3_SR_BSY_Values<MDR_SSP3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x400F800C, 32, ReadMode, MDR_SSP3SRBase, T...> ;

  struct MDR_SSP3CPSRBase {} ;

  struct CPSR : public RegisterBase<0x400F8010, 32, ReadWriteMode>
  {
    using CPSDVSR = MDR_SSP3_CPSR_CPSDVSR_Values<MDR_SSP3::CPSR, 0, 8, ReadWriteMode, MDR_SSP3CPSRBase> ;
    using FieldValues = MDR_SSP3_CPSR_CPSDVSR_Values<MDR_SSP3::CPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPSRPack  = Register<0x400F8010, 32, ReadWriteMode, MDR_SSP3CPSRBase, T...> ;

  struct MDR_SSP3IMSCBase {} ;

  struct IMSC : public RegisterBase<0x400F8014, 32, ReadWriteMode>
  {
    using RORIM = MDR_SSP3_IMSC_RORIM_Values<MDR_SSP3::IMSC, 0, 1, ReadWriteMode, MDR_SSP3IMSCBase> ;
    using RTIM = MDR_SSP3_IMSC_RTIM_Values<MDR_SSP3::IMSC, 1, 1, ReadWriteMode, MDR_SSP3IMSCBase> ;
    using RXIM = MDR_SSP3_IMSC_RXIM_Values<MDR_SSP3::IMSC, 2, 1, ReadWriteMode, MDR_SSP3IMSCBase> ;
    using TXIM = MDR_SSP3_IMSC_TXIM_Values<MDR_SSP3::IMSC, 3, 1, ReadWriteMode, MDR_SSP3IMSCBase> ;
    using FieldValues = MDR_SSP3_IMSC_TXIM_Values<MDR_SSP3::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x400F8014, 32, ReadWriteMode, MDR_SSP3IMSCBase, T...> ;

  struct MDR_SSP3RISBase {} ;

  struct RIS : public RegisterBase<0x400F8018, 32, ReadMode>
  {
    using RORRIS = MDR_SSP3_RIS_RORRIS_Values<MDR_SSP3::RIS, 0, 1, ReadMode, MDR_SSP3RISBase> ;
    using RTRIS = MDR_SSP3_RIS_RTRIS_Values<MDR_SSP3::RIS, 1, 1, ReadMode, MDR_SSP3RISBase> ;
    using RXRIS = MDR_SSP3_RIS_RXRIS_Values<MDR_SSP3::RIS, 2, 1, ReadMode, MDR_SSP3RISBase> ;
    using TXRIS = MDR_SSP3_RIS_TXRIS_Values<MDR_SSP3::RIS, 3, 1, ReadMode, MDR_SSP3RISBase> ;
    using FieldValues = MDR_SSP3_RIS_TXRIS_Values<MDR_SSP3::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x400F8018, 32, ReadMode, MDR_SSP3RISBase, T...> ;

  struct MDR_SSP3MISBase {} ;

  struct MIS : public RegisterBase<0x400F801C, 32, ReadMode>
  {
    using RORMIS = MDR_SSP3_MIS_RORMIS_Values<MDR_SSP3::MIS, 0, 1, ReadMode, MDR_SSP3MISBase> ;
    using RTMIS = MDR_SSP3_MIS_RTMIS_Values<MDR_SSP3::MIS, 1, 1, ReadMode, MDR_SSP3MISBase> ;
    using RXMIS = MDR_SSP3_MIS_RXMIS_Values<MDR_SSP3::MIS, 2, 1, ReadMode, MDR_SSP3MISBase> ;
    using TXMIS = MDR_SSP3_MIS_TXMIS_Values<MDR_SSP3::MIS, 3, 1, ReadMode, MDR_SSP3MISBase> ;
    using FieldValues = MDR_SSP3_MIS_TXMIS_Values<MDR_SSP3::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x400F801C, 32, ReadMode, MDR_SSP3MISBase, T...> ;

  struct MDR_SSP3ICRBase {} ;

  struct ICR : public RegisterBase<0x400F8020, 32, WriteMode>
  {
    using RORIC = MDR_SSP3_ICR_RORIC_Values<MDR_SSP3::ICR, 0, 1, WriteMode, MDR_SSP3ICRBase> ;
    using RTIC = MDR_SSP3_ICR_RTIC_Values<MDR_SSP3::ICR, 1, 1, WriteMode, MDR_SSP3ICRBase> ;
    using FieldValues = MDR_SSP3_ICR_RTIC_Values<MDR_SSP3::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x400F8020, 32, WriteMode, MDR_SSP3ICRBase, T...> ;

  struct MDR_SSP3DMACRBase {} ;

  struct DMACR : public RegisterBase<0x400F8024, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_SSP3_DMACR_RXDMAE_Values<MDR_SSP3::DMACR, 0, 1, ReadWriteMode, MDR_SSP3DMACRBase> ;
    using TXDMAE = MDR_SSP3_DMACR_TXDMAE_Values<MDR_SSP3::DMACR, 1, 1, ReadWriteMode, MDR_SSP3DMACRBase> ;
    using FieldValues = MDR_SSP3_DMACR_TXDMAE_Values<MDR_SSP3::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x400F8024, 32, ReadWriteMode, MDR_SSP3DMACRBase, T...> ;

} ;

#endif //#if !defined(MDRSSP3REGISTERS_HPP)
