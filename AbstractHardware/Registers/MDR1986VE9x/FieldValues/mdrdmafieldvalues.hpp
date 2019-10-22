/*******************************************************************************
* Filename      : mdrdmafieldvalues.hpp
*
* Details       : Enumerations related with MDR_DMA peripheral. This header file
*                 is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRDMAENUMS_HPP)
#define MDRDMAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_STATUS_Enable_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MDR_DMA_STATUS_Enable_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MDR_DMA_STATUS_Enable_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_STATUS_State_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Idle = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 0U> ;
  using RD_Ctrl = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 1U> ;
  using RD_pSrc = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 2U> ;
  using RD_pDest = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 3U> ;
  using RD_Data = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 4U> ;
  using WR_Data = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 5U> ;
  using Wait_Clr = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 6U> ;
  using WR_Ctrl = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 7U> ;
  using Stalled = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 8U> ;
  using Done = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 9U> ;
  using ScatGath = FieldValue<MDR_DMA_STATUS_State_Values, BaseType, 10U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_STATUS_Chnls_minus1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 1_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 0U> ;
  using 2_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 1U> ;
  using 3_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 2U> ;
  using 4_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 3U> ;
  using 5_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 4U> ;
  using 6_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 5U> ;
  using 7_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 6U> ;
  using 8_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 7U> ;
  using 9_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 8U> ;
  using 10_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 9U> ;
  using 11_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 10U> ;
  using 12_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 11U> ;
  using 13_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 12U> ;
  using 14_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 13U> ;
  using 15_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 14U> ;
  using 16_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 15U> ;
  using 17_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 16U> ;
  using 18_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 17U> ;
  using 19_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 18U> ;
  using 20_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 19U> ;
  using 21_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 20U> ;
  using 22_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 21U> ;
  using 23_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 22U> ;
  using 24_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 23U> ;
  using 25_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 24U> ;
  using 26_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 25U> ;
  using 27_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 26U> ;
  using 28_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 27U> ;
  using 29_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 28U> ;
  using 30_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 29U> ;
  using 31_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 30U> ;
  using 32_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_STATUS_test_status_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Unavailable = FieldValue<MDR_DMA_STATUS_test_status_Values, BaseType, 0U> ;
  using Available = FieldValue<MDR_DMA_STATUS_test_status_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CFG_Enable_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disabled = FieldValue<MDR_DMA_CFG_Enable_Values, BaseType, 0U> ;
  using Enabled = FieldValue<MDR_DMA_CFG_Enable_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CFG_Privileged_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_CFG_Privileged_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_CFG_Privileged_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CFG_Bufferable_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_DMA_CFG_Bufferable_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_DMA_CFG_Bufferable_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CFG_Cachable_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_DMA_CFG_Cachable_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_DMA_CFG_Cachable_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CTRL_BASE_PTR_Addr_Hi_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_ALT_CTRL_BASE_PTR_Addr_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_%s_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_%s_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_%s_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRDMAENUMS_HPP)
