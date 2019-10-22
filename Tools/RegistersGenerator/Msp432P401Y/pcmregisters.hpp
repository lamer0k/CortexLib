/*******************************************************************************
* Filename      : pcmregisters.hpp
*
* Details       : PCM. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(PCMREGISTERS_HPP)
#define PCMREGISTERS_HPP

#include "pcmbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PCM
{
  struct PCMPCMCTL0Base {} ;

  struct PCMCTL0 : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using AMR = PCM_PCMCTL_AMR_Values<PCM::PCMCTL0, 0, 4, ReadWriteMode, PCMPCMCTL0Base> ;
    using LPMR = PCM_PCMCTL_LPMR_Values<PCM::PCMCTL0, 4, 4, ReadWriteMode, PCMPCMCTL0Base> ;
    using CPM = PCM_PCMCTL_CPM_Values<PCM::PCMCTL0, 8, 6, ReadMode, PCMPCMCTL0Base> ;
    using PCMKEY = PCM_PCMCTL_PCMKEY_Values<PCM::PCMCTL0, 16, 16, ReadWriteMode, PCMPCMCTL0Base> ;
  } ;

  template<typename... T> 
  using PCMCTL0Pack  = Register<0x40010000, 32, ReadWriteMode, PCMPCMCTL0Base, T...> ;

  struct PCMPCMCTL1Base {} ;

  struct PCMCTL1 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using LOCKLPM5 = PCM_PCMCTL_LOCKLPM_Values<PCM::PCMCTL1, 0, 1, ReadWriteMode, PCMPCMCTL1Base> ;
    using LOCKBKUP = PCM_PCMCTL_LOCKBKUP_Values<PCM::PCMCTL1, 1, 1, ReadWriteMode, PCMPCMCTL1Base> ;
    using FORCE_LPM_ENTRY = PCM_PCMCTL_FORCE_LPM_ENTRY_Values<PCM::PCMCTL1, 2, 1, ReadWriteMode, PCMPCMCTL1Base> ;
    using PMR_BUSY = PCM_PCMCTL_PMR_BUSY_Values<PCM::PCMCTL1, 8, 1, ReadWriteMode, PCMPCMCTL1Base> ;
    using PCMKEY = PCM_PCMCTL_PCMKEY_Values<PCM::PCMCTL1, 16, 16, ReadWriteMode, PCMPCMCTL1Base> ;
  } ;

  template<typename... T> 
  using PCMCTL1Pack  = Register<0x40010004, 32, ReadWriteMode, PCMPCMCTL1Base, T...> ;

  struct PCMPCMIEBase {} ;

  struct PCMIE : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using LPM_INVALID_TR_IE = PCM_PCMIE_LPM_INVALID_TR_IE_Values<PCM::PCMIE, 0, 1, ReadWriteMode, PCMPCMIEBase> ;
    using LPM_INVALID_CLK_IE = PCM_PCMIE_LPM_INVALID_CLK_IE_Values<PCM::PCMIE, 1, 1, ReadWriteMode, PCMPCMIEBase> ;
    using AM_INVALID_TR_IE = PCM_PCMIE_AM_INVALID_TR_IE_Values<PCM::PCMIE, 2, 1, ReadWriteMode, PCMPCMIEBase> ;
    using DCDC_ERROR_IE = PCM_PCMIE_DCDC_ERROR_IE_Values<PCM::PCMIE, 6, 1, ReadWriteMode, PCMPCMIEBase> ;
  } ;

  template<typename... T> 
  using PCMIEPack  = Register<0x40010008, 32, ReadWriteMode, PCMPCMIEBase, T...> ;

  struct PCMPCMIFGBase {} ;

  struct PCMIFG : public RegisterBase<0x4001000C, 32, ReadMode>
  {
    using LPM_INVALID_TR_IFG = PCM_PCMIFG_LPM_INVALID_TR_IFG_Values<PCM::PCMIFG, 0, 1, ReadMode, PCMPCMIFGBase> ;
    using LPM_INVALID_CLK_IFG = PCM_PCMIFG_LPM_INVALID_CLK_IFG_Values<PCM::PCMIFG, 1, 1, ReadMode, PCMPCMIFGBase> ;
    using AM_INVALID_TR_IFG = PCM_PCMIFG_AM_INVALID_TR_IFG_Values<PCM::PCMIFG, 2, 1, ReadMode, PCMPCMIFGBase> ;
    using DCDC_ERROR_IFG = PCM_PCMIFG_DCDC_ERROR_IFG_Values<PCM::PCMIFG, 6, 1, ReadMode, PCMPCMIFGBase> ;
  } ;

  template<typename... T> 
  using PCMIFGPack  = Register<0x4001000C, 32, ReadMode, PCMPCMIFGBase, T...> ;

  struct PCMPCMCLRIFGBase {} ;

  struct PCMCLRIFG : public RegisterBase<0x40010010, 32, WriteMode>
  {
    using CLR_LPM_INVALID_TR_IFG = PCM_PCMCLRIFG_CLR_LPM_INVALID_TR_IFG_Values<PCM::PCMCLRIFG, 0, 1, WriteMode, PCMPCMCLRIFGBase> ;
    using CLR_LPM_INVALID_CLK_IFG = PCM_PCMCLRIFG_CLR_LPM_INVALID_CLK_IFG_Values<PCM::PCMCLRIFG, 1, 1, WriteMode, PCMPCMCLRIFGBase> ;
    using CLR_AM_INVALID_TR_IFG = PCM_PCMCLRIFG_CLR_AM_INVALID_TR_IFG_Values<PCM::PCMCLRIFG, 2, 1, WriteMode, PCMPCMCLRIFGBase> ;
    using CLR_DCDC_ERROR_IFG = PCM_PCMCLRIFG_CLR_DCDC_ERROR_IFG_Values<PCM::PCMCLRIFG, 6, 1, WriteMode, PCMPCMCLRIFGBase> ;
  } ;

  template<typename... T> 
  using PCMCLRIFGPack  = Register<0x40010010, 32, WriteMode, PCMPCMCLRIFGBase, T...> ;

} ;

#endif //#if !defined(PCMREGISTERS_HPP)
