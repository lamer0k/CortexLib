/*******************************************************************************
* Filename      : dwtregisters.hpp
*
* Details       : DWT. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(DWTREGISTERS_HPP)
#define DWTREGISTERS_HPP

#include "dwtbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DWT
{
  struct DWTDWT_CTRLBase {} ;

  struct DWT_CTRL : public RegisterBase<0xE0001000, 32, ReadWriteMode>
  {
    using CYCCNTENA = DWT_DWT_CTRL_CYCCNTENA_Values<DWT::DWT_CTRL, 0, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using POSTPRESET = DWT_DWT_CTRL_POSTPRESET_Values<DWT::DWT_CTRL, 1, 4, ReadWriteMode, DWTDWT_CTRLBase> ;
    using POSTCNT = DWT_DWT_CTRL_POSTCNT_Values<DWT::DWT_CTRL, 5, 4, ReadWriteMode, DWTDWT_CTRLBase> ;
    using CYCTAP = DWT_DWT_CTRL_CYCTAP_Values<DWT::DWT_CTRL, 9, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using SYNCTAP = DWT_DWT_CTRL_SYNCTAP_Values<DWT::DWT_CTRL, 10, 2, ReadWriteMode, DWTDWT_CTRLBase> ;
    using PCSAMPLEENA = DWT_DWT_CTRL_PCSAMPLEENA_Values<DWT::DWT_CTRL, 12, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using EXCTRCENA = DWT_DWT_CTRL_EXCTRCENA_Values<DWT::DWT_CTRL, 16, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using CPIEVTENA = DWT_DWT_CTRL_CPIEVTENA_Values<DWT::DWT_CTRL, 17, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using EXCEVTENA = DWT_DWT_CTRL_EXCEVTENA_Values<DWT::DWT_CTRL, 18, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using SLEEPEVTENA = DWT_DWT_CTRL_SLEEPEVTENA_Values<DWT::DWT_CTRL, 19, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using LSUEVTENA = DWT_DWT_CTRL_LSUEVTENA_Values<DWT::DWT_CTRL, 20, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using FOLDEVTENA = DWT_DWT_CTRL_FOLDEVTENA_Values<DWT::DWT_CTRL, 21, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using CYCEVTENA = DWT_DWT_CTRL_CYCEVTENA_Values<DWT::DWT_CTRL, 22, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using NOPRFCNT = DWT_DWT_CTRL_NOPRFCNT_Values<DWT::DWT_CTRL, 24, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
    using NOCYCCNT = DWT_DWT_CTRL_NOCYCCNT_Values<DWT::DWT_CTRL, 25, 1, ReadWriteMode, DWTDWT_CTRLBase> ;
  } ;

  template<typename... T> 
  using DWT_CTRLPack  = Register<0xE0001000, 32, ReadWriteMode, DWTDWT_CTRLBase, T...> ;

  struct DWTDWT_CYCCNTBase {} ;

  struct DWT_CYCCNT : public RegisterBase<0xE0001004, 32, ReadWriteMode>
  {
    using CYCCNT = DWT_DWT_CYCCNT_CYCCNT_Values<DWT::DWT_CYCCNT, 0, 32, ReadWriteMode, DWTDWT_CYCCNTBase> ;
  } ;

  template<typename... T> 
  using DWT_CYCCNTPack  = Register<0xE0001004, 32, ReadWriteMode, DWTDWT_CYCCNTBase, T...> ;

  struct DWTDWT_CPICNTBase {} ;

  struct DWT_CPICNT : public RegisterBase<0xE0001008, 32, ReadWriteMode>
  {
    using CPICNT = DWT_DWT_CPICNT_CPICNT_Values<DWT::DWT_CPICNT, 0, 8, ReadWriteMode, DWTDWT_CPICNTBase> ;
  } ;

  template<typename... T> 
  using DWT_CPICNTPack  = Register<0xE0001008, 32, ReadWriteMode, DWTDWT_CPICNTBase, T...> ;

  struct DWTDWT_EXCCNTBase {} ;

  struct DWT_EXCCNT : public RegisterBase<0xE000100C, 32, ReadWriteMode>
  {
    using EXCCNT = DWT_DWT_EXCCNT_EXCCNT_Values<DWT::DWT_EXCCNT, 0, 8, ReadWriteMode, DWTDWT_EXCCNTBase> ;
  } ;

  template<typename... T> 
  using DWT_EXCCNTPack  = Register<0xE000100C, 32, ReadWriteMode, DWTDWT_EXCCNTBase, T...> ;

  struct DWTDWT_SLEEPCNTBase {} ;

  struct DWT_SLEEPCNT : public RegisterBase<0xE0001010, 32, ReadWriteMode>
  {
    using SLEEPCNT = DWT_DWT_SLEEPCNT_SLEEPCNT_Values<DWT::DWT_SLEEPCNT, 0, 8, ReadWriteMode, DWTDWT_SLEEPCNTBase> ;
  } ;

  template<typename... T> 
  using DWT_SLEEPCNTPack  = Register<0xE0001010, 32, ReadWriteMode, DWTDWT_SLEEPCNTBase, T...> ;

  struct DWTDWT_LSUCNTBase {} ;

  struct DWT_LSUCNT : public RegisterBase<0xE0001014, 32, ReadWriteMode>
  {
    using LSUCNT = DWT_DWT_LSUCNT_LSUCNT_Values<DWT::DWT_LSUCNT, 0, 8, ReadWriteMode, DWTDWT_LSUCNTBase> ;
  } ;

  template<typename... T> 
  using DWT_LSUCNTPack  = Register<0xE0001014, 32, ReadWriteMode, DWTDWT_LSUCNTBase, T...> ;

  struct DWTDWT_FOLDCNTBase {} ;

  struct DWT_FOLDCNT : public RegisterBase<0xE0001018, 32, ReadWriteMode>
  {
    using FOLDCNT = DWT_DWT_FOLDCNT_FOLDCNT_Values<DWT::DWT_FOLDCNT, 0, 8, ReadWriteMode, DWTDWT_FOLDCNTBase> ;
  } ;

  template<typename... T> 
  using DWT_FOLDCNTPack  = Register<0xE0001018, 32, ReadWriteMode, DWTDWT_FOLDCNTBase, T...> ;

  struct DWTDWT_PCSRBase {} ;

  struct DWT_PCSR : public RegisterBase<0xE000101C, 32, ReadMode>
  {
    using EIASAMPLE = DWT_DWT_PCSR_EIASAMPLE_Values<DWT::DWT_PCSR, 0, 32, ReadMode, DWTDWT_PCSRBase> ;
  } ;

  template<typename... T> 
  using DWT_PCSRPack  = Register<0xE000101C, 32, ReadMode, DWTDWT_PCSRBase, T...> ;

  struct DWTDWT_COMP0Base {} ;

  struct DWT_COMP0 : public RegisterBase<0xE0001020, 32, ReadWriteMode>
  {
    using COMP = DWT_DWT_COMP_COMP_Values<DWT::DWT_COMP0, 0, 32, ReadWriteMode, DWTDWT_COMP0Base> ;
  } ;

  template<typename... T> 
  using DWT_COMP0Pack  = Register<0xE0001020, 32, ReadWriteMode, DWTDWT_COMP0Base, T...> ;

  struct DWTDWT_MASK0Base {} ;

  struct DWT_MASK0 : public RegisterBase<0xE0001024, 32, ReadWriteMode>
  {
    using MASK = DWT_DWT_MASK_MASK_Values<DWT::DWT_MASK0, 0, 4, ReadWriteMode, DWTDWT_MASK0Base> ;
  } ;

  template<typename... T> 
  using DWT_MASK0Pack  = Register<0xE0001024, 32, ReadWriteMode, DWTDWT_MASK0Base, T...> ;

  struct DWTDWT_FUNCTION0Base {} ;

  struct DWT_FUNCTION0 : public RegisterBase<0xE0001028, 32, ReadWriteMode>
  {
    using FUNCTION = DWT_DWT_FUNCTION_FUNCTION_Values<DWT::DWT_FUNCTION0, 0, 4, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using EMITRANGE = DWT_DWT_FUNCTION_EMITRANGE_Values<DWT::DWT_FUNCTION0, 5, 1, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using DATAVMATCH = DWT_DWT_FUNCTION_DATAVMATCH_Values<DWT::DWT_FUNCTION0, 8, 1, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using LNK1ENA = DWT_DWT_FUNCTION_LNKENA_Values<DWT::DWT_FUNCTION0, 9, 1, ReadMode, DWTDWT_FUNCTION0Base> ;
    using DATAVSIZE = DWT_DWT_FUNCTION_DATAVSIZE_Values<DWT::DWT_FUNCTION0, 10, 2, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using DATAVADDR0 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION0, 12, 4, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using DATAVADDR1 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION0, 16, 4, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
    using MATCHED = DWT_DWT_FUNCTION_MATCHED_Values<DWT::DWT_FUNCTION0, 24, 1, ReadWriteMode, DWTDWT_FUNCTION0Base> ;
  } ;

  template<typename... T> 
  using DWT_FUNCTION0Pack  = Register<0xE0001028, 32, ReadWriteMode, DWTDWT_FUNCTION0Base, T...> ;

  struct DWTDWT_COMP1Base {} ;

  struct DWT_COMP1 : public RegisterBase<0xE0001030, 32, ReadWriteMode>
  {
    using COMP = DWT_DWT_COMP_COMP_Values<DWT::DWT_COMP1, 0, 32, ReadWriteMode, DWTDWT_COMP1Base> ;
  } ;

  template<typename... T> 
  using DWT_COMP1Pack  = Register<0xE0001030, 32, ReadWriteMode, DWTDWT_COMP1Base, T...> ;

  struct DWTDWT_MASK1Base {} ;

  struct DWT_MASK1 : public RegisterBase<0xE0001034, 32, ReadWriteMode>
  {
    using MASK = DWT_DWT_MASK_MASK_Values<DWT::DWT_MASK1, 0, 4, ReadWriteMode, DWTDWT_MASK1Base> ;
  } ;

  template<typename... T> 
  using DWT_MASK1Pack  = Register<0xE0001034, 32, ReadWriteMode, DWTDWT_MASK1Base, T...> ;

  struct DWTDWT_FUNCTION1Base {} ;

  struct DWT_FUNCTION1 : public RegisterBase<0xE0001038, 32, ReadWriteMode>
  {
    using FUNCTION = DWT_DWT_FUNCTION_FUNCTION_Values<DWT::DWT_FUNCTION1, 0, 4, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using EMITRANGE = DWT_DWT_FUNCTION_EMITRANGE_Values<DWT::DWT_FUNCTION1, 5, 1, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using CYCMATCH = DWT_DWT_FUNCTION_CYCMATCH_Values<DWT::DWT_FUNCTION1, 7, 1, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using DATAVMATCH = DWT_DWT_FUNCTION_DATAVMATCH_Values<DWT::DWT_FUNCTION1, 8, 1, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using LNK1ENA = DWT_DWT_FUNCTION_LNKENA_Values<DWT::DWT_FUNCTION1, 9, 1, ReadMode, DWTDWT_FUNCTION1Base> ;
    using DATAVSIZE = DWT_DWT_FUNCTION_DATAVSIZE_Values<DWT::DWT_FUNCTION1, 10, 2, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using DATAVADDR0 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION1, 12, 4, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using DATAVADDR1 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION1, 16, 4, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
    using MATCHED = DWT_DWT_FUNCTION_MATCHED_Values<DWT::DWT_FUNCTION1, 24, 1, ReadWriteMode, DWTDWT_FUNCTION1Base> ;
  } ;

  template<typename... T> 
  using DWT_FUNCTION1Pack  = Register<0xE0001038, 32, ReadWriteMode, DWTDWT_FUNCTION1Base, T...> ;

  struct DWTDWT_COMP2Base {} ;

  struct DWT_COMP2 : public RegisterBase<0xE0001040, 32, ReadWriteMode>
  {
    using COMP = DWT_DWT_COMP_COMP_Values<DWT::DWT_COMP2, 0, 32, ReadWriteMode, DWTDWT_COMP2Base> ;
  } ;

  template<typename... T> 
  using DWT_COMP2Pack  = Register<0xE0001040, 32, ReadWriteMode, DWTDWT_COMP2Base, T...> ;

  struct DWTDWT_MASK2Base {} ;

  struct DWT_MASK2 : public RegisterBase<0xE0001044, 32, ReadWriteMode>
  {
    using MASK = DWT_DWT_MASK_MASK_Values<DWT::DWT_MASK2, 0, 4, ReadWriteMode, DWTDWT_MASK2Base> ;
  } ;

  template<typename... T> 
  using DWT_MASK2Pack  = Register<0xE0001044, 32, ReadWriteMode, DWTDWT_MASK2Base, T...> ;

  struct DWTDWT_FUNCTION2Base {} ;

  struct DWT_FUNCTION2 : public RegisterBase<0xE0001048, 32, ReadWriteMode>
  {
    using FUNCTION = DWT_DWT_FUNCTION_FUNCTION_Values<DWT::DWT_FUNCTION2, 0, 4, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using EMITRANGE = DWT_DWT_FUNCTION_EMITRANGE_Values<DWT::DWT_FUNCTION2, 5, 1, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using DATAVMATCH = DWT_DWT_FUNCTION_DATAVMATCH_Values<DWT::DWT_FUNCTION2, 8, 1, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using LNK1ENA = DWT_DWT_FUNCTION_LNKENA_Values<DWT::DWT_FUNCTION2, 9, 1, ReadMode, DWTDWT_FUNCTION2Base> ;
    using DATAVSIZE = DWT_DWT_FUNCTION_DATAVSIZE_Values<DWT::DWT_FUNCTION2, 10, 2, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using DATAVADDR0 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION2, 12, 4, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using DATAVADDR1 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION2, 16, 4, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
    using MATCHED = DWT_DWT_FUNCTION_MATCHED_Values<DWT::DWT_FUNCTION2, 24, 1, ReadWriteMode, DWTDWT_FUNCTION2Base> ;
  } ;

  template<typename... T> 
  using DWT_FUNCTION2Pack  = Register<0xE0001048, 32, ReadWriteMode, DWTDWT_FUNCTION2Base, T...> ;

  struct DWTDWT_COMP3Base {} ;

  struct DWT_COMP3 : public RegisterBase<0xE0001050, 32, ReadWriteMode>
  {
    using COMP = DWT_DWT_COMP_COMP_Values<DWT::DWT_COMP3, 0, 32, ReadWriteMode, DWTDWT_COMP3Base> ;
  } ;

  template<typename... T> 
  using DWT_COMP3Pack  = Register<0xE0001050, 32, ReadWriteMode, DWTDWT_COMP3Base, T...> ;

  struct DWTDWT_MASK3Base {} ;

  struct DWT_MASK3 : public RegisterBase<0xE0001054, 32, ReadWriteMode>
  {
    using MASK = DWT_DWT_MASK_MASK_Values<DWT::DWT_MASK3, 0, 4, ReadWriteMode, DWTDWT_MASK3Base> ;
  } ;

  template<typename... T> 
  using DWT_MASK3Pack  = Register<0xE0001054, 32, ReadWriteMode, DWTDWT_MASK3Base, T...> ;

  struct DWTDWT_FUNCTION3Base {} ;

  struct DWT_FUNCTION3 : public RegisterBase<0xE0001058, 32, ReadWriteMode>
  {
    using FUNCTION = DWT_DWT_FUNCTION_FUNCTION_Values<DWT::DWT_FUNCTION3, 0, 4, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using EMITRANGE = DWT_DWT_FUNCTION_EMITRANGE_Values<DWT::DWT_FUNCTION3, 5, 1, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using DATAVMATCH = DWT_DWT_FUNCTION_DATAVMATCH_Values<DWT::DWT_FUNCTION3, 8, 1, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using LNK1ENA = DWT_DWT_FUNCTION_LNKENA_Values<DWT::DWT_FUNCTION3, 9, 1, ReadMode, DWTDWT_FUNCTION3Base> ;
    using DATAVSIZE = DWT_DWT_FUNCTION_DATAVSIZE_Values<DWT::DWT_FUNCTION3, 10, 2, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using DATAVADDR0 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION3, 12, 4, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using DATAVADDR1 = DWT_DWT_FUNCTION_DATAVADDR_Values<DWT::DWT_FUNCTION3, 16, 4, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
    using MATCHED = DWT_DWT_FUNCTION_MATCHED_Values<DWT::DWT_FUNCTION3, 24, 1, ReadWriteMode, DWTDWT_FUNCTION3Base> ;
  } ;

  template<typename... T> 
  using DWT_FUNCTION3Pack  = Register<0xE0001058, 32, ReadWriteMode, DWTDWT_FUNCTION3Base, T...> ;

} ;

#endif //#if !defined(DWTREGISTERS_HPP)
