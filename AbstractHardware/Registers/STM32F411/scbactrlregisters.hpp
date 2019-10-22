/*******************************************************************************
* Filename      : scbactrlregisters.hpp
*
* Details       : System control block ACTLR. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SCBACTRLREGISTERS_HPP)
#define SCBACTRLREGISTERS_HPP

#include "scbactrlfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SCB_ACTRL
{
  struct SCB_ACTRLACTRLBase {} ;

  struct ACTRL : public RegisterBase<0xE000E008, 32, ReadWriteMode>
  {
    using DISMCYCINT = SCB_ACTRL_ACTRL_DISMCYCINT_Values<SCB_ACTRL::ACTRL, 0, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISDEFWBUF = SCB_ACTRL_ACTRL_DISDEFWBUF_Values<SCB_ACTRL::ACTRL, 1, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISFOLD = SCB_ACTRL_ACTRL_DISFOLD_Values<SCB_ACTRL::ACTRL, 2, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISFPCA = SCB_ACTRL_ACTRL_DISFPCA_Values<SCB_ACTRL::ACTRL, 8, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISOOFP = SCB_ACTRL_ACTRL_DISOOFP_Values<SCB_ACTRL::ACTRL, 9, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using FieldValues = SCB_ACTRL_ACTRL_DISOOFP_Values<SCB_ACTRL::ACTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACTRLPack  = Register<0xE000E008, 32, ReadWriteMode, SCB_ACTRLACTRLBase, T...> ;

} ;

#endif //#if !defined(SCBACTRLREGISTERS_HPP)
