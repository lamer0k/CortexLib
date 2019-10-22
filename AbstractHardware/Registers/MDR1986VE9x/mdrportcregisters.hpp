/*******************************************************************************
* Filename      : mdrportcregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE9x device.
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

  struct RXTX : public RegisterBase<0x400B8000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_RXTX_Pin_%s_Values<MDR_PORTC::RXTX, 0, 1, ReadWriteMode, MDR_PORTCRXTXBase> ;
    using FieldValues = MDR_PORTC_RXTX_Pin_%s_Values<MDR_PORTC::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400B8000, 32, ReadWriteMode, MDR_PORTCRXTXBase, T...> ;

  struct MDR_PORTCOEBase {} ;

  struct OE : public RegisterBase<0x400B8004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_OE_Pin_%s_Values<MDR_PORTC::OE, 0, 1, ReadWriteMode, MDR_PORTCOEBase> ;
    using FieldValues = MDR_PORTC_OE_Pin_%s_Values<MDR_PORTC::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400B8004, 32, ReadWriteMode, MDR_PORTCOEBase, T...> ;

  struct MDR_PORTCFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400B8008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_FUNC_Pin_%s_Values<MDR_PORTC::FUNC, 0, 2, ReadWriteMode, MDR_PORTCFUNCBase> ;
    using FieldValues = MDR_PORTC_FUNC_Pin_%s_Values<MDR_PORTC::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400B8008, 32, ReadWriteMode, MDR_PORTCFUNCBase, T...> ;

  struct MDR_PORTCANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400B800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_ANALOG_Pin_%s_Values<MDR_PORTC::ANALOG, 0, 1, ReadWriteMode, MDR_PORTCANALOGBase> ;
    using FieldValues = MDR_PORTC_ANALOG_Pin_%s_Values<MDR_PORTC::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x400B800C, 32, ReadWriteMode, MDR_PORTCANALOGBase, T...> ;

  struct MDR_PORTCPULLBase {} ;

  struct PULL : public RegisterBase<0x400B8010, 32, ReadWriteMode>
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
    using UP_Pin_%s = MDR_PORTC_PULL_UP_Pin_%s_Values<MDR_PORTC::PULL, 16, 1, ReadWriteMode, MDR_PORTCPULLBase> ;
    using FieldValues = MDR_PORTC_PULL_UP_Pin_%s_Values<MDR_PORTC::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x400B8010, 32, ReadWriteMode, MDR_PORTCPULLBase, T...> ;

  struct MDR_PORTCPDBase {} ;

  struct PD : public RegisterBase<0x400B8014, 32, ReadWriteMode>
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
    using Schmitt_Pin_%s = MDR_PORTC_PD_Schmitt_Pin_%s_Values<MDR_PORTC::PD, 16, 1, ReadWriteMode, MDR_PORTCPDBase> ;
    using FieldValues = MDR_PORTC_PD_Schmitt_Pin_%s_Values<MDR_PORTC::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400B8014, 32, ReadWriteMode, MDR_PORTCPDBase, T...> ;

  struct MDR_PORTCPWRBase {} ;

  struct PWR : public RegisterBase<0x400B8018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_PWR_Pin_%s_Values<MDR_PORTC::PWR, 0, 2, ReadWriteMode, MDR_PORTCPWRBase> ;
    using FieldValues = MDR_PORTC_PWR_Pin_%s_Values<MDR_PORTC::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400B8018, 32, ReadWriteMode, MDR_PORTCPWRBase, T...> ;

  struct MDR_PORTCGFENBase {} ;

  struct GFEN : public RegisterBase<0x400B801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTC_GFEN_Pin_%s_Values<MDR_PORTC::GFEN, 0, 1, ReadWriteMode, MDR_PORTCGFENBase> ;
    using FieldValues = MDR_PORTC_GFEN_Pin_%s_Values<MDR_PORTC::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400B801C, 32, ReadWriteMode, MDR_PORTCGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTCREGISTERS_HPP)
