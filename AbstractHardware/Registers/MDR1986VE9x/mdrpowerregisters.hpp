/*******************************************************************************
* Filename      : mdrpowerregisters.hpp
*
* Details       : Power Detector. This header file is auto-generated for
*                 MDR1986VE9x device.
*
*
*******************************************************************************/

#if !defined(MDRPOWERREGISTERS_HPP)
#define MDRPOWERREGISTERS_HPP

#include "mdrpowerfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_Power
{
  struct MDR_PowerPVDCSBase {} ;

  struct PVDCS : public RegisterBase<0x40058000, 32, ReadWriteMode>
  {
    using PVDEN = MDR_Power_PVDCS_PVDEN_Values<MDR_Power::PVDCS, 0, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using PBLS = MDR_Power_PVDCS_PBLS_Values<MDR_Power::PVDCS, 1, 2, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using PLS = MDR_Power_PVDCS_PLS_Values<MDR_Power::PVDCS, 3, 3, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using PVBD = MDR_Power_PVDCS_PVBD_Values<MDR_Power::PVDCS, 6, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using PVD = MDR_Power_PVDCS_PVD_Values<MDR_Power::PVDCS, 7, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using IEPVBD = MDR_Power_PVDCS_IEPVBD_Values<MDR_Power::PVDCS, 8, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using IEPVD = MDR_Power_PVDCS_IEPVD_Values<MDR_Power::PVDCS, 9, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using INVB = MDR_Power_PVDCS_INVB_Values<MDR_Power::PVDCS, 10, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using INV = MDR_Power_PVDCS_INV_Values<MDR_Power::PVDCS, 11, 1, ReadWriteMode, MDR_PowerPVDCSBase> ;
    using FieldValues = MDR_Power_PVDCS_INV_Values<MDR_Power::PVDCS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PVDCSPack  = Register<0x40058000, 32, ReadWriteMode, MDR_PowerPVDCSBase, T...> ;

  struct MDR_PowerResRegBase {} ;

  struct ResReg : public RegisterBase<0x40058004, 32, ReadMode>
  {
    using Value = MDR_Power_ResReg_Value_Values<MDR_Power::ResReg, 0, 32, ReadMode, MDR_PowerResRegBase> ;
    using FieldValues = MDR_Power_ResReg_Value_Values<MDR_Power::ResReg, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ResRegPack  = Register<0x40058004, 32, ReadMode, MDR_PowerResRegBase, T...> ;

} ;

#endif //#if !defined(MDRPOWERREGISTERS_HPP)
