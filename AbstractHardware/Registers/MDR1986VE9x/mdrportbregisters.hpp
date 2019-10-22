/*******************************************************************************
* Filename      : mdrportbregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
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

  struct RXTX : public RegisterBase<0x400B0000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_RXTX_Pin_%s_Values<MDR_PORTB::RXTX, 0, 1, ReadWriteMode, MDR_PORTBRXTXBase> ;
    using FieldValues = MDR_PORTB_RXTX_Pin_%s_Values<MDR_PORTB::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400B0000, 32, ReadWriteMode, MDR_PORTBRXTXBase, T...> ;

  struct MDR_PORTBOEBase {} ;

  struct OE : public RegisterBase<0x400B0004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_OE_Pin_%s_Values<MDR_PORTB::OE, 0, 1, ReadWriteMode, MDR_PORTBOEBase> ;
    using FieldValues = MDR_PORTB_OE_Pin_%s_Values<MDR_PORTB::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400B0004, 32, ReadWriteMode, MDR_PORTBOEBase, T...> ;

  struct MDR_PORTBFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400B0008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_FUNC_Pin_%s_Values<MDR_PORTB::FUNC, 0, 2, ReadWriteMode, MDR_PORTBFUNCBase> ;
    using FieldValues = MDR_PORTB_FUNC_Pin_%s_Values<MDR_PORTB::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400B0008, 32, ReadWriteMode, MDR_PORTBFUNCBase, T...> ;

  struct MDR_PORTBANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400B000C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_ANALOG_Pin_%s_Values<MDR_PORTB::ANALOG, 0, 1, ReadWriteMode, MDR_PORTBANALOGBase> ;
    using FieldValues = MDR_PORTB_ANALOG_Pin_%s_Values<MDR_PORTB::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400B000C, 32, ReadWriteMode, MDR_PORTBANALOGBase, T...> ;

  struct MDR_PORTBPULLBase {} ;

  struct PULL : public RegisterBase<0x400B0010, 32, ReadWriteMode>
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
    using UP_Pin_%s = MDR_PORTB_PULL_UP_Pin_%s_Values<MDR_PORTB::PULL, 16, 1, ReadWriteMode, MDR_PORTBPULLBase> ;
    using FieldValues = MDR_PORTB_PULL_UP_Pin_%s_Values<MDR_PORTB::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400B0010, 32, ReadWriteMode, MDR_PORTBPULLBase, T...> ;

  struct MDR_PORTBPDBase {} ;

  struct PD : public RegisterBase<0x400B0014, 32, ReadWriteMode>
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
    using Schmitt_Pin_%s = MDR_PORTB_PD_Schmitt_Pin_%s_Values<MDR_PORTB::PD, 16, 1, ReadWriteMode, MDR_PORTBPDBase> ;
    using FieldValues = MDR_PORTB_PD_Schmitt_Pin_%s_Values<MDR_PORTB::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400B0014, 32, ReadWriteMode, MDR_PORTBPDBase, T...> ;

  struct MDR_PORTBPWRBase {} ;

  struct PWR : public RegisterBase<0x400B0018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_PWR_Pin_%s_Values<MDR_PORTB::PWR, 0, 2, ReadWriteMode, MDR_PORTBPWRBase> ;
    using FieldValues = MDR_PORTB_PWR_Pin_%s_Values<MDR_PORTB::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400B0018, 32, ReadWriteMode, MDR_PORTBPWRBase, T...> ;

  struct MDR_PORTBGFENBase {} ;

  struct GFEN : public RegisterBase<0x400B001C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTB_GFEN_Pin_%s_Values<MDR_PORTB::GFEN, 0, 1, ReadWriteMode, MDR_PORTBGFENBase> ;
    using FieldValues = MDR_PORTB_GFEN_Pin_%s_Values<MDR_PORTB::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400B001C, 32, ReadWriteMode, MDR_PORTBGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTBREGISTERS_HPP)
