/*******************************************************************************
* Filename      : pssbitsfield.hpp
*
* Details       : Enumerations related with PSS peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(PSSENUMS_HPP)
#define PSSENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSKEY_PSSKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVSMHOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHOFF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVSMHOFF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVSMHLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHLP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVSMHLP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVSMHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVSMHS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVSMHTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVMHOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVMHOE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVMHOE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_SVMHOUTPOLAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVMHOUTPOLAL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVMHOUTPOLAL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_DCDC_FORCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCDC_FORCE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using DCDC_FORCE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL_VCORETRAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VCORETRAN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using VCORETRAN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using VCORETRAN_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using VCORETRAN_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSIE_SVSMHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVSMHIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSIFG_SVSMHIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using SVSMHIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCLRIFG_CLRSVSMHIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRSVSMHIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CLRSVSMHIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

#endif //#if !defined(PSSENUMS_HPP)
