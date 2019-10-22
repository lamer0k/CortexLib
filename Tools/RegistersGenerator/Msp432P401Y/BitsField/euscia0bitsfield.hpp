/*******************************************************************************
* Filename      : euscia0bitsfield.hpp
*
* Details       : Enumerations related with EUSCI_A0 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(EUSCIA0ENUMS_HPP)
#define EUSCIA0ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWRST_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSWRST_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCTXBRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXBRK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXBRK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCTXADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXADDR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXADDR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCDORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCDORM_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCDORM_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCBRKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBRKIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBRKIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCRXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXEIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXEIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCSSEL_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSYNC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSYNC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMODE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCMODE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCMODE_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCMODE_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCSPB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSPB_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSPB_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCBIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UC7BIT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UC7BIT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCMSB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMSB_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCMSB_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCPAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPAR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCPAR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCPEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxCTLW_UCGLIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGLIT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCGLIT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCGLIT_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCGLIT_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxBRW_UCBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxMCTLW_UCOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOS16_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCOS16_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxMCTLW_UCBRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxMCTLW_UCBRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBUSY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBUSY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCADDR_UCIDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using Value1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCRXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXERR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXERR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCBRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBRK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBRK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCPE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCOE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCFE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCFE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxSTATW_UCLISTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCLISTEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCLISTEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxRXBUF_UCRXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxTXBUF_UCTXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxABCTL_UCABDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCABDEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCABDEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxABCTL_UCBTOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBTOE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBTOE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxABCTL_UCSTOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTOE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTOE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxABCTL_UCDELIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCDELIM_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCDELIM_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCDELIM_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCDELIM_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIREN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCIREN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIRTXCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRTXCLK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCIRTXCLK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIRTXPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIRRXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRRXFE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCIRRXFE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIRRXPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRRXPL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCIRRXPL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIRCTL_UCIRRXFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIE_UCRXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIE_UCTXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIE_UCSTTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIE_UCTXCPTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXCPTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXCPTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIFG_UCRXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIFG_UCTXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIFG_UCSTTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIFG_UCTXCPTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXCPTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXCPTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A_UCAxIV_UCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(EUSCIA0ENUMS_HPP)
