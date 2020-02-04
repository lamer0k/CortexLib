/*******************************************************************************
* Filename      : tscregisters.hpp
*
* Details       : Touch sensing controller. This header file is auto-generated
*                 for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(TSCREGISTERS_HPP)
#define TSCREGISTERS_HPP

#include "tscfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TSC
{
  struct TSCCRBase {} ;

  struct CR : public RegisterBase<0x40024000, 32, ReadWriteMode>
  {
    using CTPH = TSC_CR_CTPH_Values<TSC::CR, 28, 4, ReadWriteMode, TSCCRBase> ;
    using CTPL = TSC_CR_CTPL_Values<TSC::CR, 24, 4, ReadWriteMode, TSCCRBase> ;
    using SSD = TSC_CR_SSD_Values<TSC::CR, 17, 7, ReadWriteMode, TSCCRBase> ;
    using SSE = TSC_CR_SSE_Values<TSC::CR, 16, 1, ReadWriteMode, TSCCRBase> ;
    using SSPSC = TSC_CR_SSPSC_Values<TSC::CR, 15, 1, ReadWriteMode, TSCCRBase> ;
    using PGPSC = TSC_CR_PGPSC_Values<TSC::CR, 12, 3, ReadWriteMode, TSCCRBase> ;
    using MCV = TSC_CR_MCV_Values<TSC::CR, 5, 3, ReadWriteMode, TSCCRBase> ;
    using IODEF = TSC_CR_IODEF_Values<TSC::CR, 4, 1, ReadWriteMode, TSCCRBase> ;
    using SYNCPOL = TSC_CR_SYNCPOL_Values<TSC::CR, 3, 1, ReadWriteMode, TSCCRBase> ;
    using AM = TSC_CR_AM_Values<TSC::CR, 2, 1, ReadWriteMode, TSCCRBase> ;
    using START = TSC_CR_START_Values<TSC::CR, 1, 1, ReadWriteMode, TSCCRBase> ;
    using TSCE = TSC_CR_TSCE_Values<TSC::CR, 0, 1, ReadWriteMode, TSCCRBase> ;
    using FieldValues = TSC_CR_TSCE_Values<TSC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40024000, 32, ReadWriteMode, TSCCRBase, T...> ;

  struct TSCIERBase {} ;

  struct IER : public RegisterBase<0x40024004, 32, ReadWriteMode>
  {
    using MCEIE = TSC_IER_MCEIE_Values<TSC::IER, 1, 1, ReadWriteMode, TSCIERBase> ;
    using EOAIE = TSC_IER_EOAIE_Values<TSC::IER, 0, 1, ReadWriteMode, TSCIERBase> ;
    using FieldValues = TSC_IER_EOAIE_Values<TSC::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40024004, 32, ReadWriteMode, TSCIERBase, T...> ;

  struct TSCICRBase {} ;

  struct ICR : public RegisterBase<0x40024008, 32, ReadWriteMode>
  {
    using MCEIC = TSC_ICR_MCEIC_Values<TSC::ICR, 1, 1, ReadWriteMode, TSCICRBase> ;
    using EOAIC = TSC_ICR_EOAIC_Values<TSC::ICR, 0, 1, ReadWriteMode, TSCICRBase> ;
    using FieldValues = TSC_ICR_EOAIC_Values<TSC::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40024008, 32, ReadWriteMode, TSCICRBase, T...> ;

  struct TSCISRBase {} ;

  struct ISR : public RegisterBase<0x4002400C, 32, ReadWriteMode>
  {
    using MCEF = TSC_ISR_MCEF_Values<TSC::ISR, 1, 1, ReadWriteMode, TSCISRBase> ;
    using EOAF = TSC_ISR_EOAF_Values<TSC::ISR, 0, 1, ReadWriteMode, TSCISRBase> ;
    using FieldValues = TSC_ISR_EOAF_Values<TSC::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4002400C, 32, ReadWriteMode, TSCISRBase, T...> ;

  struct TSCIOHCRBase {} ;

  struct IOHCR : public RegisterBase<0x40024010, 32, ReadWriteMode>
  {
    using G6_IO4 = TSC_IOHCR_G6_IO4_Values<TSC::IOHCR, 23, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G6_IO3 = TSC_IOHCR_G6_IO3_Values<TSC::IOHCR, 22, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G6_IO2 = TSC_IOHCR_G6_IO2_Values<TSC::IOHCR, 21, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G6_IO1 = TSC_IOHCR_G6_IO1_Values<TSC::IOHCR, 20, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G5_IO4 = TSC_IOHCR_G5_IO4_Values<TSC::IOHCR, 19, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G5_IO3 = TSC_IOHCR_G5_IO3_Values<TSC::IOHCR, 18, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G5_IO2 = TSC_IOHCR_G5_IO2_Values<TSC::IOHCR, 17, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G5_IO1 = TSC_IOHCR_G5_IO1_Values<TSC::IOHCR, 16, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G4_IO4 = TSC_IOHCR_G4_IO4_Values<TSC::IOHCR, 15, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G4_IO3 = TSC_IOHCR_G4_IO3_Values<TSC::IOHCR, 14, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G4_IO2 = TSC_IOHCR_G4_IO2_Values<TSC::IOHCR, 13, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G4_IO1 = TSC_IOHCR_G4_IO1_Values<TSC::IOHCR, 12, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G3_IO4 = TSC_IOHCR_G3_IO4_Values<TSC::IOHCR, 11, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G3_IO3 = TSC_IOHCR_G3_IO3_Values<TSC::IOHCR, 10, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G3_IO2 = TSC_IOHCR_G3_IO2_Values<TSC::IOHCR, 9, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G3_IO1 = TSC_IOHCR_G3_IO1_Values<TSC::IOHCR, 8, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G2_IO4 = TSC_IOHCR_G2_IO4_Values<TSC::IOHCR, 7, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G2_IO3 = TSC_IOHCR_G2_IO3_Values<TSC::IOHCR, 6, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G2_IO2 = TSC_IOHCR_G2_IO2_Values<TSC::IOHCR, 5, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G2_IO1 = TSC_IOHCR_G2_IO1_Values<TSC::IOHCR, 4, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G1_IO4 = TSC_IOHCR_G1_IO4_Values<TSC::IOHCR, 3, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G1_IO3 = TSC_IOHCR_G1_IO3_Values<TSC::IOHCR, 2, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G1_IO2 = TSC_IOHCR_G1_IO2_Values<TSC::IOHCR, 1, 1, ReadWriteMode, TSCIOHCRBase> ;
    using G1_IO1 = TSC_IOHCR_G1_IO1_Values<TSC::IOHCR, 0, 1, ReadWriteMode, TSCIOHCRBase> ;
    using FieldValues = TSC_IOHCR_G1_IO1_Values<TSC::IOHCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOHCRPack  = Register<0x40024010, 32, ReadWriteMode, TSCIOHCRBase, T...> ;

  struct TSCIOASCRBase {} ;

  struct IOASCR : public RegisterBase<0x40024018, 32, ReadWriteMode>
  {
    using G6_IO4 = TSC_IOASCR_G6_IO4_Values<TSC::IOASCR, 23, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G6_IO3 = TSC_IOASCR_G6_IO3_Values<TSC::IOASCR, 22, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G6_IO2 = TSC_IOASCR_G6_IO2_Values<TSC::IOASCR, 21, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G6_IO1 = TSC_IOASCR_G6_IO1_Values<TSC::IOASCR, 20, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G5_IO4 = TSC_IOASCR_G5_IO4_Values<TSC::IOASCR, 19, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G5_IO3 = TSC_IOASCR_G5_IO3_Values<TSC::IOASCR, 18, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G5_IO2 = TSC_IOASCR_G5_IO2_Values<TSC::IOASCR, 17, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G5_IO1 = TSC_IOASCR_G5_IO1_Values<TSC::IOASCR, 16, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G4_IO4 = TSC_IOASCR_G4_IO4_Values<TSC::IOASCR, 15, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G4_IO3 = TSC_IOASCR_G4_IO3_Values<TSC::IOASCR, 14, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G4_IO2 = TSC_IOASCR_G4_IO2_Values<TSC::IOASCR, 13, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G4_IO1 = TSC_IOASCR_G4_IO1_Values<TSC::IOASCR, 12, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G3_IO4 = TSC_IOASCR_G3_IO4_Values<TSC::IOASCR, 11, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G3_IO3 = TSC_IOASCR_G3_IO3_Values<TSC::IOASCR, 10, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G3_IO2 = TSC_IOASCR_G3_IO2_Values<TSC::IOASCR, 9, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G3_IO1 = TSC_IOASCR_G3_IO1_Values<TSC::IOASCR, 8, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G2_IO4 = TSC_IOASCR_G2_IO4_Values<TSC::IOASCR, 7, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G2_IO3 = TSC_IOASCR_G2_IO3_Values<TSC::IOASCR, 6, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G2_IO2 = TSC_IOASCR_G2_IO2_Values<TSC::IOASCR, 5, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G2_IO1 = TSC_IOASCR_G2_IO1_Values<TSC::IOASCR, 4, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G1_IO4 = TSC_IOASCR_G1_IO4_Values<TSC::IOASCR, 3, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G1_IO3 = TSC_IOASCR_G1_IO3_Values<TSC::IOASCR, 2, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G1_IO2 = TSC_IOASCR_G1_IO2_Values<TSC::IOASCR, 1, 1, ReadWriteMode, TSCIOASCRBase> ;
    using G1_IO1 = TSC_IOASCR_G1_IO1_Values<TSC::IOASCR, 0, 1, ReadWriteMode, TSCIOASCRBase> ;
    using FieldValues = TSC_IOASCR_G1_IO1_Values<TSC::IOASCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOASCRPack  = Register<0x40024018, 32, ReadWriteMode, TSCIOASCRBase, T...> ;

  struct TSCIOSCRBase {} ;

  struct IOSCR : public RegisterBase<0x40024020, 32, ReadWriteMode>
  {
    using G6_IO4 = TSC_IOSCR_G6_IO4_Values<TSC::IOSCR, 23, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G6_IO3 = TSC_IOSCR_G6_IO3_Values<TSC::IOSCR, 22, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G6_IO2 = TSC_IOSCR_G6_IO2_Values<TSC::IOSCR, 21, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G6_IO1 = TSC_IOSCR_G6_IO1_Values<TSC::IOSCR, 20, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G5_IO4 = TSC_IOSCR_G5_IO4_Values<TSC::IOSCR, 19, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G5_IO3 = TSC_IOSCR_G5_IO3_Values<TSC::IOSCR, 18, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G5_IO2 = TSC_IOSCR_G5_IO2_Values<TSC::IOSCR, 17, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G5_IO1 = TSC_IOSCR_G5_IO1_Values<TSC::IOSCR, 16, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G4_IO4 = TSC_IOSCR_G4_IO4_Values<TSC::IOSCR, 15, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G4_IO3 = TSC_IOSCR_G4_IO3_Values<TSC::IOSCR, 14, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G4_IO2 = TSC_IOSCR_G4_IO2_Values<TSC::IOSCR, 13, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G4_IO1 = TSC_IOSCR_G4_IO1_Values<TSC::IOSCR, 12, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G3_IO4 = TSC_IOSCR_G3_IO4_Values<TSC::IOSCR, 11, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G3_IO3 = TSC_IOSCR_G3_IO3_Values<TSC::IOSCR, 10, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G3_IO2 = TSC_IOSCR_G3_IO2_Values<TSC::IOSCR, 9, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G3_IO1 = TSC_IOSCR_G3_IO1_Values<TSC::IOSCR, 8, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G2_IO4 = TSC_IOSCR_G2_IO4_Values<TSC::IOSCR, 7, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G2_IO3 = TSC_IOSCR_G2_IO3_Values<TSC::IOSCR, 6, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G2_IO2 = TSC_IOSCR_G2_IO2_Values<TSC::IOSCR, 5, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G2_IO1 = TSC_IOSCR_G2_IO1_Values<TSC::IOSCR, 4, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G1_IO4 = TSC_IOSCR_G1_IO4_Values<TSC::IOSCR, 3, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G1_IO3 = TSC_IOSCR_G1_IO3_Values<TSC::IOSCR, 2, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G1_IO2 = TSC_IOSCR_G1_IO2_Values<TSC::IOSCR, 1, 1, ReadWriteMode, TSCIOSCRBase> ;
    using G1_IO1 = TSC_IOSCR_G1_IO1_Values<TSC::IOSCR, 0, 1, ReadWriteMode, TSCIOSCRBase> ;
    using FieldValues = TSC_IOSCR_G1_IO1_Values<TSC::IOSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOSCRPack  = Register<0x40024020, 32, ReadWriteMode, TSCIOSCRBase, T...> ;

  struct TSCIOCCRBase {} ;

  struct IOCCR : public RegisterBase<0x40024028, 32, ReadWriteMode>
  {
    using G6_IO4 = TSC_IOCCR_G6_IO4_Values<TSC::IOCCR, 23, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G6_IO3 = TSC_IOCCR_G6_IO3_Values<TSC::IOCCR, 22, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G6_IO2 = TSC_IOCCR_G6_IO2_Values<TSC::IOCCR, 21, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G6_IO1 = TSC_IOCCR_G6_IO1_Values<TSC::IOCCR, 20, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G5_IO4 = TSC_IOCCR_G5_IO4_Values<TSC::IOCCR, 19, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G5_IO3 = TSC_IOCCR_G5_IO3_Values<TSC::IOCCR, 18, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G5_IO2 = TSC_IOCCR_G5_IO2_Values<TSC::IOCCR, 17, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G5_IO1 = TSC_IOCCR_G5_IO1_Values<TSC::IOCCR, 16, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G4_IO4 = TSC_IOCCR_G4_IO4_Values<TSC::IOCCR, 15, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G4_IO3 = TSC_IOCCR_G4_IO3_Values<TSC::IOCCR, 14, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G4_IO2 = TSC_IOCCR_G4_IO2_Values<TSC::IOCCR, 13, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G4_IO1 = TSC_IOCCR_G4_IO1_Values<TSC::IOCCR, 12, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G3_IO4 = TSC_IOCCR_G3_IO4_Values<TSC::IOCCR, 11, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G3_IO3 = TSC_IOCCR_G3_IO3_Values<TSC::IOCCR, 10, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G3_IO2 = TSC_IOCCR_G3_IO2_Values<TSC::IOCCR, 9, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G3_IO1 = TSC_IOCCR_G3_IO1_Values<TSC::IOCCR, 8, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G2_IO4 = TSC_IOCCR_G2_IO4_Values<TSC::IOCCR, 7, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G2_IO3 = TSC_IOCCR_G2_IO3_Values<TSC::IOCCR, 6, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G2_IO2 = TSC_IOCCR_G2_IO2_Values<TSC::IOCCR, 5, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G2_IO1 = TSC_IOCCR_G2_IO1_Values<TSC::IOCCR, 4, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G1_IO4 = TSC_IOCCR_G1_IO4_Values<TSC::IOCCR, 3, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G1_IO3 = TSC_IOCCR_G1_IO3_Values<TSC::IOCCR, 2, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G1_IO2 = TSC_IOCCR_G1_IO2_Values<TSC::IOCCR, 1, 1, ReadWriteMode, TSCIOCCRBase> ;
    using G1_IO1 = TSC_IOCCR_G1_IO1_Values<TSC::IOCCR, 0, 1, ReadWriteMode, TSCIOCCRBase> ;
    using FieldValues = TSC_IOCCR_G1_IO1_Values<TSC::IOCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOCCRPack  = Register<0x40024028, 32, ReadWriteMode, TSCIOCCRBase, T...> ;

  struct TSCIOGCSRBase {} ;

  struct IOGCSR : public RegisterBase<0x40024030, 32, ReadWriteMode>
  {
    using G8S = TSC_IOGCSR_G8S_Values<TSC::IOGCSR, 23, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G7S = TSC_IOGCSR_G7S_Values<TSC::IOGCSR, 22, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G6S = TSC_IOGCSR_G6S_Values<TSC::IOGCSR, 21, 1, ReadMode, TSCIOGCSRBase> ;
    using G5S = TSC_IOGCSR_G5S_Values<TSC::IOGCSR, 20, 1, ReadMode, TSCIOGCSRBase> ;
    using G4S = TSC_IOGCSR_G4S_Values<TSC::IOGCSR, 19, 1, ReadMode, TSCIOGCSRBase> ;
    using G3S = TSC_IOGCSR_G3S_Values<TSC::IOGCSR, 18, 1, ReadMode, TSCIOGCSRBase> ;
    using G2S = TSC_IOGCSR_G2S_Values<TSC::IOGCSR, 17, 1, ReadMode, TSCIOGCSRBase> ;
    using G1S = TSC_IOGCSR_G1S_Values<TSC::IOGCSR, 16, 1, ReadMode, TSCIOGCSRBase> ;
    using G8E = TSC_IOGCSR_G8E_Values<TSC::IOGCSR, 7, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G7E = TSC_IOGCSR_G7E_Values<TSC::IOGCSR, 6, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G6E = TSC_IOGCSR_G6E_Values<TSC::IOGCSR, 5, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G5E = TSC_IOGCSR_G5E_Values<TSC::IOGCSR, 4, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G4E = TSC_IOGCSR_G4E_Values<TSC::IOGCSR, 3, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G3E = TSC_IOGCSR_G3E_Values<TSC::IOGCSR, 2, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G2E = TSC_IOGCSR_G2E_Values<TSC::IOGCSR, 1, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using G1E = TSC_IOGCSR_G1E_Values<TSC::IOGCSR, 0, 1, ReadWriteMode, TSCIOGCSRBase> ;
    using FieldValues = TSC_IOGCSR_G1E_Values<TSC::IOGCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOGCSRPack  = Register<0x40024030, 32, ReadWriteMode, TSCIOGCSRBase, T...> ;

  struct TSCIOG1CRBase {} ;

  struct IOG1CR : public RegisterBase<0x40024034, 32, ReadMode>
  {
    using CNT = TSC_IOG1CR_CNT_Values<TSC::IOG1CR, 0, 14, ReadMode, TSCIOG1CRBase> ;
    using FieldValues = TSC_IOG1CR_CNT_Values<TSC::IOG1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG1CRPack  = Register<0x40024034, 32, ReadMode, TSCIOG1CRBase, T...> ;

  struct TSCIOG2CRBase {} ;

  struct IOG2CR : public RegisterBase<0x40024038, 32, ReadMode>
  {
    using CNT = TSC_IOG2CR_CNT_Values<TSC::IOG2CR, 0, 14, ReadMode, TSCIOG2CRBase> ;
    using FieldValues = TSC_IOG2CR_CNT_Values<TSC::IOG2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG2CRPack  = Register<0x40024038, 32, ReadMode, TSCIOG2CRBase, T...> ;

  struct TSCIOG3CRBase {} ;

  struct IOG3CR : public RegisterBase<0x4002403C, 32, ReadMode>
  {
    using CNT = TSC_IOG3CR_CNT_Values<TSC::IOG3CR, 0, 14, ReadMode, TSCIOG3CRBase> ;
    using FieldValues = TSC_IOG3CR_CNT_Values<TSC::IOG3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG3CRPack  = Register<0x4002403C, 32, ReadMode, TSCIOG3CRBase, T...> ;

  struct TSCIOG4CRBase {} ;

  struct IOG4CR : public RegisterBase<0x40024040, 32, ReadMode>
  {
    using CNT = TSC_IOG4CR_CNT_Values<TSC::IOG4CR, 0, 14, ReadMode, TSCIOG4CRBase> ;
    using FieldValues = TSC_IOG4CR_CNT_Values<TSC::IOG4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG4CRPack  = Register<0x40024040, 32, ReadMode, TSCIOG4CRBase, T...> ;

  struct TSCIOG5CRBase {} ;

  struct IOG5CR : public RegisterBase<0x40024044, 32, ReadMode>
  {
    using CNT = TSC_IOG5CR_CNT_Values<TSC::IOG5CR, 0, 14, ReadMode, TSCIOG5CRBase> ;
    using FieldValues = TSC_IOG5CR_CNT_Values<TSC::IOG5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG5CRPack  = Register<0x40024044, 32, ReadMode, TSCIOG5CRBase, T...> ;

  struct TSCIOG6CRBase {} ;

  struct IOG6CR : public RegisterBase<0x40024048, 32, ReadMode>
  {
    using CNT = TSC_IOG6CR_CNT_Values<TSC::IOG6CR, 0, 14, ReadMode, TSCIOG6CRBase> ;
    using FieldValues = TSC_IOG6CR_CNT_Values<TSC::IOG6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IOG6CRPack  = Register<0x40024048, 32, ReadMode, TSCIOG6CRBase, T...> ;

} ;

#endif //#if !defined(TSCREGISTERS_HPP)
