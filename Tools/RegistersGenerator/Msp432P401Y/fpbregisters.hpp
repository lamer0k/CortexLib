/*******************************************************************************
* Filename      : fpbregisters.hpp
*
* Details       : FPB. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(FPBREGISTERS_HPP)
#define FPBREGISTERS_HPP

#include "fpbbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FPB
{
  struct FPBFP_CTRLBase {} ;

  struct FP_CTRL : public RegisterBase<0xE0002000, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_CTRL_ENABLE_Values<FPB::FP_CTRL, 0, 1, ReadWriteMode, FPBFP_CTRLBase> ;
    using KEY = FPB_FP_CTRL_KEY_Values<FPB::FP_CTRL, 1, 1, WriteMode, FPBFP_CTRLBase> ;
    using NUM_CODE1 = FPB_FP_CTRL_NUM_CODE_Values<FPB::FP_CTRL, 4, 4, ReadMode, FPBFP_CTRLBase> ;
    using NUM_LIT = FPB_FP_CTRL_NUM_LIT_Values<FPB::FP_CTRL, 8, 4, ReadMode, FPBFP_CTRLBase> ;
    using NUM_CODE2 = FPB_FP_CTRL_NUM_CODE_Values<FPB::FP_CTRL, 12, 2, ReadMode, FPBFP_CTRLBase> ;
  } ;

  template<typename... T> 
  using FP_CTRLPack  = Register<0xE0002000, 32, ReadWriteMode, FPBFP_CTRLBase, T...> ;

  struct FPBFP_REMAPBase {} ;

  struct FP_REMAP : public RegisterBase<0xE0002004, 32, ReadWriteMode>
  {
    using REMAP = FPB_FP_REMAP_REMAP_Values<FPB::FP_REMAP, 5, 24, ReadWriteMode, FPBFP_REMAPBase> ;
  } ;

  template<typename... T> 
  using FP_REMAPPack  = Register<0xE0002004, 32, ReadWriteMode, FPBFP_REMAPBase, T...> ;

  struct FPBFP_COMP0Base {} ;

  struct FP_COMP0 : public RegisterBase<0xE0002008, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP0, 0, 1, ReadWriteMode, FPBFP_COMP0Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP0, 2, 27, ReadWriteMode, FPBFP_COMP0Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP0, 30, 2, ReadWriteMode, FPBFP_COMP0Base> ;
  } ;

  template<typename... T> 
  using FP_COMP0Pack  = Register<0xE0002008, 32, ReadWriteMode, FPBFP_COMP0Base, T...> ;

  struct FPBFP_COMP1Base {} ;

  struct FP_COMP1 : public RegisterBase<0xE000200C, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP1, 0, 1, ReadWriteMode, FPBFP_COMP1Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP1, 2, 27, ReadWriteMode, FPBFP_COMP1Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP1, 30, 2, ReadWriteMode, FPBFP_COMP1Base> ;
  } ;

  template<typename... T> 
  using FP_COMP1Pack  = Register<0xE000200C, 32, ReadWriteMode, FPBFP_COMP1Base, T...> ;

  struct FPBFP_COMP2Base {} ;

  struct FP_COMP2 : public RegisterBase<0xE0002010, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP2, 0, 1, ReadWriteMode, FPBFP_COMP2Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP2, 2, 27, ReadWriteMode, FPBFP_COMP2Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP2, 30, 2, ReadWriteMode, FPBFP_COMP2Base> ;
  } ;

  template<typename... T> 
  using FP_COMP2Pack  = Register<0xE0002010, 32, ReadWriteMode, FPBFP_COMP2Base, T...> ;

  struct FPBFP_COMP3Base {} ;

  struct FP_COMP3 : public RegisterBase<0xE0002014, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP3, 0, 1, ReadWriteMode, FPBFP_COMP3Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP3, 2, 27, ReadWriteMode, FPBFP_COMP3Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP3, 30, 2, ReadWriteMode, FPBFP_COMP3Base> ;
  } ;

  template<typename... T> 
  using FP_COMP3Pack  = Register<0xE0002014, 32, ReadWriteMode, FPBFP_COMP3Base, T...> ;

  struct FPBFP_COMP4Base {} ;

  struct FP_COMP4 : public RegisterBase<0xE0002018, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP4, 0, 1, ReadWriteMode, FPBFP_COMP4Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP4, 2, 27, ReadWriteMode, FPBFP_COMP4Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP4, 30, 2, ReadWriteMode, FPBFP_COMP4Base> ;
  } ;

  template<typename... T> 
  using FP_COMP4Pack  = Register<0xE0002018, 32, ReadWriteMode, FPBFP_COMP4Base, T...> ;

  struct FPBFP_COMP5Base {} ;

  struct FP_COMP5 : public RegisterBase<0xE000201C, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP5, 0, 1, ReadWriteMode, FPBFP_COMP5Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP5, 2, 27, ReadWriteMode, FPBFP_COMP5Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP5, 30, 2, ReadWriteMode, FPBFP_COMP5Base> ;
  } ;

  template<typename... T> 
  using FP_COMP5Pack  = Register<0xE000201C, 32, ReadWriteMode, FPBFP_COMP5Base, T...> ;

  struct FPBFP_COMP6Base {} ;

  struct FP_COMP6 : public RegisterBase<0xE0002020, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP6, 0, 1, ReadWriteMode, FPBFP_COMP6Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP6, 2, 27, ReadWriteMode, FPBFP_COMP6Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP6, 30, 2, ReadWriteMode, FPBFP_COMP6Base> ;
  } ;

  template<typename... T> 
  using FP_COMP6Pack  = Register<0xE0002020, 32, ReadWriteMode, FPBFP_COMP6Base, T...> ;

  struct FPBFP_COMP7Base {} ;

  struct FP_COMP7 : public RegisterBase<0xE0002024, 32, ReadWriteMode>
  {
    using ENABLE = FPB_FP_COMP_ENABLE_Values<FPB::FP_COMP7, 0, 1, ReadWriteMode, FPBFP_COMP7Base> ;
    using COMP = FPB_FP_COMP_COMP_Values<FPB::FP_COMP7, 2, 27, ReadWriteMode, FPBFP_COMP7Base> ;
    using REPLACE = FPB_FP_COMP_REPLACE_Values<FPB::FP_COMP7, 30, 2, ReadWriteMode, FPBFP_COMP7Base> ;
  } ;

  template<typename... T> 
  using FP_COMP7Pack  = Register<0xE0002024, 32, ReadWriteMode, FPBFP_COMP7Base, T...> ;

} ;

#endif //#if !defined(FPBREGISTERS_HPP)
