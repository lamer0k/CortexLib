/*******************************************************************************
* Filename      : gpiocregisters.hpp
*
* Details       : General purpose I/O. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "gpiocfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOC
{
  struct GPIOCGPIOx_PMODEBase {} ;

  struct GPIOx_PMODE : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using PMODE0 = GPIOC_GPIOx_PMODE_PMODE0_Values<GPIOC::GPIOx_PMODE, 0, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE1 = GPIOC_GPIOx_PMODE_PMODE1_Values<GPIOC::GPIOx_PMODE, 2, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE2 = GPIOC_GPIOx_PMODE_PMODE2_Values<GPIOC::GPIOx_PMODE, 4, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE3 = GPIOC_GPIOx_PMODE_PMODE3_Values<GPIOC::GPIOx_PMODE, 6, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE4 = GPIOC_GPIOx_PMODE_PMODE4_Values<GPIOC::GPIOx_PMODE, 8, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE5 = GPIOC_GPIOx_PMODE_PMODE5_Values<GPIOC::GPIOx_PMODE, 10, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE6 = GPIOC_GPIOx_PMODE_PMODE6_Values<GPIOC::GPIOx_PMODE, 12, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE7 = GPIOC_GPIOx_PMODE_PMODE7_Values<GPIOC::GPIOx_PMODE, 14, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE8 = GPIOC_GPIOx_PMODE_PMODE8_Values<GPIOC::GPIOx_PMODE, 16, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE9 = GPIOC_GPIOx_PMODE_PMODE9_Values<GPIOC::GPIOx_PMODE, 18, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE10 = GPIOC_GPIOx_PMODE_PMODE10_Values<GPIOC::GPIOx_PMODE, 20, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE11 = GPIOC_GPIOx_PMODE_PMODE11_Values<GPIOC::GPIOx_PMODE, 22, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE12 = GPIOC_GPIOx_PMODE_PMODE12_Values<GPIOC::GPIOx_PMODE, 24, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE13 = GPIOC_GPIOx_PMODE_PMODE13_Values<GPIOC::GPIOx_PMODE, 26, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE14 = GPIOC_GPIOx_PMODE_PMODE14_Values<GPIOC::GPIOx_PMODE, 28, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using PMODE15 = GPIOC_GPIOx_PMODE_PMODE15_Values<GPIOC::GPIOx_PMODE, 30, 2, ReadWriteMode, GPIOCGPIOx_PMODEBase> ;
    using FieldValues = GPIOC_GPIOx_PMODE_PMODE15_Values<GPIOC::GPIOx_PMODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PMODEPack  = Register<0x40011000, 32, ReadWriteMode, GPIOCGPIOx_PMODEBase, T...> ;

  struct GPIOCGPIOx_POTYPEBase {} ;

  struct GPIOx_POTYPE : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using POT0 = GPIOC_GPIOx_POTYPE_POT0_Values<GPIOC::GPIOx_POTYPE, 0, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT1 = GPIOC_GPIOx_POTYPE_POT1_Values<GPIOC::GPIOx_POTYPE, 1, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT2 = GPIOC_GPIOx_POTYPE_POT2_Values<GPIOC::GPIOx_POTYPE, 2, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT3 = GPIOC_GPIOx_POTYPE_POT3_Values<GPIOC::GPIOx_POTYPE, 3, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT4 = GPIOC_GPIOx_POTYPE_POT4_Values<GPIOC::GPIOx_POTYPE, 4, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT5 = GPIOC_GPIOx_POTYPE_POT5_Values<GPIOC::GPIOx_POTYPE, 5, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT6 = GPIOC_GPIOx_POTYPE_POT6_Values<GPIOC::GPIOx_POTYPE, 6, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT7 = GPIOC_GPIOx_POTYPE_POT7_Values<GPIOC::GPIOx_POTYPE, 7, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT8 = GPIOC_GPIOx_POTYPE_POT8_Values<GPIOC::GPIOx_POTYPE, 8, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT9 = GPIOC_GPIOx_POTYPE_POT9_Values<GPIOC::GPIOx_POTYPE, 9, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT10 = GPIOC_GPIOx_POTYPE_POT10_Values<GPIOC::GPIOx_POTYPE, 10, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT11 = GPIOC_GPIOx_POTYPE_POT11_Values<GPIOC::GPIOx_POTYPE, 11, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT12 = GPIOC_GPIOx_POTYPE_POT12_Values<GPIOC::GPIOx_POTYPE, 12, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT13 = GPIOC_GPIOx_POTYPE_POT13_Values<GPIOC::GPIOx_POTYPE, 13, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT14 = GPIOC_GPIOx_POTYPE_POT14_Values<GPIOC::GPIOx_POTYPE, 14, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using POT15 = GPIOC_GPIOx_POTYPE_POT15_Values<GPIOC::GPIOx_POTYPE, 15, 1, ReadWriteMode, GPIOCGPIOx_POTYPEBase> ;
    using FieldValues = GPIOC_GPIOx_POTYPE_POT15_Values<GPIOC::GPIOx_POTYPE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_POTYPEPack  = Register<0x40011004, 32, ReadWriteMode, GPIOCGPIOx_POTYPEBase, T...> ;

  struct GPIOCGPIOx_PUPDBase {} ;

  struct GPIOx_PUPD : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOC_GPIOx_PUPD_PUPD0_Values<GPIOC::GPIOx_PUPD, 0, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD1 = GPIOC_GPIOx_PUPD_PUPD1_Values<GPIOC::GPIOx_PUPD, 2, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD2 = GPIOC_GPIOx_PUPD_PUPD2_Values<GPIOC::GPIOx_PUPD, 4, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD3 = GPIOC_GPIOx_PUPD_PUPD3_Values<GPIOC::GPIOx_PUPD, 6, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD4 = GPIOC_GPIOx_PUPD_PUPD4_Values<GPIOC::GPIOx_PUPD, 8, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD5 = GPIOC_GPIOx_PUPD_PUPD5_Values<GPIOC::GPIOx_PUPD, 10, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD6 = GPIOC_GPIOx_PUPD_PUPD6_Values<GPIOC::GPIOx_PUPD, 12, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD7 = GPIOC_GPIOx_PUPD_PUPD7_Values<GPIOC::GPIOx_PUPD, 14, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD8 = GPIOC_GPIOx_PUPD_PUPD8_Values<GPIOC::GPIOx_PUPD, 16, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD9 = GPIOC_GPIOx_PUPD_PUPD9_Values<GPIOC::GPIOx_PUPD, 18, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD10 = GPIOC_GPIOx_PUPD_PUPD10_Values<GPIOC::GPIOx_PUPD, 20, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD11 = GPIOC_GPIOx_PUPD_PUPD11_Values<GPIOC::GPIOx_PUPD, 22, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD12 = GPIOC_GPIOx_PUPD_PUPD12_Values<GPIOC::GPIOx_PUPD, 24, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD13 = GPIOC_GPIOx_PUPD_PUPD13_Values<GPIOC::GPIOx_PUPD, 26, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD14 = GPIOC_GPIOx_PUPD_PUPD14_Values<GPIOC::GPIOx_PUPD, 28, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using PUPD15 = GPIOC_GPIOx_PUPD_PUPD15_Values<GPIOC::GPIOx_PUPD, 30, 2, ReadWriteMode, GPIOCGPIOx_PUPDBase> ;
    using FieldValues = GPIOC_GPIOx_PUPD_PUPD15_Values<GPIOC::GPIOx_PUPD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PUPDPack  = Register<0x4001100C, 32, ReadWriteMode, GPIOCGPIOx_PUPDBase, T...> ;

  struct GPIOCGPIOx_PIDBase {} ;

  struct GPIOx_PID : public RegisterBase<0x40011010, 32, ReadWriteMode>
  {
    using PID0 = GPIOC_GPIOx_PID_PID0_Values<GPIOC::GPIOx_PID, 0, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID1 = GPIOC_GPIOx_PID_PID1_Values<GPIOC::GPIOx_PID, 1, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID2 = GPIOC_GPIOx_PID_PID2_Values<GPIOC::GPIOx_PID, 2, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID3 = GPIOC_GPIOx_PID_PID3_Values<GPIOC::GPIOx_PID, 3, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID4 = GPIOC_GPIOx_PID_PID4_Values<GPIOC::GPIOx_PID, 4, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID5 = GPIOC_GPIOx_PID_PID5_Values<GPIOC::GPIOx_PID, 5, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID6 = GPIOC_GPIOx_PID_PID6_Values<GPIOC::GPIOx_PID, 6, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID7 = GPIOC_GPIOx_PID_PID7_Values<GPIOC::GPIOx_PID, 7, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID8 = GPIOC_GPIOx_PID_PID8_Values<GPIOC::GPIOx_PID, 8, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID9 = GPIOC_GPIOx_PID_PID9_Values<GPIOC::GPIOx_PID, 9, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID10 = GPIOC_GPIOx_PID_PID10_Values<GPIOC::GPIOx_PID, 10, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID11 = GPIOC_GPIOx_PID_PID11_Values<GPIOC::GPIOx_PID, 11, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID12 = GPIOC_GPIOx_PID_PID12_Values<GPIOC::GPIOx_PID, 12, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID13 = GPIOC_GPIOx_PID_PID13_Values<GPIOC::GPIOx_PID, 13, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID14 = GPIOC_GPIOx_PID_PID14_Values<GPIOC::GPIOx_PID, 14, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using PID15 = GPIOC_GPIOx_PID_PID15_Values<GPIOC::GPIOx_PID, 15, 1, ReadWriteMode, GPIOCGPIOx_PIDBase> ;
    using FieldValues = GPIOC_GPIOx_PID_PID15_Values<GPIOC::GPIOx_PID, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PIDPack  = Register<0x40011010, 32, ReadWriteMode, GPIOCGPIOx_PIDBase, T...> ;

  struct GPIOCGPIOx_PODBase {} ;

  struct GPIOx_POD : public RegisterBase<0x40011014, 32, ReadWriteMode>
  {
    using POD0 = GPIOC_GPIOx_POD_POD0_Values<GPIOC::GPIOx_POD, 0, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD1 = GPIOC_GPIOx_POD_POD1_Values<GPIOC::GPIOx_POD, 1, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD2 = GPIOC_GPIOx_POD_POD2_Values<GPIOC::GPIOx_POD, 2, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD3 = GPIOC_GPIOx_POD_POD3_Values<GPIOC::GPIOx_POD, 3, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD4 = GPIOC_GPIOx_POD_POD4_Values<GPIOC::GPIOx_POD, 4, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD5 = GPIOC_GPIOx_POD_POD5_Values<GPIOC::GPIOx_POD, 5, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD6 = GPIOC_GPIOx_POD_POD6_Values<GPIOC::GPIOx_POD, 6, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD7 = GPIOC_GPIOx_POD_POD7_Values<GPIOC::GPIOx_POD, 7, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD8 = GPIOC_GPIOx_POD_POD8_Values<GPIOC::GPIOx_POD, 8, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD9 = GPIOC_GPIOx_POD_POD9_Values<GPIOC::GPIOx_POD, 9, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD10 = GPIOC_GPIOx_POD_POD10_Values<GPIOC::GPIOx_POD, 10, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD11 = GPIOC_GPIOx_POD_POD11_Values<GPIOC::GPIOx_POD, 11, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD12 = GPIOC_GPIOx_POD_POD12_Values<GPIOC::GPIOx_POD, 12, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD13 = GPIOC_GPIOx_POD_POD13_Values<GPIOC::GPIOx_POD, 13, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD14 = GPIOC_GPIOx_POD_POD14_Values<GPIOC::GPIOx_POD, 14, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using POD15 = GPIOC_GPIOx_POD_POD15_Values<GPIOC::GPIOx_POD, 15, 1, ReadWriteMode, GPIOCGPIOx_PODBase> ;
    using FieldValues = GPIOC_GPIOx_POD_POD15_Values<GPIOC::GPIOx_POD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PODPack  = Register<0x40011014, 32, ReadWriteMode, GPIOCGPIOx_PODBase, T...> ;

  struct GPIOCGPIOx_PBSCBase {} ;

  struct GPIOx_PBSC : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using PBS0 = GPIOC_GPIOx_PBSC_PBS0_Values<GPIOC::GPIOx_PBSC, 0, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS1 = GPIOC_GPIOx_PBSC_PBS1_Values<GPIOC::GPIOx_PBSC, 1, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS2 = GPIOC_GPIOx_PBSC_PBS2_Values<GPIOC::GPIOx_PBSC, 2, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS3 = GPIOC_GPIOx_PBSC_PBS3_Values<GPIOC::GPIOx_PBSC, 3, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS4 = GPIOC_GPIOx_PBSC_PBS4_Values<GPIOC::GPIOx_PBSC, 4, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS5 = GPIOC_GPIOx_PBSC_PBS5_Values<GPIOC::GPIOx_PBSC, 5, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS6 = GPIOC_GPIOx_PBSC_PBS6_Values<GPIOC::GPIOx_PBSC, 6, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS7 = GPIOC_GPIOx_PBSC_PBS7_Values<GPIOC::GPIOx_PBSC, 7, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS8 = GPIOC_GPIOx_PBSC_PBS8_Values<GPIOC::GPIOx_PBSC, 8, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS9 = GPIOC_GPIOx_PBSC_PBS9_Values<GPIOC::GPIOx_PBSC, 9, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS10 = GPIOC_GPIOx_PBSC_PBS10_Values<GPIOC::GPIOx_PBSC, 10, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS11 = GPIOC_GPIOx_PBSC_PBS11_Values<GPIOC::GPIOx_PBSC, 11, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS12 = GPIOC_GPIOx_PBSC_PBS12_Values<GPIOC::GPIOx_PBSC, 12, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS13 = GPIOC_GPIOx_PBSC_PBS13_Values<GPIOC::GPIOx_PBSC, 13, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS14 = GPIOC_GPIOx_PBSC_PBS14_Values<GPIOC::GPIOx_PBSC, 14, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBS15 = GPIOC_GPIOx_PBSC_PBS15_Values<GPIOC::GPIOx_PBSC, 15, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC0 = GPIOC_GPIOx_PBSC_PBC0_Values<GPIOC::GPIOx_PBSC, 16, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC1 = GPIOC_GPIOx_PBSC_PBC1_Values<GPIOC::GPIOx_PBSC, 17, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC2 = GPIOC_GPIOx_PBSC_PBC2_Values<GPIOC::GPIOx_PBSC, 18, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC3 = GPIOC_GPIOx_PBSC_PBC3_Values<GPIOC::GPIOx_PBSC, 19, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC4 = GPIOC_GPIOx_PBSC_PBC4_Values<GPIOC::GPIOx_PBSC, 20, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC5 = GPIOC_GPIOx_PBSC_PBC5_Values<GPIOC::GPIOx_PBSC, 21, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC6 = GPIOC_GPIOx_PBSC_PBC6_Values<GPIOC::GPIOx_PBSC, 22, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC7 = GPIOC_GPIOx_PBSC_PBC7_Values<GPIOC::GPIOx_PBSC, 23, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC8 = GPIOC_GPIOx_PBSC_PBC8_Values<GPIOC::GPIOx_PBSC, 24, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC9 = GPIOC_GPIOx_PBSC_PBC9_Values<GPIOC::GPIOx_PBSC, 25, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC10 = GPIOC_GPIOx_PBSC_PBC10_Values<GPIOC::GPIOx_PBSC, 26, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC11 = GPIOC_GPIOx_PBSC_PBC11_Values<GPIOC::GPIOx_PBSC, 27, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC12 = GPIOC_GPIOx_PBSC_PBC12_Values<GPIOC::GPIOx_PBSC, 28, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC13 = GPIOC_GPIOx_PBSC_PBC13_Values<GPIOC::GPIOx_PBSC, 29, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC14 = GPIOC_GPIOx_PBSC_PBC14_Values<GPIOC::GPIOx_PBSC, 30, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using PBC15 = GPIOC_GPIOx_PBSC_PBC15_Values<GPIOC::GPIOx_PBSC, 31, 1, ReadWriteMode, GPIOCGPIOx_PBSCBase> ;
    using FieldValues = GPIOC_GPIOx_PBSC_PBC15_Values<GPIOC::GPIOx_PBSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PBSCPack  = Register<0x40011018, 32, ReadWriteMode, GPIOCGPIOx_PBSCBase, T...> ;

  struct GPIOCGPIOx_PBCBase {} ;

  struct GPIOx_PBC : public RegisterBase<0x40011028, 32, ReadWriteMode>
  {
    using PBC0 = GPIOC_GPIOx_PBC_PBC0_Values<GPIOC::GPIOx_PBC, 0, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC1 = GPIOC_GPIOx_PBC_PBC1_Values<GPIOC::GPIOx_PBC, 1, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC2 = GPIOC_GPIOx_PBC_PBC2_Values<GPIOC::GPIOx_PBC, 2, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC3 = GPIOC_GPIOx_PBC_PBC3_Values<GPIOC::GPIOx_PBC, 3, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC4 = GPIOC_GPIOx_PBC_PBC4_Values<GPIOC::GPIOx_PBC, 4, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC5 = GPIOC_GPIOx_PBC_PBC5_Values<GPIOC::GPIOx_PBC, 5, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC6 = GPIOC_GPIOx_PBC_PBC6_Values<GPIOC::GPIOx_PBC, 6, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC7 = GPIOC_GPIOx_PBC_PBC7_Values<GPIOC::GPIOx_PBC, 7, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC8 = GPIOC_GPIOx_PBC_PBC8_Values<GPIOC::GPIOx_PBC, 8, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC9 = GPIOC_GPIOx_PBC_PBC9_Values<GPIOC::GPIOx_PBC, 9, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC10 = GPIOC_GPIOx_PBC_PBC10_Values<GPIOC::GPIOx_PBC, 10, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC11 = GPIOC_GPIOx_PBC_PBC11_Values<GPIOC::GPIOx_PBC, 11, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC12 = GPIOC_GPIOx_PBC_PBC12_Values<GPIOC::GPIOx_PBC, 12, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC13 = GPIOC_GPIOx_PBC_PBC13_Values<GPIOC::GPIOx_PBC, 13, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC14 = GPIOC_GPIOx_PBC_PBC14_Values<GPIOC::GPIOx_PBC, 14, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using PBC15 = GPIOC_GPIOx_PBC_PBC15_Values<GPIOC::GPIOx_PBC, 15, 1, ReadWriteMode, GPIOCGPIOx_PBCBase> ;
    using FieldValues = GPIOC_GPIOx_PBC_PBC15_Values<GPIOC::GPIOx_PBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PBCPack  = Register<0x40011028, 32, ReadWriteMode, GPIOCGPIOx_PBCBase, T...> ;

  struct GPIOCGPIOx_PLOCKBase {} ;

  struct GPIOx_PLOCK : public RegisterBase<0x4001101C, 32, ReadWriteMode>
  {
    using PLOCK0 = GPIOC_GPIOx_PLOCK_PLOCK0_Values<GPIOC::GPIOx_PLOCK, 0, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK1 = GPIOC_GPIOx_PLOCK_PLOCK1_Values<GPIOC::GPIOx_PLOCK, 1, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK2 = GPIOC_GPIOx_PLOCK_PLOCK2_Values<GPIOC::GPIOx_PLOCK, 2, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK3 = GPIOC_GPIOx_PLOCK_PLOCK3_Values<GPIOC::GPIOx_PLOCK, 3, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK4 = GPIOC_GPIOx_PLOCK_PLOCK4_Values<GPIOC::GPIOx_PLOCK, 4, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK5 = GPIOC_GPIOx_PLOCK_PLOCK5_Values<GPIOC::GPIOx_PLOCK, 5, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK6 = GPIOC_GPIOx_PLOCK_PLOCK6_Values<GPIOC::GPIOx_PLOCK, 6, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK7 = GPIOC_GPIOx_PLOCK_PLOCK7_Values<GPIOC::GPIOx_PLOCK, 7, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK8 = GPIOC_GPIOx_PLOCK_PLOCK8_Values<GPIOC::GPIOx_PLOCK, 8, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK9 = GPIOC_GPIOx_PLOCK_PLOCK9_Values<GPIOC::GPIOx_PLOCK, 9, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK10 = GPIOC_GPIOx_PLOCK_PLOCK10_Values<GPIOC::GPIOx_PLOCK, 10, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK11 = GPIOC_GPIOx_PLOCK_PLOCK11_Values<GPIOC::GPIOx_PLOCK, 11, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK12 = GPIOC_GPIOx_PLOCK_PLOCK12_Values<GPIOC::GPIOx_PLOCK, 12, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK13 = GPIOC_GPIOx_PLOCK_PLOCK13_Values<GPIOC::GPIOx_PLOCK, 13, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK14 = GPIOC_GPIOx_PLOCK_PLOCK14_Values<GPIOC::GPIOx_PLOCK, 14, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCK15 = GPIOC_GPIOx_PLOCK_PLOCK15_Values<GPIOC::GPIOx_PLOCK, 15, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using PLOCKK = GPIOC_GPIOx_PLOCK_PLOCKK_Values<GPIOC::GPIOx_PLOCK, 16, 1, ReadWriteMode, GPIOCGPIOx_PLOCKBase> ;
    using FieldValues = GPIOC_GPIOx_PLOCK_PLOCKK_Values<GPIOC::GPIOx_PLOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_PLOCKPack  = Register<0x4001101C, 32, ReadWriteMode, GPIOCGPIOx_PLOCKBase, T...> ;

  struct GPIOCGPIOx_AFLBase {} ;

  struct GPIOx_AFL : public RegisterBase<0x40011020, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOC_GPIOx_AFL_AFSEL0_Values<GPIOC::GPIOx_AFL, 0, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL1 = GPIOC_GPIOx_AFL_AFSEL1_Values<GPIOC::GPIOx_AFL, 4, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL2 = GPIOC_GPIOx_AFL_AFSEL2_Values<GPIOC::GPIOx_AFL, 8, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL3 = GPIOC_GPIOx_AFL_AFSEL3_Values<GPIOC::GPIOx_AFL, 12, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL4 = GPIOC_GPIOx_AFL_AFSEL4_Values<GPIOC::GPIOx_AFL, 16, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL5 = GPIOC_GPIOx_AFL_AFSEL5_Values<GPIOC::GPIOx_AFL, 20, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL6 = GPIOC_GPIOx_AFL_AFSEL6_Values<GPIOC::GPIOx_AFL, 24, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using AFSEL7 = GPIOC_GPIOx_AFL_AFSEL7_Values<GPIOC::GPIOx_AFL, 28, 4, ReadWriteMode, GPIOCGPIOx_AFLBase> ;
    using FieldValues = GPIOC_GPIOx_AFL_AFSEL7_Values<GPIOC::GPIOx_AFL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_AFLPack  = Register<0x40011020, 32, ReadWriteMode, GPIOCGPIOx_AFLBase, T...> ;

  struct GPIOCGPIOx_AFHBase {} ;

  struct GPIOx_AFH : public RegisterBase<0x40011024, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOC_GPIOx_AFH_AFSEL0_Values<GPIOC::GPIOx_AFH, 0, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL1 = GPIOC_GPIOx_AFH_AFSEL1_Values<GPIOC::GPIOx_AFH, 4, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL2 = GPIOC_GPIOx_AFH_AFSEL2_Values<GPIOC::GPIOx_AFH, 8, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL3 = GPIOC_GPIOx_AFH_AFSEL3_Values<GPIOC::GPIOx_AFH, 12, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL4 = GPIOC_GPIOx_AFH_AFSEL4_Values<GPIOC::GPIOx_AFH, 16, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL5 = GPIOC_GPIOx_AFH_AFSEL5_Values<GPIOC::GPIOx_AFH, 20, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL6 = GPIOC_GPIOx_AFH_AFSEL6_Values<GPIOC::GPIOx_AFH, 24, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using AFSEL7 = GPIOC_GPIOx_AFH_AFSEL7_Values<GPIOC::GPIOx_AFH, 28, 4, ReadWriteMode, GPIOCGPIOx_AFHBase> ;
    using FieldValues = GPIOC_GPIOx_AFH_AFSEL7_Values<GPIOC::GPIOx_AFH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_AFHPack  = Register<0x40011024, 32, ReadWriteMode, GPIOCGPIOx_AFHBase, T...> ;

  struct GPIOCGPIOx_DSBase {} ;

  struct GPIOx_DS : public RegisterBase<0x4001102C, 32, ReadWriteMode>
  {
    using DS0 = GPIOC_GPIOx_DS_DS0_Values<GPIOC::GPIOx_DS, 0, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS1 = GPIOC_GPIOx_DS_DS1_Values<GPIOC::GPIOx_DS, 1, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS2 = GPIOC_GPIOx_DS_DS2_Values<GPIOC::GPIOx_DS, 2, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS3 = GPIOC_GPIOx_DS_DS3_Values<GPIOC::GPIOx_DS, 3, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS4 = GPIOC_GPIOx_DS_DS4_Values<GPIOC::GPIOx_DS, 4, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS5 = GPIOC_GPIOx_DS_DS5_Values<GPIOC::GPIOx_DS, 5, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS6 = GPIOC_GPIOx_DS_DS6_Values<GPIOC::GPIOx_DS, 6, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS7 = GPIOC_GPIOx_DS_DS7_Values<GPIOC::GPIOx_DS, 7, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS8 = GPIOC_GPIOx_DS_DS8_Values<GPIOC::GPIOx_DS, 8, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS9 = GPIOC_GPIOx_DS_DS9_Values<GPIOC::GPIOx_DS, 9, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS10 = GPIOC_GPIOx_DS_DS10_Values<GPIOC::GPIOx_DS, 10, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS11 = GPIOC_GPIOx_DS_DS11_Values<GPIOC::GPIOx_DS, 11, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS12 = GPIOC_GPIOx_DS_DS12_Values<GPIOC::GPIOx_DS, 12, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS13 = GPIOC_GPIOx_DS_DS13_Values<GPIOC::GPIOx_DS, 13, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS14 = GPIOC_GPIOx_DS_DS14_Values<GPIOC::GPIOx_DS, 14, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using DS15 = GPIOC_GPIOx_DS_DS15_Values<GPIOC::GPIOx_DS, 15, 1, ReadWriteMode, GPIOCGPIOx_DSBase> ;
    using FieldValues = GPIOC_GPIOx_DS_DS15_Values<GPIOC::GPIOx_DS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_DSPack  = Register<0x4001102C, 32, ReadWriteMode, GPIOCGPIOx_DSBase, T...> ;

  struct GPIOCGPIOx_SRBase {} ;

  struct GPIOx_SR : public RegisterBase<0x40011030, 32, ReadWriteMode>
  {
    using SR0 = GPIOC_GPIOx_SR_SR0_Values<GPIOC::GPIOx_SR, 0, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR1 = GPIOC_GPIOx_SR_SR1_Values<GPIOC::GPIOx_SR, 1, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR2 = GPIOC_GPIOx_SR_SR2_Values<GPIOC::GPIOx_SR, 2, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR3 = GPIOC_GPIOx_SR_SR3_Values<GPIOC::GPIOx_SR, 3, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR4 = GPIOC_GPIOx_SR_SR4_Values<GPIOC::GPIOx_SR, 4, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR5 = GPIOC_GPIOx_SR_SR5_Values<GPIOC::GPIOx_SR, 5, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR6 = GPIOC_GPIOx_SR_SR6_Values<GPIOC::GPIOx_SR, 6, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR7 = GPIOC_GPIOx_SR_SR7_Values<GPIOC::GPIOx_SR, 7, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR8 = GPIOC_GPIOx_SR_SR8_Values<GPIOC::GPIOx_SR, 8, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR9 = GPIOC_GPIOx_SR_SR9_Values<GPIOC::GPIOx_SR, 9, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR10 = GPIOC_GPIOx_SR_SR10_Values<GPIOC::GPIOx_SR, 10, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR11 = GPIOC_GPIOx_SR_SR11_Values<GPIOC::GPIOx_SR, 11, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR12 = GPIOC_GPIOx_SR_SR12_Values<GPIOC::GPIOx_SR, 12, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR13 = GPIOC_GPIOx_SR_SR13_Values<GPIOC::GPIOx_SR, 13, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR14 = GPIOC_GPIOx_SR_SR14_Values<GPIOC::GPIOx_SR, 14, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using SR15 = GPIOC_GPIOx_SR_SR15_Values<GPIOC::GPIOx_SR, 15, 1, ReadWriteMode, GPIOCGPIOx_SRBase> ;
    using FieldValues = GPIOC_GPIOx_SR_SR15_Values<GPIOC::GPIOx_SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GPIOx_SRPack  = Register<0x40011030, 32, ReadWriteMode, GPIOCGPIOx_SRBase, T...> ;

} ;

