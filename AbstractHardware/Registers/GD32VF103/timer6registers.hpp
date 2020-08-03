/*******************************************************************************
* Filename      : timer6registers.hpp
*
* Details       : Basic-timers. This header file is auto-generated for GD32VF103
*                 device.
*
*
*******************************************************************************/

#if !defined(TIMER6REGISTERS_HPP)
#define TIMER6REGISTERS_HPP

#include "timer6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER6
{
  struct TIMER6CTL0Base {} ;

  struct CTL0 : public RegisterBase<0x40001400, 16, ReadWriteMode>
  {
    using ARSE = TIMER6_CTL0_ARSE_Values<TIMER6::CTL0, 7, 1, ReadWriteMode, TIMER6CTL0Base> ;
    using SPM = TIMER6_CTL0_SPM_Values<TIMER6::CTL0, 3, 1, ReadWriteMode, TIMER6CTL0Base> ;
    using UPS = TIMER6_CTL0_UPS_Values<TIMER6::CTL0, 2, 1, ReadWriteMode, TIMER6CTL0Base> ;
    using UPDIS = TIMER6_CTL0_UPDIS_Values<TIMER6::CTL0, 1, 1, ReadWriteMode, TIMER6CTL0Base> ;
    using CEN = TIMER6_CTL0_CEN_Values<TIMER6::CTL0, 0, 1, ReadWriteMode, TIMER6CTL0Base> ;
    using FieldValues = TIMER6_CTL0_CEN_Values<TIMER6::CTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL0Pack  = Register<0x40001400, 16, ReadWriteMode, TIMER6CTL0Base, T...> ;

  struct TIMER6CTL1Base {} ;

  struct CTL1 : public RegisterBase<0x40001404, 16, ReadWriteMode>
  {
    using MMC = TIMER6_CTL1_MMC_Values<TIMER6::CTL1, 4, 3, ReadWriteMode, TIMER6CTL1Base> ;
    using FieldValues = TIMER6_CTL1_MMC_Values<TIMER6::CTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTL1Pack  = Register<0x40001404, 16, ReadWriteMode, TIMER6CTL1Base, T...> ;

  struct TIMER6DMAINTENBase {} ;

  struct DMAINTEN : public RegisterBase<0x4000140C, 16, ReadWriteMode>
  {
    using UPDEN = TIMER6_DMAINTEN_UPDEN_Values<TIMER6::DMAINTEN, 8, 1, ReadWriteMode, TIMER6DMAINTENBase> ;
    using UPIE = TIMER6_DMAINTEN_UPIE_Values<TIMER6::DMAINTEN, 0, 1, ReadWriteMode, TIMER6DMAINTENBase> ;
    using FieldValues = TIMER6_DMAINTEN_UPIE_Values<TIMER6::DMAINTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAINTENPack  = Register<0x4000140C, 16, ReadWriteMode, TIMER6DMAINTENBase, T...> ;

  struct TIMER6INTFBase {} ;

  struct INTF : public RegisterBase<0x40001410, 16, ReadWriteMode>
  {
    using UPIF = TIMER6_INTF_UPIF_Values<TIMER6::INTF, 0, 1, ReadWriteMode, TIMER6INTFBase> ;
    using FieldValues = TIMER6_INTF_UPIF_Values<TIMER6::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40001410, 16, ReadWriteMode, TIMER6INTFBase, T...> ;

  struct TIMER6SWEVGBase {} ;

  struct SWEVG : public RegisterBase<0x40001414, 16, WriteMode>
  {
    using UPG = TIMER6_SWEVG_UPG_Values<TIMER6::SWEVG, 0, 1, WriteMode, TIMER6SWEVGBase> ;
    using FieldValues = TIMER6_SWEVG_UPG_Values<TIMER6::SWEVG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWEVGPack  = Register<0x40001414, 16, WriteMode, TIMER6SWEVGBase, T...> ;

  struct TIMER6CNTBase {} ;

  struct CNT : public RegisterBase<0x40001424, 16, ReadWriteMode>
  {
    using CNTField = TIMER6_CNT_CNT_Values<TIMER6::CNT, 0, 16, ReadWriteMode, TIMER6CNTBase> ;
    using FieldValues = TIMER6_CNT_CNT_Values<TIMER6::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001424, 16, ReadWriteMode, TIMER6CNTBase, T...> ;

  struct TIMER6PSCBase {} ;

  struct PSC : public RegisterBase<0x40001428, 16, ReadWriteMode>
  {
    using PSCField = TIMER6_PSC_PSC_Values<TIMER6::PSC, 0, 16, ReadWriteMode, TIMER6PSCBase> ;
    using FieldValues = TIMER6_PSC_PSC_Values<TIMER6::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001428, 16, ReadWriteMode, TIMER6PSCBase, T...> ;

  struct TIMER6CARBase {} ;

  struct CAR : public RegisterBase<0x4000142C, 16, ReadWriteMode>
  {
    using CARL = TIMER6_CAR_CARL_Values<TIMER6::CAR, 0, 16, ReadWriteMode, TIMER6CARBase> ;
    using FieldValues = TIMER6_CAR_CARL_Values<TIMER6::CAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CARPack  = Register<0x4000142C, 16, ReadWriteMode, TIMER6CARBase, T...> ;

} ;

#endif //#if !defined(TIMER6REGISTERS_HPP)
