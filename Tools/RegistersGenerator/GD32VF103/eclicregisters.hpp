/*******************************************************************************
* Filename      : eclicregisters.hpp
*
* Details       : Enhanced Core Local Interrupt Controller. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(ECLICREGISTERS_HPP)
#define ECLICREGISTERS_HPP

#include "eclicfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ECLIC
{
  struct ECLICCLICCFGBase {} ;

  struct CLICCFG : public RegisterBase<0xD2000000, 8, ReadWriteMode>
  {
    using NLBITS = ECLIC_CLICCFG_NLBITS_Values<ECLIC::CLICCFG, 1, 4, ReadWriteMode, ECLICCLICCFGBase> ;
    using FieldValues = ECLIC_CLICCFG_NLBITS_Values<ECLIC::CLICCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICCFGPack  = Register<0xD2000000, 8, ReadWriteMode, ECLICCLICCFGBase, T...> ;

  struct ECLICCLICINFOBase {} ;

  struct CLICINFO : public RegisterBase<0xD2000004, 32, ReadMode>
  {
    using NUM_INTERRUPT = ECLIC_CLICINFO_NUM_INTERRUPT_Values<ECLIC::CLICINFO, 0, 13, ReadMode, ECLICCLICINFOBase> ;
    using VERSION = ECLIC_CLICINFO_VERSION_Values<ECLIC::CLICINFO, 13, 8, ReadMode, ECLICCLICINFOBase> ;
    using CLICINTCTLBITS = ECLIC_CLICINFO_CLICINTCTLBITS_Values<ECLIC::CLICINFO, 21, 4, ReadMode, ECLICCLICINFOBase> ;
    using FieldValues = ECLIC_CLICINFO_CLICINTCTLBITS_Values<ECLIC::CLICINFO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINFOPack  = Register<0xD2000004, 32, ReadMode, ECLICCLICINFOBase, T...> ;

  struct ECLICMTHBase {} ;

  struct MTH : public RegisterBase<0xD200000B, 8, ReadWriteMode>
  {
    using MTHField = ECLIC_MTH_MTH_Values<ECLIC::MTH, 0, 8, ReadWriteMode, ECLICMTHBase> ;
    using FieldValues = ECLIC_MTH_MTH_Values<ECLIC::MTH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTHPack  = Register<0xD200000B, 8, ReadWriteMode, ECLICMTHBase, T...> ;

  struct ECLICCLICINTIP_0Base {} ;

  struct CLICINTIP_0 : public RegisterBase<0xD2001000, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_0_IP_Values<ECLIC::CLICINTIP_0, 0, 1, ReadWriteMode, ECLICCLICINTIP_0Base> ;
    using FieldValues = ECLIC_CLICINTIP_0_IP_Values<ECLIC::CLICINTIP_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_0Pack  = Register<0xD2001000, 8, ReadWriteMode, ECLICCLICINTIP_0Base, T...> ;

  struct ECLICCLICINTIP_1Base {} ;

  struct CLICINTIP_1 : public RegisterBase<0xD2001004, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_1_IP_Values<ECLIC::CLICINTIP_1, 0, 1, ReadWriteMode, ECLICCLICINTIP_1Base> ;
    using FieldValues = ECLIC_CLICINTIP_1_IP_Values<ECLIC::CLICINTIP_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_1Pack  = Register<0xD2001004, 8, ReadWriteMode, ECLICCLICINTIP_1Base, T...> ;

  struct ECLICCLICINTIP_2Base {} ;

  struct CLICINTIP_2 : public RegisterBase<0xD2001008, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_2_IP_Values<ECLIC::CLICINTIP_2, 0, 1, ReadWriteMode, ECLICCLICINTIP_2Base> ;
    using FieldValues = ECLIC_CLICINTIP_2_IP_Values<ECLIC::CLICINTIP_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_2Pack  = Register<0xD2001008, 8, ReadWriteMode, ECLICCLICINTIP_2Base, T...> ;

  struct ECLICCLICINTIP_3Base {} ;

  struct CLICINTIP_3 : public RegisterBase<0xD200100C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_3_IP_Values<ECLIC::CLICINTIP_3, 0, 1, ReadWriteMode, ECLICCLICINTIP_3Base> ;
    using FieldValues = ECLIC_CLICINTIP_3_IP_Values<ECLIC::CLICINTIP_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_3Pack  = Register<0xD200100C, 8, ReadWriteMode, ECLICCLICINTIP_3Base, T...> ;

  struct ECLICCLICINTIP_4Base {} ;

  struct CLICINTIP_4 : public RegisterBase<0xD2001010, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_4_IP_Values<ECLIC::CLICINTIP_4, 0, 1, ReadWriteMode, ECLICCLICINTIP_4Base> ;
    using FieldValues = ECLIC_CLICINTIP_4_IP_Values<ECLIC::CLICINTIP_4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_4Pack  = Register<0xD2001010, 8, ReadWriteMode, ECLICCLICINTIP_4Base, T...> ;

  struct ECLICCLICINTIP_5Base {} ;

  struct CLICINTIP_5 : public RegisterBase<0xD2001014, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_5_IP_Values<ECLIC::CLICINTIP_5, 0, 1, ReadWriteMode, ECLICCLICINTIP_5Base> ;
    using FieldValues = ECLIC_CLICINTIP_5_IP_Values<ECLIC::CLICINTIP_5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_5Pack  = Register<0xD2001014, 8, ReadWriteMode, ECLICCLICINTIP_5Base, T...> ;

  struct ECLICCLICINTIP_6Base {} ;

  struct CLICINTIP_6 : public RegisterBase<0xD2001018, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_6_IP_Values<ECLIC::CLICINTIP_6, 0, 1, ReadWriteMode, ECLICCLICINTIP_6Base> ;
    using FieldValues = ECLIC_CLICINTIP_6_IP_Values<ECLIC::CLICINTIP_6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_6Pack  = Register<0xD2001018, 8, ReadWriteMode, ECLICCLICINTIP_6Base, T...> ;

  struct ECLICCLICINTIP_7Base {} ;

  struct CLICINTIP_7 : public RegisterBase<0xD200101C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_7_IP_Values<ECLIC::CLICINTIP_7, 0, 1, ReadWriteMode, ECLICCLICINTIP_7Base> ;
    using FieldValues = ECLIC_CLICINTIP_7_IP_Values<ECLIC::CLICINTIP_7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_7Pack  = Register<0xD200101C, 8, ReadWriteMode, ECLICCLICINTIP_7Base, T...> ;

  struct ECLICCLICINTIP_8Base {} ;

  struct CLICINTIP_8 : public RegisterBase<0xD2001020, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_8_IP_Values<ECLIC::CLICINTIP_8, 0, 1, ReadWriteMode, ECLICCLICINTIP_8Base> ;
    using FieldValues = ECLIC_CLICINTIP_8_IP_Values<ECLIC::CLICINTIP_8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_8Pack  = Register<0xD2001020, 8, ReadWriteMode, ECLICCLICINTIP_8Base, T...> ;

  struct ECLICCLICINTIP_9Base {} ;

  struct CLICINTIP_9 : public RegisterBase<0xD2001024, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_9_IP_Values<ECLIC::CLICINTIP_9, 0, 1, ReadWriteMode, ECLICCLICINTIP_9Base> ;
    using FieldValues = ECLIC_CLICINTIP_9_IP_Values<ECLIC::CLICINTIP_9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_9Pack  = Register<0xD2001024, 8, ReadWriteMode, ECLICCLICINTIP_9Base, T...> ;

  struct ECLICCLICINTIP_10Base {} ;

  struct CLICINTIP_10 : public RegisterBase<0xD2001028, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_10_IP_Values<ECLIC::CLICINTIP_10, 0, 1, ReadWriteMode, ECLICCLICINTIP_10Base> ;
    using FieldValues = ECLIC_CLICINTIP_10_IP_Values<ECLIC::CLICINTIP_10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_10Pack  = Register<0xD2001028, 8, ReadWriteMode, ECLICCLICINTIP_10Base, T...> ;

  struct ECLICCLICINTIP_11Base {} ;

  struct CLICINTIP_11 : public RegisterBase<0xD200102C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_11_IP_Values<ECLIC::CLICINTIP_11, 0, 1, ReadWriteMode, ECLICCLICINTIP_11Base> ;
    using FieldValues = ECLIC_CLICINTIP_11_IP_Values<ECLIC::CLICINTIP_11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_11Pack  = Register<0xD200102C, 8, ReadWriteMode, ECLICCLICINTIP_11Base, T...> ;

  struct ECLICCLICINTIP_12Base {} ;

  struct CLICINTIP_12 : public RegisterBase<0xD2001030, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_12_IP_Values<ECLIC::CLICINTIP_12, 0, 1, ReadWriteMode, ECLICCLICINTIP_12Base> ;
    using FieldValues = ECLIC_CLICINTIP_12_IP_Values<ECLIC::CLICINTIP_12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_12Pack  = Register<0xD2001030, 8, ReadWriteMode, ECLICCLICINTIP_12Base, T...> ;

  struct ECLICCLICINTIP_13Base {} ;

  struct CLICINTIP_13 : public RegisterBase<0xD2001034, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_13_IP_Values<ECLIC::CLICINTIP_13, 0, 1, ReadWriteMode, ECLICCLICINTIP_13Base> ;
    using FieldValues = ECLIC_CLICINTIP_13_IP_Values<ECLIC::CLICINTIP_13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_13Pack  = Register<0xD2001034, 8, ReadWriteMode, ECLICCLICINTIP_13Base, T...> ;

  struct ECLICCLICINTIP_14Base {} ;

  struct CLICINTIP_14 : public RegisterBase<0xD2001038, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_14_IP_Values<ECLIC::CLICINTIP_14, 0, 1, ReadWriteMode, ECLICCLICINTIP_14Base> ;
    using FieldValues = ECLIC_CLICINTIP_14_IP_Values<ECLIC::CLICINTIP_14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_14Pack  = Register<0xD2001038, 8, ReadWriteMode, ECLICCLICINTIP_14Base, T...> ;

  struct ECLICCLICINTIP_15Base {} ;

  struct CLICINTIP_15 : public RegisterBase<0xD200103C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_15_IP_Values<ECLIC::CLICINTIP_15, 0, 1, ReadWriteMode, ECLICCLICINTIP_15Base> ;
    using FieldValues = ECLIC_CLICINTIP_15_IP_Values<ECLIC::CLICINTIP_15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_15Pack  = Register<0xD200103C, 8, ReadWriteMode, ECLICCLICINTIP_15Base, T...> ;

  struct ECLICCLICINTIP_16Base {} ;

  struct CLICINTIP_16 : public RegisterBase<0xD2001040, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_16_IP_Values<ECLIC::CLICINTIP_16, 0, 1, ReadWriteMode, ECLICCLICINTIP_16Base> ;
    using FieldValues = ECLIC_CLICINTIP_16_IP_Values<ECLIC::CLICINTIP_16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_16Pack  = Register<0xD2001040, 8, ReadWriteMode, ECLICCLICINTIP_16Base, T...> ;

  struct ECLICCLICINTIP_17Base {} ;

  struct CLICINTIP_17 : public RegisterBase<0xD2001044, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_17_IP_Values<ECLIC::CLICINTIP_17, 0, 1, ReadWriteMode, ECLICCLICINTIP_17Base> ;
    using FieldValues = ECLIC_CLICINTIP_17_IP_Values<ECLIC::CLICINTIP_17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_17Pack  = Register<0xD2001044, 8, ReadWriteMode, ECLICCLICINTIP_17Base, T...> ;

  struct ECLICCLICINTIP_18Base {} ;

  struct CLICINTIP_18 : public RegisterBase<0xD2001048, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_18_IP_Values<ECLIC::CLICINTIP_18, 0, 1, ReadWriteMode, ECLICCLICINTIP_18Base> ;
    using FieldValues = ECLIC_CLICINTIP_18_IP_Values<ECLIC::CLICINTIP_18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_18Pack  = Register<0xD2001048, 8, ReadWriteMode, ECLICCLICINTIP_18Base, T...> ;

  struct ECLICCLICINTIP_19Base {} ;

  struct CLICINTIP_19 : public RegisterBase<0xD200104C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_19_IP_Values<ECLIC::CLICINTIP_19, 0, 1, ReadWriteMode, ECLICCLICINTIP_19Base> ;
    using FieldValues = ECLIC_CLICINTIP_19_IP_Values<ECLIC::CLICINTIP_19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_19Pack  = Register<0xD200104C, 8, ReadWriteMode, ECLICCLICINTIP_19Base, T...> ;

  struct ECLICCLICINTIP_20Base {} ;

  struct CLICINTIP_20 : public RegisterBase<0xD2001050, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_20_IP_Values<ECLIC::CLICINTIP_20, 0, 1, ReadWriteMode, ECLICCLICINTIP_20Base> ;
    using FieldValues = ECLIC_CLICINTIP_20_IP_Values<ECLIC::CLICINTIP_20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_20Pack  = Register<0xD2001050, 8, ReadWriteMode, ECLICCLICINTIP_20Base, T...> ;

  struct ECLICCLICINTIP_21Base {} ;

  struct CLICINTIP_21 : public RegisterBase<0xD2001054, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_21_IP_Values<ECLIC::CLICINTIP_21, 0, 1, ReadWriteMode, ECLICCLICINTIP_21Base> ;
    using FieldValues = ECLIC_CLICINTIP_21_IP_Values<ECLIC::CLICINTIP_21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_21Pack  = Register<0xD2001054, 8, ReadWriteMode, ECLICCLICINTIP_21Base, T...> ;

  struct ECLICCLICINTIP_22Base {} ;

  struct CLICINTIP_22 : public RegisterBase<0xD2001058, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_22_IP_Values<ECLIC::CLICINTIP_22, 0, 1, ReadWriteMode, ECLICCLICINTIP_22Base> ;
    using FieldValues = ECLIC_CLICINTIP_22_IP_Values<ECLIC::CLICINTIP_22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_22Pack  = Register<0xD2001058, 8, ReadWriteMode, ECLICCLICINTIP_22Base, T...> ;

  struct ECLICCLICINTIP_23Base {} ;

  struct CLICINTIP_23 : public RegisterBase<0xD200105C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_23_IP_Values<ECLIC::CLICINTIP_23, 0, 1, ReadWriteMode, ECLICCLICINTIP_23Base> ;
    using FieldValues = ECLIC_CLICINTIP_23_IP_Values<ECLIC::CLICINTIP_23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_23Pack  = Register<0xD200105C, 8, ReadWriteMode, ECLICCLICINTIP_23Base, T...> ;

  struct ECLICCLICINTIP_24Base {} ;

  struct CLICINTIP_24 : public RegisterBase<0xD2001060, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_24_IP_Values<ECLIC::CLICINTIP_24, 0, 1, ReadWriteMode, ECLICCLICINTIP_24Base> ;
    using FieldValues = ECLIC_CLICINTIP_24_IP_Values<ECLIC::CLICINTIP_24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_24Pack  = Register<0xD2001060, 8, ReadWriteMode, ECLICCLICINTIP_24Base, T...> ;

  struct ECLICCLICINTIP_25Base {} ;

  struct CLICINTIP_25 : public RegisterBase<0xD2001064, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_25_IP_Values<ECLIC::CLICINTIP_25, 0, 1, ReadWriteMode, ECLICCLICINTIP_25Base> ;
    using FieldValues = ECLIC_CLICINTIP_25_IP_Values<ECLIC::CLICINTIP_25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_25Pack  = Register<0xD2001064, 8, ReadWriteMode, ECLICCLICINTIP_25Base, T...> ;

  struct ECLICCLICINTIP_26Base {} ;

  struct CLICINTIP_26 : public RegisterBase<0xD2001068, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_26_IP_Values<ECLIC::CLICINTIP_26, 0, 1, ReadWriteMode, ECLICCLICINTIP_26Base> ;
    using FieldValues = ECLIC_CLICINTIP_26_IP_Values<ECLIC::CLICINTIP_26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_26Pack  = Register<0xD2001068, 8, ReadWriteMode, ECLICCLICINTIP_26Base, T...> ;

  struct ECLICCLICINTIP_27Base {} ;

  struct CLICINTIP_27 : public RegisterBase<0xD200106C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_27_IP_Values<ECLIC::CLICINTIP_27, 0, 1, ReadWriteMode, ECLICCLICINTIP_27Base> ;
    using FieldValues = ECLIC_CLICINTIP_27_IP_Values<ECLIC::CLICINTIP_27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_27Pack  = Register<0xD200106C, 8, ReadWriteMode, ECLICCLICINTIP_27Base, T...> ;

  struct ECLICCLICINTIP_28Base {} ;

  struct CLICINTIP_28 : public RegisterBase<0xD2001070, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_28_IP_Values<ECLIC::CLICINTIP_28, 0, 1, ReadWriteMode, ECLICCLICINTIP_28Base> ;
    using FieldValues = ECLIC_CLICINTIP_28_IP_Values<ECLIC::CLICINTIP_28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_28Pack  = Register<0xD2001070, 8, ReadWriteMode, ECLICCLICINTIP_28Base, T...> ;

  struct ECLICCLICINTIP_29Base {} ;

  struct CLICINTIP_29 : public RegisterBase<0xD2001074, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_29_IP_Values<ECLIC::CLICINTIP_29, 0, 1, ReadWriteMode, ECLICCLICINTIP_29Base> ;
    using FieldValues = ECLIC_CLICINTIP_29_IP_Values<ECLIC::CLICINTIP_29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_29Pack  = Register<0xD2001074, 8, ReadWriteMode, ECLICCLICINTIP_29Base, T...> ;

  struct ECLICCLICINTIP_30Base {} ;

  struct CLICINTIP_30 : public RegisterBase<0xD2001078, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_30_IP_Values<ECLIC::CLICINTIP_30, 0, 1, ReadWriteMode, ECLICCLICINTIP_30Base> ;
    using FieldValues = ECLIC_CLICINTIP_30_IP_Values<ECLIC::CLICINTIP_30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_30Pack  = Register<0xD2001078, 8, ReadWriteMode, ECLICCLICINTIP_30Base, T...> ;

  struct ECLICCLICINTIP_31Base {} ;

  struct CLICINTIP_31 : public RegisterBase<0xD200107C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_31_IP_Values<ECLIC::CLICINTIP_31, 0, 1, ReadWriteMode, ECLICCLICINTIP_31Base> ;
    using FieldValues = ECLIC_CLICINTIP_31_IP_Values<ECLIC::CLICINTIP_31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_31Pack  = Register<0xD200107C, 8, ReadWriteMode, ECLICCLICINTIP_31Base, T...> ;

  struct ECLICCLICINTIP_32Base {} ;

  struct CLICINTIP_32 : public RegisterBase<0xD2001080, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_32_IP_Values<ECLIC::CLICINTIP_32, 0, 1, ReadWriteMode, ECLICCLICINTIP_32Base> ;
    using FieldValues = ECLIC_CLICINTIP_32_IP_Values<ECLIC::CLICINTIP_32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_32Pack  = Register<0xD2001080, 8, ReadWriteMode, ECLICCLICINTIP_32Base, T...> ;

  struct ECLICCLICINTIP_33Base {} ;

  struct CLICINTIP_33 : public RegisterBase<0xD2001084, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_33_IP_Values<ECLIC::CLICINTIP_33, 0, 1, ReadWriteMode, ECLICCLICINTIP_33Base> ;
    using FieldValues = ECLIC_CLICINTIP_33_IP_Values<ECLIC::CLICINTIP_33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_33Pack  = Register<0xD2001084, 8, ReadWriteMode, ECLICCLICINTIP_33Base, T...> ;

  struct ECLICCLICINTIP_34Base {} ;

  struct CLICINTIP_34 : public RegisterBase<0xD2001088, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_34_IP_Values<ECLIC::CLICINTIP_34, 0, 1, ReadWriteMode, ECLICCLICINTIP_34Base> ;
    using FieldValues = ECLIC_CLICINTIP_34_IP_Values<ECLIC::CLICINTIP_34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_34Pack  = Register<0xD2001088, 8, ReadWriteMode, ECLICCLICINTIP_34Base, T...> ;

  struct ECLICCLICINTIP_35Base {} ;

  struct CLICINTIP_35 : public RegisterBase<0xD200108C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_35_IP_Values<ECLIC::CLICINTIP_35, 0, 1, ReadWriteMode, ECLICCLICINTIP_35Base> ;
    using FieldValues = ECLIC_CLICINTIP_35_IP_Values<ECLIC::CLICINTIP_35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_35Pack  = Register<0xD200108C, 8, ReadWriteMode, ECLICCLICINTIP_35Base, T...> ;

  struct ECLICCLICINTIP_36Base {} ;

  struct CLICINTIP_36 : public RegisterBase<0xD2001090, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_36_IP_Values<ECLIC::CLICINTIP_36, 0, 1, ReadWriteMode, ECLICCLICINTIP_36Base> ;
    using FieldValues = ECLIC_CLICINTIP_36_IP_Values<ECLIC::CLICINTIP_36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_36Pack  = Register<0xD2001090, 8, ReadWriteMode, ECLICCLICINTIP_36Base, T...> ;

  struct ECLICCLICINTIP_37Base {} ;

  struct CLICINTIP_37 : public RegisterBase<0xD2001094, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_37_IP_Values<ECLIC::CLICINTIP_37, 0, 1, ReadWriteMode, ECLICCLICINTIP_37Base> ;
    using FieldValues = ECLIC_CLICINTIP_37_IP_Values<ECLIC::CLICINTIP_37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_37Pack  = Register<0xD2001094, 8, ReadWriteMode, ECLICCLICINTIP_37Base, T...> ;

  struct ECLICCLICINTIP_38Base {} ;

  struct CLICINTIP_38 : public RegisterBase<0xD2001098, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_38_IP_Values<ECLIC::CLICINTIP_38, 0, 1, ReadWriteMode, ECLICCLICINTIP_38Base> ;
    using FieldValues = ECLIC_CLICINTIP_38_IP_Values<ECLIC::CLICINTIP_38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_38Pack  = Register<0xD2001098, 8, ReadWriteMode, ECLICCLICINTIP_38Base, T...> ;

  struct ECLICCLICINTIP_39Base {} ;

  struct CLICINTIP_39 : public RegisterBase<0xD200109C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_39_IP_Values<ECLIC::CLICINTIP_39, 0, 1, ReadWriteMode, ECLICCLICINTIP_39Base> ;
    using FieldValues = ECLIC_CLICINTIP_39_IP_Values<ECLIC::CLICINTIP_39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_39Pack  = Register<0xD200109C, 8, ReadWriteMode, ECLICCLICINTIP_39Base, T...> ;

  struct ECLICCLICINTIP_40Base {} ;

  struct CLICINTIP_40 : public RegisterBase<0xD20010A0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_40_IP_Values<ECLIC::CLICINTIP_40, 0, 1, ReadWriteMode, ECLICCLICINTIP_40Base> ;
    using FieldValues = ECLIC_CLICINTIP_40_IP_Values<ECLIC::CLICINTIP_40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_40Pack  = Register<0xD20010A0, 8, ReadWriteMode, ECLICCLICINTIP_40Base, T...> ;

  struct ECLICCLICINTIP_41Base {} ;

  struct CLICINTIP_41 : public RegisterBase<0xD20010A4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_41_IP_Values<ECLIC::CLICINTIP_41, 0, 1, ReadWriteMode, ECLICCLICINTIP_41Base> ;
    using FieldValues = ECLIC_CLICINTIP_41_IP_Values<ECLIC::CLICINTIP_41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_41Pack  = Register<0xD20010A4, 8, ReadWriteMode, ECLICCLICINTIP_41Base, T...> ;

  struct ECLICCLICINTIP_42Base {} ;

  struct CLICINTIP_42 : public RegisterBase<0xD20010A8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_42_IP_Values<ECLIC::CLICINTIP_42, 0, 1, ReadWriteMode, ECLICCLICINTIP_42Base> ;
    using FieldValues = ECLIC_CLICINTIP_42_IP_Values<ECLIC::CLICINTIP_42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_42Pack  = Register<0xD20010A8, 8, ReadWriteMode, ECLICCLICINTIP_42Base, T...> ;

  struct ECLICCLICINTIP_43Base {} ;

  struct CLICINTIP_43 : public RegisterBase<0xD20010AC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_43_IP_Values<ECLIC::CLICINTIP_43, 0, 1, ReadWriteMode, ECLICCLICINTIP_43Base> ;
    using FieldValues = ECLIC_CLICINTIP_43_IP_Values<ECLIC::CLICINTIP_43, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_43Pack  = Register<0xD20010AC, 8, ReadWriteMode, ECLICCLICINTIP_43Base, T...> ;

  struct ECLICCLICINTIP_44Base {} ;

  struct CLICINTIP_44 : public RegisterBase<0xD20010B0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_44_IP_Values<ECLIC::CLICINTIP_44, 0, 1, ReadWriteMode, ECLICCLICINTIP_44Base> ;
    using FieldValues = ECLIC_CLICINTIP_44_IP_Values<ECLIC::CLICINTIP_44, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_44Pack  = Register<0xD20010B0, 8, ReadWriteMode, ECLICCLICINTIP_44Base, T...> ;

  struct ECLICCLICINTIP_45Base {} ;

  struct CLICINTIP_45 : public RegisterBase<0xD20010B4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_45_IP_Values<ECLIC::CLICINTIP_45, 0, 1, ReadWriteMode, ECLICCLICINTIP_45Base> ;
    using FieldValues = ECLIC_CLICINTIP_45_IP_Values<ECLIC::CLICINTIP_45, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_45Pack  = Register<0xD20010B4, 8, ReadWriteMode, ECLICCLICINTIP_45Base, T...> ;

  struct ECLICCLICINTIP_46Base {} ;

  struct CLICINTIP_46 : public RegisterBase<0xD20010B8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_46_IP_Values<ECLIC::CLICINTIP_46, 0, 1, ReadWriteMode, ECLICCLICINTIP_46Base> ;
    using FieldValues = ECLIC_CLICINTIP_46_IP_Values<ECLIC::CLICINTIP_46, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_46Pack  = Register<0xD20010B8, 8, ReadWriteMode, ECLICCLICINTIP_46Base, T...> ;

  struct ECLICCLICINTIP_47Base {} ;

  struct CLICINTIP_47 : public RegisterBase<0xD20010BC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_47_IP_Values<ECLIC::CLICINTIP_47, 0, 1, ReadWriteMode, ECLICCLICINTIP_47Base> ;
    using FieldValues = ECLIC_CLICINTIP_47_IP_Values<ECLIC::CLICINTIP_47, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_47Pack  = Register<0xD20010BC, 8, ReadWriteMode, ECLICCLICINTIP_47Base, T...> ;

  struct ECLICCLICINTIP_48Base {} ;

  struct CLICINTIP_48 : public RegisterBase<0xD20010C0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_48_IP_Values<ECLIC::CLICINTIP_48, 0, 1, ReadWriteMode, ECLICCLICINTIP_48Base> ;
    using FieldValues = ECLIC_CLICINTIP_48_IP_Values<ECLIC::CLICINTIP_48, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_48Pack  = Register<0xD20010C0, 8, ReadWriteMode, ECLICCLICINTIP_48Base, T...> ;

  struct ECLICCLICINTIP_49Base {} ;

  struct CLICINTIP_49 : public RegisterBase<0xD20010C4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_49_IP_Values<ECLIC::CLICINTIP_49, 0, 1, ReadWriteMode, ECLICCLICINTIP_49Base> ;
    using FieldValues = ECLIC_CLICINTIP_49_IP_Values<ECLIC::CLICINTIP_49, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_49Pack  = Register<0xD20010C4, 8, ReadWriteMode, ECLICCLICINTIP_49Base, T...> ;

  struct ECLICCLICINTIP_50Base {} ;

  struct CLICINTIP_50 : public RegisterBase<0xD20010C8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_50_IP_Values<ECLIC::CLICINTIP_50, 0, 1, ReadWriteMode, ECLICCLICINTIP_50Base> ;
    using FieldValues = ECLIC_CLICINTIP_50_IP_Values<ECLIC::CLICINTIP_50, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_50Pack  = Register<0xD20010C8, 8, ReadWriteMode, ECLICCLICINTIP_50Base, T...> ;

  struct ECLICCLICINTIP_51Base {} ;

  struct CLICINTIP_51 : public RegisterBase<0xD20010CC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_51_IP_Values<ECLIC::CLICINTIP_51, 0, 1, ReadWriteMode, ECLICCLICINTIP_51Base> ;
    using FieldValues = ECLIC_CLICINTIP_51_IP_Values<ECLIC::CLICINTIP_51, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_51Pack  = Register<0xD20010CC, 8, ReadWriteMode, ECLICCLICINTIP_51Base, T...> ;

  struct ECLICCLICINTIP_52Base {} ;

  struct CLICINTIP_52 : public RegisterBase<0xD20010D0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_52_IP_Values<ECLIC::CLICINTIP_52, 0, 1, ReadWriteMode, ECLICCLICINTIP_52Base> ;
    using FieldValues = ECLIC_CLICINTIP_52_IP_Values<ECLIC::CLICINTIP_52, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_52Pack  = Register<0xD20010D0, 8, ReadWriteMode, ECLICCLICINTIP_52Base, T...> ;

  struct ECLICCLICINTIP_53Base {} ;

  struct CLICINTIP_53 : public RegisterBase<0xD20010D4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_53_IP_Values<ECLIC::CLICINTIP_53, 0, 1, ReadWriteMode, ECLICCLICINTIP_53Base> ;
    using FieldValues = ECLIC_CLICINTIP_53_IP_Values<ECLIC::CLICINTIP_53, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_53Pack  = Register<0xD20010D4, 8, ReadWriteMode, ECLICCLICINTIP_53Base, T...> ;

  struct ECLICCLICINTIP_54Base {} ;

  struct CLICINTIP_54 : public RegisterBase<0xD20010D8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_54_IP_Values<ECLIC::CLICINTIP_54, 0, 1, ReadWriteMode, ECLICCLICINTIP_54Base> ;
    using FieldValues = ECLIC_CLICINTIP_54_IP_Values<ECLIC::CLICINTIP_54, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_54Pack  = Register<0xD20010D8, 8, ReadWriteMode, ECLICCLICINTIP_54Base, T...> ;

  struct ECLICCLICINTIP_55Base {} ;

  struct CLICINTIP_55 : public RegisterBase<0xD20010DC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_55_IP_Values<ECLIC::CLICINTIP_55, 0, 1, ReadWriteMode, ECLICCLICINTIP_55Base> ;
    using FieldValues = ECLIC_CLICINTIP_55_IP_Values<ECLIC::CLICINTIP_55, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_55Pack  = Register<0xD20010DC, 8, ReadWriteMode, ECLICCLICINTIP_55Base, T...> ;

  struct ECLICCLICINTIP_56Base {} ;

  struct CLICINTIP_56 : public RegisterBase<0xD20010E0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_56_IP_Values<ECLIC::CLICINTIP_56, 0, 1, ReadWriteMode, ECLICCLICINTIP_56Base> ;
    using FieldValues = ECLIC_CLICINTIP_56_IP_Values<ECLIC::CLICINTIP_56, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_56Pack  = Register<0xD20010E0, 8, ReadWriteMode, ECLICCLICINTIP_56Base, T...> ;

  struct ECLICCLICINTIP_57Base {} ;

  struct CLICINTIP_57 : public RegisterBase<0xD20010E4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_57_IP_Values<ECLIC::CLICINTIP_57, 0, 1, ReadWriteMode, ECLICCLICINTIP_57Base> ;
    using FieldValues = ECLIC_CLICINTIP_57_IP_Values<ECLIC::CLICINTIP_57, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_57Pack  = Register<0xD20010E4, 8, ReadWriteMode, ECLICCLICINTIP_57Base, T...> ;

  struct ECLICCLICINTIP_58Base {} ;

  struct CLICINTIP_58 : public RegisterBase<0xD20010E8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_58_IP_Values<ECLIC::CLICINTIP_58, 0, 1, ReadWriteMode, ECLICCLICINTIP_58Base> ;
    using FieldValues = ECLIC_CLICINTIP_58_IP_Values<ECLIC::CLICINTIP_58, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_58Pack  = Register<0xD20010E8, 8, ReadWriteMode, ECLICCLICINTIP_58Base, T...> ;

  struct ECLICCLICINTIP_59Base {} ;

  struct CLICINTIP_59 : public RegisterBase<0xD20010EC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_59_IP_Values<ECLIC::CLICINTIP_59, 0, 1, ReadWriteMode, ECLICCLICINTIP_59Base> ;
    using FieldValues = ECLIC_CLICINTIP_59_IP_Values<ECLIC::CLICINTIP_59, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_59Pack  = Register<0xD20010EC, 8, ReadWriteMode, ECLICCLICINTIP_59Base, T...> ;

  struct ECLICCLICINTIP_60Base {} ;

  struct CLICINTIP_60 : public RegisterBase<0xD20010F0, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_60_IP_Values<ECLIC::CLICINTIP_60, 0, 1, ReadWriteMode, ECLICCLICINTIP_60Base> ;
    using FieldValues = ECLIC_CLICINTIP_60_IP_Values<ECLIC::CLICINTIP_60, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_60Pack  = Register<0xD20010F0, 8, ReadWriteMode, ECLICCLICINTIP_60Base, T...> ;

  struct ECLICCLICINTIP_61Base {} ;

  struct CLICINTIP_61 : public RegisterBase<0xD20010F4, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_61_IP_Values<ECLIC::CLICINTIP_61, 0, 1, ReadWriteMode, ECLICCLICINTIP_61Base> ;
    using FieldValues = ECLIC_CLICINTIP_61_IP_Values<ECLIC::CLICINTIP_61, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_61Pack  = Register<0xD20010F4, 8, ReadWriteMode, ECLICCLICINTIP_61Base, T...> ;

  struct ECLICCLICINTIP_62Base {} ;

  struct CLICINTIP_62 : public RegisterBase<0xD20010F8, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_62_IP_Values<ECLIC::CLICINTIP_62, 0, 1, ReadWriteMode, ECLICCLICINTIP_62Base> ;
    using FieldValues = ECLIC_CLICINTIP_62_IP_Values<ECLIC::CLICINTIP_62, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_62Pack  = Register<0xD20010F8, 8, ReadWriteMode, ECLICCLICINTIP_62Base, T...> ;

  struct ECLICCLICINTIP_63Base {} ;

  struct CLICINTIP_63 : public RegisterBase<0xD20010FC, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_63_IP_Values<ECLIC::CLICINTIP_63, 0, 1, ReadWriteMode, ECLICCLICINTIP_63Base> ;
    using FieldValues = ECLIC_CLICINTIP_63_IP_Values<ECLIC::CLICINTIP_63, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_63Pack  = Register<0xD20010FC, 8, ReadWriteMode, ECLICCLICINTIP_63Base, T...> ;

  struct ECLICCLICINTIP_64Base {} ;

  struct CLICINTIP_64 : public RegisterBase<0xD2001100, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_64_IP_Values<ECLIC::CLICINTIP_64, 0, 1, ReadWriteMode, ECLICCLICINTIP_64Base> ;
    using FieldValues = ECLIC_CLICINTIP_64_IP_Values<ECLIC::CLICINTIP_64, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_64Pack  = Register<0xD2001100, 8, ReadWriteMode, ECLICCLICINTIP_64Base, T...> ;

  struct ECLICCLICINTIP_65Base {} ;

  struct CLICINTIP_65 : public RegisterBase<0xD2001104, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_65_IP_Values<ECLIC::CLICINTIP_65, 0, 1, ReadWriteMode, ECLICCLICINTIP_65Base> ;
    using FieldValues = ECLIC_CLICINTIP_65_IP_Values<ECLIC::CLICINTIP_65, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_65Pack  = Register<0xD2001104, 8, ReadWriteMode, ECLICCLICINTIP_65Base, T...> ;

  struct ECLICCLICINTIP_66Base {} ;

  struct CLICINTIP_66 : public RegisterBase<0xD2001108, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_66_IP_Values<ECLIC::CLICINTIP_66, 0, 1, ReadWriteMode, ECLICCLICINTIP_66Base> ;
    using FieldValues = ECLIC_CLICINTIP_66_IP_Values<ECLIC::CLICINTIP_66, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_66Pack  = Register<0xD2001108, 8, ReadWriteMode, ECLICCLICINTIP_66Base, T...> ;

  struct ECLICCLICINTIP_67Base {} ;

  struct CLICINTIP_67 : public RegisterBase<0xD200110C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_67_IP_Values<ECLIC::CLICINTIP_67, 0, 1, ReadWriteMode, ECLICCLICINTIP_67Base> ;
    using FieldValues = ECLIC_CLICINTIP_67_IP_Values<ECLIC::CLICINTIP_67, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_67Pack  = Register<0xD200110C, 8, ReadWriteMode, ECLICCLICINTIP_67Base, T...> ;

  struct ECLICCLICINTIP_68Base {} ;

  struct CLICINTIP_68 : public RegisterBase<0xD2001110, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_68_IP_Values<ECLIC::CLICINTIP_68, 0, 1, ReadWriteMode, ECLICCLICINTIP_68Base> ;
    using FieldValues = ECLIC_CLICINTIP_68_IP_Values<ECLIC::CLICINTIP_68, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_68Pack  = Register<0xD2001110, 8, ReadWriteMode, ECLICCLICINTIP_68Base, T...> ;

  struct ECLICCLICINTIP_69Base {} ;

  struct CLICINTIP_69 : public RegisterBase<0xD2001114, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_69_IP_Values<ECLIC::CLICINTIP_69, 0, 1, ReadWriteMode, ECLICCLICINTIP_69Base> ;
    using FieldValues = ECLIC_CLICINTIP_69_IP_Values<ECLIC::CLICINTIP_69, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_69Pack  = Register<0xD2001114, 8, ReadWriteMode, ECLICCLICINTIP_69Base, T...> ;

  struct ECLICCLICINTIP_70Base {} ;

  struct CLICINTIP_70 : public RegisterBase<0xD2001118, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_70_IP_Values<ECLIC::CLICINTIP_70, 0, 1, ReadWriteMode, ECLICCLICINTIP_70Base> ;
    using FieldValues = ECLIC_CLICINTIP_70_IP_Values<ECLIC::CLICINTIP_70, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_70Pack  = Register<0xD2001118, 8, ReadWriteMode, ECLICCLICINTIP_70Base, T...> ;

  struct ECLICCLICINTIP_71Base {} ;

  struct CLICINTIP_71 : public RegisterBase<0xD200111C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_71_IP_Values<ECLIC::CLICINTIP_71, 0, 1, ReadWriteMode, ECLICCLICINTIP_71Base> ;
    using FieldValues = ECLIC_CLICINTIP_71_IP_Values<ECLIC::CLICINTIP_71, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_71Pack  = Register<0xD200111C, 8, ReadWriteMode, ECLICCLICINTIP_71Base, T...> ;

  struct ECLICCLICINTIP_72Base {} ;

  struct CLICINTIP_72 : public RegisterBase<0xD2001120, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_72_IP_Values<ECLIC::CLICINTIP_72, 0, 1, ReadWriteMode, ECLICCLICINTIP_72Base> ;
    using FieldValues = ECLIC_CLICINTIP_72_IP_Values<ECLIC::CLICINTIP_72, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_72Pack  = Register<0xD2001120, 8, ReadWriteMode, ECLICCLICINTIP_72Base, T...> ;

  struct ECLICCLICINTIP_73Base {} ;

  struct CLICINTIP_73 : public RegisterBase<0xD2001124, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_73_IP_Values<ECLIC::CLICINTIP_73, 0, 1, ReadWriteMode, ECLICCLICINTIP_73Base> ;
    using FieldValues = ECLIC_CLICINTIP_73_IP_Values<ECLIC::CLICINTIP_73, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_73Pack  = Register<0xD2001124, 8, ReadWriteMode, ECLICCLICINTIP_73Base, T...> ;

  struct ECLICCLICINTIP_74Base {} ;

  struct CLICINTIP_74 : public RegisterBase<0xD2001128, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_74_IP_Values<ECLIC::CLICINTIP_74, 0, 1, ReadWriteMode, ECLICCLICINTIP_74Base> ;
    using FieldValues = ECLIC_CLICINTIP_74_IP_Values<ECLIC::CLICINTIP_74, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_74Pack  = Register<0xD2001128, 8, ReadWriteMode, ECLICCLICINTIP_74Base, T...> ;

  struct ECLICCLICINTIP_75Base {} ;

  struct CLICINTIP_75 : public RegisterBase<0xD200112C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_75_IP_Values<ECLIC::CLICINTIP_75, 0, 1, ReadWriteMode, ECLICCLICINTIP_75Base> ;
    using FieldValues = ECLIC_CLICINTIP_75_IP_Values<ECLIC::CLICINTIP_75, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_75Pack  = Register<0xD200112C, 8, ReadWriteMode, ECLICCLICINTIP_75Base, T...> ;

  struct ECLICCLICINTIP_76Base {} ;

  struct CLICINTIP_76 : public RegisterBase<0xD2001130, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_76_IP_Values<ECLIC::CLICINTIP_76, 0, 1, ReadWriteMode, ECLICCLICINTIP_76Base> ;
    using FieldValues = ECLIC_CLICINTIP_76_IP_Values<ECLIC::CLICINTIP_76, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_76Pack  = Register<0xD2001130, 8, ReadWriteMode, ECLICCLICINTIP_76Base, T...> ;

  struct ECLICCLICINTIP_77Base {} ;

  struct CLICINTIP_77 : public RegisterBase<0xD2001134, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_77_IP_Values<ECLIC::CLICINTIP_77, 0, 1, ReadWriteMode, ECLICCLICINTIP_77Base> ;
    using FieldValues = ECLIC_CLICINTIP_77_IP_Values<ECLIC::CLICINTIP_77, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_77Pack  = Register<0xD2001134, 8, ReadWriteMode, ECLICCLICINTIP_77Base, T...> ;

  struct ECLICCLICINTIP_78Base {} ;

  struct CLICINTIP_78 : public RegisterBase<0xD2001138, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_78_IP_Values<ECLIC::CLICINTIP_78, 0, 1, ReadWriteMode, ECLICCLICINTIP_78Base> ;
    using FieldValues = ECLIC_CLICINTIP_78_IP_Values<ECLIC::CLICINTIP_78, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_78Pack  = Register<0xD2001138, 8, ReadWriteMode, ECLICCLICINTIP_78Base, T...> ;

  struct ECLICCLICINTIP_79Base {} ;

  struct CLICINTIP_79 : public RegisterBase<0xD200113C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_79_IP_Values<ECLIC::CLICINTIP_79, 0, 1, ReadWriteMode, ECLICCLICINTIP_79Base> ;
    using FieldValues = ECLIC_CLICINTIP_79_IP_Values<ECLIC::CLICINTIP_79, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_79Pack  = Register<0xD200113C, 8, ReadWriteMode, ECLICCLICINTIP_79Base, T...> ;

  struct ECLICCLICINTIP_80Base {} ;

  struct CLICINTIP_80 : public RegisterBase<0xD2001140, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_80_IP_Values<ECLIC::CLICINTIP_80, 0, 1, ReadWriteMode, ECLICCLICINTIP_80Base> ;
    using FieldValues = ECLIC_CLICINTIP_80_IP_Values<ECLIC::CLICINTIP_80, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_80Pack  = Register<0xD2001140, 8, ReadWriteMode, ECLICCLICINTIP_80Base, T...> ;

  struct ECLICCLICINTIP_81Base {} ;

  struct CLICINTIP_81 : public RegisterBase<0xD2001144, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_81_IP_Values<ECLIC::CLICINTIP_81, 0, 1, ReadWriteMode, ECLICCLICINTIP_81Base> ;
    using FieldValues = ECLIC_CLICINTIP_81_IP_Values<ECLIC::CLICINTIP_81, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_81Pack  = Register<0xD2001144, 8, ReadWriteMode, ECLICCLICINTIP_81Base, T...> ;

  struct ECLICCLICINTIP_82Base {} ;

  struct CLICINTIP_82 : public RegisterBase<0xD2001148, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_82_IP_Values<ECLIC::CLICINTIP_82, 0, 1, ReadWriteMode, ECLICCLICINTIP_82Base> ;
    using FieldValues = ECLIC_CLICINTIP_82_IP_Values<ECLIC::CLICINTIP_82, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_82Pack  = Register<0xD2001148, 8, ReadWriteMode, ECLICCLICINTIP_82Base, T...> ;

  struct ECLICCLICINTIP_83Base {} ;

  struct CLICINTIP_83 : public RegisterBase<0xD200114C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_83_IP_Values<ECLIC::CLICINTIP_83, 0, 1, ReadWriteMode, ECLICCLICINTIP_83Base> ;
    using FieldValues = ECLIC_CLICINTIP_83_IP_Values<ECLIC::CLICINTIP_83, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_83Pack  = Register<0xD200114C, 8, ReadWriteMode, ECLICCLICINTIP_83Base, T...> ;

  struct ECLICCLICINTIP_84Base {} ;

  struct CLICINTIP_84 : public RegisterBase<0xD2001150, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_84_IP_Values<ECLIC::CLICINTIP_84, 0, 1, ReadWriteMode, ECLICCLICINTIP_84Base> ;
    using FieldValues = ECLIC_CLICINTIP_84_IP_Values<ECLIC::CLICINTIP_84, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_84Pack  = Register<0xD2001150, 8, ReadWriteMode, ECLICCLICINTIP_84Base, T...> ;

  struct ECLICCLICINTIP_85Base {} ;

  struct CLICINTIP_85 : public RegisterBase<0xD2001158, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_85_IP_Values<ECLIC::CLICINTIP_85, 0, 1, ReadWriteMode, ECLICCLICINTIP_85Base> ;
    using FieldValues = ECLIC_CLICINTIP_85_IP_Values<ECLIC::CLICINTIP_85, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_85Pack  = Register<0xD2001158, 8, ReadWriteMode, ECLICCLICINTIP_85Base, T...> ;

  struct ECLICCLICINTIP_86Base {} ;

  struct CLICINTIP_86 : public RegisterBase<0xD200115C, 8, ReadWriteMode>
  {
    using IP = ECLIC_CLICINTIP_86_IP_Values<ECLIC::CLICINTIP_86, 0, 1, ReadWriteMode, ECLICCLICINTIP_86Base> ;
    using FieldValues = ECLIC_CLICINTIP_86_IP_Values<ECLIC::CLICINTIP_86, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIP_86Pack  = Register<0xD200115C, 8, ReadWriteMode, ECLICCLICINTIP_86Base, T...> ;

  struct ECLICCLICINTIE_0Base {} ;

  struct CLICINTIE_0 : public RegisterBase<0xD2001001, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_0_IE_Values<ECLIC::CLICINTIE_0, 0, 1, ReadWriteMode, ECLICCLICINTIE_0Base> ;
    using FieldValues = ECLIC_CLICINTIE_0_IE_Values<ECLIC::CLICINTIE_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_0Pack  = Register<0xD2001001, 8, ReadWriteMode, ECLICCLICINTIE_0Base, T...> ;

  struct ECLICCLICINTIE_1Base {} ;

  struct CLICINTIE_1 : public RegisterBase<0xD2001005, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_1_IE_Values<ECLIC::CLICINTIE_1, 0, 1, ReadWriteMode, ECLICCLICINTIE_1Base> ;
    using FieldValues = ECLIC_CLICINTIE_1_IE_Values<ECLIC::CLICINTIE_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_1Pack  = Register<0xD2001005, 8, ReadWriteMode, ECLICCLICINTIE_1Base, T...> ;

  struct ECLICCLICINTIE_2Base {} ;

  struct CLICINTIE_2 : public RegisterBase<0xD2001009, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_2_IE_Values<ECLIC::CLICINTIE_2, 0, 1, ReadWriteMode, ECLICCLICINTIE_2Base> ;
    using FieldValues = ECLIC_CLICINTIE_2_IE_Values<ECLIC::CLICINTIE_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_2Pack  = Register<0xD2001009, 8, ReadWriteMode, ECLICCLICINTIE_2Base, T...> ;

  struct ECLICCLICINTIE_3Base {} ;

  struct CLICINTIE_3 : public RegisterBase<0xD200100D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_3_IE_Values<ECLIC::CLICINTIE_3, 0, 1, ReadWriteMode, ECLICCLICINTIE_3Base> ;
    using FieldValues = ECLIC_CLICINTIE_3_IE_Values<ECLIC::CLICINTIE_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_3Pack  = Register<0xD200100D, 8, ReadWriteMode, ECLICCLICINTIE_3Base, T...> ;

  struct ECLICCLICINTIE_4Base {} ;

  struct CLICINTIE_4 : public RegisterBase<0xD2001011, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_4_IE_Values<ECLIC::CLICINTIE_4, 0, 1, ReadWriteMode, ECLICCLICINTIE_4Base> ;
    using FieldValues = ECLIC_CLICINTIE_4_IE_Values<ECLIC::CLICINTIE_4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_4Pack  = Register<0xD2001011, 8, ReadWriteMode, ECLICCLICINTIE_4Base, T...> ;

  struct ECLICCLICINTIE_5Base {} ;

  struct CLICINTIE_5 : public RegisterBase<0xD2001015, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_5_IE_Values<ECLIC::CLICINTIE_5, 0, 1, ReadWriteMode, ECLICCLICINTIE_5Base> ;
    using FieldValues = ECLIC_CLICINTIE_5_IE_Values<ECLIC::CLICINTIE_5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_5Pack  = Register<0xD2001015, 8, ReadWriteMode, ECLICCLICINTIE_5Base, T...> ;

  struct ECLICCLICINTIE_6Base {} ;

  struct CLICINTIE_6 : public RegisterBase<0xD2001019, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_6_IE_Values<ECLIC::CLICINTIE_6, 0, 1, ReadWriteMode, ECLICCLICINTIE_6Base> ;
    using FieldValues = ECLIC_CLICINTIE_6_IE_Values<ECLIC::CLICINTIE_6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_6Pack  = Register<0xD2001019, 8, ReadWriteMode, ECLICCLICINTIE_6Base, T...> ;

  struct ECLICCLICINTIE_7Base {} ;

  struct CLICINTIE_7 : public RegisterBase<0xD200101D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_7_IE_Values<ECLIC::CLICINTIE_7, 0, 1, ReadWriteMode, ECLICCLICINTIE_7Base> ;
    using FieldValues = ECLIC_CLICINTIE_7_IE_Values<ECLIC::CLICINTIE_7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_7Pack  = Register<0xD200101D, 8, ReadWriteMode, ECLICCLICINTIE_7Base, T...> ;

  struct ECLICCLICINTIE_8Base {} ;

  struct CLICINTIE_8 : public RegisterBase<0xD2001021, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_8_IE_Values<ECLIC::CLICINTIE_8, 0, 1, ReadWriteMode, ECLICCLICINTIE_8Base> ;
    using FieldValues = ECLIC_CLICINTIE_8_IE_Values<ECLIC::CLICINTIE_8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_8Pack  = Register<0xD2001021, 8, ReadWriteMode, ECLICCLICINTIE_8Base, T...> ;

  struct ECLICCLICINTIE_9Base {} ;

  struct CLICINTIE_9 : public RegisterBase<0xD2001025, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_9_IE_Values<ECLIC::CLICINTIE_9, 0, 1, ReadWriteMode, ECLICCLICINTIE_9Base> ;
    using FieldValues = ECLIC_CLICINTIE_9_IE_Values<ECLIC::CLICINTIE_9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_9Pack  = Register<0xD2001025, 8, ReadWriteMode, ECLICCLICINTIE_9Base, T...> ;

  struct ECLICCLICINTIE_10Base {} ;

  struct CLICINTIE_10 : public RegisterBase<0xD2001029, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_10_IE_Values<ECLIC::CLICINTIE_10, 0, 1, ReadWriteMode, ECLICCLICINTIE_10Base> ;
    using FieldValues = ECLIC_CLICINTIE_10_IE_Values<ECLIC::CLICINTIE_10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_10Pack  = Register<0xD2001029, 8, ReadWriteMode, ECLICCLICINTIE_10Base, T...> ;

  struct ECLICCLICINTIE_11Base {} ;

  struct CLICINTIE_11 : public RegisterBase<0xD200102D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_11_IE_Values<ECLIC::CLICINTIE_11, 0, 1, ReadWriteMode, ECLICCLICINTIE_11Base> ;
    using FieldValues = ECLIC_CLICINTIE_11_IE_Values<ECLIC::CLICINTIE_11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_11Pack  = Register<0xD200102D, 8, ReadWriteMode, ECLICCLICINTIE_11Base, T...> ;

  struct ECLICCLICINTIE_12Base {} ;

  struct CLICINTIE_12 : public RegisterBase<0xD2001031, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_12_IE_Values<ECLIC::CLICINTIE_12, 0, 1, ReadWriteMode, ECLICCLICINTIE_12Base> ;
    using FieldValues = ECLIC_CLICINTIE_12_IE_Values<ECLIC::CLICINTIE_12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_12Pack  = Register<0xD2001031, 8, ReadWriteMode, ECLICCLICINTIE_12Base, T...> ;

  struct ECLICCLICINTIE_13Base {} ;

  struct CLICINTIE_13 : public RegisterBase<0xD2001035, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_13_IE_Values<ECLIC::CLICINTIE_13, 0, 1, ReadWriteMode, ECLICCLICINTIE_13Base> ;
    using FieldValues = ECLIC_CLICINTIE_13_IE_Values<ECLIC::CLICINTIE_13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_13Pack  = Register<0xD2001035, 8, ReadWriteMode, ECLICCLICINTIE_13Base, T...> ;

  struct ECLICCLICINTIE_14Base {} ;

  struct CLICINTIE_14 : public RegisterBase<0xD2001039, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_14_IE_Values<ECLIC::CLICINTIE_14, 0, 1, ReadWriteMode, ECLICCLICINTIE_14Base> ;
    using FieldValues = ECLIC_CLICINTIE_14_IE_Values<ECLIC::CLICINTIE_14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_14Pack  = Register<0xD2001039, 8, ReadWriteMode, ECLICCLICINTIE_14Base, T...> ;

  struct ECLICCLICINTIE_15Base {} ;

  struct CLICINTIE_15 : public RegisterBase<0xD200103D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_15_IE_Values<ECLIC::CLICINTIE_15, 0, 1, ReadWriteMode, ECLICCLICINTIE_15Base> ;
    using FieldValues = ECLIC_CLICINTIE_15_IE_Values<ECLIC::CLICINTIE_15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_15Pack  = Register<0xD200103D, 8, ReadWriteMode, ECLICCLICINTIE_15Base, T...> ;

  struct ECLICCLICINTIE_16Base {} ;

  struct CLICINTIE_16 : public RegisterBase<0xD2001041, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_16_IE_Values<ECLIC::CLICINTIE_16, 0, 1, ReadWriteMode, ECLICCLICINTIE_16Base> ;
    using FieldValues = ECLIC_CLICINTIE_16_IE_Values<ECLIC::CLICINTIE_16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_16Pack  = Register<0xD2001041, 8, ReadWriteMode, ECLICCLICINTIE_16Base, T...> ;

  struct ECLICCLICINTIE_17Base {} ;

  struct CLICINTIE_17 : public RegisterBase<0xD2001045, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_17_IE_Values<ECLIC::CLICINTIE_17, 0, 1, ReadWriteMode, ECLICCLICINTIE_17Base> ;
    using FieldValues = ECLIC_CLICINTIE_17_IE_Values<ECLIC::CLICINTIE_17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_17Pack  = Register<0xD2001045, 8, ReadWriteMode, ECLICCLICINTIE_17Base, T...> ;

  struct ECLICCLICINTIE_18Base {} ;

  struct CLICINTIE_18 : public RegisterBase<0xD2001049, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_18_IE_Values<ECLIC::CLICINTIE_18, 0, 1, ReadWriteMode, ECLICCLICINTIE_18Base> ;
    using FieldValues = ECLIC_CLICINTIE_18_IE_Values<ECLIC::CLICINTIE_18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_18Pack  = Register<0xD2001049, 8, ReadWriteMode, ECLICCLICINTIE_18Base, T...> ;

  struct ECLICCLICINTIE_19Base {} ;

  struct CLICINTIE_19 : public RegisterBase<0xD200104D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_19_IE_Values<ECLIC::CLICINTIE_19, 0, 1, ReadWriteMode, ECLICCLICINTIE_19Base> ;
    using FieldValues = ECLIC_CLICINTIE_19_IE_Values<ECLIC::CLICINTIE_19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_19Pack  = Register<0xD200104D, 8, ReadWriteMode, ECLICCLICINTIE_19Base, T...> ;

  struct ECLICCLICINTIE_20Base {} ;

  struct CLICINTIE_20 : public RegisterBase<0xD2001051, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_20_IE_Values<ECLIC::CLICINTIE_20, 0, 1, ReadWriteMode, ECLICCLICINTIE_20Base> ;
    using FieldValues = ECLIC_CLICINTIE_20_IE_Values<ECLIC::CLICINTIE_20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_20Pack  = Register<0xD2001051, 8, ReadWriteMode, ECLICCLICINTIE_20Base, T...> ;

  struct ECLICCLICINTIE_21Base {} ;

  struct CLICINTIE_21 : public RegisterBase<0xD2001055, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_21_IE_Values<ECLIC::CLICINTIE_21, 0, 1, ReadWriteMode, ECLICCLICINTIE_21Base> ;
    using FieldValues = ECLIC_CLICINTIE_21_IE_Values<ECLIC::CLICINTIE_21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_21Pack  = Register<0xD2001055, 8, ReadWriteMode, ECLICCLICINTIE_21Base, T...> ;

  struct ECLICCLICINTIE_22Base {} ;

  struct CLICINTIE_22 : public RegisterBase<0xD2001059, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_22_IE_Values<ECLIC::CLICINTIE_22, 0, 1, ReadWriteMode, ECLICCLICINTIE_22Base> ;
    using FieldValues = ECLIC_CLICINTIE_22_IE_Values<ECLIC::CLICINTIE_22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_22Pack  = Register<0xD2001059, 8, ReadWriteMode, ECLICCLICINTIE_22Base, T...> ;

  struct ECLICCLICINTIE_23Base {} ;

  struct CLICINTIE_23 : public RegisterBase<0xD200105D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_23_IE_Values<ECLIC::CLICINTIE_23, 0, 1, ReadWriteMode, ECLICCLICINTIE_23Base> ;
    using FieldValues = ECLIC_CLICINTIE_23_IE_Values<ECLIC::CLICINTIE_23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_23Pack  = Register<0xD200105D, 8, ReadWriteMode, ECLICCLICINTIE_23Base, T...> ;

  struct ECLICCLICINTIE_24Base {} ;

  struct CLICINTIE_24 : public RegisterBase<0xD2001061, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_24_IE_Values<ECLIC::CLICINTIE_24, 0, 1, ReadWriteMode, ECLICCLICINTIE_24Base> ;
    using FieldValues = ECLIC_CLICINTIE_24_IE_Values<ECLIC::CLICINTIE_24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_24Pack  = Register<0xD2001061, 8, ReadWriteMode, ECLICCLICINTIE_24Base, T...> ;

  struct ECLICCLICINTIE_25Base {} ;

  struct CLICINTIE_25 : public RegisterBase<0xD2001065, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_25_IE_Values<ECLIC::CLICINTIE_25, 0, 1, ReadWriteMode, ECLICCLICINTIE_25Base> ;
    using FieldValues = ECLIC_CLICINTIE_25_IE_Values<ECLIC::CLICINTIE_25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_25Pack  = Register<0xD2001065, 8, ReadWriteMode, ECLICCLICINTIE_25Base, T...> ;

  struct ECLICCLICINTIE_26Base {} ;

  struct CLICINTIE_26 : public RegisterBase<0xD2001069, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_26_IE_Values<ECLIC::CLICINTIE_26, 0, 1, ReadWriteMode, ECLICCLICINTIE_26Base> ;
    using FieldValues = ECLIC_CLICINTIE_26_IE_Values<ECLIC::CLICINTIE_26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_26Pack  = Register<0xD2001069, 8, ReadWriteMode, ECLICCLICINTIE_26Base, T...> ;

  struct ECLICCLICINTIE_27Base {} ;

  struct CLICINTIE_27 : public RegisterBase<0xD200106D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_27_IE_Values<ECLIC::CLICINTIE_27, 0, 1, ReadWriteMode, ECLICCLICINTIE_27Base> ;
    using FieldValues = ECLIC_CLICINTIE_27_IE_Values<ECLIC::CLICINTIE_27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_27Pack  = Register<0xD200106D, 8, ReadWriteMode, ECLICCLICINTIE_27Base, T...> ;

  struct ECLICCLICINTIE_28Base {} ;

  struct CLICINTIE_28 : public RegisterBase<0xD2001071, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_28_IE_Values<ECLIC::CLICINTIE_28, 0, 1, ReadWriteMode, ECLICCLICINTIE_28Base> ;
    using FieldValues = ECLIC_CLICINTIE_28_IE_Values<ECLIC::CLICINTIE_28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_28Pack  = Register<0xD2001071, 8, ReadWriteMode, ECLICCLICINTIE_28Base, T...> ;

  struct ECLICCLICINTIE_29Base {} ;

  struct CLICINTIE_29 : public RegisterBase<0xD2001075, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_29_IE_Values<ECLIC::CLICINTIE_29, 0, 1, ReadWriteMode, ECLICCLICINTIE_29Base> ;
    using FieldValues = ECLIC_CLICINTIE_29_IE_Values<ECLIC::CLICINTIE_29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_29Pack  = Register<0xD2001075, 8, ReadWriteMode, ECLICCLICINTIE_29Base, T...> ;

  struct ECLICCLICINTIE_30Base {} ;

  struct CLICINTIE_30 : public RegisterBase<0xD2001079, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_30_IE_Values<ECLIC::CLICINTIE_30, 0, 1, ReadWriteMode, ECLICCLICINTIE_30Base> ;
    using FieldValues = ECLIC_CLICINTIE_30_IE_Values<ECLIC::CLICINTIE_30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_30Pack  = Register<0xD2001079, 8, ReadWriteMode, ECLICCLICINTIE_30Base, T...> ;

  struct ECLICCLICINTIE_31Base {} ;

  struct CLICINTIE_31 : public RegisterBase<0xD200107D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_31_IE_Values<ECLIC::CLICINTIE_31, 0, 1, ReadWriteMode, ECLICCLICINTIE_31Base> ;
    using FieldValues = ECLIC_CLICINTIE_31_IE_Values<ECLIC::CLICINTIE_31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_31Pack  = Register<0xD200107D, 8, ReadWriteMode, ECLICCLICINTIE_31Base, T...> ;

  struct ECLICCLICINTIE_32Base {} ;

  struct CLICINTIE_32 : public RegisterBase<0xD2001081, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_32_IE_Values<ECLIC::CLICINTIE_32, 0, 1, ReadWriteMode, ECLICCLICINTIE_32Base> ;
    using FieldValues = ECLIC_CLICINTIE_32_IE_Values<ECLIC::CLICINTIE_32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_32Pack  = Register<0xD2001081, 8, ReadWriteMode, ECLICCLICINTIE_32Base, T...> ;

  struct ECLICCLICINTIE_33Base {} ;

  struct CLICINTIE_33 : public RegisterBase<0xD2001085, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_33_IE_Values<ECLIC::CLICINTIE_33, 0, 1, ReadWriteMode, ECLICCLICINTIE_33Base> ;
    using FieldValues = ECLIC_CLICINTIE_33_IE_Values<ECLIC::CLICINTIE_33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_33Pack  = Register<0xD2001085, 8, ReadWriteMode, ECLICCLICINTIE_33Base, T...> ;

  struct ECLICCLICINTIE_34Base {} ;

  struct CLICINTIE_34 : public RegisterBase<0xD2001089, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_34_IE_Values<ECLIC::CLICINTIE_34, 0, 1, ReadWriteMode, ECLICCLICINTIE_34Base> ;
    using FieldValues = ECLIC_CLICINTIE_34_IE_Values<ECLIC::CLICINTIE_34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_34Pack  = Register<0xD2001089, 8, ReadWriteMode, ECLICCLICINTIE_34Base, T...> ;

  struct ECLICCLICINTIE_35Base {} ;

  struct CLICINTIE_35 : public RegisterBase<0xD200108D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_35_IE_Values<ECLIC::CLICINTIE_35, 0, 1, ReadWriteMode, ECLICCLICINTIE_35Base> ;
    using FieldValues = ECLIC_CLICINTIE_35_IE_Values<ECLIC::CLICINTIE_35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_35Pack  = Register<0xD200108D, 8, ReadWriteMode, ECLICCLICINTIE_35Base, T...> ;

  struct ECLICCLICINTIE_36Base {} ;

  struct CLICINTIE_36 : public RegisterBase<0xD2001091, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_36_IE_Values<ECLIC::CLICINTIE_36, 0, 1, ReadWriteMode, ECLICCLICINTIE_36Base> ;
    using FieldValues = ECLIC_CLICINTIE_36_IE_Values<ECLIC::CLICINTIE_36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_36Pack  = Register<0xD2001091, 8, ReadWriteMode, ECLICCLICINTIE_36Base, T...> ;

  struct ECLICCLICINTIE_37Base {} ;

  struct CLICINTIE_37 : public RegisterBase<0xD2001095, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_37_IE_Values<ECLIC::CLICINTIE_37, 0, 1, ReadWriteMode, ECLICCLICINTIE_37Base> ;
    using FieldValues = ECLIC_CLICINTIE_37_IE_Values<ECLIC::CLICINTIE_37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_37Pack  = Register<0xD2001095, 8, ReadWriteMode, ECLICCLICINTIE_37Base, T...> ;

  struct ECLICCLICINTIE_38Base {} ;

  struct CLICINTIE_38 : public RegisterBase<0xD2001099, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_38_IE_Values<ECLIC::CLICINTIE_38, 0, 1, ReadWriteMode, ECLICCLICINTIE_38Base> ;
    using FieldValues = ECLIC_CLICINTIE_38_IE_Values<ECLIC::CLICINTIE_38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_38Pack  = Register<0xD2001099, 8, ReadWriteMode, ECLICCLICINTIE_38Base, T...> ;

  struct ECLICCLICINTIE_39Base {} ;

  struct CLICINTIE_39 : public RegisterBase<0xD200109D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_39_IE_Values<ECLIC::CLICINTIE_39, 0, 1, ReadWriteMode, ECLICCLICINTIE_39Base> ;
    using FieldValues = ECLIC_CLICINTIE_39_IE_Values<ECLIC::CLICINTIE_39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_39Pack  = Register<0xD200109D, 8, ReadWriteMode, ECLICCLICINTIE_39Base, T...> ;

  struct ECLICCLICINTIE_40Base {} ;

  struct CLICINTIE_40 : public RegisterBase<0xD20010A1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_40_IE_Values<ECLIC::CLICINTIE_40, 0, 1, ReadWriteMode, ECLICCLICINTIE_40Base> ;
    using FieldValues = ECLIC_CLICINTIE_40_IE_Values<ECLIC::CLICINTIE_40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_40Pack  = Register<0xD20010A1, 8, ReadWriteMode, ECLICCLICINTIE_40Base, T...> ;

  struct ECLICCLICINTIE_41Base {} ;

  struct CLICINTIE_41 : public RegisterBase<0xD20010A5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_41_IE_Values<ECLIC::CLICINTIE_41, 0, 1, ReadWriteMode, ECLICCLICINTIE_41Base> ;
    using FieldValues = ECLIC_CLICINTIE_41_IE_Values<ECLIC::CLICINTIE_41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_41Pack  = Register<0xD20010A5, 8, ReadWriteMode, ECLICCLICINTIE_41Base, T...> ;

  struct ECLICCLICINTIE_42Base {} ;

  struct CLICINTIE_42 : public RegisterBase<0xD20010A9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_42_IE_Values<ECLIC::CLICINTIE_42, 0, 1, ReadWriteMode, ECLICCLICINTIE_42Base> ;
    using FieldValues = ECLIC_CLICINTIE_42_IE_Values<ECLIC::CLICINTIE_42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_42Pack  = Register<0xD20010A9, 8, ReadWriteMode, ECLICCLICINTIE_42Base, T...> ;

  struct ECLICCLICINTIE_43Base {} ;

  struct CLICINTIE_43 : public RegisterBase<0xD20010AD, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_43_IE_Values<ECLIC::CLICINTIE_43, 0, 1, ReadWriteMode, ECLICCLICINTIE_43Base> ;
    using FieldValues = ECLIC_CLICINTIE_43_IE_Values<ECLIC::CLICINTIE_43, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_43Pack  = Register<0xD20010AD, 8, ReadWriteMode, ECLICCLICINTIE_43Base, T...> ;

  struct ECLICCLICINTIE_44Base {} ;

  struct CLICINTIE_44 : public RegisterBase<0xD20010B1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_44_IE_Values<ECLIC::CLICINTIE_44, 0, 1, ReadWriteMode, ECLICCLICINTIE_44Base> ;
    using FieldValues = ECLIC_CLICINTIE_44_IE_Values<ECLIC::CLICINTIE_44, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_44Pack  = Register<0xD20010B1, 8, ReadWriteMode, ECLICCLICINTIE_44Base, T...> ;

  struct ECLICCLICINTIE_45Base {} ;

  struct CLICINTIE_45 : public RegisterBase<0xD20010B5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_45_IE_Values<ECLIC::CLICINTIE_45, 0, 1, ReadWriteMode, ECLICCLICINTIE_45Base> ;
    using FieldValues = ECLIC_CLICINTIE_45_IE_Values<ECLIC::CLICINTIE_45, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_45Pack  = Register<0xD20010B5, 8, ReadWriteMode, ECLICCLICINTIE_45Base, T...> ;

  struct ECLICCLICINTIE_46Base {} ;

  struct CLICINTIE_46 : public RegisterBase<0xD20010B9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_46_IE_Values<ECLIC::CLICINTIE_46, 0, 1, ReadWriteMode, ECLICCLICINTIE_46Base> ;
    using FieldValues = ECLIC_CLICINTIE_46_IE_Values<ECLIC::CLICINTIE_46, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_46Pack  = Register<0xD20010B9, 8, ReadWriteMode, ECLICCLICINTIE_46Base, T...> ;

  struct ECLICCLICINTIE_47Base {} ;

  struct CLICINTIE_47 : public RegisterBase<0xD20010BD, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_47_IE_Values<ECLIC::CLICINTIE_47, 0, 1, ReadWriteMode, ECLICCLICINTIE_47Base> ;
    using FieldValues = ECLIC_CLICINTIE_47_IE_Values<ECLIC::CLICINTIE_47, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_47Pack  = Register<0xD20010BD, 8, ReadWriteMode, ECLICCLICINTIE_47Base, T...> ;

  struct ECLICCLICINTIE_48Base {} ;

  struct CLICINTIE_48 : public RegisterBase<0xD20010C1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_48_IE_Values<ECLIC::CLICINTIE_48, 0, 1, ReadWriteMode, ECLICCLICINTIE_48Base> ;
    using FieldValues = ECLIC_CLICINTIE_48_IE_Values<ECLIC::CLICINTIE_48, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_48Pack  = Register<0xD20010C1, 8, ReadWriteMode, ECLICCLICINTIE_48Base, T...> ;

  struct ECLICCLICINTIE_49Base {} ;

  struct CLICINTIE_49 : public RegisterBase<0xD20010C5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_49_IE_Values<ECLIC::CLICINTIE_49, 0, 1, ReadWriteMode, ECLICCLICINTIE_49Base> ;
    using FieldValues = ECLIC_CLICINTIE_49_IE_Values<ECLIC::CLICINTIE_49, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_49Pack  = Register<0xD20010C5, 8, ReadWriteMode, ECLICCLICINTIE_49Base, T...> ;

  struct ECLICCLICINTIE_50Base {} ;

  struct CLICINTIE_50 : public RegisterBase<0xD20010C9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_50_IE_Values<ECLIC::CLICINTIE_50, 0, 1, ReadWriteMode, ECLICCLICINTIE_50Base> ;
    using FieldValues = ECLIC_CLICINTIE_50_IE_Values<ECLIC::CLICINTIE_50, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_50Pack  = Register<0xD20010C9, 8, ReadWriteMode, ECLICCLICINTIE_50Base, T...> ;

  struct ECLICCLICINTIE_51Base {} ;

  struct CLICINTIE_51 : public RegisterBase<0xD20010CD, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_51_IE_Values<ECLIC::CLICINTIE_51, 0, 1, ReadWriteMode, ECLICCLICINTIE_51Base> ;
    using FieldValues = ECLIC_CLICINTIE_51_IE_Values<ECLIC::CLICINTIE_51, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_51Pack  = Register<0xD20010CD, 8, ReadWriteMode, ECLICCLICINTIE_51Base, T...> ;

  struct ECLICCLICINTIE_52Base {} ;

  struct CLICINTIE_52 : public RegisterBase<0xD20010D1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_52_IE_Values<ECLIC::CLICINTIE_52, 0, 1, ReadWriteMode, ECLICCLICINTIE_52Base> ;
    using FieldValues = ECLIC_CLICINTIE_52_IE_Values<ECLIC::CLICINTIE_52, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_52Pack  = Register<0xD20010D1, 8, ReadWriteMode, ECLICCLICINTIE_52Base, T...> ;

  struct ECLICCLICINTIE_53Base {} ;

  struct CLICINTIE_53 : public RegisterBase<0xD20010D5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_53_IE_Values<ECLIC::CLICINTIE_53, 0, 1, ReadWriteMode, ECLICCLICINTIE_53Base> ;
    using FieldValues = ECLIC_CLICINTIE_53_IE_Values<ECLIC::CLICINTIE_53, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_53Pack  = Register<0xD20010D5, 8, ReadWriteMode, ECLICCLICINTIE_53Base, T...> ;

  struct ECLICCLICINTIE_54Base {} ;

  struct CLICINTIE_54 : public RegisterBase<0xD20010D9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_54_IE_Values<ECLIC::CLICINTIE_54, 0, 1, ReadWriteMode, ECLICCLICINTIE_54Base> ;
    using FieldValues = ECLIC_CLICINTIE_54_IE_Values<ECLIC::CLICINTIE_54, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_54Pack  = Register<0xD20010D9, 8, ReadWriteMode, ECLICCLICINTIE_54Base, T...> ;

  struct ECLICCLICINTIE_55Base {} ;

  struct CLICINTIE_55 : public RegisterBase<0xD20010DD, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_55_IE_Values<ECLIC::CLICINTIE_55, 0, 1, ReadWriteMode, ECLICCLICINTIE_55Base> ;
    using FieldValues = ECLIC_CLICINTIE_55_IE_Values<ECLIC::CLICINTIE_55, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_55Pack  = Register<0xD20010DD, 8, ReadWriteMode, ECLICCLICINTIE_55Base, T...> ;

  struct ECLICCLICINTIE_56Base {} ;

  struct CLICINTIE_56 : public RegisterBase<0xD20010E1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_56_IE_Values<ECLIC::CLICINTIE_56, 0, 1, ReadWriteMode, ECLICCLICINTIE_56Base> ;
    using FieldValues = ECLIC_CLICINTIE_56_IE_Values<ECLIC::CLICINTIE_56, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_56Pack  = Register<0xD20010E1, 8, ReadWriteMode, ECLICCLICINTIE_56Base, T...> ;

  struct ECLICCLICINTIE_57Base {} ;

  struct CLICINTIE_57 : public RegisterBase<0xD20010E5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_57_IE_Values<ECLIC::CLICINTIE_57, 0, 1, ReadWriteMode, ECLICCLICINTIE_57Base> ;
    using FieldValues = ECLIC_CLICINTIE_57_IE_Values<ECLIC::CLICINTIE_57, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_57Pack  = Register<0xD20010E5, 8, ReadWriteMode, ECLICCLICINTIE_57Base, T...> ;

  struct ECLICCLICINTIE_58Base {} ;

  struct CLICINTIE_58 : public RegisterBase<0xD20010E9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_58_IE_Values<ECLIC::CLICINTIE_58, 0, 1, ReadWriteMode, ECLICCLICINTIE_58Base> ;
    using FieldValues = ECLIC_CLICINTIE_58_IE_Values<ECLIC::CLICINTIE_58, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_58Pack  = Register<0xD20010E9, 8, ReadWriteMode, ECLICCLICINTIE_58Base, T...> ;

  struct ECLICCLICINTIE_59Base {} ;

  struct CLICINTIE_59 : public RegisterBase<0xD20010ED, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_59_IE_Values<ECLIC::CLICINTIE_59, 0, 1, ReadWriteMode, ECLICCLICINTIE_59Base> ;
    using FieldValues = ECLIC_CLICINTIE_59_IE_Values<ECLIC::CLICINTIE_59, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_59Pack  = Register<0xD20010ED, 8, ReadWriteMode, ECLICCLICINTIE_59Base, T...> ;

  struct ECLICCLICINTIE_60Base {} ;

  struct CLICINTIE_60 : public RegisterBase<0xD20010F1, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_60_IE_Values<ECLIC::CLICINTIE_60, 0, 1, ReadWriteMode, ECLICCLICINTIE_60Base> ;
    using FieldValues = ECLIC_CLICINTIE_60_IE_Values<ECLIC::CLICINTIE_60, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_60Pack  = Register<0xD20010F1, 8, ReadWriteMode, ECLICCLICINTIE_60Base, T...> ;

  struct ECLICCLICINTIE_61Base {} ;

  struct CLICINTIE_61 : public RegisterBase<0xD20010F5, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_61_IE_Values<ECLIC::CLICINTIE_61, 0, 1, ReadWriteMode, ECLICCLICINTIE_61Base> ;
    using FieldValues = ECLIC_CLICINTIE_61_IE_Values<ECLIC::CLICINTIE_61, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_61Pack  = Register<0xD20010F5, 8, ReadWriteMode, ECLICCLICINTIE_61Base, T...> ;

  struct ECLICCLICINTIE_62Base {} ;

  struct CLICINTIE_62 : public RegisterBase<0xD20010F9, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_62_IE_Values<ECLIC::CLICINTIE_62, 0, 1, ReadWriteMode, ECLICCLICINTIE_62Base> ;
    using FieldValues = ECLIC_CLICINTIE_62_IE_Values<ECLIC::CLICINTIE_62, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_62Pack  = Register<0xD20010F9, 8, ReadWriteMode, ECLICCLICINTIE_62Base, T...> ;

  struct ECLICCLICINTIE_63Base {} ;

  struct CLICINTIE_63 : public RegisterBase<0xD20010FD, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_63_IE_Values<ECLIC::CLICINTIE_63, 0, 1, ReadWriteMode, ECLICCLICINTIE_63Base> ;
    using FieldValues = ECLIC_CLICINTIE_63_IE_Values<ECLIC::CLICINTIE_63, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_63Pack  = Register<0xD20010FD, 8, ReadWriteMode, ECLICCLICINTIE_63Base, T...> ;

  struct ECLICCLICINTIE_64Base {} ;

  struct CLICINTIE_64 : public RegisterBase<0xD2001101, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_64_IE_Values<ECLIC::CLICINTIE_64, 0, 1, ReadWriteMode, ECLICCLICINTIE_64Base> ;
    using FieldValues = ECLIC_CLICINTIE_64_IE_Values<ECLIC::CLICINTIE_64, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_64Pack  = Register<0xD2001101, 8, ReadWriteMode, ECLICCLICINTIE_64Base, T...> ;

  struct ECLICCLICINTIE_65Base {} ;

  struct CLICINTIE_65 : public RegisterBase<0xD2001105, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_65_IE_Values<ECLIC::CLICINTIE_65, 0, 1, ReadWriteMode, ECLICCLICINTIE_65Base> ;
    using FieldValues = ECLIC_CLICINTIE_65_IE_Values<ECLIC::CLICINTIE_65, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_65Pack  = Register<0xD2001105, 8, ReadWriteMode, ECLICCLICINTIE_65Base, T...> ;

  struct ECLICCLICINTIE_66Base {} ;

  struct CLICINTIE_66 : public RegisterBase<0xD2001109, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_66_IE_Values<ECLIC::CLICINTIE_66, 0, 1, ReadWriteMode, ECLICCLICINTIE_66Base> ;
    using FieldValues = ECLIC_CLICINTIE_66_IE_Values<ECLIC::CLICINTIE_66, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_66Pack  = Register<0xD2001109, 8, ReadWriteMode, ECLICCLICINTIE_66Base, T...> ;

  struct ECLICCLICINTIE_67Base {} ;

  struct CLICINTIE_67 : public RegisterBase<0xD200110D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_67_IE_Values<ECLIC::CLICINTIE_67, 0, 1, ReadWriteMode, ECLICCLICINTIE_67Base> ;
    using FieldValues = ECLIC_CLICINTIE_67_IE_Values<ECLIC::CLICINTIE_67, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_67Pack  = Register<0xD200110D, 8, ReadWriteMode, ECLICCLICINTIE_67Base, T...> ;

  struct ECLICCLICINTIE_68Base {} ;

  struct CLICINTIE_68 : public RegisterBase<0xD2001111, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_68_IE_Values<ECLIC::CLICINTIE_68, 0, 1, ReadWriteMode, ECLICCLICINTIE_68Base> ;
    using FieldValues = ECLIC_CLICINTIE_68_IE_Values<ECLIC::CLICINTIE_68, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_68Pack  = Register<0xD2001111, 8, ReadWriteMode, ECLICCLICINTIE_68Base, T...> ;

  struct ECLICCLICINTIE_69Base {} ;

  struct CLICINTIE_69 : public RegisterBase<0xD2001115, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_69_IE_Values<ECLIC::CLICINTIE_69, 0, 1, ReadWriteMode, ECLICCLICINTIE_69Base> ;
    using FieldValues = ECLIC_CLICINTIE_69_IE_Values<ECLIC::CLICINTIE_69, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_69Pack  = Register<0xD2001115, 8, ReadWriteMode, ECLICCLICINTIE_69Base, T...> ;

  struct ECLICCLICINTIE_70Base {} ;

  struct CLICINTIE_70 : public RegisterBase<0xD2001119, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_70_IE_Values<ECLIC::CLICINTIE_70, 0, 1, ReadWriteMode, ECLICCLICINTIE_70Base> ;
    using FieldValues = ECLIC_CLICINTIE_70_IE_Values<ECLIC::CLICINTIE_70, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_70Pack  = Register<0xD2001119, 8, ReadWriteMode, ECLICCLICINTIE_70Base, T...> ;

  struct ECLICCLICINTIE_71Base {} ;

  struct CLICINTIE_71 : public RegisterBase<0xD200111D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_71_IE_Values<ECLIC::CLICINTIE_71, 0, 1, ReadWriteMode, ECLICCLICINTIE_71Base> ;
    using FieldValues = ECLIC_CLICINTIE_71_IE_Values<ECLIC::CLICINTIE_71, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_71Pack  = Register<0xD200111D, 8, ReadWriteMode, ECLICCLICINTIE_71Base, T...> ;

  struct ECLICCLICINTIE_72Base {} ;

  struct CLICINTIE_72 : public RegisterBase<0xD2001121, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_72_IE_Values<ECLIC::CLICINTIE_72, 0, 1, ReadWriteMode, ECLICCLICINTIE_72Base> ;
    using FieldValues = ECLIC_CLICINTIE_72_IE_Values<ECLIC::CLICINTIE_72, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_72Pack  = Register<0xD2001121, 8, ReadWriteMode, ECLICCLICINTIE_72Base, T...> ;

  struct ECLICCLICINTIE_73Base {} ;

  struct CLICINTIE_73 : public RegisterBase<0xD2001125, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_73_IE_Values<ECLIC::CLICINTIE_73, 0, 1, ReadWriteMode, ECLICCLICINTIE_73Base> ;
    using FieldValues = ECLIC_CLICINTIE_73_IE_Values<ECLIC::CLICINTIE_73, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_73Pack  = Register<0xD2001125, 8, ReadWriteMode, ECLICCLICINTIE_73Base, T...> ;

  struct ECLICCLICINTIE_74Base {} ;

  struct CLICINTIE_74 : public RegisterBase<0xD2001129, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_74_IE_Values<ECLIC::CLICINTIE_74, 0, 1, ReadWriteMode, ECLICCLICINTIE_74Base> ;
    using FieldValues = ECLIC_CLICINTIE_74_IE_Values<ECLIC::CLICINTIE_74, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_74Pack  = Register<0xD2001129, 8, ReadWriteMode, ECLICCLICINTIE_74Base, T...> ;

  struct ECLICCLICINTIE_75Base {} ;

  struct CLICINTIE_75 : public RegisterBase<0xD200112D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_75_IE_Values<ECLIC::CLICINTIE_75, 0, 1, ReadWriteMode, ECLICCLICINTIE_75Base> ;
    using FieldValues = ECLIC_CLICINTIE_75_IE_Values<ECLIC::CLICINTIE_75, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_75Pack  = Register<0xD200112D, 8, ReadWriteMode, ECLICCLICINTIE_75Base, T...> ;

  struct ECLICCLICINTIE_76Base {} ;

  struct CLICINTIE_76 : public RegisterBase<0xD2001131, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_76_IE_Values<ECLIC::CLICINTIE_76, 0, 1, ReadWriteMode, ECLICCLICINTIE_76Base> ;
    using FieldValues = ECLIC_CLICINTIE_76_IE_Values<ECLIC::CLICINTIE_76, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_76Pack  = Register<0xD2001131, 8, ReadWriteMode, ECLICCLICINTIE_76Base, T...> ;

  struct ECLICCLICINTIE_77Base {} ;

  struct CLICINTIE_77 : public RegisterBase<0xD2001135, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_77_IE_Values<ECLIC::CLICINTIE_77, 0, 1, ReadWriteMode, ECLICCLICINTIE_77Base> ;
    using FieldValues = ECLIC_CLICINTIE_77_IE_Values<ECLIC::CLICINTIE_77, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_77Pack  = Register<0xD2001135, 8, ReadWriteMode, ECLICCLICINTIE_77Base, T...> ;

  struct ECLICCLICINTIE_78Base {} ;

  struct CLICINTIE_78 : public RegisterBase<0xD2001139, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_78_IE_Values<ECLIC::CLICINTIE_78, 0, 1, ReadWriteMode, ECLICCLICINTIE_78Base> ;
    using FieldValues = ECLIC_CLICINTIE_78_IE_Values<ECLIC::CLICINTIE_78, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_78Pack  = Register<0xD2001139, 8, ReadWriteMode, ECLICCLICINTIE_78Base, T...> ;

  struct ECLICCLICINTIE_79Base {} ;

  struct CLICINTIE_79 : public RegisterBase<0xD200113D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_79_IE_Values<ECLIC::CLICINTIE_79, 0, 1, ReadWriteMode, ECLICCLICINTIE_79Base> ;
    using FieldValues = ECLIC_CLICINTIE_79_IE_Values<ECLIC::CLICINTIE_79, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_79Pack  = Register<0xD200113D, 8, ReadWriteMode, ECLICCLICINTIE_79Base, T...> ;

  struct ECLICCLICINTIE_80Base {} ;

  struct CLICINTIE_80 : public RegisterBase<0xD2001141, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_80_IE_Values<ECLIC::CLICINTIE_80, 0, 1, ReadWriteMode, ECLICCLICINTIE_80Base> ;
    using FieldValues = ECLIC_CLICINTIE_80_IE_Values<ECLIC::CLICINTIE_80, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_80Pack  = Register<0xD2001141, 8, ReadWriteMode, ECLICCLICINTIE_80Base, T...> ;

  struct ECLICCLICINTIE_81Base {} ;

  struct CLICINTIE_81 : public RegisterBase<0xD2001145, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_81_IE_Values<ECLIC::CLICINTIE_81, 0, 1, ReadWriteMode, ECLICCLICINTIE_81Base> ;
    using FieldValues = ECLIC_CLICINTIE_81_IE_Values<ECLIC::CLICINTIE_81, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_81Pack  = Register<0xD2001145, 8, ReadWriteMode, ECLICCLICINTIE_81Base, T...> ;

  struct ECLICCLICINTIE_82Base {} ;

  struct CLICINTIE_82 : public RegisterBase<0xD2001149, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_82_IE_Values<ECLIC::CLICINTIE_82, 0, 1, ReadWriteMode, ECLICCLICINTIE_82Base> ;
    using FieldValues = ECLIC_CLICINTIE_82_IE_Values<ECLIC::CLICINTIE_82, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_82Pack  = Register<0xD2001149, 8, ReadWriteMode, ECLICCLICINTIE_82Base, T...> ;

  struct ECLICCLICINTIE_83Base {} ;

  struct CLICINTIE_83 : public RegisterBase<0xD200114D, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_83_IE_Values<ECLIC::CLICINTIE_83, 0, 1, ReadWriteMode, ECLICCLICINTIE_83Base> ;
    using FieldValues = ECLIC_CLICINTIE_83_IE_Values<ECLIC::CLICINTIE_83, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_83Pack  = Register<0xD200114D, 8, ReadWriteMode, ECLICCLICINTIE_83Base, T...> ;

  struct ECLICCLICINTIE_84Base {} ;

  struct CLICINTIE_84 : public RegisterBase<0xD2001151, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_84_IE_Values<ECLIC::CLICINTIE_84, 0, 1, ReadWriteMode, ECLICCLICINTIE_84Base> ;
    using FieldValues = ECLIC_CLICINTIE_84_IE_Values<ECLIC::CLICINTIE_84, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_84Pack  = Register<0xD2001151, 8, ReadWriteMode, ECLICCLICINTIE_84Base, T...> ;

  struct ECLICCLICINTIE_85Base {} ;

  struct CLICINTIE_85 : public RegisterBase<0xD2001155, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_85_IE_Values<ECLIC::CLICINTIE_85, 0, 1, ReadWriteMode, ECLICCLICINTIE_85Base> ;
    using FieldValues = ECLIC_CLICINTIE_85_IE_Values<ECLIC::CLICINTIE_85, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_85Pack  = Register<0xD2001155, 8, ReadWriteMode, ECLICCLICINTIE_85Base, T...> ;

  struct ECLICCLICINTIE_86Base {} ;

  struct CLICINTIE_86 : public RegisterBase<0xD2001159, 8, ReadWriteMode>
  {
    using IE = ECLIC_CLICINTIE_86_IE_Values<ECLIC::CLICINTIE_86, 0, 1, ReadWriteMode, ECLICCLICINTIE_86Base> ;
    using FieldValues = ECLIC_CLICINTIE_86_IE_Values<ECLIC::CLICINTIE_86, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTIE_86Pack  = Register<0xD2001159, 8, ReadWriteMode, ECLICCLICINTIE_86Base, T...> ;

  struct ECLICCLICINTATTR_0Base {} ;

  struct CLICINTATTR_0 : public RegisterBase<0xD2001002, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_0_SHV_Values<ECLIC::CLICINTATTR_0, 0, 1, ReadWriteMode, ECLICCLICINTATTR_0Base> ;
    using TRIG = ECLIC_CLICINTATTR_0_TRIG_Values<ECLIC::CLICINTATTR_0, 1, 2, ReadWriteMode, ECLICCLICINTATTR_0Base> ;
    using FieldValues = ECLIC_CLICINTATTR_0_TRIG_Values<ECLIC::CLICINTATTR_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_0Pack  = Register<0xD2001002, 8, ReadWriteMode, ECLICCLICINTATTR_0Base, T...> ;

  struct ECLICCLICINTATTR_1Base {} ;

  struct CLICINTATTR_1 : public RegisterBase<0xD2001006, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_1_SHV_Values<ECLIC::CLICINTATTR_1, 0, 1, ReadWriteMode, ECLICCLICINTATTR_1Base> ;
    using TRIG = ECLIC_CLICINTATTR_1_TRIG_Values<ECLIC::CLICINTATTR_1, 1, 2, ReadWriteMode, ECLICCLICINTATTR_1Base> ;
    using FieldValues = ECLIC_CLICINTATTR_1_TRIG_Values<ECLIC::CLICINTATTR_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_1Pack  = Register<0xD2001006, 8, ReadWriteMode, ECLICCLICINTATTR_1Base, T...> ;

  struct ECLICCLICINTATTR_2Base {} ;

  struct CLICINTATTR_2 : public RegisterBase<0xD200100A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_2_SHV_Values<ECLIC::CLICINTATTR_2, 0, 1, ReadWriteMode, ECLICCLICINTATTR_2Base> ;
    using TRIG = ECLIC_CLICINTATTR_2_TRIG_Values<ECLIC::CLICINTATTR_2, 1, 2, ReadWriteMode, ECLICCLICINTATTR_2Base> ;
    using FieldValues = ECLIC_CLICINTATTR_2_TRIG_Values<ECLIC::CLICINTATTR_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_2Pack  = Register<0xD200100A, 8, ReadWriteMode, ECLICCLICINTATTR_2Base, T...> ;

  struct ECLICCLICINTATTR_3Base {} ;

  struct CLICINTATTR_3 : public RegisterBase<0xD200100E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_3_SHV_Values<ECLIC::CLICINTATTR_3, 0, 1, ReadWriteMode, ECLICCLICINTATTR_3Base> ;
    using TRIG = ECLIC_CLICINTATTR_3_TRIG_Values<ECLIC::CLICINTATTR_3, 1, 2, ReadWriteMode, ECLICCLICINTATTR_3Base> ;
    using FieldValues = ECLIC_CLICINTATTR_3_TRIG_Values<ECLIC::CLICINTATTR_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_3Pack  = Register<0xD200100E, 8, ReadWriteMode, ECLICCLICINTATTR_3Base, T...> ;

  struct ECLICCLICINTATTR_4Base {} ;

  struct CLICINTATTR_4 : public RegisterBase<0xD2001012, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_4_SHV_Values<ECLIC::CLICINTATTR_4, 0, 1, ReadWriteMode, ECLICCLICINTATTR_4Base> ;
    using TRIG = ECLIC_CLICINTATTR_4_TRIG_Values<ECLIC::CLICINTATTR_4, 1, 2, ReadWriteMode, ECLICCLICINTATTR_4Base> ;
    using FieldValues = ECLIC_CLICINTATTR_4_TRIG_Values<ECLIC::CLICINTATTR_4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_4Pack  = Register<0xD2001012, 8, ReadWriteMode, ECLICCLICINTATTR_4Base, T...> ;

  struct ECLICCLICINTATTR_5Base {} ;

  struct CLICINTATTR_5 : public RegisterBase<0xD2001016, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_5_SHV_Values<ECLIC::CLICINTATTR_5, 0, 1, ReadWriteMode, ECLICCLICINTATTR_5Base> ;
    using TRIG = ECLIC_CLICINTATTR_5_TRIG_Values<ECLIC::CLICINTATTR_5, 1, 2, ReadWriteMode, ECLICCLICINTATTR_5Base> ;
    using FieldValues = ECLIC_CLICINTATTR_5_TRIG_Values<ECLIC::CLICINTATTR_5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_5Pack  = Register<0xD2001016, 8, ReadWriteMode, ECLICCLICINTATTR_5Base, T...> ;

  struct ECLICCLICINTATTR_6Base {} ;

  struct CLICINTATTR_6 : public RegisterBase<0xD200101A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_6_SHV_Values<ECLIC::CLICINTATTR_6, 0, 1, ReadWriteMode, ECLICCLICINTATTR_6Base> ;
    using TRIG = ECLIC_CLICINTATTR_6_TRIG_Values<ECLIC::CLICINTATTR_6, 1, 2, ReadWriteMode, ECLICCLICINTATTR_6Base> ;
    using FieldValues = ECLIC_CLICINTATTR_6_TRIG_Values<ECLIC::CLICINTATTR_6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_6Pack  = Register<0xD200101A, 8, ReadWriteMode, ECLICCLICINTATTR_6Base, T...> ;

  struct ECLICCLICINTATTR_7Base {} ;

  struct CLICINTATTR_7 : public RegisterBase<0xD200101E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_7_SHV_Values<ECLIC::CLICINTATTR_7, 0, 1, ReadWriteMode, ECLICCLICINTATTR_7Base> ;
    using TRIG = ECLIC_CLICINTATTR_7_TRIG_Values<ECLIC::CLICINTATTR_7, 1, 2, ReadWriteMode, ECLICCLICINTATTR_7Base> ;
    using FieldValues = ECLIC_CLICINTATTR_7_TRIG_Values<ECLIC::CLICINTATTR_7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_7Pack  = Register<0xD200101E, 8, ReadWriteMode, ECLICCLICINTATTR_7Base, T...> ;

  struct ECLICCLICINTATTR_8Base {} ;

  struct CLICINTATTR_8 : public RegisterBase<0xD2001022, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_8_SHV_Values<ECLIC::CLICINTATTR_8, 0, 1, ReadWriteMode, ECLICCLICINTATTR_8Base> ;
    using TRIG = ECLIC_CLICINTATTR_8_TRIG_Values<ECLIC::CLICINTATTR_8, 1, 2, ReadWriteMode, ECLICCLICINTATTR_8Base> ;
    using FieldValues = ECLIC_CLICINTATTR_8_TRIG_Values<ECLIC::CLICINTATTR_8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_8Pack  = Register<0xD2001022, 8, ReadWriteMode, ECLICCLICINTATTR_8Base, T...> ;

  struct ECLICCLICINTATTR_9Base {} ;

  struct CLICINTATTR_9 : public RegisterBase<0xD2001026, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_9_SHV_Values<ECLIC::CLICINTATTR_9, 0, 1, ReadWriteMode, ECLICCLICINTATTR_9Base> ;
    using TRIG = ECLIC_CLICINTATTR_9_TRIG_Values<ECLIC::CLICINTATTR_9, 1, 2, ReadWriteMode, ECLICCLICINTATTR_9Base> ;
    using FieldValues = ECLIC_CLICINTATTR_9_TRIG_Values<ECLIC::CLICINTATTR_9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_9Pack  = Register<0xD2001026, 8, ReadWriteMode, ECLICCLICINTATTR_9Base, T...> ;

  struct ECLICCLICINTATTR_10Base {} ;

  struct CLICINTATTR_10 : public RegisterBase<0xD200102A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_10_SHV_Values<ECLIC::CLICINTATTR_10, 0, 1, ReadWriteMode, ECLICCLICINTATTR_10Base> ;
    using TRIG = ECLIC_CLICINTATTR_10_TRIG_Values<ECLIC::CLICINTATTR_10, 1, 2, ReadWriteMode, ECLICCLICINTATTR_10Base> ;
    using FieldValues = ECLIC_CLICINTATTR_10_TRIG_Values<ECLIC::CLICINTATTR_10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_10Pack  = Register<0xD200102A, 8, ReadWriteMode, ECLICCLICINTATTR_10Base, T...> ;

  struct ECLICCLICINTATTR_11Base {} ;

  struct CLICINTATTR_11 : public RegisterBase<0xD200102E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_11_SHV_Values<ECLIC::CLICINTATTR_11, 0, 1, ReadWriteMode, ECLICCLICINTATTR_11Base> ;
    using TRIG = ECLIC_CLICINTATTR_11_TRIG_Values<ECLIC::CLICINTATTR_11, 1, 2, ReadWriteMode, ECLICCLICINTATTR_11Base> ;
    using FieldValues = ECLIC_CLICINTATTR_11_TRIG_Values<ECLIC::CLICINTATTR_11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_11Pack  = Register<0xD200102E, 8, ReadWriteMode, ECLICCLICINTATTR_11Base, T...> ;

  struct ECLICCLICINTATTR_12Base {} ;

  struct CLICINTATTR_12 : public RegisterBase<0xD2001032, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_12_SHV_Values<ECLIC::CLICINTATTR_12, 0, 1, ReadWriteMode, ECLICCLICINTATTR_12Base> ;
    using TRIG = ECLIC_CLICINTATTR_12_TRIG_Values<ECLIC::CLICINTATTR_12, 1, 2, ReadWriteMode, ECLICCLICINTATTR_12Base> ;
    using FieldValues = ECLIC_CLICINTATTR_12_TRIG_Values<ECLIC::CLICINTATTR_12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_12Pack  = Register<0xD2001032, 8, ReadWriteMode, ECLICCLICINTATTR_12Base, T...> ;

  struct ECLICCLICINTATTR_13Base {} ;

  struct CLICINTATTR_13 : public RegisterBase<0xD2001036, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_13_SHV_Values<ECLIC::CLICINTATTR_13, 0, 1, ReadWriteMode, ECLICCLICINTATTR_13Base> ;
    using TRIG = ECLIC_CLICINTATTR_13_TRIG_Values<ECLIC::CLICINTATTR_13, 1, 2, ReadWriteMode, ECLICCLICINTATTR_13Base> ;
    using FieldValues = ECLIC_CLICINTATTR_13_TRIG_Values<ECLIC::CLICINTATTR_13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_13Pack  = Register<0xD2001036, 8, ReadWriteMode, ECLICCLICINTATTR_13Base, T...> ;

  struct ECLICCLICINTATTR_14Base {} ;

  struct CLICINTATTR_14 : public RegisterBase<0xD200103A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_14_SHV_Values<ECLIC::CLICINTATTR_14, 0, 1, ReadWriteMode, ECLICCLICINTATTR_14Base> ;
    using TRIG = ECLIC_CLICINTATTR_14_TRIG_Values<ECLIC::CLICINTATTR_14, 1, 2, ReadWriteMode, ECLICCLICINTATTR_14Base> ;
    using FieldValues = ECLIC_CLICINTATTR_14_TRIG_Values<ECLIC::CLICINTATTR_14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_14Pack  = Register<0xD200103A, 8, ReadWriteMode, ECLICCLICINTATTR_14Base, T...> ;

  struct ECLICCLICINTATTR_15Base {} ;

  struct CLICINTATTR_15 : public RegisterBase<0xD200103E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_15_SHV_Values<ECLIC::CLICINTATTR_15, 0, 1, ReadWriteMode, ECLICCLICINTATTR_15Base> ;
    using TRIG = ECLIC_CLICINTATTR_15_TRIG_Values<ECLIC::CLICINTATTR_15, 1, 2, ReadWriteMode, ECLICCLICINTATTR_15Base> ;
    using FieldValues = ECLIC_CLICINTATTR_15_TRIG_Values<ECLIC::CLICINTATTR_15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_15Pack  = Register<0xD200103E, 8, ReadWriteMode, ECLICCLICINTATTR_15Base, T...> ;

  struct ECLICCLICINTATTR_16Base {} ;

  struct CLICINTATTR_16 : public RegisterBase<0xD2001042, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_16_SHV_Values<ECLIC::CLICINTATTR_16, 0, 1, ReadWriteMode, ECLICCLICINTATTR_16Base> ;
    using TRIG = ECLIC_CLICINTATTR_16_TRIG_Values<ECLIC::CLICINTATTR_16, 1, 2, ReadWriteMode, ECLICCLICINTATTR_16Base> ;
    using FieldValues = ECLIC_CLICINTATTR_16_TRIG_Values<ECLIC::CLICINTATTR_16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_16Pack  = Register<0xD2001042, 8, ReadWriteMode, ECLICCLICINTATTR_16Base, T...> ;

  struct ECLICCLICINTATTR_17Base {} ;

  struct CLICINTATTR_17 : public RegisterBase<0xD2001046, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_17_SHV_Values<ECLIC::CLICINTATTR_17, 0, 1, ReadWriteMode, ECLICCLICINTATTR_17Base> ;
    using TRIG = ECLIC_CLICINTATTR_17_TRIG_Values<ECLIC::CLICINTATTR_17, 1, 2, ReadWriteMode, ECLICCLICINTATTR_17Base> ;
    using FieldValues = ECLIC_CLICINTATTR_17_TRIG_Values<ECLIC::CLICINTATTR_17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_17Pack  = Register<0xD2001046, 8, ReadWriteMode, ECLICCLICINTATTR_17Base, T...> ;

  struct ECLICCLICINTATTR_18Base {} ;

  struct CLICINTATTR_18 : public RegisterBase<0xD200104A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_18_SHV_Values<ECLIC::CLICINTATTR_18, 0, 1, ReadWriteMode, ECLICCLICINTATTR_18Base> ;
    using TRIG = ECLIC_CLICINTATTR_18_TRIG_Values<ECLIC::CLICINTATTR_18, 1, 2, ReadWriteMode, ECLICCLICINTATTR_18Base> ;
    using FieldValues = ECLIC_CLICINTATTR_18_TRIG_Values<ECLIC::CLICINTATTR_18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_18Pack  = Register<0xD200104A, 8, ReadWriteMode, ECLICCLICINTATTR_18Base, T...> ;

  struct ECLICCLICINTATTR_19Base {} ;

  struct CLICINTATTR_19 : public RegisterBase<0xD200104E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_19_SHV_Values<ECLIC::CLICINTATTR_19, 0, 1, ReadWriteMode, ECLICCLICINTATTR_19Base> ;
    using TRIG = ECLIC_CLICINTATTR_19_TRIG_Values<ECLIC::CLICINTATTR_19, 1, 2, ReadWriteMode, ECLICCLICINTATTR_19Base> ;
    using FieldValues = ECLIC_CLICINTATTR_19_TRIG_Values<ECLIC::CLICINTATTR_19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_19Pack  = Register<0xD200104E, 8, ReadWriteMode, ECLICCLICINTATTR_19Base, T...> ;

  struct ECLICCLICINTATTR_20Base {} ;

  struct CLICINTATTR_20 : public RegisterBase<0xD2001052, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_20_SHV_Values<ECLIC::CLICINTATTR_20, 0, 1, ReadWriteMode, ECLICCLICINTATTR_20Base> ;
    using TRIG = ECLIC_CLICINTATTR_20_TRIG_Values<ECLIC::CLICINTATTR_20, 1, 2, ReadWriteMode, ECLICCLICINTATTR_20Base> ;
    using FieldValues = ECLIC_CLICINTATTR_20_TRIG_Values<ECLIC::CLICINTATTR_20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_20Pack  = Register<0xD2001052, 8, ReadWriteMode, ECLICCLICINTATTR_20Base, T...> ;

  struct ECLICCLICINTATTR_21Base {} ;

  struct CLICINTATTR_21 : public RegisterBase<0xD2001056, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_21_SHV_Values<ECLIC::CLICINTATTR_21, 0, 1, ReadWriteMode, ECLICCLICINTATTR_21Base> ;
    using TRIG = ECLIC_CLICINTATTR_21_TRIG_Values<ECLIC::CLICINTATTR_21, 1, 2, ReadWriteMode, ECLICCLICINTATTR_21Base> ;
    using FieldValues = ECLIC_CLICINTATTR_21_TRIG_Values<ECLIC::CLICINTATTR_21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_21Pack  = Register<0xD2001056, 8, ReadWriteMode, ECLICCLICINTATTR_21Base, T...> ;

  struct ECLICCLICINTATTR_22Base {} ;

  struct CLICINTATTR_22 : public RegisterBase<0xD200105A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_22_SHV_Values<ECLIC::CLICINTATTR_22, 0, 1, ReadWriteMode, ECLICCLICINTATTR_22Base> ;
    using TRIG = ECLIC_CLICINTATTR_22_TRIG_Values<ECLIC::CLICINTATTR_22, 1, 2, ReadWriteMode, ECLICCLICINTATTR_22Base> ;
    using FieldValues = ECLIC_CLICINTATTR_22_TRIG_Values<ECLIC::CLICINTATTR_22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_22Pack  = Register<0xD200105A, 8, ReadWriteMode, ECLICCLICINTATTR_22Base, T...> ;

  struct ECLICCLICINTATTR_23Base {} ;

  struct CLICINTATTR_23 : public RegisterBase<0xD200105E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_23_SHV_Values<ECLIC::CLICINTATTR_23, 0, 1, ReadWriteMode, ECLICCLICINTATTR_23Base> ;
    using TRIG = ECLIC_CLICINTATTR_23_TRIG_Values<ECLIC::CLICINTATTR_23, 1, 2, ReadWriteMode, ECLICCLICINTATTR_23Base> ;
    using FieldValues = ECLIC_CLICINTATTR_23_TRIG_Values<ECLIC::CLICINTATTR_23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_23Pack  = Register<0xD200105E, 8, ReadWriteMode, ECLICCLICINTATTR_23Base, T...> ;

  struct ECLICCLICINTATTR_24Base {} ;

  struct CLICINTATTR_24 : public RegisterBase<0xD2001062, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_24_SHV_Values<ECLIC::CLICINTATTR_24, 0, 1, ReadWriteMode, ECLICCLICINTATTR_24Base> ;
    using TRIG = ECLIC_CLICINTATTR_24_TRIG_Values<ECLIC::CLICINTATTR_24, 1, 2, ReadWriteMode, ECLICCLICINTATTR_24Base> ;
    using FieldValues = ECLIC_CLICINTATTR_24_TRIG_Values<ECLIC::CLICINTATTR_24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_24Pack  = Register<0xD2001062, 8, ReadWriteMode, ECLICCLICINTATTR_24Base, T...> ;

  struct ECLICCLICINTATTR_25Base {} ;

  struct CLICINTATTR_25 : public RegisterBase<0xD2001066, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_25_SHV_Values<ECLIC::CLICINTATTR_25, 0, 1, ReadWriteMode, ECLICCLICINTATTR_25Base> ;
    using TRIG = ECLIC_CLICINTATTR_25_TRIG_Values<ECLIC::CLICINTATTR_25, 1, 2, ReadWriteMode, ECLICCLICINTATTR_25Base> ;
    using FieldValues = ECLIC_CLICINTATTR_25_TRIG_Values<ECLIC::CLICINTATTR_25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_25Pack  = Register<0xD2001066, 8, ReadWriteMode, ECLICCLICINTATTR_25Base, T...> ;

  struct ECLICCLICINTATTR_26Base {} ;

  struct CLICINTATTR_26 : public RegisterBase<0xD200106A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_26_SHV_Values<ECLIC::CLICINTATTR_26, 0, 1, ReadWriteMode, ECLICCLICINTATTR_26Base> ;
    using TRIG = ECLIC_CLICINTATTR_26_TRIG_Values<ECLIC::CLICINTATTR_26, 1, 2, ReadWriteMode, ECLICCLICINTATTR_26Base> ;
    using FieldValues = ECLIC_CLICINTATTR_26_TRIG_Values<ECLIC::CLICINTATTR_26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_26Pack  = Register<0xD200106A, 8, ReadWriteMode, ECLICCLICINTATTR_26Base, T...> ;

  struct ECLICCLICINTATTR_27Base {} ;

  struct CLICINTATTR_27 : public RegisterBase<0xD200106E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_27_SHV_Values<ECLIC::CLICINTATTR_27, 0, 1, ReadWriteMode, ECLICCLICINTATTR_27Base> ;
    using TRIG = ECLIC_CLICINTATTR_27_TRIG_Values<ECLIC::CLICINTATTR_27, 1, 2, ReadWriteMode, ECLICCLICINTATTR_27Base> ;
    using FieldValues = ECLIC_CLICINTATTR_27_TRIG_Values<ECLIC::CLICINTATTR_27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_27Pack  = Register<0xD200106E, 8, ReadWriteMode, ECLICCLICINTATTR_27Base, T...> ;

  struct ECLICCLICINTATTR_28Base {} ;

  struct CLICINTATTR_28 : public RegisterBase<0xD2001072, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_28_SHV_Values<ECLIC::CLICINTATTR_28, 0, 1, ReadWriteMode, ECLICCLICINTATTR_28Base> ;
    using TRIG = ECLIC_CLICINTATTR_28_TRIG_Values<ECLIC::CLICINTATTR_28, 1, 2, ReadWriteMode, ECLICCLICINTATTR_28Base> ;
    using FieldValues = ECLIC_CLICINTATTR_28_TRIG_Values<ECLIC::CLICINTATTR_28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_28Pack  = Register<0xD2001072, 8, ReadWriteMode, ECLICCLICINTATTR_28Base, T...> ;

  struct ECLICCLICINTATTR_29Base {} ;

  struct CLICINTATTR_29 : public RegisterBase<0xD2001076, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_29_SHV_Values<ECLIC::CLICINTATTR_29, 0, 1, ReadWriteMode, ECLICCLICINTATTR_29Base> ;
    using TRIG = ECLIC_CLICINTATTR_29_TRIG_Values<ECLIC::CLICINTATTR_29, 1, 2, ReadWriteMode, ECLICCLICINTATTR_29Base> ;
    using FieldValues = ECLIC_CLICINTATTR_29_TRIG_Values<ECLIC::CLICINTATTR_29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_29Pack  = Register<0xD2001076, 8, ReadWriteMode, ECLICCLICINTATTR_29Base, T...> ;

  struct ECLICCLICINTATTR_30Base {} ;

  struct CLICINTATTR_30 : public RegisterBase<0xD200107A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_30_SHV_Values<ECLIC::CLICINTATTR_30, 0, 1, ReadWriteMode, ECLICCLICINTATTR_30Base> ;
    using TRIG = ECLIC_CLICINTATTR_30_TRIG_Values<ECLIC::CLICINTATTR_30, 1, 2, ReadWriteMode, ECLICCLICINTATTR_30Base> ;
    using FieldValues = ECLIC_CLICINTATTR_30_TRIG_Values<ECLIC::CLICINTATTR_30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_30Pack  = Register<0xD200107A, 8, ReadWriteMode, ECLICCLICINTATTR_30Base, T...> ;

  struct ECLICCLICINTATTR_31Base {} ;

  struct CLICINTATTR_31 : public RegisterBase<0xD200107E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_31_SHV_Values<ECLIC::CLICINTATTR_31, 0, 1, ReadWriteMode, ECLICCLICINTATTR_31Base> ;
    using TRIG = ECLIC_CLICINTATTR_31_TRIG_Values<ECLIC::CLICINTATTR_31, 1, 2, ReadWriteMode, ECLICCLICINTATTR_31Base> ;
    using FieldValues = ECLIC_CLICINTATTR_31_TRIG_Values<ECLIC::CLICINTATTR_31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_31Pack  = Register<0xD200107E, 8, ReadWriteMode, ECLICCLICINTATTR_31Base, T...> ;

  struct ECLICCLICINTATTR_32Base {} ;

  struct CLICINTATTR_32 : public RegisterBase<0xD2001082, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_32_SHV_Values<ECLIC::CLICINTATTR_32, 0, 1, ReadWriteMode, ECLICCLICINTATTR_32Base> ;
    using TRIG = ECLIC_CLICINTATTR_32_TRIG_Values<ECLIC::CLICINTATTR_32, 1, 2, ReadWriteMode, ECLICCLICINTATTR_32Base> ;
    using FieldValues = ECLIC_CLICINTATTR_32_TRIG_Values<ECLIC::CLICINTATTR_32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_32Pack  = Register<0xD2001082, 8, ReadWriteMode, ECLICCLICINTATTR_32Base, T...> ;

  struct ECLICCLICINTATTR_33Base {} ;

  struct CLICINTATTR_33 : public RegisterBase<0xD2001086, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_33_SHV_Values<ECLIC::CLICINTATTR_33, 0, 1, ReadWriteMode, ECLICCLICINTATTR_33Base> ;
    using TRIG = ECLIC_CLICINTATTR_33_TRIG_Values<ECLIC::CLICINTATTR_33, 1, 2, ReadWriteMode, ECLICCLICINTATTR_33Base> ;
    using FieldValues = ECLIC_CLICINTATTR_33_TRIG_Values<ECLIC::CLICINTATTR_33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_33Pack  = Register<0xD2001086, 8, ReadWriteMode, ECLICCLICINTATTR_33Base, T...> ;

  struct ECLICCLICINTATTR_34Base {} ;

  struct CLICINTATTR_34 : public RegisterBase<0xD200108A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_34_SHV_Values<ECLIC::CLICINTATTR_34, 0, 1, ReadWriteMode, ECLICCLICINTATTR_34Base> ;
    using TRIG = ECLIC_CLICINTATTR_34_TRIG_Values<ECLIC::CLICINTATTR_34, 1, 2, ReadWriteMode, ECLICCLICINTATTR_34Base> ;
    using FieldValues = ECLIC_CLICINTATTR_34_TRIG_Values<ECLIC::CLICINTATTR_34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_34Pack  = Register<0xD200108A, 8, ReadWriteMode, ECLICCLICINTATTR_34Base, T...> ;

  struct ECLICCLICINTATTR_35Base {} ;

  struct CLICINTATTR_35 : public RegisterBase<0xD200108E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_35_SHV_Values<ECLIC::CLICINTATTR_35, 0, 1, ReadWriteMode, ECLICCLICINTATTR_35Base> ;
    using TRIG = ECLIC_CLICINTATTR_35_TRIG_Values<ECLIC::CLICINTATTR_35, 1, 2, ReadWriteMode, ECLICCLICINTATTR_35Base> ;
    using FieldValues = ECLIC_CLICINTATTR_35_TRIG_Values<ECLIC::CLICINTATTR_35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_35Pack  = Register<0xD200108E, 8, ReadWriteMode, ECLICCLICINTATTR_35Base, T...> ;

  struct ECLICCLICINTATTR_36Base {} ;

  struct CLICINTATTR_36 : public RegisterBase<0xD2001092, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_36_SHV_Values<ECLIC::CLICINTATTR_36, 0, 1, ReadWriteMode, ECLICCLICINTATTR_36Base> ;
    using TRIG = ECLIC_CLICINTATTR_36_TRIG_Values<ECLIC::CLICINTATTR_36, 1, 2, ReadWriteMode, ECLICCLICINTATTR_36Base> ;
    using FieldValues = ECLIC_CLICINTATTR_36_TRIG_Values<ECLIC::CLICINTATTR_36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_36Pack  = Register<0xD2001092, 8, ReadWriteMode, ECLICCLICINTATTR_36Base, T...> ;

  struct ECLICCLICINTATTR_37Base {} ;

  struct CLICINTATTR_37 : public RegisterBase<0xD2001096, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_37_SHV_Values<ECLIC::CLICINTATTR_37, 0, 1, ReadWriteMode, ECLICCLICINTATTR_37Base> ;
    using TRIG = ECLIC_CLICINTATTR_37_TRIG_Values<ECLIC::CLICINTATTR_37, 1, 2, ReadWriteMode, ECLICCLICINTATTR_37Base> ;
    using FieldValues = ECLIC_CLICINTATTR_37_TRIG_Values<ECLIC::CLICINTATTR_37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_37Pack  = Register<0xD2001096, 8, ReadWriteMode, ECLICCLICINTATTR_37Base, T...> ;

  struct ECLICCLICINTATTR_38Base {} ;

  struct CLICINTATTR_38 : public RegisterBase<0xD200109A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_38_SHV_Values<ECLIC::CLICINTATTR_38, 0, 1, ReadWriteMode, ECLICCLICINTATTR_38Base> ;
    using TRIG = ECLIC_CLICINTATTR_38_TRIG_Values<ECLIC::CLICINTATTR_38, 1, 2, ReadWriteMode, ECLICCLICINTATTR_38Base> ;
    using FieldValues = ECLIC_CLICINTATTR_38_TRIG_Values<ECLIC::CLICINTATTR_38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_38Pack  = Register<0xD200109A, 8, ReadWriteMode, ECLICCLICINTATTR_38Base, T...> ;

  struct ECLICCLICINTATTR_39Base {} ;

  struct CLICINTATTR_39 : public RegisterBase<0xD200109E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_39_SHV_Values<ECLIC::CLICINTATTR_39, 0, 1, ReadWriteMode, ECLICCLICINTATTR_39Base> ;
    using TRIG = ECLIC_CLICINTATTR_39_TRIG_Values<ECLIC::CLICINTATTR_39, 1, 2, ReadWriteMode, ECLICCLICINTATTR_39Base> ;
    using FieldValues = ECLIC_CLICINTATTR_39_TRIG_Values<ECLIC::CLICINTATTR_39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_39Pack  = Register<0xD200109E, 8, ReadWriteMode, ECLICCLICINTATTR_39Base, T...> ;

  struct ECLICCLICINTATTR_40Base {} ;

  struct CLICINTATTR_40 : public RegisterBase<0xD20010A2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_40_SHV_Values<ECLIC::CLICINTATTR_40, 0, 1, ReadWriteMode, ECLICCLICINTATTR_40Base> ;
    using TRIG = ECLIC_CLICINTATTR_40_TRIG_Values<ECLIC::CLICINTATTR_40, 1, 2, ReadWriteMode, ECLICCLICINTATTR_40Base> ;
    using FieldValues = ECLIC_CLICINTATTR_40_TRIG_Values<ECLIC::CLICINTATTR_40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_40Pack  = Register<0xD20010A2, 8, ReadWriteMode, ECLICCLICINTATTR_40Base, T...> ;

  struct ECLICCLICINTATTR_41Base {} ;

  struct CLICINTATTR_41 : public RegisterBase<0xD20010A6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_41_SHV_Values<ECLIC::CLICINTATTR_41, 0, 1, ReadWriteMode, ECLICCLICINTATTR_41Base> ;
    using TRIG = ECLIC_CLICINTATTR_41_TRIG_Values<ECLIC::CLICINTATTR_41, 1, 2, ReadWriteMode, ECLICCLICINTATTR_41Base> ;
    using FieldValues = ECLIC_CLICINTATTR_41_TRIG_Values<ECLIC::CLICINTATTR_41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_41Pack  = Register<0xD20010A6, 8, ReadWriteMode, ECLICCLICINTATTR_41Base, T...> ;

  struct ECLICCLICINTATTR_42Base {} ;

  struct CLICINTATTR_42 : public RegisterBase<0xD20010AA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_42_SHV_Values<ECLIC::CLICINTATTR_42, 0, 1, ReadWriteMode, ECLICCLICINTATTR_42Base> ;
    using TRIG = ECLIC_CLICINTATTR_42_TRIG_Values<ECLIC::CLICINTATTR_42, 1, 2, ReadWriteMode, ECLICCLICINTATTR_42Base> ;
    using FieldValues = ECLIC_CLICINTATTR_42_TRIG_Values<ECLIC::CLICINTATTR_42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_42Pack  = Register<0xD20010AA, 8, ReadWriteMode, ECLICCLICINTATTR_42Base, T...> ;

  struct ECLICCLICINTATTR_43Base {} ;

  struct CLICINTATTR_43 : public RegisterBase<0xD20010AE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_43_SHV_Values<ECLIC::CLICINTATTR_43, 0, 1, ReadWriteMode, ECLICCLICINTATTR_43Base> ;
    using TRIG = ECLIC_CLICINTATTR_43_TRIG_Values<ECLIC::CLICINTATTR_43, 1, 2, ReadWriteMode, ECLICCLICINTATTR_43Base> ;
    using FieldValues = ECLIC_CLICINTATTR_43_TRIG_Values<ECLIC::CLICINTATTR_43, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_43Pack  = Register<0xD20010AE, 8, ReadWriteMode, ECLICCLICINTATTR_43Base, T...> ;

  struct ECLICCLICINTATTR_44Base {} ;

  struct CLICINTATTR_44 : public RegisterBase<0xD20010B2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_44_SHV_Values<ECLIC::CLICINTATTR_44, 0, 1, ReadWriteMode, ECLICCLICINTATTR_44Base> ;
    using TRIG = ECLIC_CLICINTATTR_44_TRIG_Values<ECLIC::CLICINTATTR_44, 1, 2, ReadWriteMode, ECLICCLICINTATTR_44Base> ;
    using FieldValues = ECLIC_CLICINTATTR_44_TRIG_Values<ECLIC::CLICINTATTR_44, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_44Pack  = Register<0xD20010B2, 8, ReadWriteMode, ECLICCLICINTATTR_44Base, T...> ;

  struct ECLICCLICINTATTR_45Base {} ;

  struct CLICINTATTR_45 : public RegisterBase<0xD20010B6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_45_SHV_Values<ECLIC::CLICINTATTR_45, 0, 1, ReadWriteMode, ECLICCLICINTATTR_45Base> ;
    using TRIG = ECLIC_CLICINTATTR_45_TRIG_Values<ECLIC::CLICINTATTR_45, 1, 2, ReadWriteMode, ECLICCLICINTATTR_45Base> ;
    using FieldValues = ECLIC_CLICINTATTR_45_TRIG_Values<ECLIC::CLICINTATTR_45, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_45Pack  = Register<0xD20010B6, 8, ReadWriteMode, ECLICCLICINTATTR_45Base, T...> ;

  struct ECLICCLICINTATTR_46Base {} ;

  struct CLICINTATTR_46 : public RegisterBase<0xD20010BA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_46_SHV_Values<ECLIC::CLICINTATTR_46, 0, 1, ReadWriteMode, ECLICCLICINTATTR_46Base> ;
    using TRIG = ECLIC_CLICINTATTR_46_TRIG_Values<ECLIC::CLICINTATTR_46, 1, 2, ReadWriteMode, ECLICCLICINTATTR_46Base> ;
    using FieldValues = ECLIC_CLICINTATTR_46_TRIG_Values<ECLIC::CLICINTATTR_46, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_46Pack  = Register<0xD20010BA, 8, ReadWriteMode, ECLICCLICINTATTR_46Base, T...> ;

  struct ECLICCLICINTATTR_47Base {} ;

  struct CLICINTATTR_47 : public RegisterBase<0xD20010BE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_47_SHV_Values<ECLIC::CLICINTATTR_47, 0, 1, ReadWriteMode, ECLICCLICINTATTR_47Base> ;
    using TRIG = ECLIC_CLICINTATTR_47_TRIG_Values<ECLIC::CLICINTATTR_47, 1, 2, ReadWriteMode, ECLICCLICINTATTR_47Base> ;
    using FieldValues = ECLIC_CLICINTATTR_47_TRIG_Values<ECLIC::CLICINTATTR_47, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_47Pack  = Register<0xD20010BE, 8, ReadWriteMode, ECLICCLICINTATTR_47Base, T...> ;

  struct ECLICCLICINTATTR_48Base {} ;

  struct CLICINTATTR_48 : public RegisterBase<0xD20010C2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_48_SHV_Values<ECLIC::CLICINTATTR_48, 0, 1, ReadWriteMode, ECLICCLICINTATTR_48Base> ;
    using TRIG = ECLIC_CLICINTATTR_48_TRIG_Values<ECLIC::CLICINTATTR_48, 1, 2, ReadWriteMode, ECLICCLICINTATTR_48Base> ;
    using FieldValues = ECLIC_CLICINTATTR_48_TRIG_Values<ECLIC::CLICINTATTR_48, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_48Pack  = Register<0xD20010C2, 8, ReadWriteMode, ECLICCLICINTATTR_48Base, T...> ;

  struct ECLICCLICINTATTR_49Base {} ;

  struct CLICINTATTR_49 : public RegisterBase<0xD20010C6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_49_SHV_Values<ECLIC::CLICINTATTR_49, 0, 1, ReadWriteMode, ECLICCLICINTATTR_49Base> ;
    using TRIG = ECLIC_CLICINTATTR_49_TRIG_Values<ECLIC::CLICINTATTR_49, 1, 2, ReadWriteMode, ECLICCLICINTATTR_49Base> ;
    using FieldValues = ECLIC_CLICINTATTR_49_TRIG_Values<ECLIC::CLICINTATTR_49, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_49Pack  = Register<0xD20010C6, 8, ReadWriteMode, ECLICCLICINTATTR_49Base, T...> ;

  struct ECLICCLICINTATTR_50Base {} ;

  struct CLICINTATTR_50 : public RegisterBase<0xD20010CA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_50_SHV_Values<ECLIC::CLICINTATTR_50, 0, 1, ReadWriteMode, ECLICCLICINTATTR_50Base> ;
    using TRIG = ECLIC_CLICINTATTR_50_TRIG_Values<ECLIC::CLICINTATTR_50, 1, 2, ReadWriteMode, ECLICCLICINTATTR_50Base> ;
    using FieldValues = ECLIC_CLICINTATTR_50_TRIG_Values<ECLIC::CLICINTATTR_50, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_50Pack  = Register<0xD20010CA, 8, ReadWriteMode, ECLICCLICINTATTR_50Base, T...> ;

  struct ECLICCLICINTATTR_51Base {} ;

  struct CLICINTATTR_51 : public RegisterBase<0xD20010CE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_51_SHV_Values<ECLIC::CLICINTATTR_51, 0, 1, ReadWriteMode, ECLICCLICINTATTR_51Base> ;
    using TRIG = ECLIC_CLICINTATTR_51_TRIG_Values<ECLIC::CLICINTATTR_51, 1, 2, ReadWriteMode, ECLICCLICINTATTR_51Base> ;
    using FieldValues = ECLIC_CLICINTATTR_51_TRIG_Values<ECLIC::CLICINTATTR_51, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_51Pack  = Register<0xD20010CE, 8, ReadWriteMode, ECLICCLICINTATTR_51Base, T...> ;

  struct ECLICCLICINTATTR_52Base {} ;

  struct CLICINTATTR_52 : public RegisterBase<0xD20010D2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_52_SHV_Values<ECLIC::CLICINTATTR_52, 0, 1, ReadWriteMode, ECLICCLICINTATTR_52Base> ;
    using TRIG = ECLIC_CLICINTATTR_52_TRIG_Values<ECLIC::CLICINTATTR_52, 1, 2, ReadWriteMode, ECLICCLICINTATTR_52Base> ;
    using FieldValues = ECLIC_CLICINTATTR_52_TRIG_Values<ECLIC::CLICINTATTR_52, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_52Pack  = Register<0xD20010D2, 8, ReadWriteMode, ECLICCLICINTATTR_52Base, T...> ;

  struct ECLICCLICINTATTR_53Base {} ;

  struct CLICINTATTR_53 : public RegisterBase<0xD20010D6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_53_SHV_Values<ECLIC::CLICINTATTR_53, 0, 1, ReadWriteMode, ECLICCLICINTATTR_53Base> ;
    using TRIG = ECLIC_CLICINTATTR_53_TRIG_Values<ECLIC::CLICINTATTR_53, 1, 2, ReadWriteMode, ECLICCLICINTATTR_53Base> ;
    using FieldValues = ECLIC_CLICINTATTR_53_TRIG_Values<ECLIC::CLICINTATTR_53, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_53Pack  = Register<0xD20010D6, 8, ReadWriteMode, ECLICCLICINTATTR_53Base, T...> ;

  struct ECLICCLICINTATTR_54Base {} ;

  struct CLICINTATTR_54 : public RegisterBase<0xD20010DA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_54_SHV_Values<ECLIC::CLICINTATTR_54, 0, 1, ReadWriteMode, ECLICCLICINTATTR_54Base> ;
    using TRIG = ECLIC_CLICINTATTR_54_TRIG_Values<ECLIC::CLICINTATTR_54, 1, 2, ReadWriteMode, ECLICCLICINTATTR_54Base> ;
    using FieldValues = ECLIC_CLICINTATTR_54_TRIG_Values<ECLIC::CLICINTATTR_54, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_54Pack  = Register<0xD20010DA, 8, ReadWriteMode, ECLICCLICINTATTR_54Base, T...> ;

  struct ECLICCLICINTATTR_55Base {} ;

  struct CLICINTATTR_55 : public RegisterBase<0xD20010DE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_55_SHV_Values<ECLIC::CLICINTATTR_55, 0, 1, ReadWriteMode, ECLICCLICINTATTR_55Base> ;
    using TRIG = ECLIC_CLICINTATTR_55_TRIG_Values<ECLIC::CLICINTATTR_55, 1, 2, ReadWriteMode, ECLICCLICINTATTR_55Base> ;
    using FieldValues = ECLIC_CLICINTATTR_55_TRIG_Values<ECLIC::CLICINTATTR_55, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_55Pack  = Register<0xD20010DE, 8, ReadWriteMode, ECLICCLICINTATTR_55Base, T...> ;

  struct ECLICCLICINTATTR_56Base {} ;

  struct CLICINTATTR_56 : public RegisterBase<0xD20010E2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_56_SHV_Values<ECLIC::CLICINTATTR_56, 0, 1, ReadWriteMode, ECLICCLICINTATTR_56Base> ;
    using TRIG = ECLIC_CLICINTATTR_56_TRIG_Values<ECLIC::CLICINTATTR_56, 1, 2, ReadWriteMode, ECLICCLICINTATTR_56Base> ;
    using FieldValues = ECLIC_CLICINTATTR_56_TRIG_Values<ECLIC::CLICINTATTR_56, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_56Pack  = Register<0xD20010E2, 8, ReadWriteMode, ECLICCLICINTATTR_56Base, T...> ;

  struct ECLICCLICINTATTR_57Base {} ;

  struct CLICINTATTR_57 : public RegisterBase<0xD20010E6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_57_SHV_Values<ECLIC::CLICINTATTR_57, 0, 1, ReadWriteMode, ECLICCLICINTATTR_57Base> ;
    using TRIG = ECLIC_CLICINTATTR_57_TRIG_Values<ECLIC::CLICINTATTR_57, 1, 2, ReadWriteMode, ECLICCLICINTATTR_57Base> ;
    using FieldValues = ECLIC_CLICINTATTR_57_TRIG_Values<ECLIC::CLICINTATTR_57, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_57Pack  = Register<0xD20010E6, 8, ReadWriteMode, ECLICCLICINTATTR_57Base, T...> ;

  struct ECLICCLICINTATTR_58Base {} ;

  struct CLICINTATTR_58 : public RegisterBase<0xD20010EA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_58_SHV_Values<ECLIC::CLICINTATTR_58, 0, 1, ReadWriteMode, ECLICCLICINTATTR_58Base> ;
    using TRIG = ECLIC_CLICINTATTR_58_TRIG_Values<ECLIC::CLICINTATTR_58, 1, 2, ReadWriteMode, ECLICCLICINTATTR_58Base> ;
    using FieldValues = ECLIC_CLICINTATTR_58_TRIG_Values<ECLIC::CLICINTATTR_58, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_58Pack  = Register<0xD20010EA, 8, ReadWriteMode, ECLICCLICINTATTR_58Base, T...> ;

  struct ECLICCLICINTATTR_59Base {} ;

  struct CLICINTATTR_59 : public RegisterBase<0xD20010EE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_59_SHV_Values<ECLIC::CLICINTATTR_59, 0, 1, ReadWriteMode, ECLICCLICINTATTR_59Base> ;
    using TRIG = ECLIC_CLICINTATTR_59_TRIG_Values<ECLIC::CLICINTATTR_59, 1, 2, ReadWriteMode, ECLICCLICINTATTR_59Base> ;
    using FieldValues = ECLIC_CLICINTATTR_59_TRIG_Values<ECLIC::CLICINTATTR_59, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_59Pack  = Register<0xD20010EE, 8, ReadWriteMode, ECLICCLICINTATTR_59Base, T...> ;

  struct ECLICCLICINTATTR_60Base {} ;

  struct CLICINTATTR_60 : public RegisterBase<0xD20010F2, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_60_SHV_Values<ECLIC::CLICINTATTR_60, 0, 1, ReadWriteMode, ECLICCLICINTATTR_60Base> ;
    using TRIG = ECLIC_CLICINTATTR_60_TRIG_Values<ECLIC::CLICINTATTR_60, 1, 2, ReadWriteMode, ECLICCLICINTATTR_60Base> ;
    using FieldValues = ECLIC_CLICINTATTR_60_TRIG_Values<ECLIC::CLICINTATTR_60, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_60Pack  = Register<0xD20010F2, 8, ReadWriteMode, ECLICCLICINTATTR_60Base, T...> ;

  struct ECLICCLICINTATTR_61Base {} ;

  struct CLICINTATTR_61 : public RegisterBase<0xD20010F6, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_61_SHV_Values<ECLIC::CLICINTATTR_61, 0, 1, ReadWriteMode, ECLICCLICINTATTR_61Base> ;
    using TRIG = ECLIC_CLICINTATTR_61_TRIG_Values<ECLIC::CLICINTATTR_61, 1, 2, ReadWriteMode, ECLICCLICINTATTR_61Base> ;
    using FieldValues = ECLIC_CLICINTATTR_61_TRIG_Values<ECLIC::CLICINTATTR_61, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_61Pack  = Register<0xD20010F6, 8, ReadWriteMode, ECLICCLICINTATTR_61Base, T...> ;

  struct ECLICCLICINTATTR_62Base {} ;

  struct CLICINTATTR_62 : public RegisterBase<0xD20010FA, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_62_SHV_Values<ECLIC::CLICINTATTR_62, 0, 1, ReadWriteMode, ECLICCLICINTATTR_62Base> ;
    using TRIG = ECLIC_CLICINTATTR_62_TRIG_Values<ECLIC::CLICINTATTR_62, 1, 2, ReadWriteMode, ECLICCLICINTATTR_62Base> ;
    using FieldValues = ECLIC_CLICINTATTR_62_TRIG_Values<ECLIC::CLICINTATTR_62, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_62Pack  = Register<0xD20010FA, 8, ReadWriteMode, ECLICCLICINTATTR_62Base, T...> ;

  struct ECLICCLICINTATTR_63Base {} ;

  struct CLICINTATTR_63 : public RegisterBase<0xD20010FE, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_63_SHV_Values<ECLIC::CLICINTATTR_63, 0, 1, ReadWriteMode, ECLICCLICINTATTR_63Base> ;
    using TRIG = ECLIC_CLICINTATTR_63_TRIG_Values<ECLIC::CLICINTATTR_63, 1, 2, ReadWriteMode, ECLICCLICINTATTR_63Base> ;
    using FieldValues = ECLIC_CLICINTATTR_63_TRIG_Values<ECLIC::CLICINTATTR_63, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_63Pack  = Register<0xD20010FE, 8, ReadWriteMode, ECLICCLICINTATTR_63Base, T...> ;

  struct ECLICCLICINTATTR_64Base {} ;

  struct CLICINTATTR_64 : public RegisterBase<0xD2001102, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_64_SHV_Values<ECLIC::CLICINTATTR_64, 0, 1, ReadWriteMode, ECLICCLICINTATTR_64Base> ;
    using TRIG = ECLIC_CLICINTATTR_64_TRIG_Values<ECLIC::CLICINTATTR_64, 1, 2, ReadWriteMode, ECLICCLICINTATTR_64Base> ;
    using FieldValues = ECLIC_CLICINTATTR_64_TRIG_Values<ECLIC::CLICINTATTR_64, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_64Pack  = Register<0xD2001102, 8, ReadWriteMode, ECLICCLICINTATTR_64Base, T...> ;

  struct ECLICCLICINTATTR_65Base {} ;

  struct CLICINTATTR_65 : public RegisterBase<0xD2001106, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_65_SHV_Values<ECLIC::CLICINTATTR_65, 0, 1, ReadWriteMode, ECLICCLICINTATTR_65Base> ;
    using TRIG = ECLIC_CLICINTATTR_65_TRIG_Values<ECLIC::CLICINTATTR_65, 1, 2, ReadWriteMode, ECLICCLICINTATTR_65Base> ;
    using FieldValues = ECLIC_CLICINTATTR_65_TRIG_Values<ECLIC::CLICINTATTR_65, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_65Pack  = Register<0xD2001106, 8, ReadWriteMode, ECLICCLICINTATTR_65Base, T...> ;

  struct ECLICCLICINTATTR_66Base {} ;

  struct CLICINTATTR_66 : public RegisterBase<0xD200110A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_66_SHV_Values<ECLIC::CLICINTATTR_66, 0, 1, ReadWriteMode, ECLICCLICINTATTR_66Base> ;
    using TRIG = ECLIC_CLICINTATTR_66_TRIG_Values<ECLIC::CLICINTATTR_66, 1, 2, ReadWriteMode, ECLICCLICINTATTR_66Base> ;
    using FieldValues = ECLIC_CLICINTATTR_66_TRIG_Values<ECLIC::CLICINTATTR_66, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_66Pack  = Register<0xD200110A, 8, ReadWriteMode, ECLICCLICINTATTR_66Base, T...> ;

  struct ECLICCLICINTATTR_67Base {} ;

  struct CLICINTATTR_67 : public RegisterBase<0xD200110E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_67_SHV_Values<ECLIC::CLICINTATTR_67, 0, 1, ReadWriteMode, ECLICCLICINTATTR_67Base> ;
    using TRIG = ECLIC_CLICINTATTR_67_TRIG_Values<ECLIC::CLICINTATTR_67, 1, 2, ReadWriteMode, ECLICCLICINTATTR_67Base> ;
    using FieldValues = ECLIC_CLICINTATTR_67_TRIG_Values<ECLIC::CLICINTATTR_67, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_67Pack  = Register<0xD200110E, 8, ReadWriteMode, ECLICCLICINTATTR_67Base, T...> ;

  struct ECLICCLICINTATTR_68Base {} ;

  struct CLICINTATTR_68 : public RegisterBase<0xD2001112, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_68_SHV_Values<ECLIC::CLICINTATTR_68, 0, 1, ReadWriteMode, ECLICCLICINTATTR_68Base> ;
    using TRIG = ECLIC_CLICINTATTR_68_TRIG_Values<ECLIC::CLICINTATTR_68, 1, 2, ReadWriteMode, ECLICCLICINTATTR_68Base> ;
    using FieldValues = ECLIC_CLICINTATTR_68_TRIG_Values<ECLIC::CLICINTATTR_68, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_68Pack  = Register<0xD2001112, 8, ReadWriteMode, ECLICCLICINTATTR_68Base, T...> ;

  struct ECLICCLICINTATTR_69Base {} ;

  struct CLICINTATTR_69 : public RegisterBase<0xD2001116, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_69_SHV_Values<ECLIC::CLICINTATTR_69, 0, 1, ReadWriteMode, ECLICCLICINTATTR_69Base> ;
    using TRIG = ECLIC_CLICINTATTR_69_TRIG_Values<ECLIC::CLICINTATTR_69, 1, 2, ReadWriteMode, ECLICCLICINTATTR_69Base> ;
    using FieldValues = ECLIC_CLICINTATTR_69_TRIG_Values<ECLIC::CLICINTATTR_69, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_69Pack  = Register<0xD2001116, 8, ReadWriteMode, ECLICCLICINTATTR_69Base, T...> ;

  struct ECLICCLICINTATTR_70Base {} ;

  struct CLICINTATTR_70 : public RegisterBase<0xD200111A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_70_SHV_Values<ECLIC::CLICINTATTR_70, 0, 1, ReadWriteMode, ECLICCLICINTATTR_70Base> ;
    using TRIG = ECLIC_CLICINTATTR_70_TRIG_Values<ECLIC::CLICINTATTR_70, 1, 2, ReadWriteMode, ECLICCLICINTATTR_70Base> ;
    using FieldValues = ECLIC_CLICINTATTR_70_TRIG_Values<ECLIC::CLICINTATTR_70, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_70Pack  = Register<0xD200111A, 8, ReadWriteMode, ECLICCLICINTATTR_70Base, T...> ;

  struct ECLICCLICINTATTR_71Base {} ;

  struct CLICINTATTR_71 : public RegisterBase<0xD200111E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_71_SHV_Values<ECLIC::CLICINTATTR_71, 0, 1, ReadWriteMode, ECLICCLICINTATTR_71Base> ;
    using TRIG = ECLIC_CLICINTATTR_71_TRIG_Values<ECLIC::CLICINTATTR_71, 1, 2, ReadWriteMode, ECLICCLICINTATTR_71Base> ;
    using FieldValues = ECLIC_CLICINTATTR_71_TRIG_Values<ECLIC::CLICINTATTR_71, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_71Pack  = Register<0xD200111E, 8, ReadWriteMode, ECLICCLICINTATTR_71Base, T...> ;

  struct ECLICCLICINTATTR_72Base {} ;

  struct CLICINTATTR_72 : public RegisterBase<0xD2001122, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_72_SHV_Values<ECLIC::CLICINTATTR_72, 0, 1, ReadWriteMode, ECLICCLICINTATTR_72Base> ;
    using TRIG = ECLIC_CLICINTATTR_72_TRIG_Values<ECLIC::CLICINTATTR_72, 1, 2, ReadWriteMode, ECLICCLICINTATTR_72Base> ;
    using FieldValues = ECLIC_CLICINTATTR_72_TRIG_Values<ECLIC::CLICINTATTR_72, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_72Pack  = Register<0xD2001122, 8, ReadWriteMode, ECLICCLICINTATTR_72Base, T...> ;

  struct ECLICCLICINTATTR_73Base {} ;

  struct CLICINTATTR_73 : public RegisterBase<0xD2001126, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_73_SHV_Values<ECLIC::CLICINTATTR_73, 0, 1, ReadWriteMode, ECLICCLICINTATTR_73Base> ;
    using TRIG = ECLIC_CLICINTATTR_73_TRIG_Values<ECLIC::CLICINTATTR_73, 1, 2, ReadWriteMode, ECLICCLICINTATTR_73Base> ;
    using FieldValues = ECLIC_CLICINTATTR_73_TRIG_Values<ECLIC::CLICINTATTR_73, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_73Pack  = Register<0xD2001126, 8, ReadWriteMode, ECLICCLICINTATTR_73Base, T...> ;

  struct ECLICCLICINTATTR_74Base {} ;

  struct CLICINTATTR_74 : public RegisterBase<0xD200112A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_74_SHV_Values<ECLIC::CLICINTATTR_74, 0, 1, ReadWriteMode, ECLICCLICINTATTR_74Base> ;
    using TRIG = ECLIC_CLICINTATTR_74_TRIG_Values<ECLIC::CLICINTATTR_74, 1, 2, ReadWriteMode, ECLICCLICINTATTR_74Base> ;
    using FieldValues = ECLIC_CLICINTATTR_74_TRIG_Values<ECLIC::CLICINTATTR_74, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_74Pack  = Register<0xD200112A, 8, ReadWriteMode, ECLICCLICINTATTR_74Base, T...> ;

  struct ECLICCLICINTATTR_75Base {} ;

  struct CLICINTATTR_75 : public RegisterBase<0xD200112E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_75_SHV_Values<ECLIC::CLICINTATTR_75, 0, 1, ReadWriteMode, ECLICCLICINTATTR_75Base> ;
    using TRIG = ECLIC_CLICINTATTR_75_TRIG_Values<ECLIC::CLICINTATTR_75, 1, 2, ReadWriteMode, ECLICCLICINTATTR_75Base> ;
    using FieldValues = ECLIC_CLICINTATTR_75_TRIG_Values<ECLIC::CLICINTATTR_75, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_75Pack  = Register<0xD200112E, 8, ReadWriteMode, ECLICCLICINTATTR_75Base, T...> ;

  struct ECLICCLICINTATTR_76Base {} ;

  struct CLICINTATTR_76 : public RegisterBase<0xD2001132, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_76_SHV_Values<ECLIC::CLICINTATTR_76, 0, 1, ReadWriteMode, ECLICCLICINTATTR_76Base> ;
    using TRIG = ECLIC_CLICINTATTR_76_TRIG_Values<ECLIC::CLICINTATTR_76, 1, 2, ReadWriteMode, ECLICCLICINTATTR_76Base> ;
    using FieldValues = ECLIC_CLICINTATTR_76_TRIG_Values<ECLIC::CLICINTATTR_76, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_76Pack  = Register<0xD2001132, 8, ReadWriteMode, ECLICCLICINTATTR_76Base, T...> ;

  struct ECLICCLICINTATTR_77Base {} ;

  struct CLICINTATTR_77 : public RegisterBase<0xD2001136, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_77_SHV_Values<ECLIC::CLICINTATTR_77, 0, 1, ReadWriteMode, ECLICCLICINTATTR_77Base> ;
    using TRIG = ECLIC_CLICINTATTR_77_TRIG_Values<ECLIC::CLICINTATTR_77, 1, 2, ReadWriteMode, ECLICCLICINTATTR_77Base> ;
    using FieldValues = ECLIC_CLICINTATTR_77_TRIG_Values<ECLIC::CLICINTATTR_77, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_77Pack  = Register<0xD2001136, 8, ReadWriteMode, ECLICCLICINTATTR_77Base, T...> ;

  struct ECLICCLICINTATTR_78Base {} ;

  struct CLICINTATTR_78 : public RegisterBase<0xD200113A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_78_SHV_Values<ECLIC::CLICINTATTR_78, 0, 1, ReadWriteMode, ECLICCLICINTATTR_78Base> ;
    using TRIG = ECLIC_CLICINTATTR_78_TRIG_Values<ECLIC::CLICINTATTR_78, 1, 2, ReadWriteMode, ECLICCLICINTATTR_78Base> ;
    using FieldValues = ECLIC_CLICINTATTR_78_TRIG_Values<ECLIC::CLICINTATTR_78, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_78Pack  = Register<0xD200113A, 8, ReadWriteMode, ECLICCLICINTATTR_78Base, T...> ;

  struct ECLICCLICINTATTR_79Base {} ;

  struct CLICINTATTR_79 : public RegisterBase<0xD200113E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_79_SHV_Values<ECLIC::CLICINTATTR_79, 0, 1, ReadWriteMode, ECLICCLICINTATTR_79Base> ;
    using TRIG = ECLIC_CLICINTATTR_79_TRIG_Values<ECLIC::CLICINTATTR_79, 1, 2, ReadWriteMode, ECLICCLICINTATTR_79Base> ;
    using FieldValues = ECLIC_CLICINTATTR_79_TRIG_Values<ECLIC::CLICINTATTR_79, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_79Pack  = Register<0xD200113E, 8, ReadWriteMode, ECLICCLICINTATTR_79Base, T...> ;

  struct ECLICCLICINTATTR_80Base {} ;

  struct CLICINTATTR_80 : public RegisterBase<0xD2001142, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_80_SHV_Values<ECLIC::CLICINTATTR_80, 0, 1, ReadWriteMode, ECLICCLICINTATTR_80Base> ;
    using TRIG = ECLIC_CLICINTATTR_80_TRIG_Values<ECLIC::CLICINTATTR_80, 1, 2, ReadWriteMode, ECLICCLICINTATTR_80Base> ;
    using FieldValues = ECLIC_CLICINTATTR_80_TRIG_Values<ECLIC::CLICINTATTR_80, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_80Pack  = Register<0xD2001142, 8, ReadWriteMode, ECLICCLICINTATTR_80Base, T...> ;

  struct ECLICCLICINTATTR_81Base {} ;

  struct CLICINTATTR_81 : public RegisterBase<0xD2001146, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_81_SHV_Values<ECLIC::CLICINTATTR_81, 0, 1, ReadWriteMode, ECLICCLICINTATTR_81Base> ;
    using TRIG = ECLIC_CLICINTATTR_81_TRIG_Values<ECLIC::CLICINTATTR_81, 1, 2, ReadWriteMode, ECLICCLICINTATTR_81Base> ;
    using FieldValues = ECLIC_CLICINTATTR_81_TRIG_Values<ECLIC::CLICINTATTR_81, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_81Pack  = Register<0xD2001146, 8, ReadWriteMode, ECLICCLICINTATTR_81Base, T...> ;

  struct ECLICCLICINTATTR_82Base {} ;

  struct CLICINTATTR_82 : public RegisterBase<0xD200114A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_82_SHV_Values<ECLIC::CLICINTATTR_82, 0, 1, ReadWriteMode, ECLICCLICINTATTR_82Base> ;
    using TRIG = ECLIC_CLICINTATTR_82_TRIG_Values<ECLIC::CLICINTATTR_82, 1, 2, ReadWriteMode, ECLICCLICINTATTR_82Base> ;
    using FieldValues = ECLIC_CLICINTATTR_82_TRIG_Values<ECLIC::CLICINTATTR_82, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_82Pack  = Register<0xD200114A, 8, ReadWriteMode, ECLICCLICINTATTR_82Base, T...> ;

  struct ECLICCLICINTATTR_83Base {} ;

  struct CLICINTATTR_83 : public RegisterBase<0xD200114E, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_83_SHV_Values<ECLIC::CLICINTATTR_83, 0, 1, ReadWriteMode, ECLICCLICINTATTR_83Base> ;
    using TRIG = ECLIC_CLICINTATTR_83_TRIG_Values<ECLIC::CLICINTATTR_83, 1, 2, ReadWriteMode, ECLICCLICINTATTR_83Base> ;
    using FieldValues = ECLIC_CLICINTATTR_83_TRIG_Values<ECLIC::CLICINTATTR_83, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_83Pack  = Register<0xD200114E, 8, ReadWriteMode, ECLICCLICINTATTR_83Base, T...> ;

  struct ECLICCLICINTATTR_84Base {} ;

  struct CLICINTATTR_84 : public RegisterBase<0xD2001152, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_84_SHV_Values<ECLIC::CLICINTATTR_84, 0, 1, ReadWriteMode, ECLICCLICINTATTR_84Base> ;
    using TRIG = ECLIC_CLICINTATTR_84_TRIG_Values<ECLIC::CLICINTATTR_84, 1, 2, ReadWriteMode, ECLICCLICINTATTR_84Base> ;
    using FieldValues = ECLIC_CLICINTATTR_84_TRIG_Values<ECLIC::CLICINTATTR_84, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_84Pack  = Register<0xD2001152, 8, ReadWriteMode, ECLICCLICINTATTR_84Base, T...> ;

  struct ECLICCLICINTATTR_85Base {} ;

  struct CLICINTATTR_85 : public RegisterBase<0xD2001156, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_85_SHV_Values<ECLIC::CLICINTATTR_85, 0, 1, ReadWriteMode, ECLICCLICINTATTR_85Base> ;
    using TRIG = ECLIC_CLICINTATTR_85_TRIG_Values<ECLIC::CLICINTATTR_85, 1, 2, ReadWriteMode, ECLICCLICINTATTR_85Base> ;
    using FieldValues = ECLIC_CLICINTATTR_85_TRIG_Values<ECLIC::CLICINTATTR_85, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_85Pack  = Register<0xD2001156, 8, ReadWriteMode, ECLICCLICINTATTR_85Base, T...> ;

  struct ECLICCLICINTATTR_86Base {} ;

  struct CLICINTATTR_86 : public RegisterBase<0xD200115A, 8, ReadWriteMode>
  {
    using SHV = ECLIC_CLICINTATTR_86_SHV_Values<ECLIC::CLICINTATTR_86, 0, 1, ReadWriteMode, ECLICCLICINTATTR_86Base> ;
    using TRIG = ECLIC_CLICINTATTR_86_TRIG_Values<ECLIC::CLICINTATTR_86, 1, 2, ReadWriteMode, ECLICCLICINTATTR_86Base> ;
    using FieldValues = ECLIC_CLICINTATTR_86_TRIG_Values<ECLIC::CLICINTATTR_86, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTATTR_86Pack  = Register<0xD200115A, 8, ReadWriteMode, ECLICCLICINTATTR_86Base, T...> ;

  struct ECLICCLICINTCTL_0Base {} ;

  struct CLICINTCTL_0 : public RegisterBase<0xD2001003, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_0_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_0, 0, 8, ReadWriteMode, ECLICCLICINTCTL_0Base> ;
    using FieldValues = ECLIC_CLICINTCTL_0_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_0Pack  = Register<0xD2001003, 8, ReadWriteMode, ECLICCLICINTCTL_0Base, T...> ;

  struct ECLICCLICINTCTL_1Base {} ;

  struct CLICINTCTL_1 : public RegisterBase<0xD2001007, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_1_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_1, 0, 8, ReadWriteMode, ECLICCLICINTCTL_1Base> ;
    using FieldValues = ECLIC_CLICINTCTL_1_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_1Pack  = Register<0xD2001007, 8, ReadWriteMode, ECLICCLICINTCTL_1Base, T...> ;

  struct ECLICCLICINTCTL_2Base {} ;

  struct CLICINTCTL_2 : public RegisterBase<0xD200100B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_2_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_2, 0, 8, ReadWriteMode, ECLICCLICINTCTL_2Base> ;
    using FieldValues = ECLIC_CLICINTCTL_2_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_2Pack  = Register<0xD200100B, 8, ReadWriteMode, ECLICCLICINTCTL_2Base, T...> ;

  struct ECLICCLICINTCTL_3Base {} ;

  struct CLICINTCTL_3 : public RegisterBase<0xD200100F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_3_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_3, 0, 8, ReadWriteMode, ECLICCLICINTCTL_3Base> ;
    using FieldValues = ECLIC_CLICINTCTL_3_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_3Pack  = Register<0xD200100F, 8, ReadWriteMode, ECLICCLICINTCTL_3Base, T...> ;

  struct ECLICCLICINTCTL_4Base {} ;

  struct CLICINTCTL_4 : public RegisterBase<0xD2001013, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_4_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_4, 0, 8, ReadWriteMode, ECLICCLICINTCTL_4Base> ;
    using FieldValues = ECLIC_CLICINTCTL_4_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_4Pack  = Register<0xD2001013, 8, ReadWriteMode, ECLICCLICINTCTL_4Base, T...> ;

  struct ECLICCLICINTCTL_5Base {} ;

  struct CLICINTCTL_5 : public RegisterBase<0xD2001017, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_5_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_5, 0, 8, ReadWriteMode, ECLICCLICINTCTL_5Base> ;
    using FieldValues = ECLIC_CLICINTCTL_5_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_5Pack  = Register<0xD2001017, 8, ReadWriteMode, ECLICCLICINTCTL_5Base, T...> ;

  struct ECLICCLICINTCTL_6Base {} ;

  struct CLICINTCTL_6 : public RegisterBase<0xD200101B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_6_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_6, 0, 8, ReadWriteMode, ECLICCLICINTCTL_6Base> ;
    using FieldValues = ECLIC_CLICINTCTL_6_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_6Pack  = Register<0xD200101B, 8, ReadWriteMode, ECLICCLICINTCTL_6Base, T...> ;

  struct ECLICCLICINTCTL_7Base {} ;

  struct CLICINTCTL_7 : public RegisterBase<0xD200101F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_7_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_7, 0, 8, ReadWriteMode, ECLICCLICINTCTL_7Base> ;
    using FieldValues = ECLIC_CLICINTCTL_7_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_7Pack  = Register<0xD200101F, 8, ReadWriteMode, ECLICCLICINTCTL_7Base, T...> ;

  struct ECLICCLICINTCTL_8Base {} ;

  struct CLICINTCTL_8 : public RegisterBase<0xD2001023, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_8_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_8, 0, 8, ReadWriteMode, ECLICCLICINTCTL_8Base> ;
    using FieldValues = ECLIC_CLICINTCTL_8_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_8Pack  = Register<0xD2001023, 8, ReadWriteMode, ECLICCLICINTCTL_8Base, T...> ;

  struct ECLICCLICINTCTL_9Base {} ;

  struct CLICINTCTL_9 : public RegisterBase<0xD2001027, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_9_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_9, 0, 8, ReadWriteMode, ECLICCLICINTCTL_9Base> ;
    using FieldValues = ECLIC_CLICINTCTL_9_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_9Pack  = Register<0xD2001027, 8, ReadWriteMode, ECLICCLICINTCTL_9Base, T...> ;

  struct ECLICCLICINTCTL_10Base {} ;

  struct CLICINTCTL_10 : public RegisterBase<0xD200102B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_10_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_10, 0, 8, ReadWriteMode, ECLICCLICINTCTL_10Base> ;
    using FieldValues = ECLIC_CLICINTCTL_10_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_10Pack  = Register<0xD200102B, 8, ReadWriteMode, ECLICCLICINTCTL_10Base, T...> ;

  struct ECLICCLICINTCTL_11Base {} ;

  struct CLICINTCTL_11 : public RegisterBase<0xD200102F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_11_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_11, 0, 8, ReadWriteMode, ECLICCLICINTCTL_11Base> ;
    using FieldValues = ECLIC_CLICINTCTL_11_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_11Pack  = Register<0xD200102F, 8, ReadWriteMode, ECLICCLICINTCTL_11Base, T...> ;

  struct ECLICCLICINTCTL_12Base {} ;

  struct CLICINTCTL_12 : public RegisterBase<0xD2001033, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_12_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_12, 0, 8, ReadWriteMode, ECLICCLICINTCTL_12Base> ;
    using FieldValues = ECLIC_CLICINTCTL_12_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_12Pack  = Register<0xD2001033, 8, ReadWriteMode, ECLICCLICINTCTL_12Base, T...> ;

  struct ECLICCLICINTCTL_13Base {} ;

  struct CLICINTCTL_13 : public RegisterBase<0xD2001037, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_13_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_13, 0, 8, ReadWriteMode, ECLICCLICINTCTL_13Base> ;
    using FieldValues = ECLIC_CLICINTCTL_13_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_13Pack  = Register<0xD2001037, 8, ReadWriteMode, ECLICCLICINTCTL_13Base, T...> ;

  struct ECLICCLICINTCTL_14Base {} ;

  struct CLICINTCTL_14 : public RegisterBase<0xD200103B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_14_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_14, 0, 8, ReadWriteMode, ECLICCLICINTCTL_14Base> ;
    using FieldValues = ECLIC_CLICINTCTL_14_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_14Pack  = Register<0xD200103B, 8, ReadWriteMode, ECLICCLICINTCTL_14Base, T...> ;

  struct ECLICCLICINTCTL_15Base {} ;

  struct CLICINTCTL_15 : public RegisterBase<0xD200103F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_15_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_15, 0, 8, ReadWriteMode, ECLICCLICINTCTL_15Base> ;
    using FieldValues = ECLIC_CLICINTCTL_15_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_15Pack  = Register<0xD200103F, 8, ReadWriteMode, ECLICCLICINTCTL_15Base, T...> ;

  struct ECLICCLICINTCTL_16Base {} ;

  struct CLICINTCTL_16 : public RegisterBase<0xD2001043, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_16_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_16, 0, 8, ReadWriteMode, ECLICCLICINTCTL_16Base> ;
    using FieldValues = ECLIC_CLICINTCTL_16_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_16Pack  = Register<0xD2001043, 8, ReadWriteMode, ECLICCLICINTCTL_16Base, T...> ;

  struct ECLICCLICINTCTL_17Base {} ;

  struct CLICINTCTL_17 : public RegisterBase<0xD2001047, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_17_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_17, 0, 8, ReadWriteMode, ECLICCLICINTCTL_17Base> ;
    using FieldValues = ECLIC_CLICINTCTL_17_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_17Pack  = Register<0xD2001047, 8, ReadWriteMode, ECLICCLICINTCTL_17Base, T...> ;

  struct ECLICCLICINTCTL_18Base {} ;

  struct CLICINTCTL_18 : public RegisterBase<0xD200104B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_18_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_18, 0, 8, ReadWriteMode, ECLICCLICINTCTL_18Base> ;
    using FieldValues = ECLIC_CLICINTCTL_18_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_18Pack  = Register<0xD200104B, 8, ReadWriteMode, ECLICCLICINTCTL_18Base, T...> ;

  struct ECLICCLICINTCTL_19Base {} ;

  struct CLICINTCTL_19 : public RegisterBase<0xD200104F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_19_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_19, 0, 8, ReadWriteMode, ECLICCLICINTCTL_19Base> ;
    using FieldValues = ECLIC_CLICINTCTL_19_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_19Pack  = Register<0xD200104F, 8, ReadWriteMode, ECLICCLICINTCTL_19Base, T...> ;

  struct ECLICCLICINTCTL_20Base {} ;

  struct CLICINTCTL_20 : public RegisterBase<0xD2001053, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_20_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_20, 0, 8, ReadWriteMode, ECLICCLICINTCTL_20Base> ;
    using FieldValues = ECLIC_CLICINTCTL_20_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_20Pack  = Register<0xD2001053, 8, ReadWriteMode, ECLICCLICINTCTL_20Base, T...> ;

  struct ECLICCLICINTCTL_21Base {} ;

  struct CLICINTCTL_21 : public RegisterBase<0xD2001057, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_21_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_21, 0, 8, ReadWriteMode, ECLICCLICINTCTL_21Base> ;
    using FieldValues = ECLIC_CLICINTCTL_21_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_21Pack  = Register<0xD2001057, 8, ReadWriteMode, ECLICCLICINTCTL_21Base, T...> ;

  struct ECLICCLICINTCTL_22Base {} ;

  struct CLICINTCTL_22 : public RegisterBase<0xD200105B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_22_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_22, 0, 8, ReadWriteMode, ECLICCLICINTCTL_22Base> ;
    using FieldValues = ECLIC_CLICINTCTL_22_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_22Pack  = Register<0xD200105B, 8, ReadWriteMode, ECLICCLICINTCTL_22Base, T...> ;

  struct ECLICCLICINTCTL_23Base {} ;

  struct CLICINTCTL_23 : public RegisterBase<0xD200105F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_23_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_23, 0, 8, ReadWriteMode, ECLICCLICINTCTL_23Base> ;
    using FieldValues = ECLIC_CLICINTCTL_23_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_23Pack  = Register<0xD200105F, 8, ReadWriteMode, ECLICCLICINTCTL_23Base, T...> ;

  struct ECLICCLICINTCTL_24Base {} ;

  struct CLICINTCTL_24 : public RegisterBase<0xD2001063, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_24_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_24, 0, 8, ReadWriteMode, ECLICCLICINTCTL_24Base> ;
    using FieldValues = ECLIC_CLICINTCTL_24_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_24Pack  = Register<0xD2001063, 8, ReadWriteMode, ECLICCLICINTCTL_24Base, T...> ;

  struct ECLICCLICINTCTL_25Base {} ;

  struct CLICINTCTL_25 : public RegisterBase<0xD2001067, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_25_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_25, 0, 8, ReadWriteMode, ECLICCLICINTCTL_25Base> ;
    using FieldValues = ECLIC_CLICINTCTL_25_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_25Pack  = Register<0xD2001067, 8, ReadWriteMode, ECLICCLICINTCTL_25Base, T...> ;

  struct ECLICCLICINTCTL_26Base {} ;

  struct CLICINTCTL_26 : public RegisterBase<0xD200106B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_26_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_26, 0, 8, ReadWriteMode, ECLICCLICINTCTL_26Base> ;
    using FieldValues = ECLIC_CLICINTCTL_26_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_26Pack  = Register<0xD200106B, 8, ReadWriteMode, ECLICCLICINTCTL_26Base, T...> ;

  struct ECLICCLICINTCTL_27Base {} ;

  struct CLICINTCTL_27 : public RegisterBase<0xD200106F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_27_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_27, 0, 8, ReadWriteMode, ECLICCLICINTCTL_27Base> ;
    using FieldValues = ECLIC_CLICINTCTL_27_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_27Pack  = Register<0xD200106F, 8, ReadWriteMode, ECLICCLICINTCTL_27Base, T...> ;

  struct ECLICCLICINTCTL_28Base {} ;

  struct CLICINTCTL_28 : public RegisterBase<0xD2001073, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_28_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_28, 0, 8, ReadWriteMode, ECLICCLICINTCTL_28Base> ;
    using FieldValues = ECLIC_CLICINTCTL_28_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_28Pack  = Register<0xD2001073, 8, ReadWriteMode, ECLICCLICINTCTL_28Base, T...> ;

  struct ECLICCLICINTCTL_29Base {} ;

  struct CLICINTCTL_29 : public RegisterBase<0xD2001077, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_29_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_29, 0, 8, ReadWriteMode, ECLICCLICINTCTL_29Base> ;
    using FieldValues = ECLIC_CLICINTCTL_29_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_29Pack  = Register<0xD2001077, 8, ReadWriteMode, ECLICCLICINTCTL_29Base, T...> ;

  struct ECLICCLICINTCTL_30Base {} ;

  struct CLICINTCTL_30 : public RegisterBase<0xD200107B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_30_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_30, 0, 8, ReadWriteMode, ECLICCLICINTCTL_30Base> ;
    using FieldValues = ECLIC_CLICINTCTL_30_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_30Pack  = Register<0xD200107B, 8, ReadWriteMode, ECLICCLICINTCTL_30Base, T...> ;

  struct ECLICCLICINTCTL_31Base {} ;

  struct CLICINTCTL_31 : public RegisterBase<0xD200107F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_31_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_31, 0, 8, ReadWriteMode, ECLICCLICINTCTL_31Base> ;
    using FieldValues = ECLIC_CLICINTCTL_31_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_31Pack  = Register<0xD200107F, 8, ReadWriteMode, ECLICCLICINTCTL_31Base, T...> ;

  struct ECLICCLICINTCTL_32Base {} ;

  struct CLICINTCTL_32 : public RegisterBase<0xD2001083, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_32_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_32, 0, 8, ReadWriteMode, ECLICCLICINTCTL_32Base> ;
    using FieldValues = ECLIC_CLICINTCTL_32_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_32Pack  = Register<0xD2001083, 8, ReadWriteMode, ECLICCLICINTCTL_32Base, T...> ;

  struct ECLICCLICINTCTL_33Base {} ;

  struct CLICINTCTL_33 : public RegisterBase<0xD2001087, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_33_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_33, 0, 8, ReadWriteMode, ECLICCLICINTCTL_33Base> ;
    using FieldValues = ECLIC_CLICINTCTL_33_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_33Pack  = Register<0xD2001087, 8, ReadWriteMode, ECLICCLICINTCTL_33Base, T...> ;

  struct ECLICCLICINTCTL_34Base {} ;

  struct CLICINTCTL_34 : public RegisterBase<0xD200108B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_34_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_34, 0, 8, ReadWriteMode, ECLICCLICINTCTL_34Base> ;
    using FieldValues = ECLIC_CLICINTCTL_34_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_34Pack  = Register<0xD200108B, 8, ReadWriteMode, ECLICCLICINTCTL_34Base, T...> ;

  struct ECLICCLICINTCTL_35Base {} ;

  struct CLICINTCTL_35 : public RegisterBase<0xD200108F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_35_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_35, 0, 8, ReadWriteMode, ECLICCLICINTCTL_35Base> ;
    using FieldValues = ECLIC_CLICINTCTL_35_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_35Pack  = Register<0xD200108F, 8, ReadWriteMode, ECLICCLICINTCTL_35Base, T...> ;

  struct ECLICCLICINTCTL_36Base {} ;

  struct CLICINTCTL_36 : public RegisterBase<0xD2001093, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_36_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_36, 0, 8, ReadWriteMode, ECLICCLICINTCTL_36Base> ;
    using FieldValues = ECLIC_CLICINTCTL_36_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_36Pack  = Register<0xD2001093, 8, ReadWriteMode, ECLICCLICINTCTL_36Base, T...> ;

  struct ECLICCLICINTCTL_37Base {} ;

  struct CLICINTCTL_37 : public RegisterBase<0xD2001097, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_37_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_37, 0, 8, ReadWriteMode, ECLICCLICINTCTL_37Base> ;
    using FieldValues = ECLIC_CLICINTCTL_37_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_37Pack  = Register<0xD2001097, 8, ReadWriteMode, ECLICCLICINTCTL_37Base, T...> ;

  struct ECLICCLICINTCTL_38Base {} ;

  struct CLICINTCTL_38 : public RegisterBase<0xD200109B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_38_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_38, 0, 8, ReadWriteMode, ECLICCLICINTCTL_38Base> ;
    using FieldValues = ECLIC_CLICINTCTL_38_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_38Pack  = Register<0xD200109B, 8, ReadWriteMode, ECLICCLICINTCTL_38Base, T...> ;

  struct ECLICCLICINTCTL_39Base {} ;

  struct CLICINTCTL_39 : public RegisterBase<0xD200109F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_39_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_39, 0, 8, ReadWriteMode, ECLICCLICINTCTL_39Base> ;
    using FieldValues = ECLIC_CLICINTCTL_39_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_39Pack  = Register<0xD200109F, 8, ReadWriteMode, ECLICCLICINTCTL_39Base, T...> ;

  struct ECLICCLICINTCTL_40Base {} ;

  struct CLICINTCTL_40 : public RegisterBase<0xD20010A3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_40_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_40, 0, 8, ReadWriteMode, ECLICCLICINTCTL_40Base> ;
    using FieldValues = ECLIC_CLICINTCTL_40_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_40Pack  = Register<0xD20010A3, 8, ReadWriteMode, ECLICCLICINTCTL_40Base, T...> ;

  struct ECLICCLICINTCTL_41Base {} ;

  struct CLICINTCTL_41 : public RegisterBase<0xD20010A7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_41_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_41, 0, 8, ReadWriteMode, ECLICCLICINTCTL_41Base> ;
    using FieldValues = ECLIC_CLICINTCTL_41_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_41Pack  = Register<0xD20010A7, 8, ReadWriteMode, ECLICCLICINTCTL_41Base, T...> ;

  struct ECLICCLICINTCTL_42Base {} ;

  struct CLICINTCTL_42 : public RegisterBase<0xD20010AB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_42_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_42, 0, 8, ReadWriteMode, ECLICCLICINTCTL_42Base> ;
    using FieldValues = ECLIC_CLICINTCTL_42_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_42Pack  = Register<0xD20010AB, 8, ReadWriteMode, ECLICCLICINTCTL_42Base, T...> ;

  struct ECLICCLICINTCTL_43Base {} ;

  struct CLICINTCTL_43 : public RegisterBase<0xD20010AF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_43_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_43, 0, 8, ReadWriteMode, ECLICCLICINTCTL_43Base> ;
    using FieldValues = ECLIC_CLICINTCTL_43_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_43, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_43Pack  = Register<0xD20010AF, 8, ReadWriteMode, ECLICCLICINTCTL_43Base, T...> ;

  struct ECLICCLICINTCTL_44Base {} ;

  struct CLICINTCTL_44 : public RegisterBase<0xD20010B3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_44_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_44, 0, 8, ReadWriteMode, ECLICCLICINTCTL_44Base> ;
    using FieldValues = ECLIC_CLICINTCTL_44_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_44, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_44Pack  = Register<0xD20010B3, 8, ReadWriteMode, ECLICCLICINTCTL_44Base, T...> ;

  struct ECLICCLICINTCTL_45Base {} ;

  struct CLICINTCTL_45 : public RegisterBase<0xD20010B7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_45_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_45, 0, 8, ReadWriteMode, ECLICCLICINTCTL_45Base> ;
    using FieldValues = ECLIC_CLICINTCTL_45_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_45, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_45Pack  = Register<0xD20010B7, 8, ReadWriteMode, ECLICCLICINTCTL_45Base, T...> ;

  struct ECLICCLICINTCTL_46Base {} ;

  struct CLICINTCTL_46 : public RegisterBase<0xD20010BB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_46_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_46, 0, 8, ReadWriteMode, ECLICCLICINTCTL_46Base> ;
    using FieldValues = ECLIC_CLICINTCTL_46_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_46, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_46Pack  = Register<0xD20010BB, 8, ReadWriteMode, ECLICCLICINTCTL_46Base, T...> ;

  struct ECLICCLICINTCTL_47Base {} ;

  struct CLICINTCTL_47 : public RegisterBase<0xD20010BF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_47_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_47, 0, 8, ReadWriteMode, ECLICCLICINTCTL_47Base> ;
    using FieldValues = ECLIC_CLICINTCTL_47_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_47, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_47Pack  = Register<0xD20010BF, 8, ReadWriteMode, ECLICCLICINTCTL_47Base, T...> ;

  struct ECLICCLICINTCTL_48Base {} ;

  struct CLICINTCTL_48 : public RegisterBase<0xD20010C3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_48_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_48, 0, 8, ReadWriteMode, ECLICCLICINTCTL_48Base> ;
    using FieldValues = ECLIC_CLICINTCTL_48_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_48, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_48Pack  = Register<0xD20010C3, 8, ReadWriteMode, ECLICCLICINTCTL_48Base, T...> ;

  struct ECLICCLICINTCTL_49Base {} ;

  struct CLICINTCTL_49 : public RegisterBase<0xD20010C7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_49_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_49, 0, 8, ReadWriteMode, ECLICCLICINTCTL_49Base> ;
    using FieldValues = ECLIC_CLICINTCTL_49_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_49, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_49Pack  = Register<0xD20010C7, 8, ReadWriteMode, ECLICCLICINTCTL_49Base, T...> ;

  struct ECLICCLICINTCTL_50Base {} ;

  struct CLICINTCTL_50 : public RegisterBase<0xD20010CB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_50_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_50, 0, 8, ReadWriteMode, ECLICCLICINTCTL_50Base> ;
    using FieldValues = ECLIC_CLICINTCTL_50_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_50, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_50Pack  = Register<0xD20010CB, 8, ReadWriteMode, ECLICCLICINTCTL_50Base, T...> ;

  struct ECLICCLICINTCTL_51Base {} ;

  struct CLICINTCTL_51 : public RegisterBase<0xD20010CF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_51_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_51, 0, 8, ReadWriteMode, ECLICCLICINTCTL_51Base> ;
    using FieldValues = ECLIC_CLICINTCTL_51_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_51, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_51Pack  = Register<0xD20010CF, 8, ReadWriteMode, ECLICCLICINTCTL_51Base, T...> ;

  struct ECLICCLICINTCTL_52Base {} ;

  struct CLICINTCTL_52 : public RegisterBase<0xD20010D3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_52_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_52, 0, 8, ReadWriteMode, ECLICCLICINTCTL_52Base> ;
    using FieldValues = ECLIC_CLICINTCTL_52_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_52, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_52Pack  = Register<0xD20010D3, 8, ReadWriteMode, ECLICCLICINTCTL_52Base, T...> ;

  struct ECLICCLICINTCTL_53Base {} ;

  struct CLICINTCTL_53 : public RegisterBase<0xD20010D7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_53_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_53, 0, 8, ReadWriteMode, ECLICCLICINTCTL_53Base> ;
    using FieldValues = ECLIC_CLICINTCTL_53_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_53, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_53Pack  = Register<0xD20010D7, 8, ReadWriteMode, ECLICCLICINTCTL_53Base, T...> ;

  struct ECLICCLICINTCTL_54Base {} ;

  struct CLICINTCTL_54 : public RegisterBase<0xD20010DB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_54_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_54, 0, 8, ReadWriteMode, ECLICCLICINTCTL_54Base> ;
    using FieldValues = ECLIC_CLICINTCTL_54_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_54, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_54Pack  = Register<0xD20010DB, 8, ReadWriteMode, ECLICCLICINTCTL_54Base, T...> ;

  struct ECLICCLICINTCTL_55Base {} ;

  struct CLICINTCTL_55 : public RegisterBase<0xD20010DF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_55_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_55, 0, 8, ReadWriteMode, ECLICCLICINTCTL_55Base> ;
    using FieldValues = ECLIC_CLICINTCTL_55_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_55, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_55Pack  = Register<0xD20010DF, 8, ReadWriteMode, ECLICCLICINTCTL_55Base, T...> ;

  struct ECLICCLICINTCTL_56Base {} ;

  struct CLICINTCTL_56 : public RegisterBase<0xD20010E3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_56_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_56, 0, 8, ReadWriteMode, ECLICCLICINTCTL_56Base> ;
    using FieldValues = ECLIC_CLICINTCTL_56_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_56, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_56Pack  = Register<0xD20010E3, 8, ReadWriteMode, ECLICCLICINTCTL_56Base, T...> ;

  struct ECLICCLICINTCTL_57Base {} ;

  struct CLICINTCTL_57 : public RegisterBase<0xD20010E7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_57_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_57, 0, 8, ReadWriteMode, ECLICCLICINTCTL_57Base> ;
    using FieldValues = ECLIC_CLICINTCTL_57_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_57, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_57Pack  = Register<0xD20010E7, 8, ReadWriteMode, ECLICCLICINTCTL_57Base, T...> ;

  struct ECLICCLICINTCTL_58Base {} ;

  struct CLICINTCTL_58 : public RegisterBase<0xD20010EB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_58_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_58, 0, 8, ReadWriteMode, ECLICCLICINTCTL_58Base> ;
    using FieldValues = ECLIC_CLICINTCTL_58_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_58, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_58Pack  = Register<0xD20010EB, 8, ReadWriteMode, ECLICCLICINTCTL_58Base, T...> ;

  struct ECLICCLICINTCTL_59Base {} ;

  struct CLICINTCTL_59 : public RegisterBase<0xD20010EF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_59_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_59, 0, 8, ReadWriteMode, ECLICCLICINTCTL_59Base> ;
    using FieldValues = ECLIC_CLICINTCTL_59_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_59, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_59Pack  = Register<0xD20010EF, 8, ReadWriteMode, ECLICCLICINTCTL_59Base, T...> ;

  struct ECLICCLICINTCTL_60Base {} ;

  struct CLICINTCTL_60 : public RegisterBase<0xD20010F3, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_60_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_60, 0, 8, ReadWriteMode, ECLICCLICINTCTL_60Base> ;
    using FieldValues = ECLIC_CLICINTCTL_60_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_60, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_60Pack  = Register<0xD20010F3, 8, ReadWriteMode, ECLICCLICINTCTL_60Base, T...> ;

  struct ECLICCLICINTCTL_61Base {} ;

  struct CLICINTCTL_61 : public RegisterBase<0xD20010F7, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_61_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_61, 0, 8, ReadWriteMode, ECLICCLICINTCTL_61Base> ;
    using FieldValues = ECLIC_CLICINTCTL_61_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_61, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_61Pack  = Register<0xD20010F7, 8, ReadWriteMode, ECLICCLICINTCTL_61Base, T...> ;

  struct ECLICCLICINTCTL_62Base {} ;

  struct CLICINTCTL_62 : public RegisterBase<0xD20010FB, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_62_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_62, 0, 8, ReadWriteMode, ECLICCLICINTCTL_62Base> ;
    using FieldValues = ECLIC_CLICINTCTL_62_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_62, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_62Pack  = Register<0xD20010FB, 8, ReadWriteMode, ECLICCLICINTCTL_62Base, T...> ;

  struct ECLICCLICINTCTL_63Base {} ;

  struct CLICINTCTL_63 : public RegisterBase<0xD20010FF, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_63_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_63, 0, 8, ReadWriteMode, ECLICCLICINTCTL_63Base> ;
    using FieldValues = ECLIC_CLICINTCTL_63_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_63, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_63Pack  = Register<0xD20010FF, 8, ReadWriteMode, ECLICCLICINTCTL_63Base, T...> ;

  struct ECLICCLICINTCTL_64Base {} ;

  struct CLICINTCTL_64 : public RegisterBase<0xD2001103, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_64_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_64, 0, 8, ReadWriteMode, ECLICCLICINTCTL_64Base> ;
    using FieldValues = ECLIC_CLICINTCTL_64_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_64, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_64Pack  = Register<0xD2001103, 8, ReadWriteMode, ECLICCLICINTCTL_64Base, T...> ;

  struct ECLICCLICINTCTL_65Base {} ;

  struct CLICINTCTL_65 : public RegisterBase<0xD2001107, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_65_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_65, 0, 8, ReadWriteMode, ECLICCLICINTCTL_65Base> ;
    using FieldValues = ECLIC_CLICINTCTL_65_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_65, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_65Pack  = Register<0xD2001107, 8, ReadWriteMode, ECLICCLICINTCTL_65Base, T...> ;

  struct ECLICCLICINTCTL_66Base {} ;

  struct CLICINTCTL_66 : public RegisterBase<0xD200110B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_66_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_66, 0, 8, ReadWriteMode, ECLICCLICINTCTL_66Base> ;
    using FieldValues = ECLIC_CLICINTCTL_66_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_66, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_66Pack  = Register<0xD200110B, 8, ReadWriteMode, ECLICCLICINTCTL_66Base, T...> ;

  struct ECLICCLICINTCTL_67Base {} ;

  struct CLICINTCTL_67 : public RegisterBase<0xD200110F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_67_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_67, 0, 8, ReadWriteMode, ECLICCLICINTCTL_67Base> ;
    using FieldValues = ECLIC_CLICINTCTL_67_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_67, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_67Pack  = Register<0xD200110F, 8, ReadWriteMode, ECLICCLICINTCTL_67Base, T...> ;

  struct ECLICCLICINTCTL_68Base {} ;

  struct CLICINTCTL_68 : public RegisterBase<0xD2001113, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_68_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_68, 0, 8, ReadWriteMode, ECLICCLICINTCTL_68Base> ;
    using FieldValues = ECLIC_CLICINTCTL_68_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_68, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_68Pack  = Register<0xD2001113, 8, ReadWriteMode, ECLICCLICINTCTL_68Base, T...> ;

  struct ECLICCLICINTCTL_69Base {} ;

  struct CLICINTCTL_69 : public RegisterBase<0xD2001117, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_69_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_69, 0, 8, ReadWriteMode, ECLICCLICINTCTL_69Base> ;
    using FieldValues = ECLIC_CLICINTCTL_69_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_69, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_69Pack  = Register<0xD2001117, 8, ReadWriteMode, ECLICCLICINTCTL_69Base, T...> ;

  struct ECLICCLICINTCTL_70Base {} ;

  struct CLICINTCTL_70 : public RegisterBase<0xD200111B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_70_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_70, 0, 8, ReadWriteMode, ECLICCLICINTCTL_70Base> ;
    using FieldValues = ECLIC_CLICINTCTL_70_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_70, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_70Pack  = Register<0xD200111B, 8, ReadWriteMode, ECLICCLICINTCTL_70Base, T...> ;

  struct ECLICCLICINTCTL_71Base {} ;

  struct CLICINTCTL_71 : public RegisterBase<0xD200111F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_71_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_71, 0, 8, ReadWriteMode, ECLICCLICINTCTL_71Base> ;
    using FieldValues = ECLIC_CLICINTCTL_71_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_71, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_71Pack  = Register<0xD200111F, 8, ReadWriteMode, ECLICCLICINTCTL_71Base, T...> ;

  struct ECLICCLICINTCTL_72Base {} ;

  struct CLICINTCTL_72 : public RegisterBase<0xD2001123, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_72_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_72, 0, 8, ReadWriteMode, ECLICCLICINTCTL_72Base> ;
    using FieldValues = ECLIC_CLICINTCTL_72_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_72, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_72Pack  = Register<0xD2001123, 8, ReadWriteMode, ECLICCLICINTCTL_72Base, T...> ;

  struct ECLICCLICINTCTL_73Base {} ;

  struct CLICINTCTL_73 : public RegisterBase<0xD2001127, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_73_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_73, 0, 8, ReadWriteMode, ECLICCLICINTCTL_73Base> ;
    using FieldValues = ECLIC_CLICINTCTL_73_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_73, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_73Pack  = Register<0xD2001127, 8, ReadWriteMode, ECLICCLICINTCTL_73Base, T...> ;

  struct ECLICCLICINTCTL_74Base {} ;

  struct CLICINTCTL_74 : public RegisterBase<0xD200112B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_74_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_74, 0, 8, ReadWriteMode, ECLICCLICINTCTL_74Base> ;
    using FieldValues = ECLIC_CLICINTCTL_74_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_74, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_74Pack  = Register<0xD200112B, 8, ReadWriteMode, ECLICCLICINTCTL_74Base, T...> ;

  struct ECLICCLICINTCTL_75Base {} ;

  struct CLICINTCTL_75 : public RegisterBase<0xD200112F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_75_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_75, 0, 8, ReadWriteMode, ECLICCLICINTCTL_75Base> ;
    using FieldValues = ECLIC_CLICINTCTL_75_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_75, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_75Pack  = Register<0xD200112F, 8, ReadWriteMode, ECLICCLICINTCTL_75Base, T...> ;

  struct ECLICCLICINTCTL_76Base {} ;

  struct CLICINTCTL_76 : public RegisterBase<0xD2001133, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_76_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_76, 0, 8, ReadWriteMode, ECLICCLICINTCTL_76Base> ;
    using FieldValues = ECLIC_CLICINTCTL_76_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_76, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_76Pack  = Register<0xD2001133, 8, ReadWriteMode, ECLICCLICINTCTL_76Base, T...> ;

  struct ECLICCLICINTCTL_77Base {} ;

  struct CLICINTCTL_77 : public RegisterBase<0xD2001137, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_77_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_77, 0, 8, ReadWriteMode, ECLICCLICINTCTL_77Base> ;
    using FieldValues = ECLIC_CLICINTCTL_77_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_77, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_77Pack  = Register<0xD2001137, 8, ReadWriteMode, ECLICCLICINTCTL_77Base, T...> ;

  struct ECLICCLICINTCTL_78Base {} ;

  struct CLICINTCTL_78 : public RegisterBase<0xD200113B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_78_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_78, 0, 8, ReadWriteMode, ECLICCLICINTCTL_78Base> ;
    using FieldValues = ECLIC_CLICINTCTL_78_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_78, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_78Pack  = Register<0xD200113B, 8, ReadWriteMode, ECLICCLICINTCTL_78Base, T...> ;

  struct ECLICCLICINTCTL_79Base {} ;

  struct CLICINTCTL_79 : public RegisterBase<0xD200113F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_79_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_79, 0, 8, ReadWriteMode, ECLICCLICINTCTL_79Base> ;
    using FieldValues = ECLIC_CLICINTCTL_79_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_79, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_79Pack  = Register<0xD200113F, 8, ReadWriteMode, ECLICCLICINTCTL_79Base, T...> ;

  struct ECLICCLICINTCTL_80Base {} ;

  struct CLICINTCTL_80 : public RegisterBase<0xD2001143, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_80_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_80, 0, 8, ReadWriteMode, ECLICCLICINTCTL_80Base> ;
    using FieldValues = ECLIC_CLICINTCTL_80_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_80, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_80Pack  = Register<0xD2001143, 8, ReadWriteMode, ECLICCLICINTCTL_80Base, T...> ;

  struct ECLICCLICINTCTL_81Base {} ;

  struct CLICINTCTL_81 : public RegisterBase<0xD2001147, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_81_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_81, 0, 8, ReadWriteMode, ECLICCLICINTCTL_81Base> ;
    using FieldValues = ECLIC_CLICINTCTL_81_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_81, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_81Pack  = Register<0xD2001147, 8, ReadWriteMode, ECLICCLICINTCTL_81Base, T...> ;

  struct ECLICCLICINTCTL_82Base {} ;

  struct CLICINTCTL_82 : public RegisterBase<0xD200114B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_82_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_82, 0, 8, ReadWriteMode, ECLICCLICINTCTL_82Base> ;
    using FieldValues = ECLIC_CLICINTCTL_82_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_82, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_82Pack  = Register<0xD200114B, 8, ReadWriteMode, ECLICCLICINTCTL_82Base, T...> ;

  struct ECLICCLICINTCTL_83Base {} ;

  struct CLICINTCTL_83 : public RegisterBase<0xD200114F, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_83_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_83, 0, 8, ReadWriteMode, ECLICCLICINTCTL_83Base> ;
    using FieldValues = ECLIC_CLICINTCTL_83_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_83, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_83Pack  = Register<0xD200114F, 8, ReadWriteMode, ECLICCLICINTCTL_83Base, T...> ;

  struct ECLICCLICINTCTL_84Base {} ;

  struct CLICINTCTL_84 : public RegisterBase<0xD2001153, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_84_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_84, 0, 8, ReadWriteMode, ECLICCLICINTCTL_84Base> ;
    using FieldValues = ECLIC_CLICINTCTL_84_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_84, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_84Pack  = Register<0xD2001153, 8, ReadWriteMode, ECLICCLICINTCTL_84Base, T...> ;

  struct ECLICCLICINTCTL_85Base {} ;

  struct CLICINTCTL_85 : public RegisterBase<0xD2001157, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_85_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_85, 0, 8, ReadWriteMode, ECLICCLICINTCTL_85Base> ;
    using FieldValues = ECLIC_CLICINTCTL_85_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_85, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_85Pack  = Register<0xD2001157, 8, ReadWriteMode, ECLICCLICINTCTL_85Base, T...> ;

  struct ECLICCLICINTCTL_86Base {} ;

  struct CLICINTCTL_86 : public RegisterBase<0xD200115B, 8, ReadWriteMode>
  {
    using LEVEL_PRIORITY = ECLIC_CLICINTCTL_86_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_86, 0, 8, ReadWriteMode, ECLICCLICINTCTL_86Base> ;
    using FieldValues = ECLIC_CLICINTCTL_86_LEVEL_PRIORITY_Values<ECLIC::CLICINTCTL_86, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLICINTCTL_86Pack  = Register<0xD200115B, 8, ReadWriteMode, ECLICCLICINTCTL_86Base, T...> ;

} ;

#endif //#if !defined(ECLICREGISTERS_HPP)
