/*******************************************************************************
* Filename      : compregisters.hpp
*
* Details       : Comparator. This header file is auto-generated for STM32L4x1
*                 device.
*
*
*******************************************************************************/

#if !defined(COMPREGISTERS_HPP)
#define COMPREGISTERS_HPP

#include "compfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP
{
  struct COMPCOMP1_CSRBase {} ;

  struct COMP1_CSR : public RegisterBase<0x40010200, 32, ReadWriteMode>
  {
    using COMP1_EN = COMP_COMP1_CSR_COMP1_EN_Values<COMP::COMP1_CSR, 0, 1, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_PWRMODE = COMP_COMP1_CSR_COMP1_PWRMODE_Values<COMP::COMP1_CSR, 2, 2, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_INMSEL = COMP_COMP1_CSR_COMP1_INMSEL_Values<COMP::COMP1_CSR, 4, 3, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_INPSEL = COMP_COMP1_CSR_COMP1_INPSEL_Values<COMP::COMP1_CSR, 7, 2, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_POLARITY = COMP_COMP1_CSR_COMP1_POLARITY_Values<COMP::COMP1_CSR, 15, 1, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_HYST = COMP_COMP1_CSR_COMP1_HYST_Values<COMP::COMP1_CSR, 16, 2, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_BLANKING = COMP_COMP1_CSR_COMP1_BLANKING_Values<COMP::COMP1_CSR, 18, 3, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_BRGEN = COMP_COMP1_CSR_COMP1_BRGEN_Values<COMP::COMP1_CSR, 22, 1, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_SCALEN = COMP_COMP1_CSR_COMP1_SCALEN_Values<COMP::COMP1_CSR, 23, 1, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_INMESEL = COMP_COMP1_CSR_COMP1_INMESEL_Values<COMP::COMP1_CSR, 25, 2, ReadWriteMode, COMPCOMP1_CSRBase> ;
    using COMP1_VALUE = COMP_COMP1_CSR_COMP1_VALUE_Values<COMP::COMP1_CSR, 30, 1, ReadMode, COMPCOMP1_CSRBase> ;
    using COMP1_LOCK = COMP_COMP1_CSR_COMP1_LOCK_Values<COMP::COMP1_CSR, 31, 1, WriteMode, COMPCOMP1_CSRBase> ;
    using FieldValues = COMP_COMP1_CSR_COMP1_LOCK_Values<COMP::COMP1_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP1_CSRPack  = Register<0x40010200, 32, ReadWriteMode, COMPCOMP1_CSRBase, T...> ;

  struct COMPCOMP2_CSRBase {} ;

  struct COMP2_CSR : public RegisterBase<0x40010204, 32, ReadWriteMode>
  {
    using COMP2_EN = COMP_COMP2_CSR_COMP2_EN_Values<COMP::COMP2_CSR, 0, 1, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_PWRMODE = COMP_COMP2_CSR_COMP2_PWRMODE_Values<COMP::COMP2_CSR, 2, 2, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_INMSEL = COMP_COMP2_CSR_COMP2_INMSEL_Values<COMP::COMP2_CSR, 4, 3, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_INPSEL = COMP_COMP2_CSR_COMP2_INPSEL_Values<COMP::COMP2_CSR, 7, 2, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_WINMODE = COMP_COMP2_CSR_COMP2_WINMODE_Values<COMP::COMP2_CSR, 9, 1, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_POLARITY = COMP_COMP2_CSR_COMP2_POLARITY_Values<COMP::COMP2_CSR, 15, 1, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_HYST = COMP_COMP2_CSR_COMP2_HYST_Values<COMP::COMP2_CSR, 16, 2, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_BLANKING = COMP_COMP2_CSR_COMP2_BLANKING_Values<COMP::COMP2_CSR, 18, 3, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_BRGEN = COMP_COMP2_CSR_COMP2_BRGEN_Values<COMP::COMP2_CSR, 22, 1, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_SCALEN = COMP_COMP2_CSR_COMP2_SCALEN_Values<COMP::COMP2_CSR, 23, 1, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_INMESEL = COMP_COMP2_CSR_COMP2_INMESEL_Values<COMP::COMP2_CSR, 25, 2, ReadWriteMode, COMPCOMP2_CSRBase> ;
    using COMP2_VALUE = COMP_COMP2_CSR_COMP2_VALUE_Values<COMP::COMP2_CSR, 30, 1, ReadMode, COMPCOMP2_CSRBase> ;
    using COMP2_LOCK = COMP_COMP2_CSR_COMP2_LOCK_Values<COMP::COMP2_CSR, 31, 1, WriteMode, COMPCOMP2_CSRBase> ;
    using FieldValues = COMP_COMP2_CSR_COMP2_LOCK_Values<COMP::COMP2_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP2_CSRPack  = Register<0x40010204, 32, ReadWriteMode, COMPCOMP2_CSRBase, T...> ;

} ;

#endif //#if !defined(COMPREGISTERS_HPP)
