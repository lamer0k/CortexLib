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
    using Pin_0 = MDR_PORTE_RXTX_Pin_0_Values<MDR_PORTE::RXTX, 0, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_1 = MDR_PORTE_RXTX_Pin_1_Values<MDR_PORTE::RXTX, 1, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_2 = MDR_PORTE_RXTX_Pin_2_Values<MDR_PORTE::RXTX, 2, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_3 = MDR_PORTE_RXTX_Pin_3_Values<MDR_PORTE::RXTX, 3, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_4 = MDR_PORTE_RXTX_Pin_4_Values<MDR_PORTE::RXTX, 4, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_5 = MDR_PORTE_RXTX_Pin_5_Values<MDR_PORTE::RXTX, 5, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_6 = MDR_PORTE_RXTX_Pin_6_Values<MDR_PORTE::RXTX, 6, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_7 = MDR_PORTE_RXTX_Pin_7_Values<MDR_PORTE::RXTX, 7, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_8 = MDR_PORTE_RXTX_Pin_8_Values<MDR_PORTE::RXTX, 8, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_9 = MDR_PORTE_RXTX_Pin_9_Values<MDR_PORTE::RXTX, 9, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_10 = MDR_PORTE_RXTX_Pin_10_Values<MDR_PORTE::RXTX, 10, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_11 = MDR_PORTE_RXTX_Pin_11_Values<MDR_PORTE::RXTX, 11, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_12 = MDR_PORTE_RXTX_Pin_12_Values<MDR_PORTE::RXTX, 12, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_13 = MDR_PORTE_RXTX_Pin_13_Values<MDR_PORTE::RXTX, 13, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_14 = MDR_PORTE_RXTX_Pin_14_Values<MDR_PORTE::RXTX, 14, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using Pin_15 = MDR_PORTE_RXTX_Pin_15_Values<MDR_PORTE::RXTX, 15, 1, ReadWriteMode, MDR_PORTERXTXBase> ;
    using FieldValues = MDR_PORTE_RXTX_Pin_15_Values<MDR_PORTE::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400C8000, 32, ReadWriteMode, MDR_PORTERXTXBase, T...> ;

  struct MDR_PORTEOEBase {} ;

  struct OE : public RegisterBase<0x400C8004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTE_OE_Pin_0_Values<MDR_PORTE::OE, 0, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_1 = MDR_PORTE_OE_Pin_1_Values<MDR_PORTE::OE, 1, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_2 = MDR_PORTE_OE_Pin_2_Values<MDR_PORTE::OE, 2, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_3 = MDR_PORTE_OE_Pin_3_Values<MDR_PORTE::OE, 3, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_4 = MDR_PORTE_OE_Pin_4_Values<MDR_PORTE::OE, 4, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_5 = MDR_PORTE_OE_Pin_5_Values<MDR_PORTE::OE, 5, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_6 = MDR_PORTE_OE_Pin_6_Values<MDR_PORTE::OE, 6, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_7 = MDR_PORTE_OE_Pin_7_Values<MDR_PORTE::OE, 7, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_8 = MDR_PORTE_OE_Pin_8_Values<MDR_PORTE::OE, 8, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_9 = MDR_PORTE_OE_Pin_9_Values<MDR_PORTE::OE, 9, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_10 = MDR_PORTE_OE_Pin_10_Values<MDR_PORTE::OE, 10, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_11 = MDR_PORTE_OE_Pin_11_Values<MDR_PORTE::OE, 11, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_12 = MDR_PORTE_OE_Pin_12_Values<MDR_PORTE::OE, 12, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_13 = MDR_PORTE_OE_Pin_13_Values<MDR_PORTE::OE, 13, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_14 = MDR_PORTE_OE_Pin_14_Values<MDR_PORTE::OE, 14, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using Pin_15 = MDR_PORTE_OE_Pin_15_Values<MDR_PORTE::OE, 15, 1, ReadWriteMode, MDR_PORTEOEBase> ;
    using FieldValues = MDR_PORTE_OE_Pin_15_Values<MDR_PORTE::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400C8004, 32, ReadWriteMode, MDR_PORTEOEBase, T...> ;

  struct MDR_PORTEFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400C8008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTE_FUNC_Pin_0_Values<MDR_PORTE::FUNC, 0, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_1 = MDR_PORTE_FUNC_Pin_1_Values<MDR_PORTE::FUNC, 2, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_2 = MDR_PORTE_FUNC_Pin_2_Values<MDR_PORTE::FUNC, 4, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_3 = MDR_PORTE_FUNC_Pin_3_Values<MDR_PORTE::FUNC, 6, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_4 = MDR_PORTE_FUNC_Pin_4_Values<MDR_PORTE::FUNC, 8, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_5 = MDR_PORTE_FUNC_Pin_5_Values<MDR_PORTE::FUNC, 10, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_6 = MDR_PORTE_FUNC_Pin_6_Values<MDR_PORTE::FUNC, 12, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_7 = MDR_PORTE_FUNC_Pin_7_Values<MDR_PORTE::FUNC, 14, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_8 = MDR_PORTE_FUNC_Pin_8_Values<MDR_PORTE::FUNC, 16, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_9 = MDR_PORTE_FUNC_Pin_9_Values<MDR_PORTE::FUNC, 18, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_10 = MDR_PORTE_FUNC_Pin_10_Values<MDR_PORTE::FUNC, 20, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_11 = MDR_PORTE_FUNC_Pin_11_Values<MDR_PORTE::FUNC, 22, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_12 = MDR_PORTE_FUNC_Pin_12_Values<MDR_PORTE::FUNC, 24, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_13 = MDR_PORTE_FUNC_Pin_13_Values<MDR_PORTE::FUNC, 26, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_14 = MDR_PORTE_FUNC_Pin_14_Values<MDR_PORTE::FUNC, 28, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using Pin_15 = MDR_PORTE_FUNC_Pin_15_Values<MDR_PORTE::FUNC, 30, 2, ReadWriteMode, MDR_PORTEFUNCBase> ;
    using FieldValues = MDR_PORTE_FUNC_Pin_15_Values<MDR_PORTE::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400C8008, 32, ReadWriteMode, MDR_PORTEFUNCBase, T...> ;

  struct MDR_PORTEANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400C800C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTE_ANALOG_Pin_0_Values<MDR_PORTE::ANALOG, 0, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_1 = MDR_PORTE_ANALOG_Pin_1_Values<MDR_PORTE::ANALOG, 1, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_2 = MDR_PORTE_ANALOG_Pin_2_Values<MDR_PORTE::ANALOG, 2, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_3 = MDR_PORTE_ANALOG_Pin_3_Values<MDR_PORTE::ANALOG, 3, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_4 = MDR_PORTE_ANALOG_Pin_4_Values<MDR_PORTE::ANALOG, 4, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_5 = MDR_PORTE_ANALOG_Pin_5_Values<MDR_PORTE::ANALOG, 5, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_6 = MDR_PORTE_ANALOG_Pin_6_Values<MDR_PORTE::ANALOG, 6, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_7 = MDR_PORTE_ANALOG_Pin_7_Values<MDR_PORTE::ANALOG, 7, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_8 = MDR_PORTE_ANALOG_Pin_8_Values<MDR_PORTE::ANALOG, 8, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_9 = MDR_PORTE_ANALOG_Pin_9_Values<MDR_PORTE::ANALOG, 9, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_10 = MDR_PORTE_ANALOG_Pin_10_Values<MDR_PORTE::ANALOG, 10, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_11 = MDR_PORTE_ANALOG_Pin_11_Values<MDR_PORTE::ANALOG, 11, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_12 = MDR_PORTE_ANALOG_Pin_12_Values<MDR_PORTE::ANALOG, 12, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_13 = MDR_PORTE_ANALOG_Pin_13_Values<MDR_PORTE::ANALOG, 13, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_14 = MDR_PORTE_ANALOG_Pin_14_Values<MDR_PORTE::ANALOG, 14, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using Pin_15 = MDR_PORTE_ANALOG_Pin_15_Values<MDR_PORTE::ANALOG, 15, 1, ReadWriteMode, MDR_PORTEANALOGBase> ;
    using FieldValues = MDR_PORTE_ANALOG_Pin_15_Values<MDR_PORTE::ANALOG, 0, 0, NoAccess, NoAccess> ;
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
    using UP_Pin_0 = MDR_PORTE_PULL_UP_Pin_0_Values<MDR_PORTE::PULL, 16, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_1 = MDR_PORTE_PULL_UP_Pin_1_Values<MDR_PORTE::PULL, 17, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_2 = MDR_PORTE_PULL_UP_Pin_2_Values<MDR_PORTE::PULL, 18, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_3 = MDR_PORTE_PULL_UP_Pin_3_Values<MDR_PORTE::PULL, 19, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_4 = MDR_PORTE_PULL_UP_Pin_4_Values<MDR_PORTE::PULL, 20, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_5 = MDR_PORTE_PULL_UP_Pin_5_Values<MDR_PORTE::PULL, 21, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_6 = MDR_PORTE_PULL_UP_Pin_6_Values<MDR_PORTE::PULL, 22, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_7 = MDR_PORTE_PULL_UP_Pin_7_Values<MDR_PORTE::PULL, 23, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_8 = MDR_PORTE_PULL_UP_Pin_8_Values<MDR_PORTE::PULL, 24, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_9 = MDR_PORTE_PULL_UP_Pin_9_Values<MDR_PORTE::PULL, 25, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_10 = MDR_PORTE_PULL_UP_Pin_10_Values<MDR_PORTE::PULL, 26, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_11 = MDR_PORTE_PULL_UP_Pin_11_Values<MDR_PORTE::PULL, 27, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_12 = MDR_PORTE_PULL_UP_Pin_12_Values<MDR_PORTE::PULL, 28, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_13 = MDR_PORTE_PULL_UP_Pin_13_Values<MDR_PORTE::PULL, 29, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_14 = MDR_PORTE_PULL_UP_Pin_14_Values<MDR_PORTE::PULL, 30, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using UP_Pin_15 = MDR_PORTE_PULL_UP_Pin_15_Values<MDR_PORTE::PULL, 31, 1, ReadWriteMode, MDR_PORTEPULLBase> ;
    using FieldValues = MDR_PORTE_PULL_UP_Pin_15_Values<MDR_PORTE::PULL, 0, 0, NoAccess, NoAccess> ;
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
    using Schmitt_Pin_0 = MDR_PORTE_PD_Schmitt_Pin_0_Values<MDR_PORTE::PD, 16, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTE_PD_Schmitt_Pin_1_Values<MDR_PORTE::PD, 17, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTE_PD_Schmitt_Pin_2_Values<MDR_PORTE::PD, 18, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTE_PD_Schmitt_Pin_3_Values<MDR_PORTE::PD, 19, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTE_PD_Schmitt_Pin_4_Values<MDR_PORTE::PD, 20, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTE_PD_Schmitt_Pin_5_Values<MDR_PORTE::PD, 21, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTE_PD_Schmitt_Pin_6_Values<MDR_PORTE::PD, 22, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTE_PD_Schmitt_Pin_7_Values<MDR_PORTE::PD, 23, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTE_PD_Schmitt_Pin_8_Values<MDR_PORTE::PD, 24, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTE_PD_Schmitt_Pin_9_Values<MDR_PORTE::PD, 25, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTE_PD_Schmitt_Pin_10_Values<MDR_PORTE::PD, 26, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTE_PD_Schmitt_Pin_11_Values<MDR_PORTE::PD, 27, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTE_PD_Schmitt_Pin_12_Values<MDR_PORTE::PD, 28, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTE_PD_Schmitt_Pin_13_Values<MDR_PORTE::PD, 29, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTE_PD_Schmitt_Pin_14_Values<MDR_PORTE::PD, 30, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTE_PD_Schmitt_Pin_15_Values<MDR_PORTE::PD, 31, 1, ReadWriteMode, MDR_PORTEPDBase> ;
    using FieldValues = MDR_PORTE_PD_Schmitt_Pin_15_Values<MDR_PORTE::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400C8014, 32, ReadWriteMode, MDR_PORTEPDBase, T...> ;

  struct MDR_PORTEPWRBase {} ;

  struct PWR : public RegisterBase<0x400C8018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTE_PWR_Pin_0_Values<MDR_PORTE::PWR, 0, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_1 = MDR_PORTE_PWR_Pin_1_Values<MDR_PORTE::PWR, 2, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_2 = MDR_PORTE_PWR_Pin_2_Values<MDR_PORTE::PWR, 4, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_3 = MDR_PORTE_PWR_Pin_3_Values<MDR_PORTE::PWR, 6, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_4 = MDR_PORTE_PWR_Pin_4_Values<MDR_PORTE::PWR, 8, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_5 = MDR_PORTE_PWR_Pin_5_Values<MDR_PORTE::PWR, 10, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_6 = MDR_PORTE_PWR_Pin_6_Values<MDR_PORTE::PWR, 12, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_7 = MDR_PORTE_PWR_Pin_7_Values<MDR_PORTE::PWR, 14, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_8 = MDR_PORTE_PWR_Pin_8_Values<MDR_PORTE::PWR, 16, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_9 = MDR_PORTE_PWR_Pin_9_Values<MDR_PORTE::PWR, 18, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_10 = MDR_PORTE_PWR_Pin_10_Values<MDR_PORTE::PWR, 20, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_11 = MDR_PORTE_PWR_Pin_11_Values<MDR_PORTE::PWR, 22, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_12 = MDR_PORTE_PWR_Pin_12_Values<MDR_PORTE::PWR, 24, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_13 = MDR_PORTE_PWR_Pin_13_Values<MDR_PORTE::PWR, 26, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_14 = MDR_PORTE_PWR_Pin_14_Values<MDR_PORTE::PWR, 28, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using Pin_15 = MDR_PORTE_PWR_Pin_15_Values<MDR_PORTE::PWR, 30, 2, ReadWriteMode, MDR_PORTEPWRBase> ;
    using FieldValues = MDR_PORTE_PWR_Pin_15_Values<MDR_PORTE::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400C8018, 32, ReadWriteMode, MDR_PORTEPWRBase, T...> ;

  struct MDR_PORTEGFENBase {} ;

  struct GFEN : public RegisterBase<0x400C801C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTE_GFEN_Pin_0_Values<MDR_PORTE::GFEN, 0, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_1 = MDR_PORTE_GFEN_Pin_1_Values<MDR_PORTE::GFEN, 1, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_2 = MDR_PORTE_GFEN_Pin_2_Values<MDR_PORTE::GFEN, 2, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_3 = MDR_PORTE_GFEN_Pin_3_Values<MDR_PORTE::GFEN, 3, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_4 = MDR_PORTE_GFEN_Pin_4_Values<MDR_PORTE::GFEN, 4, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_5 = MDR_PORTE_GFEN_Pin_5_Values<MDR_PORTE::GFEN, 5, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_6 = MDR_PORTE_GFEN_Pin_6_Values<MDR_PORTE::GFEN, 6, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_7 = MDR_PORTE_GFEN_Pin_7_Values<MDR_PORTE::GFEN, 7, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_8 = MDR_PORTE_GFEN_Pin_8_Values<MDR_PORTE::GFEN, 8, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_9 = MDR_PORTE_GFEN_Pin_9_Values<MDR_PORTE::GFEN, 9, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_10 = MDR_PORTE_GFEN_Pin_10_Values<MDR_PORTE::GFEN, 10, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_11 = MDR_PORTE_GFEN_Pin_11_Values<MDR_PORTE::GFEN, 11, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_12 = MDR_PORTE_GFEN_Pin_12_Values<MDR_PORTE::GFEN, 12, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_13 = MDR_PORTE_GFEN_Pin_13_Values<MDR_PORTE::GFEN, 13, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_14 = MDR_PORTE_GFEN_Pin_14_Values<MDR_PORTE::GFEN, 14, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using Pin_15 = MDR_PORTE_GFEN_Pin_15_Values<MDR_PORTE::GFEN, 15, 1, ReadWriteMode, MDR_PORTEGFENBase> ;
    using FieldValues = MDR_PORTE_GFEN_Pin_15_Values<MDR_PORTE::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400C801C, 32, ReadWriteMode, MDR_PORTEGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTEREGISTERS_HPP)
