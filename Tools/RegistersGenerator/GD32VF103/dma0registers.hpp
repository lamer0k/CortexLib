/*******************************************************************************
* Filename      : dma0registers.hpp
*
* Details       : DMA controller. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(DMA0REGISTERS_HPP)
#define DMA0REGISTERS_HPP

#include "dma0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA0
{
  struct DMA0INTFBase {} ;

  struct INTF : public RegisterBase<0x40020000, 32, ReadMode>
  {
    using GIF0 = DMA0_INTF_GIF0_Values<DMA0::INTF, 0, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF0 = DMA0_INTF_FTFIF0_Values<DMA0::INTF, 1, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF0 = DMA0_INTF_HTFIF0_Values<DMA0::INTF, 2, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF0 = DMA0_INTF_ERRIF0_Values<DMA0::INTF, 3, 1, ReadMode, DMA0INTFBase> ;
    using GIF1 = DMA0_INTF_GIF1_Values<DMA0::INTF, 4, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF1 = DMA0_INTF_FTFIF1_Values<DMA0::INTF, 5, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF1 = DMA0_INTF_HTFIF1_Values<DMA0::INTF, 6, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF1 = DMA0_INTF_ERRIF1_Values<DMA0::INTF, 7, 1, ReadMode, DMA0INTFBase> ;
    using GIF2 = DMA0_INTF_GIF2_Values<DMA0::INTF, 8, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF2 = DMA0_INTF_FTFIF2_Values<DMA0::INTF, 9, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF2 = DMA0_INTF_HTFIF2_Values<DMA0::INTF, 10, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF2 = DMA0_INTF_ERRIF2_Values<DMA0::INTF, 11, 1, ReadMode, DMA0INTFBase> ;
    using GIF3 = DMA0_INTF_GIF3_Values<DMA0::INTF, 12, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF3 = DMA0_INTF_FTFIF3_Values<DMA0::INTF, 13, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF3 = DMA0_INTF_HTFIF3_Values<DMA0::INTF, 14, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF3 = DMA0_INTF_ERRIF3_Values<DMA0::INTF, 15, 1, ReadMode, DMA0INTFBase> ;
    using GIF4 = DMA0_INTF_GIF4_Values<DMA0::INTF, 16, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF4 = DMA0_INTF_FTFIF4_Values<DMA0::INTF, 17, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF4 = DMA0_INTF_HTFIF4_Values<DMA0::INTF, 18, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF4 = DMA0_INTF_ERRIF4_Values<DMA0::INTF, 19, 1, ReadMode, DMA0INTFBase> ;
    using GIF5 = DMA0_INTF_GIF5_Values<DMA0::INTF, 20, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF5 = DMA0_INTF_FTFIF5_Values<DMA0::INTF, 21, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF5 = DMA0_INTF_HTFIF5_Values<DMA0::INTF, 22, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF5 = DMA0_INTF_ERRIF5_Values<DMA0::INTF, 23, 1, ReadMode, DMA0INTFBase> ;
    using GIF6 = DMA0_INTF_GIF6_Values<DMA0::INTF, 24, 1, ReadMode, DMA0INTFBase> ;
    using FTFIF6 = DMA0_INTF_FTFIF6_Values<DMA0::INTF, 25, 1, ReadMode, DMA0INTFBase> ;
    using HTFIF6 = DMA0_INTF_HTFIF6_Values<DMA0::INTF, 26, 1, ReadMode, DMA0INTFBase> ;
    using ERRIF6 = DMA0_INTF_ERRIF6_Values<DMA0::INTF, 27, 1, ReadMode, DMA0INTFBase> ;
    using FieldValues = DMA0_INTF_ERRIF6_Values<DMA0::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40020000, 32, ReadMode, DMA0INTFBase, T...> ;

  struct DMA0INTCBase {} ;

  struct INTC : public RegisterBase<0x40020004, 32, WriteMode>
  {
    using GIFC0 = DMA0_INTC_GIFC0_Values<DMA0::INTC, 0, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC0 = DMA0_INTC_FTFIFC0_Values<DMA0::INTC, 1, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC0 = DMA0_INTC_HTFIFC0_Values<DMA0::INTC, 2, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC0 = DMA0_INTC_ERRIFC0_Values<DMA0::INTC, 3, 1, WriteMode, DMA0INTCBase> ;
    using GIFC1 = DMA0_INTC_GIFC1_Values<DMA0::INTC, 4, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC1 = DMA0_INTC_FTFIFC1_Values<DMA0::INTC, 5, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC1 = DMA0_INTC_HTFIFC1_Values<DMA0::INTC, 6, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC1 = DMA0_INTC_ERRIFC1_Values<DMA0::INTC, 7, 1, WriteMode, DMA0INTCBase> ;
    using GIFC2 = DMA0_INTC_GIFC2_Values<DMA0::INTC, 8, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC2 = DMA0_INTC_FTFIFC2_Values<DMA0::INTC, 9, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC2 = DMA0_INTC_HTFIFC2_Values<DMA0::INTC, 10, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC2 = DMA0_INTC_ERRIFC2_Values<DMA0::INTC, 11, 1, WriteMode, DMA0INTCBase> ;
    using GIFC3 = DMA0_INTC_GIFC3_Values<DMA0::INTC, 12, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC3 = DMA0_INTC_FTFIFC3_Values<DMA0::INTC, 13, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC3 = DMA0_INTC_HTFIFC3_Values<DMA0::INTC, 14, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC3 = DMA0_INTC_ERRIFC3_Values<DMA0::INTC, 15, 1, WriteMode, DMA0INTCBase> ;
    using GIFC4 = DMA0_INTC_GIFC4_Values<DMA0::INTC, 16, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC4 = DMA0_INTC_FTFIFC4_Values<DMA0::INTC, 17, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC4 = DMA0_INTC_HTFIFC4_Values<DMA0::INTC, 18, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC4 = DMA0_INTC_ERRIFC4_Values<DMA0::INTC, 19, 1, WriteMode, DMA0INTCBase> ;
    using GIFC5 = DMA0_INTC_GIFC5_Values<DMA0::INTC, 20, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC5 = DMA0_INTC_FTFIFC5_Values<DMA0::INTC, 21, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC5 = DMA0_INTC_HTFIFC5_Values<DMA0::INTC, 22, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC5 = DMA0_INTC_ERRIFC5_Values<DMA0::INTC, 23, 1, WriteMode, DMA0INTCBase> ;
    using GIFC6 = DMA0_INTC_GIFC6_Values<DMA0::INTC, 24, 1, WriteMode, DMA0INTCBase> ;
    using FTFIFC6 = DMA0_INTC_FTFIFC6_Values<DMA0::INTC, 25, 1, WriteMode, DMA0INTCBase> ;
    using HTFIFC6 = DMA0_INTC_HTFIFC6_Values<DMA0::INTC, 26, 1, WriteMode, DMA0INTCBase> ;
    using ERRIFC6 = DMA0_INTC_ERRIFC6_Values<DMA0::INTC, 27, 1, WriteMode, DMA0INTCBase> ;
    using FieldValues = DMA0_INTC_ERRIFC6_Values<DMA0::INTC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTCPack  = Register<0x40020004, 32, WriteMode, DMA0INTCBase, T...> ;

  struct DMA0CH0CTLBase {} ;

  struct CH0CTL : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH0CTL_CHEN_Values<DMA0::CH0CTL, 0, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using FTFIE = DMA0_CH0CTL_FTFIE_Values<DMA0::CH0CTL, 1, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using HTFIE = DMA0_CH0CTL_HTFIE_Values<DMA0::CH0CTL, 2, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using ERRIE = DMA0_CH0CTL_ERRIE_Values<DMA0::CH0CTL, 3, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using DIR = DMA0_CH0CTL_DIR_Values<DMA0::CH0CTL, 4, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using CMEN = DMA0_CH0CTL_CMEN_Values<DMA0::CH0CTL, 5, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using PNAGA = DMA0_CH0CTL_PNAGA_Values<DMA0::CH0CTL, 6, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using MNAGA = DMA0_CH0CTL_MNAGA_Values<DMA0::CH0CTL, 7, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using PWIDTH = DMA0_CH0CTL_PWIDTH_Values<DMA0::CH0CTL, 8, 2, ReadWriteMode, DMA0CH0CTLBase> ;
    using MWIDTH = DMA0_CH0CTL_MWIDTH_Values<DMA0::CH0CTL, 10, 2, ReadWriteMode, DMA0CH0CTLBase> ;
    using PRIO = DMA0_CH0CTL_PRIO_Values<DMA0::CH0CTL, 12, 2, ReadWriteMode, DMA0CH0CTLBase> ;
    using M2M = DMA0_CH0CTL_M2M_Values<DMA0::CH0CTL, 14, 1, ReadWriteMode, DMA0CH0CTLBase> ;
    using FieldValues = DMA0_CH0CTL_M2M_Values<DMA0::CH0CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CTLPack  = Register<0x40020008, 32, ReadWriteMode, DMA0CH0CTLBase, T...> ;

  struct DMA0CH0CNTBase {} ;

  struct CH0CNT : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH0CNT_CNT_Values<DMA0::CH0CNT, 0, 16, ReadWriteMode, DMA0CH0CNTBase> ;
    using FieldValues = DMA0_CH0CNT_CNT_Values<DMA0::CH0CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CNTPack  = Register<0x4002000C, 32, ReadWriteMode, DMA0CH0CNTBase, T...> ;

  struct DMA0CH0PADDRBase {} ;

  struct CH0PADDR : public RegisterBase<0x40020010, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH0PADDR_PADDR_Values<DMA0::CH0PADDR, 0, 32, ReadWriteMode, DMA0CH0PADDRBase> ;
    using FieldValues = DMA0_CH0PADDR_PADDR_Values<DMA0::CH0PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0PADDRPack  = Register<0x40020010, 32, ReadWriteMode, DMA0CH0PADDRBase, T...> ;

  struct DMA0CH0MADDRBase {} ;

  struct CH0MADDR : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH0MADDR_MADDR_Values<DMA0::CH0MADDR, 0, 32, ReadWriteMode, DMA0CH0MADDRBase> ;
    using FieldValues = DMA0_CH0MADDR_MADDR_Values<DMA0::CH0MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0MADDRPack  = Register<0x40020014, 32, ReadWriteMode, DMA0CH0MADDRBase, T...> ;

  struct DMA0CH1CTLBase {} ;

  struct CH1CTL : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH1CTL_CHEN_Values<DMA0::CH1CTL, 0, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using FTFIE = DMA0_CH1CTL_FTFIE_Values<DMA0::CH1CTL, 1, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using HTFIE = DMA0_CH1CTL_HTFIE_Values<DMA0::CH1CTL, 2, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using ERRIE = DMA0_CH1CTL_ERRIE_Values<DMA0::CH1CTL, 3, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using DIR = DMA0_CH1CTL_DIR_Values<DMA0::CH1CTL, 4, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using CMEN = DMA0_CH1CTL_CMEN_Values<DMA0::CH1CTL, 5, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using PNAGA = DMA0_CH1CTL_PNAGA_Values<DMA0::CH1CTL, 6, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using MNAGA = DMA0_CH1CTL_MNAGA_Values<DMA0::CH1CTL, 7, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using PWIDTH = DMA0_CH1CTL_PWIDTH_Values<DMA0::CH1CTL, 8, 2, ReadWriteMode, DMA0CH1CTLBase> ;
    using MWIDTH = DMA0_CH1CTL_MWIDTH_Values<DMA0::CH1CTL, 10, 2, ReadWriteMode, DMA0CH1CTLBase> ;
    using PRIO = DMA0_CH1CTL_PRIO_Values<DMA0::CH1CTL, 12, 2, ReadWriteMode, DMA0CH1CTLBase> ;
    using M2M = DMA0_CH1CTL_M2M_Values<DMA0::CH1CTL, 14, 1, ReadWriteMode, DMA0CH1CTLBase> ;
    using FieldValues = DMA0_CH1CTL_M2M_Values<DMA0::CH1CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CTLPack  = Register<0x4002001C, 32, ReadWriteMode, DMA0CH1CTLBase, T...> ;

  struct DMA0CH1CNTBase {} ;

  struct CH1CNT : public RegisterBase<0x40020020, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH1CNT_CNT_Values<DMA0::CH1CNT, 0, 16, ReadWriteMode, DMA0CH1CNTBase> ;
    using FieldValues = DMA0_CH1CNT_CNT_Values<DMA0::CH1CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CNTPack  = Register<0x40020020, 32, ReadWriteMode, DMA0CH1CNTBase, T...> ;

  struct DMA0CH1PADDRBase {} ;

  struct CH1PADDR : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH1PADDR_PADDR_Values<DMA0::CH1PADDR, 0, 32, ReadWriteMode, DMA0CH1PADDRBase> ;
    using FieldValues = DMA0_CH1PADDR_PADDR_Values<DMA0::CH1PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1PADDRPack  = Register<0x40020024, 32, ReadWriteMode, DMA0CH1PADDRBase, T...> ;

  struct DMA0CH1MADDRBase {} ;

  struct CH1MADDR : public RegisterBase<0x40020028, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH1MADDR_MADDR_Values<DMA0::CH1MADDR, 0, 32, ReadWriteMode, DMA0CH1MADDRBase> ;
    using FieldValues = DMA0_CH1MADDR_MADDR_Values<DMA0::CH1MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1MADDRPack  = Register<0x40020028, 32, ReadWriteMode, DMA0CH1MADDRBase, T...> ;

  struct DMA0CH2CTLBase {} ;

  struct CH2CTL : public RegisterBase<0x40020030, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH2CTL_CHEN_Values<DMA0::CH2CTL, 0, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using FTFIE = DMA0_CH2CTL_FTFIE_Values<DMA0::CH2CTL, 1, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using HTFIE = DMA0_CH2CTL_HTFIE_Values<DMA0::CH2CTL, 2, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using ERRIE = DMA0_CH2CTL_ERRIE_Values<DMA0::CH2CTL, 3, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using DIR = DMA0_CH2CTL_DIR_Values<DMA0::CH2CTL, 4, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using CMEN = DMA0_CH2CTL_CMEN_Values<DMA0::CH2CTL, 5, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using PNAGA = DMA0_CH2CTL_PNAGA_Values<DMA0::CH2CTL, 6, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using MNAGA = DMA0_CH2CTL_MNAGA_Values<DMA0::CH2CTL, 7, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using PWIDTH = DMA0_CH2CTL_PWIDTH_Values<DMA0::CH2CTL, 8, 2, ReadWriteMode, DMA0CH2CTLBase> ;
    using MWIDTH = DMA0_CH2CTL_MWIDTH_Values<DMA0::CH2CTL, 10, 2, ReadWriteMode, DMA0CH2CTLBase> ;
    using PRIO = DMA0_CH2CTL_PRIO_Values<DMA0::CH2CTL, 12, 2, ReadWriteMode, DMA0CH2CTLBase> ;
    using M2M = DMA0_CH2CTL_M2M_Values<DMA0::CH2CTL, 14, 1, ReadWriteMode, DMA0CH2CTLBase> ;
    using FieldValues = DMA0_CH2CTL_M2M_Values<DMA0::CH2CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CTLPack  = Register<0x40020030, 32, ReadWriteMode, DMA0CH2CTLBase, T...> ;

  struct DMA0CH2CNTBase {} ;

  struct CH2CNT : public RegisterBase<0x40020034, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH2CNT_CNT_Values<DMA0::CH2CNT, 0, 16, ReadWriteMode, DMA0CH2CNTBase> ;
    using FieldValues = DMA0_CH2CNT_CNT_Values<DMA0::CH2CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CNTPack  = Register<0x40020034, 32, ReadWriteMode, DMA0CH2CNTBase, T...> ;

  struct DMA0CH2PADDRBase {} ;

  struct CH2PADDR : public RegisterBase<0x40020038, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH2PADDR_PADDR_Values<DMA0::CH2PADDR, 0, 32, ReadWriteMode, DMA0CH2PADDRBase> ;
    using FieldValues = DMA0_CH2PADDR_PADDR_Values<DMA0::CH2PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2PADDRPack  = Register<0x40020038, 32, ReadWriteMode, DMA0CH2PADDRBase, T...> ;

  struct DMA0CH2MADDRBase {} ;

  struct CH2MADDR : public RegisterBase<0x4002003C, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH2MADDR_MADDR_Values<DMA0::CH2MADDR, 0, 32, ReadWriteMode, DMA0CH2MADDRBase> ;
    using FieldValues = DMA0_CH2MADDR_MADDR_Values<DMA0::CH2MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2MADDRPack  = Register<0x4002003C, 32, ReadWriteMode, DMA0CH2MADDRBase, T...> ;

  struct DMA0CH3CTLBase {} ;

  struct CH3CTL : public RegisterBase<0x40020044, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH3CTL_CHEN_Values<DMA0::CH3CTL, 0, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using FTFIE = DMA0_CH3CTL_FTFIE_Values<DMA0::CH3CTL, 1, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using HTFIE = DMA0_CH3CTL_HTFIE_Values<DMA0::CH3CTL, 2, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using ERRIE = DMA0_CH3CTL_ERRIE_Values<DMA0::CH3CTL, 3, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using DIR = DMA0_CH3CTL_DIR_Values<DMA0::CH3CTL, 4, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using CMEN = DMA0_CH3CTL_CMEN_Values<DMA0::CH3CTL, 5, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using PNAGA = DMA0_CH3CTL_PNAGA_Values<DMA0::CH3CTL, 6, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using MNAGA = DMA0_CH3CTL_MNAGA_Values<DMA0::CH3CTL, 7, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using PWIDTH = DMA0_CH3CTL_PWIDTH_Values<DMA0::CH3CTL, 8, 2, ReadWriteMode, DMA0CH3CTLBase> ;
    using MWIDTH = DMA0_CH3CTL_MWIDTH_Values<DMA0::CH3CTL, 10, 2, ReadWriteMode, DMA0CH3CTLBase> ;
    using PRIO = DMA0_CH3CTL_PRIO_Values<DMA0::CH3CTL, 12, 2, ReadWriteMode, DMA0CH3CTLBase> ;
    using M2M = DMA0_CH3CTL_M2M_Values<DMA0::CH3CTL, 14, 1, ReadWriteMode, DMA0CH3CTLBase> ;
    using FieldValues = DMA0_CH3CTL_M2M_Values<DMA0::CH3CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CTLPack  = Register<0x40020044, 32, ReadWriteMode, DMA0CH3CTLBase, T...> ;

  struct DMA0CH3CNTBase {} ;

  struct CH3CNT : public RegisterBase<0x40020048, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH3CNT_CNT_Values<DMA0::CH3CNT, 0, 16, ReadWriteMode, DMA0CH3CNTBase> ;
    using FieldValues = DMA0_CH3CNT_CNT_Values<DMA0::CH3CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CNTPack  = Register<0x40020048, 32, ReadWriteMode, DMA0CH3CNTBase, T...> ;

  struct DMA0CH3PADDRBase {} ;

  struct CH3PADDR : public RegisterBase<0x4002004C, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH3PADDR_PADDR_Values<DMA0::CH3PADDR, 0, 32, ReadWriteMode, DMA0CH3PADDRBase> ;
    using FieldValues = DMA0_CH3PADDR_PADDR_Values<DMA0::CH3PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3PADDRPack  = Register<0x4002004C, 32, ReadWriteMode, DMA0CH3PADDRBase, T...> ;

  struct DMA0CH3MADDRBase {} ;

  struct CH3MADDR : public RegisterBase<0x40020050, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH3MADDR_MADDR_Values<DMA0::CH3MADDR, 0, 32, ReadWriteMode, DMA0CH3MADDRBase> ;
    using FieldValues = DMA0_CH3MADDR_MADDR_Values<DMA0::CH3MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3MADDRPack  = Register<0x40020050, 32, ReadWriteMode, DMA0CH3MADDRBase, T...> ;

  struct DMA0CH4CTLBase {} ;

  struct CH4CTL : public RegisterBase<0x40020058, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH4CTL_CHEN_Values<DMA0::CH4CTL, 0, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using FTFIE = DMA0_CH4CTL_FTFIE_Values<DMA0::CH4CTL, 1, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using HTFIE = DMA0_CH4CTL_HTFIE_Values<DMA0::CH4CTL, 2, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using ERRIE = DMA0_CH4CTL_ERRIE_Values<DMA0::CH4CTL, 3, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using DIR = DMA0_CH4CTL_DIR_Values<DMA0::CH4CTL, 4, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using CMEN = DMA0_CH4CTL_CMEN_Values<DMA0::CH4CTL, 5, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using PNAGA = DMA0_CH4CTL_PNAGA_Values<DMA0::CH4CTL, 6, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using MNAGA = DMA0_CH4CTL_MNAGA_Values<DMA0::CH4CTL, 7, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using PWIDTH = DMA0_CH4CTL_PWIDTH_Values<DMA0::CH4CTL, 8, 2, ReadWriteMode, DMA0CH4CTLBase> ;
    using MWIDTH = DMA0_CH4CTL_MWIDTH_Values<DMA0::CH4CTL, 10, 2, ReadWriteMode, DMA0CH4CTLBase> ;
    using PRIO = DMA0_CH4CTL_PRIO_Values<DMA0::CH4CTL, 12, 2, ReadWriteMode, DMA0CH4CTLBase> ;
    using M2M = DMA0_CH4CTL_M2M_Values<DMA0::CH4CTL, 14, 1, ReadWriteMode, DMA0CH4CTLBase> ;
    using FieldValues = DMA0_CH4CTL_M2M_Values<DMA0::CH4CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CTLPack  = Register<0x40020058, 32, ReadWriteMode, DMA0CH4CTLBase, T...> ;

  struct DMA0CH4CNTBase {} ;

  struct CH4CNT : public RegisterBase<0x4002005C, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH4CNT_CNT_Values<DMA0::CH4CNT, 0, 16, ReadWriteMode, DMA0CH4CNTBase> ;
    using FieldValues = DMA0_CH4CNT_CNT_Values<DMA0::CH4CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CNTPack  = Register<0x4002005C, 32, ReadWriteMode, DMA0CH4CNTBase, T...> ;

  struct DMA0CH4PADDRBase {} ;

  struct CH4PADDR : public RegisterBase<0x40020060, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH4PADDR_PADDR_Values<DMA0::CH4PADDR, 0, 32, ReadWriteMode, DMA0CH4PADDRBase> ;
    using FieldValues = DMA0_CH4PADDR_PADDR_Values<DMA0::CH4PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4PADDRPack  = Register<0x40020060, 32, ReadWriteMode, DMA0CH4PADDRBase, T...> ;

  struct DMA0CH4MADDRBase {} ;

  struct CH4MADDR : public RegisterBase<0x40020064, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH4MADDR_MADDR_Values<DMA0::CH4MADDR, 0, 32, ReadWriteMode, DMA0CH4MADDRBase> ;
    using FieldValues = DMA0_CH4MADDR_MADDR_Values<DMA0::CH4MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4MADDRPack  = Register<0x40020064, 32, ReadWriteMode, DMA0CH4MADDRBase, T...> ;

  struct DMA0CH5CTLBase {} ;

  struct CH5CTL : public RegisterBase<0x4002006C, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH5CTL_CHEN_Values<DMA0::CH5CTL, 0, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using FTFIE = DMA0_CH5CTL_FTFIE_Values<DMA0::CH5CTL, 1, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using HTFIE = DMA0_CH5CTL_HTFIE_Values<DMA0::CH5CTL, 2, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using ERRIE = DMA0_CH5CTL_ERRIE_Values<DMA0::CH5CTL, 3, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using DIR = DMA0_CH5CTL_DIR_Values<DMA0::CH5CTL, 4, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using CMEN = DMA0_CH5CTL_CMEN_Values<DMA0::CH5CTL, 5, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using PNAGA = DMA0_CH5CTL_PNAGA_Values<DMA0::CH5CTL, 6, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using MNAGA = DMA0_CH5CTL_MNAGA_Values<DMA0::CH5CTL, 7, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using PWIDTH = DMA0_CH5CTL_PWIDTH_Values<DMA0::CH5CTL, 8, 2, ReadWriteMode, DMA0CH5CTLBase> ;
    using MWIDTH = DMA0_CH5CTL_MWIDTH_Values<DMA0::CH5CTL, 10, 2, ReadWriteMode, DMA0CH5CTLBase> ;
    using PRIO = DMA0_CH5CTL_PRIO_Values<DMA0::CH5CTL, 12, 2, ReadWriteMode, DMA0CH5CTLBase> ;
    using M2M = DMA0_CH5CTL_M2M_Values<DMA0::CH5CTL, 14, 1, ReadWriteMode, DMA0CH5CTLBase> ;
    using FieldValues = DMA0_CH5CTL_M2M_Values<DMA0::CH5CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5CTLPack  = Register<0x4002006C, 32, ReadWriteMode, DMA0CH5CTLBase, T...> ;

  struct DMA0CH5CNTBase {} ;

  struct CH5CNT : public RegisterBase<0x40020070, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH5CNT_CNT_Values<DMA0::CH5CNT, 0, 16, ReadWriteMode, DMA0CH5CNTBase> ;
    using FieldValues = DMA0_CH5CNT_CNT_Values<DMA0::CH5CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5CNTPack  = Register<0x40020070, 32, ReadWriteMode, DMA0CH5CNTBase, T...> ;

  struct DMA0CH5PADDRBase {} ;

  struct CH5PADDR : public RegisterBase<0x40020074, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH5PADDR_PADDR_Values<DMA0::CH5PADDR, 0, 32, ReadWriteMode, DMA0CH5PADDRBase> ;
    using FieldValues = DMA0_CH5PADDR_PADDR_Values<DMA0::CH5PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5PADDRPack  = Register<0x40020074, 32, ReadWriteMode, DMA0CH5PADDRBase, T...> ;

  struct DMA0CH5MADDRBase {} ;

  struct CH5MADDR : public RegisterBase<0x40020078, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH5MADDR_MADDR_Values<DMA0::CH5MADDR, 0, 32, ReadWriteMode, DMA0CH5MADDRBase> ;
    using FieldValues = DMA0_CH5MADDR_MADDR_Values<DMA0::CH5MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5MADDRPack  = Register<0x40020078, 32, ReadWriteMode, DMA0CH5MADDRBase, T...> ;

  struct DMA0CH6CTLBase {} ;

  struct CH6CTL : public RegisterBase<0x40020080, 32, ReadWriteMode>
  {
    using CHEN = DMA0_CH6CTL_CHEN_Values<DMA0::CH6CTL, 0, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using FTFIE = DMA0_CH6CTL_FTFIE_Values<DMA0::CH6CTL, 1, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using HTFIE = DMA0_CH6CTL_HTFIE_Values<DMA0::CH6CTL, 2, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using ERRIE = DMA0_CH6CTL_ERRIE_Values<DMA0::CH6CTL, 3, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using DIR = DMA0_CH6CTL_DIR_Values<DMA0::CH6CTL, 4, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using CMEN = DMA0_CH6CTL_CMEN_Values<DMA0::CH6CTL, 5, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using PNAGA = DMA0_CH6CTL_PNAGA_Values<DMA0::CH6CTL, 6, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using MNAGA = DMA0_CH6CTL_MNAGA_Values<DMA0::CH6CTL, 7, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using PWIDTH = DMA0_CH6CTL_PWIDTH_Values<DMA0::CH6CTL, 8, 2, ReadWriteMode, DMA0CH6CTLBase> ;
    using MWIDTH = DMA0_CH6CTL_MWIDTH_Values<DMA0::CH6CTL, 10, 2, ReadWriteMode, DMA0CH6CTLBase> ;
    using PRIO = DMA0_CH6CTL_PRIO_Values<DMA0::CH6CTL, 12, 2, ReadWriteMode, DMA0CH6CTLBase> ;
    using M2M = DMA0_CH6CTL_M2M_Values<DMA0::CH6CTL, 14, 1, ReadWriteMode, DMA0CH6CTLBase> ;
    using FieldValues = DMA0_CH6CTL_M2M_Values<DMA0::CH6CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6CTLPack  = Register<0x40020080, 32, ReadWriteMode, DMA0CH6CTLBase, T...> ;

  struct DMA0CH6CNTBase {} ;

  struct CH6CNT : public RegisterBase<0x40020084, 32, ReadWriteMode>
  {
    using CNT = DMA0_CH6CNT_CNT_Values<DMA0::CH6CNT, 0, 16, ReadWriteMode, DMA0CH6CNTBase> ;
    using FieldValues = DMA0_CH6CNT_CNT_Values<DMA0::CH6CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6CNTPack  = Register<0x40020084, 32, ReadWriteMode, DMA0CH6CNTBase, T...> ;

  struct DMA0CH6PADDRBase {} ;

  struct CH6PADDR : public RegisterBase<0x40020088, 32, ReadWriteMode>
  {
    using PADDR = DMA0_CH6PADDR_PADDR_Values<DMA0::CH6PADDR, 0, 32, ReadWriteMode, DMA0CH6PADDRBase> ;
    using FieldValues = DMA0_CH6PADDR_PADDR_Values<DMA0::CH6PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6PADDRPack  = Register<0x40020088, 32, ReadWriteMode, DMA0CH6PADDRBase, T...> ;

  struct DMA0CH6MADDRBase {} ;

  struct CH6MADDR : public RegisterBase<0x4002008C, 32, ReadWriteMode>
  {
    using MADDR = DMA0_CH6MADDR_MADDR_Values<DMA0::CH6MADDR, 0, 32, ReadWriteMode, DMA0CH6MADDRBase> ;
    using FieldValues = DMA0_CH6MADDR_MADDR_Values<DMA0::CH6MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6MADDRPack  = Register<0x4002008C, 32, ReadWriteMode, DMA0CH6MADDRBase, T...> ;

} ;

#endif //#if !defined(DMA0REGISTERS_HPP)
