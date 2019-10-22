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
    using Pin_%s = MDR_PORTF_RXTX_Pin_%s_Values<MDR_PORTF::RXTX, 0, 1, ReadWriteMode, MDR_PORTFRXTXBase> ;
    using FieldValues = MDR_PORTF_RXTX_Pin_%s_Values<MDR_PORTF::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x400E8000, 32, ReadWriteMode, MDR_PORTFRXTXBase, T...> ;

  struct MDR_PORTFOEBase {} ;

  struct OE : public RegisterBase<0x400E8004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTF_OE_Pin_%s_Values<MDR_PORTF::OE, 0, 1, ReadWriteMode, MDR_PORTFOEBase> ;
    using FieldValues = MDR_PORTF_OE_Pin_%s_Values<MDR_PORTF::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x400E8004, 32, ReadWriteMode, MDR_PORTFOEBase, T...> ;

  struct MDR_PORTFFUNCBase {} ;

  struct FUNC : public RegisterBase<0x400E8008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTF_FUNC_Pin_%s_Values<MDR_PORTF::FUNC, 0, 2, ReadWriteMode, MDR_PORTFFUNCBase> ;
    using FieldValues = MDR_PORTF_FUNC_Pin_%s_Values<MDR_PORTF::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x400E8008, 32, ReadWriteMode, MDR_PORTFFUNCBase, T...> ;

  struct MDR_PORTFANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x400E800C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTF_ANALOG_Pin_%s_Values<MDR_PORTF::ANALOG, 0, 1, ReadWriteMode, MDR_PORTFANALOGBase> ;
    using FieldValues = MDR_PORTF_ANALOG_Pin_%s_Values<MDR_PORTF::ANALOG, 0, 0, NoAccess, NoAccess> ;
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
    using UP_Pin_%s = MDR_PORTF_PULL_UP_Pin_%s_Values<MDR_PORTF::PULL, 16, 1, ReadWriteMode, MDR_PORTFPULLBase> ;
    using FieldValues = MDR_PORTF_PULL_UP_Pin_%s_Values<MDR_PORTF::PULL, 0, 0, NoAccess, NoAccess> ;
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
    using Schmitt_Pin_%s = MDR_PORTF_PD_Schmitt_Pin_%s_Values<MDR_PORTF::PD, 16, 1, ReadWriteMode, MDR_PORTFPDBase> ;
    using FieldValues = MDR_PORTF_PD_Schmitt_Pin_%s_Values<MDR_PORTF::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x400E8014, 32, ReadWriteMode, MDR_PORTFPDBase, T...> ;

  struct MDR_PORTFPWRBase {} ;

  struct PWR : public RegisterBase<0x400E8018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTF_PWR_Pin_%s_Values<MDR_PORTF::PWR, 0, 2, ReadWriteMode, MDR_PORTFPWRBase> ;
    using FieldValues = MDR_PORTF_PWR_Pin_%s_Values<MDR_PORTF::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x400E8018, 32, ReadWriteMode, MDR_PORTFPWRBase, T...> ;

  struct MDR_PORTFGFENBase {} ;

  struct GFEN : public RegisterBase<0x400E801C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTF_GFEN_Pin_%s_Values<MDR_PORTF::GFEN, 0, 1, ReadWriteMode, MDR_PORTFGFENBase> ;
    using FieldValues = MDR_PORTF_GFEN_Pin_%s_Values<MDR_PORTF::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x400E801C, 32, ReadWriteMode, MDR_PORTFGFENBase, T...> ;

} ;

#endif //#if !defined(MDRPORTFREGISTERS_HPP)
