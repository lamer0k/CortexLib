/*******************************************************************************
* Filename      : sai1registers.hpp
*
* Details       : Serial audio interface. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SAI1REGISTERS_HPP)
#define SAI1REGISTERS_HPP

#include "sai1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI1
{
  struct SAI1BCR1Base {} ;

  struct BCR1 : public RegisterBase<0x40015424, 32, ReadWriteMode>
  {
    using MCJDIV = SAI1_BCR1_MCJDIV_Values<SAI1::BCR1, 20, 4, ReadWriteMode, SAI1BCR1Base> ;
    using NODIV = SAI1_BCR1_NODIV_Values<SAI1::BCR1, 19, 1, ReadWriteMode, SAI1BCR1Base> ;
    using DMAEN = SAI1_BCR1_DMAEN_Values<SAI1::BCR1, 17, 1, ReadWriteMode, SAI1BCR1Base> ;
    using SAIBEN = SAI1_BCR1_SAIBEN_Values<SAI1::BCR1, 16, 1, ReadWriteMode, SAI1BCR1Base> ;
    using OutDri = SAI1_BCR1_OutDri_Values<SAI1::BCR1, 13, 1, ReadWriteMode, SAI1BCR1Base> ;
    using MONO = SAI1_BCR1_MONO_Values<SAI1::BCR1, 12, 1, ReadWriteMode, SAI1BCR1Base> ;
    using SYNCEN = SAI1_BCR1_SYNCEN_Values<SAI1::BCR1, 10, 2, ReadWriteMode, SAI1BCR1Base> ;
    using CKSTR = SAI1_BCR1_CKSTR_Values<SAI1::BCR1, 9, 1, ReadWriteMode, SAI1BCR1Base> ;
    using LSBFIRST = SAI1_BCR1_LSBFIRST_Values<SAI1::BCR1, 8, 1, ReadWriteMode, SAI1BCR1Base> ;
    using DS = SAI1_BCR1_DS_Values<SAI1::BCR1, 5, 3, ReadWriteMode, SAI1BCR1Base> ;
    using PRTCFG = SAI1_BCR1_PRTCFG_Values<SAI1::BCR1, 2, 2, ReadWriteMode, SAI1BCR1Base> ;
    using MODE = SAI1_BCR1_MODE_Values<SAI1::BCR1, 0, 2, ReadWriteMode, SAI1BCR1Base> ;
    using FieldValues = SAI1_BCR1_MODE_Values<SAI1::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0x40015424, 32, ReadWriteMode, SAI1BCR1Base, T...> ;

  struct SAI1BCR2Base {} ;

  struct BCR2 : public RegisterBase<0x40015428, 32, ReadWriteMode>
  {
    using COMP = SAI1_BCR2_COMP_Values<SAI1::BCR2, 14, 2, ReadWriteMode, SAI1BCR2Base> ;
    using CPL = SAI1_BCR2_CPL_Values<SAI1::BCR2, 13, 1, ReadWriteMode, SAI1BCR2Base> ;
    using MUTECN = SAI1_BCR2_MUTECN_Values<SAI1::BCR2, 7, 6, ReadWriteMode, SAI1BCR2Base> ;
    using MUTEVAL = SAI1_BCR2_MUTEVAL_Values<SAI1::BCR2, 6, 1, ReadWriteMode, SAI1BCR2Base> ;
    using MUTE = SAI1_BCR2_MUTE_Values<SAI1::BCR2, 5, 1, ReadWriteMode, SAI1BCR2Base> ;
    using TRIS = SAI1_BCR2_TRIS_Values<SAI1::BCR2, 4, 1, ReadWriteMode, SAI1BCR2Base> ;
    using FFLUS = SAI1_BCR2_FFLUS_Values<SAI1::BCR2, 3, 1, ReadWriteMode, SAI1BCR2Base> ;
    using FTH = SAI1_BCR2_FTH_Values<SAI1::BCR2, 0, 3, ReadWriteMode, SAI1BCR2Base> ;
    using FieldValues = SAI1_BCR2_FTH_Values<SAI1::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0x40015428, 32, ReadWriteMode, SAI1BCR2Base, T...> ;

  struct SAI1BFRCRBase {} ;

  struct BFRCR : public RegisterBase<0x4001542C, 32, ReadWriteMode>
  {
    using FSOFF = SAI1_BFRCR_FSOFF_Values<SAI1::BFRCR, 18, 1, ReadWriteMode, SAI1BFRCRBase> ;
    using FSPOL = SAI1_BFRCR_FSPOL_Values<SAI1::BFRCR, 17, 1, ReadWriteMode, SAI1BFRCRBase> ;
    using FSDEF = SAI1_BFRCR_FSDEF_Values<SAI1::BFRCR, 16, 1, ReadWriteMode, SAI1BFRCRBase> ;
    using FSALL = SAI1_BFRCR_FSALL_Values<SAI1::BFRCR, 8, 7, ReadWriteMode, SAI1BFRCRBase> ;
    using FRL = SAI1_BFRCR_FRL_Values<SAI1::BFRCR, 0, 8, ReadWriteMode, SAI1BFRCRBase> ;
    using FieldValues = SAI1_BFRCR_FRL_Values<SAI1::BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BFRCRPack  = Register<0x4001542C, 32, ReadWriteMode, SAI1BFRCRBase, T...> ;

  struct SAI1BSLOTRBase {} ;

  struct BSLOTR : public RegisterBase<0x40015430, 32, ReadWriteMode>
  {
    using SLOTEN = SAI1_BSLOTR_SLOTEN_Values<SAI1::BSLOTR, 16, 16, ReadWriteMode, SAI1BSLOTRBase> ;
    using NBSLOT = SAI1_BSLOTR_NBSLOT_Values<SAI1::BSLOTR, 8, 4, ReadWriteMode, SAI1BSLOTRBase> ;
    using SLOTSZ = SAI1_BSLOTR_SLOTSZ_Values<SAI1::BSLOTR, 6, 2, ReadWriteMode, SAI1BSLOTRBase> ;
    using FBOFF = SAI1_BSLOTR_FBOFF_Values<SAI1::BSLOTR, 0, 5, ReadWriteMode, SAI1BSLOTRBase> ;
    using FieldValues = SAI1_BSLOTR_FBOFF_Values<SAI1::BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSLOTRPack  = Register<0x40015430, 32, ReadWriteMode, SAI1BSLOTRBase, T...> ;

  struct SAI1BIMBase {} ;

  struct BIM : public RegisterBase<0x40015434, 32, ReadWriteMode>
  {
    using LFSDETIE = SAI1_BIM_LFSDETIE_Values<SAI1::BIM, 6, 1, ReadWriteMode, SAI1BIMBase> ;
    using AFSDETIE = SAI1_BIM_AFSDETIE_Values<SAI1::BIM, 5, 1, ReadWriteMode, SAI1BIMBase> ;
    using CNRDYIE = SAI1_BIM_CNRDYIE_Values<SAI1::BIM, 4, 1, ReadWriteMode, SAI1BIMBase> ;
    using FREQIE = SAI1_BIM_FREQIE_Values<SAI1::BIM, 3, 1, ReadWriteMode, SAI1BIMBase> ;
    using WCKCFG = SAI1_BIM_WCKCFG_Values<SAI1::BIM, 2, 1, ReadWriteMode, SAI1BIMBase> ;
    using MUTEDET = SAI1_BIM_MUTEDET_Values<SAI1::BIM, 1, 1, ReadWriteMode, SAI1BIMBase> ;
    using OVRUDRIE = SAI1_BIM_OVRUDRIE_Values<SAI1::BIM, 0, 1, ReadWriteMode, SAI1BIMBase> ;
    using FieldValues = SAI1_BIM_OVRUDRIE_Values<SAI1::BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BIMPack  = Register<0x40015434, 32, ReadWriteMode, SAI1BIMBase, T...> ;

  struct SAI1BSRBase {} ;

  struct BSR : public RegisterBase<0x40015438, 32, ReadMode>
  {
    using FLVL = SAI1_BSR_FLVL_Values<SAI1::BSR, 16, 3, ReadMode, SAI1BSRBase> ;
    using LFSDET = SAI1_BSR_LFSDET_Values<SAI1::BSR, 6, 1, ReadMode, SAI1BSRBase> ;
    using AFSDET = SAI1_BSR_AFSDET_Values<SAI1::BSR, 5, 1, ReadMode, SAI1BSRBase> ;
    using CNRDY = SAI1_BSR_CNRDY_Values<SAI1::BSR, 4, 1, ReadMode, SAI1BSRBase> ;
    using FREQ = SAI1_BSR_FREQ_Values<SAI1::BSR, 3, 1, ReadMode, SAI1BSRBase> ;
    using WCKCFG = SAI1_BSR_WCKCFG_Values<SAI1::BSR, 2, 1, ReadMode, SAI1BSRBase> ;
    using MUTEDET = SAI1_BSR_MUTEDET_Values<SAI1::BSR, 1, 1, ReadMode, SAI1BSRBase> ;
    using OVRUDR = SAI1_BSR_OVRUDR_Values<SAI1::BSR, 0, 1, ReadMode, SAI1BSRBase> ;
    using FieldValues = SAI1_BSR_OVRUDR_Values<SAI1::BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRPack  = Register<0x40015438, 32, ReadMode, SAI1BSRBase, T...> ;

  struct SAI1BCLRFRBase {} ;

  struct BCLRFR : public RegisterBase<0x4001543C, 32, WriteMode>
  {
    using LFSDET = SAI1_BCLRFR_LFSDET_Values<SAI1::BCLRFR, 6, 1, WriteMode, SAI1BCLRFRBase> ;
    using CAFSDET = SAI1_BCLRFR_CAFSDET_Values<SAI1::BCLRFR, 5, 1, WriteMode, SAI1BCLRFRBase> ;
    using CNRDY = SAI1_BCLRFR_CNRDY_Values<SAI1::BCLRFR, 4, 1, WriteMode, SAI1BCLRFRBase> ;
    using WCKCFG = SAI1_BCLRFR_WCKCFG_Values<SAI1::BCLRFR, 2, 1, WriteMode, SAI1BCLRFRBase> ;
    using MUTEDET = SAI1_BCLRFR_MUTEDET_Values<SAI1::BCLRFR, 1, 1, WriteMode, SAI1BCLRFRBase> ;
    using OVRUDR = SAI1_BCLRFR_OVRUDR_Values<SAI1::BCLRFR, 0, 1, WriteMode, SAI1BCLRFRBase> ;
    using FieldValues = SAI1_BCLRFR_OVRUDR_Values<SAI1::BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCLRFRPack  = Register<0x4001543C, 32, WriteMode, SAI1BCLRFRBase, T...> ;

  struct SAI1BDRBase {} ;

  struct BDR : public RegisterBase<0x40015440, 32, ReadWriteMode>
  {
    using DATA = SAI1_BDR_DATA_Values<SAI1::BDR, 0, 32, ReadWriteMode, SAI1BDRBase> ;
    using FieldValues = SAI1_BDR_DATA_Values<SAI1::BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDRPack  = Register<0x40015440, 32, ReadWriteMode, SAI1BDRBase, T...> ;

  struct SAI1ACR1Base {} ;

  struct ACR1 : public RegisterBase<0x40015404, 32, ReadWriteMode>
  {
    using MCJDIV = SAI1_ACR1_MCJDIV_Values<SAI1::ACR1, 20, 4, ReadWriteMode, SAI1ACR1Base> ;
    using NODIV = SAI1_ACR1_NODIV_Values<SAI1::ACR1, 19, 1, ReadWriteMode, SAI1ACR1Base> ;
    using DMAEN = SAI1_ACR1_DMAEN_Values<SAI1::ACR1, 17, 1, ReadWriteMode, SAI1ACR1Base> ;
    using SAIAEN = SAI1_ACR1_SAIAEN_Values<SAI1::ACR1, 16, 1, ReadWriteMode, SAI1ACR1Base> ;
    using OutDri = SAI1_ACR1_OutDri_Values<SAI1::ACR1, 13, 1, ReadWriteMode, SAI1ACR1Base> ;
    using MONO = SAI1_ACR1_MONO_Values<SAI1::ACR1, 12, 1, ReadWriteMode, SAI1ACR1Base> ;
    using SYNCEN = SAI1_ACR1_SYNCEN_Values<SAI1::ACR1, 10, 2, ReadWriteMode, SAI1ACR1Base> ;
    using CKSTR = SAI1_ACR1_CKSTR_Values<SAI1::ACR1, 9, 1, ReadWriteMode, SAI1ACR1Base> ;
    using LSBFIRST = SAI1_ACR1_LSBFIRST_Values<SAI1::ACR1, 8, 1, ReadWriteMode, SAI1ACR1Base> ;
    using DS = SAI1_ACR1_DS_Values<SAI1::ACR1, 5, 3, ReadWriteMode, SAI1ACR1Base> ;
    using PRTCFG = SAI1_ACR1_PRTCFG_Values<SAI1::ACR1, 2, 2, ReadWriteMode, SAI1ACR1Base> ;
    using MODE = SAI1_ACR1_MODE_Values<SAI1::ACR1, 0, 2, ReadWriteMode, SAI1ACR1Base> ;
    using FieldValues = SAI1_ACR1_MODE_Values<SAI1::ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR1Pack  = Register<0x40015404, 32, ReadWriteMode, SAI1ACR1Base, T...> ;

  struct SAI1ACR2Base {} ;

  struct ACR2 : public RegisterBase<0x40015408, 32, ReadWriteMode>
  {
    using COMP = SAI1_ACR2_COMP_Values<SAI1::ACR2, 14, 2, ReadWriteMode, SAI1ACR2Base> ;
    using CPL = SAI1_ACR2_CPL_Values<SAI1::ACR2, 13, 1, ReadWriteMode, SAI1ACR2Base> ;
    using MUTECN = SAI1_ACR2_MUTECN_Values<SAI1::ACR2, 7, 6, ReadWriteMode, SAI1ACR2Base> ;
    using MUTEVAL = SAI1_ACR2_MUTEVAL_Values<SAI1::ACR2, 6, 1, ReadWriteMode, SAI1ACR2Base> ;
    using MUTE = SAI1_ACR2_MUTE_Values<SAI1::ACR2, 5, 1, ReadWriteMode, SAI1ACR2Base> ;
    using TRIS = SAI1_ACR2_TRIS_Values<SAI1::ACR2, 4, 1, ReadWriteMode, SAI1ACR2Base> ;
    using FFLUS = SAI1_ACR2_FFLUS_Values<SAI1::ACR2, 3, 1, ReadWriteMode, SAI1ACR2Base> ;
    using FTH = SAI1_ACR2_FTH_Values<SAI1::ACR2, 0, 3, ReadWriteMode, SAI1ACR2Base> ;
    using FieldValues = SAI1_ACR2_FTH_Values<SAI1::ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR2Pack  = Register<0x40015408, 32, ReadWriteMode, SAI1ACR2Base, T...> ;

  struct SAI1AFRCRBase {} ;

  struct AFRCR : public RegisterBase<0x4001540C, 32, ReadWriteMode>
  {
    using FSOFF = SAI1_AFRCR_FSOFF_Values<SAI1::AFRCR, 18, 1, ReadWriteMode, SAI1AFRCRBase> ;
    using FSPOL = SAI1_AFRCR_FSPOL_Values<SAI1::AFRCR, 17, 1, ReadWriteMode, SAI1AFRCRBase> ;
    using FSDEF = SAI1_AFRCR_FSDEF_Values<SAI1::AFRCR, 16, 1, ReadWriteMode, SAI1AFRCRBase> ;
    using FSALL = SAI1_AFRCR_FSALL_Values<SAI1::AFRCR, 8, 7, ReadWriteMode, SAI1AFRCRBase> ;
    using FRL = SAI1_AFRCR_FRL_Values<SAI1::AFRCR, 0, 8, ReadWriteMode, SAI1AFRCRBase> ;
    using FieldValues = SAI1_AFRCR_FRL_Values<SAI1::AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRCRPack  = Register<0x4001540C, 32, ReadWriteMode, SAI1AFRCRBase, T...> ;

  struct SAI1ASLOTRBase {} ;

  struct ASLOTR : public RegisterBase<0x40015410, 32, ReadWriteMode>
  {
    using SLOTEN = SAI1_ASLOTR_SLOTEN_Values<SAI1::ASLOTR, 16, 16, ReadWriteMode, SAI1ASLOTRBase> ;
    using NBSLOT = SAI1_ASLOTR_NBSLOT_Values<SAI1::ASLOTR, 8, 4, ReadWriteMode, SAI1ASLOTRBase> ;
    using SLOTSZ = SAI1_ASLOTR_SLOTSZ_Values<SAI1::ASLOTR, 6, 2, ReadWriteMode, SAI1ASLOTRBase> ;
    using FBOFF = SAI1_ASLOTR_FBOFF_Values<SAI1::ASLOTR, 0, 5, ReadWriteMode, SAI1ASLOTRBase> ;
    using FieldValues = SAI1_ASLOTR_FBOFF_Values<SAI1::ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASLOTRPack  = Register<0x40015410, 32, ReadWriteMode, SAI1ASLOTRBase, T...> ;

  struct SAI1AIMBase {} ;

  struct AIM : public RegisterBase<0x40015414, 32, ReadWriteMode>
  {
    using LFSDET = SAI1_AIM_LFSDET_Values<SAI1::AIM, 6, 1, ReadWriteMode, SAI1AIMBase> ;
    using AFSDETIE = SAI1_AIM_AFSDETIE_Values<SAI1::AIM, 5, 1, ReadWriteMode, SAI1AIMBase> ;
    using CNRDYIE = SAI1_AIM_CNRDYIE_Values<SAI1::AIM, 4, 1, ReadWriteMode, SAI1AIMBase> ;
    using FREQIE = SAI1_AIM_FREQIE_Values<SAI1::AIM, 3, 1, ReadWriteMode, SAI1AIMBase> ;
    using WCKCFG = SAI1_AIM_WCKCFG_Values<SAI1::AIM, 2, 1, ReadWriteMode, SAI1AIMBase> ;
    using MUTEDET = SAI1_AIM_MUTEDET_Values<SAI1::AIM, 1, 1, ReadWriteMode, SAI1AIMBase> ;
    using OVRUDRIE = SAI1_AIM_OVRUDRIE_Values<SAI1::AIM, 0, 1, ReadWriteMode, SAI1AIMBase> ;
    using FieldValues = SAI1_AIM_OVRUDRIE_Values<SAI1::AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AIMPack  = Register<0x40015414, 32, ReadWriteMode, SAI1AIMBase, T...> ;

  struct SAI1ASRBase {} ;

  struct ASR : public RegisterBase<0x40015418, 32, ReadWriteMode>
  {
    using FLVL = SAI1_ASR_FLVL_Values<SAI1::ASR, 16, 3, ReadWriteMode, SAI1ASRBase> ;
    using LFSDET = SAI1_ASR_LFSDET_Values<SAI1::ASR, 6, 1, ReadWriteMode, SAI1ASRBase> ;
    using AFSDET = SAI1_ASR_AFSDET_Values<SAI1::ASR, 5, 1, ReadWriteMode, SAI1ASRBase> ;
    using CNRDY = SAI1_ASR_CNRDY_Values<SAI1::ASR, 4, 1, ReadWriteMode, SAI1ASRBase> ;
    using FREQ = SAI1_ASR_FREQ_Values<SAI1::ASR, 3, 1, ReadWriteMode, SAI1ASRBase> ;
    using WCKCFG = SAI1_ASR_WCKCFG_Values<SAI1::ASR, 2, 1, ReadWriteMode, SAI1ASRBase> ;
    using MUTEDET = SAI1_ASR_MUTEDET_Values<SAI1::ASR, 1, 1, ReadWriteMode, SAI1ASRBase> ;
    using OVRUDR = SAI1_ASR_OVRUDR_Values<SAI1::ASR, 0, 1, ReadWriteMode, SAI1ASRBase> ;
    using FieldValues = SAI1_ASR_OVRUDR_Values<SAI1::ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASRPack  = Register<0x40015418, 32, ReadWriteMode, SAI1ASRBase, T...> ;

  struct SAI1ACLRFRBase {} ;

  struct ACLRFR : public RegisterBase<0x4001541C, 32, ReadWriteMode>
  {
    using LFSDET = SAI1_ACLRFR_LFSDET_Values<SAI1::ACLRFR, 6, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using CAFSDET = SAI1_ACLRFR_CAFSDET_Values<SAI1::ACLRFR, 5, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using CNRDY = SAI1_ACLRFR_CNRDY_Values<SAI1::ACLRFR, 4, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using WCKCFG = SAI1_ACLRFR_WCKCFG_Values<SAI1::ACLRFR, 2, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using MUTEDET = SAI1_ACLRFR_MUTEDET_Values<SAI1::ACLRFR, 1, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using OVRUDR = SAI1_ACLRFR_OVRUDR_Values<SAI1::ACLRFR, 0, 1, ReadWriteMode, SAI1ACLRFRBase> ;
    using FieldValues = SAI1_ACLRFR_OVRUDR_Values<SAI1::ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACLRFRPack  = Register<0x4001541C, 32, ReadWriteMode, SAI1ACLRFRBase, T...> ;

  struct SAI1ADRBase {} ;

  struct ADR : public RegisterBase<0x40015420, 32, ReadWriteMode>
  {
    using DATA = SAI1_ADR_DATA_Values<SAI1::ADR, 0, 32, ReadWriteMode, SAI1ADRBase> ;
    using FieldValues = SAI1_ADR_DATA_Values<SAI1::ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADRPack  = Register<0x40015420, 32, ReadWriteMode, SAI1ADRBase, T...> ;

} ;

#endif //#if !defined(SAI1REGISTERS_HPP)
