/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(PWRREGISTERS_HPP)
#define PWRREGISTERS_HPP

#include "pwrbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Pwr
{
  struct Cr : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using Vos = PwrCrVosValues<Pwr::Cr, 14, 2, ReadWriteMode, PwrCrVosValuesBase> ;
    using Adcdc1 = PwrCrAdcdcValues<Pwr::Cr, 13, 1, ReadWriteMode, PwrCrAdcdcValuesBase> ;
    using Fpds = PwrCrFpdsValues<Pwr::Cr, 9, 1, ReadWriteMode, PwrCrFpdsValuesBase> ;
    using Dbp = PwrCrDbpValues<Pwr::Cr, 8, 1, ReadWriteMode, PwrCrDbpValuesBase> ;
    using Pls = PwrCrPlsValues<Pwr::Cr, 5, 3, ReadWriteMode, PwrCrPlsValuesBase> ;
    using Pvde = PwrCrPvdeValues<Pwr::Cr, 4, 1, ReadWriteMode, PwrCrPvdeValuesBase> ;
    using Csbf = PwrCrCsbfValues<Pwr::Cr, 3, 1, ReadWriteMode, PwrCrCsbfValuesBase> ;
    using Cwuf = PwrCrCwufValues<Pwr::Cr, 2, 1, ReadWriteMode, PwrCrCwufValuesBase> ;
    using Pdds = PwrCrPddsValues<Pwr::Cr, 1, 1, ReadWriteMode, PwrCrPddsValuesBase> ;
    using Lpds = PwrCrLpdsValues<Pwr::Cr, 0, 1, ReadWriteMode, PwrCrLpdsValuesBase> ;
  } ;

  template<typename... T> 
  using CrPack  = Register<0x40007000, 32, ReadWriteMode, PwrCrVosValuesBase, T...> ;

  struct Csr : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using Wuf = PwrCsrWufValues<Pwr::Csr, 0, 1, ReadMode, PwrCsrWufValuesBase> ;
    using Sbf = PwrCsrSbfValues<Pwr::Csr, 1, 1, ReadMode, PwrCsrSbfValuesBase> ;
    using Pvdo = PwrCsrPvdoValues<Pwr::Csr, 2, 1, ReadMode, PwrCsrPvdoValuesBase> ;
    using Brr = PwrCsrBrrValues<Pwr::Csr, 3, 1, ReadMode, PwrCsrBrrValuesBase> ;
    using Ewup = PwrCsrEwupValues<Pwr::Csr, 8, 1, ReadWriteMode, PwrCsrEwupValuesBase> ;
    using Bre = PwrCsrBreValues<Pwr::Csr, 9, 1, ReadWriteMode, PwrCsrBreValuesBase> ;
    using Vosrdy = PwrCsrVosrdyValues<Pwr::Csr, 14, 1, ReadWriteMode, PwrCsrVosrdyValuesBase> ;
  } ;

  template<typename... T> 
  using CsrPack  = Register<0x40007004, 32, ReadWriteMode, PwrCsrWufValuesBase, T...> ;

} ;

#endif //#if !defined(PWRREGISTERS_HPP)
