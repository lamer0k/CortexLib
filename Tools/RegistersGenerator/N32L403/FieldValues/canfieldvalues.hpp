/*******************************************************************************
* Filename      : canfieldvalues.hpp
*
* Details       : Enumerations related with CAN peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_INIRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_INIRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_INIRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_SLPRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_SLPRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_SLPRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_TXFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_TXFP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_TXFP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_RFLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_RFLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_RFLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_NART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_NART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_NART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_AWKUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_AWKUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_AWKUM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_ABOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_ABOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_ABOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_TTCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_TTCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_TTCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_MRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_MRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_MRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MCTRL_DBGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MCTRL_DBGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MCTRL_DBGF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_INIAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_INIAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_INIAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_SLPAK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_SLPAK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_SLPAK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_ERRINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_ERRINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_ERRINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_WKUINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_WKUINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_WKUINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_SLAKINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_SLAKINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_SLAKINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_TXMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_TXMD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_TXMD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_RXMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_RXMD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_RXMD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_LSMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_LSMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_LSMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_MSTS_RXS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_MSTS_RXS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_MSTS_RXS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_RQCPM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_RQCPM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_RQCPM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TXOKM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TXOKM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TXOKM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ALSTM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ALSTM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ALSTM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TERRM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TERRM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TERRM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ABRQM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ABRQM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ABRQM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_RQCPM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_RQCPM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_RQCPM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TXOKM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TXOKM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TXOKM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ALSTM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ALSTM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ALSTM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TERRM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TERRM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TERRM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ABRQM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ABRQM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ABRQM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_RQCPM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_RQCPM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_RQCPM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TXOKM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TXOKM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TXOKM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ALSTM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ALSTM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ALSTM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TERRM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TERRM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TERRM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_ABRQM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_ABRQM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_ABRQM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_CODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_CODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_CODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TSTS_CODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TSTS_CODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_TMEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_TSTS_TMEM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TSTS_LOWM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_TSTS_LOWM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF0_FFMP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF0_FFMP0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF0_FFMP0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_RFF0_FFMP0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_RFF0_FFMP0_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF0_FFULL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF0_FFULL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF0_FFULL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF0_FFOVR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF0_FFOVR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF0_FFOVR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF0_RFFOM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF0_RFFOM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF0_RFFOM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF1_FFMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF1_FFMP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF1_FFMP1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_RFF1_FFMP1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_RFF1_FFMP1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF1_FFULL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF1_FFULL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF1_FFULL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF1_FFOVR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF1_FFOVR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF1_FFOVR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RFF1_RFFOM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RFF1_RFFOM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RFF1_RFFOM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_TMEITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_TMEITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_TMEITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FMPITE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FMPITE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FMPITE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FFITE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FFITE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FFITE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FOVITE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FOVITE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FOVITE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FMPITE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FMPITE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FMPITE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FFITE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FFITE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FFITE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_FOVITE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_FOVITE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_FOVITE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_EWGITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_EWGITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_EWGITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_EPVITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_EPVITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_EPVITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_BOFITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_BOFITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_BOFITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_LECITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_LECITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_LECITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_ERRITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_ERRITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_ERRITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_WKUITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_WKUITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_WKUITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_INTE_SLKITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_INTE_SLKITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_INTE_SLKITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_EWGFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_ESTS_EWGFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_ESTS_EWGFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_EPVFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_ESTS_EPVFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_ESTS_EPVFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_BOFFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_ESTS_BOFFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_ESTS_BOFFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_LEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_ESTS_LEC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_TXEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_ESTS_RXEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_BRTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_TBS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_BTIM_TBS1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_TBS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_BTIM_TBS2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_RSJW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_BTIM_RSJW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_BTIM_RSJW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_BTIM_RSJW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_BTIM_RSJW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_LBM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_BTIM_LBM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_BTIM_LBM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_BTIM_SLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_BTIM_SLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_BTIM_SLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI0_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI0_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI0_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI0_RTRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI0_RTRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI0_RTRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI0_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI0_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI0_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI0_EXTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI0_STDID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT0_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_TMDT0_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT0_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT0_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT0_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT0_MTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL0_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL0_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL0_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL0_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH0_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH0_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH0_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH0_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI1_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI1_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI1_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI1_RTRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI1_RTRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI1_RTRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI1_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI1_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI1_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI1_EXTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI1_STDID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT1_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_TMDT1_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT1_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT1_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT1_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT1_MTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL1_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL1_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL1_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL1_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH1_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH1_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH1_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH1_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI2_TXRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI2_TXRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI2_TXRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI2_RTRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI2_RTRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI2_RTRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI2_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMI2_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMI2_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI2_EXTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMI2_STDID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT2_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_TMDT2_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT2_TGT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_TMDT2_TGT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_TMDT2_TGT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDT2_MTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL2_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL2_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL2_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDL2_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH2_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH2_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH2_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_TMDH2_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI0_RTRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMI0_RTRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMI0_RTRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI0_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMI0_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMI0_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI0_EXTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI0_STDID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT0_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_RMDT0_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT0_FMI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT0_MTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL0_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL0_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL0_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL0_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH0_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH0_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH0_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH0_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI1_RTRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMI1_RTRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMI1_RTRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI1_IDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMI1_IDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMI1_IDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI1_EXTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMI1_STDID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT1_DLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CAN_CAN_RMDT1_DLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT1_FMI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDT1_MTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL1_DATA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL1_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL1_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDL1_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH1_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH1_DATA5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH1_DATA6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_RMDH1_DATA7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_FMC_FINITM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CAN_CAN_FMC_FINITM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CAN_CAN_FMC_FINITM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_FM1_FB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_FS1_FSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_FFA1_FAF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_FA1_FAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F0B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F0B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F1B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F1B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F2B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F2B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F3B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F3B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F4B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F4B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F5B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F5B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F6B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F6B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F7B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F7B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F8B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F8B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F9B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F9B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F10B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F10B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F11B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F11B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F12B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F12B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F13B1_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAN_CAN_F13B2_FBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

