/*******************************************************************************
* Filename      : mdrportiregisters.hpp
*
* Details       : GPIO Port Control. This header file is auto-generated for
*                 MDR1986VE3 device.
*
*
*******************************************************************************/

#if !defined(MDRPORTIREGISTERS_HPP)
#define MDRPORTIREGISTERS_HPP

#include "mdrportifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_PORTI
{
  struct MDR_PORTIRXTXBase {} ;

  struct RXTX : public RegisterBase<0x40140000, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_RXTX_Pin_%s_Values<MDR_PORTI::RXTX, 0, 1, ReadWriteMode, MDR_PORTIRXTXBase> ;
    using FieldValues = MDR_PORTI_RXTX_Pin_%s_Values<MDR_PORTI::RXTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXTXPack  = Register<0x40140000, 32, ReadWriteMode, MDR_PORTIRXTXBase, T...> ;

  struct MDR_PORTIOEBase {} ;

  struct OE : public RegisterBase<0x40140004, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_OE_Pin_%s_Values<MDR_PORTI::OE, 0, 1, ReadWriteMode, MDR_PORTIOEBase> ;
    using FieldValues = MDR_PORTI_OE_Pin_%s_Values<MDR_PORTI::OE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OEPack  = Register<0x40140004, 32, ReadWriteMode, MDR_PORTIOEBase, T...> ;

  struct MDR_PORTIFUNCBase {} ;

  struct FUNC : public RegisterBase<0x40140008, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_FUNC_Pin_%s_Values<MDR_PORTI::FUNC, 0, 2, ReadWriteMode, MDR_PORTIFUNCBase> ;
    using FieldValues = MDR_PORTI_FUNC_Pin_%s_Values<MDR_PORTI::FUNC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FUNCPack  = Register<0x40140008, 32, ReadWriteMode, MDR_PORTIFUNCBase, T...> ;

  struct MDR_PORTIANALOGBase {} ;

  struct ANALOG : public RegisterBase<0x4014000C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_ANALOG_Pin_%s_Values<MDR_PORTI::ANALOG, 0, 1, ReadWriteMode, MDR_PORTIANALOGBase> ;
    using FieldValues = MDR_PORTI_ANALOG_Pin_%s_Values<MDR_PORTI::ANALOG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ANALOGPack  = Register<0x4014000C, 32, ReadWriteMode, MDR_PORTIANALOGBase, T...> ;

  struct MDR_PORTIPULLBase {} ;

  struct PULL : public RegisterBase<0x40140010, 32, ReadWriteMode>
  {
    using Down_Pin_0 = MDR_PORTI_PULL_Down_Pin_0_Values<MDR_PORTI::PULL, 0, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_1 = MDR_PORTI_PULL_Down_Pin_1_Values<MDR_PORTI::PULL, 1, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_2 = MDR_PORTI_PULL_Down_Pin_2_Values<MDR_PORTI::PULL, 2, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_3 = MDR_PORTI_PULL_Down_Pin_3_Values<MDR_PORTI::PULL, 3, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_4 = MDR_PORTI_PULL_Down_Pin_4_Values<MDR_PORTI::PULL, 4, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_5 = MDR_PORTI_PULL_Down_Pin_5_Values<MDR_PORTI::PULL, 5, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_6 = MDR_PORTI_PULL_Down_Pin_6_Values<MDR_PORTI::PULL, 6, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_7 = MDR_PORTI_PULL_Down_Pin_7_Values<MDR_PORTI::PULL, 7, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_8 = MDR_PORTI_PULL_Down_Pin_8_Values<MDR_PORTI::PULL, 8, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_9 = MDR_PORTI_PULL_Down_Pin_9_Values<MDR_PORTI::PULL, 9, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_10 = MDR_PORTI_PULL_Down_Pin_10_Values<MDR_PORTI::PULL, 10, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_11 = MDR_PORTI_PULL_Down_Pin_11_Values<MDR_PORTI::PULL, 11, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_12 = MDR_PORTI_PULL_Down_Pin_12_Values<MDR_PORTI::PULL, 12, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_13 = MDR_PORTI_PULL_Down_Pin_13_Values<MDR_PORTI::PULL, 13, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_14 = MDR_PORTI_PULL_Down_Pin_14_Values<MDR_PORTI::PULL, 14, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using Down_Pin_15 = MDR_PORTI_PULL_Down_Pin_15_Values<MDR_PORTI::PULL, 15, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using UP_Pin_%s = MDR_PORTI_PULL_UP_Pin_%s_Values<MDR_PORTI::PULL, 16, 1, ReadWriteMode, MDR_PORTIPULLBase> ;
    using FieldValues = MDR_PORTI_PULL_UP_Pin_%s_Values<MDR_PORTI::PULL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PULLPack  = Register<0x40140010, 32, ReadWriteMode, MDR_PORTIPULLBase, T...> ;

  struct MDR_PORTIPDBase {} ;

  struct PD : public RegisterBase<0x40140014, 32, ReadWriteMode>
  {
    using Driver_Pin_0 = MDR_PORTI_PD_Driver_Pin_0_Values<MDR_PORTI::PD, 0, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_1 = MDR_PORTI_PD_Driver_Pin_1_Values<MDR_PORTI::PD, 1, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_2 = MDR_PORTI_PD_Driver_Pin_2_Values<MDR_PORTI::PD, 2, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_3 = MDR_PORTI_PD_Driver_Pin_3_Values<MDR_PORTI::PD, 3, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_4 = MDR_PORTI_PD_Driver_Pin_4_Values<MDR_PORTI::PD, 4, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_5 = MDR_PORTI_PD_Driver_Pin_5_Values<MDR_PORTI::PD, 5, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_6 = MDR_PORTI_PD_Driver_Pin_6_Values<MDR_PORTI::PD, 6, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_7 = MDR_PORTI_PD_Driver_Pin_7_Values<MDR_PORTI::PD, 7, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_8 = MDR_PORTI_PD_Driver_Pin_8_Values<MDR_PORTI::PD, 8, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_9 = MDR_PORTI_PD_Driver_Pin_9_Values<MDR_PORTI::PD, 9, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_10 = MDR_PORTI_PD_Driver_Pin_10_Values<MDR_PORTI::PD, 10, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_11 = MDR_PORTI_PD_Driver_Pin_11_Values<MDR_PORTI::PD, 11, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_12 = MDR_PORTI_PD_Driver_Pin_12_Values<MDR_PORTI::PD, 12, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_13 = MDR_PORTI_PD_Driver_Pin_13_Values<MDR_PORTI::PD, 13, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_14 = MDR_PORTI_PD_Driver_Pin_14_Values<MDR_PORTI::PD, 14, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Driver_Pin_15 = MDR_PORTI_PD_Driver_Pin_15_Values<MDR_PORTI::PD, 15, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using Schmitt_Pin_%s = MDR_PORTI_PD_Schmitt_Pin_%s_Values<MDR_PORTI::PD, 16, 1, ReadWriteMode, MDR_PORTIPDBase> ;
    using FieldValues = MDR_PORTI_PD_Schmitt_Pin_%s_Values<MDR_PORTI::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40140014, 32, ReadWriteMode, MDR_PORTIPDBase, T...> ;

  struct MDR_PORTIPWRBase {} ;

  struct PWR : public RegisterBase<0x40140018, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_PWR_Pin_%s_Values<MDR_PORTI::PWR, 0, 2, ReadWriteMode, MDR_PORTIPWRBase> ;
    using FieldValues = MDR_PORTI_PWR_Pin_%s_Values<MDR_PORTI::PWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRPack  = Register<0x40140018, 32, ReadWriteMode, MDR_PORTIPWRBase, T...> ;

  struct MDR_PORTIGFENBase {} ;

  struct GFEN : public RegisterBase<0x4014001C, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_GFEN_Pin_%s_Values<MDR_PORTI::GFEN, 0, 1, ReadWriteMode, MDR_PORTIGFENBase> ;
    using FieldValues = MDR_PORTI_GFEN_Pin_%s_Values<MDR_PORTI::GFEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GFENPack  = Register<0x4014001C, 32, ReadWriteMode, MDR_PORTIGFENBase, T...> ;

  struct MDR_PORTISETTXBase {} ;

  struct SETTX : public RegisterBase<0x40140020, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_SETTX_Pin_%s_Values<MDR_PORTI::SETTX, 0, 1, ReadWriteMode, MDR_PORTISETTXBase> ;
    using FieldValues = MDR_PORTI_SETTX_Pin_%s_Values<MDR_PORTI::SETTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SETTXPack  = Register<0x40140020, 32, ReadWriteMode, MDR_PORTISETTXBase, T...> ;

  struct MDR_PORTICLRTXBase {} ;

  struct CLRTX : public RegisterBase<0x40140024, 32, ReadWriteMode>
  {
    using Pin_%s = MDR_PORTI_CLRTX_Pin_%s_Values<MDR_PORTI::CLRTX, 0, 1, ReadWriteMode, MDR_PORTICLRTXBase> ;
    using FieldValues = MDR_PORTI_CLRTX_Pin_%s_Values<MDR_PORTI::CLRTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLRTXPack  = Register<0x40140024, 32, ReadWriteMode, MDR_PORTICLRTXBase, T...> ;

  struct MDR_PORTIRDTXBase {} ;

  struct RDTX : public RegisterBase<0x40140028, 32, ReadMode>
  {
    using Pin_%s = MDR_PORTI_RDTX_Pin_%s_Values<MDR_PORTI::RDTX, 0, 1, ReadMode, MDR_PORTIRDTXBase> ;
    using FieldValues = MDR_PORTI_RDTX_Pin_%s_Values<MDR_PORTI::RDTX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDTXPack  = Register<0x40140028, 32, ReadMode, MDR_PORTIRDTXBase, T...> ;

} ;

#endif //#if !defined(MDRPORTIREGISTERS_HPP)
