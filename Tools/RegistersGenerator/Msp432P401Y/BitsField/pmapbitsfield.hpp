/*******************************************************************************
* Filename      : pmapbitsfield.hpp
*
* Details       : Enumerations related with PMAP peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(PMAPENUMS_HPP)
#define PMAPENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMAP_PMAPKEYID_PMAPKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMAP_PMAPCTL_PMAPLOCKED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PMAPLOCKED_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PMAPLOCKED_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMAP_PMAPCTL_PMAPRECFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PMAPRECFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PMAPRECFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PMAP_PMAP_PMAPx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(PMAPENUMS_HPP)
