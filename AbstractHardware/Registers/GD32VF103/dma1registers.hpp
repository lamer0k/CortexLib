/*******************************************************************************
* Filename      : dma1registers.hpp
*
* Details       : Direct memory access controller. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(DMA1REGISTERS_HPP)
#define DMA1REGISTERS_HPP

#include "dma1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA1
{
  struct DMA1INTFBase {} ;

  struct INTF : public RegisterBase<0x40020000, 32, ReadMode>
  {
    using GIF0 = DMA1_INTF_GIF0_Values<DMA1::INTF, 0, 1, ReadMode, DMA1INTFBase> ;
    using FTFIF0 = DMA1_INTF_FTFIF0_Values<DMA1::INTF, 1, 1, ReadMode, DMA1INTFBase> ;
    using HTFIF0 = DMA1_INTF_HTFIF0_Values<DMA1::INTF, 2, 1, ReadMode, DMA1INTFBase> ;
    using ERRIF0 = DMA1_INTF_ERRIF0_Values<DMA1::INTF, 3, 1, ReadMode, DMA1INTFBase> ;
    using GIF1 = DMA1_INTF_GIF1_Values<DMA1::INTF, 4, 1, ReadMode, DMA1INTFBase> ;
    using FTFIF1 = DMA1_INTF_FTFIF1_Values<DMA1::INTF, 5, 1, ReadMode, DMA1INTFBase> ;
    using HTFIF1 = DMA1_INTF_HTFIF1_Values<DMA1::INTF, 6, 1, ReadMode, DMA1INTFBase> ;
    using ERRIF1 = DMA1_INTF_ERRIF1_Values<DMA1::INTF, 7, 1, ReadMode, DMA1INTFBase> ;
    using GIF2 = DMA1_INTF_GIF2_Values<DMA1::INTF, 8, 1, ReadMode, DMA1INTFBase> ;
    using FTFIF2 = DMA1_INTF_FTFIF2_Values<DMA1::INTF, 9, 1, ReadMode, DMA1INTFBase> ;
    using HTFIF2 = DMA1_INTF_HTFIF2_Values<DMA1::INTF, 10, 1, ReadMode, DMA1INTFBase> ;
    using ERRIF2 = DMA1_INTF_ERRIF2_Values<DMA1::INTF, 11, 1, ReadMode, DMA1INTFBase> ;
    using GIF3 = DMA1_INTF_GIF3_Values<DMA1::INTF, 12, 1, ReadMode, DMA1INTFBase> ;
    using FTFIF3 = DMA1_INTF_FTFIF3_Values<DMA1::INTF, 13, 1, ReadMode, DMA1INTFBase> ;
    using HTFIF3 = DMA1_INTF_HTFIF3_Values<DMA1::INTF, 14, 1, ReadMode, DMA1INTFBase> ;
    using ERRIF3 = DMA1_INTF_ERRIF3_Values<DMA1::INTF, 15, 1, ReadMode, DMA1INTFBase> ;
    using GIF4 = DMA1_INTF_GIF4_Values<DMA1::INTF, 16, 1, ReadMode, DMA1INTFBase> ;
    using FTFIF4 = DMA1_INTF_FTFIF4_Values<DMA1::INTF, 17, 1, ReadMode, DMA1INTFBase> ;
    using HTFIF4 = DMA1_INTF_HTFIF4_Values<DMA1::INTF, 18, 1, ReadMode, DMA1INTFBase> ;
    using ERRIF4 = DMA1_INTF_ERRIF4_Values<DMA1::INTF, 19, 1, ReadMode, DMA1INTFBase> ;
    using FieldValues = DMA1_INTF_ERRIF4_Values<DMA1::INTF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTFPack  = Register<0x40020000, 32, ReadMode, DMA1INTFBase, T...> ;

  struct DMA1INTCBase {} ;

  struct INTC : public RegisterBase<0x40020004, 32, WriteMode>
  {
    using GIFC0 = DMA1_INTC_GIFC0_Values<DMA1::INTC, 0, 1, WriteMode, DMA1INTCBase> ;
    using FTFIFC0 = DMA1_INTC_FTFIFC0_Values<DMA1::INTC, 1, 1, WriteMode, DMA1INTCBase> ;
    using HTFIFC0 = DMA1_INTC_HTFIFC0_Values<DMA1::INTC, 2, 1, WriteMode, DMA1INTCBase> ;
    using ERRIFC0 = DMA1_INTC_ERRIFC0_Values<DMA1::INTC, 3, 1, WriteMode, DMA1INTCBase> ;
    using GIFC1 = DMA1_INTC_GIFC1_Values<DMA1::INTC, 4, 1, WriteMode, DMA1INTCBase> ;
    using FTFIFC1 = DMA1_INTC_FTFIFC1_Values<DMA1::INTC, 5, 1, WriteMode, DMA1INTCBase> ;
    using HTFIFC1 = DMA1_INTC_HTFIFC1_Values<DMA1::INTC, 6, 1, WriteMode, DMA1INTCBase> ;
    using ERRIFC1 = DMA1_INTC_ERRIFC1_Values<DMA1::INTC, 7, 1, WriteMode, DMA1INTCBase> ;
    using GIFC2 = DMA1_INTC_GIFC2_Values<DMA1::INTC, 8, 1, WriteMode, DMA1INTCBase> ;
    using FTFIFC2 = DMA1_INTC_FTFIFC2_Values<DMA1::INTC, 9, 1, WriteMode, DMA1INTCBase> ;
    using HTFIFC2 = DMA1_INTC_HTFIFC2_Values<DMA1::INTC, 10, 1, WriteMode, DMA1INTCBase> ;
    using ERRIFC2 = DMA1_INTC_ERRIFC2_Values<DMA1::INTC, 11, 1, WriteMode, DMA1INTCBase> ;
    using GIFC3 = DMA1_INTC_GIFC3_Values<DMA1::INTC, 12, 1, WriteMode, DMA1INTCBase> ;
    using FTFIFC3 = DMA1_INTC_FTFIFC3_Values<DMA1::INTC, 13, 1, WriteMode, DMA1INTCBase> ;
    using HTFIFC3 = DMA1_INTC_HTFIFC3_Values<DMA1::INTC, 14, 1, WriteMode, DMA1INTCBase> ;
    using ERRIFC3 = DMA1_INTC_ERRIFC3_Values<DMA1::INTC, 15, 1, WriteMode, DMA1INTCBase> ;
    using GIFC4 = DMA1_INTC_GIFC4_Values<DMA1::INTC, 16, 1, WriteMode, DMA1INTCBase> ;
    using FTFIFC4 = DMA1_INTC_FTFIFC4_Values<DMA1::INTC, 17, 1, WriteMode, DMA1INTCBase> ;
    using HTFIFC4 = DMA1_INTC_HTFIFC4_Values<DMA1::INTC, 18, 1, WriteMode, DMA1INTCBase> ;
    using ERRIFC4 = DMA1_INTC_ERRIFC4_Values<DMA1::INTC, 19, 1, WriteMode, DMA1INTCBase> ;
    using FieldValues = DMA1_INTC_ERRIFC4_Values<DMA1::INTC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTCPack  = Register<0x40020004, 32, WriteMode, DMA1INTCBase, T...> ;

  struct DMA1CH0CTLBase {} ;

  struct CH0CTL : public RegisterBase<0x40020008, 32, ReadWriteMode>
  {
    using CHEN = DMA1_CH0CTL_CHEN_Values<DMA1::CH0CTL, 0, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using FTFIE = DMA1_CH0CTL_FTFIE_Values<DMA1::CH0CTL, 1, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using HTFIE = DMA1_CH0CTL_HTFIE_Values<DMA1::CH0CTL, 2, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using ERRIE = DMA1_CH0CTL_ERRIE_Values<DMA1::CH0CTL, 3, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using DIR = DMA1_CH0CTL_DIR_Values<DMA1::CH0CTL, 4, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using CMEN = DMA1_CH0CTL_CMEN_Values<DMA1::CH0CTL, 5, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using PNAGA = DMA1_CH0CTL_PNAGA_Values<DMA1::CH0CTL, 6, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using MNAGA = DMA1_CH0CTL_MNAGA_Values<DMA1::CH0CTL, 7, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using PWIDTH = DMA1_CH0CTL_PWIDTH_Values<DMA1::CH0CTL, 8, 2, ReadWriteMode, DMA1CH0CTLBase> ;
    using MWIDTH = DMA1_CH0CTL_MWIDTH_Values<DMA1::CH0CTL, 10, 2, ReadWriteMode, DMA1CH0CTLBase> ;
    using PRIO = DMA1_CH0CTL_PRIO_Values<DMA1::CH0CTL, 12, 2, ReadWriteMode, DMA1CH0CTLBase> ;
    using M2M = DMA1_CH0CTL_M2M_Values<DMA1::CH0CTL, 14, 1, ReadWriteMode, DMA1CH0CTLBase> ;
    using FieldValues = DMA1_CH0CTL_M2M_Values<DMA1::CH0CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CTLPack  = Register<0x40020008, 32, ReadWriteMode, DMA1CH0CTLBase, T...> ;

  struct DMA1CH0CNTBase {} ;

  struct CH0CNT : public RegisterBase<0x4002000C, 32, ReadWriteMode>
  {
    using CNT = DMA1_CH0CNT_CNT_Values<DMA1::CH0CNT, 0, 16, ReadWriteMode, DMA1CH0CNTBase> ;
    using FieldValues = DMA1_CH0CNT_CNT_Values<DMA1::CH0CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CNTPack  = Register<0x4002000C, 32, ReadWriteMode, DMA1CH0CNTBase, T...> ;

  struct DMA1CH0PADDRBase {} ;

  struct CH0PADDR : public RegisterBase<0x40020010, 32, ReadWriteMode>
  {
    using PADDR = DMA1_CH0PADDR_PADDR_Values<DMA1::CH0PADDR, 0, 32, ReadWriteMode, DMA1CH0PADDRBase> ;
    using FieldValues = DMA1_CH0PADDR_PADDR_Values<DMA1::CH0PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0PADDRPack  = Register<0x40020010, 32, ReadWriteMode, DMA1CH0PADDRBase, T...> ;

  struct DMA1CH0MADDRBase {} ;

  struct CH0MADDR : public RegisterBase<0x40020014, 32, ReadWriteMode>
  {
    using MADDR = DMA1_CH0MADDR_MADDR_Values<DMA1::CH0MADDR, 0, 32, ReadWriteMode, DMA1CH0MADDRBase> ;
    using FieldValues = DMA1_CH0MADDR_MADDR_Values<DMA1::CH0MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0MADDRPack  = Register<0x40020014, 32, ReadWriteMode, DMA1CH0MADDRBase, T...> ;

  struct DMA1CH1CTLBase {} ;

  struct CH1CTL : public RegisterBase<0x4002001C, 32, ReadWriteMode>
  {
    using CHEN = DMA1_CH1CTL_CHEN_Values<DMA1::CH1CTL, 0, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using FTFIE = DMA1_CH1CTL_FTFIE_Values<DMA1::CH1CTL, 1, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using HTFIE = DMA1_CH1CTL_HTFIE_Values<DMA1::CH1CTL, 2, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using ERRIE = DMA1_CH1CTL_ERRIE_Values<DMA1::CH1CTL, 3, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using DIR = DMA1_CH1CTL_DIR_Values<DMA1::CH1CTL, 4, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using CMEN = DMA1_CH1CTL_CMEN_Values<DMA1::CH1CTL, 5, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using PNAGA = DMA1_CH1CTL_PNAGA_Values<DMA1::CH1CTL, 6, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using MNAGA = DMA1_CH1CTL_MNAGA_Values<DMA1::CH1CTL, 7, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using PWIDTH = DMA1_CH1CTL_PWIDTH_Values<DMA1::CH1CTL, 8, 2, ReadWriteMode, DMA1CH1CTLBase> ;
    using MWIDTH = DMA1_CH1CTL_MWIDTH_Values<DMA1::CH1CTL, 10, 2, ReadWriteMode, DMA1CH1CTLBase> ;
    using PRIO = DMA1_CH1CTL_PRIO_Values<DMA1::CH1CTL, 12, 2, ReadWriteMode, DMA1CH1CTLBase> ;
    using M2M = DMA1_CH1CTL_M2M_Values<DMA1::CH1CTL, 14, 1, ReadWriteMode, DMA1CH1CTLBase> ;
    using FieldValues = DMA1_CH1CTL_M2M_Values<DMA1::CH1CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CTLPack  = Register<0x4002001C, 32, ReadWriteMode, DMA1CH1CTLBase, T...> ;

  struct DMA1CH1CNTBase {} ;

  struct CH1CNT : public RegisterBase<0x40020020, 32, ReadWriteMode>
  {
    using CNT = DMA1_CH1CNT_CNT_Values<DMA1::CH1CNT, 0, 16, ReadWriteMode, DMA1CH1CNTBase> ;
    using FieldValues = DMA1_CH1CNT_CNT_Values<DMA1::CH1CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CNTPack  = Register<0x40020020, 32, ReadWriteMode, DMA1CH1CNTBase, T...> ;

  struct DMA1CH1PADDRBase {} ;

  struct CH1PADDR : public RegisterBase<0x40020024, 32, ReadWriteMode>
  {
    using PADDR = DMA1_CH1PADDR_PADDR_Values<DMA1::CH1PADDR, 0, 32, ReadWriteMode, DMA1CH1PADDRBase> ;
    using FieldValues = DMA1_CH1PADDR_PADDR_Values<DMA1::CH1PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1PADDRPack  = Register<0x40020024, 32, ReadWriteMode, DMA1CH1PADDRBase, T...> ;

  struct DMA1CH1MADDRBase {} ;

  struct CH1MADDR : public RegisterBase<0x40020028, 32, ReadWriteMode>
  {
    using MADDR = DMA1_CH1MADDR_MADDR_Values<DMA1::CH1MADDR, 0, 32, ReadWriteMode, DMA1CH1MADDRBase> ;
    using FieldValues = DMA1_CH1MADDR_MADDR_Values<DMA1::CH1MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1MADDRPack  = Register<0x40020028, 32, ReadWriteMode, DMA1CH1MADDRBase, T...> ;

  struct DMA1CH2CTLBase {} ;

  struct CH2CTL : public RegisterBase<0x40020030, 32, ReadWriteMode>
  {
    using CHEN = DMA1_CH2CTL_CHEN_Values<DMA1::CH2CTL, 0, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using FTFIE = DMA1_CH2CTL_FTFIE_Values<DMA1::CH2CTL, 1, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using HTFIE = DMA1_CH2CTL_HTFIE_Values<DMA1::CH2CTL, 2, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using ERRIE = DMA1_CH2CTL_ERRIE_Values<DMA1::CH2CTL, 3, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using DIR = DMA1_CH2CTL_DIR_Values<DMA1::CH2CTL, 4, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using CMEN = DMA1_CH2CTL_CMEN_Values<DMA1::CH2CTL, 5, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using PNAGA = DMA1_CH2CTL_PNAGA_Values<DMA1::CH2CTL, 6, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using MNAGA = DMA1_CH2CTL_MNAGA_Values<DMA1::CH2CTL, 7, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using PWIDTH = DMA1_CH2CTL_PWIDTH_Values<DMA1::CH2CTL, 8, 2, ReadWriteMode, DMA1CH2CTLBase> ;
    using MWIDTH = DMA1_CH2CTL_MWIDTH_Values<DMA1::CH2CTL, 10, 2, ReadWriteMode, DMA1CH2CTLBase> ;
    using PRIO = DMA1_CH2CTL_PRIO_Values<DMA1::CH2CTL, 12, 2, ReadWriteMode, DMA1CH2CTLBase> ;
    using M2M = DMA1_CH2CTL_M2M_Values<DMA1::CH2CTL, 14, 1, ReadWriteMode, DMA1CH2CTLBase> ;
    using FieldValues = DMA1_CH2CTL_M2M_Values<DMA1::CH2CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CTLPack  = Register<0x40020030, 32, ReadWriteMode, DMA1CH2CTLBase, T...> ;

  struct DMA1CH2CNTBase {} ;

  struct CH2CNT : public RegisterBase<0x40020034, 32, ReadWriteMode>
  {
    using CNT = DMA1_CH2CNT_CNT_Values<DMA1::CH2CNT, 0, 16, ReadWriteMode, DMA1CH2CNTBase> ;
    using FieldValues = DMA1_CH2CNT_CNT_Values<DMA1::CH2CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CNTPack  = Register<0x40020034, 32, ReadWriteMode, DMA1CH2CNTBase, T...> ;

  struct DMA1CH2PADDRBase {} ;

  struct CH2PADDR : public RegisterBase<0x40020038, 32, ReadWriteMode>
  {
    using PADDR = DMA1_CH2PADDR_PADDR_Values<DMA1::CH2PADDR, 0, 32, ReadWriteMode, DMA1CH2PADDRBase> ;
    using FieldValues = DMA1_CH2PADDR_PADDR_Values<DMA1::CH2PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2PADDRPack  = Register<0x40020038, 32, ReadWriteMode, DMA1CH2PADDRBase, T...> ;

  struct DMA1CH2MADDRBase {} ;

  struct CH2MADDR : public RegisterBase<0x4002003C, 32, ReadWriteMode>
  {
    using MADDR = DMA1_CH2MADDR_MADDR_Values<DMA1::CH2MADDR, 0, 32, ReadWriteMode, DMA1CH2MADDRBase> ;
    using FieldValues = DMA1_CH2MADDR_MADDR_Values<DMA1::CH2MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2MADDRPack  = Register<0x4002003C, 32, ReadWriteMode, DMA1CH2MADDRBase, T...> ;

  struct DMA1CH3CTLBase {} ;

  struct CH3CTL : public RegisterBase<0x40020044, 32, ReadWriteMode>
  {
    using CHEN = DMA1_CH3CTL_CHEN_Values<DMA1::CH3CTL, 0, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using FTFIE = DMA1_CH3CTL_FTFIE_Values<DMA1::CH3CTL, 1, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using HTFIE = DMA1_CH3CTL_HTFIE_Values<DMA1::CH3CTL, 2, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using ERRIE = DMA1_CH3CTL_ERRIE_Values<DMA1::CH3CTL, 3, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using DIR = DMA1_CH3CTL_DIR_Values<DMA1::CH3CTL, 4, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using CMEN = DMA1_CH3CTL_CMEN_Values<DMA1::CH3CTL, 5, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using PNAGA = DMA1_CH3CTL_PNAGA_Values<DMA1::CH3CTL, 6, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using MNAGA = DMA1_CH3CTL_MNAGA_Values<DMA1::CH3CTL, 7, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using PWIDTH = DMA1_CH3CTL_PWIDTH_Values<DMA1::CH3CTL, 8, 2, ReadWriteMode, DMA1CH3CTLBase> ;
    using MWIDTH = DMA1_CH3CTL_MWIDTH_Values<DMA1::CH3CTL, 10, 2, ReadWriteMode, DMA1CH3CTLBase> ;
    using PRIO = DMA1_CH3CTL_PRIO_Values<DMA1::CH3CTL, 12, 2, ReadWriteMode, DMA1CH3CTLBase> ;
    using M2M = DMA1_CH3CTL_M2M_Values<DMA1::CH3CTL, 14, 1, ReadWriteMode, DMA1CH3CTLBase> ;
    using FieldValues = DMA1_CH3CTL_M2M_Values<DMA1::CH3CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CTLPack  = Register<0x40020044, 32, ReadWriteMode, DMA1CH3CTLBase, T...> ;

  struct DMA1CH3CNTBase {} ;

  struct CH3CNT : public RegisterBase<0x40020048, 32, ReadWriteMode>
  {
    using CNT = DMA1_CH3CNT_CNT_Values<DMA1::CH3CNT, 0, 16, ReadWriteMode, DMA1CH3CNTBase> ;
    using FieldValues = DMA1_CH3CNT_CNT_Values<DMA1::CH3CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CNTPack  = Register<0x40020048, 32, ReadWriteMode, DMA1CH3CNTBase, T...> ;

  struct DMA1CH3PADDRBase {} ;

  struct CH3PADDR : public RegisterBase<0x4002004C, 32, ReadWriteMode>
  {
    using PADDR = DMA1_CH3PADDR_PADDR_Values<DMA1::CH3PADDR, 0, 32, ReadWriteMode, DMA1CH3PADDRBase> ;
    using FieldValues = DMA1_CH3PADDR_PADDR_Values<DMA1::CH3PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3PADDRPack  = Register<0x4002004C, 32, ReadWriteMode, DMA1CH3PADDRBase, T...> ;

  struct DMA1CH3MADDRBase {} ;

  struct CH3MADDR : public RegisterBase<0x40020050, 32, ReadWriteMode>
  {
    using MADDR = DMA1_CH3MADDR_MADDR_Values<DMA1::CH3MADDR, 0, 32, ReadWriteMode, DMA1CH3MADDRBase> ;
    using FieldValues = DMA1_CH3MADDR_MADDR_Values<DMA1::CH3MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3MADDRPack  = Register<0x40020050, 32, ReadWriteMode, DMA1CH3MADDRBase, T...> ;

  struct DMA1CH4CTLBase {} ;

  struct CH4CTL : public RegisterBase<0x40020058, 32, ReadWriteMode>
  {
    using CHEN = DMA1_CH4CTL_CHEN_Values<DMA1::CH4CTL, 0, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using FTFIE = DMA1_CH4CTL_FTFIE_Values<DMA1::CH4CTL, 1, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using HTFIE = DMA1_CH4CTL_HTFIE_Values<DMA1::CH4CTL, 2, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using ERRIE = DMA1_CH4CTL_ERRIE_Values<DMA1::CH4CTL, 3, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using DIR = DMA1_CH4CTL_DIR_Values<DMA1::CH4CTL, 4, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using CMEN = DMA1_CH4CTL_CMEN_Values<DMA1::CH4CTL, 5, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using PNAGA = DMA1_CH4CTL_PNAGA_Values<DMA1::CH4CTL, 6, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using MNAGA = DMA1_CH4CTL_MNAGA_Values<DMA1::CH4CTL, 7, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using PWIDTH = DMA1_CH4CTL_PWIDTH_Values<DMA1::CH4CTL, 8, 2, ReadWriteMode, DMA1CH4CTLBase> ;
    using MWIDTH = DMA1_CH4CTL_MWIDTH_Values<DMA1::CH4CTL, 10, 2, ReadWriteMode, DMA1CH4CTLBase> ;
    using PRIO = DMA1_CH4CTL_PRIO_Values<DMA1::CH4CTL, 12, 2, ReadWriteMode, DMA1CH4CTLBase> ;
    using M2M = DMA1_CH4CTL_M2M_Values<DMA1::CH4CTL, 14, 1, ReadWriteMode, DMA1CH4CTLBase> ;
    using FieldValues = DMA1_CH4CTL_M2M_Values<DMA1::CH4CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CTLPack  = Register<0x40020058, 32, ReadWriteMode, DMA1CH4CTLBase, T...> ;

  struct DMA1CH4CNTBase {} ;

  struct CH4CNT : public RegisterBase<0x4002005C, 32, ReadWriteMode>
  {
    using CNT = DMA1_CH4CNT_CNT_Values<DMA1::CH4CNT, 0, 16, ReadWriteMode, DMA1CH4CNTBase> ;
    using FieldValues = DMA1_CH4CNT_CNT_Values<DMA1::CH4CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CNTPack  = Register<0x4002005C, 32, ReadWriteMode, DMA1CH4CNTBase, T...> ;

  struct DMA1CH4PADDRBase {} ;

  struct CH4PADDR : public RegisterBase<0x40020060, 32, ReadWriteMode>
  {
    using PADDR = DMA1_CH4PADDR_PADDR_Values<DMA1::CH4PADDR, 0, 32, ReadWriteMode, DMA1CH4PADDRBase> ;
    using FieldValues = DMA1_CH4PADDR_PADDR_Values<DMA1::CH4PADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4PADDRPack  = Register<0x40020060, 32, ReadWriteMode, DMA1CH4PADDRBase, T...> ;

  struct DMA1CH4MADDRBase {} ;

  struct CH4MADDR : public RegisterBase<0x40020064, 32, ReadWriteMode>
  {
    using MADDR = DMA1_CH4MADDR_MADDR_Values<DMA1::CH4MADDR, 0, 32, ReadWriteMode, DMA1CH4MADDRBase> ;
    using FieldValues = DMA1_CH4MADDR_MADDR_Values<DMA1::CH4MADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4MADDRPack  = Register<0x40020064, 32, ReadWriteMode, DMA1CH4MADDRBase, T...> ;

} ;

#endif //#if !defined(DMA1REGISTERS_HPP)
