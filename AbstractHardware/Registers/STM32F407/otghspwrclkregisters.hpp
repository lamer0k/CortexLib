/*******************************************************************************
* Filename      : otghspwrclkregisters.hpp
*
* Details       : USB on the go high speed. This header file is auto-generated
*                 for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(OTGHSPWRCLKREGISTERS_HPP)
#define OTGHSPWRCLKREGISTERS_HPP

#include "otghspwrclkfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG_HS_PWRCLK
{
  struct OTG_HS_PWRCLKOTG_HS_PCGCRBase {} ;

  struct OTG_HS_PCGCR : public RegisterBase<0x40040E00, 32, ReadWriteMode>
  {
    using STPPCLK = OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values<OTG_HS_PWRCLK::OTG_HS_PCGCR, 0, 1, ReadWriteMode, OTG_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using GATEHCLK = OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values<OTG_HS_PWRCLK::OTG_HS_PCGCR, 1, 1, ReadWriteMode, OTG_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using PHYSUSP = OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values<OTG_HS_PWRCLK::OTG_HS_PCGCR, 4, 1, ReadWriteMode, OTG_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using FieldValues = OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values<OTG_HS_PWRCLK::OTG_HS_PCGCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTG_HS_PCGCRPack  = Register<0x40040E00, 32, ReadWriteMode, OTG_HS_PWRCLKOTG_HS_PCGCRBase, T...> ;

} ;

#endif //#if !defined(OTGHSPWRCLKREGISTERS_HPP)
