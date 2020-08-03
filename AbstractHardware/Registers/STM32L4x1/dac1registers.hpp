/*******************************************************************************
* Filename      : dac1registers.hpp
*
* Details       : Digital-to-analog converter. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(DAC1REGISTERS_HPP)
#define DAC1REGISTERS_HPP

#include "dac1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DAC1
{
  struct DAC1CRBase {} ;

  struct CR : public RegisterBase<0x40007400, 32, ReadWriteMode>
  {
    using EN1 = DAC1_CR_EN1_Values<DAC1::CR, 0, 1, ReadWriteMode, DAC1CRBase> ;
    using TEN1 = DAC1_CR_TEN1_Values<DAC1::CR, 2, 1, ReadWriteMode, DAC1CRBase> ;
    using TSEL1 = DAC1_CR_TSEL1_Values<DAC1::CR, 3, 3, ReadWriteMode, DAC1CRBase> ;
    using WAVE1 = DAC1_CR_WAVE1_Values<DAC1::CR, 6, 2, ReadWriteMode, DAC1CRBase> ;
    using MAMP1 = DAC1_CR_MAMP1_Values<DAC1::CR, 8, 4, ReadWriteMode, DAC1CRBase> ;
    using DMAEN1 = DAC1_CR_DMAEN1_Values<DAC1::CR, 12, 1, ReadWriteMode, DAC1CRBase> ;
    using DMAUDRIE1 = DAC1_CR_DMAUDRIE1_Values<DAC1::CR, 13, 1, ReadWriteMode, DAC1CRBase> ;
    using CEN1 = DAC1_CR_CEN1_Values<DAC1::CR, 14, 1, ReadWriteMode, DAC1CRBase> ;
    using EN2 = DAC1_CR_EN2_Values<DAC1::CR, 16, 1, ReadWriteMode, DAC1CRBase> ;
    using TEN2 = DAC1_CR_TEN2_Values<DAC1::CR, 18, 1, ReadWriteMode, DAC1CRBase> ;
    using TSEL2 = DAC1_CR_TSEL2_Values<DAC1::CR, 19, 3, ReadWriteMode, DAC1CRBase> ;
    using WAVE2 = DAC1_CR_WAVE2_Values<DAC1::CR, 22, 2, ReadWriteMode, DAC1CRBase> ;
    using MAMP2 = DAC1_CR_MAMP2_Values<DAC1::CR, 24, 4, ReadWriteMode, DAC1CRBase> ;
    using DMAEN2 = DAC1_CR_DMAEN2_Values<DAC1::CR, 28, 1, ReadWriteMode, DAC1CRBase> ;
    using DMAUDRIE2 = DAC1_CR_DMAUDRIE2_Values<DAC1::CR, 29, 1, ReadWriteMode, DAC1CRBase> ;
    using CEN2 = DAC1_CR_CEN2_Values<DAC1::CR, 30, 1, ReadWriteMode, DAC1CRBase> ;
    using FieldValues = DAC1_CR_CEN2_Values<DAC1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007400, 32, ReadWriteMode, DAC1CRBase, T...> ;

  struct DAC1SWTRIGRBase {} ;

  struct SWTRIGR : public RegisterBase<0x40007404, 32, WriteMode>
  {
    using SWTRIG1 = DAC1_SWTRIGR_SWTRIG1_Values<DAC1::SWTRIGR, 0, 1, WriteMode, DAC1SWTRIGRBase> ;
    using SWTRIG2 = DAC1_SWTRIGR_SWTRIG2_Values<DAC1::SWTRIGR, 1, 1, WriteMode, DAC1SWTRIGRBase> ;
    using FieldValues = DAC1_SWTRIGR_SWTRIG2_Values<DAC1::SWTRIGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWTRIGRPack  = Register<0x40007404, 32, WriteMode, DAC1SWTRIGRBase, T...> ;

  struct DAC1DHR12R1Base {} ;

  struct DHR12R1 : public RegisterBase<0x40007408, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR12R1_DACC1DHR_Values<DAC1::DHR12R1, 0, 12, ReadWriteMode, DAC1DHR12R1Base> ;
    using FieldValues = DAC1_DHR12R1_DACC1DHR_Values<DAC1::DHR12R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12R1Pack  = Register<0x40007408, 32, ReadWriteMode, DAC1DHR12R1Base, T...> ;

  struct DAC1DHR12L1Base {} ;

  struct DHR12L1 : public RegisterBase<0x4000740C, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR12L1_DACC1DHR_Values<DAC1::DHR12L1, 4, 12, ReadWriteMode, DAC1DHR12L1Base> ;
    using FieldValues = DAC1_DHR12L1_DACC1DHR_Values<DAC1::DHR12L1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12L1Pack  = Register<0x4000740C, 32, ReadWriteMode, DAC1DHR12L1Base, T...> ;

  struct DAC1DHR8R1Base {} ;

  struct DHR8R1 : public RegisterBase<0x40007410, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR8R1_DACC1DHR_Values<DAC1::DHR8R1, 0, 8, ReadWriteMode, DAC1DHR8R1Base> ;
    using FieldValues = DAC1_DHR8R1_DACC1DHR_Values<DAC1::DHR8R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8R1Pack  = Register<0x40007410, 32, ReadWriteMode, DAC1DHR8R1Base, T...> ;

  struct DAC1DHR12R2Base {} ;

  struct DHR12R2 : public RegisterBase<0x40007414, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC1_DHR12R2_DACC2DHR_Values<DAC1::DHR12R2, 0, 12, ReadWriteMode, DAC1DHR12R2Base> ;
    using FieldValues = DAC1_DHR12R2_DACC2DHR_Values<DAC1::DHR12R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12R2Pack  = Register<0x40007414, 32, ReadWriteMode, DAC1DHR12R2Base, T...> ;

  struct DAC1DHR12L2Base {} ;

  struct DHR12L2 : public RegisterBase<0x40007418, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC1_DHR12L2_DACC2DHR_Values<DAC1::DHR12L2, 4, 12, ReadWriteMode, DAC1DHR12L2Base> ;
    using FieldValues = DAC1_DHR12L2_DACC2DHR_Values<DAC1::DHR12L2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12L2Pack  = Register<0x40007418, 32, ReadWriteMode, DAC1DHR12L2Base, T...> ;

  struct DAC1DHR8R2Base {} ;

  struct DHR8R2 : public RegisterBase<0x4000741C, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC1_DHR8R2_DACC2DHR_Values<DAC1::DHR8R2, 0, 8, ReadWriteMode, DAC1DHR8R2Base> ;
    using FieldValues = DAC1_DHR8R2_DACC2DHR_Values<DAC1::DHR8R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8R2Pack  = Register<0x4000741C, 32, ReadWriteMode, DAC1DHR8R2Base, T...> ;

  struct DAC1DHR12RDBase {} ;

  struct DHR12RD : public RegisterBase<0x40007420, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR12RD_DACC1DHR_Values<DAC1::DHR12RD, 0, 12, ReadWriteMode, DAC1DHR12RDBase> ;
    using DACC2DHR = DAC1_DHR12RD_DACC2DHR_Values<DAC1::DHR12RD, 16, 12, ReadWriteMode, DAC1DHR12RDBase> ;
    using FieldValues = DAC1_DHR12RD_DACC2DHR_Values<DAC1::DHR12RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12RDPack  = Register<0x40007420, 32, ReadWriteMode, DAC1DHR12RDBase, T...> ;

  struct DAC1DHR12LDBase {} ;

  struct DHR12LD : public RegisterBase<0x40007424, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR12LD_DACC1DHR_Values<DAC1::DHR12LD, 4, 12, ReadWriteMode, DAC1DHR12LDBase> ;
    using DACC2DHR = DAC1_DHR12LD_DACC2DHR_Values<DAC1::DHR12LD, 20, 12, ReadWriteMode, DAC1DHR12LDBase> ;
    using FieldValues = DAC1_DHR12LD_DACC2DHR_Values<DAC1::DHR12LD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12LDPack  = Register<0x40007424, 32, ReadWriteMode, DAC1DHR12LDBase, T...> ;

  struct DAC1DHR8RDBase {} ;

  struct DHR8RD : public RegisterBase<0x40007428, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC1_DHR8RD_DACC1DHR_Values<DAC1::DHR8RD, 0, 8, ReadWriteMode, DAC1DHR8RDBase> ;
    using DACC2DHR = DAC1_DHR8RD_DACC2DHR_Values<DAC1::DHR8RD, 8, 8, ReadWriteMode, DAC1DHR8RDBase> ;
    using FieldValues = DAC1_DHR8RD_DACC2DHR_Values<DAC1::DHR8RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8RDPack  = Register<0x40007428, 32, ReadWriteMode, DAC1DHR8RDBase, T...> ;

  struct DAC1DOR1Base {} ;

  struct DOR1 : public RegisterBase<0x4000742C, 32, ReadMode>
  {
    using DACC1DOR = DAC1_DOR1_DACC1DOR_Values<DAC1::DOR1, 0, 12, ReadMode, DAC1DOR1Base> ;
    using FieldValues = DAC1_DOR1_DACC1DOR_Values<DAC1::DOR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOR1Pack  = Register<0x4000742C, 32, ReadMode, DAC1DOR1Base, T...> ;

  struct DAC1DOR2Base {} ;

  struct DOR2 : public RegisterBase<0x40007430, 32, ReadMode>
  {
    using DACC2DOR = DAC1_DOR2_DACC2DOR_Values<DAC1::DOR2, 0, 12, ReadMode, DAC1DOR2Base> ;
    using FieldValues = DAC1_DOR2_DACC2DOR_Values<DAC1::DOR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOR2Pack  = Register<0x40007430, 32, ReadMode, DAC1DOR2Base, T...> ;

  struct DAC1SRBase {} ;

  struct SR : public RegisterBase<0x40007434, 32, ReadWriteMode>
  {
    using DMAUDR1 = DAC1_SR_DMAUDR1_Values<DAC1::SR, 13, 1, ReadWriteMode, DAC1SRBase> ;
    using CAL_FLAG1 = DAC1_SR_CAL_FLAG1_Values<DAC1::SR, 14, 1, ReadMode, DAC1SRBase> ;
    using BWST1 = DAC1_SR_BWST1_Values<DAC1::SR, 15, 1, ReadMode, DAC1SRBase> ;
    using DMAUDR2 = DAC1_SR_DMAUDR2_Values<DAC1::SR, 29, 1, ReadWriteMode, DAC1SRBase> ;
    using CAL_FLAG2 = DAC1_SR_CAL_FLAG2_Values<DAC1::SR, 30, 1, ReadMode, DAC1SRBase> ;
    using BWST2 = DAC1_SR_BWST2_Values<DAC1::SR, 31, 1, ReadMode, DAC1SRBase> ;
    using FieldValues = DAC1_SR_BWST2_Values<DAC1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40007434, 32, ReadWriteMode, DAC1SRBase, T...> ;

  struct DAC1CCRBase {} ;

  struct CCR : public RegisterBase<0x40007438, 32, ReadWriteMode>
  {
    using OTRIM1 = DAC1_CCR_OTRIM1_Values<DAC1::CCR, 0, 5, ReadWriteMode, DAC1CCRBase> ;
    using OTRIM2 = DAC1_CCR_OTRIM2_Values<DAC1::CCR, 16, 5, ReadWriteMode, DAC1CCRBase> ;
    using FieldValues = DAC1_CCR_OTRIM2_Values<DAC1::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x40007438, 32, ReadWriteMode, DAC1CCRBase, T...> ;

  struct DAC1MCRBase {} ;

  struct MCR : public RegisterBase<0x4000743C, 32, ReadWriteMode>
  {
    using MODE1 = DAC1_MCR_MODE1_Values<DAC1::MCR, 0, 3, ReadWriteMode, DAC1MCRBase> ;
    using MODE2 = DAC1_MCR_MODE2_Values<DAC1::MCR, 16, 3, ReadWriteMode, DAC1MCRBase> ;
    using FieldValues = DAC1_MCR_MODE2_Values<DAC1::MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCRPack  = Register<0x4000743C, 32, ReadWriteMode, DAC1MCRBase, T...> ;

  struct DAC1SHSR1Base {} ;

  struct SHSR1 : public RegisterBase<0x40007440, 32, ReadWriteMode>
  {
    using TSAMPLE1 = DAC1_SHSR1_TSAMPLE1_Values<DAC1::SHSR1, 0, 10, ReadWriteMode, DAC1SHSR1Base> ;
    using FieldValues = DAC1_SHSR1_TSAMPLE1_Values<DAC1::SHSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHSR1Pack  = Register<0x40007440, 32, ReadWriteMode, DAC1SHSR1Base, T...> ;

  struct DAC1SHSR2Base {} ;

  struct SHSR2 : public RegisterBase<0x40007444, 32, ReadWriteMode>
  {
    using TSAMPLE2 = DAC1_SHSR2_TSAMPLE2_Values<DAC1::SHSR2, 0, 10, ReadWriteMode, DAC1SHSR2Base> ;
    using FieldValues = DAC1_SHSR2_TSAMPLE2_Values<DAC1::SHSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHSR2Pack  = Register<0x40007444, 32, ReadWriteMode, DAC1SHSR2Base, T...> ;

  struct DAC1SHHRBase {} ;

  struct SHHR : public RegisterBase<0x40007448, 32, ReadWriteMode>
  {
    using THOLD1 = DAC1_SHHR_THOLD1_Values<DAC1::SHHR, 0, 10, ReadWriteMode, DAC1SHHRBase> ;
    using THOLD2 = DAC1_SHHR_THOLD2_Values<DAC1::SHHR, 16, 10, ReadWriteMode, DAC1SHHRBase> ;
    using FieldValues = DAC1_SHHR_THOLD2_Values<DAC1::SHHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHHRPack  = Register<0x40007448, 32, ReadWriteMode, DAC1SHHRBase, T...> ;

  struct DAC1SHRRBase {} ;

  struct SHRR : public RegisterBase<0x4000744C, 32, ReadWriteMode>
  {
    using TREFRESH1 = DAC1_SHRR_TREFRESH1_Values<DAC1::SHRR, 0, 8, ReadWriteMode, DAC1SHRRBase> ;
    using TREFRESH2 = DAC1_SHRR_TREFRESH2_Values<DAC1::SHRR, 16, 8, ReadWriteMode, DAC1SHRRBase> ;
    using FieldValues = DAC1_SHRR_TREFRESH2_Values<DAC1::SHRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHRRPack  = Register<0x4000744C, 32, ReadWriteMode, DAC1SHRRBase, T...> ;

} ;

#endif //#if !defined(DAC1REGISTERS_HPP)
