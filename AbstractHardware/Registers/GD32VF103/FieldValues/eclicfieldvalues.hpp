/*******************************************************************************
* Filename      : eclicfieldvalues.hpp
*
* Details       : Enumerations related with ECLIC peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(ECLICENUMS_HPP)
#define ECLICENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICCFG_NLBITS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MaxBitsPriorityLevel0 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 0U> ; // FIXME
  using MaxPriorityLevelBits1 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 1U> ;
  using MaxPriorityLevelBits2 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 2U> ;
  using MaxPriorityLevelBits3 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 3U> ;
  using MaxPriorityLevelBits4 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 4U> ;
  using MaxPriorityLevelBits5 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 5U> ;
  using MaxPriorityLevelBits6 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 6U> ;
  using MaxPriorityLevelBits7 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 7U> ;
  using MaxPriorityLevelBits8 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 8U> ;
  using MaxPriorityLevelBits9 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 9U> ;
  using MaxPriorityLevelBits10 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 10U> ;
  using MaxPriorityLevelBits11 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 11U> ;
  using MaxPriorityLevelBits12 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 12U> ;
  using MaxPriorityLevelBits13 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 13U> ;
  using MaxPriorityLevelBits14 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 14U> ;
  using MaxPriorityLevelBits15 = FieldValue<ECLIC_CLICCFG_NLBITS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINFO_NUM_INTERRUPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINFO_VERSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINFO_CLICINTCTLBITS_Values: public ECLIC_CLICCFG_NLBITS_Values<Reg, offset, size, AccessMode, BaseType>
{

} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_MTH_MTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_0_IP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using InterruptIsTriggered = FieldValue<ECLIC_CLICINTIP_0_IP_Values, BaseType, 0U> ;
  using NoInterruptTriggered = FieldValue<ECLIC_CLICINTIP_0_IP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_1_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_2_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_3_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_4_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_5_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_6_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_7_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_8_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_9_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_10_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_11_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_12_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_13_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_14_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_15_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_16_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_17_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_18_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_19_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_20_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_21_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_22_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_23_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_24_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_25_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_26_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_27_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_28_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_29_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_30_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_31_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_32_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_33_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_34_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_35_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_36_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_37_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_38_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_39_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_40_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_41_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_42_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_43_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_44_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_45_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_46_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_47_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_48_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_49_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_50_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_51_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_52_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_53_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_54_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_55_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_56_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_57_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_58_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_59_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_60_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_61_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_62_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_63_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_64_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_65_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_66_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_67_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_68_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_69_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_70_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_71_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_72_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_73_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_74_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_75_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_76_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_77_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_78_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_79_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_80_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_81_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_82_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_83_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_84_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_85_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIP_86_IP_Values: public ECLIC_CLICINTIP_0_IP_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_0_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
    using Masked = FieldValue<ECLIC_CLICINTIE_0_IE_Values, BaseType, 0U> ;
    using Enable = FieldValue<ECLIC_CLICINTIE_0_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_1_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_2_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_3_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_4_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_5_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_6_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_7_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_8_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_9_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_10_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_11_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_12_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_13_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_14_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_15_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_16_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_17_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_18_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_19_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_20_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_21_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_22_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_23_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_24_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_25_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_26_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_27_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_28_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_29_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_30_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_31_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_32_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_33_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_34_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_35_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_36_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_37_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_38_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_39_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_40_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_41_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_42_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_43_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_44_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_45_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_46_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_47_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_48_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_49_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_50_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_51_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
  using Value0 = FieldValue<ECLIC_CLICINTIE_51_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ECLIC_CLICINTIE_51_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_52_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_53_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_54_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_55_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_56_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_57_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_58_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_59_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_60_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_61_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_62_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_63_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_64_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_65_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_66_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_67_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_68_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_69_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_70_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_71_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_72_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_73_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_74_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_75_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_76_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_77_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_78_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_79_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_80_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_81_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_82_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_83_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_84_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_85_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTIE_86_IE_Values: public ECLIC_CLICINTIE_0_IE_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_0_SHV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NonVectored = FieldValue<ECLIC_CLICINTATTR_0_SHV_Values, BaseType, 0U> ;
  using Vectored = FieldValue<ECLIC_CLICINTATTR_0_SHV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_0_TRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PositiveLevelTriggered = FieldValue<ECLIC_CLICINTATTR_0_TRIG_Values, BaseType, 0U> ;
  using PositiveEdgeTriggered = FieldValue<ECLIC_CLICINTATTR_0_TRIG_Values, BaseType, 1U> ;
  using NegativeLevelTriggered = FieldValue<ECLIC_CLICINTATTR_0_TRIG_Values, BaseType, 2U> ;
  using NegativeEdgeTriggered = FieldValue<ECLIC_CLICINTATTR_0_TRIG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_1_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_1_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_2_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_2_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_3_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_3_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_4_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_4_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_5_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_5_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_6_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_6_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_7_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_7_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_8_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_8_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_9_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_9_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_10_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_10_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_11_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_11_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_12_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_12_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_13_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_13_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_14_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_14_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_15_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_15_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_16_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_16_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_17_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_17_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_18_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_18_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_19_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_19_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_20_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_20_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_21_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_21_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_22_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_22_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_23_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_23_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_24_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_24_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_25_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_25_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_26_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_26_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_27_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_27_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_28_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_28_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_29_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_29_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_30_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_30_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_31_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_31_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_32_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_32_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_33_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_33_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_34_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_34_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_35_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_35_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_36_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_36_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_37_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_37_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_38_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_38_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_39_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_39_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_40_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_40_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_41_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_41_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_42_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_42_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_43_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_43_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_44_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_44_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_45_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_45_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_46_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_46_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_47_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_47_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_48_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_48_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_49_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_49_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_50_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_50_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_51_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_51_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_52_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_52_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_53_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_53_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_54_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_54_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_55_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_55_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_56_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_56_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_57_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_57_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_58_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_58_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_59_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_59_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_60_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_60_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_61_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_61_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_62_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_62_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_63_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_63_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_64_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_64_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_65_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_65_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_66_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_66_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_67_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_67_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_68_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_68_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_69_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_69_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_70_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_70_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_71_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_71_TRIG_Values:public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_72_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_72_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_73_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_73_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_74_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_74_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_75_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_75_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_76_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_76_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_77_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_77_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_78_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_78_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_79_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_79_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_80_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_80_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_81_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_81_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_82_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_82_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_83_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_83_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_84_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_84_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_85_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_85_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_86_SHV_Values: public ECLIC_CLICINTATTR_0_SHV_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTATTR_86_TRIG_Values: public ECLIC_CLICINTATTR_0_TRIG_Values<Reg, offset, size, AccessMode, BaseType>
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_0_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_1_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_2_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_3_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_4_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_5_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_6_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_7_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_8_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_9_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_10_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_11_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_12_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_13_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_14_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_15_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_16_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_17_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_18_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_19_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_20_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_21_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_22_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_23_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_24_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_25_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_26_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_27_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_28_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_29_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_30_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_31_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_32_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_33_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_34_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_35_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_36_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_37_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_38_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_39_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_40_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_41_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_42_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_43_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_44_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_45_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_46_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_47_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_48_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_49_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_50_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_51_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_52_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_53_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_54_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_55_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_56_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_57_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_58_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_59_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_60_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_61_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_62_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_63_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_64_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_65_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_66_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_67_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_68_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_69_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_70_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_71_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_72_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_73_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_74_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_75_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_76_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_77_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_78_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_79_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_80_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_81_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_82_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_83_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_84_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_85_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ECLIC_CLICINTCTL_86_LEVEL_PRIORITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ECLICENUMS_HPP)
