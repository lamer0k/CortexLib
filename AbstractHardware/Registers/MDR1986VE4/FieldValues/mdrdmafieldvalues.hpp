/*******************************************************************************
* Filename      : mdrdmafieldvalues.hpp
*
* Details       : Enumerations related with MDR_DMA peripheral. This header file
*                 is auto-generated for MDR1986VE4 device.
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
  using _1_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 0U> ;
  using _2_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 1U> ;
  using _3_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 2U> ;
  using _4_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 3U> ;
  using _5_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 4U> ;
  using _6_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 5U> ;
  using _7_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 6U> ;
  using _8_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 7U> ;
  using _9_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 8U> ;
  using _10_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 9U> ;
  using _11_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 10U> ;
  using _12_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 11U> ;
  using _13_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 12U> ;
  using _14_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 13U> ;
  using _15_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 14U> ;
  using _16_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 15U> ;
  using _17_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 16U> ;
  using _18_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 17U> ;
  using _19_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 18U> ;
  using _20_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 19U> ;
  using _21_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 20U> ;
  using _22_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 21U> ;
  using _23_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 22U> ;
  using _24_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 23U> ;
  using _25_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 24U> ;
  using _26_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 25U> ;
  using _27_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 26U> ;
  using _28_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 27U> ;
  using _29_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 28U> ;
  using _30_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 29U> ;
  using _31_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 30U> ;
  using _32_channels = FieldValue<MDR_DMA_STATUS_Chnls_minus1_Values, BaseType, 31U> ;
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
  using Off = FieldValue<MDR_DMA_CFG_Bufferable_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_CFG_Bufferable_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_CFG_Cachable_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_CFG_Cachable_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_CFG_Cachable_Values, BaseType, 1U> ;
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
struct MDR_DMA_WAITONREQ_STATUS_Ch_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_0_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_1_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_2_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_3_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_4_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_5_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_6_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_7_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_8_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_9_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_10_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_11_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_12_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_13_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_14_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_15_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_16_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_17_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_18_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_19_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_20_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_21_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_22_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_23_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_24_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_25_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_26_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_27_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_28_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_29_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_30_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_DMA_WAITONREQ_STATUS_Ch_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_31_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_DMA_WAITONREQ_STATUS_Ch_31_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRDMAENUMS_HPP)
