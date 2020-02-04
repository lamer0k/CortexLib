/*******************************************************************************
* Filename      : mdrportaregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTAREGISTERS_HPP)
#define MDRPORTAREGISTERS_HPP

#include "mdrportafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTA
{
  struct MDR_PORTARXTXBase {} ;

  struct RXTX : public RegisterBase<0x40080000, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_RXTX_Pin_0_Values<MDR_PORTA::RXTX, 0, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_1 = MDR_PORTA_RXTX_Pin_1_Values<MDR_PORTA::RXTX, 1, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_2 = MDR_PORTA_RXTX_Pin_2_Values<MDR_PORTA::RXTX, 2, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_3 = MDR_PORTA_RXTX_Pin_3_Values<MDR_PORTA::RXTX, 3, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_4 = MDR_PORTA_RXTX_Pin_4_Values<MDR_PORTA::RXTX, 4, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_5 = MDR_PORTA_RXTX_Pin_5_Values<MDR_PORTA::RXTX, 5, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_6 = MDR_PORTA_RXTX_Pin_6_Values<MDR_PORTA::RXTX, 6, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_7 = MDR_PORTA_RXTX_Pin_7_Values<MDR_PORTA::RXTX, 7, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_8 = MDR_PORTA_RXTX_Pin_8_Values<MDR_PORTA::RXTX, 8, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_9 = MDR_PORTA_RXTX_Pin_9_Values<MDR_PORTA::RXTX, 9, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_10 = MDR_PORTA_RXTX_Pin_10_Values<MDR_PORTA::RXTX, 10, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_11 = MDR_PORTA_RXTX_Pin_11_Values<MDR_PORTA::RXTX, 11, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_12 = MDR_PORTA_RXTX_Pin_12_Values<MDR_PORTA::RXTX, 12, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_13 = MDR_PORTA_RXTX_Pin_13_Values<MDR_PORTA::RXTX, 13, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_14 = MDR_PORTA_RXTX_Pin_14_Values<MDR_PORTA::RXTX, 14, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using Pin_15 = MDR_PORTA_RXTX_Pin_15_Values<MDR_PORTA::RXTX, 15, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using FieldValues = MDR_PORTA_RXTX_Pin_15_Values<MDR_PORTA::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40080000, 32, ReadWriteMode, MDR_PORTARXTXBase, T...> ;

  struct MDR_PORTAOEBase {} ;

  struct OE : public RegisterBase<0x40080004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_OE_Pin_0_Values<MDR_PORTA::OE, 0, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_1 = MDR_PORTA_OE_Pin_1_Values<MDR_PORTA::OE, 1, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_2 = MDR_PORTA_OE_Pin_2_Values<MDR_PORTA::OE, 2, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_3 = MDR_PORTA_OE_Pin_3_Values<MDR_PORTA::OE, 3, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_4 = MDR_PORTA_OE_Pin_4_Values<MDR_PORTA::OE, 4, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_5 = MDR_PORTA_OE_Pin_5_Values<MDR_PORTA::OE, 5, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_6 = MDR_PORTA_OE_Pin_6_Values<MDR_PORTA::OE, 6, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_7 = MDR_PORTA_OE_Pin_7_Values<MDR_PORTA::OE, 7, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_8 = MDR_PORTA_OE_Pin_8_Values<MDR_PORTA::OE, 8, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_9 = MDR_PORTA_OE_Pin_9_Values<MDR_PORTA::OE, 9, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_10 = MDR_PORTA_OE_Pin_10_Values<MDR_PORTA::OE, 10, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_11 = MDR_PORTA_OE_Pin_11_Values<MDR_PORTA::OE, 11, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_12 = MDR_PORTA_OE_Pin_12_Values<MDR_PORTA::OE, 12, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_13 = MDR_PORTA_OE_Pin_13_Values<MDR_PORTA::OE, 13, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_14 = MDR_PORTA_OE_Pin_14_Values<MDR_PORTA::OE, 14, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using Pin_15 = MDR_PORTA_OE_Pin_15_Values<MDR_PORTA::OE, 15, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using FieldValues = MDR_PORTA_OE_Pin_15_Values<MDR_PORTA::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40080004, 32, ReadWriteMode, MDR_PORTAOEBase, T...> ;

  struct MDR_PORTAFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40080008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_FUNC_Pin_0_Values<MDR_PORTA::FUNC, 0, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_1 = MDR_PORTA_FUNC_Pin_1_Values<MDR_PORTA::FUNC, 2, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_2 = MDR_PORTA_FUNC_Pin_2_Values<MDR_PORTA::FUNC, 4, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_3 = MDR_PORTA_FUNC_Pin_3_Values<MDR_PORTA::FUNC, 6, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_4 = MDR_PORTA_FUNC_Pin_4_Values<MDR_PORTA::FUNC, 8, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_5 = MDR_PORTA_FUNC_Pin_5_Values<MDR_PORTA::FUNC, 10, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_6 = MDR_PORTA_FUNC_Pin_6_Values<MDR_PORTA::FUNC, 12, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_7 = MDR_PORTA_FUNC_Pin_7_Values<MDR_PORTA::FUNC, 14, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_8 = MDR_PORTA_FUNC_Pin_8_Values<MDR_PORTA::FUNC, 16, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_9 = MDR_PORTA_FUNC_Pin_9_Values<MDR_PORTA::FUNC, 18, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_10 = MDR_PORTA_FUNC_Pin_10_Values<MDR_PORTA::FUNC, 20, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_11 = MDR_PORTA_FUNC_Pin_11_Values<MDR_PORTA::FUNC, 22, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_12 = MDR_PORTA_FUNC_Pin_12_Values<MDR_PORTA::FUNC, 24, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_13 = MDR_PORTA_FUNC_Pin_13_Values<MDR_PORTA::FUNC, 26, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_14 = MDR_PORTA_FUNC_Pin_14_Values<MDR_PORTA::FUNC, 28, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using Pin_15 = MDR_PORTA_FUNC_Pin_15_Values<MDR_PORTA::FUNC, 30, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using FieldValues = MDR_PORTA_FUNC_Pin_15_Values<MDR_PORTA::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40080008, 32, ReadWriteMode, MDR_PORTAFUNCBase, T...> ;

  struct MDR_PORTAANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4008000C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_ANALOG_Pin_0_Values<MDR_PORTA::ANALOG, 0, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_1 = MDR_PORTA_ANALOG_Pin_1_Values<MDR_PORTA::ANALOG, 1, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_2 = MDR_PORTA_ANALOG_Pin_2_Values<MDR_PORTA::ANALOG, 2, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_3 = MDR_PORTA_ANALOG_Pin_3_Values<MDR_PORTA::ANALOG, 3, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_4 = MDR_PORTA_ANALOG_Pin_4_Values<MDR_PORTA::ANALOG, 4, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_5 = MDR_PORTA_ANALOG_Pin_5_Values<MDR_PORTA::ANALOG, 5, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_6 = MDR_PORTA_ANALOG_Pin_6_Values<MDR_PORTA::ANALOG, 6, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_7 = MDR_PORTA_ANALOG_Pin_7_Values<MDR_PORTA::ANALOG, 7, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_8 = MDR_PORTA_ANALOG_Pin_8_Values<MDR_PORTA::ANALOG, 8, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_9 = MDR_PORTA_ANALOG_Pin_9_Values<MDR_PORTA::ANALOG, 9, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_10 = MDR_PORTA_ANALOG_Pin_10_Values<MDR_PORTA::ANALOG, 10, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_11 = MDR_PORTA_ANALOG_Pin_11_Values<MDR_PORTA::ANALOG, 11, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_12 = MDR_PORTA_ANALOG_Pin_12_Values<MDR_PORTA::ANALOG, 12, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_13 = MDR_PORTA_ANALOG_Pin_13_Values<MDR_PORTA::ANALOG, 13, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_14 = MDR_PORTA_ANALOG_Pin_14_Values<MDR_PORTA::ANALOG, 14, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using Pin_15 = MDR_PORTA_ANALOG_Pin_15_Values<MDR_PORTA::ANALOG, 15, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using FieldValues = MDR_PORTA_ANALOG_Pin_15_Values<MDR_PORTA::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4008000C, 32, ReadWriteMode, MDR_PORTAANALOGBase, T...> ;

  struct MDR_PORTAPULLBase {} ;

  struct PULL : public RegisterBase<0x40080010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTA_PULL_Down_Pin_0_Values<MDR_PORTA::PULL, 0, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_1 = MDR_PORTA_PULL_Down_Pin_1_Values<MDR_PORTA::PULL, 1, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_2 = MDR_PORTA_PULL_Down_Pin_2_Values<MDR_PORTA::PULL, 2, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_3 = MDR_PORTA_PULL_Down_Pin_3_Values<MDR_PORTA::PULL, 3, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_4 = MDR_PORTA_PULL_Down_Pin_4_Values<MDR_PORTA::PULL, 4, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_5 = MDR_PORTA_PULL_Down_Pin_5_Values<MDR_PORTA::PULL, 5, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_6 = MDR_PORTA_PULL_Down_Pin_6_Values<MDR_PORTA::PULL, 6, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_7 = MDR_PORTA_PULL_Down_Pin_7_Values<MDR_PORTA::PULL, 7, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_8 = MDR_PORTA_PULL_Down_Pin_8_Values<MDR_PORTA::PULL, 8, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_9 = MDR_PORTA_PULL_Down_Pin_9_Values<MDR_PORTA::PULL, 9, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_10 = MDR_PORTA_PULL_Down_Pin_10_Values<MDR_PORTA::PULL, 10, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_11 = MDR_PORTA_PULL_Down_Pin_11_Values<MDR_PORTA::PULL, 11, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_12 = MDR_PORTA_PULL_Down_Pin_12_Values<MDR_PORTA::PULL, 12, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_13 = MDR_PORTA_PULL_Down_Pin_13_Values<MDR_PORTA::PULL, 13, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_14 = MDR_PORTA_PULL_Down_Pin_14_Values<MDR_PORTA::PULL, 14, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using Down_Pin_15 = MDR_PORTA_PULL_Down_Pin_15_Values<MDR_PORTA::PULL, 15, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_0 = MDR_PORTA_PULL_UP_Pin_0_Values<MDR_PORTA::PULL, 16, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_1 = MDR_PORTA_PULL_UP_Pin_1_Values<MDR_PORTA::PULL, 17, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_2 = MDR_PORTA_PULL_UP_Pin_2_Values<MDR_PORTA::PULL, 18, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_3 = MDR_PORTA_PULL_UP_Pin_3_Values<MDR_PORTA::PULL, 19, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_4 = MDR_PORTA_PULL_UP_Pin_4_Values<MDR_PORTA::PULL, 20, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_5 = MDR_PORTA_PULL_UP_Pin_5_Values<MDR_PORTA::PULL, 21, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_6 = MDR_PORTA_PULL_UP_Pin_6_Values<MDR_PORTA::PULL, 22, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_7 = MDR_PORTA_PULL_UP_Pin_7_Values<MDR_PORTA::PULL, 23, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_8 = MDR_PORTA_PULL_UP_Pin_8_Values<MDR_PORTA::PULL, 24, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_9 = MDR_PORTA_PULL_UP_Pin_9_Values<MDR_PORTA::PULL, 25, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_10 = MDR_PORTA_PULL_UP_Pin_10_Values<MDR_PORTA::PULL, 26, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_11 = MDR_PORTA_PULL_UP_Pin_11_Values<MDR_PORTA::PULL, 27, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_12 = MDR_PORTA_PULL_UP_Pin_12_Values<MDR_PORTA::PULL, 28, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_13 = MDR_PORTA_PULL_UP_Pin_13_Values<MDR_PORTA::PULL, 29, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_14 = MDR_PORTA_PULL_UP_Pin_14_Values<MDR_PORTA::PULL, 30, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using UP_Pin_15 = MDR_PORTA_PULL_UP_Pin_15_Values<MDR_PORTA::PULL, 31, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using FieldValues = MDR_PORTA_PULL_UP_Pin_15_Values<MDR_PORTA::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40080010, 32, ReadWriteMode, MDR_PORTAPULLBase, T...> ;

  struct MDR_PORTAPDBase {} ;

  struct PD : public RegisterBase<0x40080014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTA_PD_Driver_Pin_0_Values<MDR_PORTA::PD, 0, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_1 = MDR_PORTA_PD_Driver_Pin_1_Values<MDR_PORTA::PD, 1, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_2 = MDR_PORTA_PD_Driver_Pin_2_Values<MDR_PORTA::PD, 2, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_3 = MDR_PORTA_PD_Driver_Pin_3_Values<MDR_PORTA::PD, 3, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_4 = MDR_PORTA_PD_Driver_Pin_4_Values<MDR_PORTA::PD, 4, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_5 = MDR_PORTA_PD_Driver_Pin_5_Values<MDR_PORTA::PD, 5, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_6 = MDR_PORTA_PD_Driver_Pin_6_Values<MDR_PORTA::PD, 6, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_7 = MDR_PORTA_PD_Driver_Pin_7_Values<MDR_PORTA::PD, 7, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_8 = MDR_PORTA_PD_Driver_Pin_8_Values<MDR_PORTA::PD, 8, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_9 = MDR_PORTA_PD_Driver_Pin_9_Values<MDR_PORTA::PD, 9, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_10 = MDR_PORTA_PD_Driver_Pin_10_Values<MDR_PORTA::PD, 10, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_11 = MDR_PORTA_PD_Driver_Pin_11_Values<MDR_PORTA::PD, 11, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_12 = MDR_PORTA_PD_Driver_Pin_12_Values<MDR_PORTA::PD, 12, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_13 = MDR_PORTA_PD_Driver_Pin_13_Values<MDR_PORTA::PD, 13, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_14 = MDR_PORTA_PD_Driver_Pin_14_Values<MDR_PORTA::PD, 14, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Driver_Pin_15 = MDR_PORTA_PD_Driver_Pin_15_Values<MDR_PORTA::PD, 15, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_0 = MDR_PORTA_PD_Schmitt_Pin_0_Values<MDR_PORTA::PD, 16, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTA_PD_Schmitt_Pin_1_Values<MDR_PORTA::PD, 17, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTA_PD_Schmitt_Pin_2_Values<MDR_PORTA::PD, 18, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTA_PD_Schmitt_Pin_3_Values<MDR_PORTA::PD, 19, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTA_PD_Schmitt_Pin_4_Values<MDR_PORTA::PD, 20, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTA_PD_Schmitt_Pin_5_Values<MDR_PORTA::PD, 21, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTA_PD_Schmitt_Pin_6_Values<MDR_PORTA::PD, 22, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTA_PD_Schmitt_Pin_7_Values<MDR_PORTA::PD, 23, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTA_PD_Schmitt_Pin_8_Values<MDR_PORTA::PD, 24, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTA_PD_Schmitt_Pin_9_Values<MDR_PORTA::PD, 25, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTA_PD_Schmitt_Pin_10_Values<MDR_PORTA::PD, 26, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTA_PD_Schmitt_Pin_11_Values<MDR_PORTA::PD, 27, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTA_PD_Schmitt_Pin_12_Values<MDR_PORTA::PD, 28, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTA_PD_Schmitt_Pin_13_Values<MDR_PORTA::PD, 29, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTA_PD_Schmitt_Pin_14_Values<MDR_PORTA::PD, 30, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTA_PD_Schmitt_Pin_15_Values<MDR_PORTA::PD, 31, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using FieldValues = MDR_PORTA_PD_Schmitt_Pin_15_Values<MDR_PORTA::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40080014, 32, ReadWriteMode, MDR_PORTAPDBase, T...> ;

  struct MDR_PORTAPWRBase {} ;

  struct PWR : public RegisterBase<0x40080018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_PWR_Pin_0_Values<MDR_PORTA::PWR, 0, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_1 = MDR_PORTA_PWR_Pin_1_Values<MDR_PORTA::PWR, 2, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_2 = MDR_PORTA_PWR_Pin_2_Values<MDR_PORTA::PWR, 4, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_3 = MDR_PORTA_PWR_Pin_3_Values<MDR_PORTA::PWR, 6, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_4 = MDR_PORTA_PWR_Pin_4_Values<MDR_PORTA::PWR, 8, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_5 = MDR_PORTA_PWR_Pin_5_Values<MDR_PORTA::PWR, 10, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_6 = MDR_PORTA_PWR_Pin_6_Values<MDR_PORTA::PWR, 12, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_7 = MDR_PORTA_PWR_Pin_7_Values<MDR_PORTA::PWR, 14, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_8 = MDR_PORTA_PWR_Pin_8_Values<MDR_PORTA::PWR, 16, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_9 = MDR_PORTA_PWR_Pin_9_Values<MDR_PORTA::PWR, 18, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_10 = MDR_PORTA_PWR_Pin_10_Values<MDR_PORTA::PWR, 20, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_11 = MDR_PORTA_PWR_Pin_11_Values<MDR_PORTA::PWR, 22, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_12 = MDR_PORTA_PWR_Pin_12_Values<MDR_PORTA::PWR, 24, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_13 = MDR_PORTA_PWR_Pin_13_Values<MDR_PORTA::PWR, 26, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_14 = MDR_PORTA_PWR_Pin_14_Values<MDR_PORTA::PWR, 28, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using Pin_15 = MDR_PORTA_PWR_Pin_15_Values<MDR_PORTA::PWR, 30, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using FieldValues = MDR_PORTA_PWR_Pin_15_Values<MDR_PORTA::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40080018, 32, ReadWriteMode, MDR_PORTAPWRBase, T...> ;

  struct MDR_PORTAGFENBase {} ;

  struct GFEN : public RegisterBase<0x4008001C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTA_GFEN_Pin_0_Values<MDR_PORTA::GFEN, 0, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_1 = MDR_PORTA_GFEN_Pin_1_Values<MDR_PORTA::GFEN, 1, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_2 = MDR_PORTA_GFEN_Pin_2_Values<MDR_PORTA::GFEN, 2, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_3 = MDR_PORTA_GFEN_Pin_3_Values<MDR_PORTA::GFEN, 3, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_4 = MDR_PORTA_GFEN_Pin_4_Values<MDR_PORTA::GFEN, 4, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_5 = MDR_PORTA_GFEN_Pin_5_Values<MDR_PORTA::GFEN, 5, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_6 = MDR_PORTA_GFEN_Pin_6_Values<MDR_PORTA::GFEN, 6, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_7 = MDR_PORTA_GFEN_Pin_7_Values<MDR_PORTA::GFEN, 7, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_8 = MDR_PORTA_GFEN_Pin_8_Values<MDR_PORTA::GFEN, 8, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_9 = MDR_PORTA_GFEN_Pin_9_Values<MDR_PORTA::GFEN, 9, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_10 = MDR_PORTA_GFEN_Pin_10_Values<MDR_PORTA::GFEN, 10, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_11 = MDR_PORTA_GFEN_Pin_11_Values<MDR_PORTA::GFEN, 11, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_12 = MDR_PORTA_GFEN_Pin_12_Values<MDR_PORTA::GFEN, 12, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_13 = MDR_PORTA_GFEN_Pin_13_Values<MDR_PORTA::GFEN, 13, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_14 = MDR_PORTA_GFEN_Pin_14_Values<MDR_PORTA::GFEN, 14, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using Pin_15 = MDR_PORTA_GFEN_Pin_15_Values<MDR_PORTA::GFEN, 15, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using FieldValues = MDR_PORTA_GFEN_Pin_15_Values<MDR_PORTA::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4008001C, 32, ReadWriteMode, MDR_PORTAGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTAREGISTERS_HPP)
