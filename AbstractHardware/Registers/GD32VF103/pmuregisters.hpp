/*******************************************************************************
* Filename      : pmuregisters.hpp
*
* Details       : Power management unit. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(PMUREGISTERS_HPP)
#define PMUREGISTERS_HPP

#include "pmufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PMU
{
  struct PMUCTLBase {} ;

  struct CTL : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using BKPWEN = PMU_CTL_BKPWEN_Values<PMU::CTL, 8, 1, ReadWriteMode, PMUCTLBase> ;
    using LVDT = PMU_CTL_LVDT_Values<PMU::CTL, 5, 3, ReadWriteMode, PMUCTLBase> ;
    using LVDEN = PMU_CTL_LVDEN_Values<PMU::CTL, 4, 1, ReadWriteMode, PMUCTLBase> ;
    using STBRST = PMU_CTL_STBRST_Values<PMU::CTL, 3, 1, ReadWriteMode, PMUCTLBase> ;
    using WURST = PMU_CTL_WURST_Values<PMU::CTL, 2, 1, ReadWriteMode, PMUCTLBase> ;
    using STBMOD = PMU_CTL_STBMOD_Values<PMU::CTL, 1, 1, ReadWriteMode, PMUCTLBase> ;
    using LDOLP = PMU_CTL_LDOLP_Values<PMU::CTL, 0, 1, ReadWriteMode, PMUCTLBase> ;
    using FieldValues = PMU_CTL_LDOLP_Values<PMU::CTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTLPack  = Register<0x40007000, 32, ReadWriteMode, PMUCTLBase, T...> ;

  struct PMUCSBase {} ;

  struct CS : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using WUPEN = PMU_CS_WUPEN_Values<PMU::CS, 8, 1, ReadWriteMode, PMUCSBase> ;
    using LVDF = PMU_CS_LVDF_Values<PMU::CS, 2, 1, ReadMode, PMUCSBase> ;
    using STBF = PMU_CS_STBF_Values<PMU::CS, 1, 1, ReadMode, PMUCSBase> ;
    using WUF = PMU_CS_WUF_Values<PMU::CS, 0, 1, ReadMode, PMUCSBase> ;
    using FieldValues = PMU_CS_WUF_Values<PMU::CS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSPack  = Register<0x40007004, 32, ReadWriteMode, PMUCSBase, T...> ;

} ;

#endif //#if !defined(PMUREGISTERS_HPP)
