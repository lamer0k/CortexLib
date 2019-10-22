/*******************************************************************************
* Filename      : compe0bitsfield.hpp
*
* Details       : Enumerations related with COMP_E0 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(COMPE0ENUMS_HPP)
#define COMPE0ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEIPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEIPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIPEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIPEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEIMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEIMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIMEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIMEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEOUTPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEOUTPOL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEOUTPOL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEF_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEF_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEIES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIES_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIES_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CESHORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CESHORT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CESHORT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEFDLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEFDLY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEFDLY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CEFDLY_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using CEFDLY_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEPWRMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEPWRMD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEPWRMD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CEPWRMD_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEON_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEON_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEMRVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEMRVL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEMRVL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEMRVS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEMRVS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEMRVS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CERSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CERSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CERSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CERS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CERS_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CERS_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CERS_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using CERS_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEREFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEREFL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEREFL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using CEREFL_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using CEREFL_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEREFACC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEREFACC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEREFACC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExCTL_CEPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEPD0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEPD0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CEIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CEIIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CERDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CERDYIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CERDYIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CEIIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CEIIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CEIIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExINT_CERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CERDYIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CERDYIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_E_CExIV_CEIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(COMPE0ENUMS_HPP)
