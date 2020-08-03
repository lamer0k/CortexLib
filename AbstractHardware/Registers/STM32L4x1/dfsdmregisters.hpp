/*******************************************************************************
* Filename      : dfsdmregisters.hpp
*
* Details       : Digital filter for sigma delta modulators. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(DFSDMREGISTERS_HPP)
#define DFSDMREGISTERS_HPP

#include "dfsdmfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DFSDM
{
  struct DFSDMCHCFG0R1Base {} ;

  struct CHCFG0R1 : public RegisterBase<0x40016000, 32, ReadWriteMode>
  {
    using DFSDMEN = DFSDM_CHCFG0R1_DFSDMEN_Values<DFSDM::CHCFG0R1, 31, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using CKOUTSRC = DFSDM_CHCFG0R1_CKOUTSRC_Values<DFSDM::CHCFG0R1, 30, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using CKOUTDIV = DFSDM_CHCFG0R1_CKOUTDIV_Values<DFSDM::CHCFG0R1, 16, 8, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using DATPACK = DFSDM_CHCFG0R1_DATPACK_Values<DFSDM::CHCFG0R1, 14, 2, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using DATMPX = DFSDM_CHCFG0R1_DATMPX_Values<DFSDM::CHCFG0R1, 12, 2, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using CHINSEL = DFSDM_CHCFG0R1_CHINSEL_Values<DFSDM::CHCFG0R1, 8, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using CHEN = DFSDM_CHCFG0R1_CHEN_Values<DFSDM::CHCFG0R1, 7, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using CKABEN = DFSDM_CHCFG0R1_CKABEN_Values<DFSDM::CHCFG0R1, 6, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using SCDEN = DFSDM_CHCFG0R1_SCDEN_Values<DFSDM::CHCFG0R1, 5, 1, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using SPICKSEL = DFSDM_CHCFG0R1_SPICKSEL_Values<DFSDM::CHCFG0R1, 2, 2, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using SITP = DFSDM_CHCFG0R1_SITP_Values<DFSDM::CHCFG0R1, 0, 2, ReadWriteMode, DFSDMCHCFG0R1Base> ;
    using FieldValues = DFSDM_CHCFG0R1_SITP_Values<DFSDM::CHCFG0R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG0R1Pack  = Register<0x40016000, 32, ReadWriteMode, DFSDMCHCFG0R1Base, T...> ;

  struct DFSDMCHCFG0R2Base {} ;

  struct CHCFG0R2 : public RegisterBase<0x40016004, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG0R2_OFFSET_Values<DFSDM::CHCFG0R2, 8, 24, ReadWriteMode, DFSDMCHCFG0R2Base> ;
    using DTRBS = DFSDM_CHCFG0R2_DTRBS_Values<DFSDM::CHCFG0R2, 3, 5, ReadWriteMode, DFSDMCHCFG0R2Base> ;
    using FieldValues = DFSDM_CHCFG0R2_DTRBS_Values<DFSDM::CHCFG0R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG0R2Pack  = Register<0x40016004, 32, ReadWriteMode, DFSDMCHCFG0R2Base, T...> ;

  struct DFSDMAWSCD0RBase {} ;

  struct AWSCD0R : public RegisterBase<0x40016008, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD0R_AWFORD_Values<DFSDM::AWSCD0R, 22, 2, ReadWriteMode, DFSDMAWSCD0RBase> ;
    using AWFOSR = DFSDM_AWSCD0R_AWFOSR_Values<DFSDM::AWSCD0R, 16, 5, ReadWriteMode, DFSDMAWSCD0RBase> ;
    using BKSCD = DFSDM_AWSCD0R_BKSCD_Values<DFSDM::AWSCD0R, 12, 4, ReadWriteMode, DFSDMAWSCD0RBase> ;
    using SCDT = DFSDM_AWSCD0R_SCDT_Values<DFSDM::AWSCD0R, 0, 8, ReadWriteMode, DFSDMAWSCD0RBase> ;
    using FieldValues = DFSDM_AWSCD0R_SCDT_Values<DFSDM::AWSCD0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD0RPack  = Register<0x40016008, 32, ReadWriteMode, DFSDMAWSCD0RBase, T...> ;

  struct DFSDMCHWDAT0RBase {} ;

  struct CHWDAT0R : public RegisterBase<0x4001600C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT0R_WDATA_Values<DFSDM::CHWDAT0R, 0, 16, ReadWriteMode, DFSDMCHWDAT0RBase> ;
    using FieldValues = DFSDM_CHWDAT0R_WDATA_Values<DFSDM::CHWDAT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT0RPack  = Register<0x4001600C, 32, ReadWriteMode, DFSDMCHWDAT0RBase, T...> ;

  struct DFSDMCHDATIN0RBase {} ;

  struct CHDATIN0R : public RegisterBase<0x40016010, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN0R_INDAT1_Values<DFSDM::CHDATIN0R, 16, 16, ReadWriteMode, DFSDMCHDATIN0RBase> ;
    using INDAT0 = DFSDM_CHDATIN0R_INDAT0_Values<DFSDM::CHDATIN0R, 0, 16, ReadWriteMode, DFSDMCHDATIN0RBase> ;
    using FieldValues = DFSDM_CHDATIN0R_INDAT0_Values<DFSDM::CHDATIN0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN0RPack  = Register<0x40016010, 32, ReadWriteMode, DFSDMCHDATIN0RBase, T...> ;

  struct DFSDMCHCFG1R1Base {} ;

  struct CHCFG1R1 : public RegisterBase<0x40016020, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG1R1_DATPACK_Values<DFSDM::CHCFG1R1, 14, 2, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using DATMPX = DFSDM_CHCFG1R1_DATMPX_Values<DFSDM::CHCFG1R1, 12, 2, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using CHINSEL = DFSDM_CHCFG1R1_CHINSEL_Values<DFSDM::CHCFG1R1, 8, 1, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using CHEN = DFSDM_CHCFG1R1_CHEN_Values<DFSDM::CHCFG1R1, 7, 1, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using CKABEN = DFSDM_CHCFG1R1_CKABEN_Values<DFSDM::CHCFG1R1, 6, 1, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using SCDEN = DFSDM_CHCFG1R1_SCDEN_Values<DFSDM::CHCFG1R1, 5, 1, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using SPICKSEL = DFSDM_CHCFG1R1_SPICKSEL_Values<DFSDM::CHCFG1R1, 2, 2, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using SITP = DFSDM_CHCFG1R1_SITP_Values<DFSDM::CHCFG1R1, 0, 2, ReadWriteMode, DFSDMCHCFG1R1Base> ;
    using FieldValues = DFSDM_CHCFG1R1_SITP_Values<DFSDM::CHCFG1R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG1R1Pack  = Register<0x40016020, 32, ReadWriteMode, DFSDMCHCFG1R1Base, T...> ;

  struct DFSDMCHCFG1R2Base {} ;

  struct CHCFG1R2 : public RegisterBase<0x40016024, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG1R2_OFFSET_Values<DFSDM::CHCFG1R2, 8, 24, ReadWriteMode, DFSDMCHCFG1R2Base> ;
    using DTRBS = DFSDM_CHCFG1R2_DTRBS_Values<DFSDM::CHCFG1R2, 3, 5, ReadWriteMode, DFSDMCHCFG1R2Base> ;
    using FieldValues = DFSDM_CHCFG1R2_DTRBS_Values<DFSDM::CHCFG1R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG1R2Pack  = Register<0x40016024, 32, ReadWriteMode, DFSDMCHCFG1R2Base, T...> ;

  struct DFSDMAWSCD1RBase {} ;

  struct AWSCD1R : public RegisterBase<0x40016028, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD1R_AWFORD_Values<DFSDM::AWSCD1R, 22, 2, ReadWriteMode, DFSDMAWSCD1RBase> ;
    using AWFOSR = DFSDM_AWSCD1R_AWFOSR_Values<DFSDM::AWSCD1R, 16, 5, ReadWriteMode, DFSDMAWSCD1RBase> ;
    using BKSCD = DFSDM_AWSCD1R_BKSCD_Values<DFSDM::AWSCD1R, 12, 4, ReadWriteMode, DFSDMAWSCD1RBase> ;
    using SCDT = DFSDM_AWSCD1R_SCDT_Values<DFSDM::AWSCD1R, 0, 8, ReadWriteMode, DFSDMAWSCD1RBase> ;
    using FieldValues = DFSDM_AWSCD1R_SCDT_Values<DFSDM::AWSCD1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD1RPack  = Register<0x40016028, 32, ReadWriteMode, DFSDMAWSCD1RBase, T...> ;

  struct DFSDMCHWDAT1RBase {} ;

  struct CHWDAT1R : public RegisterBase<0x4001602C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT1R_WDATA_Values<DFSDM::CHWDAT1R, 0, 16, ReadWriteMode, DFSDMCHWDAT1RBase> ;
    using FieldValues = DFSDM_CHWDAT1R_WDATA_Values<DFSDM::CHWDAT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT1RPack  = Register<0x4001602C, 32, ReadWriteMode, DFSDMCHWDAT1RBase, T...> ;

  struct DFSDMCHDATIN1RBase {} ;

  struct CHDATIN1R : public RegisterBase<0x40016030, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN1R_INDAT1_Values<DFSDM::CHDATIN1R, 16, 16, ReadWriteMode, DFSDMCHDATIN1RBase> ;
    using INDAT0 = DFSDM_CHDATIN1R_INDAT0_Values<DFSDM::CHDATIN1R, 0, 16, ReadWriteMode, DFSDMCHDATIN1RBase> ;
    using FieldValues = DFSDM_CHDATIN1R_INDAT0_Values<DFSDM::CHDATIN1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN1RPack  = Register<0x40016030, 32, ReadWriteMode, DFSDMCHDATIN1RBase, T...> ;

  struct DFSDMCHCFG2R1Base {} ;

  struct CHCFG2R1 : public RegisterBase<0x40016040, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG2R1_DATPACK_Values<DFSDM::CHCFG2R1, 14, 2, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using DATMPX = DFSDM_CHCFG2R1_DATMPX_Values<DFSDM::CHCFG2R1, 12, 2, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using CHINSEL = DFSDM_CHCFG2R1_CHINSEL_Values<DFSDM::CHCFG2R1, 8, 1, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using CHEN = DFSDM_CHCFG2R1_CHEN_Values<DFSDM::CHCFG2R1, 7, 1, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using CKABEN = DFSDM_CHCFG2R1_CKABEN_Values<DFSDM::CHCFG2R1, 6, 1, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using SCDEN = DFSDM_CHCFG2R1_SCDEN_Values<DFSDM::CHCFG2R1, 5, 1, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using SPICKSEL = DFSDM_CHCFG2R1_SPICKSEL_Values<DFSDM::CHCFG2R1, 2, 2, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using SITP = DFSDM_CHCFG2R1_SITP_Values<DFSDM::CHCFG2R1, 0, 2, ReadWriteMode, DFSDMCHCFG2R1Base> ;
    using FieldValues = DFSDM_CHCFG2R1_SITP_Values<DFSDM::CHCFG2R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG2R1Pack  = Register<0x40016040, 32, ReadWriteMode, DFSDMCHCFG2R1Base, T...> ;

  struct DFSDMCHCFG2R2Base {} ;

  struct CHCFG2R2 : public RegisterBase<0x40016044, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG2R2_OFFSET_Values<DFSDM::CHCFG2R2, 8, 24, ReadWriteMode, DFSDMCHCFG2R2Base> ;
    using DTRBS = DFSDM_CHCFG2R2_DTRBS_Values<DFSDM::CHCFG2R2, 3, 5, ReadWriteMode, DFSDMCHCFG2R2Base> ;
    using FieldValues = DFSDM_CHCFG2R2_DTRBS_Values<DFSDM::CHCFG2R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG2R2Pack  = Register<0x40016044, 32, ReadWriteMode, DFSDMCHCFG2R2Base, T...> ;

  struct DFSDMAWSCD2RBase {} ;

  struct AWSCD2R : public RegisterBase<0x40016048, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD2R_AWFORD_Values<DFSDM::AWSCD2R, 22, 2, ReadWriteMode, DFSDMAWSCD2RBase> ;
    using AWFOSR = DFSDM_AWSCD2R_AWFOSR_Values<DFSDM::AWSCD2R, 16, 5, ReadWriteMode, DFSDMAWSCD2RBase> ;
    using BKSCD = DFSDM_AWSCD2R_BKSCD_Values<DFSDM::AWSCD2R, 12, 4, ReadWriteMode, DFSDMAWSCD2RBase> ;
    using SCDT = DFSDM_AWSCD2R_SCDT_Values<DFSDM::AWSCD2R, 0, 8, ReadWriteMode, DFSDMAWSCD2RBase> ;
    using FieldValues = DFSDM_AWSCD2R_SCDT_Values<DFSDM::AWSCD2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD2RPack  = Register<0x40016048, 32, ReadWriteMode, DFSDMAWSCD2RBase, T...> ;

  struct DFSDMCHWDAT2RBase {} ;

  struct CHWDAT2R : public RegisterBase<0x4001604C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT2R_WDATA_Values<DFSDM::CHWDAT2R, 0, 16, ReadWriteMode, DFSDMCHWDAT2RBase> ;
    using FieldValues = DFSDM_CHWDAT2R_WDATA_Values<DFSDM::CHWDAT2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT2RPack  = Register<0x4001604C, 32, ReadWriteMode, DFSDMCHWDAT2RBase, T...> ;

  struct DFSDMCHDATIN2RBase {} ;

  struct CHDATIN2R : public RegisterBase<0x40016050, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN2R_INDAT1_Values<DFSDM::CHDATIN2R, 16, 16, ReadWriteMode, DFSDMCHDATIN2RBase> ;
    using INDAT0 = DFSDM_CHDATIN2R_INDAT0_Values<DFSDM::CHDATIN2R, 0, 16, ReadWriteMode, DFSDMCHDATIN2RBase> ;
    using FieldValues = DFSDM_CHDATIN2R_INDAT0_Values<DFSDM::CHDATIN2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN2RPack  = Register<0x40016050, 32, ReadWriteMode, DFSDMCHDATIN2RBase, T...> ;

  struct DFSDMCHCFG3R1Base {} ;

  struct CHCFG3R1 : public RegisterBase<0x40016060, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG3R1_DATPACK_Values<DFSDM::CHCFG3R1, 14, 2, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using DATMPX = DFSDM_CHCFG3R1_DATMPX_Values<DFSDM::CHCFG3R1, 12, 2, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using CHINSEL = DFSDM_CHCFG3R1_CHINSEL_Values<DFSDM::CHCFG3R1, 8, 1, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using CHEN = DFSDM_CHCFG3R1_CHEN_Values<DFSDM::CHCFG3R1, 7, 1, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using CKABEN = DFSDM_CHCFG3R1_CKABEN_Values<DFSDM::CHCFG3R1, 6, 1, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using SCDEN = DFSDM_CHCFG3R1_SCDEN_Values<DFSDM::CHCFG3R1, 5, 1, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using SPICKSEL = DFSDM_CHCFG3R1_SPICKSEL_Values<DFSDM::CHCFG3R1, 2, 2, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using SITP = DFSDM_CHCFG3R1_SITP_Values<DFSDM::CHCFG3R1, 0, 2, ReadWriteMode, DFSDMCHCFG3R1Base> ;
    using FieldValues = DFSDM_CHCFG3R1_SITP_Values<DFSDM::CHCFG3R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG3R1Pack  = Register<0x40016060, 32, ReadWriteMode, DFSDMCHCFG3R1Base, T...> ;

  struct DFSDMCHCFG3R2Base {} ;

  struct CHCFG3R2 : public RegisterBase<0x40016064, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG3R2_OFFSET_Values<DFSDM::CHCFG3R2, 8, 24, ReadWriteMode, DFSDMCHCFG3R2Base> ;
    using DTRBS = DFSDM_CHCFG3R2_DTRBS_Values<DFSDM::CHCFG3R2, 3, 5, ReadWriteMode, DFSDMCHCFG3R2Base> ;
    using FieldValues = DFSDM_CHCFG3R2_DTRBS_Values<DFSDM::CHCFG3R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG3R2Pack  = Register<0x40016064, 32, ReadWriteMode, DFSDMCHCFG3R2Base, T...> ;

  struct DFSDMAWSCD3RBase {} ;

  struct AWSCD3R : public RegisterBase<0x40016068, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD3R_AWFORD_Values<DFSDM::AWSCD3R, 22, 2, ReadWriteMode, DFSDMAWSCD3RBase> ;
    using AWFOSR = DFSDM_AWSCD3R_AWFOSR_Values<DFSDM::AWSCD3R, 16, 5, ReadWriteMode, DFSDMAWSCD3RBase> ;
    using BKSCD = DFSDM_AWSCD3R_BKSCD_Values<DFSDM::AWSCD3R, 12, 4, ReadWriteMode, DFSDMAWSCD3RBase> ;
    using SCDT = DFSDM_AWSCD3R_SCDT_Values<DFSDM::AWSCD3R, 0, 8, ReadWriteMode, DFSDMAWSCD3RBase> ;
    using FieldValues = DFSDM_AWSCD3R_SCDT_Values<DFSDM::AWSCD3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD3RPack  = Register<0x40016068, 32, ReadWriteMode, DFSDMAWSCD3RBase, T...> ;

  struct DFSDMCHWDAT3RBase {} ;

  struct CHWDAT3R : public RegisterBase<0x4001606C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT3R_WDATA_Values<DFSDM::CHWDAT3R, 0, 16, ReadWriteMode, DFSDMCHWDAT3RBase> ;
    using FieldValues = DFSDM_CHWDAT3R_WDATA_Values<DFSDM::CHWDAT3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT3RPack  = Register<0x4001606C, 32, ReadWriteMode, DFSDMCHWDAT3RBase, T...> ;

  struct DFSDMCHDATIN3RBase {} ;

  struct CHDATIN3R : public RegisterBase<0x40016070, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN3R_INDAT1_Values<DFSDM::CHDATIN3R, 16, 16, ReadWriteMode, DFSDMCHDATIN3RBase> ;
    using INDAT0 = DFSDM_CHDATIN3R_INDAT0_Values<DFSDM::CHDATIN3R, 0, 16, ReadWriteMode, DFSDMCHDATIN3RBase> ;
    using FieldValues = DFSDM_CHDATIN3R_INDAT0_Values<DFSDM::CHDATIN3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN3RPack  = Register<0x40016070, 32, ReadWriteMode, DFSDMCHDATIN3RBase, T...> ;

  struct DFSDMCHCFG4R1Base {} ;

  struct CHCFG4R1 : public RegisterBase<0x40016080, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG4R1_DATPACK_Values<DFSDM::CHCFG4R1, 14, 2, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using DATMPX = DFSDM_CHCFG4R1_DATMPX_Values<DFSDM::CHCFG4R1, 12, 2, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using CHINSEL = DFSDM_CHCFG4R1_CHINSEL_Values<DFSDM::CHCFG4R1, 8, 1, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using CHEN = DFSDM_CHCFG4R1_CHEN_Values<DFSDM::CHCFG4R1, 7, 1, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using CKABEN = DFSDM_CHCFG4R1_CKABEN_Values<DFSDM::CHCFG4R1, 6, 1, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using SCDEN = DFSDM_CHCFG4R1_SCDEN_Values<DFSDM::CHCFG4R1, 5, 1, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using SPICKSEL = DFSDM_CHCFG4R1_SPICKSEL_Values<DFSDM::CHCFG4R1, 2, 2, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using SITP = DFSDM_CHCFG4R1_SITP_Values<DFSDM::CHCFG4R1, 0, 2, ReadWriteMode, DFSDMCHCFG4R1Base> ;
    using FieldValues = DFSDM_CHCFG4R1_SITP_Values<DFSDM::CHCFG4R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG4R1Pack  = Register<0x40016080, 32, ReadWriteMode, DFSDMCHCFG4R1Base, T...> ;

  struct DFSDMCHCFG4R2Base {} ;

  struct CHCFG4R2 : public RegisterBase<0x40016084, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG4R2_OFFSET_Values<DFSDM::CHCFG4R2, 8, 24, ReadWriteMode, DFSDMCHCFG4R2Base> ;
    using DTRBS = DFSDM_CHCFG4R2_DTRBS_Values<DFSDM::CHCFG4R2, 3, 5, ReadWriteMode, DFSDMCHCFG4R2Base> ;
    using FieldValues = DFSDM_CHCFG4R2_DTRBS_Values<DFSDM::CHCFG4R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG4R2Pack  = Register<0x40016084, 32, ReadWriteMode, DFSDMCHCFG4R2Base, T...> ;

  struct DFSDMAWSCD4RBase {} ;

  struct AWSCD4R : public RegisterBase<0x40016088, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD4R_AWFORD_Values<DFSDM::AWSCD4R, 22, 2, ReadWriteMode, DFSDMAWSCD4RBase> ;
    using AWFOSR = DFSDM_AWSCD4R_AWFOSR_Values<DFSDM::AWSCD4R, 16, 5, ReadWriteMode, DFSDMAWSCD4RBase> ;
    using BKSCD = DFSDM_AWSCD4R_BKSCD_Values<DFSDM::AWSCD4R, 12, 4, ReadWriteMode, DFSDMAWSCD4RBase> ;
    using SCDT = DFSDM_AWSCD4R_SCDT_Values<DFSDM::AWSCD4R, 0, 8, ReadWriteMode, DFSDMAWSCD4RBase> ;
    using FieldValues = DFSDM_AWSCD4R_SCDT_Values<DFSDM::AWSCD4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD4RPack  = Register<0x40016088, 32, ReadWriteMode, DFSDMAWSCD4RBase, T...> ;

  struct DFSDMCHWDAT4RBase {} ;

  struct CHWDAT4R : public RegisterBase<0x4001608C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT4R_WDATA_Values<DFSDM::CHWDAT4R, 0, 16, ReadWriteMode, DFSDMCHWDAT4RBase> ;
    using FieldValues = DFSDM_CHWDAT4R_WDATA_Values<DFSDM::CHWDAT4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT4RPack  = Register<0x4001608C, 32, ReadWriteMode, DFSDMCHWDAT4RBase, T...> ;

  struct DFSDMCHDATIN4RBase {} ;

  struct CHDATIN4R : public RegisterBase<0x40016090, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN4R_INDAT1_Values<DFSDM::CHDATIN4R, 16, 16, ReadWriteMode, DFSDMCHDATIN4RBase> ;
    using INDAT0 = DFSDM_CHDATIN4R_INDAT0_Values<DFSDM::CHDATIN4R, 0, 16, ReadWriteMode, DFSDMCHDATIN4RBase> ;
    using FieldValues = DFSDM_CHDATIN4R_INDAT0_Values<DFSDM::CHDATIN4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN4RPack  = Register<0x40016090, 32, ReadWriteMode, DFSDMCHDATIN4RBase, T...> ;

  struct DFSDMCHCFG5R1Base {} ;

  struct CHCFG5R1 : public RegisterBase<0x400160A0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG5R1_DATPACK_Values<DFSDM::CHCFG5R1, 14, 2, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using DATMPX = DFSDM_CHCFG5R1_DATMPX_Values<DFSDM::CHCFG5R1, 12, 2, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using CHINSEL = DFSDM_CHCFG5R1_CHINSEL_Values<DFSDM::CHCFG5R1, 8, 1, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using CHEN = DFSDM_CHCFG5R1_CHEN_Values<DFSDM::CHCFG5R1, 7, 1, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using CKABEN = DFSDM_CHCFG5R1_CKABEN_Values<DFSDM::CHCFG5R1, 6, 1, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using SCDEN = DFSDM_CHCFG5R1_SCDEN_Values<DFSDM::CHCFG5R1, 5, 1, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using SPICKSEL = DFSDM_CHCFG5R1_SPICKSEL_Values<DFSDM::CHCFG5R1, 2, 2, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using SITP = DFSDM_CHCFG5R1_SITP_Values<DFSDM::CHCFG5R1, 0, 2, ReadWriteMode, DFSDMCHCFG5R1Base> ;
    using FieldValues = DFSDM_CHCFG5R1_SITP_Values<DFSDM::CHCFG5R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG5R1Pack  = Register<0x400160A0, 32, ReadWriteMode, DFSDMCHCFG5R1Base, T...> ;

  struct DFSDMCHCFG5R2Base {} ;

  struct CHCFG5R2 : public RegisterBase<0x400160A4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG5R2_OFFSET_Values<DFSDM::CHCFG5R2, 8, 24, ReadWriteMode, DFSDMCHCFG5R2Base> ;
    using DTRBS = DFSDM_CHCFG5R2_DTRBS_Values<DFSDM::CHCFG5R2, 3, 5, ReadWriteMode, DFSDMCHCFG5R2Base> ;
    using FieldValues = DFSDM_CHCFG5R2_DTRBS_Values<DFSDM::CHCFG5R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG5R2Pack  = Register<0x400160A4, 32, ReadWriteMode, DFSDMCHCFG5R2Base, T...> ;

  struct DFSDMAWSCD5RBase {} ;

  struct AWSCD5R : public RegisterBase<0x400160A8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD5R_AWFORD_Values<DFSDM::AWSCD5R, 22, 2, ReadWriteMode, DFSDMAWSCD5RBase> ;
    using AWFOSR = DFSDM_AWSCD5R_AWFOSR_Values<DFSDM::AWSCD5R, 16, 5, ReadWriteMode, DFSDMAWSCD5RBase> ;
    using BKSCD = DFSDM_AWSCD5R_BKSCD_Values<DFSDM::AWSCD5R, 12, 4, ReadWriteMode, DFSDMAWSCD5RBase> ;
    using SCDT = DFSDM_AWSCD5R_SCDT_Values<DFSDM::AWSCD5R, 0, 8, ReadWriteMode, DFSDMAWSCD5RBase> ;
    using FieldValues = DFSDM_AWSCD5R_SCDT_Values<DFSDM::AWSCD5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD5RPack  = Register<0x400160A8, 32, ReadWriteMode, DFSDMAWSCD5RBase, T...> ;

  struct DFSDMCHWDAT5RBase {} ;

  struct CHWDAT5R : public RegisterBase<0x400160AC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT5R_WDATA_Values<DFSDM::CHWDAT5R, 0, 16, ReadWriteMode, DFSDMCHWDAT5RBase> ;
    using FieldValues = DFSDM_CHWDAT5R_WDATA_Values<DFSDM::CHWDAT5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT5RPack  = Register<0x400160AC, 32, ReadWriteMode, DFSDMCHWDAT5RBase, T...> ;

  struct DFSDMCHDATIN5RBase {} ;

  struct CHDATIN5R : public RegisterBase<0x400160B0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN5R_INDAT1_Values<DFSDM::CHDATIN5R, 16, 16, ReadWriteMode, DFSDMCHDATIN5RBase> ;
    using INDAT0 = DFSDM_CHDATIN5R_INDAT0_Values<DFSDM::CHDATIN5R, 0, 16, ReadWriteMode, DFSDMCHDATIN5RBase> ;
    using FieldValues = DFSDM_CHDATIN5R_INDAT0_Values<DFSDM::CHDATIN5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN5RPack  = Register<0x400160B0, 32, ReadWriteMode, DFSDMCHDATIN5RBase, T...> ;

  struct DFSDMCHCFG6R1Base {} ;

  struct CHCFG6R1 : public RegisterBase<0x400160C0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG6R1_DATPACK_Values<DFSDM::CHCFG6R1, 14, 2, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using DATMPX = DFSDM_CHCFG6R1_DATMPX_Values<DFSDM::CHCFG6R1, 12, 2, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using CHINSEL = DFSDM_CHCFG6R1_CHINSEL_Values<DFSDM::CHCFG6R1, 8, 1, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using CHEN = DFSDM_CHCFG6R1_CHEN_Values<DFSDM::CHCFG6R1, 7, 1, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using CKABEN = DFSDM_CHCFG6R1_CKABEN_Values<DFSDM::CHCFG6R1, 6, 1, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using SCDEN = DFSDM_CHCFG6R1_SCDEN_Values<DFSDM::CHCFG6R1, 5, 1, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using SPICKSEL = DFSDM_CHCFG6R1_SPICKSEL_Values<DFSDM::CHCFG6R1, 2, 2, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using SITP = DFSDM_CHCFG6R1_SITP_Values<DFSDM::CHCFG6R1, 0, 2, ReadWriteMode, DFSDMCHCFG6R1Base> ;
    using FieldValues = DFSDM_CHCFG6R1_SITP_Values<DFSDM::CHCFG6R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG6R1Pack  = Register<0x400160C0, 32, ReadWriteMode, DFSDMCHCFG6R1Base, T...> ;

  struct DFSDMCHCFG6R2Base {} ;

  struct CHCFG6R2 : public RegisterBase<0x400160C4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG6R2_OFFSET_Values<DFSDM::CHCFG6R2, 8, 24, ReadWriteMode, DFSDMCHCFG6R2Base> ;
    using DTRBS = DFSDM_CHCFG6R2_DTRBS_Values<DFSDM::CHCFG6R2, 3, 5, ReadWriteMode, DFSDMCHCFG6R2Base> ;
    using FieldValues = DFSDM_CHCFG6R2_DTRBS_Values<DFSDM::CHCFG6R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG6R2Pack  = Register<0x400160C4, 32, ReadWriteMode, DFSDMCHCFG6R2Base, T...> ;

  struct DFSDMAWSCD6RBase {} ;

  struct AWSCD6R : public RegisterBase<0x400160C8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD6R_AWFORD_Values<DFSDM::AWSCD6R, 22, 2, ReadWriteMode, DFSDMAWSCD6RBase> ;
    using AWFOSR = DFSDM_AWSCD6R_AWFOSR_Values<DFSDM::AWSCD6R, 16, 5, ReadWriteMode, DFSDMAWSCD6RBase> ;
    using BKSCD = DFSDM_AWSCD6R_BKSCD_Values<DFSDM::AWSCD6R, 12, 4, ReadWriteMode, DFSDMAWSCD6RBase> ;
    using SCDT = DFSDM_AWSCD6R_SCDT_Values<DFSDM::AWSCD6R, 0, 8, ReadWriteMode, DFSDMAWSCD6RBase> ;
    using FieldValues = DFSDM_AWSCD6R_SCDT_Values<DFSDM::AWSCD6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD6RPack  = Register<0x400160C8, 32, ReadWriteMode, DFSDMAWSCD6RBase, T...> ;

  struct DFSDMCHWDAT6RBase {} ;

  struct CHWDAT6R : public RegisterBase<0x400160CC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT6R_WDATA_Values<DFSDM::CHWDAT6R, 0, 16, ReadWriteMode, DFSDMCHWDAT6RBase> ;
    using FieldValues = DFSDM_CHWDAT6R_WDATA_Values<DFSDM::CHWDAT6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT6RPack  = Register<0x400160CC, 32, ReadWriteMode, DFSDMCHWDAT6RBase, T...> ;

  struct DFSDMCHDATIN6RBase {} ;

  struct CHDATIN6R : public RegisterBase<0x400160D0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN6R_INDAT1_Values<DFSDM::CHDATIN6R, 16, 16, ReadWriteMode, DFSDMCHDATIN6RBase> ;
    using INDAT0 = DFSDM_CHDATIN6R_INDAT0_Values<DFSDM::CHDATIN6R, 0, 16, ReadWriteMode, DFSDMCHDATIN6RBase> ;
    using FieldValues = DFSDM_CHDATIN6R_INDAT0_Values<DFSDM::CHDATIN6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN6RPack  = Register<0x400160D0, 32, ReadWriteMode, DFSDMCHDATIN6RBase, T...> ;

  struct DFSDMCHCFG7R1Base {} ;

  struct CHCFG7R1 : public RegisterBase<0x400160E0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CHCFG7R1_DATPACK_Values<DFSDM::CHCFG7R1, 14, 2, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using DATMPX = DFSDM_CHCFG7R1_DATMPX_Values<DFSDM::CHCFG7R1, 12, 2, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using CHINSEL = DFSDM_CHCFG7R1_CHINSEL_Values<DFSDM::CHCFG7R1, 8, 1, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using CHEN = DFSDM_CHCFG7R1_CHEN_Values<DFSDM::CHCFG7R1, 7, 1, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using CKABEN = DFSDM_CHCFG7R1_CKABEN_Values<DFSDM::CHCFG7R1, 6, 1, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using SCDEN = DFSDM_CHCFG7R1_SCDEN_Values<DFSDM::CHCFG7R1, 5, 1, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using SPICKSEL = DFSDM_CHCFG7R1_SPICKSEL_Values<DFSDM::CHCFG7R1, 2, 2, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using SITP = DFSDM_CHCFG7R1_SITP_Values<DFSDM::CHCFG7R1, 0, 2, ReadWriteMode, DFSDMCHCFG7R1Base> ;
    using FieldValues = DFSDM_CHCFG7R1_SITP_Values<DFSDM::CHCFG7R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG7R1Pack  = Register<0x400160E0, 32, ReadWriteMode, DFSDMCHCFG7R1Base, T...> ;

  struct DFSDMCHCFG7R2Base {} ;

  struct CHCFG7R2 : public RegisterBase<0x400160E4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CHCFG7R2_OFFSET_Values<DFSDM::CHCFG7R2, 8, 24, ReadWriteMode, DFSDMCHCFG7R2Base> ;
    using DTRBS = DFSDM_CHCFG7R2_DTRBS_Values<DFSDM::CHCFG7R2, 3, 5, ReadWriteMode, DFSDMCHCFG7R2Base> ;
    using FieldValues = DFSDM_CHCFG7R2_DTRBS_Values<DFSDM::CHCFG7R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHCFG7R2Pack  = Register<0x400160E4, 32, ReadWriteMode, DFSDMCHCFG7R2Base, T...> ;

  struct DFSDMAWSCD7RBase {} ;

  struct AWSCD7R : public RegisterBase<0x400160E8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_AWSCD7R_AWFORD_Values<DFSDM::AWSCD7R, 22, 2, ReadWriteMode, DFSDMAWSCD7RBase> ;
    using AWFOSR = DFSDM_AWSCD7R_AWFOSR_Values<DFSDM::AWSCD7R, 16, 5, ReadWriteMode, DFSDMAWSCD7RBase> ;
    using BKSCD = DFSDM_AWSCD7R_BKSCD_Values<DFSDM::AWSCD7R, 12, 4, ReadWriteMode, DFSDMAWSCD7RBase> ;
    using SCDT = DFSDM_AWSCD7R_SCDT_Values<DFSDM::AWSCD7R, 0, 8, ReadWriteMode, DFSDMAWSCD7RBase> ;
    using FieldValues = DFSDM_AWSCD7R_SCDT_Values<DFSDM::AWSCD7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWSCD7RPack  = Register<0x400160E8, 32, ReadWriteMode, DFSDMAWSCD7RBase, T...> ;

  struct DFSDMCHWDAT7RBase {} ;

  struct CHWDAT7R : public RegisterBase<0x400160EC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CHWDAT7R_WDATA_Values<DFSDM::CHWDAT7R, 0, 16, ReadWriteMode, DFSDMCHWDAT7RBase> ;
    using FieldValues = DFSDM_CHWDAT7R_WDATA_Values<DFSDM::CHWDAT7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHWDAT7RPack  = Register<0x400160EC, 32, ReadWriteMode, DFSDMCHWDAT7RBase, T...> ;

  struct DFSDMCHDATIN7RBase {} ;

  struct CHDATIN7R : public RegisterBase<0x400160F0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CHDATIN7R_INDAT1_Values<DFSDM::CHDATIN7R, 16, 16, ReadWriteMode, DFSDMCHDATIN7RBase> ;
    using INDAT0 = DFSDM_CHDATIN7R_INDAT0_Values<DFSDM::CHDATIN7R, 0, 16, ReadWriteMode, DFSDMCHDATIN7RBase> ;
    using FieldValues = DFSDM_CHDATIN7R_INDAT0_Values<DFSDM::CHDATIN7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CHDATIN7RPack  = Register<0x400160F0, 32, ReadWriteMode, DFSDMCHDATIN7RBase, T...> ;

  struct DFSDMDFSDM0_CR1Base {} ;

  struct DFSDM0_CR1 : public RegisterBase<0x40016100, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM0_CR1_AWFSEL_Values<DFSDM::DFSDM0_CR1, 30, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using FAST = DFSDM_DFSDM0_CR1_FAST_Values<DFSDM::DFSDM0_CR1, 29, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using RCH = DFSDM_DFSDM0_CR1_RCH_Values<DFSDM::DFSDM0_CR1, 24, 3, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using RDMAEN = DFSDM_DFSDM0_CR1_RDMAEN_Values<DFSDM::DFSDM0_CR1, 21, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using RSYNC = DFSDM_DFSDM0_CR1_RSYNC_Values<DFSDM::DFSDM0_CR1, 19, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using RCONT = DFSDM_DFSDM0_CR1_RCONT_Values<DFSDM::DFSDM0_CR1, 18, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using RSWSTART = DFSDM_DFSDM0_CR1_RSWSTART_Values<DFSDM::DFSDM0_CR1, 17, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JEXTEN = DFSDM_DFSDM0_CR1_JEXTEN_Values<DFSDM::DFSDM0_CR1, 13, 2, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM0_CR1_JEXTSEL_Values<DFSDM::DFSDM0_CR1, 8, 3, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JDMAEN = DFSDM_DFSDM0_CR1_JDMAEN_Values<DFSDM::DFSDM0_CR1, 5, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JSCAN = DFSDM_DFSDM0_CR1_JSCAN_Values<DFSDM::DFSDM0_CR1, 4, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JSYNC = DFSDM_DFSDM0_CR1_JSYNC_Values<DFSDM::DFSDM0_CR1, 3, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using JSWSTART = DFSDM_DFSDM0_CR1_JSWSTART_Values<DFSDM::DFSDM0_CR1, 1, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using DFEN = DFSDM_DFSDM0_CR1_DFEN_Values<DFSDM::DFSDM0_CR1, 0, 1, ReadWriteMode, DFSDMDFSDM0_CR1Base> ;
    using FieldValues = DFSDM_DFSDM0_CR1_DFEN_Values<DFSDM::DFSDM0_CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_CR1Pack  = Register<0x40016100, 32, ReadWriteMode, DFSDMDFSDM0_CR1Base, T...> ;

  struct DFSDMDFSDM0_CR2Base {} ;

  struct DFSDM0_CR2 : public RegisterBase<0x40016104, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM0_CR2_AWDCH_Values<DFSDM::DFSDM0_CR2, 16, 8, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using EXCH = DFSDM_DFSDM0_CR2_EXCH_Values<DFSDM::DFSDM0_CR2, 8, 8, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using CKABIE = DFSDM_DFSDM0_CR2_CKABIE_Values<DFSDM::DFSDM0_CR2, 6, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using SCDIE = DFSDM_DFSDM0_CR2_SCDIE_Values<DFSDM::DFSDM0_CR2, 5, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using AWDIE = DFSDM_DFSDM0_CR2_AWDIE_Values<DFSDM::DFSDM0_CR2, 4, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using ROVRIE = DFSDM_DFSDM0_CR2_ROVRIE_Values<DFSDM::DFSDM0_CR2, 3, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using JOVRIE = DFSDM_DFSDM0_CR2_JOVRIE_Values<DFSDM::DFSDM0_CR2, 2, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using REOCIE = DFSDM_DFSDM0_CR2_REOCIE_Values<DFSDM::DFSDM0_CR2, 1, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using JEOCIE = DFSDM_DFSDM0_CR2_JEOCIE_Values<DFSDM::DFSDM0_CR2, 0, 1, ReadWriteMode, DFSDMDFSDM0_CR2Base> ;
    using FieldValues = DFSDM_DFSDM0_CR2_JEOCIE_Values<DFSDM::DFSDM0_CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_CR2Pack  = Register<0x40016104, 32, ReadWriteMode, DFSDMDFSDM0_CR2Base, T...> ;

  struct DFSDMDFSDM0_ISRBase {} ;

  struct DFSDM0_ISR : public RegisterBase<0x40016108, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM0_ISR_SCDF_Values<DFSDM::DFSDM0_ISR, 24, 8, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using CKABF = DFSDM_DFSDM0_ISR_CKABF_Values<DFSDM::DFSDM0_ISR, 16, 8, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using RCIP = DFSDM_DFSDM0_ISR_RCIP_Values<DFSDM::DFSDM0_ISR, 14, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using JCIP = DFSDM_DFSDM0_ISR_JCIP_Values<DFSDM::DFSDM0_ISR, 13, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using AWDF = DFSDM_DFSDM0_ISR_AWDF_Values<DFSDM::DFSDM0_ISR, 4, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using ROVRF = DFSDM_DFSDM0_ISR_ROVRF_Values<DFSDM::DFSDM0_ISR, 3, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using JOVRF = DFSDM_DFSDM0_ISR_JOVRF_Values<DFSDM::DFSDM0_ISR, 2, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using REOCF = DFSDM_DFSDM0_ISR_REOCF_Values<DFSDM::DFSDM0_ISR, 1, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using JEOCF = DFSDM_DFSDM0_ISR_JEOCF_Values<DFSDM::DFSDM0_ISR, 0, 1, ReadMode, DFSDMDFSDM0_ISRBase> ;
    using FieldValues = DFSDM_DFSDM0_ISR_JEOCF_Values<DFSDM::DFSDM0_ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_ISRPack  = Register<0x40016108, 32, ReadMode, DFSDMDFSDM0_ISRBase, T...> ;

  struct DFSDMDFSDM0_ICRBase {} ;

  struct DFSDM0_ICR : public RegisterBase<0x4001610C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM0_ICR_CLRSCDF_Values<DFSDM::DFSDM0_ICR, 24, 8, ReadWriteMode, DFSDMDFSDM0_ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM0_ICR_CLRCKABF_Values<DFSDM::DFSDM0_ICR, 16, 8, ReadWriteMode, DFSDMDFSDM0_ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM0_ICR_CLRROVRF_Values<DFSDM::DFSDM0_ICR, 3, 1, ReadWriteMode, DFSDMDFSDM0_ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM0_ICR_CLRJOVRF_Values<DFSDM::DFSDM0_ICR, 2, 1, ReadWriteMode, DFSDMDFSDM0_ICRBase> ;
    using FieldValues = DFSDM_DFSDM0_ICR_CLRJOVRF_Values<DFSDM::DFSDM0_ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_ICRPack  = Register<0x4001610C, 32, ReadWriteMode, DFSDMDFSDM0_ICRBase, T...> ;

  struct DFSDMDFSDM0_JCHGRBase {} ;

  struct DFSDM0_JCHGR : public RegisterBase<0x40016110, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM0_JCHGR_JCHG_Values<DFSDM::DFSDM0_JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM0_JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM0_JCHGR_JCHG_Values<DFSDM::DFSDM0_JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_JCHGRPack  = Register<0x40016110, 32, ReadWriteMode, DFSDMDFSDM0_JCHGRBase, T...> ;

  struct DFSDMDFSDM0_FCRBase {} ;

  struct DFSDM0_FCR : public RegisterBase<0x40016114, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM0_FCR_FORD_Values<DFSDM::DFSDM0_FCR, 29, 3, ReadWriteMode, DFSDMDFSDM0_FCRBase> ;
    using FOSR = DFSDM_DFSDM0_FCR_FOSR_Values<DFSDM::DFSDM0_FCR, 16, 10, ReadWriteMode, DFSDMDFSDM0_FCRBase> ;
    using IOSR = DFSDM_DFSDM0_FCR_IOSR_Values<DFSDM::DFSDM0_FCR, 0, 8, ReadWriteMode, DFSDMDFSDM0_FCRBase> ;
    using FieldValues = DFSDM_DFSDM0_FCR_IOSR_Values<DFSDM::DFSDM0_FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_FCRPack  = Register<0x40016114, 32, ReadWriteMode, DFSDMDFSDM0_FCRBase, T...> ;

  struct DFSDMDFSDM0_JDATARBase {} ;

  struct DFSDM0_JDATAR : public RegisterBase<0x40016118, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM0_JDATAR_JDATA_Values<DFSDM::DFSDM0_JDATAR, 8, 24, ReadMode, DFSDMDFSDM0_JDATARBase> ;
    using JDATACH = DFSDM_DFSDM0_JDATAR_JDATACH_Values<DFSDM::DFSDM0_JDATAR, 0, 3, ReadMode, DFSDMDFSDM0_JDATARBase> ;
    using FieldValues = DFSDM_DFSDM0_JDATAR_JDATACH_Values<DFSDM::DFSDM0_JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_JDATARPack  = Register<0x40016118, 32, ReadMode, DFSDMDFSDM0_JDATARBase, T...> ;

  struct DFSDMDFSDM0_RDATARBase {} ;

  struct DFSDM0_RDATAR : public RegisterBase<0x4001611C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM0_RDATAR_RDATA_Values<DFSDM::DFSDM0_RDATAR, 8, 24, ReadMode, DFSDMDFSDM0_RDATARBase> ;
    using RPEND = DFSDM_DFSDM0_RDATAR_RPEND_Values<DFSDM::DFSDM0_RDATAR, 4, 1, ReadMode, DFSDMDFSDM0_RDATARBase> ;
    using RDATACH = DFSDM_DFSDM0_RDATAR_RDATACH_Values<DFSDM::DFSDM0_RDATAR, 0, 3, ReadMode, DFSDMDFSDM0_RDATARBase> ;
    using FieldValues = DFSDM_DFSDM0_RDATAR_RDATACH_Values<DFSDM::DFSDM0_RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_RDATARPack  = Register<0x4001611C, 32, ReadMode, DFSDMDFSDM0_RDATARBase, T...> ;

  struct DFSDMDFSDM0_AWHTRBase {} ;

  struct DFSDM0_AWHTR : public RegisterBase<0x40016120, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM0_AWHTR_AWHT_Values<DFSDM::DFSDM0_AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM0_AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM0_AWHTR_BKAWH_Values<DFSDM::DFSDM0_AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM0_AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM0_AWHTR_BKAWH_Values<DFSDM::DFSDM0_AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_AWHTRPack  = Register<0x40016120, 32, ReadWriteMode, DFSDMDFSDM0_AWHTRBase, T...> ;

  struct DFSDMDFSDM0_AWLTRBase {} ;

  struct DFSDM0_AWLTR : public RegisterBase<0x40016124, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM0_AWLTR_AWLT_Values<DFSDM::DFSDM0_AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM0_AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM0_AWLTR_BKAWL_Values<DFSDM::DFSDM0_AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM0_AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM0_AWLTR_BKAWL_Values<DFSDM::DFSDM0_AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_AWLTRPack  = Register<0x40016124, 32, ReadWriteMode, DFSDMDFSDM0_AWLTRBase, T...> ;

  struct DFSDMDFSDM0_AWSRBase {} ;

  struct DFSDM0_AWSR : public RegisterBase<0x40016128, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM0_AWSR_AWHTF_Values<DFSDM::DFSDM0_AWSR, 8, 8, ReadMode, DFSDMDFSDM0_AWSRBase> ;
    using AWLTF = DFSDM_DFSDM0_AWSR_AWLTF_Values<DFSDM::DFSDM0_AWSR, 0, 8, ReadMode, DFSDMDFSDM0_AWSRBase> ;
    using FieldValues = DFSDM_DFSDM0_AWSR_AWLTF_Values<DFSDM::DFSDM0_AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_AWSRPack  = Register<0x40016128, 32, ReadMode, DFSDMDFSDM0_AWSRBase, T...> ;

  struct DFSDMDFSDM0_AWCFRBase {} ;

  struct DFSDM0_AWCFR : public RegisterBase<0x4001612C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM0_AWCFR_CLRAWHTF_Values<DFSDM::DFSDM0_AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM0_AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM0_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM0_AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM0_AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM0_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM0_AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_AWCFRPack  = Register<0x4001612C, 32, ReadWriteMode, DFSDMDFSDM0_AWCFRBase, T...> ;

  struct DFSDMDFSDM0_EXMAXBase {} ;

  struct DFSDM0_EXMAX : public RegisterBase<0x40016130, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM0_EXMAX_EXMAX_Values<DFSDM::DFSDM0_EXMAX, 8, 24, ReadMode, DFSDMDFSDM0_EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM0_EXMAX_EXMAXCH_Values<DFSDM::DFSDM0_EXMAX, 0, 3, ReadMode, DFSDMDFSDM0_EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM0_EXMAX_EXMAXCH_Values<DFSDM::DFSDM0_EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_EXMAXPack  = Register<0x40016130, 32, ReadMode, DFSDMDFSDM0_EXMAXBase, T...> ;

  struct DFSDMDFSDM0_EXMINBase {} ;

  struct DFSDM0_EXMIN : public RegisterBase<0x40016134, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM0_EXMIN_EXMIN_Values<DFSDM::DFSDM0_EXMIN, 8, 24, ReadMode, DFSDMDFSDM0_EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM0_EXMIN_EXMINCH_Values<DFSDM::DFSDM0_EXMIN, 0, 3, ReadMode, DFSDMDFSDM0_EXMINBase> ;
    using FieldValues = DFSDM_DFSDM0_EXMIN_EXMINCH_Values<DFSDM::DFSDM0_EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_EXMINPack  = Register<0x40016134, 32, ReadMode, DFSDMDFSDM0_EXMINBase, T...> ;

  struct DFSDMDFSDM0_CNVTIMRBase {} ;

  struct DFSDM0_CNVTIMR : public RegisterBase<0x40016138, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM0_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM0_CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM0_CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM0_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM0_CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM0_CNVTIMRPack  = Register<0x40016138, 32, ReadMode, DFSDMDFSDM0_CNVTIMRBase, T...> ;

  struct DFSDMDFSDM1_CR1Base {} ;

  struct DFSDM1_CR1 : public RegisterBase<0x40016200, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM1_CR1_AWFSEL_Values<DFSDM::DFSDM1_CR1, 30, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using FAST = DFSDM_DFSDM1_CR1_FAST_Values<DFSDM::DFSDM1_CR1, 29, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using RCH = DFSDM_DFSDM1_CR1_RCH_Values<DFSDM::DFSDM1_CR1, 24, 3, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using RDMAEN = DFSDM_DFSDM1_CR1_RDMAEN_Values<DFSDM::DFSDM1_CR1, 21, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using RSYNC = DFSDM_DFSDM1_CR1_RSYNC_Values<DFSDM::DFSDM1_CR1, 19, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using RCONT = DFSDM_DFSDM1_CR1_RCONT_Values<DFSDM::DFSDM1_CR1, 18, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using RSWSTART = DFSDM_DFSDM1_CR1_RSWSTART_Values<DFSDM::DFSDM1_CR1, 17, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JEXTEN = DFSDM_DFSDM1_CR1_JEXTEN_Values<DFSDM::DFSDM1_CR1, 13, 2, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM1_CR1_JEXTSEL_Values<DFSDM::DFSDM1_CR1, 8, 3, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JDMAEN = DFSDM_DFSDM1_CR1_JDMAEN_Values<DFSDM::DFSDM1_CR1, 5, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JSCAN = DFSDM_DFSDM1_CR1_JSCAN_Values<DFSDM::DFSDM1_CR1, 4, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JSYNC = DFSDM_DFSDM1_CR1_JSYNC_Values<DFSDM::DFSDM1_CR1, 3, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using JSWSTART = DFSDM_DFSDM1_CR1_JSWSTART_Values<DFSDM::DFSDM1_CR1, 1, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using DFEN = DFSDM_DFSDM1_CR1_DFEN_Values<DFSDM::DFSDM1_CR1, 0, 1, ReadWriteMode, DFSDMDFSDM1_CR1Base> ;
    using FieldValues = DFSDM_DFSDM1_CR1_DFEN_Values<DFSDM::DFSDM1_CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_CR1Pack  = Register<0x40016200, 32, ReadWriteMode, DFSDMDFSDM1_CR1Base, T...> ;

  struct DFSDMDFSDM1_CR2Base {} ;

  struct DFSDM1_CR2 : public RegisterBase<0x40016204, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM1_CR2_AWDCH_Values<DFSDM::DFSDM1_CR2, 16, 8, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using EXCH = DFSDM_DFSDM1_CR2_EXCH_Values<DFSDM::DFSDM1_CR2, 8, 8, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using CKABIE = DFSDM_DFSDM1_CR2_CKABIE_Values<DFSDM::DFSDM1_CR2, 6, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using SCDIE = DFSDM_DFSDM1_CR2_SCDIE_Values<DFSDM::DFSDM1_CR2, 5, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using AWDIE = DFSDM_DFSDM1_CR2_AWDIE_Values<DFSDM::DFSDM1_CR2, 4, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using ROVRIE = DFSDM_DFSDM1_CR2_ROVRIE_Values<DFSDM::DFSDM1_CR2, 3, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using JOVRIE = DFSDM_DFSDM1_CR2_JOVRIE_Values<DFSDM::DFSDM1_CR2, 2, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using REOCIE = DFSDM_DFSDM1_CR2_REOCIE_Values<DFSDM::DFSDM1_CR2, 1, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using JEOCIE = DFSDM_DFSDM1_CR2_JEOCIE_Values<DFSDM::DFSDM1_CR2, 0, 1, ReadWriteMode, DFSDMDFSDM1_CR2Base> ;
    using FieldValues = DFSDM_DFSDM1_CR2_JEOCIE_Values<DFSDM::DFSDM1_CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_CR2Pack  = Register<0x40016204, 32, ReadWriteMode, DFSDMDFSDM1_CR2Base, T...> ;

  struct DFSDMDFSDM1_ISRBase {} ;

  struct DFSDM1_ISR : public RegisterBase<0x40016208, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM1_ISR_SCDF_Values<DFSDM::DFSDM1_ISR, 24, 8, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using CKABF = DFSDM_DFSDM1_ISR_CKABF_Values<DFSDM::DFSDM1_ISR, 16, 8, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using RCIP = DFSDM_DFSDM1_ISR_RCIP_Values<DFSDM::DFSDM1_ISR, 14, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using JCIP = DFSDM_DFSDM1_ISR_JCIP_Values<DFSDM::DFSDM1_ISR, 13, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using AWDF = DFSDM_DFSDM1_ISR_AWDF_Values<DFSDM::DFSDM1_ISR, 4, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using ROVRF = DFSDM_DFSDM1_ISR_ROVRF_Values<DFSDM::DFSDM1_ISR, 3, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using JOVRF = DFSDM_DFSDM1_ISR_JOVRF_Values<DFSDM::DFSDM1_ISR, 2, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using REOCF = DFSDM_DFSDM1_ISR_REOCF_Values<DFSDM::DFSDM1_ISR, 1, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using JEOCF = DFSDM_DFSDM1_ISR_JEOCF_Values<DFSDM::DFSDM1_ISR, 0, 1, ReadMode, DFSDMDFSDM1_ISRBase> ;
    using FieldValues = DFSDM_DFSDM1_ISR_JEOCF_Values<DFSDM::DFSDM1_ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_ISRPack  = Register<0x40016208, 32, ReadMode, DFSDMDFSDM1_ISRBase, T...> ;

  struct DFSDMDFSDM1_ICRBase {} ;

  struct DFSDM1_ICR : public RegisterBase<0x4001620C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM1_ICR_CLRSCDF_Values<DFSDM::DFSDM1_ICR, 24, 8, ReadWriteMode, DFSDMDFSDM1_ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM1_ICR_CLRCKABF_Values<DFSDM::DFSDM1_ICR, 16, 8, ReadWriteMode, DFSDMDFSDM1_ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM1_ICR_CLRROVRF_Values<DFSDM::DFSDM1_ICR, 3, 1, ReadWriteMode, DFSDMDFSDM1_ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM1_ICR_CLRJOVRF_Values<DFSDM::DFSDM1_ICR, 2, 1, ReadWriteMode, DFSDMDFSDM1_ICRBase> ;
    using FieldValues = DFSDM_DFSDM1_ICR_CLRJOVRF_Values<DFSDM::DFSDM1_ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_ICRPack  = Register<0x4001620C, 32, ReadWriteMode, DFSDMDFSDM1_ICRBase, T...> ;

  struct DFSDMDFSDM1_JCHGRBase {} ;

  struct DFSDM1_JCHGR : public RegisterBase<0x40016210, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM1_JCHGR_JCHG_Values<DFSDM::DFSDM1_JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM1_JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM1_JCHGR_JCHG_Values<DFSDM::DFSDM1_JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_JCHGRPack  = Register<0x40016210, 32, ReadWriteMode, DFSDMDFSDM1_JCHGRBase, T...> ;

  struct DFSDMDFSDM1_FCRBase {} ;

  struct DFSDM1_FCR : public RegisterBase<0x40016214, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM1_FCR_FORD_Values<DFSDM::DFSDM1_FCR, 29, 3, ReadWriteMode, DFSDMDFSDM1_FCRBase> ;
    using FOSR = DFSDM_DFSDM1_FCR_FOSR_Values<DFSDM::DFSDM1_FCR, 16, 10, ReadWriteMode, DFSDMDFSDM1_FCRBase> ;
    using IOSR = DFSDM_DFSDM1_FCR_IOSR_Values<DFSDM::DFSDM1_FCR, 0, 8, ReadWriteMode, DFSDMDFSDM1_FCRBase> ;
    using FieldValues = DFSDM_DFSDM1_FCR_IOSR_Values<DFSDM::DFSDM1_FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_FCRPack  = Register<0x40016214, 32, ReadWriteMode, DFSDMDFSDM1_FCRBase, T...> ;

  struct DFSDMDFSDM1_JDATARBase {} ;

  struct DFSDM1_JDATAR : public RegisterBase<0x40016218, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM1_JDATAR_JDATA_Values<DFSDM::DFSDM1_JDATAR, 8, 24, ReadMode, DFSDMDFSDM1_JDATARBase> ;
    using JDATACH = DFSDM_DFSDM1_JDATAR_JDATACH_Values<DFSDM::DFSDM1_JDATAR, 0, 3, ReadMode, DFSDMDFSDM1_JDATARBase> ;
    using FieldValues = DFSDM_DFSDM1_JDATAR_JDATACH_Values<DFSDM::DFSDM1_JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_JDATARPack  = Register<0x40016218, 32, ReadMode, DFSDMDFSDM1_JDATARBase, T...> ;

  struct DFSDMDFSDM1_RDATARBase {} ;

  struct DFSDM1_RDATAR : public RegisterBase<0x4001621C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM1_RDATAR_RDATA_Values<DFSDM::DFSDM1_RDATAR, 8, 24, ReadMode, DFSDMDFSDM1_RDATARBase> ;
    using RPEND = DFSDM_DFSDM1_RDATAR_RPEND_Values<DFSDM::DFSDM1_RDATAR, 4, 1, ReadMode, DFSDMDFSDM1_RDATARBase> ;
    using RDATACH = DFSDM_DFSDM1_RDATAR_RDATACH_Values<DFSDM::DFSDM1_RDATAR, 0, 3, ReadMode, DFSDMDFSDM1_RDATARBase> ;
    using FieldValues = DFSDM_DFSDM1_RDATAR_RDATACH_Values<DFSDM::DFSDM1_RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_RDATARPack  = Register<0x4001621C, 32, ReadMode, DFSDMDFSDM1_RDATARBase, T...> ;

  struct DFSDMDFSDM1_AWHTRBase {} ;

  struct DFSDM1_AWHTR : public RegisterBase<0x40016220, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM1_AWHTR_AWHT_Values<DFSDM::DFSDM1_AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM1_AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM1_AWHTR_BKAWH_Values<DFSDM::DFSDM1_AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM1_AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM1_AWHTR_BKAWH_Values<DFSDM::DFSDM1_AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_AWHTRPack  = Register<0x40016220, 32, ReadWriteMode, DFSDMDFSDM1_AWHTRBase, T...> ;

  struct DFSDMDFSDM1_AWLTRBase {} ;

  struct DFSDM1_AWLTR : public RegisterBase<0x40016224, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM1_AWLTR_AWLT_Values<DFSDM::DFSDM1_AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM1_AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM1_AWLTR_BKAWL_Values<DFSDM::DFSDM1_AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM1_AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM1_AWLTR_BKAWL_Values<DFSDM::DFSDM1_AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_AWLTRPack  = Register<0x40016224, 32, ReadWriteMode, DFSDMDFSDM1_AWLTRBase, T...> ;

  struct DFSDMDFSDM1_AWSRBase {} ;

  struct DFSDM1_AWSR : public RegisterBase<0x40016228, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM1_AWSR_AWHTF_Values<DFSDM::DFSDM1_AWSR, 8, 8, ReadMode, DFSDMDFSDM1_AWSRBase> ;
    using AWLTF = DFSDM_DFSDM1_AWSR_AWLTF_Values<DFSDM::DFSDM1_AWSR, 0, 8, ReadMode, DFSDMDFSDM1_AWSRBase> ;
    using FieldValues = DFSDM_DFSDM1_AWSR_AWLTF_Values<DFSDM::DFSDM1_AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_AWSRPack  = Register<0x40016228, 32, ReadMode, DFSDMDFSDM1_AWSRBase, T...> ;

  struct DFSDMDFSDM1_AWCFRBase {} ;

  struct DFSDM1_AWCFR : public RegisterBase<0x4001622C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM1_AWCFR_CLRAWHTF_Values<DFSDM::DFSDM1_AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM1_AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM1_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM1_AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM1_AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM1_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM1_AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_AWCFRPack  = Register<0x4001622C, 32, ReadWriteMode, DFSDMDFSDM1_AWCFRBase, T...> ;

  struct DFSDMDFSDM1_EXMAXBase {} ;

  struct DFSDM1_EXMAX : public RegisterBase<0x40016230, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM1_EXMAX_EXMAX_Values<DFSDM::DFSDM1_EXMAX, 8, 24, ReadMode, DFSDMDFSDM1_EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM1_EXMAX_EXMAXCH_Values<DFSDM::DFSDM1_EXMAX, 0, 3, ReadMode, DFSDMDFSDM1_EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM1_EXMAX_EXMAXCH_Values<DFSDM::DFSDM1_EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_EXMAXPack  = Register<0x40016230, 32, ReadMode, DFSDMDFSDM1_EXMAXBase, T...> ;

  struct DFSDMDFSDM1_EXMINBase {} ;

  struct DFSDM1_EXMIN : public RegisterBase<0x40016234, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM1_EXMIN_EXMIN_Values<DFSDM::DFSDM1_EXMIN, 8, 24, ReadMode, DFSDMDFSDM1_EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM1_EXMIN_EXMINCH_Values<DFSDM::DFSDM1_EXMIN, 0, 3, ReadMode, DFSDMDFSDM1_EXMINBase> ;
    using FieldValues = DFSDM_DFSDM1_EXMIN_EXMINCH_Values<DFSDM::DFSDM1_EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_EXMINPack  = Register<0x40016234, 32, ReadMode, DFSDMDFSDM1_EXMINBase, T...> ;

  struct DFSDMDFSDM1_CNVTIMRBase {} ;

  struct DFSDM1_CNVTIMR : public RegisterBase<0x40016238, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM1_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM1_CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM1_CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM1_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM1_CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM1_CNVTIMRPack  = Register<0x40016238, 32, ReadMode, DFSDMDFSDM1_CNVTIMRBase, T...> ;

  struct DFSDMDFSDM2_CR1Base {} ;

  struct DFSDM2_CR1 : public RegisterBase<0x40016300, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM2_CR1_AWFSEL_Values<DFSDM::DFSDM2_CR1, 30, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using FAST = DFSDM_DFSDM2_CR1_FAST_Values<DFSDM::DFSDM2_CR1, 29, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using RCH = DFSDM_DFSDM2_CR1_RCH_Values<DFSDM::DFSDM2_CR1, 24, 3, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using RDMAEN = DFSDM_DFSDM2_CR1_RDMAEN_Values<DFSDM::DFSDM2_CR1, 21, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using RSYNC = DFSDM_DFSDM2_CR1_RSYNC_Values<DFSDM::DFSDM2_CR1, 19, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using RCONT = DFSDM_DFSDM2_CR1_RCONT_Values<DFSDM::DFSDM2_CR1, 18, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using RSWSTART = DFSDM_DFSDM2_CR1_RSWSTART_Values<DFSDM::DFSDM2_CR1, 17, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JEXTEN = DFSDM_DFSDM2_CR1_JEXTEN_Values<DFSDM::DFSDM2_CR1, 13, 2, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM2_CR1_JEXTSEL_Values<DFSDM::DFSDM2_CR1, 8, 3, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JDMAEN = DFSDM_DFSDM2_CR1_JDMAEN_Values<DFSDM::DFSDM2_CR1, 5, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JSCAN = DFSDM_DFSDM2_CR1_JSCAN_Values<DFSDM::DFSDM2_CR1, 4, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JSYNC = DFSDM_DFSDM2_CR1_JSYNC_Values<DFSDM::DFSDM2_CR1, 3, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using JSWSTART = DFSDM_DFSDM2_CR1_JSWSTART_Values<DFSDM::DFSDM2_CR1, 1, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using DFEN = DFSDM_DFSDM2_CR1_DFEN_Values<DFSDM::DFSDM2_CR1, 0, 1, ReadWriteMode, DFSDMDFSDM2_CR1Base> ;
    using FieldValues = DFSDM_DFSDM2_CR1_DFEN_Values<DFSDM::DFSDM2_CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_CR1Pack  = Register<0x40016300, 32, ReadWriteMode, DFSDMDFSDM2_CR1Base, T...> ;

  struct DFSDMDFSDM2_CR2Base {} ;

  struct DFSDM2_CR2 : public RegisterBase<0x40016304, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM2_CR2_AWDCH_Values<DFSDM::DFSDM2_CR2, 16, 8, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using EXCH = DFSDM_DFSDM2_CR2_EXCH_Values<DFSDM::DFSDM2_CR2, 8, 8, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using CKABIE = DFSDM_DFSDM2_CR2_CKABIE_Values<DFSDM::DFSDM2_CR2, 6, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using SCDIE = DFSDM_DFSDM2_CR2_SCDIE_Values<DFSDM::DFSDM2_CR2, 5, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using AWDIE = DFSDM_DFSDM2_CR2_AWDIE_Values<DFSDM::DFSDM2_CR2, 4, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using ROVRIE = DFSDM_DFSDM2_CR2_ROVRIE_Values<DFSDM::DFSDM2_CR2, 3, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using JOVRIE = DFSDM_DFSDM2_CR2_JOVRIE_Values<DFSDM::DFSDM2_CR2, 2, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using REOCIE = DFSDM_DFSDM2_CR2_REOCIE_Values<DFSDM::DFSDM2_CR2, 1, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using JEOCIE = DFSDM_DFSDM2_CR2_JEOCIE_Values<DFSDM::DFSDM2_CR2, 0, 1, ReadWriteMode, DFSDMDFSDM2_CR2Base> ;
    using FieldValues = DFSDM_DFSDM2_CR2_JEOCIE_Values<DFSDM::DFSDM2_CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_CR2Pack  = Register<0x40016304, 32, ReadWriteMode, DFSDMDFSDM2_CR2Base, T...> ;

  struct DFSDMDFSDM2_ISRBase {} ;

  struct DFSDM2_ISR : public RegisterBase<0x40016308, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM2_ISR_SCDF_Values<DFSDM::DFSDM2_ISR, 24, 8, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using CKABF = DFSDM_DFSDM2_ISR_CKABF_Values<DFSDM::DFSDM2_ISR, 16, 8, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using RCIP = DFSDM_DFSDM2_ISR_RCIP_Values<DFSDM::DFSDM2_ISR, 14, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using JCIP = DFSDM_DFSDM2_ISR_JCIP_Values<DFSDM::DFSDM2_ISR, 13, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using AWDF = DFSDM_DFSDM2_ISR_AWDF_Values<DFSDM::DFSDM2_ISR, 4, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using ROVRF = DFSDM_DFSDM2_ISR_ROVRF_Values<DFSDM::DFSDM2_ISR, 3, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using JOVRF = DFSDM_DFSDM2_ISR_JOVRF_Values<DFSDM::DFSDM2_ISR, 2, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using REOCF = DFSDM_DFSDM2_ISR_REOCF_Values<DFSDM::DFSDM2_ISR, 1, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using JEOCF = DFSDM_DFSDM2_ISR_JEOCF_Values<DFSDM::DFSDM2_ISR, 0, 1, ReadMode, DFSDMDFSDM2_ISRBase> ;
    using FieldValues = DFSDM_DFSDM2_ISR_JEOCF_Values<DFSDM::DFSDM2_ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_ISRPack  = Register<0x40016308, 32, ReadMode, DFSDMDFSDM2_ISRBase, T...> ;

  struct DFSDMDFSDM2_ICRBase {} ;

  struct DFSDM2_ICR : public RegisterBase<0x4001630C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM2_ICR_CLRSCDF_Values<DFSDM::DFSDM2_ICR, 24, 8, ReadWriteMode, DFSDMDFSDM2_ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM2_ICR_CLRCKABF_Values<DFSDM::DFSDM2_ICR, 16, 8, ReadWriteMode, DFSDMDFSDM2_ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM2_ICR_CLRROVRF_Values<DFSDM::DFSDM2_ICR, 3, 1, ReadWriteMode, DFSDMDFSDM2_ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM2_ICR_CLRJOVRF_Values<DFSDM::DFSDM2_ICR, 2, 1, ReadWriteMode, DFSDMDFSDM2_ICRBase> ;
    using FieldValues = DFSDM_DFSDM2_ICR_CLRJOVRF_Values<DFSDM::DFSDM2_ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_ICRPack  = Register<0x4001630C, 32, ReadWriteMode, DFSDMDFSDM2_ICRBase, T...> ;

  struct DFSDMDFSDM2_JCHGRBase {} ;

  struct DFSDM2_JCHGR : public RegisterBase<0x40016310, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM2_JCHGR_JCHG_Values<DFSDM::DFSDM2_JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM2_JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM2_JCHGR_JCHG_Values<DFSDM::DFSDM2_JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_JCHGRPack  = Register<0x40016310, 32, ReadWriteMode, DFSDMDFSDM2_JCHGRBase, T...> ;

  struct DFSDMDFSDM2_FCRBase {} ;

  struct DFSDM2_FCR : public RegisterBase<0x40016314, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM2_FCR_FORD_Values<DFSDM::DFSDM2_FCR, 29, 3, ReadWriteMode, DFSDMDFSDM2_FCRBase> ;
    using FOSR = DFSDM_DFSDM2_FCR_FOSR_Values<DFSDM::DFSDM2_FCR, 16, 10, ReadWriteMode, DFSDMDFSDM2_FCRBase> ;
    using IOSR = DFSDM_DFSDM2_FCR_IOSR_Values<DFSDM::DFSDM2_FCR, 0, 8, ReadWriteMode, DFSDMDFSDM2_FCRBase> ;
    using FieldValues = DFSDM_DFSDM2_FCR_IOSR_Values<DFSDM::DFSDM2_FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_FCRPack  = Register<0x40016314, 32, ReadWriteMode, DFSDMDFSDM2_FCRBase, T...> ;

  struct DFSDMDFSDM2_JDATARBase {} ;

  struct DFSDM2_JDATAR : public RegisterBase<0x40016318, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM2_JDATAR_JDATA_Values<DFSDM::DFSDM2_JDATAR, 8, 24, ReadMode, DFSDMDFSDM2_JDATARBase> ;
    using JDATACH = DFSDM_DFSDM2_JDATAR_JDATACH_Values<DFSDM::DFSDM2_JDATAR, 0, 3, ReadMode, DFSDMDFSDM2_JDATARBase> ;
    using FieldValues = DFSDM_DFSDM2_JDATAR_JDATACH_Values<DFSDM::DFSDM2_JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_JDATARPack  = Register<0x40016318, 32, ReadMode, DFSDMDFSDM2_JDATARBase, T...> ;

  struct DFSDMDFSDM2_RDATARBase {} ;

  struct DFSDM2_RDATAR : public RegisterBase<0x4001631C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM2_RDATAR_RDATA_Values<DFSDM::DFSDM2_RDATAR, 8, 24, ReadMode, DFSDMDFSDM2_RDATARBase> ;
    using RPEND = DFSDM_DFSDM2_RDATAR_RPEND_Values<DFSDM::DFSDM2_RDATAR, 4, 1, ReadMode, DFSDMDFSDM2_RDATARBase> ;
    using RDATACH = DFSDM_DFSDM2_RDATAR_RDATACH_Values<DFSDM::DFSDM2_RDATAR, 0, 3, ReadMode, DFSDMDFSDM2_RDATARBase> ;
    using FieldValues = DFSDM_DFSDM2_RDATAR_RDATACH_Values<DFSDM::DFSDM2_RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_RDATARPack  = Register<0x4001631C, 32, ReadMode, DFSDMDFSDM2_RDATARBase, T...> ;

  struct DFSDMDFSDM2_AWHTRBase {} ;

  struct DFSDM2_AWHTR : public RegisterBase<0x40016320, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM2_AWHTR_AWHT_Values<DFSDM::DFSDM2_AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM2_AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM2_AWHTR_BKAWH_Values<DFSDM::DFSDM2_AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM2_AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM2_AWHTR_BKAWH_Values<DFSDM::DFSDM2_AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_AWHTRPack  = Register<0x40016320, 32, ReadWriteMode, DFSDMDFSDM2_AWHTRBase, T...> ;

  struct DFSDMDFSDM2_AWLTRBase {} ;

  struct DFSDM2_AWLTR : public RegisterBase<0x40016324, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM2_AWLTR_AWLT_Values<DFSDM::DFSDM2_AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM2_AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM2_AWLTR_BKAWL_Values<DFSDM::DFSDM2_AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM2_AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM2_AWLTR_BKAWL_Values<DFSDM::DFSDM2_AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_AWLTRPack  = Register<0x40016324, 32, ReadWriteMode, DFSDMDFSDM2_AWLTRBase, T...> ;

  struct DFSDMDFSDM2_AWSRBase {} ;

  struct DFSDM2_AWSR : public RegisterBase<0x40016328, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM2_AWSR_AWHTF_Values<DFSDM::DFSDM2_AWSR, 8, 8, ReadMode, DFSDMDFSDM2_AWSRBase> ;
    using AWLTF = DFSDM_DFSDM2_AWSR_AWLTF_Values<DFSDM::DFSDM2_AWSR, 0, 8, ReadMode, DFSDMDFSDM2_AWSRBase> ;
    using FieldValues = DFSDM_DFSDM2_AWSR_AWLTF_Values<DFSDM::DFSDM2_AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_AWSRPack  = Register<0x40016328, 32, ReadMode, DFSDMDFSDM2_AWSRBase, T...> ;

  struct DFSDMDFSDM2_AWCFRBase {} ;

  struct DFSDM2_AWCFR : public RegisterBase<0x4001632C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM2_AWCFR_CLRAWHTF_Values<DFSDM::DFSDM2_AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM2_AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM2_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM2_AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM2_AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM2_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM2_AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_AWCFRPack  = Register<0x4001632C, 32, ReadWriteMode, DFSDMDFSDM2_AWCFRBase, T...> ;

  struct DFSDMDFSDM2_EXMAXBase {} ;

  struct DFSDM2_EXMAX : public RegisterBase<0x40016330, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM2_EXMAX_EXMAX_Values<DFSDM::DFSDM2_EXMAX, 8, 24, ReadMode, DFSDMDFSDM2_EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM2_EXMAX_EXMAXCH_Values<DFSDM::DFSDM2_EXMAX, 0, 3, ReadMode, DFSDMDFSDM2_EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM2_EXMAX_EXMAXCH_Values<DFSDM::DFSDM2_EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_EXMAXPack  = Register<0x40016330, 32, ReadMode, DFSDMDFSDM2_EXMAXBase, T...> ;

  struct DFSDMDFSDM2_EXMINBase {} ;

  struct DFSDM2_EXMIN : public RegisterBase<0x40016334, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM2_EXMIN_EXMIN_Values<DFSDM::DFSDM2_EXMIN, 8, 24, ReadMode, DFSDMDFSDM2_EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM2_EXMIN_EXMINCH_Values<DFSDM::DFSDM2_EXMIN, 0, 3, ReadMode, DFSDMDFSDM2_EXMINBase> ;
    using FieldValues = DFSDM_DFSDM2_EXMIN_EXMINCH_Values<DFSDM::DFSDM2_EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_EXMINPack  = Register<0x40016334, 32, ReadMode, DFSDMDFSDM2_EXMINBase, T...> ;

  struct DFSDMDFSDM2_CNVTIMRBase {} ;

  struct DFSDM2_CNVTIMR : public RegisterBase<0x40016338, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM2_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM2_CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM2_CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM2_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM2_CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM2_CNVTIMRPack  = Register<0x40016338, 32, ReadMode, DFSDMDFSDM2_CNVTIMRBase, T...> ;

  struct DFSDMDFSDM3_CR1Base {} ;

  struct DFSDM3_CR1 : public RegisterBase<0x40016400, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM3_CR1_AWFSEL_Values<DFSDM::DFSDM3_CR1, 30, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using FAST = DFSDM_DFSDM3_CR1_FAST_Values<DFSDM::DFSDM3_CR1, 29, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using RCH = DFSDM_DFSDM3_CR1_RCH_Values<DFSDM::DFSDM3_CR1, 24, 3, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using RDMAEN = DFSDM_DFSDM3_CR1_RDMAEN_Values<DFSDM::DFSDM3_CR1, 21, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using RSYNC = DFSDM_DFSDM3_CR1_RSYNC_Values<DFSDM::DFSDM3_CR1, 19, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using RCONT = DFSDM_DFSDM3_CR1_RCONT_Values<DFSDM::DFSDM3_CR1, 18, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using RSWSTART = DFSDM_DFSDM3_CR1_RSWSTART_Values<DFSDM::DFSDM3_CR1, 17, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JEXTEN = DFSDM_DFSDM3_CR1_JEXTEN_Values<DFSDM::DFSDM3_CR1, 13, 2, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM3_CR1_JEXTSEL_Values<DFSDM::DFSDM3_CR1, 8, 3, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JDMAEN = DFSDM_DFSDM3_CR1_JDMAEN_Values<DFSDM::DFSDM3_CR1, 5, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JSCAN = DFSDM_DFSDM3_CR1_JSCAN_Values<DFSDM::DFSDM3_CR1, 4, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JSYNC = DFSDM_DFSDM3_CR1_JSYNC_Values<DFSDM::DFSDM3_CR1, 3, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using JSWSTART = DFSDM_DFSDM3_CR1_JSWSTART_Values<DFSDM::DFSDM3_CR1, 1, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using DFEN = DFSDM_DFSDM3_CR1_DFEN_Values<DFSDM::DFSDM3_CR1, 0, 1, ReadWriteMode, DFSDMDFSDM3_CR1Base> ;
    using FieldValues = DFSDM_DFSDM3_CR1_DFEN_Values<DFSDM::DFSDM3_CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_CR1Pack  = Register<0x40016400, 32, ReadWriteMode, DFSDMDFSDM3_CR1Base, T...> ;

  struct DFSDMDFSDM3_CR2Base {} ;

  struct DFSDM3_CR2 : public RegisterBase<0x40016404, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM3_CR2_AWDCH_Values<DFSDM::DFSDM3_CR2, 16, 8, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using EXCH = DFSDM_DFSDM3_CR2_EXCH_Values<DFSDM::DFSDM3_CR2, 8, 8, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using CKABIE = DFSDM_DFSDM3_CR2_CKABIE_Values<DFSDM::DFSDM3_CR2, 6, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using SCDIE = DFSDM_DFSDM3_CR2_SCDIE_Values<DFSDM::DFSDM3_CR2, 5, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using AWDIE = DFSDM_DFSDM3_CR2_AWDIE_Values<DFSDM::DFSDM3_CR2, 4, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using ROVRIE = DFSDM_DFSDM3_CR2_ROVRIE_Values<DFSDM::DFSDM3_CR2, 3, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using JOVRIE = DFSDM_DFSDM3_CR2_JOVRIE_Values<DFSDM::DFSDM3_CR2, 2, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using REOCIE = DFSDM_DFSDM3_CR2_REOCIE_Values<DFSDM::DFSDM3_CR2, 1, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using JEOCIE = DFSDM_DFSDM3_CR2_JEOCIE_Values<DFSDM::DFSDM3_CR2, 0, 1, ReadWriteMode, DFSDMDFSDM3_CR2Base> ;
    using FieldValues = DFSDM_DFSDM3_CR2_JEOCIE_Values<DFSDM::DFSDM3_CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_CR2Pack  = Register<0x40016404, 32, ReadWriteMode, DFSDMDFSDM3_CR2Base, T...> ;

  struct DFSDMDFSDM3_ISRBase {} ;

  struct DFSDM3_ISR : public RegisterBase<0x40016408, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM3_ISR_SCDF_Values<DFSDM::DFSDM3_ISR, 24, 8, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using CKABF = DFSDM_DFSDM3_ISR_CKABF_Values<DFSDM::DFSDM3_ISR, 16, 8, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using RCIP = DFSDM_DFSDM3_ISR_RCIP_Values<DFSDM::DFSDM3_ISR, 14, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using JCIP = DFSDM_DFSDM3_ISR_JCIP_Values<DFSDM::DFSDM3_ISR, 13, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using AWDF = DFSDM_DFSDM3_ISR_AWDF_Values<DFSDM::DFSDM3_ISR, 4, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using ROVRF = DFSDM_DFSDM3_ISR_ROVRF_Values<DFSDM::DFSDM3_ISR, 3, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using JOVRF = DFSDM_DFSDM3_ISR_JOVRF_Values<DFSDM::DFSDM3_ISR, 2, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using REOCF = DFSDM_DFSDM3_ISR_REOCF_Values<DFSDM::DFSDM3_ISR, 1, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using JEOCF = DFSDM_DFSDM3_ISR_JEOCF_Values<DFSDM::DFSDM3_ISR, 0, 1, ReadMode, DFSDMDFSDM3_ISRBase> ;
    using FieldValues = DFSDM_DFSDM3_ISR_JEOCF_Values<DFSDM::DFSDM3_ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_ISRPack  = Register<0x40016408, 32, ReadMode, DFSDMDFSDM3_ISRBase, T...> ;

  struct DFSDMDFSDM3_ICRBase {} ;

  struct DFSDM3_ICR : public RegisterBase<0x4001640C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM3_ICR_CLRSCDF_Values<DFSDM::DFSDM3_ICR, 24, 8, ReadWriteMode, DFSDMDFSDM3_ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM3_ICR_CLRCKABF_Values<DFSDM::DFSDM3_ICR, 16, 8, ReadWriteMode, DFSDMDFSDM3_ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM3_ICR_CLRROVRF_Values<DFSDM::DFSDM3_ICR, 3, 1, ReadWriteMode, DFSDMDFSDM3_ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM3_ICR_CLRJOVRF_Values<DFSDM::DFSDM3_ICR, 2, 1, ReadWriteMode, DFSDMDFSDM3_ICRBase> ;
    using FieldValues = DFSDM_DFSDM3_ICR_CLRJOVRF_Values<DFSDM::DFSDM3_ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_ICRPack  = Register<0x4001640C, 32, ReadWriteMode, DFSDMDFSDM3_ICRBase, T...> ;

  struct DFSDMDFSDM3_JCHGRBase {} ;

  struct DFSDM3_JCHGR : public RegisterBase<0x40016410, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM3_JCHGR_JCHG_Values<DFSDM::DFSDM3_JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM3_JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM3_JCHGR_JCHG_Values<DFSDM::DFSDM3_JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_JCHGRPack  = Register<0x40016410, 32, ReadWriteMode, DFSDMDFSDM3_JCHGRBase, T...> ;

  struct DFSDMDFSDM3_FCRBase {} ;

  struct DFSDM3_FCR : public RegisterBase<0x40016414, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM3_FCR_FORD_Values<DFSDM::DFSDM3_FCR, 29, 3, ReadWriteMode, DFSDMDFSDM3_FCRBase> ;
    using FOSR = DFSDM_DFSDM3_FCR_FOSR_Values<DFSDM::DFSDM3_FCR, 16, 10, ReadWriteMode, DFSDMDFSDM3_FCRBase> ;
    using IOSR = DFSDM_DFSDM3_FCR_IOSR_Values<DFSDM::DFSDM3_FCR, 0, 8, ReadWriteMode, DFSDMDFSDM3_FCRBase> ;
    using FieldValues = DFSDM_DFSDM3_FCR_IOSR_Values<DFSDM::DFSDM3_FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_FCRPack  = Register<0x40016414, 32, ReadWriteMode, DFSDMDFSDM3_FCRBase, T...> ;

  struct DFSDMDFSDM3_JDATARBase {} ;

  struct DFSDM3_JDATAR : public RegisterBase<0x40016418, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM3_JDATAR_JDATA_Values<DFSDM::DFSDM3_JDATAR, 8, 24, ReadMode, DFSDMDFSDM3_JDATARBase> ;
    using JDATACH = DFSDM_DFSDM3_JDATAR_JDATACH_Values<DFSDM::DFSDM3_JDATAR, 0, 3, ReadMode, DFSDMDFSDM3_JDATARBase> ;
    using FieldValues = DFSDM_DFSDM3_JDATAR_JDATACH_Values<DFSDM::DFSDM3_JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_JDATARPack  = Register<0x40016418, 32, ReadMode, DFSDMDFSDM3_JDATARBase, T...> ;

  struct DFSDMDFSDM3_RDATARBase {} ;

  struct DFSDM3_RDATAR : public RegisterBase<0x4001641C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM3_RDATAR_RDATA_Values<DFSDM::DFSDM3_RDATAR, 8, 24, ReadMode, DFSDMDFSDM3_RDATARBase> ;
    using RPEND = DFSDM_DFSDM3_RDATAR_RPEND_Values<DFSDM::DFSDM3_RDATAR, 4, 1, ReadMode, DFSDMDFSDM3_RDATARBase> ;
    using RDATACH = DFSDM_DFSDM3_RDATAR_RDATACH_Values<DFSDM::DFSDM3_RDATAR, 0, 3, ReadMode, DFSDMDFSDM3_RDATARBase> ;
    using FieldValues = DFSDM_DFSDM3_RDATAR_RDATACH_Values<DFSDM::DFSDM3_RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_RDATARPack  = Register<0x4001641C, 32, ReadMode, DFSDMDFSDM3_RDATARBase, T...> ;

  struct DFSDMDFSDM3_AWHTRBase {} ;

  struct DFSDM3_AWHTR : public RegisterBase<0x40016420, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM3_AWHTR_AWHT_Values<DFSDM::DFSDM3_AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM3_AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM3_AWHTR_BKAWH_Values<DFSDM::DFSDM3_AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM3_AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM3_AWHTR_BKAWH_Values<DFSDM::DFSDM3_AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_AWHTRPack  = Register<0x40016420, 32, ReadWriteMode, DFSDMDFSDM3_AWHTRBase, T...> ;

  struct DFSDMDFSDM3_AWLTRBase {} ;

  struct DFSDM3_AWLTR : public RegisterBase<0x40016424, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM3_AWLTR_AWLT_Values<DFSDM::DFSDM3_AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM3_AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM3_AWLTR_BKAWL_Values<DFSDM::DFSDM3_AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM3_AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM3_AWLTR_BKAWL_Values<DFSDM::DFSDM3_AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_AWLTRPack  = Register<0x40016424, 32, ReadWriteMode, DFSDMDFSDM3_AWLTRBase, T...> ;

  struct DFSDMDFSDM3_AWSRBase {} ;

  struct DFSDM3_AWSR : public RegisterBase<0x40016428, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM3_AWSR_AWHTF_Values<DFSDM::DFSDM3_AWSR, 8, 8, ReadMode, DFSDMDFSDM3_AWSRBase> ;
    using AWLTF = DFSDM_DFSDM3_AWSR_AWLTF_Values<DFSDM::DFSDM3_AWSR, 0, 8, ReadMode, DFSDMDFSDM3_AWSRBase> ;
    using FieldValues = DFSDM_DFSDM3_AWSR_AWLTF_Values<DFSDM::DFSDM3_AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_AWSRPack  = Register<0x40016428, 32, ReadMode, DFSDMDFSDM3_AWSRBase, T...> ;

  struct DFSDMDFSDM3_AWCFRBase {} ;

  struct DFSDM3_AWCFR : public RegisterBase<0x4001642C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM3_AWCFR_CLRAWHTF_Values<DFSDM::DFSDM3_AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM3_AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM3_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM3_AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM3_AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM3_AWCFR_CLRAWLTF_Values<DFSDM::DFSDM3_AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_AWCFRPack  = Register<0x4001642C, 32, ReadWriteMode, DFSDMDFSDM3_AWCFRBase, T...> ;

  struct DFSDMDFSDM3_EXMAXBase {} ;

  struct DFSDM3_EXMAX : public RegisterBase<0x40016430, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM3_EXMAX_EXMAX_Values<DFSDM::DFSDM3_EXMAX, 8, 24, ReadMode, DFSDMDFSDM3_EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM3_EXMAX_EXMAXCH_Values<DFSDM::DFSDM3_EXMAX, 0, 3, ReadMode, DFSDMDFSDM3_EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM3_EXMAX_EXMAXCH_Values<DFSDM::DFSDM3_EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_EXMAXPack  = Register<0x40016430, 32, ReadMode, DFSDMDFSDM3_EXMAXBase, T...> ;

  struct DFSDMDFSDM3_EXMINBase {} ;

  struct DFSDM3_EXMIN : public RegisterBase<0x40016434, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM3_EXMIN_EXMIN_Values<DFSDM::DFSDM3_EXMIN, 8, 24, ReadMode, DFSDMDFSDM3_EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM3_EXMIN_EXMINCH_Values<DFSDM::DFSDM3_EXMIN, 0, 3, ReadMode, DFSDMDFSDM3_EXMINBase> ;
    using FieldValues = DFSDM_DFSDM3_EXMIN_EXMINCH_Values<DFSDM::DFSDM3_EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_EXMINPack  = Register<0x40016434, 32, ReadMode, DFSDMDFSDM3_EXMINBase, T...> ;

  struct DFSDMDFSDM3_CNVTIMRBase {} ;

  struct DFSDM3_CNVTIMR : public RegisterBase<0x40016438, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM3_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM3_CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM3_CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM3_CNVTIMR_CNVCNT_Values<DFSDM::DFSDM3_CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM3_CNVTIMRPack  = Register<0x40016438, 32, ReadMode, DFSDMDFSDM3_CNVTIMRBase, T...> ;

} ;

#endif //#if !defined(DFSDMREGISTERS_HPP)
