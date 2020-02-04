/*******************************************************************************
* Filename      : mdrportbregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTBREGISTERS_HPP)
#define MDRPORTBREGISTERS_HPP

#include "mdrportbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTB
{
  struct MDR_PORTBRXTXBase {} ;

  struct RXTX : public RegisterBase<0x40088000, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_RXTX_Pin_0_Values<MDR_PORTB::RXTX, 0, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_1 = MDR_PORTB_RXTX_Pin_1_Values<MDR_PORTB::RXTX, 1, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_2 = MDR_PORTB_RXTX_Pin_2_Values<MDR_PORTB::RXTX, 2, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_3 = MDR_PORTB_RXTX_Pin_3_Values<MDR_PORTB::RXTX, 3, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_4 = MDR_PORTB_RXTX_Pin_4_Values<MDR_PORTB::RXTX, 4, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_5 = MDR_PORTB_RXTX_Pin_5_Values<MDR_PORTB::RXTX, 5, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_6 = MDR_PORTB_RXTX_Pin_6_Values<MDR_PORTB::RXTX, 6, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_7 = MDR_PORTB_RXTX_Pin_7_Values<MDR_PORTB::RXTX, 7, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_8 = MDR_PORTB_RXTX_Pin_8_Values<MDR_PORTB::RXTX, 8, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_9 = MDR_PORTB_RXTX_Pin_9_Values<MDR_PORTB::RXTX, 9, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_10 = MDR_PORTB_RXTX_Pin_10_Values<MDR_PORTB::RXTX, 10, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_11 = MDR_PORTB_RXTX_Pin_11_Values<MDR_PORTB::RXTX, 11, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_12 = MDR_PORTB_RXTX_Pin_12_Values<MDR_PORTB::RXTX, 12, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_13 = MDR_PORTB_RXTX_Pin_13_Values<MDR_PORTB::RXTX, 13, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_14 = MDR_PORTB_RXTX_Pin_14_Values<MDR_PORTB::RXTX, 14, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using Pin_15 = MDR_PORTB_RXTX_Pin_15_Values<MDR_PORTB::RXTX, 15, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using FieldValues = MDR_PORTB_RXTX_Pin_15_Values<MDR_PORTB::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40088000, 32, ReadWriteMode, MDR_PORTBRXTXBase, T...> ;

  struct MDR_PORTBOEBase {} ;

  struct OE : public RegisterBase<0x40088004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_OE_Pin_0_Values<MDR_PORTB::OE, 0, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_1 = MDR_PORTB_OE_Pin_1_Values<MDR_PORTB::OE, 1, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_2 = MDR_PORTB_OE_Pin_2_Values<MDR_PORTB::OE, 2, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_3 = MDR_PORTB_OE_Pin_3_Values<MDR_PORTB::OE, 3, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_4 = MDR_PORTB_OE_Pin_4_Values<MDR_PORTB::OE, 4, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_5 = MDR_PORTB_OE_Pin_5_Values<MDR_PORTB::OE, 5, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_6 = MDR_PORTB_OE_Pin_6_Values<MDR_PORTB::OE, 6, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_7 = MDR_PORTB_OE_Pin_7_Values<MDR_PORTB::OE, 7, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_8 = MDR_PORTB_OE_Pin_8_Values<MDR_PORTB::OE, 8, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_9 = MDR_PORTB_OE_Pin_9_Values<MDR_PORTB::OE, 9, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_10 = MDR_PORTB_OE_Pin_10_Values<MDR_PORTB::OE, 10, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_11 = MDR_PORTB_OE_Pin_11_Values<MDR_PORTB::OE, 11, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_12 = MDR_PORTB_OE_Pin_12_Values<MDR_PORTB::OE, 12, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_13 = MDR_PORTB_OE_Pin_13_Values<MDR_PORTB::OE, 13, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_14 = MDR_PORTB_OE_Pin_14_Values<MDR_PORTB::OE, 14, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using Pin_15 = MDR_PORTB_OE_Pin_15_Values<MDR_PORTB::OE, 15, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using FieldValues = MDR_PORTB_OE_Pin_15_Values<MDR_PORTB::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40088004, 32, ReadWriteMode, MDR_PORTBOEBase, T...> ;

  struct MDR_PORTBFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40088008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_FUNC_Pin_0_Values<MDR_PORTB::FUNC, 0, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_1 = MDR_PORTB_FUNC_Pin_1_Values<MDR_PORTB::FUNC, 2, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_2 = MDR_PORTB_FUNC_Pin_2_Values<MDR_PORTB::FUNC, 4, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_3 = MDR_PORTB_FUNC_Pin_3_Values<MDR_PORTB::FUNC, 6, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_4 = MDR_PORTB_FUNC_Pin_4_Values<MDR_PORTB::FUNC, 8, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_5 = MDR_PORTB_FUNC_Pin_5_Values<MDR_PORTB::FUNC, 10, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_6 = MDR_PORTB_FUNC_Pin_6_Values<MDR_PORTB::FUNC, 12, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_7 = MDR_PORTB_FUNC_Pin_7_Values<MDR_PORTB::FUNC, 14, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_8 = MDR_PORTB_FUNC_Pin_8_Values<MDR_PORTB::FUNC, 16, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_9 = MDR_PORTB_FUNC_Pin_9_Values<MDR_PORTB::FUNC, 18, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_10 = MDR_PORTB_FUNC_Pin_10_Values<MDR_PORTB::FUNC, 20, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_11 = MDR_PORTB_FUNC_Pin_11_Values<MDR_PORTB::FUNC, 22, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_12 = MDR_PORTB_FUNC_Pin_12_Values<MDR_PORTB::FUNC, 24, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_13 = MDR_PORTB_FUNC_Pin_13_Values<MDR_PORTB::FUNC, 26, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_14 = MDR_PORTB_FUNC_Pin_14_Values<MDR_PORTB::FUNC, 28, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using Pin_15 = MDR_PORTB_FUNC_Pin_15_Values<MDR_PORTB::FUNC, 30, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using FieldValues = MDR_PORTB_FUNC_Pin_15_Values<MDR_PORTB::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40088008, 32, ReadWriteMode, MDR_PORTBFUNCBase, T...> ;

  struct MDR_PORTBANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4008800C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_ANALOG_Pin_0_Values<MDR_PORTB::ANALOG, 0, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_1 = MDR_PORTB_ANALOG_Pin_1_Values<MDR_PORTB::ANALOG, 1, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_2 = MDR_PORTB_ANALOG_Pin_2_Values<MDR_PORTB::ANALOG, 2, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_3 = MDR_PORTB_ANALOG_Pin_3_Values<MDR_PORTB::ANALOG, 3, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_4 = MDR_PORTB_ANALOG_Pin_4_Values<MDR_PORTB::ANALOG, 4, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_5 = MDR_PORTB_ANALOG_Pin_5_Values<MDR_PORTB::ANALOG, 5, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_6 = MDR_PORTB_ANALOG_Pin_6_Values<MDR_PORTB::ANALOG, 6, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_7 = MDR_PORTB_ANALOG_Pin_7_Values<MDR_PORTB::ANALOG, 7, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_8 = MDR_PORTB_ANALOG_Pin_8_Values<MDR_PORTB::ANALOG, 8, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_9 = MDR_PORTB_ANALOG_Pin_9_Values<MDR_PORTB::ANALOG, 9, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_10 = MDR_PORTB_ANALOG_Pin_10_Values<MDR_PORTB::ANALOG, 10, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_11 = MDR_PORTB_ANALOG_Pin_11_Values<MDR_PORTB::ANALOG, 11, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_12 = MDR_PORTB_ANALOG_Pin_12_Values<MDR_PORTB::ANALOG, 12, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_13 = MDR_PORTB_ANALOG_Pin_13_Values<MDR_PORTB::ANALOG, 13, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_14 = MDR_PORTB_ANALOG_Pin_14_Values<MDR_PORTB::ANALOG, 14, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using Pin_15 = MDR_PORTB_ANALOG_Pin_15_Values<MDR_PORTB::ANALOG, 15, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using FieldValues = MDR_PORTB_ANALOG_Pin_15_Values<MDR_PORTB::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4008800C, 32, ReadWriteMode, MDR_PORTBANALOGBase, T...> ;

  struct MDR_PORTBPULLBase {} ;

  struct PULL : public RegisterBase<0x40088010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTB_PULL_Down_Pin_0_Values<MDR_PORTB::PULL, 0, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_1 = MDR_PORTB_PULL_Down_Pin_1_Values<MDR_PORTB::PULL, 1, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_2 = MDR_PORTB_PULL_Down_Pin_2_Values<MDR_PORTB::PULL, 2, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_3 = MDR_PORTB_PULL_Down_Pin_3_Values<MDR_PORTB::PULL, 3, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_4 = MDR_PORTB_PULL_Down_Pin_4_Values<MDR_PORTB::PULL, 4, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_5 = MDR_PORTB_PULL_Down_Pin_5_Values<MDR_PORTB::PULL, 5, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_6 = MDR_PORTB_PULL_Down_Pin_6_Values<MDR_PORTB::PULL, 6, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_7 = MDR_PORTB_PULL_Down_Pin_7_Values<MDR_PORTB::PULL, 7, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_8 = MDR_PORTB_PULL_Down_Pin_8_Values<MDR_PORTB::PULL, 8, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_9 = MDR_PORTB_PULL_Down_Pin_9_Values<MDR_PORTB::PULL, 9, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_10 = MDR_PORTB_PULL_Down_Pin_10_Values<MDR_PORTB::PULL, 10, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_11 = MDR_PORTB_PULL_Down_Pin_11_Values<MDR_PORTB::PULL, 11, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_12 = MDR_PORTB_PULL_Down_Pin_12_Values<MDR_PORTB::PULL, 12, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_13 = MDR_PORTB_PULL_Down_Pin_13_Values<MDR_PORTB::PULL, 13, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_14 = MDR_PORTB_PULL_Down_Pin_14_Values<MDR_PORTB::PULL, 14, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using Down_Pin_15 = MDR_PORTB_PULL_Down_Pin_15_Values<MDR_PORTB::PULL, 15, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_0 = MDR_PORTB_PULL_UP_Pin_0_Values<MDR_PORTB::PULL, 16, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_1 = MDR_PORTB_PULL_UP_Pin_1_Values<MDR_PORTB::PULL, 17, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_2 = MDR_PORTB_PULL_UP_Pin_2_Values<MDR_PORTB::PULL, 18, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_3 = MDR_PORTB_PULL_UP_Pin_3_Values<MDR_PORTB::PULL, 19, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_4 = MDR_PORTB_PULL_UP_Pin_4_Values<MDR_PORTB::PULL, 20, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_5 = MDR_PORTB_PULL_UP_Pin_5_Values<MDR_PORTB::PULL, 21, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_6 = MDR_PORTB_PULL_UP_Pin_6_Values<MDR_PORTB::PULL, 22, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_7 = MDR_PORTB_PULL_UP_Pin_7_Values<MDR_PORTB::PULL, 23, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_8 = MDR_PORTB_PULL_UP_Pin_8_Values<MDR_PORTB::PULL, 24, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_9 = MDR_PORTB_PULL_UP_Pin_9_Values<MDR_PORTB::PULL, 25, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_10 = MDR_PORTB_PULL_UP_Pin_10_Values<MDR_PORTB::PULL, 26, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_11 = MDR_PORTB_PULL_UP_Pin_11_Values<MDR_PORTB::PULL, 27, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_12 = MDR_PORTB_PULL_UP_Pin_12_Values<MDR_PORTB::PULL, 28, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_13 = MDR_PORTB_PULL_UP_Pin_13_Values<MDR_PORTB::PULL, 29, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_14 = MDR_PORTB_PULL_UP_Pin_14_Values<MDR_PORTB::PULL, 30, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using UP_Pin_15 = MDR_PORTB_PULL_UP_Pin_15_Values<MDR_PORTB::PULL, 31, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using FieldValues = MDR_PORTB_PULL_UP_Pin_15_Values<MDR_PORTB::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40088010, 32, ReadWriteMode, MDR_PORTBPULLBase, T...> ;

  struct MDR_PORTBPDBase {} ;

  struct PD : public RegisterBase<0x40088014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTB_PD_Driver_Pin_0_Values<MDR_PORTB::PD, 0, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_1 = MDR_PORTB_PD_Driver_Pin_1_Values<MDR_PORTB::PD, 1, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_2 = MDR_PORTB_PD_Driver_Pin_2_Values<MDR_PORTB::PD, 2, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_3 = MDR_PORTB_PD_Driver_Pin_3_Values<MDR_PORTB::PD, 3, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_4 = MDR_PORTB_PD_Driver_Pin_4_Values<MDR_PORTB::PD, 4, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_5 = MDR_PORTB_PD_Driver_Pin_5_Values<MDR_PORTB::PD, 5, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_6 = MDR_PORTB_PD_Driver_Pin_6_Values<MDR_PORTB::PD, 6, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_7 = MDR_PORTB_PD_Driver_Pin_7_Values<MDR_PORTB::PD, 7, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_8 = MDR_PORTB_PD_Driver_Pin_8_Values<MDR_PORTB::PD, 8, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_9 = MDR_PORTB_PD_Driver_Pin_9_Values<MDR_PORTB::PD, 9, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_10 = MDR_PORTB_PD_Driver_Pin_10_Values<MDR_PORTB::PD, 10, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_11 = MDR_PORTB_PD_Driver_Pin_11_Values<MDR_PORTB::PD, 11, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_12 = MDR_PORTB_PD_Driver_Pin_12_Values<MDR_PORTB::PD, 12, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_13 = MDR_PORTB_PD_Driver_Pin_13_Values<MDR_PORTB::PD, 13, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_14 = MDR_PORTB_PD_Driver_Pin_14_Values<MDR_PORTB::PD, 14, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Driver_Pin_15 = MDR_PORTB_PD_Driver_Pin_15_Values<MDR_PORTB::PD, 15, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_0 = MDR_PORTB_PD_Schmitt_Pin_0_Values<MDR_PORTB::PD, 16, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTB_PD_Schmitt_Pin_1_Values<MDR_PORTB::PD, 17, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTB_PD_Schmitt_Pin_2_Values<MDR_PORTB::PD, 18, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTB_PD_Schmitt_Pin_3_Values<MDR_PORTB::PD, 19, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTB_PD_Schmitt_Pin_4_Values<MDR_PORTB::PD, 20, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTB_PD_Schmitt_Pin_5_Values<MDR_PORTB::PD, 21, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTB_PD_Schmitt_Pin_6_Values<MDR_PORTB::PD, 22, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTB_PD_Schmitt_Pin_7_Values<MDR_PORTB::PD, 23, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTB_PD_Schmitt_Pin_8_Values<MDR_PORTB::PD, 24, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTB_PD_Schmitt_Pin_9_Values<MDR_PORTB::PD, 25, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTB_PD_Schmitt_Pin_10_Values<MDR_PORTB::PD, 26, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTB_PD_Schmitt_Pin_11_Values<MDR_PORTB::PD, 27, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTB_PD_Schmitt_Pin_12_Values<MDR_PORTB::PD, 28, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTB_PD_Schmitt_Pin_13_Values<MDR_PORTB::PD, 29, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTB_PD_Schmitt_Pin_14_Values<MDR_PORTB::PD, 30, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTB_PD_Schmitt_Pin_15_Values<MDR_PORTB::PD, 31, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using FieldValues = MDR_PORTB_PD_Schmitt_Pin_15_Values<MDR_PORTB::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40088014, 32, ReadWriteMode, MDR_PORTBPDBase, T...> ;

  struct MDR_PORTBPWRBase {} ;

  struct PWR : public RegisterBase<0x40088018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_PWR_Pin_0_Values<MDR_PORTB::PWR, 0, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_1 = MDR_PORTB_PWR_Pin_1_Values<MDR_PORTB::PWR, 2, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_2 = MDR_PORTB_PWR_Pin_2_Values<MDR_PORTB::PWR, 4, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_3 = MDR_PORTB_PWR_Pin_3_Values<MDR_PORTB::PWR, 6, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_4 = MDR_PORTB_PWR_Pin_4_Values<MDR_PORTB::PWR, 8, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_5 = MDR_PORTB_PWR_Pin_5_Values<MDR_PORTB::PWR, 10, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_6 = MDR_PORTB_PWR_Pin_6_Values<MDR_PORTB::PWR, 12, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_7 = MDR_PORTB_PWR_Pin_7_Values<MDR_PORTB::PWR, 14, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_8 = MDR_PORTB_PWR_Pin_8_Values<MDR_PORTB::PWR, 16, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_9 = MDR_PORTB_PWR_Pin_9_Values<MDR_PORTB::PWR, 18, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_10 = MDR_PORTB_PWR_Pin_10_Values<MDR_PORTB::PWR, 20, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_11 = MDR_PORTB_PWR_Pin_11_Values<MDR_PORTB::PWR, 22, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_12 = MDR_PORTB_PWR_Pin_12_Values<MDR_PORTB::PWR, 24, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_13 = MDR_PORTB_PWR_Pin_13_Values<MDR_PORTB::PWR, 26, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_14 = MDR_PORTB_PWR_Pin_14_Values<MDR_PORTB::PWR, 28, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using Pin_15 = MDR_PORTB_PWR_Pin_15_Values<MDR_PORTB::PWR, 30, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using FieldValues = MDR_PORTB_PWR_Pin_15_Values<MDR_PORTB::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40088018, 32, ReadWriteMode, MDR_PORTBPWRBase, T...> ;

  struct MDR_PORTBGFENBase {} ;

  struct GFEN : public RegisterBase<0x4008801C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTB_GFEN_Pin_0_Values<MDR_PORTB::GFEN, 0, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_1 = MDR_PORTB_GFEN_Pin_1_Values<MDR_PORTB::GFEN, 1, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_2 = MDR_PORTB_GFEN_Pin_2_Values<MDR_PORTB::GFEN, 2, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_3 = MDR_PORTB_GFEN_Pin_3_Values<MDR_PORTB::GFEN, 3, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_4 = MDR_PORTB_GFEN_Pin_4_Values<MDR_PORTB::GFEN, 4, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_5 = MDR_PORTB_GFEN_Pin_5_Values<MDR_PORTB::GFEN, 5, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_6 = MDR_PORTB_GFEN_Pin_6_Values<MDR_PORTB::GFEN, 6, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_7 = MDR_PORTB_GFEN_Pin_7_Values<MDR_PORTB::GFEN, 7, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_8 = MDR_PORTB_GFEN_Pin_8_Values<MDR_PORTB::GFEN, 8, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_9 = MDR_PORTB_GFEN_Pin_9_Values<MDR_PORTB::GFEN, 9, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_10 = MDR_PORTB_GFEN_Pin_10_Values<MDR_PORTB::GFEN, 10, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_11 = MDR_PORTB_GFEN_Pin_11_Values<MDR_PORTB::GFEN, 11, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_12 = MDR_PORTB_GFEN_Pin_12_Values<MDR_PORTB::GFEN, 12, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_13 = MDR_PORTB_GFEN_Pin_13_Values<MDR_PORTB::GFEN, 13, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_14 = MDR_PORTB_GFEN_Pin_14_Values<MDR_PORTB::GFEN, 14, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using Pin_15 = MDR_PORTB_GFEN_Pin_15_Values<MDR_PORTB::GFEN, 15, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using FieldValues = MDR_PORTB_GFEN_Pin_15_Values<MDR_PORTB::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4008801C, 32, ReadWriteMode, MDR_PORTBGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTBREGISTERS_HPP)
