/*******************************************************************************
* Filename      : mdrporteregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRPORTEREGISTERS_HPP)
#define MDRPORTEREGISTERS_HPP

#include "mdrportefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTE
{
  struct MDR_PORTERXTXBase {} ;

  struct RXTX : public RegisterBase<0x400C8000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_RXTX_Pin_%s_Values<MDR_PORTE::RXTX, 0, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using FieldValues = MDR_PORTE_RXTX_Pin_%s_Values<MDR_PORTE::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400C8000, 32, ReadWriteMode, MDR_PORTERXTXBase, T...> ;

  struct MDR_PORTEOEBase {} ;

  struct OE : public RegisterBase<0x400C8004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_OE_Pin_%s_Values<MDR_PORTE::OE, 0, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using FieldValues = MDR_PORTE_OE_Pin_%s_Values<MDR_PORTE::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400C8004, 32, ReadWriteMode, MDR_PORTEOEBase, T...> ;

  struct MDR_PORTEFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400C8008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_FUNC_Pin_%s_Values<MDR_PORTE::FUNC, 0, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using FieldValues = MDR_PORTE_FUNC_Pin_%s_Values<MDR_PORTE::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400C8008, 32, ReadWriteMode, MDR_PORTEFUNCBase, T...> ;

  struct MDR_PORTEANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400C800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_ANALOG_Pin_%s_Values<MDR_PORTE::ANALOG, 0, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using FieldValues = MDR_PORTE_ANALOG_Pin_%s_Values<MDR_PORTE::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400C800C, 32, ReadWriteMode, MDR_PORTEANALOGBase, T...> ;

  struct MDR_PORTEPULLBase {} ;

  struct PULL : public RegisterBase<0x400C8010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTE_PULL_Down_Pin_0_Values<MDR_PORTE::PULL, 0, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_1 = MDR_PORTE_PULL_Down_Pin_1_Values<MDR_PORTE::PULL, 1, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_2 = MDR_PORTE_PULL_Down_Pin_2_Values<MDR_PORTE::PULL, 2, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_3 = MDR_PORTE_PULL_Down_Pin_3_Values<MDR_PORTE::PULL, 3, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_4 = MDR_PORTE_PULL_Down_Pin_4_Values<MDR_PORTE::PULL, 4, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_5 = MDR_PORTE_PULL_Down_Pin_5_Values<MDR_PORTE::PULL, 5, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_6 = MDR_PORTE_PULL_Down_Pin_6_Values<MDR_PORTE::PULL, 6, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_7 = MDR_PORTE_PULL_Down_Pin_7_Values<MDR_PORTE::PULL, 7, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_8 = MDR_PORTE_PULL_Down_Pin_8_Values<MDR_PORTE::PULL, 8, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_9 = MDR_PORTE_PULL_Down_Pin_9_Values<MDR_PORTE::PULL, 9, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_10 = MDR_PORTE_PULL_Down_Pin_10_Values<MDR_PORTE::PULL, 10, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_11 = MDR_PORTE_PULL_Down_Pin_11_Values<MDR_PORTE::PULL, 11, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_12 = MDR_PORTE_PULL_Down_Pin_12_Values<MDR_PORTE::PULL, 12, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_13 = MDR_PORTE_PULL_Down_Pin_13_Values<MDR_PORTE::PULL, 13, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_14 = MDR_PORTE_PULL_Down_Pin_14_Values<MDR_PORTE::PULL, 14, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using Down_Pin_15 = MDR_PORTE_PULL_Down_Pin_15_Values<MDR_PORTE::PULL, 15, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_%s = MDR_PORTE_PULL_UP_Pin_%s_Values<MDR_PORTE::PULL, 16, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using FieldValues = MDR_PORTE_PULL_UP_Pin_%s_Values<MDR_PORTE::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400C8010, 32, ReadWriteMode, MDR_PORTEPULLBase, T...> ;

  struct MDR_PORTEPDBase {} ;

  struct PD : public RegisterBase<0x400C8014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTE_PD_Driver_Pin_0_Values<MDR_PORTE::PD, 0, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_1 = MDR_PORTE_PD_Driver_Pin_1_Values<MDR_PORTE::PD, 1, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_2 = MDR_PORTE_PD_Driver_Pin_2_Values<MDR_PORTE::PD, 2, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_3 = MDR_PORTE_PD_Driver_Pin_3_Values<MDR_PORTE::PD, 3, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_4 = MDR_PORTE_PD_Driver_Pin_4_Values<MDR_PORTE::PD, 4, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_5 = MDR_PORTE_PD_Driver_Pin_5_Values<MDR_PORTE::PD, 5, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_6 = MDR_PORTE_PD_Driver_Pin_6_Values<MDR_PORTE::PD, 6, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_7 = MDR_PORTE_PD_Driver_Pin_7_Values<MDR_PORTE::PD, 7, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_8 = MDR_PORTE_PD_Driver_Pin_8_Values<MDR_PORTE::PD, 8, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_9 = MDR_PORTE_PD_Driver_Pin_9_Values<MDR_PORTE::PD, 9, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_10 = MDR_PORTE_PD_Driver_Pin_10_Values<MDR_PORTE::PD, 10, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_11 = MDR_PORTE_PD_Driver_Pin_11_Values<MDR_PORTE::PD, 11, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_12 = MDR_PORTE_PD_Driver_Pin_12_Values<MDR_PORTE::PD, 12, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_13 = MDR_PORTE_PD_Driver_Pin_13_Values<MDR_PORTE::PD, 13, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_14 = MDR_PORTE_PD_Driver_Pin_14_Values<MDR_PORTE::PD, 14, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Driver_Pin_15 = MDR_PORTE_PD_Driver_Pin_15_Values<MDR_PORTE::PD, 15, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_%s = MDR_PORTE_PD_Schmitt_Pin_%s_Values<MDR_PORTE::PD, 16, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using FieldValues = MDR_PORTE_PD_Schmitt_Pin_%s_Values<MDR_PORTE::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400C8014, 32, ReadWriteMode, MDR_PORTEPDBase, T...> ;

  struct MDR_PORTEPWRBase {} ;

  struct PWR : public RegisterBase<0x400C8018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_PWR_Pin_%s_Values<MDR_PORTE::PWR, 0, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using FieldValues = MDR_PORTE_PWR_Pin_%s_Values<MDR_PORTE::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400C8018, 32, ReadWriteMode, MDR_PORTEPWRBase, T...> ;

  struct MDR_PORTEGFENBase {} ;

  struct GFEN : public RegisterBase<0x400C801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTE_GFEN_Pin_%s_Values<MDR_PORTE::GFEN, 0, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using FieldValues = MDR_PORTE_GFEN_Pin_%s_Values<MDR_PORTE::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400C801C, 32, ReadWriteMode, MDR_PORTEGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTEREGISTERS_HPP)
