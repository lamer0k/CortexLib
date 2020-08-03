/*******************************************************************************
* Filename      : timer6fieldvalues.hpp
*
* Details       : Enumerations related with TIMER6 peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(TIMER6ENUMS_HPP)
#define TIMER6ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL0_ARSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL0_ARSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL0_ARSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL0_SPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL0_SPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL0_SPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL0_UPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL0_UPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL0_UPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL0_UPDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL0_UPDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL0_UPDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL0_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL0_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL0_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CTL1_MMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIMER6_CTL1_MMC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_DMAINTEN_UPDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_DMAINTEN_UPDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_DMAINTEN_UPDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_DMAINTEN_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_DMAINTEN_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_DMAINTEN_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_INTF_UPIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_INTF_UPIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_INTF_UPIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_SWEVG_UPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER6_SWEVG_UPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER6_SWEVG_UPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER6_CAR_CARL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMER6ENUMS_HPP)
