/*******************************************************************************
* Filename      : mdrportdregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRPORTDREGISTERS_HPP)
#define MDRPORTDREGISTERS_HPP

#include "mdrportdfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTD
{
  struct MDR_PORTDRXTXBase {} ;

  struct RXTX : public RegisterBase<0x400C0000, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_RXTX_Pin_0_Values<MDR_PORTD::RXTX, 0, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_1 = MDR_PORTD_RXTX_Pin_1_Values<MDR_PORTD::RXTX, 1, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_2 = MDR_PORTD_RXTX_Pin_2_Values<MDR_PORTD::RXTX, 2, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_3 = MDR_PORTD_RXTX_Pin_3_Values<MDR_PORTD::RXTX, 3, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_4 = MDR_PORTD_RXTX_Pin_4_Values<MDR_PORTD::RXTX, 4, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_5 = MDR_PORTD_RXTX_Pin_5_Values<MDR_PORTD::RXTX, 5, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_6 = MDR_PORTD_RXTX_Pin_6_Values<MDR_PORTD::RXTX, 6, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_7 = MDR_PORTD_RXTX_Pin_7_Values<MDR_PORTD::RXTX, 7, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_8 = MDR_PORTD_RXTX_Pin_8_Values<MDR_PORTD::RXTX, 8, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_9 = MDR_PORTD_RXTX_Pin_9_Values<MDR_PORTD::RXTX, 9, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_10 = MDR_PORTD_RXTX_Pin_10_Values<MDR_PORTD::RXTX, 10, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_11 = MDR_PORTD_RXTX_Pin_11_Values<MDR_PORTD::RXTX, 11, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_12 = MDR_PORTD_RXTX_Pin_12_Values<MDR_PORTD::RXTX, 12, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_13 = MDR_PORTD_RXTX_Pin_13_Values<MDR_PORTD::RXTX, 13, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_14 = MDR_PORTD_RXTX_Pin_14_Values<MDR_PORTD::RXTX, 14, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using Pin_15 = MDR_PORTD_RXTX_Pin_15_Values<MDR_PORTD::RXTX, 15, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using FieldValues = MDR_PORTD_RXTX_Pin_15_Values<MDR_PORTD::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400C0000, 32, ReadWriteMode, MDR_PORTDRXTXBase, T...> ;

  struct MDR_PORTDOEBase {} ;

  struct OE : public RegisterBase<0x400C0004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_OE_Pin_0_Values<MDR_PORTD::OE, 0, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_1 = MDR_PORTD_OE_Pin_1_Values<MDR_PORTD::OE, 1, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_2 = MDR_PORTD_OE_Pin_2_Values<MDR_PORTD::OE, 2, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_3 = MDR_PORTD_OE_Pin_3_Values<MDR_PORTD::OE, 3, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_4 = MDR_PORTD_OE_Pin_4_Values<MDR_PORTD::OE, 4, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_5 = MDR_PORTD_OE_Pin_5_Values<MDR_PORTD::OE, 5, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_6 = MDR_PORTD_OE_Pin_6_Values<MDR_PORTD::OE, 6, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_7 = MDR_PORTD_OE_Pin_7_Values<MDR_PORTD::OE, 7, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_8 = MDR_PORTD_OE_Pin_8_Values<MDR_PORTD::OE, 8, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_9 = MDR_PORTD_OE_Pin_9_Values<MDR_PORTD::OE, 9, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_10 = MDR_PORTD_OE_Pin_10_Values<MDR_PORTD::OE, 10, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_11 = MDR_PORTD_OE_Pin_11_Values<MDR_PORTD::OE, 11, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_12 = MDR_PORTD_OE_Pin_12_Values<MDR_PORTD::OE, 12, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_13 = MDR_PORTD_OE_Pin_13_Values<MDR_PORTD::OE, 13, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_14 = MDR_PORTD_OE_Pin_14_Values<MDR_PORTD::OE, 14, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using Pin_15 = MDR_PORTD_OE_Pin_15_Values<MDR_PORTD::OE, 15, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using FieldValues = MDR_PORTD_OE_Pin_15_Values<MDR_PORTD::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400C0004, 32, ReadWriteMode, MDR_PORTDOEBase, T...> ;

  struct MDR_PORTDFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400C0008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_FUNC_Pin_0_Values<MDR_PORTD::FUNC, 0, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_1 = MDR_PORTD_FUNC_Pin_1_Values<MDR_PORTD::FUNC, 2, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_2 = MDR_PORTD_FUNC_Pin_2_Values<MDR_PORTD::FUNC, 4, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_3 = MDR_PORTD_FUNC_Pin_3_Values<MDR_PORTD::FUNC, 6, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_4 = MDR_PORTD_FUNC_Pin_4_Values<MDR_PORTD::FUNC, 8, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_5 = MDR_PORTD_FUNC_Pin_5_Values<MDR_PORTD::FUNC, 10, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_6 = MDR_PORTD_FUNC_Pin_6_Values<MDR_PORTD::FUNC, 12, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_7 = MDR_PORTD_FUNC_Pin_7_Values<MDR_PORTD::FUNC, 14, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_8 = MDR_PORTD_FUNC_Pin_8_Values<MDR_PORTD::FUNC, 16, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_9 = MDR_PORTD_FUNC_Pin_9_Values<MDR_PORTD::FUNC, 18, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_10 = MDR_PORTD_FUNC_Pin_10_Values<MDR_PORTD::FUNC, 20, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_11 = MDR_PORTD_FUNC_Pin_11_Values<MDR_PORTD::FUNC, 22, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_12 = MDR_PORTD_FUNC_Pin_12_Values<MDR_PORTD::FUNC, 24, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_13 = MDR_PORTD_FUNC_Pin_13_Values<MDR_PORTD::FUNC, 26, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_14 = MDR_PORTD_FUNC_Pin_14_Values<MDR_PORTD::FUNC, 28, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using Pin_15 = MDR_PORTD_FUNC_Pin_15_Values<MDR_PORTD::FUNC, 30, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using FieldValues = MDR_PORTD_FUNC_Pin_15_Values<MDR_PORTD::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400C0008, 32, ReadWriteMode, MDR_PORTDFUNCBase, T...> ;

  struct MDR_PORTDANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400C000C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_ANALOG_Pin_0_Values<MDR_PORTD::ANALOG, 0, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_1 = MDR_PORTD_ANALOG_Pin_1_Values<MDR_PORTD::ANALOG, 1, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_2 = MDR_PORTD_ANALOG_Pin_2_Values<MDR_PORTD::ANALOG, 2, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_3 = MDR_PORTD_ANALOG_Pin_3_Values<MDR_PORTD::ANALOG, 3, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_4 = MDR_PORTD_ANALOG_Pin_4_Values<MDR_PORTD::ANALOG, 4, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_5 = MDR_PORTD_ANALOG_Pin_5_Values<MDR_PORTD::ANALOG, 5, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_6 = MDR_PORTD_ANALOG_Pin_6_Values<MDR_PORTD::ANALOG, 6, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_7 = MDR_PORTD_ANALOG_Pin_7_Values<MDR_PORTD::ANALOG, 7, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_8 = MDR_PORTD_ANALOG_Pin_8_Values<MDR_PORTD::ANALOG, 8, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_9 = MDR_PORTD_ANALOG_Pin_9_Values<MDR_PORTD::ANALOG, 9, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_10 = MDR_PORTD_ANALOG_Pin_10_Values<MDR_PORTD::ANALOG, 10, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_11 = MDR_PORTD_ANALOG_Pin_11_Values<MDR_PORTD::ANALOG, 11, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_12 = MDR_PORTD_ANALOG_Pin_12_Values<MDR_PORTD::ANALOG, 12, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_13 = MDR_PORTD_ANALOG_Pin_13_Values<MDR_PORTD::ANALOG, 13, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_14 = MDR_PORTD_ANALOG_Pin_14_Values<MDR_PORTD::ANALOG, 14, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using Pin_15 = MDR_PORTD_ANALOG_Pin_15_Values<MDR_PORTD::ANALOG, 15, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using FieldValues = MDR_PORTD_ANALOG_Pin_15_Values<MDR_PORTD::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400C000C, 32, ReadWriteMode, MDR_PORTDANALOGBase, T...> ;

  struct MDR_PORTDPULLBase {} ;

  struct PULL : public RegisterBase<0x400C0010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTD_PULL_Down_Pin_0_Values<MDR_PORTD::PULL, 0, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_1 = MDR_PORTD_PULL_Down_Pin_1_Values<MDR_PORTD::PULL, 1, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_2 = MDR_PORTD_PULL_Down_Pin_2_Values<MDR_PORTD::PULL, 2, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_3 = MDR_PORTD_PULL_Down_Pin_3_Values<MDR_PORTD::PULL, 3, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_4 = MDR_PORTD_PULL_Down_Pin_4_Values<MDR_PORTD::PULL, 4, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_5 = MDR_PORTD_PULL_Down_Pin_5_Values<MDR_PORTD::PULL, 5, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_6 = MDR_PORTD_PULL_Down_Pin_6_Values<MDR_PORTD::PULL, 6, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_7 = MDR_PORTD_PULL_Down_Pin_7_Values<MDR_PORTD::PULL, 7, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_8 = MDR_PORTD_PULL_Down_Pin_8_Values<MDR_PORTD::PULL, 8, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_9 = MDR_PORTD_PULL_Down_Pin_9_Values<MDR_PORTD::PULL, 9, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_10 = MDR_PORTD_PULL_Down_Pin_10_Values<MDR_PORTD::PULL, 10, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_11 = MDR_PORTD_PULL_Down_Pin_11_Values<MDR_PORTD::PULL, 11, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_12 = MDR_PORTD_PULL_Down_Pin_12_Values<MDR_PORTD::PULL, 12, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_13 = MDR_PORTD_PULL_Down_Pin_13_Values<MDR_PORTD::PULL, 13, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_14 = MDR_PORTD_PULL_Down_Pin_14_Values<MDR_PORTD::PULL, 14, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using Down_Pin_15 = MDR_PORTD_PULL_Down_Pin_15_Values<MDR_PORTD::PULL, 15, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_0 = MDR_PORTD_PULL_UP_Pin_0_Values<MDR_PORTD::PULL, 16, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_1 = MDR_PORTD_PULL_UP_Pin_1_Values<MDR_PORTD::PULL, 17, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_2 = MDR_PORTD_PULL_UP_Pin_2_Values<MDR_PORTD::PULL, 18, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_3 = MDR_PORTD_PULL_UP_Pin_3_Values<MDR_PORTD::PULL, 19, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_4 = MDR_PORTD_PULL_UP_Pin_4_Values<MDR_PORTD::PULL, 20, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_5 = MDR_PORTD_PULL_UP_Pin_5_Values<MDR_PORTD::PULL, 21, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_6 = MDR_PORTD_PULL_UP_Pin_6_Values<MDR_PORTD::PULL, 22, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_7 = MDR_PORTD_PULL_UP_Pin_7_Values<MDR_PORTD::PULL, 23, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_8 = MDR_PORTD_PULL_UP_Pin_8_Values<MDR_PORTD::PULL, 24, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_9 = MDR_PORTD_PULL_UP_Pin_9_Values<MDR_PORTD::PULL, 25, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_10 = MDR_PORTD_PULL_UP_Pin_10_Values<MDR_PORTD::PULL, 26, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_11 = MDR_PORTD_PULL_UP_Pin_11_Values<MDR_PORTD::PULL, 27, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_12 = MDR_PORTD_PULL_UP_Pin_12_Values<MDR_PORTD::PULL, 28, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_13 = MDR_PORTD_PULL_UP_Pin_13_Values<MDR_PORTD::PULL, 29, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_14 = MDR_PORTD_PULL_UP_Pin_14_Values<MDR_PORTD::PULL, 30, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using UP_Pin_15 = MDR_PORTD_PULL_UP_Pin_15_Values<MDR_PORTD::PULL, 31, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using FieldValues = MDR_PORTD_PULL_UP_Pin_15_Values<MDR_PORTD::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400C0010, 32, ReadWriteMode, MDR_PORTDPULLBase, T...> ;

  struct MDR_PORTDPDBase {} ;

  struct PD : public RegisterBase<0x400C0014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTD_PD_Driver_Pin_0_Values<MDR_PORTD::PD, 0, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_1 = MDR_PORTD_PD_Driver_Pin_1_Values<MDR_PORTD::PD, 1, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_2 = MDR_PORTD_PD_Driver_Pin_2_Values<MDR_PORTD::PD, 2, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_3 = MDR_PORTD_PD_Driver_Pin_3_Values<MDR_PORTD::PD, 3, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_4 = MDR_PORTD_PD_Driver_Pin_4_Values<MDR_PORTD::PD, 4, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_5 = MDR_PORTD_PD_Driver_Pin_5_Values<MDR_PORTD::PD, 5, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_6 = MDR_PORTD_PD_Driver_Pin_6_Values<MDR_PORTD::PD, 6, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_7 = MDR_PORTD_PD_Driver_Pin_7_Values<MDR_PORTD::PD, 7, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_8 = MDR_PORTD_PD_Driver_Pin_8_Values<MDR_PORTD::PD, 8, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_9 = MDR_PORTD_PD_Driver_Pin_9_Values<MDR_PORTD::PD, 9, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_10 = MDR_PORTD_PD_Driver_Pin_10_Values<MDR_PORTD::PD, 10, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_11 = MDR_PORTD_PD_Driver_Pin_11_Values<MDR_PORTD::PD, 11, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_12 = MDR_PORTD_PD_Driver_Pin_12_Values<MDR_PORTD::PD, 12, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_13 = MDR_PORTD_PD_Driver_Pin_13_Values<MDR_PORTD::PD, 13, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_14 = MDR_PORTD_PD_Driver_Pin_14_Values<MDR_PORTD::PD, 14, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Driver_Pin_15 = MDR_PORTD_PD_Driver_Pin_15_Values<MDR_PORTD::PD, 15, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_0 = MDR_PORTD_PD_Schmitt_Pin_0_Values<MDR_PORTD::PD, 16, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTD_PD_Schmitt_Pin_1_Values<MDR_PORTD::PD, 17, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTD_PD_Schmitt_Pin_2_Values<MDR_PORTD::PD, 18, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTD_PD_Schmitt_Pin_3_Values<MDR_PORTD::PD, 19, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTD_PD_Schmitt_Pin_4_Values<MDR_PORTD::PD, 20, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTD_PD_Schmitt_Pin_5_Values<MDR_PORTD::PD, 21, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTD_PD_Schmitt_Pin_6_Values<MDR_PORTD::PD, 22, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTD_PD_Schmitt_Pin_7_Values<MDR_PORTD::PD, 23, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTD_PD_Schmitt_Pin_8_Values<MDR_PORTD::PD, 24, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTD_PD_Schmitt_Pin_9_Values<MDR_PORTD::PD, 25, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTD_PD_Schmitt_Pin_10_Values<MDR_PORTD::PD, 26, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTD_PD_Schmitt_Pin_11_Values<MDR_PORTD::PD, 27, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTD_PD_Schmitt_Pin_12_Values<MDR_PORTD::PD, 28, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTD_PD_Schmitt_Pin_13_Values<MDR_PORTD::PD, 29, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTD_PD_Schmitt_Pin_14_Values<MDR_PORTD::PD, 30, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTD_PD_Schmitt_Pin_15_Values<MDR_PORTD::PD, 31, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using FieldValues = MDR_PORTD_PD_Schmitt_Pin_15_Values<MDR_PORTD::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400C0014, 32, ReadWriteMode, MDR_PORTDPDBase, T...> ;

  struct MDR_PORTDPWRBase {} ;

  struct PWR : public RegisterBase<0x400C0018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_PWR_Pin_0_Values<MDR_PORTD::PWR, 0, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_1 = MDR_PORTD_PWR_Pin_1_Values<MDR_PORTD::PWR, 2, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_2 = MDR_PORTD_PWR_Pin_2_Values<MDR_PORTD::PWR, 4, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_3 = MDR_PORTD_PWR_Pin_3_Values<MDR_PORTD::PWR, 6, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_4 = MDR_PORTD_PWR_Pin_4_Values<MDR_PORTD::PWR, 8, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_5 = MDR_PORTD_PWR_Pin_5_Values<MDR_PORTD::PWR, 10, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_6 = MDR_PORTD_PWR_Pin_6_Values<MDR_PORTD::PWR, 12, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_7 = MDR_PORTD_PWR_Pin_7_Values<MDR_PORTD::PWR, 14, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_8 = MDR_PORTD_PWR_Pin_8_Values<MDR_PORTD::PWR, 16, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_9 = MDR_PORTD_PWR_Pin_9_Values<MDR_PORTD::PWR, 18, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_10 = MDR_PORTD_PWR_Pin_10_Values<MDR_PORTD::PWR, 20, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_11 = MDR_PORTD_PWR_Pin_11_Values<MDR_PORTD::PWR, 22, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_12 = MDR_PORTD_PWR_Pin_12_Values<MDR_PORTD::PWR, 24, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_13 = MDR_PORTD_PWR_Pin_13_Values<MDR_PORTD::PWR, 26, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_14 = MDR_PORTD_PWR_Pin_14_Values<MDR_PORTD::PWR, 28, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using Pin_15 = MDR_PORTD_PWR_Pin_15_Values<MDR_PORTD::PWR, 30, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using FieldValues = MDR_PORTD_PWR_Pin_15_Values<MDR_PORTD::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400C0018, 32, ReadWriteMode, MDR_PORTDPWRBase, T...> ;

  struct MDR_PORTDGFENBase {} ;

  struct GFEN : public RegisterBase<0x400C001C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTD_GFEN_Pin_0_Values<MDR_PORTD::GFEN, 0, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_1 = MDR_PORTD_GFEN_Pin_1_Values<MDR_PORTD::GFEN, 1, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_2 = MDR_PORTD_GFEN_Pin_2_Values<MDR_PORTD::GFEN, 2, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_3 = MDR_PORTD_GFEN_Pin_3_Values<MDR_PORTD::GFEN, 3, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_4 = MDR_PORTD_GFEN_Pin_4_Values<MDR_PORTD::GFEN, 4, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_5 = MDR_PORTD_GFEN_Pin_5_Values<MDR_PORTD::GFEN, 5, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_6 = MDR_PORTD_GFEN_Pin_6_Values<MDR_PORTD::GFEN, 6, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_7 = MDR_PORTD_GFEN_Pin_7_Values<MDR_PORTD::GFEN, 7, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_8 = MDR_PORTD_GFEN_Pin_8_Values<MDR_PORTD::GFEN, 8, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_9 = MDR_PORTD_GFEN_Pin_9_Values<MDR_PORTD::GFEN, 9, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_10 = MDR_PORTD_GFEN_Pin_10_Values<MDR_PORTD::GFEN, 10, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_11 = MDR_PORTD_GFEN_Pin_11_Values<MDR_PORTD::GFEN, 11, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_12 = MDR_PORTD_GFEN_Pin_12_Values<MDR_PORTD::GFEN, 12, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_13 = MDR_PORTD_GFEN_Pin_13_Values<MDR_PORTD::GFEN, 13, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_14 = MDR_PORTD_GFEN_Pin_14_Values<MDR_PORTD::GFEN, 14, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using Pin_15 = MDR_PORTD_GFEN_Pin_15_Values<MDR_PORTD::GFEN, 15, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using FieldValues = MDR_PORTD_GFEN_Pin_15_Values<MDR_PORTD::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400C001C, 32, ReadWriteMode, MDR_PORTDGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTDREGISTERS_HPP)
