/*******************************************************************************
* Filename      : opampregisters.hpp
*
* Details       : operational amplifier. This header file is auto-generated for
*                 N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "opampfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OPAMP
{
  struct OPAMPOPA_CS1Base {} ;

  struct OPA_CS1 : public RegisterBase<0x40002000, 32, ReadWriteMode>
  {
    using EN = OPAMP_OPA_CS1_EN_Values<OPAMP::OPA_CS1, 0, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using MOD = OPAMP_OPA_CS1_MOD_Values<OPAMP::OPA_CS1, 1, 2, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using PGAGAN = OPAMP_OPA_CS1_PGAGAN_Values<OPAMP::OPA_CS1, 3, 3, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using VMSEL = OPAMP_OPA_CS1_VMSEL_Values<OPAMP::OPA_CS1, 6, 2, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using VPSEL = OPAMP_OPA_CS1_VPSEL_Values<OPAMP::OPA_CS1, 8, 3, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using CALON = OPAMP_OPA_CS1_CALON_Values<OPAMP::OPA_CS1, 11, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using TSTREF = OPAMP_OPA_CS1_TSTREF_Values<OPAMP::OPA_CS1, 13, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using CALOUT = OPAMP_OPA_CS1_CALOUT_Values<OPAMP::OPA_CS1, 14, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using RANGE = OPAMP_OPA_CS1_RANGE_Values<OPAMP::OPA_CS1, 15, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using TCMEN = OPAMP_OPA_CS1_TCMEN_Values<OPAMP::OPA_CS1, 16, 1, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using VMSSEL = OPAMP_OPA_CS1_VMSSEL_Values<OPAMP::OPA_CS1, 17, 2, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using VPSSEL = OPAMP_OPA_CS1_VPSSEL_Values<OPAMP::OPA_CS1, 19, 3, ReadWriteMode, OPAMPOPA_CS1Base> ;
    using FieldValues = OPAMP_OPA_CS1_VPSSEL_Values<OPAMP::OPA_CS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPA_CS1Pack  = Register<0x40002000, 32, ReadWriteMode, OPAMPOPA_CS1Base, T...> ;

  struct OPAMPOPA_CS2Base {} ;

  struct OPA_CS2 : public RegisterBase<0x40002010, 32, ReadWriteMode>
  {
    using EN = OPAMP_OPA_CS2_EN_Values<OPAMP::OPA_CS2, 0, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using MOD = OPAMP_OPA_CS2_MOD_Values<OPAMP::OPA_CS2, 1, 2, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using PGAGAN = OPAMP_OPA_CS2_PGAGAN_Values<OPAMP::OPA_CS2, 3, 3, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using VMSEL = OPAMP_OPA_CS2_VMSEL_Values<OPAMP::OPA_CS2, 6, 2, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using VPSEL = OPAMP_OPA_CS2_VPSEL_Values<OPAMP::OPA_CS2, 8, 3, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using CALON = OPAMP_OPA_CS2_CALON_Values<OPAMP::OPA_CS2, 11, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using TSTREF = OPAMP_OPA_CS2_TSTREF_Values<OPAMP::OPA_CS2, 13, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using CALOUT = OPAMP_OPA_CS2_CALOUT_Values<OPAMP::OPA_CS2, 14, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using RANGE = OPAMP_OPA_CS2_RANGE_Values<OPAMP::OPA_CS2, 15, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using TCMEN = OPAMP_OPA_CS2_TCMEN_Values<OPAMP::OPA_CS2, 16, 1, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using VMSSEL = OPAMP_OPA_CS2_VMSSEL_Values<OPAMP::OPA_CS2, 17, 2, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using VPSSEL = OPAMP_OPA_CS2_VPSSEL_Values<OPAMP::OPA_CS2, 19, 3, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using TIMSRCSEL = OPAMP_OPA_CS2_TIMSRCSEL_Values<OPAMP::OPA_CS2, 24, 3, ReadWriteMode, OPAMPOPA_CS2Base> ;
    using FieldValues = OPAMP_OPA_CS2_TIMSRCSEL_Values<OPAMP::OPA_CS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPA_CS2Pack  = Register<0x40002010, 32, ReadWriteMode, OPAMPOPA_CS2Base, T...> ;

  struct OPAMPOPA_LOCKBase {} ;

  struct OPA_LOCK : public RegisterBase<0x40002020, 32, ReadWriteMode>
  {
    using OPAMP1LK = OPAMP_OPA_LOCK_OPAMP1LK_Values<OPAMP::OPA_LOCK, 0, 1, ReadWriteMode, OPAMPOPA_LOCKBase> ;
    using OPAMP2LK = OPAMP_OPA_LOCK_OPAMP2LK_Values<OPAMP::OPA_LOCK, 1, 1, ReadWriteMode, OPAMPOPA_LOCKBase> ;
    using FieldValues = OPAMP_OPA_LOCK_OPAMP2LK_Values<OPAMP::OPA_LOCK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPA_LOCKPack  = Register<0x40002020, 32, ReadWriteMode, OPAMPOPA_LOCKBase, T...> ;

} ;

