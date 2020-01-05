/*******************************************************************************
* Filename      : dcmifieldvalues.hpp
*
* Details       : Enumerations related with DCMI peripheral. This header file is
*                 auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(DCMIENUMS_HPP)
#define DCMIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_EDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_EDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_EDM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DCMI_CR_EDM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DCMI_CR_EDM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_FCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_FCRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_FCRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DCMI_CR_FCRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DCMI_CR_FCRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_VSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_VSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_VSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_HSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_HSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_HSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_PCKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_PCKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_PCKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_ESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_ESS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_ESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_JPEG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_JPEG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_JPEG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_CROP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_CROP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_CROP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_CM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_CM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CR_CAPTURE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_CR_CAPTURE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_CR_CAPTURE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_SR_FNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_SR_FNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_SR_FNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_SR_VSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_SR_VSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_SR_VSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_SR_HSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_SR_HSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_SR_HSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_RIS_LINE_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_RIS_LINE_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_RIS_LINE_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_RIS_VSYNC_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_RIS_VSYNC_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_RIS_VSYNC_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_RIS_ERR_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_RIS_ERR_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_RIS_ERR_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_RIS_OVR_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_RIS_OVR_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_RIS_OVR_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_RIS_FRAME_RIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_RIS_FRAME_RIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_RIS_FRAME_RIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_IER_LINE_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_IER_LINE_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_IER_LINE_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_IER_VSYNC_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_IER_VSYNC_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_IER_VSYNC_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_IER_ERR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_IER_ERR_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_IER_ERR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_IER_OVR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_IER_OVR_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_IER_OVR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_IER_FRAME_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_IER_FRAME_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_IER_FRAME_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_MIS_LINE_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_MIS_LINE_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_MIS_LINE_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_MIS_VSYNC_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_MIS_VSYNC_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_MIS_VSYNC_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_MIS_ERR_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_MIS_ERR_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_MIS_ERR_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_MIS_OVR_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_MIS_OVR_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_MIS_OVR_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_MIS_FRAME_MIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_MIS_FRAME_MIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_MIS_FRAME_MIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ICR_LINE_ISC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_ICR_LINE_ISC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_ICR_LINE_ISC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ICR_VSYNC_ISC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_ICR_VSYNC_ISC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_ICR_VSYNC_ISC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ICR_ERR_ISC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_ICR_ERR_ISC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_ICR_ERR_ISC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ICR_OVR_ISC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_ICR_OVR_ISC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_ICR_OVR_ISC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ICR_FRAME_ISC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DCMI_ICR_FRAME_ISC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DCMI_ICR_FRAME_ISC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESCR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESCR_LEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESCR_LSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESCR_FSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESUR_FEU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESUR_LEU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESUR_LSU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_ESUR_FSU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CWSTRT_VST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CWSTRT_HOFFCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CWSIZE_VLINE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_CWSIZE_CAPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_DR_Byte3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_DR_Byte2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_DR_Byte1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DCMI_DR_Byte0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DCMIENUMS_HPP)
