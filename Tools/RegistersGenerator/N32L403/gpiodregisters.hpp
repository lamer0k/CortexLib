/*******************************************************************************
* Filename      : gpiodregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "gpiodfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOD
{
  struct GPIODGPIOx_PMODEBase {} ;

  struct GPIOx_PMODE : public RegisterBase<0x40011400, 32, ReadWriteMode>
  {
    using PMODE0 = GPIOD_GPIOx_PMODE_PMODE0_Values<GPIOD::GPIOx_PMODE, 0, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE1 = GPIOD_GPIOx_PMODE_PMODE1_Values<GPIOD::GPIOx_PMODE, 2, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE2 = GPIOD_GPIOx_PMODE_PMODE2_Values<GPIOD::GPIOx_PMODE, 4, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE3 = GPIOD_GPIOx_PMODE_PMODE3_Values<GPIOD::GPIOx_PMODE, 6, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE4 = GPIOD_GPIOx_PMODE_PMODE4_Values<GPIOD::GPIOx_PMODE, 8, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE5 = GPIOD_GPIOx_PMODE_PMODE5_Values<GPIOD::GPIOx_PMODE, 10, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE6 = GPIOD_GPIOx_PMODE_PMODE6_Values<GPIOD::GPIOx_PMODE, 12, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE7 = GPIOD_GPIOx_PMODE_PMODE7_Values<GPIOD::GPIOx_PMODE, 14, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE8 = GPIOD_GPIOx_PMODE_PMODE8_Values<GPIOD::GPIOx_PMODE, 16, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE9 = GPIOD_GPIOx_PMODE_PMODE9_Values<GPIOD::GPIOx_PMODE, 18, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE10 = GPIOD_GPIOx_PMODE_PMODE10_Values<GPIOD::GPIOx_PMODE, 20, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE11 = GPIOD_GPIOx_PMODE_PMODE11_Values<GPIOD::GPIOx_PMODE, 22, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE12 = GPIOD_GPIOx_PMODE_PMODE12_Values<GPIOD::GPIOx_PMODE, 24, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE13 = GPIOD_GPIOx_PMODE_PMODE13_Values<GPIOD::GPIOx_PMODE, 26, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE14 = GPIOD_GPIOx_PMODE_PMODE14_Values<GPIOD::GPIOx_PMODE, 28, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using PMODE15 = GPIOD_GPIOx_PMODE_PMODE15_Values<GPIOD::GPIOx_PMODE, 30, 2, ReadWriteMode, GPIODGPIOx_PMODEBase> ;
    using FieldValues = GPIOD_GPIOx_PMODE_PMODE15_Values<GPIOD::GPIOx_PMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PMODEPack  = Register<0x40011400, 32, ReadWriteMode, GPIODGPIOx_PMODEBase, T...> ;

  struct GPIODGPIOx_POTYPEBase {} ;

  struct GPIOx_POTYPE : public RegisterBase<0x40011404, 32, ReadWriteMode>
  {
    using POT0 = GPIOD_GPIOx_POTYPE_POT0_Values<GPIOD::GPIOx_POTYPE, 0, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT1 = GPIOD_GPIOx_POTYPE_POT1_Values<GPIOD::GPIOx_POTYPE, 1, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT2 = GPIOD_GPIOx_POTYPE_POT2_Values<GPIOD::GPIOx_POTYPE, 2, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT3 = GPIOD_GPIOx_POTYPE_POT3_Values<GPIOD::GPIOx_POTYPE, 3, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT4 = GPIOD_GPIOx_POTYPE_POT4_Values<GPIOD::GPIOx_POTYPE, 4, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT5 = GPIOD_GPIOx_POTYPE_POT5_Values<GPIOD::GPIOx_POTYPE, 5, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT6 = GPIOD_GPIOx_POTYPE_POT6_Values<GPIOD::GPIOx_POTYPE, 6, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT7 = GPIOD_GPIOx_POTYPE_POT7_Values<GPIOD::GPIOx_POTYPE, 7, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT8 = GPIOD_GPIOx_POTYPE_POT8_Values<GPIOD::GPIOx_POTYPE, 8, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT9 = GPIOD_GPIOx_POTYPE_POT9_Values<GPIOD::GPIOx_POTYPE, 9, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT10 = GPIOD_GPIOx_POTYPE_POT10_Values<GPIOD::GPIOx_POTYPE, 10, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT11 = GPIOD_GPIOx_POTYPE_POT11_Values<GPIOD::GPIOx_POTYPE, 11, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT12 = GPIOD_GPIOx_POTYPE_POT12_Values<GPIOD::GPIOx_POTYPE, 12, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT13 = GPIOD_GPIOx_POTYPE_POT13_Values<GPIOD::GPIOx_POTYPE, 13, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT14 = GPIOD_GPIOx_POTYPE_POT14_Values<GPIOD::GPIOx_POTYPE, 14, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using POT15 = GPIOD_GPIOx_POTYPE_POT15_Values<GPIOD::GPIOx_POTYPE, 15, 1, ReadWriteMode, GPIODGPIOx_POTYPEBase> ;
    using FieldValues = GPIOD_GPIOx_POTYPE_POT15_Values<GPIOD::GPIOx_POTYPE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_POTYPEPack  = Register<0x40011404, 32, ReadWriteMode, GPIODGPIOx_POTYPEBase, T...> ;

  struct GPIODGPIOx_PUPDBase {} ;

  struct GPIOx_PUPD : public RegisterBase<0x4001140C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOD_GPIOx_PUPD_PUPD0_Values<GPIOD::GPIOx_PUPD, 0, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD1 = GPIOD_GPIOx_PUPD_PUPD1_Values<GPIOD::GPIOx_PUPD, 2, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD2 = GPIOD_GPIOx_PUPD_PUPD2_Values<GPIOD::GPIOx_PUPD, 4, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD3 = GPIOD_GPIOx_PUPD_PUPD3_Values<GPIOD::GPIOx_PUPD, 6, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD4 = GPIOD_GPIOx_PUPD_PUPD4_Values<GPIOD::GPIOx_PUPD, 8, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD5 = GPIOD_GPIOx_PUPD_PUPD5_Values<GPIOD::GPIOx_PUPD, 10, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD6 = GPIOD_GPIOx_PUPD_PUPD6_Values<GPIOD::GPIOx_PUPD, 12, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD7 = GPIOD_GPIOx_PUPD_PUPD7_Values<GPIOD::GPIOx_PUPD, 14, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD8 = GPIOD_GPIOx_PUPD_PUPD8_Values<GPIOD::GPIOx_PUPD, 16, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD9 = GPIOD_GPIOx_PUPD_PUPD9_Values<GPIOD::GPIOx_PUPD, 18, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD10 = GPIOD_GPIOx_PUPD_PUPD10_Values<GPIOD::GPIOx_PUPD, 20, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD11 = GPIOD_GPIOx_PUPD_PUPD11_Values<GPIOD::GPIOx_PUPD, 22, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD12 = GPIOD_GPIOx_PUPD_PUPD12_Values<GPIOD::GPIOx_PUPD, 24, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD13 = GPIOD_GPIOx_PUPD_PUPD13_Values<GPIOD::GPIOx_PUPD, 26, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD14 = GPIOD_GPIOx_PUPD_PUPD14_Values<GPIOD::GPIOx_PUPD, 28, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using PUPD15 = GPIOD_GPIOx_PUPD_PUPD15_Values<GPIOD::GPIOx_PUPD, 30, 2, ReadWriteMode, GPIODGPIOx_PUPDBase> ;
    using FieldValues = GPIOD_GPIOx_PUPD_PUPD15_Values<GPIOD::GPIOx_PUPD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PUPDPack  = Register<0x4001140C, 32, ReadWriteMode, GPIODGPIOx_PUPDBase, T...> ;

  struct GPIODGPIOx_PIDBase {} ;

  struct GPIOx_PID : public RegisterBase<0x40011410, 32, ReadWriteMode>
  {
    using PID0 = GPIOD_GPIOx_PID_PID0_Values<GPIOD::GPIOx_PID, 0, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID1 = GPIOD_GPIOx_PID_PID1_Values<GPIOD::GPIOx_PID, 1, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID2 = GPIOD_GPIOx_PID_PID2_Values<GPIOD::GPIOx_PID, 2, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID3 = GPIOD_GPIOx_PID_PID3_Values<GPIOD::GPIOx_PID, 3, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID4 = GPIOD_GPIOx_PID_PID4_Values<GPIOD::GPIOx_PID, 4, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID5 = GPIOD_GPIOx_PID_PID5_Values<GPIOD::GPIOx_PID, 5, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID6 = GPIOD_GPIOx_PID_PID6_Values<GPIOD::GPIOx_PID, 6, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID7 = GPIOD_GPIOx_PID_PID7_Values<GPIOD::GPIOx_PID, 7, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID8 = GPIOD_GPIOx_PID_PID8_Values<GPIOD::GPIOx_PID, 8, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID9 = GPIOD_GPIOx_PID_PID9_Values<GPIOD::GPIOx_PID, 9, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID10 = GPIOD_GPIOx_PID_PID10_Values<GPIOD::GPIOx_PID, 10, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID11 = GPIOD_GPIOx_PID_PID11_Values<GPIOD::GPIOx_PID, 11, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID12 = GPIOD_GPIOx_PID_PID12_Values<GPIOD::GPIOx_PID, 12, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID13 = GPIOD_GPIOx_PID_PID13_Values<GPIOD::GPIOx_PID, 13, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID14 = GPIOD_GPIOx_PID_PID14_Values<GPIOD::GPIOx_PID, 14, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using PID15 = GPIOD_GPIOx_PID_PID15_Values<GPIOD::GPIOx_PID, 15, 1, ReadWriteMode, GPIODGPIOx_PIDBase> ;
    using FieldValues = GPIOD_GPIOx_PID_PID15_Values<GPIOD::GPIOx_PID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PIDPack  = Register<0x40011410, 32, ReadWriteMode, GPIODGPIOx_PIDBase, T...> ;

  struct GPIODGPIOx_PODBase {} ;

  struct GPIOx_POD : public RegisterBase<0x40011414, 32, ReadWriteMode>
  {
    using POD0 = GPIOD_GPIOx_POD_POD0_Values<GPIOD::GPIOx_POD, 0, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD1 = GPIOD_GPIOx_POD_POD1_Values<GPIOD::GPIOx_POD, 1, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD2 = GPIOD_GPIOx_POD_POD2_Values<GPIOD::GPIOx_POD, 2, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD3 = GPIOD_GPIOx_POD_POD3_Values<GPIOD::GPIOx_POD, 3, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD4 = GPIOD_GPIOx_POD_POD4_Values<GPIOD::GPIOx_POD, 4, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD5 = GPIOD_GPIOx_POD_POD5_Values<GPIOD::GPIOx_POD, 5, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD6 = GPIOD_GPIOx_POD_POD6_Values<GPIOD::GPIOx_POD, 6, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD7 = GPIOD_GPIOx_POD_POD7_Values<GPIOD::GPIOx_POD, 7, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD8 = GPIOD_GPIOx_POD_POD8_Values<GPIOD::GPIOx_POD, 8, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD9 = GPIOD_GPIOx_POD_POD9_Values<GPIOD::GPIOx_POD, 9, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD10 = GPIOD_GPIOx_POD_POD10_Values<GPIOD::GPIOx_POD, 10, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD11 = GPIOD_GPIOx_POD_POD11_Values<GPIOD::GPIOx_POD, 11, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD12 = GPIOD_GPIOx_POD_POD12_Values<GPIOD::GPIOx_POD, 12, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD13 = GPIOD_GPIOx_POD_POD13_Values<GPIOD::GPIOx_POD, 13, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD14 = GPIOD_GPIOx_POD_POD14_Values<GPIOD::GPIOx_POD, 14, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using POD15 = GPIOD_GPIOx_POD_POD15_Values<GPIOD::GPIOx_POD, 15, 1, ReadWriteMode, GPIODGPIOx_PODBase> ;
    using FieldValues = GPIOD_GPIOx_POD_POD15_Values<GPIOD::GPIOx_POD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PODPack  = Register<0x40011414, 32, ReadWriteMode, GPIODGPIOx_PODBase, T...> ;

  struct GPIODGPIOx_PBSCBase {} ;

  struct GPIOx_PBSC : public RegisterBase<0x40011418, 32, ReadWriteMode>
  {
    using PBS0 = GPIOD_GPIOx_PBSC_PBS0_Values<GPIOD::GPIOx_PBSC, 0, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS1 = GPIOD_GPIOx_PBSC_PBS1_Values<GPIOD::GPIOx_PBSC, 1, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS2 = GPIOD_GPIOx_PBSC_PBS2_Values<GPIOD::GPIOx_PBSC, 2, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS3 = GPIOD_GPIOx_PBSC_PBS3_Values<GPIOD::GPIOx_PBSC, 3, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS4 = GPIOD_GPIOx_PBSC_PBS4_Values<GPIOD::GPIOx_PBSC, 4, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS5 = GPIOD_GPIOx_PBSC_PBS5_Values<GPIOD::GPIOx_PBSC, 5, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS6 = GPIOD_GPIOx_PBSC_PBS6_Values<GPIOD::GPIOx_PBSC, 6, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS7 = GPIOD_GPIOx_PBSC_PBS7_Values<GPIOD::GPIOx_PBSC, 7, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS8 = GPIOD_GPIOx_PBSC_PBS8_Values<GPIOD::GPIOx_PBSC, 8, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS9 = GPIOD_GPIOx_PBSC_PBS9_Values<GPIOD::GPIOx_PBSC, 9, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS10 = GPIOD_GPIOx_PBSC_PBS10_Values<GPIOD::GPIOx_PBSC, 10, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS11 = GPIOD_GPIOx_PBSC_PBS11_Values<GPIOD::GPIOx_PBSC, 11, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS12 = GPIOD_GPIOx_PBSC_PBS12_Values<GPIOD::GPIOx_PBSC, 12, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS13 = GPIOD_GPIOx_PBSC_PBS13_Values<GPIOD::GPIOx_PBSC, 13, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS14 = GPIOD_GPIOx_PBSC_PBS14_Values<GPIOD::GPIOx_PBSC, 14, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBS15 = GPIOD_GPIOx_PBSC_PBS15_Values<GPIOD::GPIOx_PBSC, 15, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC0 = GPIOD_GPIOx_PBSC_PBC0_Values<GPIOD::GPIOx_PBSC, 16, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC1 = GPIOD_GPIOx_PBSC_PBC1_Values<GPIOD::GPIOx_PBSC, 17, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC2 = GPIOD_GPIOx_PBSC_PBC2_Values<GPIOD::GPIOx_PBSC, 18, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC3 = GPIOD_GPIOx_PBSC_PBC3_Values<GPIOD::GPIOx_PBSC, 19, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC4 = GPIOD_GPIOx_PBSC_PBC4_Values<GPIOD::GPIOx_PBSC, 20, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC5 = GPIOD_GPIOx_PBSC_PBC5_Values<GPIOD::GPIOx_PBSC, 21, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC6 = GPIOD_GPIOx_PBSC_PBC6_Values<GPIOD::GPIOx_PBSC, 22, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC7 = GPIOD_GPIOx_PBSC_PBC7_Values<GPIOD::GPIOx_PBSC, 23, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC8 = GPIOD_GPIOx_PBSC_PBC8_Values<GPIOD::GPIOx_PBSC, 24, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC9 = GPIOD_GPIOx_PBSC_PBC9_Values<GPIOD::GPIOx_PBSC, 25, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC10 = GPIOD_GPIOx_PBSC_PBC10_Values<GPIOD::GPIOx_PBSC, 26, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC11 = GPIOD_GPIOx_PBSC_PBC11_Values<GPIOD::GPIOx_PBSC, 27, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC12 = GPIOD_GPIOx_PBSC_PBC12_Values<GPIOD::GPIOx_PBSC, 28, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC13 = GPIOD_GPIOx_PBSC_PBC13_Values<GPIOD::GPIOx_PBSC, 29, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC14 = GPIOD_GPIOx_PBSC_PBC14_Values<GPIOD::GPIOx_PBSC, 30, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using PBC15 = GPIOD_GPIOx_PBSC_PBC15_Values<GPIOD::GPIOx_PBSC, 31, 1, ReadWriteMode, GPIODGPIOx_PBSCBase> ;
    using FieldValues = GPIOD_GPIOx_PBSC_PBC15_Values<GPIOD::GPIOx_PBSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PBSCPack  = Register<0x40011418, 32, ReadWriteMode, GPIODGPIOx_PBSCBase, T...> ;

  struct GPIODGPIOx_PBCBase {} ;

  struct GPIOx_PBC : public RegisterBase<0x40011428, 32, ReadWriteMode>
  {
    using PBC0 = GPIOD_GPIOx_PBC_PBC0_Values<GPIOD::GPIOx_PBC, 0, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC1 = GPIOD_GPIOx_PBC_PBC1_Values<GPIOD::GPIOx_PBC, 1, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC2 = GPIOD_GPIOx_PBC_PBC2_Values<GPIOD::GPIOx_PBC, 2, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC3 = GPIOD_GPIOx_PBC_PBC3_Values<GPIOD::GPIOx_PBC, 3, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC4 = GPIOD_GPIOx_PBC_PBC4_Values<GPIOD::GPIOx_PBC, 4, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC5 = GPIOD_GPIOx_PBC_PBC5_Values<GPIOD::GPIOx_PBC, 5, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC6 = GPIOD_GPIOx_PBC_PBC6_Values<GPIOD::GPIOx_PBC, 6, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC7 = GPIOD_GPIOx_PBC_PBC7_Values<GPIOD::GPIOx_PBC, 7, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC8 = GPIOD_GPIOx_PBC_PBC8_Values<GPIOD::GPIOx_PBC, 8, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC9 = GPIOD_GPIOx_PBC_PBC9_Values<GPIOD::GPIOx_PBC, 9, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC10 = GPIOD_GPIOx_PBC_PBC10_Values<GPIOD::GPIOx_PBC, 10, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC11 = GPIOD_GPIOx_PBC_PBC11_Values<GPIOD::GPIOx_PBC, 11, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC12 = GPIOD_GPIOx_PBC_PBC12_Values<GPIOD::GPIOx_PBC, 12, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC13 = GPIOD_GPIOx_PBC_PBC13_Values<GPIOD::GPIOx_PBC, 13, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC14 = GPIOD_GPIOx_PBC_PBC14_Values<GPIOD::GPIOx_PBC, 14, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using PBC15 = GPIOD_GPIOx_PBC_PBC15_Values<GPIOD::GPIOx_PBC, 15, 1, ReadWriteMode, GPIODGPIOx_PBCBase> ;
    using FieldValues = GPIOD_GPIOx_PBC_PBC15_Values<GPIOD::GPIOx_PBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PBCPack  = Register<0x40011428, 32, ReadWriteMode, GPIODGPIOx_PBCBase, T...> ;

  struct GPIODGPIOx_PLOCKBase {} ;

  struct GPIOx_PLOCK : public RegisterBase<0x4001141C, 32, ReadWriteMode>
  {
    using PLOCK0 = GPIOD_GPIOx_PLOCK_PLOCK0_Values<GPIOD::GPIOx_PLOCK, 0, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK1 = GPIOD_GPIOx_PLOCK_PLOCK1_Values<GPIOD::GPIOx_PLOCK, 1, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK2 = GPIOD_GPIOx_PLOCK_PLOCK2_Values<GPIOD::GPIOx_PLOCK, 2, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK3 = GPIOD_GPIOx_PLOCK_PLOCK3_Values<GPIOD::GPIOx_PLOCK, 3, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK4 = GPIOD_GPIOx_PLOCK_PLOCK4_Values<GPIOD::GPIOx_PLOCK, 4, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK5 = GPIOD_GPIOx_PLOCK_PLOCK5_Values<GPIOD::GPIOx_PLOCK, 5, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK6 = GPIOD_GPIOx_PLOCK_PLOCK6_Values<GPIOD::GPIOx_PLOCK, 6, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK7 = GPIOD_GPIOx_PLOCK_PLOCK7_Values<GPIOD::GPIOx_PLOCK, 7, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK8 = GPIOD_GPIOx_PLOCK_PLOCK8_Values<GPIOD::GPIOx_PLOCK, 8, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK9 = GPIOD_GPIOx_PLOCK_PLOCK9_Values<GPIOD::GPIOx_PLOCK, 9, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK10 = GPIOD_GPIOx_PLOCK_PLOCK10_Values<GPIOD::GPIOx_PLOCK, 10, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK11 = GPIOD_GPIOx_PLOCK_PLOCK11_Values<GPIOD::GPIOx_PLOCK, 11, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK12 = GPIOD_GPIOx_PLOCK_PLOCK12_Values<GPIOD::GPIOx_PLOCK, 12, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK13 = GPIOD_GPIOx_PLOCK_PLOCK13_Values<GPIOD::GPIOx_PLOCK, 13, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK14 = GPIOD_GPIOx_PLOCK_PLOCK14_Values<GPIOD::GPIOx_PLOCK, 14, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCK15 = GPIOD_GPIOx_PLOCK_PLOCK15_Values<GPIOD::GPIOx_PLOCK, 15, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using PLOCKK = GPIOD_GPIOx_PLOCK_PLOCKK_Values<GPIOD::GPIOx_PLOCK, 16, 1, ReadWriteMode, GPIODGPIOx_PLOCKBase> ;
    using FieldValues = GPIOD_GPIOx_PLOCK_PLOCKK_Values<GPIOD::GPIOx_PLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PLOCKPack  = Register<0x4001141C, 32, ReadWriteMode, GPIODGPIOx_PLOCKBase, T...> ;

  struct GPIODGPIOx_AFLBase {} ;

  struct GPIOx_AFL : public RegisterBase<0x40011420, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOD_GPIOx_AFL_AFSEL0_Values<GPIOD::GPIOx_AFL, 0, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL1 = GPIOD_GPIOx_AFL_AFSEL1_Values<GPIOD::GPIOx_AFL, 4, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL2 = GPIOD_GPIOx_AFL_AFSEL2_Values<GPIOD::GPIOx_AFL, 8, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL3 = GPIOD_GPIOx_AFL_AFSEL3_Values<GPIOD::GPIOx_AFL, 12, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL4 = GPIOD_GPIOx_AFL_AFSEL4_Values<GPIOD::GPIOx_AFL, 16, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL5 = GPIOD_GPIOx_AFL_AFSEL5_Values<GPIOD::GPIOx_AFL, 20, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL6 = GPIOD_GPIOx_AFL_AFSEL6_Values<GPIOD::GPIOx_AFL, 24, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using AFSEL7 = GPIOD_GPIOx_AFL_AFSEL7_Values<GPIOD::GPIOx_AFL, 28, 4, ReadWriteMode, GPIODGPIOx_AFLBase> ;
    using FieldValues = GPIOD_GPIOx_AFL_AFSEL7_Values<GPIOD::GPIOx_AFL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_AFLPack  = Register<0x40011420, 32, ReadWriteMode, GPIODGPIOx_AFLBase, T...> ;

  struct GPIODGPIOx_AFHBase {} ;

  struct GPIOx_AFH : public RegisterBase<0x40011424, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOD_GPIOx_AFH_AFSEL0_Values<GPIOD::GPIOx_AFH, 0, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL1 = GPIOD_GPIOx_AFH_AFSEL1_Values<GPIOD::GPIOx_AFH, 4, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL2 = GPIOD_GPIOx_AFH_AFSEL2_Values<GPIOD::GPIOx_AFH, 8, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL3 = GPIOD_GPIOx_AFH_AFSEL3_Values<GPIOD::GPIOx_AFH, 12, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL4 = GPIOD_GPIOx_AFH_AFSEL4_Values<GPIOD::GPIOx_AFH, 16, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL5 = GPIOD_GPIOx_AFH_AFSEL5_Values<GPIOD::GPIOx_AFH, 20, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL6 = GPIOD_GPIOx_AFH_AFSEL6_Values<GPIOD::GPIOx_AFH, 24, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using AFSEL7 = GPIOD_GPIOx_AFH_AFSEL7_Values<GPIOD::GPIOx_AFH, 28, 4, ReadWriteMode, GPIODGPIOx_AFHBase> ;
    using FieldValues = GPIOD_GPIOx_AFH_AFSEL7_Values<GPIOD::GPIOx_AFH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_AFHPack  = Register<0x40011424, 32, ReadWriteMode, GPIODGPIOx_AFHBase, T...> ;

  struct GPIODGPIOx_DSBase {} ;

  struct GPIOx_DS : public RegisterBase<0x4001142C, 32, ReadWriteMode>
  {
    using DS0 = GPIOD_GPIOx_DS_DS0_Values<GPIOD::GPIOx_DS, 0, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS1 = GPIOD_GPIOx_DS_DS1_Values<GPIOD::GPIOx_DS, 1, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS2 = GPIOD_GPIOx_DS_DS2_Values<GPIOD::GPIOx_DS, 2, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS3 = GPIOD_GPIOx_DS_DS3_Values<GPIOD::GPIOx_DS, 3, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS4 = GPIOD_GPIOx_DS_DS4_Values<GPIOD::GPIOx_DS, 4, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS5 = GPIOD_GPIOx_DS_DS5_Values<GPIOD::GPIOx_DS, 5, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS6 = GPIOD_GPIOx_DS_DS6_Values<GPIOD::GPIOx_DS, 6, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS7 = GPIOD_GPIOx_DS_DS7_Values<GPIOD::GPIOx_DS, 7, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS8 = GPIOD_GPIOx_DS_DS8_Values<GPIOD::GPIOx_DS, 8, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS9 = GPIOD_GPIOx_DS_DS9_Values<GPIOD::GPIOx_DS, 9, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS10 = GPIOD_GPIOx_DS_DS10_Values<GPIOD::GPIOx_DS, 10, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS11 = GPIOD_GPIOx_DS_DS11_Values<GPIOD::GPIOx_DS, 11, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS12 = GPIOD_GPIOx_DS_DS12_Values<GPIOD::GPIOx_DS, 12, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS13 = GPIOD_GPIOx_DS_DS13_Values<GPIOD::GPIOx_DS, 13, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS14 = GPIOD_GPIOx_DS_DS14_Values<GPIOD::GPIOx_DS, 14, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using DS15 = GPIOD_GPIOx_DS_DS15_Values<GPIOD::GPIOx_DS, 15, 1, ReadWriteMode, GPIODGPIOx_DSBase> ;
    using FieldValues = GPIOD_GPIOx_DS_DS15_Values<GPIOD::GPIOx_DS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_DSPack  = Register<0x4001142C, 32, ReadWriteMode, GPIODGPIOx_DSBase, T...> ;

  struct GPIODGPIOx_SRBase {} ;

  struct GPIOx_SR : public RegisterBase<0x40011430, 32, ReadWriteMode>
  {
    using SR0 = GPIOD_GPIOx_SR_SR0_Values<GPIOD::GPIOx_SR, 0, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR1 = GPIOD_GPIOx_SR_SR1_Values<GPIOD::GPIOx_SR, 1, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR2 = GPIOD_GPIOx_SR_SR2_Values<GPIOD::GPIOx_SR, 2, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR3 = GPIOD_GPIOx_SR_SR3_Values<GPIOD::GPIOx_SR, 3, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR4 = GPIOD_GPIOx_SR_SR4_Values<GPIOD::GPIOx_SR, 4, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR5 = GPIOD_GPIOx_SR_SR5_Values<GPIOD::GPIOx_SR, 5, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR6 = GPIOD_GPIOx_SR_SR6_Values<GPIOD::GPIOx_SR, 6, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR7 = GPIOD_GPIOx_SR_SR7_Values<GPIOD::GPIOx_SR, 7, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR8 = GPIOD_GPIOx_SR_SR8_Values<GPIOD::GPIOx_SR, 8, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR9 = GPIOD_GPIOx_SR_SR9_Values<GPIOD::GPIOx_SR, 9, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR10 = GPIOD_GPIOx_SR_SR10_Values<GPIOD::GPIOx_SR, 10, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR11 = GPIOD_GPIOx_SR_SR11_Values<GPIOD::GPIOx_SR, 11, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR12 = GPIOD_GPIOx_SR_SR12_Values<GPIOD::GPIOx_SR, 12, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR13 = GPIOD_GPIOx_SR_SR13_Values<GPIOD::GPIOx_SR, 13, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR14 = GPIOD_GPIOx_SR_SR14_Values<GPIOD::GPIOx_SR, 14, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using SR15 = GPIOD_GPIOx_SR_SR15_Values<GPIOD::GPIOx_SR, 15, 1, ReadWriteMode, GPIODGPIOx_SRBase> ;
    using FieldValues = GPIOD_GPIOx_SR_SR15_Values<GPIOD::GPIOx_SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_SRPack  = Register<0x40011430, 32, ReadWriteMode, GPIODGPIOx_SRBase, T...> ;

} ;

