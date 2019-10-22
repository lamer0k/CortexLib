/*******************************************************************************
* Filename      : mdrportaregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
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

  struct RXTX : public RegisterBase<0x400A8000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_RXTX_Pin_%s_Values<MDR_PORTA::RXTX, 0, 1, ReadWriteMode, MDR_PORTARXTXBase> ;
    using FieldValues = MDR_PORTA_RXTX_Pin_%s_Values<MDR_PORTA::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400A8000, 32, ReadWriteMode, MDR_PORTARXTXBase, T...> ;

  struct MDR_PORTAOEBase {} ;

  struct OE : public RegisterBase<0x400A8004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_OE_Pin_%s_Values<MDR_PORTA::OE, 0, 1, ReadWriteMode, MDR_PORTAOEBase> ;
    using FieldValues = MDR_PORTA_OE_Pin_%s_Values<MDR_PORTA::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400A8004, 32, ReadWriteMode, MDR_PORTAOEBase, T...> ;

  struct MDR_PORTAFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400A8008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_FUNC_Pin_%s_Values<MDR_PORTA::FUNC, 0, 2, ReadWriteMode, MDR_PORTAFUNCBase> ;
    using FieldValues = MDR_PORTA_FUNC_Pin_%s_Values<MDR_PORTA::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400A8008, 32, ReadWriteMode, MDR_PORTAFUNCBase, T...> ;

  struct MDR_PORTAANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400A800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_ANALOG_Pin_%s_Values<MDR_PORTA::ANALOG, 0, 1, ReadWriteMode, MDR_PORTAANALOGBase> ;
    using FieldValues = MDR_PORTA_ANALOG_Pin_%s_Values<MDR_PORTA::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400A800C, 32, ReadWriteMode, MDR_PORTAANALOGBase, T...> ;

  struct MDR_PORTAPULLBase {} ;

  struct PULL : public RegisterBase<0x400A8010, 32, ReadWriteMode>
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
    using UP_Pin_%s = MDR_PORTA_PULL_UP_Pin_%s_Values<MDR_PORTA::PULL, 16, 1, ReadWriteMode, MDR_PORTAPULLBase> ;
    using FieldValues = MDR_PORTA_PULL_UP_Pin_%s_Values<MDR_PORTA::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400A8010, 32, ReadWriteMode, MDR_PORTAPULLBase, T...> ;

  struct MDR_PORTAPDBase {} ;

  struct PD : public RegisterBase<0x400A8014, 32, ReadWriteMode>
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
    using Schmitt_Pin_%s = MDR_PORTA_PD_Schmitt_Pin_%s_Values<MDR_PORTA::PD, 16, 1, ReadWriteMode, MDR_PORTAPDBase> ;
    using FieldValues = MDR_PORTA_PD_Schmitt_Pin_%s_Values<MDR_PORTA::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400A8014, 32, ReadWriteMode, MDR_PORTAPDBase, T...> ;

  struct MDR_PORTAPWRBase {} ;

  struct PWR : public RegisterBase<0x400A8018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_PWR_Pin_%s_Values<MDR_PORTA::PWR, 0, 2, ReadWriteMode, MDR_PORTAPWRBase> ;
    using FieldValues = MDR_PORTA_PWR_Pin_%s_Values<MDR_PORTA::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400A8018, 32, ReadWriteMode, MDR_PORTAPWRBase, T...> ;

  struct MDR_PORTAGFENBase {} ;

  struct GFEN : public RegisterBase<0x400A801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTA_GFEN_Pin_%s_Values<MDR_PORTA::GFEN, 0, 1, ReadWriteMode, MDR_PORTAGFENBase> ;
    using FieldValues = MDR_PORTA_GFEN_Pin_%s_Values<MDR_PORTA::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400A801C, 32, ReadWriteMode, MDR_PORTAGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTAREGISTERS_HPP)
