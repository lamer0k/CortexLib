/*******************************************************************************
* Filename      : timera1registers.hpp
*
* Details       : TIMER_A1. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(TIMERA1REGISTERS_HPP)
#define TIMERA1REGISTERS_HPP

#include "timera1bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIMER_A1
{
  struct TIMER_A1TAxCTLBase {} ;

  struct TAxCTL : public RegisterBase<0x40000400, 16, ReadWriteMode>
  {
    using TAIFG = TIMER_A_TAxCTL_TAIFG_Values<TIMER_A1::TAxCTL, 0, 1, ReadWriteMode, TIMER_A1TAxCTLBase> ;
    using TAIE = TIMER_A_TAxCTL_TAIE_Values<TIMER_A1::TAxCTL, 1, 1, ReadWriteMode, TIMER_A1TAxCTLBase> ;
    using TACLR = TIMER_A_TAxCTL_TACLR_Values<TIMER_A1::TAxCTL, 2, 1, ReadWriteMode, TIMER_A1TAxCTLBase> ;
    using MC = TIMER_A_TAxCTL_MC_Values<TIMER_A1::TAxCTL, 4, 2, ReadWriteMode, TIMER_A1TAxCTLBase> ;
    using ID = TIMER_A_TAxCTL_ID_Values<TIMER_A1::TAxCTL, 6, 2, ReadWriteMode, TIMER_A1TAxCTLBase> ;
    using TASSEL = TIMER_A_TAxCTL_TASSEL_Values<TIMER_A1::TAxCTL, 8, 2, ReadWriteMode, TIMER_A1TAxCTLBase> ;
  } ;

  template<typename... T> 
  using TAxCTLPack  = Register<0x40000400, 16, ReadWriteMode, TIMER_A1TAxCTLBase, T...> ;

  struct TIMER_A1TAxRBase {} ;

  struct TAxR : public RegisterBase<0x40000410, 16, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using TAxRPack  = Register<0x40000410, 16, ReadWriteMode, TIMER_A1TAxRBase, T...> ;

  struct TIMER_A1TAxEX0Base {} ;

  struct TAxEX0 : public RegisterBase<0x40000420, 16, ReadWriteMode>
  {
    using TAIDEX = TIMER_A_TAxEX_TAIDEX_Values<TIMER_A1::TAxEX0, 0, 3, ReadWriteMode, TIMER_A1TAxEX0Base> ;
  } ;

  template<typename... T> 
  using TAxEX0Pack  = Register<0x40000420, 16, ReadWriteMode, TIMER_A1TAxEX0Base, T...> ;

  struct TIMER_A1TAxIVBase {} ;

  struct TAxIV : public RegisterBase<0x4000042E, 16, ReadMode>
  {
    using TAIV = TIMER_A_TAxIV_TAIV_Values<TIMER_A1::TAxIV, 0, 16, ReadMode, TIMER_A1TAxIVBase> ;
  } ;

  template<typename... T> 
  using TAxIVPack  = Register<0x4000042E, 16, ReadMode, TIMER_A1TAxIVBase, T...> ;

  struct TIMER_A1TAxCCTL0Base {} ;

  struct TAxCCTL0 : public RegisterBase<0x40000402, 16, ReadWriteMode>
  {
    using CCIFG = TIMER_A_TAxCCTL_CCIFG_Values<TIMER_A1::TAxCCTL0, 0, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using COV = TIMER_A_TAxCCTL_COV_Values<TIMER_A1::TAxCCTL0, 1, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using OUT = TIMER_A_TAxCCTL_OUT_Values<TIMER_A1::TAxCCTL0, 2, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using CCI = TIMER_A_TAxCCTL_CCI_Values<TIMER_A1::TAxCCTL0, 3, 1, ReadMode, TIMER_A1TAxCCTL0Base> ;
    using CCIE = TIMER_A_TAxCCTL_CCIE_Values<TIMER_A1::TAxCCTL0, 4, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using OUTMOD = TIMER_A_TAxCCTL_OUTMOD_Values<TIMER_A1::TAxCCTL0, 5, 3, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using CAP = TIMER_A_TAxCCTL_CAP_Values<TIMER_A1::TAxCCTL0, 8, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using SCCI = TIMER_A_TAxCCTL_SCCI_Values<TIMER_A1::TAxCCTL0, 10, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using SCS = TIMER_A_TAxCCTL_SCS_Values<TIMER_A1::TAxCCTL0, 11, 1, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using CCIS = TIMER_A_TAxCCTL_CCIS_Values<TIMER_A1::TAxCCTL0, 12, 2, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
    using CM = TIMER_A_TAxCCTL_CM_Values<TIMER_A1::TAxCCTL0, 14, 2, ReadWriteMode, TIMER_A1TAxCCTL0Base> ;
  } ;

  template<typename... T> 
  using TAxCCTL0Pack  = Register<0x40000402, 16, ReadWriteMode, TIMER_A1TAxCCTL0Base, T...> ;

  struct TIMER_A1TAxCCTL1Base {} ;

  struct TAxCCTL1 : public RegisterBase<0x40000404, 16, ReadWriteMode>
  {
    using CCIFG = TIMER_A_TAxCCTL_CCIFG_Values<TIMER_A1::TAxCCTL1, 0, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using COV = TIMER_A_TAxCCTL_COV_Values<TIMER_A1::TAxCCTL1, 1, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using OUT = TIMER_A_TAxCCTL_OUT_Values<TIMER_A1::TAxCCTL1, 2, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using CCI = TIMER_A_TAxCCTL_CCI_Values<TIMER_A1::TAxCCTL1, 3, 1, ReadMode, TIMER_A1TAxCCTL1Base> ;
    using CCIE = TIMER_A_TAxCCTL_CCIE_Values<TIMER_A1::TAxCCTL1, 4, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using OUTMOD = TIMER_A_TAxCCTL_OUTMOD_Values<TIMER_A1::TAxCCTL1, 5, 3, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using CAP = TIMER_A_TAxCCTL_CAP_Values<TIMER_A1::TAxCCTL1, 8, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using SCCI = TIMER_A_TAxCCTL_SCCI_Values<TIMER_A1::TAxCCTL1, 10, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using SCS = TIMER_A_TAxCCTL_SCS_Values<TIMER_A1::TAxCCTL1, 11, 1, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using CCIS = TIMER_A_TAxCCTL_CCIS_Values<TIMER_A1::TAxCCTL1, 12, 2, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
    using CM = TIMER_A_TAxCCTL_CM_Values<TIMER_A1::TAxCCTL1, 14, 2, ReadWriteMode, TIMER_A1TAxCCTL1Base> ;
  } ;

  template<typename... T> 
  using TAxCCTL1Pack  = Register<0x40000404, 16, ReadWriteMode, TIMER_A1TAxCCTL1Base, T...> ;

  struct TIMER_A1TAxCCTL2Base {} ;

  struct TAxCCTL2 : public RegisterBase<0x40000406, 16, ReadWriteMode>
  {
    using CCIFG = TIMER_A_TAxCCTL_CCIFG_Values<TIMER_A1::TAxCCTL2, 0, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using COV = TIMER_A_TAxCCTL_COV_Values<TIMER_A1::TAxCCTL2, 1, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using OUT = TIMER_A_TAxCCTL_OUT_Values<TIMER_A1::TAxCCTL2, 2, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using CCI = TIMER_A_TAxCCTL_CCI_Values<TIMER_A1::TAxCCTL2, 3, 1, ReadMode, TIMER_A1TAxCCTL2Base> ;
    using CCIE = TIMER_A_TAxCCTL_CCIE_Values<TIMER_A1::TAxCCTL2, 4, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using OUTMOD = TIMER_A_TAxCCTL_OUTMOD_Values<TIMER_A1::TAxCCTL2, 5, 3, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using CAP = TIMER_A_TAxCCTL_CAP_Values<TIMER_A1::TAxCCTL2, 8, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using SCCI = TIMER_A_TAxCCTL_SCCI_Values<TIMER_A1::TAxCCTL2, 10, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using SCS = TIMER_A_TAxCCTL_SCS_Values<TIMER_A1::TAxCCTL2, 11, 1, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using CCIS = TIMER_A_TAxCCTL_CCIS_Values<TIMER_A1::TAxCCTL2, 12, 2, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
    using CM = TIMER_A_TAxCCTL_CM_Values<TIMER_A1::TAxCCTL2, 14, 2, ReadWriteMode, TIMER_A1TAxCCTL2Base> ;
  } ;

  template<typename... T> 
  using TAxCCTL2Pack  = Register<0x40000406, 16, ReadWriteMode, TIMER_A1TAxCCTL2Base, T...> ;

  struct TIMER_A1TAxCCTL3Base {} ;

  struct TAxCCTL3 : public RegisterBase<0x40000408, 16, ReadWriteMode>
  {
    using CCIFG = TIMER_A_TAxCCTL_CCIFG_Values<TIMER_A1::TAxCCTL3, 0, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using COV = TIMER_A_TAxCCTL_COV_Values<TIMER_A1::TAxCCTL3, 1, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using OUT = TIMER_A_TAxCCTL_OUT_Values<TIMER_A1::TAxCCTL3, 2, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using CCI = TIMER_A_TAxCCTL_CCI_Values<TIMER_A1::TAxCCTL3, 3, 1, ReadMode, TIMER_A1TAxCCTL3Base> ;
    using CCIE = TIMER_A_TAxCCTL_CCIE_Values<TIMER_A1::TAxCCTL3, 4, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using OUTMOD = TIMER_A_TAxCCTL_OUTMOD_Values<TIMER_A1::TAxCCTL3, 5, 3, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using CAP = TIMER_A_TAxCCTL_CAP_Values<TIMER_A1::TAxCCTL3, 8, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using SCCI = TIMER_A_TAxCCTL_SCCI_Values<TIMER_A1::TAxCCTL3, 10, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using SCS = TIMER_A_TAxCCTL_SCS_Values<TIMER_A1::TAxCCTL3, 11, 1, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using CCIS = TIMER_A_TAxCCTL_CCIS_Values<TIMER_A1::TAxCCTL3, 12, 2, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
    using CM = TIMER_A_TAxCCTL_CM_Values<TIMER_A1::TAxCCTL3, 14, 2, ReadWriteMode, TIMER_A1TAxCCTL3Base> ;
  } ;

  template<typename... T> 
  using TAxCCTL3Pack  = Register<0x40000408, 16, ReadWriteMode, TIMER_A1TAxCCTL3Base, T...> ;

  struct TIMER_A1TAxCCTL4Base {} ;

  struct TAxCCTL4 : public RegisterBase<0x4000040A, 16, ReadWriteMode>
  {
    using CCIFG = TIMER_A_TAxCCTL_CCIFG_Values<TIMER_A1::TAxCCTL4, 0, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using COV = TIMER_A_TAxCCTL_COV_Values<TIMER_A1::TAxCCTL4, 1, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using OUT = TIMER_A_TAxCCTL_OUT_Values<TIMER_A1::TAxCCTL4, 2, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using CCI = TIMER_A_TAxCCTL_CCI_Values<TIMER_A1::TAxCCTL4, 3, 1, ReadMode, TIMER_A1TAxCCTL4Base> ;
    using CCIE = TIMER_A_TAxCCTL_CCIE_Values<TIMER_A1::TAxCCTL4, 4, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using OUTMOD = TIMER_A_TAxCCTL_OUTMOD_Values<TIMER_A1::TAxCCTL4, 5, 3, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using CAP = TIMER_A_TAxCCTL_CAP_Values<TIMER_A1::TAxCCTL4, 8, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using SCCI = TIMER_A_TAxCCTL_SCCI_Values<TIMER_A1::TAxCCTL4, 10, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using SCS = TIMER_A_TAxCCTL_SCS_Values<TIMER_A1::TAxCCTL4, 11, 1, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using CCIS = TIMER_A_TAxCCTL_CCIS_Values<TIMER_A1::TAxCCTL4, 12, 2, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
    using CM = TIMER_A_TAxCCTL_CM_Values<TIMER_A1::TAxCCTL4, 14, 2, ReadWriteMode, TIMER_A1TAxCCTL4Base> ;
  } ;

  template<typename... T> 
  using TAxCCTL4Pack  = Register<0x4000040A, 16, ReadWriteMode, TIMER_A1TAxCCTL4Base, T...> ;

  struct TIMER_A1TAxCCR0Base {} ;

  struct TAxCCR0 : public RegisterBase<0x40000412, 16, ReadWriteMode>
  {
    using TAxR = TIMER_A_TAxCCR_TAxR_Values<TIMER_A1::TAxCCR0, 0, 16, ReadWriteMode, TIMER_A1TAxCCR0Base> ;
  } ;

  template<typename... T> 
  using TAxCCR0Pack  = Register<0x40000412, 16, ReadWriteMode, TIMER_A1TAxCCR0Base, T...> ;

  struct TIMER_A1TAxCCR1Base {} ;

  struct TAxCCR1 : public RegisterBase<0x40000414, 16, ReadWriteMode>
  {
    using TAxR = TIMER_A_TAxCCR_TAxR_Values<TIMER_A1::TAxCCR1, 0, 16, ReadWriteMode, TIMER_A1TAxCCR1Base> ;
  } ;

  template<typename... T> 
  using TAxCCR1Pack  = Register<0x40000414, 16, ReadWriteMode, TIMER_A1TAxCCR1Base, T...> ;

  struct TIMER_A1TAxCCR2Base {} ;

  struct TAxCCR2 : public RegisterBase<0x40000416, 16, ReadWriteMode>
  {
    using TAxR = TIMER_A_TAxCCR_TAxR_Values<TIMER_A1::TAxCCR2, 0, 16, ReadWriteMode, TIMER_A1TAxCCR2Base> ;
  } ;

  template<typename... T> 
  using TAxCCR2Pack  = Register<0x40000416, 16, ReadWriteMode, TIMER_A1TAxCCR2Base, T...> ;

  struct TIMER_A1TAxCCR3Base {} ;

  struct TAxCCR3 : public RegisterBase<0x40000418, 16, ReadWriteMode>
  {
    using TAxR = TIMER_A_TAxCCR_TAxR_Values<TIMER_A1::TAxCCR3, 0, 16, ReadWriteMode, TIMER_A1TAxCCR3Base> ;
  } ;

  template<typename... T> 
  using TAxCCR3Pack  = Register<0x40000418, 16, ReadWriteMode, TIMER_A1TAxCCR3Base, T...> ;

  struct TIMER_A1TAxCCR4Base {} ;

  struct TAxCCR4 : public RegisterBase<0x4000041A, 16, ReadWriteMode>
  {
    using TAxR = TIMER_A_TAxCCR_TAxR_Values<TIMER_A1::TAxCCR4, 0, 16, ReadWriteMode, TIMER_A1TAxCCR4Base> ;
  } ;

  template<typename... T> 
  using TAxCCR4Pack  = Register<0x4000041A, 16, ReadWriteMode, TIMER_A1TAxCCR4Base, T...> ;

} ;

#endif //#if !defined(TIMERA1REGISTERS_HPP)
