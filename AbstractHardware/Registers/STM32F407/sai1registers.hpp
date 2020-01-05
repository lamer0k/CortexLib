/*******************************************************************************
* Filename      : sai1registers.hpp
*
* Details       : Serial audio interface. This header file is auto-generated for
*                 STM32F407 device.
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
  struct SAI1SAI_ACR1Base {} ;

  struct SAI_ACR1 : public RegisterBase<0x40015804, 32, ReadWriteMode>
  {
    using MCKDIV = SAI1_SAI_ACR1_MCKDIV_Values<SAI1::SAI_ACR1, 20, 4, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using MODE = SAI1_SAI_ACR1_MODE_Values<SAI1::SAI_ACR1, 0, 2, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using PRTCFG = SAI1_SAI_ACR1_PRTCFG_Values<SAI1::SAI_ACR1, 2, 2, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using DS = SAI1_SAI_ACR1_DS_Values<SAI1::SAI_ACR1, 5, 3, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using LSBFIRST = SAI1_SAI_ACR1_LSBFIRST_Values<SAI1::SAI_ACR1, 8, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using CKSTR = SAI1_SAI_ACR1_CKSTR_Values<SAI1::SAI_ACR1, 9, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using SYNCEN = SAI1_SAI_ACR1_SYNCEN_Values<SAI1::SAI_ACR1, 10, 2, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using MONO = SAI1_SAI_ACR1_MONO_Values<SAI1::SAI_ACR1, 12, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using OUTDRIV = SAI1_SAI_ACR1_OUTDRIV_Values<SAI1::SAI_ACR1, 13, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using SAIAEN = SAI1_SAI_ACR1_SAIAEN_Values<SAI1::SAI_ACR1, 16, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using DMAEN = SAI1_SAI_ACR1_DMAEN_Values<SAI1::SAI_ACR1, 17, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using NODIV = SAI1_SAI_ACR1_NODIV_Values<SAI1::SAI_ACR1, 19, 1, ReadWriteMode, SAI1SAI_ACR1Base> ;
    using FieldValues = SAI1_SAI_ACR1_NODIV_Values<SAI1::SAI_ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR1Pack  = Register<0x40015804, 32, ReadWriteMode, SAI1SAI_ACR1Base, T...> ;

  struct SAI1SAI_BCR1Base {} ;

  struct SAI_BCR1 : public RegisterBase<0x40015824, 32, ReadWriteMode>
  {
    using MODE = SAI1_SAI_BCR1_MODE_Values<SAI1::SAI_BCR1, 0, 2, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using PRTCFG = SAI1_SAI_BCR1_PRTCFG_Values<SAI1::SAI_BCR1, 2, 2, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using DS = SAI1_SAI_BCR1_DS_Values<SAI1::SAI_BCR1, 5, 3, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using LSBFIRST = SAI1_SAI_BCR1_LSBFIRST_Values<SAI1::SAI_BCR1, 8, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using CKSTR = SAI1_SAI_BCR1_CKSTR_Values<SAI1::SAI_BCR1, 9, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using SYNCEN = SAI1_SAI_BCR1_SYNCEN_Values<SAI1::SAI_BCR1, 10, 2, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using MONO = SAI1_SAI_BCR1_MONO_Values<SAI1::SAI_BCR1, 12, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using OUTDRIV = SAI1_SAI_BCR1_OUTDRIV_Values<SAI1::SAI_BCR1, 13, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using SAIBEN = SAI1_SAI_BCR1_SAIBEN_Values<SAI1::SAI_BCR1, 16, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using DMAEN = SAI1_SAI_BCR1_DMAEN_Values<SAI1::SAI_BCR1, 17, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using NODIV = SAI1_SAI_BCR1_NODIV_Values<SAI1::SAI_BCR1, 19, 1, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using MCKDIV = SAI1_SAI_BCR1_MCKDIV_Values<SAI1::SAI_BCR1, 20, 4, ReadWriteMode, SAI1SAI_BCR1Base> ;
    using FieldValues = SAI1_SAI_BCR1_MCKDIV_Values<SAI1::SAI_BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR1Pack  = Register<0x40015824, 32, ReadWriteMode, SAI1SAI_BCR1Base, T...> ;

  struct SAI1SAI_ACR2Base {} ;

  struct SAI_ACR2 : public RegisterBase<0x40015808, 32, ReadWriteMode>
  {
    using FTH = SAI1_SAI_ACR2_FTH_Values<SAI1::SAI_ACR2, 0, 3, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using FFLUSH = SAI1_SAI_ACR2_FFLUSH_Values<SAI1::SAI_ACR2, 3, 1, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using TRIS = SAI1_SAI_ACR2_TRIS_Values<SAI1::SAI_ACR2, 4, 1, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using MUTE = SAI1_SAI_ACR2_MUTE_Values<SAI1::SAI_ACR2, 5, 1, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using MUTEVAL = SAI1_SAI_ACR2_MUTEVAL_Values<SAI1::SAI_ACR2, 6, 1, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using MUTECNT = SAI1_SAI_ACR2_MUTECNT_Values<SAI1::SAI_ACR2, 7, 6, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using CPL = SAI1_SAI_ACR2_CPL_Values<SAI1::SAI_ACR2, 13, 1, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using COMP = SAI1_SAI_ACR2_COMP_Values<SAI1::SAI_ACR2, 14, 2, ReadWriteMode, SAI1SAI_ACR2Base> ;
    using FieldValues = SAI1_SAI_ACR2_COMP_Values<SAI1::SAI_ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR2Pack  = Register<0x40015808, 32, ReadWriteMode, SAI1SAI_ACR2Base, T...> ;

  struct SAI1SAI_BCR2Base {} ;

  struct SAI_BCR2 : public RegisterBase<0x40015828, 32, ReadWriteMode>
  {
    using FTH = SAI1_SAI_BCR2_FTH_Values<SAI1::SAI_BCR2, 0, 3, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using FFLUSH = SAI1_SAI_BCR2_FFLUSH_Values<SAI1::SAI_BCR2, 3, 1, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using TRIS = SAI1_SAI_BCR2_TRIS_Values<SAI1::SAI_BCR2, 4, 1, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using MUTE = SAI1_SAI_BCR2_MUTE_Values<SAI1::SAI_BCR2, 5, 1, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using MUTEVAL = SAI1_SAI_BCR2_MUTEVAL_Values<SAI1::SAI_BCR2, 6, 1, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using MUTECNT = SAI1_SAI_BCR2_MUTECNT_Values<SAI1::SAI_BCR2, 7, 6, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using CPL = SAI1_SAI_BCR2_CPL_Values<SAI1::SAI_BCR2, 13, 1, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using COMP = SAI1_SAI_BCR2_COMP_Values<SAI1::SAI_BCR2, 14, 2, ReadWriteMode, SAI1SAI_BCR2Base> ;
    using FieldValues = SAI1_SAI_BCR2_COMP_Values<SAI1::SAI_BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR2Pack  = Register<0x40015828, 32, ReadWriteMode, SAI1SAI_BCR2Base, T...> ;

  struct SAI1SAI_AFRCRBase {} ;

  struct SAI_AFRCR : public RegisterBase<0x4001580C, 32, ReadWriteMode>
  {
    using FRL = SAI1_SAI_AFRCR_FRL_Values<SAI1::SAI_AFRCR, 0, 8, ReadWriteMode, SAI1SAI_AFRCRBase> ;
    using FSALL = SAI1_SAI_AFRCR_FSALL_Values<SAI1::SAI_AFRCR, 8, 7, ReadWriteMode, SAI1SAI_AFRCRBase> ;
    using FSDEF = SAI1_SAI_AFRCR_FSDEF_Values<SAI1::SAI_AFRCR, 16, 1, ReadMode, SAI1SAI_AFRCRBase> ;
    using FSPOL = SAI1_SAI_AFRCR_FSPOL_Values<SAI1::SAI_AFRCR, 17, 1, ReadWriteMode, SAI1SAI_AFRCRBase> ;
    using FSOFF = SAI1_SAI_AFRCR_FSOFF_Values<SAI1::SAI_AFRCR, 18, 1, ReadWriteMode, SAI1SAI_AFRCRBase> ;
    using FieldValues = SAI1_SAI_AFRCR_FSOFF_Values<SAI1::SAI_AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AFRCRPack  = Register<0x4001580C, 32, ReadWriteMode, SAI1SAI_AFRCRBase, T...> ;

  struct SAI1SAI_BFRCRBase {} ;

  struct SAI_BFRCR : public RegisterBase<0x4001582C, 32, ReadWriteMode>
  {
    using FRL = SAI1_SAI_BFRCR_FRL_Values<SAI1::SAI_BFRCR, 0, 8, ReadWriteMode, SAI1SAI_BFRCRBase> ;
    using FSALL = SAI1_SAI_BFRCR_FSALL_Values<SAI1::SAI_BFRCR, 8, 7, ReadWriteMode, SAI1SAI_BFRCRBase> ;
    using FSDEF = SAI1_SAI_BFRCR_FSDEF_Values<SAI1::SAI_BFRCR, 16, 1, ReadMode, SAI1SAI_BFRCRBase> ;
    using FSPOL = SAI1_SAI_BFRCR_FSPOL_Values<SAI1::SAI_BFRCR, 17, 1, ReadWriteMode, SAI1SAI_BFRCRBase> ;
    using FSOFF = SAI1_SAI_BFRCR_FSOFF_Values<SAI1::SAI_BFRCR, 18, 1, ReadWriteMode, SAI1SAI_BFRCRBase> ;
    using FieldValues = SAI1_SAI_BFRCR_FSOFF_Values<SAI1::SAI_BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BFRCRPack  = Register<0x4001582C, 32, ReadWriteMode, SAI1SAI_BFRCRBase, T...> ;

  struct SAI1SAI_ASLOTRBase {} ;

  struct SAI_ASLOTR : public RegisterBase<0x40015810, 32, ReadWriteMode>
  {
    using FBOFF = SAI1_SAI_ASLOTR_FBOFF_Values<SAI1::SAI_ASLOTR, 0, 5, ReadWriteMode, SAI1SAI_ASLOTRBase> ;
    using SLOTSZ = SAI1_SAI_ASLOTR_SLOTSZ_Values<SAI1::SAI_ASLOTR, 6, 2, ReadWriteMode, SAI1SAI_ASLOTRBase> ;
    using NBSLOT = SAI1_SAI_ASLOTR_NBSLOT_Values<SAI1::SAI_ASLOTR, 8, 4, ReadWriteMode, SAI1SAI_ASLOTRBase> ;
    using SLOTEN = SAI1_SAI_ASLOTR_SLOTEN_Values<SAI1::SAI_ASLOTR, 16, 16, ReadWriteMode, SAI1SAI_ASLOTRBase> ;
    using FieldValues = SAI1_SAI_ASLOTR_SLOTEN_Values<SAI1::SAI_ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASLOTRPack  = Register<0x40015810, 32, ReadWriteMode, SAI1SAI_ASLOTRBase, T...> ;

  struct SAI1SAI_BSLOTRBase {} ;

  struct SAI_BSLOTR : public RegisterBase<0x40015830, 32, ReadWriteMode>
  {
    using FBOFF = SAI1_SAI_BSLOTR_FBOFF_Values<SAI1::SAI_BSLOTR, 0, 5, ReadWriteMode, SAI1SAI_BSLOTRBase> ;
    using SLOTSZ = SAI1_SAI_BSLOTR_SLOTSZ_Values<SAI1::SAI_BSLOTR, 6, 2, ReadWriteMode, SAI1SAI_BSLOTRBase> ;
    using NBSLOT = SAI1_SAI_BSLOTR_NBSLOT_Values<SAI1::SAI_BSLOTR, 8, 4, ReadWriteMode, SAI1SAI_BSLOTRBase> ;
    using SLOTEN = SAI1_SAI_BSLOTR_SLOTEN_Values<SAI1::SAI_BSLOTR, 16, 16, ReadWriteMode, SAI1SAI_BSLOTRBase> ;
    using FieldValues = SAI1_SAI_BSLOTR_SLOTEN_Values<SAI1::SAI_BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSLOTRPack  = Register<0x40015830, 32, ReadWriteMode, SAI1SAI_BSLOTRBase, T...> ;

  struct SAI1SAI_AIMBase {} ;

  struct SAI_AIM : public RegisterBase<0x40015814, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI1_SAI_AIM_OVRUDRIE_Values<SAI1::SAI_AIM, 0, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using MUTEDETIE = SAI1_SAI_AIM_MUTEDETIE_Values<SAI1::SAI_AIM, 1, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using WCKCFGIE = SAI1_SAI_AIM_WCKCFGIE_Values<SAI1::SAI_AIM, 2, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using FREQIE = SAI1_SAI_AIM_FREQIE_Values<SAI1::SAI_AIM, 3, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using CNRDYIE = SAI1_SAI_AIM_CNRDYIE_Values<SAI1::SAI_AIM, 4, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using AFSDETIE = SAI1_SAI_AIM_AFSDETIE_Values<SAI1::SAI_AIM, 5, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using LFSDETIE = SAI1_SAI_AIM_LFSDETIE_Values<SAI1::SAI_AIM, 6, 1, ReadWriteMode, SAI1SAI_AIMBase> ;
    using FieldValues = SAI1_SAI_AIM_LFSDETIE_Values<SAI1::SAI_AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AIMPack  = Register<0x40015814, 32, ReadWriteMode, SAI1SAI_AIMBase, T...> ;

  struct SAI1SAI_BIMBase {} ;

  struct SAI_BIM : public RegisterBase<0x40015834, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI1_SAI_BIM_OVRUDRIE_Values<SAI1::SAI_BIM, 0, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using MUTEDETIE = SAI1_SAI_BIM_MUTEDETIE_Values<SAI1::SAI_BIM, 1, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using WCKCFGIE = SAI1_SAI_BIM_WCKCFGIE_Values<SAI1::SAI_BIM, 2, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using FREQIE = SAI1_SAI_BIM_FREQIE_Values<SAI1::SAI_BIM, 3, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using CNRDYIE = SAI1_SAI_BIM_CNRDYIE_Values<SAI1::SAI_BIM, 4, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using AFSDETIE = SAI1_SAI_BIM_AFSDETIE_Values<SAI1::SAI_BIM, 5, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using LFSDETIE = SAI1_SAI_BIM_LFSDETIE_Values<SAI1::SAI_BIM, 6, 1, ReadWriteMode, SAI1SAI_BIMBase> ;
    using FieldValues = SAI1_SAI_BIM_LFSDETIE_Values<SAI1::SAI_BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BIMPack  = Register<0x40015834, 32, ReadWriteMode, SAI1SAI_BIMBase, T...> ;

  struct SAI1SAI_ASRBase {} ;

  struct SAI_ASR : public RegisterBase<0x40015818, 32, ReadMode>
  {
    using OVRUDR = SAI1_SAI_ASR_OVRUDR_Values<SAI1::SAI_ASR, 0, 1, ReadMode, SAI1SAI_ASRBase> ;
    using MUTEDET = SAI1_SAI_ASR_MUTEDET_Values<SAI1::SAI_ASR, 1, 1, ReadMode, SAI1SAI_ASRBase> ;
    using WCKCFG = SAI1_SAI_ASR_WCKCFG_Values<SAI1::SAI_ASR, 2, 1, ReadMode, SAI1SAI_ASRBase> ;
    using FREQ = SAI1_SAI_ASR_FREQ_Values<SAI1::SAI_ASR, 3, 1, ReadMode, SAI1SAI_ASRBase> ;
    using CNRDY = SAI1_SAI_ASR_CNRDY_Values<SAI1::SAI_ASR, 4, 1, ReadMode, SAI1SAI_ASRBase> ;
    using AFSDET = SAI1_SAI_ASR_AFSDET_Values<SAI1::SAI_ASR, 5, 1, ReadMode, SAI1SAI_ASRBase> ;
    using LFSDET = SAI1_SAI_ASR_LFSDET_Values<SAI1::SAI_ASR, 6, 1, ReadMode, SAI1SAI_ASRBase> ;
    using FLTH = SAI1_SAI_ASR_FLTH_Values<SAI1::SAI_ASR, 16, 3, ReadMode, SAI1SAI_ASRBase> ;
    using FieldValues = SAI1_SAI_ASR_FLTH_Values<SAI1::SAI_ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASRPack  = Register<0x40015818, 32, ReadMode, SAI1SAI_ASRBase, T...> ;

  struct SAI1SAI_BSRBase {} ;

  struct SAI_BSR : public RegisterBase<0x40015838, 32, ReadMode>
  {
    using OVRUDR = SAI1_SAI_BSR_OVRUDR_Values<SAI1::SAI_BSR, 0, 1, ReadMode, SAI1SAI_BSRBase> ;
    using MUTEDET = SAI1_SAI_BSR_MUTEDET_Values<SAI1::SAI_BSR, 1, 1, ReadMode, SAI1SAI_BSRBase> ;
    using WCKCFG = SAI1_SAI_BSR_WCKCFG_Values<SAI1::SAI_BSR, 2, 1, ReadMode, SAI1SAI_BSRBase> ;
    using FREQ = SAI1_SAI_BSR_FREQ_Values<SAI1::SAI_BSR, 3, 1, ReadMode, SAI1SAI_BSRBase> ;
    using CNRDY = SAI1_SAI_BSR_CNRDY_Values<SAI1::SAI_BSR, 4, 1, ReadMode, SAI1SAI_BSRBase> ;
    using AFSDET = SAI1_SAI_BSR_AFSDET_Values<SAI1::SAI_BSR, 5, 1, ReadMode, SAI1SAI_BSRBase> ;
    using LFSDET = SAI1_SAI_BSR_LFSDET_Values<SAI1::SAI_BSR, 6, 1, ReadMode, SAI1SAI_BSRBase> ;
    using FLTH = SAI1_SAI_BSR_FLTH_Values<SAI1::SAI_BSR, 16, 3, ReadMode, SAI1SAI_BSRBase> ;
    using FieldValues = SAI1_SAI_BSR_FLTH_Values<SAI1::SAI_BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSRPack  = Register<0x40015838, 32, ReadMode, SAI1SAI_BSRBase, T...> ;

  struct SAI1SAI_ACLRFRBase {} ;

  struct SAI_ACLRFR : public RegisterBase<0x4001581C, 32, ReadWriteMode>
  {
    using COVRUDR = SAI1_SAI_ACLRFR_COVRUDR_Values<SAI1::SAI_ACLRFR, 0, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using CMUTEDET = SAI1_SAI_ACLRFR_CMUTEDET_Values<SAI1::SAI_ACLRFR, 1, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using CWCKCFG = SAI1_SAI_ACLRFR_CWCKCFG_Values<SAI1::SAI_ACLRFR, 2, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using CCNRDY = SAI1_SAI_ACLRFR_CCNRDY_Values<SAI1::SAI_ACLRFR, 4, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using CAFSDET = SAI1_SAI_ACLRFR_CAFSDET_Values<SAI1::SAI_ACLRFR, 5, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using CLFSDET = SAI1_SAI_ACLRFR_CLFSDET_Values<SAI1::SAI_ACLRFR, 6, 1, ReadWriteMode, SAI1SAI_ACLRFRBase> ;
    using FieldValues = SAI1_SAI_ACLRFR_CLFSDET_Values<SAI1::SAI_ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACLRFRPack  = Register<0x4001581C, 32, ReadWriteMode, SAI1SAI_ACLRFRBase, T...> ;

  struct SAI1SAI_BCLRFRBase {} ;

  struct SAI_BCLRFR : public RegisterBase<0x4001583C, 32, ReadWriteMode>
  {
    using COVRUDR = SAI1_SAI_BCLRFR_COVRUDR_Values<SAI1::SAI_BCLRFR, 0, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using CMUTEDET = SAI1_SAI_BCLRFR_CMUTEDET_Values<SAI1::SAI_BCLRFR, 1, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using CWCKCFG = SAI1_SAI_BCLRFR_CWCKCFG_Values<SAI1::SAI_BCLRFR, 2, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using CCNRDY = SAI1_SAI_BCLRFR_CCNRDY_Values<SAI1::SAI_BCLRFR, 4, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using CAFSDET = SAI1_SAI_BCLRFR_CAFSDET_Values<SAI1::SAI_BCLRFR, 5, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using CLFSDET = SAI1_SAI_BCLRFR_CLFSDET_Values<SAI1::SAI_BCLRFR, 6, 1, ReadWriteMode, SAI1SAI_BCLRFRBase> ;
    using FieldValues = SAI1_SAI_BCLRFR_CLFSDET_Values<SAI1::SAI_BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCLRFRPack  = Register<0x4001583C, 32, ReadWriteMode, SAI1SAI_BCLRFRBase, T...> ;

  struct SAI1SAI_ADRBase {} ;

  struct SAI_ADR : public RegisterBase<0x40015820, 32, ReadWriteMode>
  {
    using DATA = SAI1_SAI_ADR_DATA_Values<SAI1::SAI_ADR, 0, 32, ReadWriteMode, SAI1SAI_ADRBase> ;
    using FieldValues = SAI1_SAI_ADR_DATA_Values<SAI1::SAI_ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ADRPack  = Register<0x40015820, 32, ReadWriteMode, SAI1SAI_ADRBase, T...> ;

  struct SAI1SAI_BDRBase {} ;

  struct SAI_BDR : public RegisterBase<0x40015840, 32, ReadWriteMode>
  {
    using DATA = SAI1_SAI_BDR_DATA_Values<SAI1::SAI_BDR, 0, 32, ReadWriteMode, SAI1SAI_BDRBase> ;
    using FieldValues = SAI1_SAI_BDR_DATA_Values<SAI1::SAI_BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BDRPack  = Register<0x40015840, 32, ReadWriteMode, SAI1SAI_BDRBase, T...> ;

} ;

#endif //#if !defined(SAI1REGISTERS_HPP)
