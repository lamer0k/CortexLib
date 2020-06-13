/*******************************************************************************
* Filename      : timer5registers.hpp
*
* Details       : Basic-timers. This header file is auto-generated for GD32VF103
*                 device.
*
*
*******************************************************************************/

#if !defined(TIMER5REGISTERS_HPP)
#define TIMER5REGISTERS_HPP

#include "timer5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER5
{
  struct TIMER5CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40001000, 16, ReadWriteMode>
  {
    using ARSE = TIMER5_CTL0_ARSE_Values<TIMER5::CTL0, 7, 1, ReadWriteMode, TIMER5CTL0Base> ;
    using SPM = TIMER5_CTL0_SPM_Values<TIMER5::CTL0, 3, 1, ReadWriteMode, TIMER5CTL0Base> ;
    using UPS = TIMER5_CTL0_UPS_Values<TIMER5::CTL0, 2, 1, ReadWriteMode, TIMER5CTL0Base> ;
    using UPDIS = TIMER5_CTL0_UPDIS_Values<TIMER5::CTL0, 1, 1, ReadWriteMode, TIMER5CTL0Base> ;
    using CEN = TIMER5_CTL0_CEN_Values<TIMER5::CTL0, 0, 1, ReadWriteMode, TIMER5CTL0Base> ;
    using FieldValues = TIMER5_CTL0_CEN_Values<TIMER5::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40001000, 16, ReadWriteMode, TIMER5CTL0Base, T...> ;

  struct TIMER5CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40001004, 16, ReadWriteMode>
  {
    using MMC = TIMER5_CTL1_MMC_Values<TIMER5::CTL1, 4, 3, ReadWriteMode, TIMER5CTL1Base> ;
    using FieldValues = TIMER5_CTL1_MMC_Values<TIMER5::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40001004, 16, ReadWriteMode, TIMER5CTL1Base, T...> ;

  struct TIMER5DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x4000100C, 16, ReadWriteMode>
  {
    using UPDEN = TIMER5_DMAINTEN_UPDEN_Values<TIMER5::DMAINTEN, 8, 1, ReadWriteMode, TIMER5DMAINTENBase> ;
    using UPIE = TIMER5_DMAINTEN_UPIE_Values<TIMER5::DMAINTEN, 0, 1, ReadWriteMode, TIMER5DMAINTENBase> ;
    using FieldValues = TIMER5_DMAINTEN_UPIE_Values<TIMER5::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x4000100C, 16, ReadWriteMode, TIMER5DMAINTENBase, T...> ;

  struct TIMER5INTFBase {} ;

  struct INTF : public RegisterBase<0x40001010, 16, ReadWriteMode>
  {
    using UPIF = TIMER5_INTF_UPIF_Values<TIMER5::INTF, 0, 1, ReadWriteMode, TIMER5INTFBase> ;
    using FieldValues = TIMER5_INTF_UPIF_Values<TIMER5::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40001010, 16, ReadWriteMode, TIMER5INTFBase, T...> ;

  struct TIMER5SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40001014, 16, WriteMode>
  {
    using UPG = TIMER5_SWEVG_UPG_Values<TIMER5::SWEVG, 0, 1, WriteMode, TIMER5SWEVGBase> ;
    using FieldValues = TIMER5_SWEVG_UPG_Values<TIMER5::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40001014, 16, WriteMode, TIMER5SWEVGBase, T...> ;

  struct TIMER5CNTBase {} ;

  struct CNT : public RegisterBase<0x40001024, 16, ReadWriteMode>
  {
    using CNTField = TIMER5_CNT_CNT_Values<TIMER5::CNT, 0, 16, ReadWriteMode, TIMER5CNTBase> ;
    using FieldValues = TIMER5_CNT_CNT_Values<TIMER5::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001024, 16, ReadWriteMode, TIMER5CNTBase, T...> ;

  struct TIMER5PSCBase {} ;

  struct PSC : public RegisterBase<0x40001028, 16, ReadWriteMode>
  {
    using PSCField = TIMER5_PSC_PSC_Values<TIMER5::PSC, 0, 16, ReadWriteMode, TIMER5PSCBase> ;
    using FieldValues = TIMER5_PSC_PSC_Values<TIMER5::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001028, 16, ReadWriteMode, TIMER5PSCBase, T...> ;

  struct TIMER5CARBase {} ;

  struct CAR : public RegisterBase<0x4000102C, 16, ReadWriteMode>
  {
    using CARL = TIMER5_CAR_CARL_Values<TIMER5::CAR, 0, 16, ReadWriteMode, TIMER5CARBase> ;
    using FieldValues = TIMER5_CAR_CARL_Values<TIMER5::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x4000102C, 16, ReadWriteMode, TIMER5CARBase, T...> ;

} ;

#endif //#if !defined(TIMER5REGISTERS_HPP)
