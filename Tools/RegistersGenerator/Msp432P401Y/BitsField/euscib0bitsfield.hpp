/*******************************************************************************
* Filename      : euscib0bitsfield.hpp
*
* Details       : Enumerations related with EUSCI_B0 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(EUSCIB0ENUMS_HPP)
#define EUSCIB0ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWRST_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSWRST_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCTXSTT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXSTT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXSTT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCTXSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXSTP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXSTP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCTXNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXNACK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXNACK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCTXACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXACK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXACK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSSEL_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSSEL_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCSSEL_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCSSEL_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSYNC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSYNC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMODE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCMODE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCMODE_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCMODE_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCMST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMST_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCMST_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMM_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCMM_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSLA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSLA10_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSLA10_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCA10_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCA10_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCGLIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGLIT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCGLIT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCGLIT_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCGLIT_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCASTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCASTP_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCASTP_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCASTP_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSWACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWACK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSWACK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCSTPNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPNACK_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTPNACK_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCCLTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTO_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCCLTO_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using UCCLTO_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using UCCLTO_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxCTLW_UCETXINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCETXINT_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCETXINT_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxBRW_UCBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxSTATW_UCBBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBBUSY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBBUSY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxSTATW_UCGC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGC_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCGC_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxSTATW_UCSCLLOW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSCLLOW_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSCLLOW_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxSTATW_UCBCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxTBCNT_UCTBCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxRXBUF_UCRXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxTXBUF_UCTXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxICOA_ICOA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxICOA_UCOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOAEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCOAEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxICOA_UCGCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGCEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCGCEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxADDRX_ADDRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxADDMASK_ADDMASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxICSA_ICSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCRXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXIE0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCTXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXIE0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCSTTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCSTPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTPIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCALIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCALIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCALIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCNACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCNACKIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCNACKIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCBCNTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBCNTIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBCNTIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCCLTOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTOIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCCLTOIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIE_UCBITIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBIT9IE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBIT9IE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCRXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCRXIFG0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCTXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG0_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCTXIFG0_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCSTTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCSTPIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCSTPIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCALIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCALIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCNACKIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCNACKIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCNACKIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCBCNTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBCNTIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBCNTIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCCLTOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTOIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCCLTOIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIFG_UCBITIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBIT9IFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using UCBIT9IFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B_UCBxIV_UCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(EUSCIB0ENUMS_HPP)
