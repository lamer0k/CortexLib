/*******************************************************************************
* Filename      : mdrssp4registers.hpp
*
* Details       : Synchronous Serial Port. This header file is auto-generated
*                 for MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRSSP4REGISTERS_HPP)
#define MDRSSP4REGISTERS_HPP

#include "mdrssp4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_SSP4
{
  struct MDR_SSP4CR0Base {} ;

  struct CR0 : public RegisterBase<0x40130000, 32, ReadWriteMode>
  {
    using DSS = MDR_SSP4_CR0_DSS_Values<MDR_SSP4::CR0, 0, 4, ReadWriteMode, MDR_SSP4CR0Base> ;
    using FRF = MDR_SSP4_CR0_FRF_Values<MDR_SSP4::CR0, 4, 2, ReadWriteMode, MDR_SSP4CR0Base> ;
    using SPO = MDR_SSP4_CR0_SPO_Values<MDR_SSP4::CR0, 6, 1, ReadWriteMode, MDR_SSP4CR0Base> ;
    using SPH = MDR_SSP4_CR0_SPH_Values<MDR_SSP4::CR0, 7, 1, ReadWriteMode, MDR_SSP4CR0Base> ;
    using SCR = MDR_SSP4_CR0_SCR_Values<MDR_SSP4::CR0, 8, 8, ReadWriteMode, MDR_SSP4CR0Base> ;
    using FieldValues = MDR_SSP4_CR0_SCR_Values<MDR_SSP4::CR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR0Pack  = Register<0x40130000, 32, ReadWriteMode, MDR_SSP4CR0Base, T...> ;

  struct MDR_SSP4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40130004, 32, ReadWriteMode>
  {
    using LBM = MDR_SSP4_CR1_LBM_Values<MDR_SSP4::CR1, 0, 1, ReadWriteMode, MDR_SSP4CR1Base> ;
    using SSE = MDR_SSP4_CR1_SSE_Values<MDR_SSP4::CR1, 1, 1, ReadWriteMode, MDR_SSP4CR1Base> ;
    using MS = MDR_SSP4_CR1_MS_Values<MDR_SSP4::CR1, 2, 1, ReadWriteMode, MDR_SSP4CR1Base> ;
    using SOD = MDR_SSP4_CR1_SOD_Values<MDR_SSP4::CR1, 3, 1, ReadWriteMode, MDR_SSP4CR1Base> ;
    using FieldValues = MDR_SSP4_CR1_SOD_Values<MDR_SSP4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40130004, 32, ReadWriteMode, MDR_SSP4CR1Base, T...> ;

  struct MDR_SSP4DRBase {} ;

  struct DR : public RegisterBase<0x40130008, 32, ReadWriteMode>
  {
    using Data = MDR_SSP4_DR_Data_Values<MDR_SSP4::DR, 0, 16, ReadWriteMode, MDR_SSP4DRBase> ;
    using FieldValues = MDR_SSP4_DR_Data_Values<MDR_SSP4::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40130008, 32, ReadWriteMode, MDR_SSP4DRBase, T...> ;

  struct MDR_SSP4SRBase {} ;

  struct SR : public RegisterBase<0x4013000C, 32, ReadMode>
  {
    using TFE = MDR_SSP4_SR_TFE_Values<MDR_SSP4::SR, 0, 1, ReadMode, MDR_SSP4SRBase> ;
    using TNF = MDR_SSP4_SR_TNF_Values<MDR_SSP4::SR, 1, 1, ReadMode, MDR_SSP4SRBase> ;
    using RNE = MDR_SSP4_SR_RNE_Values<MDR_SSP4::SR, 2, 1, ReadMode, MDR_SSP4SRBase> ;
    using RFF = MDR_SSP4_SR_RFF_Values<MDR_SSP4::SR, 3, 1, ReadMode, MDR_SSP4SRBase> ;
    using BSY = MDR_SSP4_SR_BSY_Values<MDR_SSP4::SR, 4, 1, ReadMode, MDR_SSP4SRBase> ;
    using FieldValues = MDR_SSP4_SR_BSY_Values<MDR_SSP4::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4013000C, 32, ReadMode, MDR_SSP4SRBase, T...> ;

  struct MDR_SSP4CPSRBase {} ;

  struct CPSR : public RegisterBase<0x40130010, 32, ReadWriteMode>
  {
    using CPSDVSR = MDR_SSP4_CPSR_CPSDVSR_Values<MDR_SSP4::CPSR, 0, 8, ReadWriteMode, MDR_SSP4CPSRBase> ;
    using FieldValues = MDR_SSP4_CPSR_CPSDVSR_Values<MDR_SSP4::CPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPSRPack  = Register<0x40130010, 32, ReadWriteMode, MDR_SSP4CPSRBase, T...> ;

  struct MDR_SSP4IMSCBase {} ;

  struct IMSC : public RegisterBase<0x40130014, 32, ReadWriteMode>
  {
    using RORIM = MDR_SSP4_IMSC_RORIM_Values<MDR_SSP4::IMSC, 0, 1, ReadWriteMode, MDR_SSP4IMSCBase> ;
    using RTIM = MDR_SSP4_IMSC_RTIM_Values<MDR_SSP4::IMSC, 1, 1, ReadWriteMode, MDR_SSP4IMSCBase> ;
    using RXIM = MDR_SSP4_IMSC_RXIM_Values<MDR_SSP4::IMSC, 2, 1, ReadWriteMode, MDR_SSP4IMSCBase> ;
    using TXIM = MDR_SSP4_IMSC_TXIM_Values<MDR_SSP4::IMSC, 3, 1, ReadWriteMode, MDR_SSP4IMSCBase> ;
    using FieldValues = MDR_SSP4_IMSC_TXIM_Values<MDR_SSP4::IMSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCPack  = Register<0x40130014, 32, ReadWriteMode, MDR_SSP4IMSCBase, T...> ;

  struct MDR_SSP4RISBase {} ;

  struct RIS : public RegisterBase<0x40130018, 32, ReadMode>
  {
    using RORRIS = MDR_SSP4_RIS_RORRIS_Values<MDR_SSP4::RIS, 0, 1, ReadMode, MDR_SSP4RISBase> ;
    using RTRIS = MDR_SSP4_RIS_RTRIS_Values<MDR_SSP4::RIS, 1, 1, ReadMode, MDR_SSP4RISBase> ;
    using RXRIS = MDR_SSP4_RIS_RXRIS_Values<MDR_SSP4::RIS, 2, 1, ReadMode, MDR_SSP4RISBase> ;
    using TXRIS = MDR_SSP4_RIS_TXRIS_Values<MDR_SSP4::RIS, 3, 1, ReadMode, MDR_SSP4RISBase> ;
    using FieldValues = MDR_SSP4_RIS_TXRIS_Values<MDR_SSP4::RIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISPack  = Register<0x40130018, 32, ReadMode, MDR_SSP4RISBase, T...> ;

  struct MDR_SSP4MISBase {} ;

  struct MIS : public RegisterBase<0x4013001C, 32, ReadMode>
  {
    using RORMIS = MDR_SSP4_MIS_RORMIS_Values<MDR_SSP4::MIS, 0, 1, ReadMode, MDR_SSP4MISBase> ;
    using RTMIS = MDR_SSP4_MIS_RTMIS_Values<MDR_SSP4::MIS, 1, 1, ReadMode, MDR_SSP4MISBase> ;
    using RXMIS = MDR_SSP4_MIS_RXMIS_Values<MDR_SSP4::MIS, 2, 1, ReadMode, MDR_SSP4MISBase> ;
    using TXMIS = MDR_SSP4_MIS_TXMIS_Values<MDR_SSP4::MIS, 3, 1, ReadMode, MDR_SSP4MISBase> ;
    using FieldValues = MDR_SSP4_MIS_TXMIS_Values<MDR_SSP4::MIS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISPack  = Register<0x4013001C, 32, ReadMode, MDR_SSP4MISBase, T...> ;

  struct MDR_SSP4ICRBase {} ;

  struct ICR : public RegisterBase<0x40130020, 32, WriteMode>
  {
    using RORIC = MDR_SSP4_ICR_RORIC_Values<MDR_SSP4::ICR, 0, 1, WriteMode, MDR_SSP4ICRBase> ;
    using RTIC = MDR_SSP4_ICR_RTIC_Values<MDR_SSP4::ICR, 1, 1, WriteMode, MDR_SSP4ICRBase> ;
    using FieldValues = MDR_SSP4_ICR_RTIC_Values<MDR_SSP4::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40130020, 32, WriteMode, MDR_SSP4ICRBase, T...> ;

  struct MDR_SSP4DMACRBase {} ;

  struct DMACR : public RegisterBase<0x40130024, 32, ReadWriteMode>
  {
    using RXDMAE = MDR_SSP4_DMACR_RXDMAE_Values<MDR_SSP4::DMACR, 0, 1, ReadWriteMode, MDR_SSP4DMACRBase> ;
    using TXDMAE = MDR_SSP4_DMACR_TXDMAE_Values<MDR_SSP4::DMACR, 1, 1, ReadWriteMode, MDR_SSP4DMACRBase> ;
    using FieldValues = MDR_SSP4_DMACR_TXDMAE_Values<MDR_SSP4::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x40130024, 32, ReadWriteMode, MDR_SSP4DMACRBase, T...> ;

} ;

#endif //#if !defined(MDRSSP4REGISTERS_HPP)
