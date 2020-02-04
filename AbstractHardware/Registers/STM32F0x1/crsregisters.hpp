/*******************************************************************************
* Filename      : crsregisters.hpp
*
* Details       : Clock recovery system. This header file is auto-generated for
*                 STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(CRSREGISTERS_HPP)
#define CRSREGISTERS_HPP

#include "crsfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRS
{
  struct CRSCRBase {} ;

  struct CR : public RegisterBase<0x40006C00, 32, ReadWriteMode>
  {
    using TRIM = CRS_CR_TRIM_Values<CRS::CR, 8, 6, ReadWriteMode, CRSCRBase> ;
    using SWSYNC = CRS_CR_SWSYNC_Values<CRS::CR, 7, 1, ReadWriteMode, CRSCRBase> ;
    using AUTOTRIMEN = CRS_CR_AUTOTRIMEN_Values<CRS::CR, 6, 1, ReadWriteMode, CRSCRBase> ;
    using CEN = CRS_CR_CEN_Values<CRS::CR, 5, 1, ReadWriteMode, CRSCRBase> ;
    using ESYNCIE = CRS_CR_ESYNCIE_Values<CRS::CR, 3, 1, ReadWriteMode, CRSCRBase> ;
    using ERRIE = CRS_CR_ERRIE_Values<CRS::CR, 2, 1, ReadWriteMode, CRSCRBase> ;
    using SYNCWARNIE = CRS_CR_SYNCWARNIE_Values<CRS::CR, 1, 1, ReadWriteMode, CRSCRBase> ;
    using SYNCOKIE = CRS_CR_SYNCOKIE_Values<CRS::CR, 0, 1, ReadWriteMode, CRSCRBase> ;
    using FieldValues = CRS_CR_SYNCOKIE_Values<CRS::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40006C00, 32, ReadWriteMode, CRSCRBase, T...> ;

  struct CRSCFGRBase {} ;

  struct CFGR : public RegisterBase<0x40006C04, 32, ReadWriteMode>
  {
    using SYNCPOL = CRS_CFGR_SYNCPOL_Values<CRS::CFGR, 31, 1, ReadWriteMode, CRSCFGRBase> ;
    using SYNCSRC = CRS_CFGR_SYNCSRC_Values<CRS::CFGR, 28, 2, ReadWriteMode, CRSCFGRBase> ;
    using SYNCDIV = CRS_CFGR_SYNCDIV_Values<CRS::CFGR, 24, 3, ReadWriteMode, CRSCFGRBase> ;
    using FELIM = CRS_CFGR_FELIM_Values<CRS::CFGR, 16, 8, ReadWriteMode, CRSCFGRBase> ;
    using RELOAD = CRS_CFGR_RELOAD_Values<CRS::CFGR, 0, 16, ReadWriteMode, CRSCFGRBase> ;
    using FieldValues = CRS_CFGR_RELOAD_Values<CRS::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40006C04, 32, ReadWriteMode, CRSCFGRBase, T...> ;

  struct CRSISRBase {} ;

  struct ISR : public RegisterBase<0x40006C08, 32, ReadMode>
  {
    using FECAP = CRS_ISR_FECAP_Values<CRS::ISR, 16, 16, ReadMode, CRSISRBase> ;
    using FEDIR = CRS_ISR_FEDIR_Values<CRS::ISR, 15, 1, ReadMode, CRSISRBase> ;
    using TRIMOVF = CRS_ISR_TRIMOVF_Values<CRS::ISR, 10, 1, ReadMode, CRSISRBase> ;
    using SYNCMISS = CRS_ISR_SYNCMISS_Values<CRS::ISR, 9, 1, ReadMode, CRSISRBase> ;
    using SYNCERR = CRS_ISR_SYNCERR_Values<CRS::ISR, 8, 1, ReadMode, CRSISRBase> ;
    using ESYNCF = CRS_ISR_ESYNCF_Values<CRS::ISR, 3, 1, ReadMode, CRSISRBase> ;
    using ERRF = CRS_ISR_ERRF_Values<CRS::ISR, 2, 1, ReadMode, CRSISRBase> ;
    using SYNCWARNF = CRS_ISR_SYNCWARNF_Values<CRS::ISR, 1, 1, ReadMode, CRSISRBase> ;
    using SYNCOKF = CRS_ISR_SYNCOKF_Values<CRS::ISR, 0, 1, ReadMode, CRSISRBase> ;
    using FieldValues = CRS_ISR_SYNCOKF_Values<CRS::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40006C08, 32, ReadMode, CRSISRBase, T...> ;

  struct CRSICRBase {} ;

  struct ICR : public RegisterBase<0x40006C0C, 32, ReadWriteMode>
  {
    using ESYNCC = CRS_ICR_ESYNCC_Values<CRS::ICR, 3, 1, ReadWriteMode, CRSICRBase> ;
    using ERRC = CRS_ICR_ERRC_Values<CRS::ICR, 2, 1, ReadWriteMode, CRSICRBase> ;
    using SYNCWARNC = CRS_ICR_SYNCWARNC_Values<CRS::ICR, 1, 1, ReadWriteMode, CRSICRBase> ;
    using SYNCOKC = CRS_ICR_SYNCOKC_Values<CRS::ICR, 0, 1, ReadWriteMode, CRSICRBase> ;
    using FieldValues = CRS_ICR_SYNCOKC_Values<CRS::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40006C0C, 32, ReadWriteMode, CRSICRBase, T...> ;

} ;

#endif //#if !defined(CRSREGISTERS_HPP)
