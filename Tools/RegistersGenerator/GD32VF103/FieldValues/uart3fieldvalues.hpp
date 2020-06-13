/*******************************************************************************
* Filename      : uart3fieldvalues.hpp
*
* Details       : Enumerations related with UART3 peripheral. This header file
*                 is auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(UART3ENUMS_HPP)
#define UART3ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_LBDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_LBDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_LBDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_TBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_TBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_TBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_TC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_TC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_TC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_RBNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_RBNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_RBNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_IDLEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_IDLEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_IDLEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_ORERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_ORERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_ORERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_NERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_NERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_NERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_FERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_FERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_FERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_STAT_PERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_STAT_PERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_STAT_PERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_DATA_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_BAUD_INTDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_BAUD_FRADIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<UART3_BAUD_FRADIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_UEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_UEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_UEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_WL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_WL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_WL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_WM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_WM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_WM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_PCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_PCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_PCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_PM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_PM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_PM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_PERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_PERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_PERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_TBEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_TBEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_TBEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_RBNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_RBNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_RBNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_IDLEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_IDLEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_IDLEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_TEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_TEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_TEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_REN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_REN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_RWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_RWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_RWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL0_SBKCMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL0_SBKCMD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL0_SBKCMD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL1_LMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL1_LMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL1_LMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL1_STB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL1_STB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL1_STB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<UART3_CTL1_STB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<UART3_CTL1_STB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL1_LBDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL1_LBDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL1_LBDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL1_LBLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL1_LBLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL1_LBLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL1_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<UART3_CTL1_ADDR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_DENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_DENT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_DENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_DENR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_DENR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_DENR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_HDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_HDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_HDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_IRLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_IRLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_IRLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_CTL2_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<UART3_CTL2_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<UART3_CTL2_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct UART3_GP_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(UART3ENUMS_HPP)
