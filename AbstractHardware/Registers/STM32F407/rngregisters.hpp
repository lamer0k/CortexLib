/*******************************************************************************
* Filename      : rngregisters.hpp
*
* Details       : Random number generator. This header file is auto-generated
*                 for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(RNGREGISTERS_HPP)
#define RNGREGISTERS_HPP

#include "rngfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RNG
{
  struct RNGCRBase {} ;

  struct CR : public RegisterBase<0x50060800, 32, ReadWriteMode>
  {
    using IE = RNG_CR_IE_Values<RNG::CR, 3, 1, ReadWriteMode, RNGCRBase> ;
    using RNGEN = RNG_CR_RNGEN_Values<RNG::CR, 2, 1, ReadWriteMode, RNGCRBase> ;
    using FieldValues = RNG_CR_RNGEN_Values<RNG::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50060800, 32, ReadWriteMode, RNGCRBase, T...> ;

  struct RNGSRBase {} ;

  struct SR : public RegisterBase<0x50060804, 32, ReadWriteMode>
  {
    using SEIS = RNG_SR_SEIS_Values<RNG::SR, 6, 1, ReadWriteMode, RNGSRBase> ;
    using CEIS = RNG_SR_CEIS_Values<RNG::SR, 5, 1, ReadWriteMode, RNGSRBase> ;
    using SECS = RNG_SR_SECS_Values<RNG::SR, 2, 1, ReadMode, RNGSRBase> ;
    using CECS = RNG_SR_CECS_Values<RNG::SR, 1, 1, ReadMode, RNGSRBase> ;
    using DRDY = RNG_SR_DRDY_Values<RNG::SR, 0, 1, ReadMode, RNGSRBase> ;
    using FieldValues = RNG_SR_DRDY_Values<RNG::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50060804, 32, ReadWriteMode, RNGSRBase, T...> ;

  struct RNGDRBase {} ;

  struct DR : public RegisterBase<0x50060808, 32, ReadMode>
  {
    using RNDATA = RNG_DR_RNDATA_Values<RNG::DR, 0, 32, ReadMode, RNGDRBase> ;
    using FieldValues = RNG_DR_RNDATA_Values<RNG::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50060808, 32, ReadMode, RNGDRBase, T...> ;

} ;

#endif //#if !defined(RNGREGISTERS_HPP)
