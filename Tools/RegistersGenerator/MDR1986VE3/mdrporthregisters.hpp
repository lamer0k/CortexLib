/*******************************************************************************
* Filename      : mdrporthregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTHREGISTERS_HPP)
#define MDRPORTHREGISTERS_HPP

#include "mdrporthfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTH
{
  struct MDR_PORTHRXTXBase {} ;

  struct RXTX : public RegisterBase<0x40138000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_RXTX_Pin_%s_Values<MDR_PORTH::RXTX, 0, 1, ReadWriteMode, MDR_PORTHRXTXBase> ;
    using FieldValues = MDR_PORTH_RXTX_Pin_%s_Values<MDR_PORTH::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40138000, 32, ReadWriteMode, MDR_PORTHRXTXBase, T...> ;

  struct MDR_PORTHOEBase {} ;

  struct OE : public RegisterBase<0x40138004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_OE_Pin_%s_Values<MDR_PORTH::OE, 0, 1, ReadWriteMode, MDR_PORTHOEBase> ;
    using FieldValues = MDR_PORTH_OE_Pin_%s_Values<MDR_PORTH::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40138004, 32, ReadWriteMode, MDR_PORTHOEBase, T...> ;

  struct MDR_PORTHFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40138008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_FUNC_Pin_%s_Values<MDR_PORTH::FUNC, 0, 2, ReadWriteMode, MDR_PORTHFUNCBase> ;
    using FieldValues = MDR_PORTH_FUNC_Pin_%s_Values<MDR_PORTH::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40138008, 32, ReadWriteMode, MDR_PORTHFUNCBase, T...> ;

  struct MDR_PORTHANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4013800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_ANALOG_Pin_%s_Values<MDR_PORTH::ANALOG, 0, 1, ReadWriteMode, MDR_PORTHANALOGBase> ;
    using FieldValues = MDR_PORTH_ANALOG_Pin_%s_Values<MDR_PORTH::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4013800C, 32, ReadWriteMode, MDR_PORTHANALOGBase, T...> ;

  struct MDR_PORTHPULLBase {} ;

  struct PULL : public RegisterBase<0x40138010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTH_PULL_Down_Pin_0_Values<MDR_PORTH::PULL, 0, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_1 = MDR_PORTH_PULL_Down_Pin_1_Values<MDR_PORTH::PULL, 1, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_2 = MDR_PORTH_PULL_Down_Pin_2_Values<MDR_PORTH::PULL, 2, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_3 = MDR_PORTH_PULL_Down_Pin_3_Values<MDR_PORTH::PULL, 3, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_4 = MDR_PORTH_PULL_Down_Pin_4_Values<MDR_PORTH::PULL, 4, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_5 = MDR_PORTH_PULL_Down_Pin_5_Values<MDR_PORTH::PULL, 5, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_6 = MDR_PORTH_PULL_Down_Pin_6_Values<MDR_PORTH::PULL, 6, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_7 = MDR_PORTH_PULL_Down_Pin_7_Values<MDR_PORTH::PULL, 7, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_8 = MDR_PORTH_PULL_Down_Pin_8_Values<MDR_PORTH::PULL, 8, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_9 = MDR_PORTH_PULL_Down_Pin_9_Values<MDR_PORTH::PULL, 9, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_10 = MDR_PORTH_PULL_Down_Pin_10_Values<MDR_PORTH::PULL, 10, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_11 = MDR_PORTH_PULL_Down_Pin_11_Values<MDR_PORTH::PULL, 11, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_12 = MDR_PORTH_PULL_Down_Pin_12_Values<MDR_PORTH::PULL, 12, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_13 = MDR_PORTH_PULL_Down_Pin_13_Values<MDR_PORTH::PULL, 13, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_14 = MDR_PORTH_PULL_Down_Pin_14_Values<MDR_PORTH::PULL, 14, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using Down_Pin_15 = MDR_PORTH_PULL_Down_Pin_15_Values<MDR_PORTH::PULL, 15, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using UP_Pin_%s = MDR_PORTH_PULL_UP_Pin_%s_Values<MDR_PORTH::PULL, 16, 1, ReadWriteMode, MDR_PORTHPULLBase> ;
    using FieldValues = MDR_PORTH_PULL_UP_Pin_%s_Values<MDR_PORTH::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40138010, 32, ReadWriteMode, MDR_PORTHPULLBase, T...> ;

  struct MDR_PORTHPDBase {} ;

  struct PD : public RegisterBase<0x40138014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTH_PD_Driver_Pin_0_Values<MDR_PORTH::PD, 0, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_1 = MDR_PORTH_PD_Driver_Pin_1_Values<MDR_PORTH::PD, 1, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_2 = MDR_PORTH_PD_Driver_Pin_2_Values<MDR_PORTH::PD, 2, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_3 = MDR_PORTH_PD_Driver_Pin_3_Values<MDR_PORTH::PD, 3, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_4 = MDR_PORTH_PD_Driver_Pin_4_Values<MDR_PORTH::PD, 4, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_5 = MDR_PORTH_PD_Driver_Pin_5_Values<MDR_PORTH::PD, 5, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_6 = MDR_PORTH_PD_Driver_Pin_6_Values<MDR_PORTH::PD, 6, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_7 = MDR_PORTH_PD_Driver_Pin_7_Values<MDR_PORTH::PD, 7, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_8 = MDR_PORTH_PD_Driver_Pin_8_Values<MDR_PORTH::PD, 8, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_9 = MDR_PORTH_PD_Driver_Pin_9_Values<MDR_PORTH::PD, 9, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_10 = MDR_PORTH_PD_Driver_Pin_10_Values<MDR_PORTH::PD, 10, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_11 = MDR_PORTH_PD_Driver_Pin_11_Values<MDR_PORTH::PD, 11, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_12 = MDR_PORTH_PD_Driver_Pin_12_Values<MDR_PORTH::PD, 12, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_13 = MDR_PORTH_PD_Driver_Pin_13_Values<MDR_PORTH::PD, 13, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_14 = MDR_PORTH_PD_Driver_Pin_14_Values<MDR_PORTH::PD, 14, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Driver_Pin_15 = MDR_PORTH_PD_Driver_Pin_15_Values<MDR_PORTH::PD, 15, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using Schmitt_Pin_%s = MDR_PORTH_PD_Schmitt_Pin_%s_Values<MDR_PORTH::PD, 16, 1, ReadWriteMode, MDR_PORTHPDBase> ;
    using FieldValues = MDR_PORTH_PD_Schmitt_Pin_%s_Values<MDR_PORTH::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40138014, 32, ReadWriteMode, MDR_PORTHPDBase, T...> ;

  struct MDR_PORTHPWRBase {} ;

  struct PWR : public RegisterBase<0x40138018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_PWR_Pin_%s_Values<MDR_PORTH::PWR, 0, 2, ReadWriteMode, MDR_PORTHPWRBase> ;
    using FieldValues = MDR_PORTH_PWR_Pin_%s_Values<MDR_PORTH::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40138018, 32, ReadWriteMode, MDR_PORTHPWRBase, T...> ;

  struct MDR_PORTHGFENBase {} ;

  struct GFEN : public RegisterBase<0x4013801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_GFEN_Pin_%s_Values<MDR_PORTH::GFEN, 0, 1, ReadWriteMode, MDR_PORTHGFENBase> ;
    using FieldValues = MDR_PORTH_GFEN_Pin_%s_Values<MDR_PORTH::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4013801C, 32, ReadWriteMode, MDR_PORTHGFENBase, T...> ;

  struct MDR_PORTHSETTXBase {} ;

  struct SETTX : public RegisterBase<0x40138020, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_SETTX_Pin_%s_Values<MDR_PORTH::SETTX, 0, 1, ReadWriteMode, MDR_PORTHSETTXBase> ;
    using FieldValues = MDR_PORTH_SETTX_Pin_%s_Values<MDR_PORTH::SETTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SETTXPack  = Register<0x40138020, 32, ReadWriteMode, MDR_PORTHSETTXBase, T...> ;

  struct MDR_PORTHCLRTXBase {} ;

  struct CLRTX : public RegisterBase<0x40138024, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTH_CLRTX_Pin_%s_Values<MDR_PORTH::CLRTX, 0, 1, ReadWriteMode, MDR_PORTHCLRTXBase> ;
    using FieldValues = MDR_PORTH_CLRTX_Pin_%s_Values<MDR_PORTH::CLRTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLRTXPack  = Register<0x40138024, 32, ReadWriteMode, MDR_PORTHCLRTXBase, T...> ;

  struct MDR_PORTHRDTXBase {} ;

  struct RDTX : public RegisterBase<0x40138028, 32, ReadMode>
  {
    using Pin_%s = MDR_PORTH_RDTX_Pin_%s_Values<MDR_PORTH::RDTX, 0, 1, ReadMode, MDR_PORTHRDTXBase> ;
    using FieldValues = MDR_PORTH_RDTX_Pin_%s_Values<MDR_PORTH::RDTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDTXPack  = Register<0x40138028, 32, ReadMode, MDR_PORTHRDTXBase, T...> ;

} ;

#endif //#if !defined(MDRPORTHREGISTERS_HPP)
