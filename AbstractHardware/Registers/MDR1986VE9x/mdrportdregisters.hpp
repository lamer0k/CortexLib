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
    using Pin_%s = MDR_PORTD_RXTX_Pin_%s_Values<MDR_PORTD::RXTX, 0, 1, ReadWriteMode, MDR_PORTDRXTXBase> ;
    using FieldValues = MDR_PORTD_RXTX_Pin_%s_Values<MDR_PORTD::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400C0000, 32, ReadWriteMode, MDR_PORTDRXTXBase, T...> ;

  struct MDR_PORTDOEBase {} ;

  struct OE : public RegisterBase<0x400C0004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTD_OE_Pin_%s_Values<MDR_PORTD::OE, 0, 1, ReadWriteMode, MDR_PORTDOEBase> ;
    using FieldValues = MDR_PORTD_OE_Pin_%s_Values<MDR_PORTD::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400C0004, 32, ReadWriteMode, MDR_PORTDOEBase, T...> ;

  struct MDR_PORTDFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400C0008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTD_FUNC_Pin_%s_Values<MDR_PORTD::FUNC, 0, 2, ReadWriteMode, MDR_PORTDFUNCBase> ;
    using FieldValues = MDR_PORTD_FUNC_Pin_%s_Values<MDR_PORTD::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400C0008, 32, ReadWriteMode, MDR_PORTDFUNCBase, T...> ;

  struct MDR_PORTDANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400C000C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTD_ANALOG_Pin_%s_Values<MDR_PORTD::ANALOG, 0, 1, ReadWriteMode, MDR_PORTDANALOGBase> ;
    using FieldValues = MDR_PORTD_ANALOG_Pin_%s_Values<MDR_PORTD::ANALOG, 0, 0, NoAccess, NoAccess> ;
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
    using UP_Pin_%s = MDR_PORTD_PULL_UP_Pin_%s_Values<MDR_PORTD::PULL, 16, 1, ReadWriteMode, MDR_PORTDPULLBase> ;
    using FieldValues = MDR_PORTD_PULL_UP_Pin_%s_Values<MDR_PORTD::PULL, 0, 0, NoAccess, NoAccess> ;
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
    using Schmitt_Pin_%s = MDR_PORTD_PD_Schmitt_Pin_%s_Values<MDR_PORTD::PD, 16, 1, ReadWriteMode, MDR_PORTDPDBase> ;
    using FieldValues = MDR_PORTD_PD_Schmitt_Pin_%s_Values<MDR_PORTD::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400C0014, 32, ReadWriteMode, MDR_PORTDPDBase, T...> ;

  struct MDR_PORTDPWRBase {} ;

  struct PWR : public RegisterBase<0x400C0018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTD_PWR_Pin_%s_Values<MDR_PORTD::PWR, 0, 2, ReadWriteMode, MDR_PORTDPWRBase> ;
    using FieldValues = MDR_PORTD_PWR_Pin_%s_Values<MDR_PORTD::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400C0018, 32, ReadWriteMode, MDR_PORTDPWRBase, T...> ;

  struct MDR_PORTDGFENBase {} ;

  struct GFEN : public RegisterBase<0x400C001C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTD_GFEN_Pin_%s_Values<MDR_PORTD::GFEN, 0, 1, ReadWriteMode, MDR_PORTDGFENBase> ;
    using FieldValues = MDR_PORTD_GFEN_Pin_%s_Values<MDR_PORTD::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400C001C, 32, ReadWriteMode, MDR_PORTDGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTDREGISTERS_HPP)
