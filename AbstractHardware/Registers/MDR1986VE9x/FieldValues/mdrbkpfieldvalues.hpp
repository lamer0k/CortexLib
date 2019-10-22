/*******************************************************************************
* Filename      : mdrbkpfieldvalues.hpp
*
* Details       : Enumerations related with MDR_BKP peripheral. This header file
*                 is auto-generated for MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRBKPENUMS_HPP)
#define MDRBKPENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_LOW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 10MHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 0U> ;
  using 200KHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 1U> ;
  using 500KHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 2U> ;
  using 1MHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 3U> ;
  using GensOffz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 4U> ;
  using 40MHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 5U> ;
  using 80MHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 6U> ;
  using above_80MHz = FieldValue<MDR_BKP_REG_0E_LOW_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_SelectRI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 10MHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 0U> ;
  using 200KHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 1U> ;
  using 500KHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 2U> ;
  using 1MHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 3U> ;
  using GensOffz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 4U> ;
  using 40MHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 5U> ;
  using 80MHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 6U> ;
  using above_80MHz = FieldValue<MDR_BKP_REG_0E_SelectRI_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_Jtag_A_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_BKP_REG_0E_Jtag_A_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_BKP_REG_0E_Jtag_A_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_Jtag_B_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_BKP_REG_0E_Jtag_B_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_BKP_REG_0E_Jtag_B_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_Trim_dDUcc_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using +0.1 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 0U> ;
  using +0.06 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 1U> ;
  using +0.04 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 2U> ;
  using +0.01 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 3U> ;
  using -0.01 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 4U> ;
  using -0.04 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 5U> ;
  using -0.6 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 6U> ;
  using -0.1 = FieldValue<MDR_BKP_REG_0E_Trim_dDUcc_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_FPOR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Low = FieldValue<MDR_BKP_REG_0E_FPOR_Values, BaseType, 0U> ;
  using High = FieldValue<MDR_BKP_REG_0E_FPOR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0E_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IntFlash_JtagB = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 0U> ;
  using IntFlash_JtagA = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 1U> ;
  using ExtMem_JtagB = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 2U> ;
  using ExtMem_JtagOff = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 3U> ;
  using Uart_PD01 = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 5U> ;
  using Uart_PF01 = FieldValue<MDR_BKP_REG_0E_MODE_Values, BaseType, 6U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSE_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_BKP_REG_0F_LSE_ON_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_BKP_REG_0F_LSE_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSE_BYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_BKP_REG_0F_LSE_BYP_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_BKP_REG_0F_LSE_BYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_RTC_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LSI = FieldValue<MDR_BKP_REG_0F_RTC_SEL_Values, BaseType, 0U> ;
  using LSE = FieldValue<MDR_BKP_REG_0F_RTC_SEL_Values, BaseType, 1U> ;
  using HSIRTC = FieldValue<MDR_BKP_REG_0F_RTC_SEL_Values, BaseType, 2U> ;
  using HSERTC = FieldValue<MDR_BKP_REG_0F_RTC_SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_RTC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_REG_0F_RTC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_REG_0F_RTC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_RTC_CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSE_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NotReady = FieldValue<MDR_BKP_REG_0F_LSE_RDY_Values, BaseType, 0U> ;
  using Ready = FieldValue<MDR_BKP_REG_0F_LSE_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSI_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_REG_0F_LSI_ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_REG_0F_LSI_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSI_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using 69KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 0U> ;
  using 65KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 1U> ;
  using 60KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 2U> ;
  using 58KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 3U> ;
  using 52KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 4U> ;
  using 50KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 5U> ;
  using 49KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 6U> ;
  using 45KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 7U> ;
  using 44KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 8U> ;
  using 42KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 9U> ;
  using 40KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 10U> ;
  using 39KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 11U> ;
  using 37KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 12U> ;
  using 36KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 13U> ;
  using 35KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 14U> ;
  using 33KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 15U> ;
  using 32KHz = FieldValue<MDR_BKP_REG_0F_LSI_TRIM_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_LSI_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_REG_0F_LSI_RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_REG_0F_LSI_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_HSI_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_REG_0F_HSI_ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_REG_0F_HSI_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_HSI_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_REG_0F_HSI_RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_REG_0F_HSI_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_HSI_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_Standby_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<MDR_BKP_REG_0F_Standby_Values, BaseType, 0U> ;
  using Enable = FieldValue<MDR_BKP_REG_0F_Standby_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_REG_0F_RTC_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Active = FieldValue<MDR_BKP_REG_0F_RTC_RESET_Values, BaseType, 0U> ;
  using Reset = FieldValue<MDR_BKP_REG_0F_RTC_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_DIV_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_PRL_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_ALRM_Value_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_OWF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Off = FieldValue<MDR_BKP_RTC_CS_OWF_Values, BaseType, 0U> ;
  using On = FieldValue<MDR_BKP_RTC_CS_OWF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_SECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_RTC_CS_SECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_RTC_CS_SECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_ALRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_RTC_CS_ALRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_RTC_CS_ALRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_OWF_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_RTC_CS_OWF_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_RTC_CS_OWF_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_SECF_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_RTC_CS_SECF_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_RTC_CS_SECF_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_ALRF_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<MDR_BKP_RTC_CS_ALRF_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<MDR_BKP_RTC_CS_ALRF_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct MDR_BKP_RTC_CS_WEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Ready = FieldValue<MDR_BKP_RTC_CS_WEC_Values, BaseType, 0U> ;
  using Busy = FieldValue<MDR_BKP_RTC_CS_WEC_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(MDRBKPENUMS_HPP)
