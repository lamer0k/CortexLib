/*******************************************************************************
* Filename      : mdrportgregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTGREGISTERS_HPP)
#define MDRPORTGREGISTERS_HPP

#include "mdrportgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTG
{
  struct MDR_PORTGRXTXBase {} ;

  struct RXTX : public RegisterBase<0x40118000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_RXTX_Pin_%s_Values<MDR_PORTG::RXTX, 0, 1, ReadWriteMode, MDR_PORTGRXTXBase> ;
    using FieldValues = MDR_PORTG_RXTX_Pin_%s_Values<MDR_PORTG::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40118000, 32, ReadWriteMode, MDR_PORTGRXTXBase, T...> ;

  struct MDR_PORTGOEBase {} ;

  struct OE : public RegisterBase<0x40118004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_OE_Pin_%s_Values<MDR_PORTG::OE, 0, 1, ReadWriteMode, MDR_PORTGOEBase> ;
    using FieldValues = MDR_PORTG_OE_Pin_%s_Values<MDR_PORTG::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40118004, 32, ReadWriteMode, MDR_PORTGOEBase, T...> ;

  struct MDR_PORTGFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40118008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_FUNC_Pin_%s_Values<MDR_PORTG::FUNC, 0, 2, ReadWriteMode, MDR_PORTGFUNCBase> ;
    using FieldValues = MDR_PORTG_FUNC_Pin_%s_Values<MDR_PORTG::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40118008, 32, ReadWriteMode, MDR_PORTGFUNCBase, T...> ;

  struct MDR_PORTGANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4011800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_ANALOG_Pin_%s_Values<MDR_PORTG::ANALOG, 0, 1, ReadWriteMode, MDR_PORTGANALOGBase> ;
    using FieldValues = MDR_PORTG_ANALOG_Pin_%s_Values<MDR_PORTG::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4011800C, 32, ReadWriteMode, MDR_PORTGANALOGBase, T...> ;

  struct MDR_PORTGPULLBase {} ;

  struct PULL : public RegisterBase<0x40118010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTG_PULL_Down_Pin_0_Values<MDR_PORTG::PULL, 0, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_1 = MDR_PORTG_PULL_Down_Pin_1_Values<MDR_PORTG::PULL, 1, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_2 = MDR_PORTG_PULL_Down_Pin_2_Values<MDR_PORTG::PULL, 2, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_3 = MDR_PORTG_PULL_Down_Pin_3_Values<MDR_PORTG::PULL, 3, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_4 = MDR_PORTG_PULL_Down_Pin_4_Values<MDR_PORTG::PULL, 4, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_5 = MDR_PORTG_PULL_Down_Pin_5_Values<MDR_PORTG::PULL, 5, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_6 = MDR_PORTG_PULL_Down_Pin_6_Values<MDR_PORTG::PULL, 6, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_7 = MDR_PORTG_PULL_Down_Pin_7_Values<MDR_PORTG::PULL, 7, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_8 = MDR_PORTG_PULL_Down_Pin_8_Values<MDR_PORTG::PULL, 8, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_9 = MDR_PORTG_PULL_Down_Pin_9_Values<MDR_PORTG::PULL, 9, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_10 = MDR_PORTG_PULL_Down_Pin_10_Values<MDR_PORTG::PULL, 10, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_11 = MDR_PORTG_PULL_Down_Pin_11_Values<MDR_PORTG::PULL, 11, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_12 = MDR_PORTG_PULL_Down_Pin_12_Values<MDR_PORTG::PULL, 12, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_13 = MDR_PORTG_PULL_Down_Pin_13_Values<MDR_PORTG::PULL, 13, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_14 = MDR_PORTG_PULL_Down_Pin_14_Values<MDR_PORTG::PULL, 14, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using Down_Pin_15 = MDR_PORTG_PULL_Down_Pin_15_Values<MDR_PORTG::PULL, 15, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using UP_Pin_%s = MDR_PORTG_PULL_UP_Pin_%s_Values<MDR_PORTG::PULL, 16, 1, ReadWriteMode, MDR_PORTGPULLBase> ;
    using FieldValues = MDR_PORTG_PULL_UP_Pin_%s_Values<MDR_PORTG::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40118010, 32, ReadWriteMode, MDR_PORTGPULLBase, T...> ;

  struct MDR_PORTGPDBase {} ;

  struct PD : public RegisterBase<0x40118014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTG_PD_Driver_Pin_0_Values<MDR_PORTG::PD, 0, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_1 = MDR_PORTG_PD_Driver_Pin_1_Values<MDR_PORTG::PD, 1, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_2 = MDR_PORTG_PD_Driver_Pin_2_Values<MDR_PORTG::PD, 2, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_3 = MDR_PORTG_PD_Driver_Pin_3_Values<MDR_PORTG::PD, 3, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_4 = MDR_PORTG_PD_Driver_Pin_4_Values<MDR_PORTG::PD, 4, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_5 = MDR_PORTG_PD_Driver_Pin_5_Values<MDR_PORTG::PD, 5, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_6 = MDR_PORTG_PD_Driver_Pin_6_Values<MDR_PORTG::PD, 6, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_7 = MDR_PORTG_PD_Driver_Pin_7_Values<MDR_PORTG::PD, 7, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_8 = MDR_PORTG_PD_Driver_Pin_8_Values<MDR_PORTG::PD, 8, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_9 = MDR_PORTG_PD_Driver_Pin_9_Values<MDR_PORTG::PD, 9, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_10 = MDR_PORTG_PD_Driver_Pin_10_Values<MDR_PORTG::PD, 10, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_11 = MDR_PORTG_PD_Driver_Pin_11_Values<MDR_PORTG::PD, 11, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_12 = MDR_PORTG_PD_Driver_Pin_12_Values<MDR_PORTG::PD, 12, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_13 = MDR_PORTG_PD_Driver_Pin_13_Values<MDR_PORTG::PD, 13, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_14 = MDR_PORTG_PD_Driver_Pin_14_Values<MDR_PORTG::PD, 14, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Driver_Pin_15 = MDR_PORTG_PD_Driver_Pin_15_Values<MDR_PORTG::PD, 15, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using Schmitt_Pin_%s = MDR_PORTG_PD_Schmitt_Pin_%s_Values<MDR_PORTG::PD, 16, 1, ReadWriteMode, MDR_PORTGPDBase> ;
    using FieldValues = MDR_PORTG_PD_Schmitt_Pin_%s_Values<MDR_PORTG::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40118014, 32, ReadWriteMode, MDR_PORTGPDBase, T...> ;

  struct MDR_PORTGPWRBase {} ;

  struct PWR : public RegisterBase<0x40118018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_PWR_Pin_%s_Values<MDR_PORTG::PWR, 0, 2, ReadWriteMode, MDR_PORTGPWRBase> ;
    using FieldValues = MDR_PORTG_PWR_Pin_%s_Values<MDR_PORTG::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40118018, 32, ReadWriteMode, MDR_PORTGPWRBase, T...> ;

  struct MDR_PORTGGFENBase {} ;

  struct GFEN : public RegisterBase<0x4011801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_GFEN_Pin_%s_Values<MDR_PORTG::GFEN, 0, 1, ReadWriteMode, MDR_PORTGGFENBase> ;
    using FieldValues = MDR_PORTG_GFEN_Pin_%s_Values<MDR_PORTG::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4011801C, 32, ReadWriteMode, MDR_PORTGGFENBase, T...> ;

  struct MDR_PORTGSETTXBase {} ;

  struct SETTX : public RegisterBase<0x40118020, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_SETTX_Pin_%s_Values<MDR_PORTG::SETTX, 0, 1, ReadWriteMode, MDR_PORTGSETTXBase> ;
    using FieldValues = MDR_PORTG_SETTX_Pin_%s_Values<MDR_PORTG::SETTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SETTXPack  = Register<0x40118020, 32, ReadWriteMode, MDR_PORTGSETTXBase, T...> ;

  struct MDR_PORTGCLRTXBase {} ;

  struct CLRTX : public RegisterBase<0x40118024, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTG_CLRTX_Pin_%s_Values<MDR_PORTG::CLRTX, 0, 1, ReadWriteMode, MDR_PORTGCLRTXBase> ;
    using FieldValues = MDR_PORTG_CLRTX_Pin_%s_Values<MDR_PORTG::CLRTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLRTXPack  = Register<0x40118024, 32, ReadWriteMode, MDR_PORTGCLRTXBase, T...> ;

  struct MDR_PORTGRDTXBase {} ;

  struct RDTX : public RegisterBase<0x40118028, 32, ReadMode>
  {
    using Pin_%s = MDR_PORTG_RDTX_Pin_%s_Values<MDR_PORTG::RDTX, 0, 1, ReadMode, MDR_PORTGRDTXBase> ;
    using FieldValues = MDR_PORTG_RDTX_Pin_%s_Values<MDR_PORTG::RDTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDTXPack  = Register<0x40118028, 32, ReadMode, MDR_PORTGRDTXBase, T...> ;

} ;

#endif //#if !defined(MDRPORTGREGISTERS_HPP)
