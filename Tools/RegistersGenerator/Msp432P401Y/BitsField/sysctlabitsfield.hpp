/*******************************************************************************
* Filename      : sysctlabitsfield.hpp
*
* Details       : Enumerations related with SYSCTL_A peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(SYSCTLAENUMS_HPP)
#define SYSCTLAENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_REBOOT_CTL_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_REBOOT_CTL_WKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_CS_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CS_SRC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CS_SRC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PSS_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PSS_SRC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PSS_SRC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PCM_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PCM_SRC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PCM_SRC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PIN_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PIN_SRC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PIN_SRC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_CS_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CS_FLG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using CS_FLG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PSS_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PSS_FLG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PSS_FLG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PCM_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PCM_FLG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PCM_FLG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PIN_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PIN_FLG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using PIN_FLG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_WDTRESET_CTL_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TIMEOUT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using TIMEOUT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_WDTRESET_CTL_VIOLATION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VIOLATION_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using VIOLATION_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T16_0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_T16_0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUA0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_eUA0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUB0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_eUB0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_ADC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_ADC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_ADC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_WDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_WDT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_WDT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_DMA_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_DMA_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_LCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_LCD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using HALT_LCD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_NUMBANKS_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_NUMBLOCKS_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_MAINFLASH_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_INFOFLASH_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_DIO_GLTFLT_CTL_GLTCH_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using GLTCH_EN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using GLTCH_EN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SECDATA_UNLOCK_UNLKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL_BNK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL_BLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_STAT_BNKEN_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNKEN_RDY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using BNKEN_RDY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_STAT_BLKRET_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLKRET_RDY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using BLKRET_RDY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_MASTER_UNLOCK_UNLKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_BOOTOVER_ACK_REGVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_POR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_WKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_SOFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_HARD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_SOFT_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_HARD_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_RBT_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_DBG_SEC_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_JTAG_SWD_LOCK_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_IP_PROT_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_BOOTOVER_REQ_REGVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SYSCTLAENUMS_HPP)
