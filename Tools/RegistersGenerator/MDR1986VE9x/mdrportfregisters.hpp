/*******************************************************************************
* Filename      : mdrportfregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRPORTFREGISTERS_HPP)
#define MDRPORTFREGISTERS_HPP

#include "mdrportffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTF
{
  struct MDR_PORTFRXTXBase {} ;

  struct RXTX : public RegisterBase<0x400E8000, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_RXTX_Pin_0_Values<MDR_PORTF::RXTX, 0, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_1 = MDR_PORTF_RXTX_Pin_1_Values<MDR_PORTF::RXTX, 1, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_2 = MDR_PORTF_RXTX_Pin_2_Values<MDR_PORTF::RXTX, 2, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_3 = MDR_PORTF_RXTX_Pin_3_Values<MDR_PORTF::RXTX, 3, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_4 = MDR_PORTF_RXTX_Pin_4_Values<MDR_PORTF::RXTX, 4, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_5 = MDR_PORTF_RXTX_Pin_5_Values<MDR_PORTF::RXTX, 5, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_6 = MDR_PORTF_RXTX_Pin_6_Values<MDR_PORTF::RXTX, 6, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_7 = MDR_PORTF_RXTX_Pin_7_Values<MDR_PORTF::RXTX, 7, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_8 = MDR_PORTF_RXTX_Pin_8_Values<MDR_PORTF::RXTX, 8, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_9 = MDR_PORTF_RXTX_Pin_9_Values<MDR_PORTF::RXTX, 9, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_10 = MDR_PORTF_RXTX_Pin_10_Values<MDR_PORTF::RXTX, 10, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_11 = MDR_PORTF_RXTX_Pin_11_Values<MDR_PORTF::RXTX, 11, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_12 = MDR_PORTF_RXTX_Pin_12_Values<MDR_PORTF::RXTX, 12, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_13 = MDR_PORTF_RXTX_Pin_13_Values<MDR_PORTF::RXTX, 13, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_14 = MDR_PORTF_RXTX_Pin_14_Values<MDR_PORTF::RXTX, 14, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using Pin_15 = MDR_PORTF_RXTX_Pin_15_Values<MDR_PORTF::RXTX, 15, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using FieldValues = MDR_PORTF_RXTX_Pin_15_Values<MDR_PORTF::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400E8000, 32, ReadWriteMode, MDR_PORTFRXTXBase, T...> ;

  struct MDR_PORTFOEBase {} ;

  struct OE : public RegisterBase<0x400E8004, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_OE_Pin_0_Values<MDR_PORTF::OE, 0, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_1 = MDR_PORTF_OE_Pin_1_Values<MDR_PORTF::OE, 1, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_2 = MDR_PORTF_OE_Pin_2_Values<MDR_PORTF::OE, 2, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_3 = MDR_PORTF_OE_Pin_3_Values<MDR_PORTF::OE, 3, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_4 = MDR_PORTF_OE_Pin_4_Values<MDR_PORTF::OE, 4, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_5 = MDR_PORTF_OE_Pin_5_Values<MDR_PORTF::OE, 5, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_6 = MDR_PORTF_OE_Pin_6_Values<MDR_PORTF::OE, 6, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_7 = MDR_PORTF_OE_Pin_7_Values<MDR_PORTF::OE, 7, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_8 = MDR_PORTF_OE_Pin_8_Values<MDR_PORTF::OE, 8, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_9 = MDR_PORTF_OE_Pin_9_Values<MDR_PORTF::OE, 9, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_10 = MDR_PORTF_OE_Pin_10_Values<MDR_PORTF::OE, 10, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_11 = MDR_PORTF_OE_Pin_11_Values<MDR_PORTF::OE, 11, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_12 = MDR_PORTF_OE_Pin_12_Values<MDR_PORTF::OE, 12, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_13 = MDR_PORTF_OE_Pin_13_Values<MDR_PORTF::OE, 13, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_14 = MDR_PORTF_OE_Pin_14_Values<MDR_PORTF::OE, 14, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using Pin_15 = MDR_PORTF_OE_Pin_15_Values<MDR_PORTF::OE, 15, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using FieldValues = MDR_PORTF_OE_Pin_15_Values<MDR_PORTF::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400E8004, 32, ReadWriteMode, MDR_PORTFOEBase, T...> ;

  struct MDR_PORTFFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400E8008, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_FUNC_Pin_0_Values<MDR_PORTF::FUNC, 0, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_1 = MDR_PORTF_FUNC_Pin_1_Values<MDR_PORTF::FUNC, 2, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_2 = MDR_PORTF_FUNC_Pin_2_Values<MDR_PORTF::FUNC, 4, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_3 = MDR_PORTF_FUNC_Pin_3_Values<MDR_PORTF::FUNC, 6, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_4 = MDR_PORTF_FUNC_Pin_4_Values<MDR_PORTF::FUNC, 8, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_5 = MDR_PORTF_FUNC_Pin_5_Values<MDR_PORTF::FUNC, 10, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_6 = MDR_PORTF_FUNC_Pin_6_Values<MDR_PORTF::FUNC, 12, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_7 = MDR_PORTF_FUNC_Pin_7_Values<MDR_PORTF::FUNC, 14, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_8 = MDR_PORTF_FUNC_Pin_8_Values<MDR_PORTF::FUNC, 16, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_9 = MDR_PORTF_FUNC_Pin_9_Values<MDR_PORTF::FUNC, 18, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_10 = MDR_PORTF_FUNC_Pin_10_Values<MDR_PORTF::FUNC, 20, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_11 = MDR_PORTF_FUNC_Pin_11_Values<MDR_PORTF::FUNC, 22, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_12 = MDR_PORTF_FUNC_Pin_12_Values<MDR_PORTF::FUNC, 24, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_13 = MDR_PORTF_FUNC_Pin_13_Values<MDR_PORTF::FUNC, 26, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_14 = MDR_PORTF_FUNC_Pin_14_Values<MDR_PORTF::FUNC, 28, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using Pin_15 = MDR_PORTF_FUNC_Pin_15_Values<MDR_PORTF::FUNC, 30, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using FieldValues = MDR_PORTF_FUNC_Pin_15_Values<MDR_PORTF::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400E8008, 32, ReadWriteMode, MDR_PORTFFUNCBase, T...> ;

  struct MDR_PORTFANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400E800C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_ANALOG_Pin_0_Values<MDR_PORTF::ANALOG, 0, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_1 = MDR_PORTF_ANALOG_Pin_1_Values<MDR_PORTF::ANALOG, 1, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_2 = MDR_PORTF_ANALOG_Pin_2_Values<MDR_PORTF::ANALOG, 2, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_3 = MDR_PORTF_ANALOG_Pin_3_Values<MDR_PORTF::ANALOG, 3, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_4 = MDR_PORTF_ANALOG_Pin_4_Values<MDR_PORTF::ANALOG, 4, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_5 = MDR_PORTF_ANALOG_Pin_5_Values<MDR_PORTF::ANALOG, 5, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_6 = MDR_PORTF_ANALOG_Pin_6_Values<MDR_PORTF::ANALOG, 6, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_7 = MDR_PORTF_ANALOG_Pin_7_Values<MDR_PORTF::ANALOG, 7, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_8 = MDR_PORTF_ANALOG_Pin_8_Values<MDR_PORTF::ANALOG, 8, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_9 = MDR_PORTF_ANALOG_Pin_9_Values<MDR_PORTF::ANALOG, 9, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_10 = MDR_PORTF_ANALOG_Pin_10_Values<MDR_PORTF::ANALOG, 10, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_11 = MDR_PORTF_ANALOG_Pin_11_Values<MDR_PORTF::ANALOG, 11, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_12 = MDR_PORTF_ANALOG_Pin_12_Values<MDR_PORTF::ANALOG, 12, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_13 = MDR_PORTF_ANALOG_Pin_13_Values<MDR_PORTF::ANALOG, 13, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_14 = MDR_PORTF_ANALOG_Pin_14_Values<MDR_PORTF::ANALOG, 14, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using Pin_15 = MDR_PORTF_ANALOG_Pin_15_Values<MDR_PORTF::ANALOG, 15, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using FieldValues = MDR_PORTF_ANALOG_Pin_15_Values<MDR_PORTF::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400E800C, 32, ReadWriteMode, MDR_PORTFANALOGBase, T...> ;

  struct MDR_PORTFPULLBase {} ;

  struct PULL : public RegisterBase<0x400E8010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTF_PULL_Down_Pin_0_Values<MDR_PORTF::PULL, 0, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_1 = MDR_PORTF_PULL_Down_Pin_1_Values<MDR_PORTF::PULL, 1, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_2 = MDR_PORTF_PULL_Down_Pin_2_Values<MDR_PORTF::PULL, 2, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_3 = MDR_PORTF_PULL_Down_Pin_3_Values<MDR_PORTF::PULL, 3, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_4 = MDR_PORTF_PULL_Down_Pin_4_Values<MDR_PORTF::PULL, 4, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_5 = MDR_PORTF_PULL_Down_Pin_5_Values<MDR_PORTF::PULL, 5, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_6 = MDR_PORTF_PULL_Down_Pin_6_Values<MDR_PORTF::PULL, 6, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_7 = MDR_PORTF_PULL_Down_Pin_7_Values<MDR_PORTF::PULL, 7, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_8 = MDR_PORTF_PULL_Down_Pin_8_Values<MDR_PORTF::PULL, 8, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_9 = MDR_PORTF_PULL_Down_Pin_9_Values<MDR_PORTF::PULL, 9, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_10 = MDR_PORTF_PULL_Down_Pin_10_Values<MDR_PORTF::PULL, 10, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_11 = MDR_PORTF_PULL_Down_Pin_11_Values<MDR_PORTF::PULL, 11, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_12 = MDR_PORTF_PULL_Down_Pin_12_Values<MDR_PORTF::PULL, 12, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_13 = MDR_PORTF_PULL_Down_Pin_13_Values<MDR_PORTF::PULL, 13, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_14 = MDR_PORTF_PULL_Down_Pin_14_Values<MDR_PORTF::PULL, 14, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using Down_Pin_15 = MDR_PORTF_PULL_Down_Pin_15_Values<MDR_PORTF::PULL, 15, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_0 = MDR_PORTF_PULL_UP_Pin_0_Values<MDR_PORTF::PULL, 16, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_1 = MDR_PORTF_PULL_UP_Pin_1_Values<MDR_PORTF::PULL, 17, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_2 = MDR_PORTF_PULL_UP_Pin_2_Values<MDR_PORTF::PULL, 18, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_3 = MDR_PORTF_PULL_UP_Pin_3_Values<MDR_PORTF::PULL, 19, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_4 = MDR_PORTF_PULL_UP_Pin_4_Values<MDR_PORTF::PULL, 20, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_5 = MDR_PORTF_PULL_UP_Pin_5_Values<MDR_PORTF::PULL, 21, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_6 = MDR_PORTF_PULL_UP_Pin_6_Values<MDR_PORTF::PULL, 22, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_7 = MDR_PORTF_PULL_UP_Pin_7_Values<MDR_PORTF::PULL, 23, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_8 = MDR_PORTF_PULL_UP_Pin_8_Values<MDR_PORTF::PULL, 24, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_9 = MDR_PORTF_PULL_UP_Pin_9_Values<MDR_PORTF::PULL, 25, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_10 = MDR_PORTF_PULL_UP_Pin_10_Values<MDR_PORTF::PULL, 26, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_11 = MDR_PORTF_PULL_UP_Pin_11_Values<MDR_PORTF::PULL, 27, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_12 = MDR_PORTF_PULL_UP_Pin_12_Values<MDR_PORTF::PULL, 28, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_13 = MDR_PORTF_PULL_UP_Pin_13_Values<MDR_PORTF::PULL, 29, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_14 = MDR_PORTF_PULL_UP_Pin_14_Values<MDR_PORTF::PULL, 30, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using UP_Pin_15 = MDR_PORTF_PULL_UP_Pin_15_Values<MDR_PORTF::PULL, 31, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using FieldValues = MDR_PORTF_PULL_UP_Pin_15_Values<MDR_PORTF::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400E8010, 32, ReadWriteMode, MDR_PORTFPULLBase, T...> ;

  struct MDR_PORTFPDBase {} ;

  struct PD : public RegisterBase<0x400E8014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTF_PD_Driver_Pin_0_Values<MDR_PORTF::PD, 0, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_1 = MDR_PORTF_PD_Driver_Pin_1_Values<MDR_PORTF::PD, 1, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_2 = MDR_PORTF_PD_Driver_Pin_2_Values<MDR_PORTF::PD, 2, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_3 = MDR_PORTF_PD_Driver_Pin_3_Values<MDR_PORTF::PD, 3, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_4 = MDR_PORTF_PD_Driver_Pin_4_Values<MDR_PORTF::PD, 4, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_5 = MDR_PORTF_PD_Driver_Pin_5_Values<MDR_PORTF::PD, 5, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_6 = MDR_PORTF_PD_Driver_Pin_6_Values<MDR_PORTF::PD, 6, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_7 = MDR_PORTF_PD_Driver_Pin_7_Values<MDR_PORTF::PD, 7, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_8 = MDR_PORTF_PD_Driver_Pin_8_Values<MDR_PORTF::PD, 8, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_9 = MDR_PORTF_PD_Driver_Pin_9_Values<MDR_PORTF::PD, 9, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_10 = MDR_PORTF_PD_Driver_Pin_10_Values<MDR_PORTF::PD, 10, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_11 = MDR_PORTF_PD_Driver_Pin_11_Values<MDR_PORTF::PD, 11, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_12 = MDR_PORTF_PD_Driver_Pin_12_Values<MDR_PORTF::PD, 12, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_13 = MDR_PORTF_PD_Driver_Pin_13_Values<MDR_PORTF::PD, 13, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_14 = MDR_PORTF_PD_Driver_Pin_14_Values<MDR_PORTF::PD, 14, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Driver_Pin_15 = MDR_PORTF_PD_Driver_Pin_15_Values<MDR_PORTF::PD, 15, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_0 = MDR_PORTF_PD_Schmitt_Pin_0_Values<MDR_PORTF::PD, 16, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_1 = MDR_PORTF_PD_Schmitt_Pin_1_Values<MDR_PORTF::PD, 17, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_2 = MDR_PORTF_PD_Schmitt_Pin_2_Values<MDR_PORTF::PD, 18, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_3 = MDR_PORTF_PD_Schmitt_Pin_3_Values<MDR_PORTF::PD, 19, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_4 = MDR_PORTF_PD_Schmitt_Pin_4_Values<MDR_PORTF::PD, 20, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_5 = MDR_PORTF_PD_Schmitt_Pin_5_Values<MDR_PORTF::PD, 21, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_6 = MDR_PORTF_PD_Schmitt_Pin_6_Values<MDR_PORTF::PD, 22, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_7 = MDR_PORTF_PD_Schmitt_Pin_7_Values<MDR_PORTF::PD, 23, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_8 = MDR_PORTF_PD_Schmitt_Pin_8_Values<MDR_PORTF::PD, 24, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_9 = MDR_PORTF_PD_Schmitt_Pin_9_Values<MDR_PORTF::PD, 25, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_10 = MDR_PORTF_PD_Schmitt_Pin_10_Values<MDR_PORTF::PD, 26, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_11 = MDR_PORTF_PD_Schmitt_Pin_11_Values<MDR_PORTF::PD, 27, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_12 = MDR_PORTF_PD_Schmitt_Pin_12_Values<MDR_PORTF::PD, 28, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_13 = MDR_PORTF_PD_Schmitt_Pin_13_Values<MDR_PORTF::PD, 29, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_14 = MDR_PORTF_PD_Schmitt_Pin_14_Values<MDR_PORTF::PD, 30, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using Schmitt_Pin_15 = MDR_PORTF_PD_Schmitt_Pin_15_Values<MDR_PORTF::PD, 31, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using FieldValues = MDR_PORTF_PD_Schmitt_Pin_15_Values<MDR_PORTF::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400E8014, 32, ReadWriteMode, MDR_PORTFPDBase, T...> ;

  struct MDR_PORTFPWRBase {} ;

  struct PWR : public RegisterBase<0x400E8018, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_PWR_Pin_0_Values<MDR_PORTF::PWR, 0, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_1 = MDR_PORTF_PWR_Pin_1_Values<MDR_PORTF::PWR, 2, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_2 = MDR_PORTF_PWR_Pin_2_Values<MDR_PORTF::PWR, 4, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_3 = MDR_PORTF_PWR_Pin_3_Values<MDR_PORTF::PWR, 6, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_4 = MDR_PORTF_PWR_Pin_4_Values<MDR_PORTF::PWR, 8, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_5 = MDR_PORTF_PWR_Pin_5_Values<MDR_PORTF::PWR, 10, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_6 = MDR_PORTF_PWR_Pin_6_Values<MDR_PORTF::PWR, 12, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_7 = MDR_PORTF_PWR_Pin_7_Values<MDR_PORTF::PWR, 14, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_8 = MDR_PORTF_PWR_Pin_8_Values<MDR_PORTF::PWR, 16, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_9 = MDR_PORTF_PWR_Pin_9_Values<MDR_PORTF::PWR, 18, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_10 = MDR_PORTF_PWR_Pin_10_Values<MDR_PORTF::PWR, 20, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_11 = MDR_PORTF_PWR_Pin_11_Values<MDR_PORTF::PWR, 22, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_12 = MDR_PORTF_PWR_Pin_12_Values<MDR_PORTF::PWR, 24, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_13 = MDR_PORTF_PWR_Pin_13_Values<MDR_PORTF::PWR, 26, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_14 = MDR_PORTF_PWR_Pin_14_Values<MDR_PORTF::PWR, 28, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using Pin_15 = MDR_PORTF_PWR_Pin_15_Values<MDR_PORTF::PWR, 30, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using FieldValues = MDR_PORTF_PWR_Pin_15_Values<MDR_PORTF::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400E8018, 32, ReadWriteMode, MDR_PORTFPWRBase, T...> ;

  struct MDR_PORTFGFENBase {} ;

  struct GFEN : public RegisterBase<0x400E801C, 32, ReadWriteMode>
  {
    using Pin_0 = MDR_PORTF_GFEN_Pin_0_Values<MDR_PORTF::GFEN, 0, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_1 = MDR_PORTF_GFEN_Pin_1_Values<MDR_PORTF::GFEN, 1, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_2 = MDR_PORTF_GFEN_Pin_2_Values<MDR_PORTF::GFEN, 2, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_3 = MDR_PORTF_GFEN_Pin_3_Values<MDR_PORTF::GFEN, 3, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_4 = MDR_PORTF_GFEN_Pin_4_Values<MDR_PORTF::GFEN, 4, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_5 = MDR_PORTF_GFEN_Pin_5_Values<MDR_PORTF::GFEN, 5, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_6 = MDR_PORTF_GFEN_Pin_6_Values<MDR_PORTF::GFEN, 6, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_7 = MDR_PORTF_GFEN_Pin_7_Values<MDR_PORTF::GFEN, 7, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_8 = MDR_PORTF_GFEN_Pin_8_Values<MDR_PORTF::GFEN, 8, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_9 = MDR_PORTF_GFEN_Pin_9_Values<MDR_PORTF::GFEN, 9, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_10 = MDR_PORTF_GFEN_Pin_10_Values<MDR_PORTF::GFEN, 10, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_11 = MDR_PORTF_GFEN_Pin_11_Values<MDR_PORTF::GFEN, 11, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_12 = MDR_PORTF_GFEN_Pin_12_Values<MDR_PORTF::GFEN, 12, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_13 = MDR_PORTF_GFEN_Pin_13_Values<MDR_PORTF::GFEN, 13, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_14 = MDR_PORTF_GFEN_Pin_14_Values<MDR_PORTF::GFEN, 14, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using Pin_15 = MDR_PORTF_GFEN_Pin_15_Values<MDR_PORTF::GFEN, 15, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using FieldValues = MDR_PORTF_GFEN_Pin_15_Values<MDR_PORTF::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400E801C, 32, ReadWriteMode, MDR_PORTFGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTFREGISTERS_HPP)
