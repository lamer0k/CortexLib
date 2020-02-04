/*******************************************************************************
* Filename      : mdrportcregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTCREGISTERS_HPP)
#define MDRPORTCREGISTERS_HPP

#include "mdrportcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTC
{
  struct MDR_PORTCRXTXBase {} ;

  struct RXTX : public RegisterBase<0x40090000, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_RXTX_Pin_0_Values<MDR_PORTC::RXTX, 0, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_1 = MDR_PORTC_RXTX_Pin_1_Values<MDR_PORTC::RXTX, 1, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_2 = MDR_PORTC_RXTX_Pin_2_Values<MDR_PORTC::RXTX, 2, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_3 = MDR_PORTC_RXTX_Pin_3_Values<MDR_PORTC::RXTX, 3, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_4 = MDR_PORTC_RXTX_Pin_4_Values<MDR_PORTC::RXTX, 4, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_5 = MDR_PORTC_RXTX_Pin_5_Values<MDR_PORTC::RXTX, 5, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_6 = MDR_PORTC_RXTX_Pin_6_Values<MDR_PORTC::RXTX, 6, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_7 = MDR_PORTC_RXTX_Pin_7_Values<MDR_PORTC::RXTX, 7, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_8 = MDR_PORTC_RXTX_Pin_8_Values<MDR_PORTC::RXTX, 8, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_9 = MDR_PORTC_RXTX_Pin_9_Values<MDR_PORTC::RXTX, 9, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_10 = MDR_PORTC_RXTX_Pin_10_Values<MDR_PORTC::RXTX, 10, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_11 = MDR_PORTC_RXTX_Pin_11_Values<MDR_PORTC::RXTX, 11, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_12 = MDR_PORTC_RXTX_Pin_12_Values<MDR_PORTC::RXTX, 12, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_13 = MDR_PORTC_RXTX_Pin_13_Values<MDR_PORTC::RXTX, 13, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_14 = MDR_PORTC_RXTX_Pin_14_Values<MDR_PORTC::RXTX, 14, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using Pin_15 = MDR_PORTC_RXTX_Pin_15_Values<MDR_PORTC::RXTX, 15, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using FieldValues = MDR_PORTC_RXTX_Pin_15_Values<MDR_PORTC::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40090000, 32, ReadWriteMode, MDR_PORTCRXTXBase, T...> ;

  struct MDR_PORTCOEBase {} ;

  struct OE : public RegisterBase<0x40090004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_OE_Pin_0_Values<MDR_PORTC::OE, 0, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_1 = MDR_PORTC_OE_Pin_1_Values<MDR_PORTC::OE, 1, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_2 = MDR_PORTC_OE_Pin_2_Values<MDR_PORTC::OE, 2, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_3 = MDR_PORTC_OE_Pin_3_Values<MDR_PORTC::OE, 3, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_4 = MDR_PORTC_OE_Pin_4_Values<MDR_PORTC::OE, 4, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_5 = MDR_PORTC_OE_Pin_5_Values<MDR_PORTC::OE, 5, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_6 = MDR_PORTC_OE_Pin_6_Values<MDR_PORTC::OE, 6, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_7 = MDR_PORTC_OE_Pin_7_Values<MDR_PORTC::OE, 7, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_8 = MDR_PORTC_OE_Pin_8_Values<MDR_PORTC::OE, 8, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_9 = MDR_PORTC_OE_Pin_9_Values<MDR_PORTC::OE, 9, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_10 = MDR_PORTC_OE_Pin_10_Values<MDR_PORTC::OE, 10, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_11 = MDR_PORTC_OE_Pin_11_Values<MDR_PORTC::OE, 11, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_12 = MDR_PORTC_OE_Pin_12_Values<MDR_PORTC::OE, 12, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_13 = MDR_PORTC_OE_Pin_13_Values<MDR_PORTC::OE, 13, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_14 = MDR_PORTC_OE_Pin_14_Values<MDR_PORTC::OE, 14, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using Pin_15 = MDR_PORTC_OE_Pin_15_Values<MDR_PORTC::OE, 15, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using FieldValues = MDR_PORTC_OE_Pin_15_Values<MDR_PORTC::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40090004, 32, ReadWriteMode, MDR_PORTCOEBase, T...> ;

  struct MDR_PORTCFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40090008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_FUNC_Pin_0_Values<MDR_PORTC::FUNC, 0, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_1 = MDR_PORTC_FUNC_Pin_1_Values<MDR_PORTC::FUNC, 2, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_2 = MDR_PORTC_FUNC_Pin_2_Values<MDR_PORTC::FUNC, 4, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_3 = MDR_PORTC_FUNC_Pin_3_Values<MDR_PORTC::FUNC, 6, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_4 = MDR_PORTC_FUNC_Pin_4_Values<MDR_PORTC::FUNC, 8, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_5 = MDR_PORTC_FUNC_Pin_5_Values<MDR_PORTC::FUNC, 10, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_6 = MDR_PORTC_FUNC_Pin_6_Values<MDR_PORTC::FUNC, 12, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_7 = MDR_PORTC_FUNC_Pin_7_Values<MDR_PORTC::FUNC, 14, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_8 = MDR_PORTC_FUNC_Pin_8_Values<MDR_PORTC::FUNC, 16, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_9 = MDR_PORTC_FUNC_Pin_9_Values<MDR_PORTC::FUNC, 18, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_10 = MDR_PORTC_FUNC_Pin_10_Values<MDR_PORTC::FUNC, 20, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_11 = MDR_PORTC_FUNC_Pin_11_Values<MDR_PORTC::FUNC, 22, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_12 = MDR_PORTC_FUNC_Pin_12_Values<MDR_PORTC::FUNC, 24, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_13 = MDR_PORTC_FUNC_Pin_13_Values<MDR_PORTC::FUNC, 26, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_14 = MDR_PORTC_FUNC_Pin_14_Values<MDR_PORTC::FUNC, 28, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using Pin_15 = MDR_PORTC_FUNC_Pin_15_Values<MDR_PORTC::FUNC, 30, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using FieldValues = MDR_PORTC_FUNC_Pin_15_Values<MDR_PORTC::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40090008, 32, ReadWriteMode, MDR_PORTCFUNCBase, T...> ;

  struct MDR_PORTCANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4009000C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_ANALOG_Pin_0_Values<MDR_PORTC::ANALOG, 0, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_1 = MDR_PORTC_ANALOG_Pin_1_Values<MDR_PORTC::ANALOG, 1, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_2 = MDR_PORTC_ANALOG_Pin_2_Values<MDR_PORTC::ANALOG, 2, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_3 = MDR_PORTC_ANALOG_Pin_3_Values<MDR_PORTC::ANALOG, 3, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_4 = MDR_PORTC_ANALOG_Pin_4_Values<MDR_PORTC::ANALOG, 4, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_5 = MDR_PORTC_ANALOG_Pin_5_Values<MDR_PORTC::ANALOG, 5, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_6 = MDR_PORTC_ANALOG_Pin_6_Values<MDR_PORTC::ANALOG, 6, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_7 = MDR_PORTC_ANALOG_Pin_7_Values<MDR_PORTC::ANALOG, 7, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_8 = MDR_PORTC_ANALOG_Pin_8_Values<MDR_PORTC::ANALOG, 8, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_9 = MDR_PORTC_ANALOG_Pin_9_Values<MDR_PORTC::ANALOG, 9, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_10 = MDR_PORTC_ANALOG_Pin_10_Values<MDR_PORTC::ANALOG, 10, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_11 = MDR_PORTC_ANALOG_Pin_11_Values<MDR_PORTC::ANALOG, 11, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_12 = MDR_PORTC_ANALOG_Pin_12_Values<MDR_PORTC::ANALOG, 12, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_13 = MDR_PORTC_ANALOG_Pin_13_Values<MDR_PORTC::ANALOG, 13, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_14 = MDR_PORTC_ANALOG_Pin_14_Values<MDR_PORTC::ANALOG, 14, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using Pin_15 = MDR_PORTC_ANALOG_Pin_15_Values<MDR_PORTC::ANALOG, 15, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using FieldValues = MDR_PORTC_ANALOG_Pin_15_Values<MDR_PORTC::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4009000C, 32, ReadWriteMode, MDR_PORTCANALOGBase, T...> ;

  struct MDR_PORTCPULLBase {} ;

  struct PULL : public RegisterBase<0x40090010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTC_PULL_Down_Pin_0_Values<MDR_PORTC::PULL, 0, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_1 = MDR_PORTC_PULL_Down_Pin_1_Values<MDR_PORTC::PULL, 1, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_2 = MDR_PORTC_PULL_Down_Pin_2_Values<MDR_PORTC::PULL, 2, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_3 = MDR_PORTC_PULL_Down_Pin_3_Values<MDR_PORTC::PULL, 3, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_4 = MDR_PORTC_PULL_Down_Pin_4_Values<MDR_PORTC::PULL, 4, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_5 = MDR_PORTC_PULL_Down_Pin_5_Values<MDR_PORTC::PULL, 5, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_6 = MDR_PORTC_PULL_Down_Pin_6_Values<MDR_PORTC::PULL, 6, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_7 = MDR_PORTC_PULL_Down_Pin_7_Values<MDR_PORTC::PULL, 7, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_8 = MDR_PORTC_PULL_Down_Pin_8_Values<MDR_PORTC::PULL, 8, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_9 = MDR_PORTC_PULL_Down_Pin_9_Values<MDR_PORTC::PULL, 9, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_10 = MDR_PORTC_PULL_Down_Pin_10_Values<MDR_PORTC::PULL, 10, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_11 = MDR_PORTC_PULL_Down_Pin_11_Values<MDR_PORTC::PULL, 11, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_12 = MDR_PORTC_PULL_Down_Pin_12_Values<MDR_PORTC::PULL, 12, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_13 = MDR_PORTC_PULL_Down_Pin_13_Values<MDR_PORTC::PULL, 13, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_14 = MDR_PORTC_PULL_Down_Pin_14_Values<MDR_PORTC::PULL, 14, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using Down_Pin_15 = MDR_PORTC_PULL_Down_Pin_15_Values<MDR_PORTC::PULL, 15, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_0 = MDR_PORTC_PULL_UP_Pin_0_Values<MDR_PORTC::PULL, 16, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_1 = MDR_PORTC_PULL_UP_Pin_1_Values<MDR_PORTC::PULL, 17, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_2 = MDR_PORTC_PULL_UP_Pin_2_Values<MDR_PORTC::PULL, 18, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_3 = MDR_PORTC_PULL_UP_Pin_3_Values<MDR_PORTC::PULL, 19, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_4 = MDR_PORTC_PULL_UP_Pin_4_Values<MDR_PORTC::PULL, 20, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_5 = MDR_PORTC_PULL_UP_Pin_5_Values<MDR_PORTC::PULL, 21, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_6 = MDR_PORTC_PULL_UP_Pin_6_Values<MDR_PORTC::PULL, 22, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_7 = MDR_PORTC_PULL_UP_Pin_7_Values<MDR_PORTC::PULL, 23, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_8 = MDR_PORTC_PULL_UP_Pin_8_Values<MDR_PORTC::PULL, 24, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_9 = MDR_PORTC_PULL_UP_Pin_9_Values<MDR_PORTC::PULL, 25, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_10 = MDR_PORTC_PULL_UP_Pin_10_Values<MDR_PORTC::PULL, 26, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_11 = MDR_PORTC_PULL_UP_Pin_11_Values<MDR_PORTC::PULL, 27, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_12 = MDR_PORTC_PULL_UP_Pin_12_Values<MDR_PORTC::PULL, 28, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_13 = MDR_PORTC_PULL_UP_Pin_13_Values<MDR_PORTC::PULL, 29, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_14 = MDR_PORTC_PULL_UP_Pin_14_Values<MDR_PORTC::PULL, 30, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using UP_Pin_15 = MDR_PORTC_PULL_UP_Pin_15_Values<MDR_PORTC::PULL, 31, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using FieldValues = MDR_PORTC_PULL_UP_Pin_15_Values<MDR_PORTC::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40090010, 32, ReadWriteMode, MDR_PORTCPULLBase, T...> ;

  struct MDR_PORTCPDBase {} ;

  struct PD : public RegisterBase<0x40090014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTC_PD_Driver_Pin_0_Values<MDR_PORTC::PD, 0, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_1 = MDR_PORTC_PD_Driver_Pin_1_Values<MDR_PORTC::PD, 1, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_2 = MDR_PORTC_PD_Driver_Pin_2_Values<MDR_PORTC::PD, 2, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_3 = MDR_PORTC_PD_Driver_Pin_3_Values<MDR_PORTC::PD, 3, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_4 = MDR_PORTC_PD_Driver_Pin_4_Values<MDR_PORTC::PD, 4, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_5 = MDR_PORTC_PD_Driver_Pin_5_Values<MDR_PORTC::PD, 5, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_6 = MDR_PORTC_PD_Driver_Pin_6_Values<MDR_PORTC::PD, 6, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_7 = MDR_PORTC_PD_Driver_Pin_7_Values<MDR_PORTC::PD, 7, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_8 = MDR_PORTC_PD_Driver_Pin_8_Values<MDR_PORTC::PD, 8, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_9 = MDR_PORTC_PD_Driver_Pin_9_Values<MDR_PORTC::PD, 9, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_10 = MDR_PORTC_PD_Driver_Pin_10_Values<MDR_PORTC::PD, 10, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_11 = MDR_PORTC_PD_Driver_Pin_11_Values<MDR_PORTC::PD, 11, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_12 = MDR_PORTC_PD_Driver_Pin_12_Values<MDR_PORTC::PD, 12, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_13 = MDR_PORTC_PD_Driver_Pin_13_Values<MDR_PORTC::PD, 13, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_14 = MDR_PORTC_PD_Driver_Pin_14_Values<MDR_PORTC::PD, 14, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Driver_Pin_15 = MDR_PORTC_PD_Driver_Pin_15_Values<MDR_PORTC::PD, 15, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_0 = MDR_PORTC_PD_Schmitt_Pin_0_Values<MDR_PORTC::PD, 16, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTC_PD_Schmitt_Pin_1_Values<MDR_PORTC::PD, 17, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTC_PD_Schmitt_Pin_2_Values<MDR_PORTC::PD, 18, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTC_PD_Schmitt_Pin_3_Values<MDR_PORTC::PD, 19, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTC_PD_Schmitt_Pin_4_Values<MDR_PORTC::PD, 20, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTC_PD_Schmitt_Pin_5_Values<MDR_PORTC::PD, 21, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTC_PD_Schmitt_Pin_6_Values<MDR_PORTC::PD, 22, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTC_PD_Schmitt_Pin_7_Values<MDR_PORTC::PD, 23, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTC_PD_Schmitt_Pin_8_Values<MDR_PORTC::PD, 24, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTC_PD_Schmitt_Pin_9_Values<MDR_PORTC::PD, 25, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTC_PD_Schmitt_Pin_10_Values<MDR_PORTC::PD, 26, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTC_PD_Schmitt_Pin_11_Values<MDR_PORTC::PD, 27, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTC_PD_Schmitt_Pin_12_Values<MDR_PORTC::PD, 28, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTC_PD_Schmitt_Pin_13_Values<MDR_PORTC::PD, 29, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTC_PD_Schmitt_Pin_14_Values<MDR_PORTC::PD, 30, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTC_PD_Schmitt_Pin_15_Values<MDR_PORTC::PD, 31, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using FieldValues = MDR_PORTC_PD_Schmitt_Pin_15_Values<MDR_PORTC::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40090014, 32, ReadWriteMode, MDR_PORTCPDBase, T...> ;

  struct MDR_PORTCPWRBase {} ;

  struct PWR : public RegisterBase<0x40090018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_PWR_Pin_0_Values<MDR_PORTC::PWR, 0, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_1 = MDR_PORTC_PWR_Pin_1_Values<MDR_PORTC::PWR, 2, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_2 = MDR_PORTC_PWR_Pin_2_Values<MDR_PORTC::PWR, 4, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_3 = MDR_PORTC_PWR_Pin_3_Values<MDR_PORTC::PWR, 6, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_4 = MDR_PORTC_PWR_Pin_4_Values<MDR_PORTC::PWR, 8, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_5 = MDR_PORTC_PWR_Pin_5_Values<MDR_PORTC::PWR, 10, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_6 = MDR_PORTC_PWR_Pin_6_Values<MDR_PORTC::PWR, 12, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_7 = MDR_PORTC_PWR_Pin_7_Values<MDR_PORTC::PWR, 14, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_8 = MDR_PORTC_PWR_Pin_8_Values<MDR_PORTC::PWR, 16, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_9 = MDR_PORTC_PWR_Pin_9_Values<MDR_PORTC::PWR, 18, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_10 = MDR_PORTC_PWR_Pin_10_Values<MDR_PORTC::PWR, 20, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_11 = MDR_PORTC_PWR_Pin_11_Values<MDR_PORTC::PWR, 22, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_12 = MDR_PORTC_PWR_Pin_12_Values<MDR_PORTC::PWR, 24, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_13 = MDR_PORTC_PWR_Pin_13_Values<MDR_PORTC::PWR, 26, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_14 = MDR_PORTC_PWR_Pin_14_Values<MDR_PORTC::PWR, 28, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using Pin_15 = MDR_PORTC_PWR_Pin_15_Values<MDR_PORTC::PWR, 30, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using FieldValues = MDR_PORTC_PWR_Pin_15_Values<MDR_PORTC::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40090018, 32, ReadWriteMode, MDR_PORTCPWRBase, T...> ;

  struct MDR_PORTCGFENBase {} ;

  struct GFEN : public RegisterBase<0x4009001C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTC_GFEN_Pin_0_Values<MDR_PORTC::GFEN, 0, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_1 = MDR_PORTC_GFEN_Pin_1_Values<MDR_PORTC::GFEN, 1, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_2 = MDR_PORTC_GFEN_Pin_2_Values<MDR_PORTC::GFEN, 2, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_3 = MDR_PORTC_GFEN_Pin_3_Values<MDR_PORTC::GFEN, 3, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_4 = MDR_PORTC_GFEN_Pin_4_Values<MDR_PORTC::GFEN, 4, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_5 = MDR_PORTC_GFEN_Pin_5_Values<MDR_PORTC::GFEN, 5, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_6 = MDR_PORTC_GFEN_Pin_6_Values<MDR_PORTC::GFEN, 6, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_7 = MDR_PORTC_GFEN_Pin_7_Values<MDR_PORTC::GFEN, 7, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_8 = MDR_PORTC_GFEN_Pin_8_Values<MDR_PORTC::GFEN, 8, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_9 = MDR_PORTC_GFEN_Pin_9_Values<MDR_PORTC::GFEN, 9, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_10 = MDR_PORTC_GFEN_Pin_10_Values<MDR_PORTC::GFEN, 10, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_11 = MDR_PORTC_GFEN_Pin_11_Values<MDR_PORTC::GFEN, 11, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_12 = MDR_PORTC_GFEN_Pin_12_Values<MDR_PORTC::GFEN, 12, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_13 = MDR_PORTC_GFEN_Pin_13_Values<MDR_PORTC::GFEN, 13, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_14 = MDR_PORTC_GFEN_Pin_14_Values<MDR_PORTC::GFEN, 14, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using Pin_15 = MDR_PORTC_GFEN_Pin_15_Values<MDR_PORTC::GFEN, 15, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using FieldValues = MDR_PORTC_GFEN_Pin_15_Values<MDR_PORTC::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4009001C, 32, ReadWriteMode, MDR_PORTCGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTCREGISTERS_HPP)
