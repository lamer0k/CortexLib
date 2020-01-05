/*******************************************************************************
* Filename      : hashregisters.hpp
*
* Details       : Hash processor. This header file is auto-generated for
*                 STM32F407 device.
*
*
*******************************************************************************/

#if !defined(HASHREGISTERS_HPP)
#define HASHREGISTERS_HPP

#include "hashfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct HASH
{
  struct HASHCRBase {} ;

  struct CR : public RegisterBase<0x50060400, 32, ReadWriteMode>
  {
    using INIT = HASH_CR_INIT_Values<HASH::CR, 2, 1, WriteMode, HASHCRBase> ;
    using DMAE = HASH_CR_DMAE_Values<HASH::CR, 3, 1, ReadWriteMode, HASHCRBase> ;
    using DATATYPE = HASH_CR_DATATYPE_Values<HASH::CR, 4, 2, ReadWriteMode, HASHCRBase> ;
    using MODE = HASH_CR_MODE_Values<HASH::CR, 6, 1, ReadWriteMode, HASHCRBase> ;
    using ALGO0 = HASH_CR_ALGO0_Values<HASH::CR, 7, 1, ReadWriteMode, HASHCRBase> ;
    using NBW = HASH_CR_NBW_Values<HASH::CR, 8, 4, ReadMode, HASHCRBase> ;
    using DINNE = HASH_CR_DINNE_Values<HASH::CR, 12, 1, ReadMode, HASHCRBase> ;
    using MDMAT = HASH_CR_MDMAT_Values<HASH::CR, 13, 1, ReadWriteMode, HASHCRBase> ;
    using LKEY = HASH_CR_LKEY_Values<HASH::CR, 16, 1, ReadWriteMode, HASHCRBase> ;
    using ALGO1 = HASH_CR_ALGO1_Values<HASH::CR, 18, 1, ReadWriteMode, HASHCRBase> ;
    using FieldValues = HASH_CR_ALGO1_Values<HASH::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50060400, 32, ReadWriteMode, HASHCRBase, T...> ;

  struct HASHDINBase {} ;

  struct DIN : public RegisterBase<0x50060404, 32, ReadWriteMode>
  {
    using DATAIN = HASH_DIN_DATAIN_Values<HASH::DIN, 0, 32, ReadWriteMode, HASHDINBase> ;
    using FieldValues = HASH_DIN_DATAIN_Values<HASH::DIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DINPack  = Register<0x50060404, 32, ReadWriteMode, HASHDINBase, T...> ;

  struct HASHSTRBase {} ;

  struct STR : public RegisterBase<0x50060408, 32, ReadWriteMode>
  {
    using DCAL = HASH_STR_DCAL_Values<HASH::STR, 8, 1, WriteMode, HASHSTRBase> ;
    using NBLW = HASH_STR_NBLW_Values<HASH::STR, 0, 5, ReadWriteMode, HASHSTRBase> ;
    using FieldValues = HASH_STR_NBLW_Values<HASH::STR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STRPack  = Register<0x50060408, 32, ReadWriteMode, HASHSTRBase, T...> ;

  struct HASHHR0Base {} ;

  struct HR0 : public RegisterBase<0x5006040C, 32, ReadMode>
  {
    using H0 = HASH_HR0_H0_Values<HASH::HR0, 0, 32, ReadMode, HASHHR0Base> ;
    using FieldValues = HASH_HR0_H0_Values<HASH::HR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HR0Pack  = Register<0x5006040C, 32, ReadMode, HASHHR0Base, T...> ;

  struct HASHHR1Base {} ;

  struct HR1 : public RegisterBase<0x50060410, 32, ReadMode>
  {
    using H1 = HASH_HR1_H1_Values<HASH::HR1, 0, 32, ReadMode, HASHHR1Base> ;
    using FieldValues = HASH_HR1_H1_Values<HASH::HR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HR1Pack  = Register<0x50060410, 32, ReadMode, HASHHR1Base, T...> ;

  struct HASHHR2Base {} ;

  struct HR2 : public RegisterBase<0x50060414, 32, ReadMode>
  {
    using H2 = HASH_HR2_H2_Values<HASH::HR2, 0, 32, ReadMode, HASHHR2Base> ;
    using FieldValues = HASH_HR2_H2_Values<HASH::HR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HR2Pack  = Register<0x50060414, 32, ReadMode, HASHHR2Base, T...> ;

  struct HASHHR3Base {} ;

  struct HR3 : public RegisterBase<0x50060418, 32, ReadMode>
  {
    using H3 = HASH_HR3_H3_Values<HASH::HR3, 0, 32, ReadMode, HASHHR3Base> ;
    using FieldValues = HASH_HR3_H3_Values<HASH::HR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HR3Pack  = Register<0x50060418, 32, ReadMode, HASHHR3Base, T...> ;

  struct HASHHR4Base {} ;

  struct HR4 : public RegisterBase<0x5006041C, 32, ReadMode>
  {
    using H4 = HASH_HR4_H4_Values<HASH::HR4, 0, 32, ReadMode, HASHHR4Base> ;
    using FieldValues = HASH_HR4_H4_Values<HASH::HR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HR4Pack  = Register<0x5006041C, 32, ReadMode, HASHHR4Base, T...> ;

  struct HASHIMRBase {} ;

  struct IMR : public RegisterBase<0x50060420, 32, ReadWriteMode>
  {
    using DCIE = HASH_IMR_DCIE_Values<HASH::IMR, 1, 1, ReadWriteMode, HASHIMRBase> ;
    using DINIE = HASH_IMR_DINIE_Values<HASH::IMR, 0, 1, ReadWriteMode, HASHIMRBase> ;
    using FieldValues = HASH_IMR_DINIE_Values<HASH::IMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMRPack  = Register<0x50060420, 32, ReadWriteMode, HASHIMRBase, T...> ;

  struct HASHSRBase {} ;

  struct SR : public RegisterBase<0x50060424, 32, ReadWriteMode>
  {
    using BUSY = HASH_SR_BUSY_Values<HASH::SR, 3, 1, ReadMode, HASHSRBase> ;
    using DMAS = HASH_SR_DMAS_Values<HASH::SR, 2, 1, ReadMode, HASHSRBase> ;
    using DCIS = HASH_SR_DCIS_Values<HASH::SR, 1, 1, ReadWriteMode, HASHSRBase> ;
    using DINIS = HASH_SR_DINIS_Values<HASH::SR, 0, 1, ReadWriteMode, HASHSRBase> ;
    using FieldValues = HASH_SR_DINIS_Values<HASH::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50060424, 32, ReadWriteMode, HASHSRBase, T...> ;

  struct HASHCSR0Base {} ;

  struct CSR0 : public RegisterBase<0x500604F8, 32, ReadWriteMode>
  {
    using CSR0Field = HASH_CSR0_CSR0_Values<HASH::CSR0, 0, 32, ReadWriteMode, HASHCSR0Base> ;
    using FieldValues = HASH_CSR0_CSR0_Values<HASH::CSR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR0Pack  = Register<0x500604F8, 32, ReadWriteMode, HASHCSR0Base, T...> ;

  struct HASHCSR1Base {} ;

  struct CSR1 : public RegisterBase<0x500604FC, 32, ReadWriteMode>
  {
    using CSR1Field = HASH_CSR1_CSR1_Values<HASH::CSR1, 0, 32, ReadWriteMode, HASHCSR1Base> ;
    using FieldValues = HASH_CSR1_CSR1_Values<HASH::CSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR1Pack  = Register<0x500604FC, 32, ReadWriteMode, HASHCSR1Base, T...> ;

  struct HASHCSR2Base {} ;

  struct CSR2 : public RegisterBase<0x50060500, 32, ReadWriteMode>
  {
    using CSR2Field = HASH_CSR2_CSR2_Values<HASH::CSR2, 0, 32, ReadWriteMode, HASHCSR2Base> ;
    using FieldValues = HASH_CSR2_CSR2_Values<HASH::CSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR2Pack  = Register<0x50060500, 32, ReadWriteMode, HASHCSR2Base, T...> ;

  struct HASHCSR3Base {} ;

  struct CSR3 : public RegisterBase<0x50060504, 32, ReadWriteMode>
  {
    using CSR3Field = HASH_CSR3_CSR3_Values<HASH::CSR3, 0, 32, ReadWriteMode, HASHCSR3Base> ;
    using FieldValues = HASH_CSR3_CSR3_Values<HASH::CSR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR3Pack  = Register<0x50060504, 32, ReadWriteMode, HASHCSR3Base, T...> ;

  struct HASHCSR4Base {} ;

  struct CSR4 : public RegisterBase<0x50060508, 32, ReadWriteMode>
  {
    using CSR4Field = HASH_CSR4_CSR4_Values<HASH::CSR4, 0, 32, ReadWriteMode, HASHCSR4Base> ;
    using FieldValues = HASH_CSR4_CSR4_Values<HASH::CSR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR4Pack  = Register<0x50060508, 32, ReadWriteMode, HASHCSR4Base, T...> ;

  struct HASHCSR5Base {} ;

  struct CSR5 : public RegisterBase<0x5006050C, 32, ReadWriteMode>
  {
    using CSR5Field = HASH_CSR5_CSR5_Values<HASH::CSR5, 0, 32, ReadWriteMode, HASHCSR5Base> ;
    using FieldValues = HASH_CSR5_CSR5_Values<HASH::CSR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR5Pack  = Register<0x5006050C, 32, ReadWriteMode, HASHCSR5Base, T...> ;

  struct HASHCSR6Base {} ;

  struct CSR6 : public RegisterBase<0x50060510, 32, ReadWriteMode>
  {
    using CSR6Field = HASH_CSR6_CSR6_Values<HASH::CSR6, 0, 32, ReadWriteMode, HASHCSR6Base> ;
    using FieldValues = HASH_CSR6_CSR6_Values<HASH::CSR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR6Pack  = Register<0x50060510, 32, ReadWriteMode, HASHCSR6Base, T...> ;

  struct HASHCSR7Base {} ;

  struct CSR7 : public RegisterBase<0x50060514, 32, ReadWriteMode>
  {
    using CSR7Field = HASH_CSR7_CSR7_Values<HASH::CSR7, 0, 32, ReadWriteMode, HASHCSR7Base> ;
    using FieldValues = HASH_CSR7_CSR7_Values<HASH::CSR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR7Pack  = Register<0x50060514, 32, ReadWriteMode, HASHCSR7Base, T...> ;

  struct HASHCSR8Base {} ;

  struct CSR8 : public RegisterBase<0x50060518, 32, ReadWriteMode>
  {
    using CSR8Field = HASH_CSR8_CSR8_Values<HASH::CSR8, 0, 32, ReadWriteMode, HASHCSR8Base> ;
    using FieldValues = HASH_CSR8_CSR8_Values<HASH::CSR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR8Pack  = Register<0x50060518, 32, ReadWriteMode, HASHCSR8Base, T...> ;

  struct HASHCSR9Base {} ;

  struct CSR9 : public RegisterBase<0x5006051C, 32, ReadWriteMode>
  {
    using CSR9Field = HASH_CSR9_CSR9_Values<HASH::CSR9, 0, 32, ReadWriteMode, HASHCSR9Base> ;
    using FieldValues = HASH_CSR9_CSR9_Values<HASH::CSR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR9Pack  = Register<0x5006051C, 32, ReadWriteMode, HASHCSR9Base, T...> ;

  struct HASHCSR10Base {} ;

  struct CSR10 : public RegisterBase<0x50060520, 32, ReadWriteMode>
  {
    using CSR10Field = HASH_CSR10_CSR10_Values<HASH::CSR10, 0, 32, ReadWriteMode, HASHCSR10Base> ;
    using FieldValues = HASH_CSR10_CSR10_Values<HASH::CSR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR10Pack  = Register<0x50060520, 32, ReadWriteMode, HASHCSR10Base, T...> ;

  struct HASHCSR11Base {} ;

  struct CSR11 : public RegisterBase<0x50060524, 32, ReadWriteMode>
  {
    using CSR11Field = HASH_CSR11_CSR11_Values<HASH::CSR11, 0, 32, ReadWriteMode, HASHCSR11Base> ;
    using FieldValues = HASH_CSR11_CSR11_Values<HASH::CSR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR11Pack  = Register<0x50060524, 32, ReadWriteMode, HASHCSR11Base, T...> ;

  struct HASHCSR12Base {} ;

  struct CSR12 : public RegisterBase<0x50060528, 32, ReadWriteMode>
  {
    using CSR12Field = HASH_CSR12_CSR12_Values<HASH::CSR12, 0, 32, ReadWriteMode, HASHCSR12Base> ;
    using FieldValues = HASH_CSR12_CSR12_Values<HASH::CSR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR12Pack  = Register<0x50060528, 32, ReadWriteMode, HASHCSR12Base, T...> ;

  struct HASHCSR13Base {} ;

  struct CSR13 : public RegisterBase<0x5006052C, 32, ReadWriteMode>
  {
    using CSR13Field = HASH_CSR13_CSR13_Values<HASH::CSR13, 0, 32, ReadWriteMode, HASHCSR13Base> ;
    using FieldValues = HASH_CSR13_CSR13_Values<HASH::CSR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR13Pack  = Register<0x5006052C, 32, ReadWriteMode, HASHCSR13Base, T...> ;

  struct HASHCSR14Base {} ;

  struct CSR14 : public RegisterBase<0x50060530, 32, ReadWriteMode>
  {
    using CSR14Field = HASH_CSR14_CSR14_Values<HASH::CSR14, 0, 32, ReadWriteMode, HASHCSR14Base> ;
    using FieldValues = HASH_CSR14_CSR14_Values<HASH::CSR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR14Pack  = Register<0x50060530, 32, ReadWriteMode, HASHCSR14Base, T...> ;

  struct HASHCSR15Base {} ;

  struct CSR15 : public RegisterBase<0x50060534, 32, ReadWriteMode>
  {
    using CSR15Field = HASH_CSR15_CSR15_Values<HASH::CSR15, 0, 32, ReadWriteMode, HASHCSR15Base> ;
    using FieldValues = HASH_CSR15_CSR15_Values<HASH::CSR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR15Pack  = Register<0x50060534, 32, ReadWriteMode, HASHCSR15Base, T...> ;

  struct HASHCSR16Base {} ;

  struct CSR16 : public RegisterBase<0x50060538, 32, ReadWriteMode>
  {
    using CSR16Field = HASH_CSR16_CSR16_Values<HASH::CSR16, 0, 32, ReadWriteMode, HASHCSR16Base> ;
    using FieldValues = HASH_CSR16_CSR16_Values<HASH::CSR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR16Pack  = Register<0x50060538, 32, ReadWriteMode, HASHCSR16Base, T...> ;

  struct HASHCSR17Base {} ;

  struct CSR17 : public RegisterBase<0x5006053C, 32, ReadWriteMode>
  {
    using CSR17Field = HASH_CSR17_CSR17_Values<HASH::CSR17, 0, 32, ReadWriteMode, HASHCSR17Base> ;
    using FieldValues = HASH_CSR17_CSR17_Values<HASH::CSR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR17Pack  = Register<0x5006053C, 32, ReadWriteMode, HASHCSR17Base, T...> ;

  struct HASHCSR18Base {} ;

  struct CSR18 : public RegisterBase<0x50060540, 32, ReadWriteMode>
  {
    using CSR18Field = HASH_CSR18_CSR18_Values<HASH::CSR18, 0, 32, ReadWriteMode, HASHCSR18Base> ;
    using FieldValues = HASH_CSR18_CSR18_Values<HASH::CSR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR18Pack  = Register<0x50060540, 32, ReadWriteMode, HASHCSR18Base, T...> ;

  struct HASHCSR19Base {} ;

  struct CSR19 : public RegisterBase<0x50060544, 32, ReadWriteMode>
  {
    using CSR19Field = HASH_CSR19_CSR19_Values<HASH::CSR19, 0, 32, ReadWriteMode, HASHCSR19Base> ;
    using FieldValues = HASH_CSR19_CSR19_Values<HASH::CSR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR19Pack  = Register<0x50060544, 32, ReadWriteMode, HASHCSR19Base, T...> ;

  struct HASHCSR20Base {} ;

  struct CSR20 : public RegisterBase<0x50060548, 32, ReadWriteMode>
  {
    using CSR20Field = HASH_CSR20_CSR20_Values<HASH::CSR20, 0, 32, ReadWriteMode, HASHCSR20Base> ;
    using FieldValues = HASH_CSR20_CSR20_Values<HASH::CSR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR20Pack  = Register<0x50060548, 32, ReadWriteMode, HASHCSR20Base, T...> ;

  struct HASHCSR21Base {} ;

  struct CSR21 : public RegisterBase<0x5006054C, 32, ReadWriteMode>
  {
    using CSR21Field = HASH_CSR21_CSR21_Values<HASH::CSR21, 0, 32, ReadWriteMode, HASHCSR21Base> ;
    using FieldValues = HASH_CSR21_CSR21_Values<HASH::CSR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR21Pack  = Register<0x5006054C, 32, ReadWriteMode, HASHCSR21Base, T...> ;

  struct HASHCSR22Base {} ;

  struct CSR22 : public RegisterBase<0x50060550, 32, ReadWriteMode>
  {
    using CSR22Field = HASH_CSR22_CSR22_Values<HASH::CSR22, 0, 32, ReadWriteMode, HASHCSR22Base> ;
    using FieldValues = HASH_CSR22_CSR22_Values<HASH::CSR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR22Pack  = Register<0x50060550, 32, ReadWriteMode, HASHCSR22Base, T...> ;

  struct HASHCSR23Base {} ;

  struct CSR23 : public RegisterBase<0x50060554, 32, ReadWriteMode>
  {
    using CSR23Field = HASH_CSR23_CSR23_Values<HASH::CSR23, 0, 32, ReadWriteMode, HASHCSR23Base> ;
    using FieldValues = HASH_CSR23_CSR23_Values<HASH::CSR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR23Pack  = Register<0x50060554, 32, ReadWriteMode, HASHCSR23Base, T...> ;

  struct HASHCSR24Base {} ;

  struct CSR24 : public RegisterBase<0x50060558, 32, ReadWriteMode>
  {
    using CSR24Field = HASH_CSR24_CSR24_Values<HASH::CSR24, 0, 32, ReadWriteMode, HASHCSR24Base> ;
    using FieldValues = HASH_CSR24_CSR24_Values<HASH::CSR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR24Pack  = Register<0x50060558, 32, ReadWriteMode, HASHCSR24Base, T...> ;

  struct HASHCSR25Base {} ;

  struct CSR25 : public RegisterBase<0x5006055C, 32, ReadWriteMode>
  {
    using CSR25Field = HASH_CSR25_CSR25_Values<HASH::CSR25, 0, 32, ReadWriteMode, HASHCSR25Base> ;
    using FieldValues = HASH_CSR25_CSR25_Values<HASH::CSR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR25Pack  = Register<0x5006055C, 32, ReadWriteMode, HASHCSR25Base, T...> ;

  struct HASHCSR26Base {} ;

  struct CSR26 : public RegisterBase<0x50060560, 32, ReadWriteMode>
  {
    using CSR26Field = HASH_CSR26_CSR26_Values<HASH::CSR26, 0, 32, ReadWriteMode, HASHCSR26Base> ;
    using FieldValues = HASH_CSR26_CSR26_Values<HASH::CSR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR26Pack  = Register<0x50060560, 32, ReadWriteMode, HASHCSR26Base, T...> ;

  struct HASHCSR27Base {} ;

  struct CSR27 : public RegisterBase<0x50060564, 32, ReadWriteMode>
  {
    using CSR27Field = HASH_CSR27_CSR27_Values<HASH::CSR27, 0, 32, ReadWriteMode, HASHCSR27Base> ;
    using FieldValues = HASH_CSR27_CSR27_Values<HASH::CSR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR27Pack  = Register<0x50060564, 32, ReadWriteMode, HASHCSR27Base, T...> ;

  struct HASHCSR28Base {} ;

  struct CSR28 : public RegisterBase<0x50060568, 32, ReadWriteMode>
  {
    using CSR28Field = HASH_CSR28_CSR28_Values<HASH::CSR28, 0, 32, ReadWriteMode, HASHCSR28Base> ;
    using FieldValues = HASH_CSR28_CSR28_Values<HASH::CSR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR28Pack  = Register<0x50060568, 32, ReadWriteMode, HASHCSR28Base, T...> ;

  struct HASHCSR29Base {} ;

  struct CSR29 : public RegisterBase<0x5006056C, 32, ReadWriteMode>
  {
    using CSR29Field = HASH_CSR29_CSR29_Values<HASH::CSR29, 0, 32, ReadWriteMode, HASHCSR29Base> ;
    using FieldValues = HASH_CSR29_CSR29_Values<HASH::CSR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR29Pack  = Register<0x5006056C, 32, ReadWriteMode, HASHCSR29Base, T...> ;

  struct HASHCSR30Base {} ;

  struct CSR30 : public RegisterBase<0x50060570, 32, ReadWriteMode>
  {
    using CSR30Field = HASH_CSR30_CSR30_Values<HASH::CSR30, 0, 32, ReadWriteMode, HASHCSR30Base> ;
    using FieldValues = HASH_CSR30_CSR30_Values<HASH::CSR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR30Pack  = Register<0x50060570, 32, ReadWriteMode, HASHCSR30Base, T...> ;

  struct HASHCSR31Base {} ;

  struct CSR31 : public RegisterBase<0x50060574, 32, ReadWriteMode>
  {
    using CSR31Field = HASH_CSR31_CSR31_Values<HASH::CSR31, 0, 32, ReadWriteMode, HASHCSR31Base> ;
    using FieldValues = HASH_CSR31_CSR31_Values<HASH::CSR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR31Pack  = Register<0x50060574, 32, ReadWriteMode, HASHCSR31Base, T...> ;

  struct HASHCSR32Base {} ;

  struct CSR32 : public RegisterBase<0x50060578, 32, ReadWriteMode>
  {
    using CSR32Field = HASH_CSR32_CSR32_Values<HASH::CSR32, 0, 32, ReadWriteMode, HASHCSR32Base> ;
    using FieldValues = HASH_CSR32_CSR32_Values<HASH::CSR32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR32Pack  = Register<0x50060578, 32, ReadWriteMode, HASHCSR32Base, T...> ;

  struct HASHCSR33Base {} ;

  struct CSR33 : public RegisterBase<0x5006057C, 32, ReadWriteMode>
  {
    using CSR33Field = HASH_CSR33_CSR33_Values<HASH::CSR33, 0, 32, ReadWriteMode, HASHCSR33Base> ;
    using FieldValues = HASH_CSR33_CSR33_Values<HASH::CSR33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR33Pack  = Register<0x5006057C, 32, ReadWriteMode, HASHCSR33Base, T...> ;

  struct HASHCSR34Base {} ;

  struct CSR34 : public RegisterBase<0x50060580, 32, ReadWriteMode>
  {
    using CSR34Field = HASH_CSR34_CSR34_Values<HASH::CSR34, 0, 32, ReadWriteMode, HASHCSR34Base> ;
    using FieldValues = HASH_CSR34_CSR34_Values<HASH::CSR34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR34Pack  = Register<0x50060580, 32, ReadWriteMode, HASHCSR34Base, T...> ;

  struct HASHCSR35Base {} ;

  struct CSR35 : public RegisterBase<0x50060584, 32, ReadWriteMode>
  {
    using CSR35Field = HASH_CSR35_CSR35_Values<HASH::CSR35, 0, 32, ReadWriteMode, HASHCSR35Base> ;
    using FieldValues = HASH_CSR35_CSR35_Values<HASH::CSR35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR35Pack  = Register<0x50060584, 32, ReadWriteMode, HASHCSR35Base, T...> ;

  struct HASHCSR36Base {} ;

  struct CSR36 : public RegisterBase<0x50060588, 32, ReadWriteMode>
  {
    using CSR36Field = HASH_CSR36_CSR36_Values<HASH::CSR36, 0, 32, ReadWriteMode, HASHCSR36Base> ;
    using FieldValues = HASH_CSR36_CSR36_Values<HASH::CSR36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR36Pack  = Register<0x50060588, 32, ReadWriteMode, HASHCSR36Base, T...> ;

  struct HASHCSR37Base {} ;

  struct CSR37 : public RegisterBase<0x5006058C, 32, ReadWriteMode>
  {
    using CSR37Field = HASH_CSR37_CSR37_Values<HASH::CSR37, 0, 32, ReadWriteMode, HASHCSR37Base> ;
    using FieldValues = HASH_CSR37_CSR37_Values<HASH::CSR37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR37Pack  = Register<0x5006058C, 32, ReadWriteMode, HASHCSR37Base, T...> ;

  struct HASHCSR38Base {} ;

  struct CSR38 : public RegisterBase<0x50060590, 32, ReadWriteMode>
  {
    using CSR38Field = HASH_CSR38_CSR38_Values<HASH::CSR38, 0, 32, ReadWriteMode, HASHCSR38Base> ;
    using FieldValues = HASH_CSR38_CSR38_Values<HASH::CSR38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR38Pack  = Register<0x50060590, 32, ReadWriteMode, HASHCSR38Base, T...> ;

  struct HASHCSR39Base {} ;

  struct CSR39 : public RegisterBase<0x50060594, 32, ReadWriteMode>
  {
    using CSR39Field = HASH_CSR39_CSR39_Values<HASH::CSR39, 0, 32, ReadWriteMode, HASHCSR39Base> ;
    using FieldValues = HASH_CSR39_CSR39_Values<HASH::CSR39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR39Pack  = Register<0x50060594, 32, ReadWriteMode, HASHCSR39Base, T...> ;

  struct HASHCSR40Base {} ;

  struct CSR40 : public RegisterBase<0x50060598, 32, ReadWriteMode>
  {
    using CSR40Field = HASH_CSR40_CSR40_Values<HASH::CSR40, 0, 32, ReadWriteMode, HASHCSR40Base> ;
    using FieldValues = HASH_CSR40_CSR40_Values<HASH::CSR40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR40Pack  = Register<0x50060598, 32, ReadWriteMode, HASHCSR40Base, T...> ;

  struct HASHCSR41Base {} ;

  struct CSR41 : public RegisterBase<0x5006059C, 32, ReadWriteMode>
  {
    using CSR41Field = HASH_CSR41_CSR41_Values<HASH::CSR41, 0, 32, ReadWriteMode, HASHCSR41Base> ;
    using FieldValues = HASH_CSR41_CSR41_Values<HASH::CSR41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR41Pack  = Register<0x5006059C, 32, ReadWriteMode, HASHCSR41Base, T...> ;

  struct HASHCSR42Base {} ;

  struct CSR42 : public RegisterBase<0x500605A0, 32, ReadWriteMode>
  {
    using CSR42Field = HASH_CSR42_CSR42_Values<HASH::CSR42, 0, 32, ReadWriteMode, HASHCSR42Base> ;
    using FieldValues = HASH_CSR42_CSR42_Values<HASH::CSR42, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR42Pack  = Register<0x500605A0, 32, ReadWriteMode, HASHCSR42Base, T...> ;

  struct HASHCSR43Base {} ;

  struct CSR43 : public RegisterBase<0x500605A4, 32, ReadWriteMode>
  {
    using CSR43Field = HASH_CSR43_CSR43_Values<HASH::CSR43, 0, 32, ReadWriteMode, HASHCSR43Base> ;
    using FieldValues = HASH_CSR43_CSR43_Values<HASH::CSR43, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR43Pack  = Register<0x500605A4, 32, ReadWriteMode, HASHCSR43Base, T...> ;

  struct HASHCSR44Base {} ;

  struct CSR44 : public RegisterBase<0x500605A8, 32, ReadWriteMode>
  {
    using CSR44Field = HASH_CSR44_CSR44_Values<HASH::CSR44, 0, 32, ReadWriteMode, HASHCSR44Base> ;
    using FieldValues = HASH_CSR44_CSR44_Values<HASH::CSR44, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR44Pack  = Register<0x500605A8, 32, ReadWriteMode, HASHCSR44Base, T...> ;

  struct HASHCSR45Base {} ;

  struct CSR45 : public RegisterBase<0x500605AC, 32, ReadWriteMode>
  {
    using CSR45Field = HASH_CSR45_CSR45_Values<HASH::CSR45, 0, 32, ReadWriteMode, HASHCSR45Base> ;
    using FieldValues = HASH_CSR45_CSR45_Values<HASH::CSR45, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR45Pack  = Register<0x500605AC, 32, ReadWriteMode, HASHCSR45Base, T...> ;

  struct HASHCSR46Base {} ;

  struct CSR46 : public RegisterBase<0x500605B0, 32, ReadWriteMode>
  {
    using CSR46Field = HASH_CSR46_CSR46_Values<HASH::CSR46, 0, 32, ReadWriteMode, HASHCSR46Base> ;
    using FieldValues = HASH_CSR46_CSR46_Values<HASH::CSR46, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR46Pack  = Register<0x500605B0, 32, ReadWriteMode, HASHCSR46Base, T...> ;

  struct HASHCSR47Base {} ;

  struct CSR47 : public RegisterBase<0x500605B4, 32, ReadWriteMode>
  {
    using CSR47Field = HASH_CSR47_CSR47_Values<HASH::CSR47, 0, 32, ReadWriteMode, HASHCSR47Base> ;
    using FieldValues = HASH_CSR47_CSR47_Values<HASH::CSR47, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR47Pack  = Register<0x500605B4, 32, ReadWriteMode, HASHCSR47Base, T...> ;

  struct HASHCSR48Base {} ;

  struct CSR48 : public RegisterBase<0x500605B8, 32, ReadWriteMode>
  {
    using CSR48Field = HASH_CSR48_CSR48_Values<HASH::CSR48, 0, 32, ReadWriteMode, HASHCSR48Base> ;
    using FieldValues = HASH_CSR48_CSR48_Values<HASH::CSR48, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR48Pack  = Register<0x500605B8, 32, ReadWriteMode, HASHCSR48Base, T...> ;

  struct HASHCSR49Base {} ;

  struct CSR49 : public RegisterBase<0x500605BC, 32, ReadWriteMode>
  {
    using CSR49Field = HASH_CSR49_CSR49_Values<HASH::CSR49, 0, 32, ReadWriteMode, HASHCSR49Base> ;
    using FieldValues = HASH_CSR49_CSR49_Values<HASH::CSR49, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR49Pack  = Register<0x500605BC, 32, ReadWriteMode, HASHCSR49Base, T...> ;

  struct HASHCSR50Base {} ;

  struct CSR50 : public RegisterBase<0x500605C0, 32, ReadWriteMode>
  {
    using CSR50Field = HASH_CSR50_CSR50_Values<HASH::CSR50, 0, 32, ReadWriteMode, HASHCSR50Base> ;
    using FieldValues = HASH_CSR50_CSR50_Values<HASH::CSR50, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR50Pack  = Register<0x500605C0, 32, ReadWriteMode, HASHCSR50Base, T...> ;

  struct HASHCSR51Base {} ;

  struct CSR51 : public RegisterBase<0x500605C4, 32, ReadWriteMode>
  {
    using CSR51Field = HASH_CSR51_CSR51_Values<HASH::CSR51, 0, 32, ReadWriteMode, HASHCSR51Base> ;
    using FieldValues = HASH_CSR51_CSR51_Values<HASH::CSR51, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR51Pack  = Register<0x500605C4, 32, ReadWriteMode, HASHCSR51Base, T...> ;

  struct HASHCSR52Base {} ;

  struct CSR52 : public RegisterBase<0x500605C8, 32, ReadWriteMode>
  {
    using CSR52Field = HASH_CSR52_CSR52_Values<HASH::CSR52, 0, 32, ReadWriteMode, HASHCSR52Base> ;
    using FieldValues = HASH_CSR52_CSR52_Values<HASH::CSR52, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR52Pack  = Register<0x500605C8, 32, ReadWriteMode, HASHCSR52Base, T...> ;

  struct HASHCSR53Base {} ;

  struct CSR53 : public RegisterBase<0x500605CC, 32, ReadWriteMode>
  {
    using CSR53Field = HASH_CSR53_CSR53_Values<HASH::CSR53, 0, 32, ReadWriteMode, HASHCSR53Base> ;
    using FieldValues = HASH_CSR53_CSR53_Values<HASH::CSR53, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR53Pack  = Register<0x500605CC, 32, ReadWriteMode, HASHCSR53Base, T...> ;

  struct HASHHASH_HR0Base {} ;

  struct HASH_HR0 : public RegisterBase<0x50060710, 32, ReadMode>
  {
    using H0 = HASH_HASH_HR0_H0_Values<HASH::HASH_HR0, 0, 32, ReadMode, HASHHASH_HR0Base> ;
    using FieldValues = HASH_HASH_HR0_H0_Values<HASH::HASH_HR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR0Pack  = Register<0x50060710, 32, ReadMode, HASHHASH_HR0Base, T...> ;

  struct HASHHASH_HR1Base {} ;

  struct HASH_HR1 : public RegisterBase<0x50060714, 32, ReadMode>
  {
    using H1 = HASH_HASH_HR1_H1_Values<HASH::HASH_HR1, 0, 32, ReadMode, HASHHASH_HR1Base> ;
    using FieldValues = HASH_HASH_HR1_H1_Values<HASH::HASH_HR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR1Pack  = Register<0x50060714, 32, ReadMode, HASHHASH_HR1Base, T...> ;

  struct HASHHASH_HR2Base {} ;

  struct HASH_HR2 : public RegisterBase<0x50060718, 32, ReadMode>
  {
    using H2 = HASH_HASH_HR2_H2_Values<HASH::HASH_HR2, 0, 32, ReadMode, HASHHASH_HR2Base> ;
    using FieldValues = HASH_HASH_HR2_H2_Values<HASH::HASH_HR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR2Pack  = Register<0x50060718, 32, ReadMode, HASHHASH_HR2Base, T...> ;

  struct HASHHASH_HR3Base {} ;

  struct HASH_HR3 : public RegisterBase<0x5006071C, 32, ReadMode>
  {
    using H3 = HASH_HASH_HR3_H3_Values<HASH::HASH_HR3, 0, 32, ReadMode, HASHHASH_HR3Base> ;
    using FieldValues = HASH_HASH_HR3_H3_Values<HASH::HASH_HR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR3Pack  = Register<0x5006071C, 32, ReadMode, HASHHASH_HR3Base, T...> ;

  struct HASHHASH_HR4Base {} ;

  struct HASH_HR4 : public RegisterBase<0x50060720, 32, ReadMode>
  {
    using H4 = HASH_HASH_HR4_H4_Values<HASH::HASH_HR4, 0, 32, ReadMode, HASHHASH_HR4Base> ;
    using FieldValues = HASH_HASH_HR4_H4_Values<HASH::HASH_HR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR4Pack  = Register<0x50060720, 32, ReadMode, HASHHASH_HR4Base, T...> ;

  struct HASHHASH_HR5Base {} ;

  struct HASH_HR5 : public RegisterBase<0x50060724, 32, ReadMode>
  {
    using H5 = HASH_HASH_HR5_H5_Values<HASH::HASH_HR5, 0, 32, ReadMode, HASHHASH_HR5Base> ;
    using FieldValues = HASH_HASH_HR5_H5_Values<HASH::HASH_HR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR5Pack  = Register<0x50060724, 32, ReadMode, HASHHASH_HR5Base, T...> ;

  struct HASHHASH_HR6Base {} ;

  struct HASH_HR6 : public RegisterBase<0x50060728, 32, ReadMode>
  {
    using H6 = HASH_HASH_HR6_H6_Values<HASH::HASH_HR6, 0, 32, ReadMode, HASHHASH_HR6Base> ;
    using FieldValues = HASH_HASH_HR6_H6_Values<HASH::HASH_HR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR6Pack  = Register<0x50060728, 32, ReadMode, HASHHASH_HR6Base, T...> ;

  struct HASHHASH_HR7Base {} ;

  struct HASH_HR7 : public RegisterBase<0x5006072C, 32, ReadMode>
  {
    using H7 = HASH_HASH_HR7_H7_Values<HASH::HASH_HR7, 0, 32, ReadMode, HASHHASH_HR7Base> ;
    using FieldValues = HASH_HASH_HR7_H7_Values<HASH::HASH_HR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HASH_HR7Pack  = Register<0x5006072C, 32, ReadMode, HASHHASH_HR7Base, T...> ;

} ;

#endif //#if !defined(HASHREGISTERS_HPP)
