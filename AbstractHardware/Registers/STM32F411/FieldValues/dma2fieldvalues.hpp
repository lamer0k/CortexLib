/*******************************************************************************
* Filename      : dma2fieldvalues.hpp
*
* Details       : Enumerations related with DMA2 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(DMA2ENUMS_HPP)
#define DMA2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LISR_TCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LISR_TCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LISR_TCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LISR_HTIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LISR_HTIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LISR_HTIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LISR_TEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LISR_TEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LISR_TEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LISR_DMEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LISR_DMEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LISR_DMEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LISR_FEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LISR_FEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LISR_FEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HISR_TCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HISR_TCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HISR_TCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HISR_HTIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HISR_HTIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HISR_HTIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HISR_TEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HISR_TEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HISR_TEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HISR_DMEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HISR_DMEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HISR_DMEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HISR_FEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HISR_FEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HISR_FEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LIFCR_CTCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LIFCR_CTCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LIFCR_CTCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LIFCR_CHTIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LIFCR_CHTIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LIFCR_CHTIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LIFCR_CTEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LIFCR_CTEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LIFCR_CTEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LIFCR_CDMEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LIFCR_CDMEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LIFCR_CDMEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_LIFCR_CFEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_LIFCR_CFEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_LIFCR_CFEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HIFCR_CTCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HIFCR_CTCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HIFCR_CTCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HIFCR_CHTIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HIFCR_CHTIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HIFCR_CHTIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HIFCR_CTEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HIFCR_CTEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HIFCR_CTEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HIFCR_CDMEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HIFCR_CDMEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HIFCR_CDMEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_HIFCR_CFEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_HIFCR_CFEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_HIFCR_CFEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_CHSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DMA_SCR_CHSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_MBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_MBURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_MBURST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_MBURST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_MBURST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PBURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PBURST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_PBURST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_PBURST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_CT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_CT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_CT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_DBM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_DBM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_DBM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_PL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_PL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PINCOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PINCOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PINCOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_MSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_MSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_MSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_MSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_MSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_PSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_PSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_MINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_MINC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_MINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PINC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_CIRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_CIRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_CIRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_DIR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SCR_DIR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SCR_DIR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_PFCTRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_PFCTRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_PFCTRL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_HTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_HTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_HTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_TEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_TEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_TEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_DMEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_DMEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_DMEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SNDTR_NDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SPAR_PA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SFCR_FEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SFCR_FEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SFCR_FEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SFCR_FS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SFCR_FS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SFCR_FS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SFCR_FS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SFCR_FS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DMA_SFCR_FS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DMA_SFCR_FS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DMA_SFCR_FS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DMA_SFCR_FS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SFCR_DMDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SFCR_DMDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SFCR_DMDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SFCR_FTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SFCR_FTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SFCR_FTH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA_SFCR_FTH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA_SFCR_FTH_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA_SCR_ACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA_SCR_ACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA_SCR_ACK_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DMA2ENUMS_HPP)
