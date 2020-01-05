/*******************************************************************************
* Filename      : crypregisters.hpp
*
* Details       : Cryptographic processor. This header file is auto-generated
*                 for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(CRYPREGISTERS_HPP)
#define CRYPREGISTERS_HPP

#include "crypfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CRYP
{
  struct CRYPCRBase {} ;

  struct CR : public RegisterBase<0x50060000, 32, ReadWriteMode>
  {
    using ALGODIR = CRYP_CR_ALGODIR_Values<CRYP::CR, 2, 1, ReadWriteMode, CRYPCRBase> ;
    using ALGOMODE0 = CRYP_CR_ALGOMODE0_Values<CRYP::CR, 3, 3, ReadWriteMode, CRYPCRBase> ;
    using DATATYPE = CRYP_CR_DATATYPE_Values<CRYP::CR, 6, 2, ReadWriteMode, CRYPCRBase> ;
    using KEYSIZE = CRYP_CR_KEYSIZE_Values<CRYP::CR, 8, 2, ReadWriteMode, CRYPCRBase> ;
    using FFLUSH = CRYP_CR_FFLUSH_Values<CRYP::CR, 14, 1, WriteMode, CRYPCRBase> ;
    using CRYPEN = CRYP_CR_CRYPEN_Values<CRYP::CR, 15, 1, ReadWriteMode, CRYPCRBase> ;
    using GCM_CCMPH = CRYP_CR_GCM_CCMPH_Values<CRYP::CR, 16, 2, ReadWriteMode, CRYPCRBase> ;
    using ALGOMODE3 = CRYP_CR_ALGOMODE3_Values<CRYP::CR, 19, 1, ReadWriteMode, CRYPCRBase> ;
    using FieldValues = CRYP_CR_ALGOMODE3_Values<CRYP::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50060000, 32, ReadWriteMode, CRYPCRBase, T...> ;

  struct CRYPSRBase {} ;

  struct SR : public RegisterBase<0x50060004, 32, ReadMode>
  {
    using BUSY = CRYP_SR_BUSY_Values<CRYP::SR, 4, 1, ReadMode, CRYPSRBase> ;
    using OFFU = CRYP_SR_OFFU_Values<CRYP::SR, 3, 1, ReadMode, CRYPSRBase> ;
    using OFNE = CRYP_SR_OFNE_Values<CRYP::SR, 2, 1, ReadMode, CRYPSRBase> ;
    using IFNF = CRYP_SR_IFNF_Values<CRYP::SR, 1, 1, ReadMode, CRYPSRBase> ;
    using IFEM = CRYP_SR_IFEM_Values<CRYP::SR, 0, 1, ReadMode, CRYPSRBase> ;
    using FieldValues = CRYP_SR_IFEM_Values<CRYP::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50060004, 32, ReadMode, CRYPSRBase, T...> ;

  struct CRYPDINBase {} ;

  struct DIN : public RegisterBase<0x50060008, 32, ReadWriteMode>
  {
    using DATAIN = CRYP_DIN_DATAIN_Values<CRYP::DIN, 0, 32, ReadWriteMode, CRYPDINBase> ;
    using FieldValues = CRYP_DIN_DATAIN_Values<CRYP::DIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DINPack  = Register<0x50060008, 32, ReadWriteMode, CRYPDINBase, T...> ;

  struct CRYPDOUTBase {} ;

  struct DOUT : public RegisterBase<0x5006000C, 32, ReadMode>
  {
    using DATAOUT = CRYP_DOUT_DATAOUT_Values<CRYP::DOUT, 0, 32, ReadMode, CRYPDOUTBase> ;
    using FieldValues = CRYP_DOUT_DATAOUT_Values<CRYP::DOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOUTPack  = Register<0x5006000C, 32, ReadMode, CRYPDOUTBase, T...> ;

  struct CRYPDMACRBase {} ;

  struct DMACR : public RegisterBase<0x50060010, 32, ReadWriteMode>
  {
    using DOEN = CRYP_DMACR_DOEN_Values<CRYP::DMACR, 1, 1, ReadWriteMode, CRYPDMACRBase> ;
    using DIEN = CRYP_DMACR_DIEN_Values<CRYP::DMACR, 0, 1, ReadWriteMode, CRYPDMACRBase> ;
    using FieldValues = CRYP_DMACR_DIEN_Values<CRYP::DMACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRPack  = Register<0x50060010, 32, ReadWriteMode, CRYPDMACRBase, T...> ;

  struct CRYPIMSCRBase {} ;

  struct IMSCR : public RegisterBase<0x50060014, 32, ReadWriteMode>
  {
    using OUTIM = CRYP_IMSCR_OUTIM_Values<CRYP::IMSCR, 1, 1, ReadWriteMode, CRYPIMSCRBase> ;
    using INIM = CRYP_IMSCR_INIM_Values<CRYP::IMSCR, 0, 1, ReadWriteMode, CRYPIMSCRBase> ;
    using FieldValues = CRYP_IMSCR_INIM_Values<CRYP::IMSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMSCRPack  = Register<0x50060014, 32, ReadWriteMode, CRYPIMSCRBase, T...> ;

  struct CRYPRISRBase {} ;

  struct RISR : public RegisterBase<0x50060018, 32, ReadMode>
  {
    using OUTRIS = CRYP_RISR_OUTRIS_Values<CRYP::RISR, 1, 1, ReadMode, CRYPRISRBase> ;
    using INRIS = CRYP_RISR_INRIS_Values<CRYP::RISR, 0, 1, ReadMode, CRYPRISRBase> ;
    using FieldValues = CRYP_RISR_INRIS_Values<CRYP::RISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RISRPack  = Register<0x50060018, 32, ReadMode, CRYPRISRBase, T...> ;

  struct CRYPMISRBase {} ;

  struct MISR : public RegisterBase<0x5006001C, 32, ReadMode>
  {
    using OUTMIS = CRYP_MISR_OUTMIS_Values<CRYP::MISR, 1, 1, ReadMode, CRYPMISRBase> ;
    using INMIS = CRYP_MISR_INMIS_Values<CRYP::MISR, 0, 1, ReadMode, CRYPMISRBase> ;
    using FieldValues = CRYP_MISR_INMIS_Values<CRYP::MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISRPack  = Register<0x5006001C, 32, ReadMode, CRYPMISRBase, T...> ;

  struct CRYPK0LRBase {} ;

  struct K0LR : public RegisterBase<0x50060020, 32, WriteMode>
  {
    using b224 = CRYP_K0LR_b224_Values<CRYP::K0LR, 0, 1, WriteMode, CRYPK0LRBase> ;
    using b225 = CRYP_K0LR_b225_Values<CRYP::K0LR, 1, 1, WriteMode, CRYPK0LRBase> ;
    using b226 = CRYP_K0LR_b226_Values<CRYP::K0LR, 2, 1, WriteMode, CRYPK0LRBase> ;
    using b227 = CRYP_K0LR_b227_Values<CRYP::K0LR, 3, 1, WriteMode, CRYPK0LRBase> ;
    using b228 = CRYP_K0LR_b228_Values<CRYP::K0LR, 4, 1, WriteMode, CRYPK0LRBase> ;
    using b229 = CRYP_K0LR_b229_Values<CRYP::K0LR, 5, 1, WriteMode, CRYPK0LRBase> ;
    using b230 = CRYP_K0LR_b230_Values<CRYP::K0LR, 6, 1, WriteMode, CRYPK0LRBase> ;
    using b231 = CRYP_K0LR_b231_Values<CRYP::K0LR, 7, 1, WriteMode, CRYPK0LRBase> ;
    using b232 = CRYP_K0LR_b232_Values<CRYP::K0LR, 8, 1, WriteMode, CRYPK0LRBase> ;
    using b233 = CRYP_K0LR_b233_Values<CRYP::K0LR, 9, 1, WriteMode, CRYPK0LRBase> ;
    using b234 = CRYP_K0LR_b234_Values<CRYP::K0LR, 10, 1, WriteMode, CRYPK0LRBase> ;
    using b235 = CRYP_K0LR_b235_Values<CRYP::K0LR, 11, 1, WriteMode, CRYPK0LRBase> ;
    using b236 = CRYP_K0LR_b236_Values<CRYP::K0LR, 12, 1, WriteMode, CRYPK0LRBase> ;
    using b237 = CRYP_K0LR_b237_Values<CRYP::K0LR, 13, 1, WriteMode, CRYPK0LRBase> ;
    using b238 = CRYP_K0LR_b238_Values<CRYP::K0LR, 14, 1, WriteMode, CRYPK0LRBase> ;
    using b239 = CRYP_K0LR_b239_Values<CRYP::K0LR, 15, 1, WriteMode, CRYPK0LRBase> ;
    using b240 = CRYP_K0LR_b240_Values<CRYP::K0LR, 16, 1, WriteMode, CRYPK0LRBase> ;
    using b241 = CRYP_K0LR_b241_Values<CRYP::K0LR, 17, 1, WriteMode, CRYPK0LRBase> ;
    using b242 = CRYP_K0LR_b242_Values<CRYP::K0LR, 18, 1, WriteMode, CRYPK0LRBase> ;
    using b243 = CRYP_K0LR_b243_Values<CRYP::K0LR, 19, 1, WriteMode, CRYPK0LRBase> ;
    using b244 = CRYP_K0LR_b244_Values<CRYP::K0LR, 20, 1, WriteMode, CRYPK0LRBase> ;
    using b245 = CRYP_K0LR_b245_Values<CRYP::K0LR, 21, 1, WriteMode, CRYPK0LRBase> ;
    using b246 = CRYP_K0LR_b246_Values<CRYP::K0LR, 22, 1, WriteMode, CRYPK0LRBase> ;
    using b247 = CRYP_K0LR_b247_Values<CRYP::K0LR, 23, 1, WriteMode, CRYPK0LRBase> ;
    using b248 = CRYP_K0LR_b248_Values<CRYP::K0LR, 24, 1, WriteMode, CRYPK0LRBase> ;
    using b249 = CRYP_K0LR_b249_Values<CRYP::K0LR, 25, 1, WriteMode, CRYPK0LRBase> ;
    using b250 = CRYP_K0LR_b250_Values<CRYP::K0LR, 26, 1, WriteMode, CRYPK0LRBase> ;
    using b251 = CRYP_K0LR_b251_Values<CRYP::K0LR, 27, 1, WriteMode, CRYPK0LRBase> ;
    using b252 = CRYP_K0LR_b252_Values<CRYP::K0LR, 28, 1, WriteMode, CRYPK0LRBase> ;
    using b253 = CRYP_K0LR_b253_Values<CRYP::K0LR, 29, 1, WriteMode, CRYPK0LRBase> ;
    using b254 = CRYP_K0LR_b254_Values<CRYP::K0LR, 30, 1, WriteMode, CRYPK0LRBase> ;
    using b255 = CRYP_K0LR_b255_Values<CRYP::K0LR, 31, 1, WriteMode, CRYPK0LRBase> ;
    using FieldValues = CRYP_K0LR_b255_Values<CRYP::K0LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K0LRPack  = Register<0x50060020, 32, WriteMode, CRYPK0LRBase, T...> ;

  struct CRYPK0RRBase {} ;

  struct K0RR : public RegisterBase<0x50060024, 32, WriteMode>
  {
    using b192 = CRYP_K0RR_b192_Values<CRYP::K0RR, 0, 1, WriteMode, CRYPK0RRBase> ;
    using b193 = CRYP_K0RR_b193_Values<CRYP::K0RR, 1, 1, WriteMode, CRYPK0RRBase> ;
    using b194 = CRYP_K0RR_b194_Values<CRYP::K0RR, 2, 1, WriteMode, CRYPK0RRBase> ;
    using b195 = CRYP_K0RR_b195_Values<CRYP::K0RR, 3, 1, WriteMode, CRYPK0RRBase> ;
    using b196 = CRYP_K0RR_b196_Values<CRYP::K0RR, 4, 1, WriteMode, CRYPK0RRBase> ;
    using b197 = CRYP_K0RR_b197_Values<CRYP::K0RR, 5, 1, WriteMode, CRYPK0RRBase> ;
    using b198 = CRYP_K0RR_b198_Values<CRYP::K0RR, 6, 1, WriteMode, CRYPK0RRBase> ;
    using b199 = CRYP_K0RR_b199_Values<CRYP::K0RR, 7, 1, WriteMode, CRYPK0RRBase> ;
    using b200 = CRYP_K0RR_b200_Values<CRYP::K0RR, 8, 1, WriteMode, CRYPK0RRBase> ;
    using b201 = CRYP_K0RR_b201_Values<CRYP::K0RR, 9, 1, WriteMode, CRYPK0RRBase> ;
    using b202 = CRYP_K0RR_b202_Values<CRYP::K0RR, 10, 1, WriteMode, CRYPK0RRBase> ;
    using b203 = CRYP_K0RR_b203_Values<CRYP::K0RR, 11, 1, WriteMode, CRYPK0RRBase> ;
    using b204 = CRYP_K0RR_b204_Values<CRYP::K0RR, 12, 1, WriteMode, CRYPK0RRBase> ;
    using b205 = CRYP_K0RR_b205_Values<CRYP::K0RR, 13, 1, WriteMode, CRYPK0RRBase> ;
    using b206 = CRYP_K0RR_b206_Values<CRYP::K0RR, 14, 1, WriteMode, CRYPK0RRBase> ;
    using b207 = CRYP_K0RR_b207_Values<CRYP::K0RR, 15, 1, WriteMode, CRYPK0RRBase> ;
    using b208 = CRYP_K0RR_b208_Values<CRYP::K0RR, 16, 1, WriteMode, CRYPK0RRBase> ;
    using b209 = CRYP_K0RR_b209_Values<CRYP::K0RR, 17, 1, WriteMode, CRYPK0RRBase> ;
    using b210 = CRYP_K0RR_b210_Values<CRYP::K0RR, 18, 1, WriteMode, CRYPK0RRBase> ;
    using b211 = CRYP_K0RR_b211_Values<CRYP::K0RR, 19, 1, WriteMode, CRYPK0RRBase> ;
    using b212 = CRYP_K0RR_b212_Values<CRYP::K0RR, 20, 1, WriteMode, CRYPK0RRBase> ;
    using b213 = CRYP_K0RR_b213_Values<CRYP::K0RR, 21, 1, WriteMode, CRYPK0RRBase> ;
    using b214 = CRYP_K0RR_b214_Values<CRYP::K0RR, 22, 1, WriteMode, CRYPK0RRBase> ;
    using b215 = CRYP_K0RR_b215_Values<CRYP::K0RR, 23, 1, WriteMode, CRYPK0RRBase> ;
    using b216 = CRYP_K0RR_b216_Values<CRYP::K0RR, 24, 1, WriteMode, CRYPK0RRBase> ;
    using b217 = CRYP_K0RR_b217_Values<CRYP::K0RR, 25, 1, WriteMode, CRYPK0RRBase> ;
    using b218 = CRYP_K0RR_b218_Values<CRYP::K0RR, 26, 1, WriteMode, CRYPK0RRBase> ;
    using b219 = CRYP_K0RR_b219_Values<CRYP::K0RR, 27, 1, WriteMode, CRYPK0RRBase> ;
    using b220 = CRYP_K0RR_b220_Values<CRYP::K0RR, 28, 1, WriteMode, CRYPK0RRBase> ;
    using b221 = CRYP_K0RR_b221_Values<CRYP::K0RR, 29, 1, WriteMode, CRYPK0RRBase> ;
    using b222 = CRYP_K0RR_b222_Values<CRYP::K0RR, 30, 1, WriteMode, CRYPK0RRBase> ;
    using b223 = CRYP_K0RR_b223_Values<CRYP::K0RR, 31, 1, WriteMode, CRYPK0RRBase> ;
    using FieldValues = CRYP_K0RR_b223_Values<CRYP::K0RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K0RRPack  = Register<0x50060024, 32, WriteMode, CRYPK0RRBase, T...> ;

  struct CRYPK1LRBase {} ;

  struct K1LR : public RegisterBase<0x50060028, 32, WriteMode>
  {
    using b160 = CRYP_K1LR_b160_Values<CRYP::K1LR, 0, 1, WriteMode, CRYPK1LRBase> ;
    using b161 = CRYP_K1LR_b161_Values<CRYP::K1LR, 1, 1, WriteMode, CRYPK1LRBase> ;
    using b162 = CRYP_K1LR_b162_Values<CRYP::K1LR, 2, 1, WriteMode, CRYPK1LRBase> ;
    using b163 = CRYP_K1LR_b163_Values<CRYP::K1LR, 3, 1, WriteMode, CRYPK1LRBase> ;
    using b164 = CRYP_K1LR_b164_Values<CRYP::K1LR, 4, 1, WriteMode, CRYPK1LRBase> ;
    using b165 = CRYP_K1LR_b165_Values<CRYP::K1LR, 5, 1, WriteMode, CRYPK1LRBase> ;
    using b166 = CRYP_K1LR_b166_Values<CRYP::K1LR, 6, 1, WriteMode, CRYPK1LRBase> ;
    using b167 = CRYP_K1LR_b167_Values<CRYP::K1LR, 7, 1, WriteMode, CRYPK1LRBase> ;
    using b168 = CRYP_K1LR_b168_Values<CRYP::K1LR, 8, 1, WriteMode, CRYPK1LRBase> ;
    using b169 = CRYP_K1LR_b169_Values<CRYP::K1LR, 9, 1, WriteMode, CRYPK1LRBase> ;
    using b170 = CRYP_K1LR_b170_Values<CRYP::K1LR, 10, 1, WriteMode, CRYPK1LRBase> ;
    using b171 = CRYP_K1LR_b171_Values<CRYP::K1LR, 11, 1, WriteMode, CRYPK1LRBase> ;
    using b172 = CRYP_K1LR_b172_Values<CRYP::K1LR, 12, 1, WriteMode, CRYPK1LRBase> ;
    using b173 = CRYP_K1LR_b173_Values<CRYP::K1LR, 13, 1, WriteMode, CRYPK1LRBase> ;
    using b174 = CRYP_K1LR_b174_Values<CRYP::K1LR, 14, 1, WriteMode, CRYPK1LRBase> ;
    using b175 = CRYP_K1LR_b175_Values<CRYP::K1LR, 15, 1, WriteMode, CRYPK1LRBase> ;
    using b176 = CRYP_K1LR_b176_Values<CRYP::K1LR, 16, 1, WriteMode, CRYPK1LRBase> ;
    using b177 = CRYP_K1LR_b177_Values<CRYP::K1LR, 17, 1, WriteMode, CRYPK1LRBase> ;
    using b178 = CRYP_K1LR_b178_Values<CRYP::K1LR, 18, 1, WriteMode, CRYPK1LRBase> ;
    using b179 = CRYP_K1LR_b179_Values<CRYP::K1LR, 19, 1, WriteMode, CRYPK1LRBase> ;
    using b180 = CRYP_K1LR_b180_Values<CRYP::K1LR, 20, 1, WriteMode, CRYPK1LRBase> ;
    using b181 = CRYP_K1LR_b181_Values<CRYP::K1LR, 21, 1, WriteMode, CRYPK1LRBase> ;
    using b182 = CRYP_K1LR_b182_Values<CRYP::K1LR, 22, 1, WriteMode, CRYPK1LRBase> ;
    using b183 = CRYP_K1LR_b183_Values<CRYP::K1LR, 23, 1, WriteMode, CRYPK1LRBase> ;
    using b184 = CRYP_K1LR_b184_Values<CRYP::K1LR, 24, 1, WriteMode, CRYPK1LRBase> ;
    using b185 = CRYP_K1LR_b185_Values<CRYP::K1LR, 25, 1, WriteMode, CRYPK1LRBase> ;
    using b186 = CRYP_K1LR_b186_Values<CRYP::K1LR, 26, 1, WriteMode, CRYPK1LRBase> ;
    using b187 = CRYP_K1LR_b187_Values<CRYP::K1LR, 27, 1, WriteMode, CRYPK1LRBase> ;
    using b188 = CRYP_K1LR_b188_Values<CRYP::K1LR, 28, 1, WriteMode, CRYPK1LRBase> ;
    using b189 = CRYP_K1LR_b189_Values<CRYP::K1LR, 29, 1, WriteMode, CRYPK1LRBase> ;
    using b190 = CRYP_K1LR_b190_Values<CRYP::K1LR, 30, 1, WriteMode, CRYPK1LRBase> ;
    using b191 = CRYP_K1LR_b191_Values<CRYP::K1LR, 31, 1, WriteMode, CRYPK1LRBase> ;
    using FieldValues = CRYP_K1LR_b191_Values<CRYP::K1LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K1LRPack  = Register<0x50060028, 32, WriteMode, CRYPK1LRBase, T...> ;

  struct CRYPK1RRBase {} ;

  struct K1RR : public RegisterBase<0x5006002C, 32, WriteMode>
  {
    using b128 = CRYP_K1RR_b128_Values<CRYP::K1RR, 0, 1, WriteMode, CRYPK1RRBase> ;
    using b129 = CRYP_K1RR_b129_Values<CRYP::K1RR, 1, 1, WriteMode, CRYPK1RRBase> ;
    using b130 = CRYP_K1RR_b130_Values<CRYP::K1RR, 2, 1, WriteMode, CRYPK1RRBase> ;
    using b131 = CRYP_K1RR_b131_Values<CRYP::K1RR, 3, 1, WriteMode, CRYPK1RRBase> ;
    using b132 = CRYP_K1RR_b132_Values<CRYP::K1RR, 4, 1, WriteMode, CRYPK1RRBase> ;
    using b133 = CRYP_K1RR_b133_Values<CRYP::K1RR, 5, 1, WriteMode, CRYPK1RRBase> ;
    using b134 = CRYP_K1RR_b134_Values<CRYP::K1RR, 6, 1, WriteMode, CRYPK1RRBase> ;
    using b135 = CRYP_K1RR_b135_Values<CRYP::K1RR, 7, 1, WriteMode, CRYPK1RRBase> ;
    using b136 = CRYP_K1RR_b136_Values<CRYP::K1RR, 8, 1, WriteMode, CRYPK1RRBase> ;
    using b137 = CRYP_K1RR_b137_Values<CRYP::K1RR, 9, 1, WriteMode, CRYPK1RRBase> ;
    using b138 = CRYP_K1RR_b138_Values<CRYP::K1RR, 10, 1, WriteMode, CRYPK1RRBase> ;
    using b139 = CRYP_K1RR_b139_Values<CRYP::K1RR, 11, 1, WriteMode, CRYPK1RRBase> ;
    using b140 = CRYP_K1RR_b140_Values<CRYP::K1RR, 12, 1, WriteMode, CRYPK1RRBase> ;
    using b141 = CRYP_K1RR_b141_Values<CRYP::K1RR, 13, 1, WriteMode, CRYPK1RRBase> ;
    using b142 = CRYP_K1RR_b142_Values<CRYP::K1RR, 14, 1, WriteMode, CRYPK1RRBase> ;
    using b143 = CRYP_K1RR_b143_Values<CRYP::K1RR, 15, 1, WriteMode, CRYPK1RRBase> ;
    using b144 = CRYP_K1RR_b144_Values<CRYP::K1RR, 16, 1, WriteMode, CRYPK1RRBase> ;
    using b145 = CRYP_K1RR_b145_Values<CRYP::K1RR, 17, 1, WriteMode, CRYPK1RRBase> ;
    using b146 = CRYP_K1RR_b146_Values<CRYP::K1RR, 18, 1, WriteMode, CRYPK1RRBase> ;
    using b147 = CRYP_K1RR_b147_Values<CRYP::K1RR, 19, 1, WriteMode, CRYPK1RRBase> ;
    using b148 = CRYP_K1RR_b148_Values<CRYP::K1RR, 20, 1, WriteMode, CRYPK1RRBase> ;
    using b149 = CRYP_K1RR_b149_Values<CRYP::K1RR, 21, 1, WriteMode, CRYPK1RRBase> ;
    using b150 = CRYP_K1RR_b150_Values<CRYP::K1RR, 22, 1, WriteMode, CRYPK1RRBase> ;
    using b151 = CRYP_K1RR_b151_Values<CRYP::K1RR, 23, 1, WriteMode, CRYPK1RRBase> ;
    using b152 = CRYP_K1RR_b152_Values<CRYP::K1RR, 24, 1, WriteMode, CRYPK1RRBase> ;
    using b153 = CRYP_K1RR_b153_Values<CRYP::K1RR, 25, 1, WriteMode, CRYPK1RRBase> ;
    using b154 = CRYP_K1RR_b154_Values<CRYP::K1RR, 26, 1, WriteMode, CRYPK1RRBase> ;
    using b155 = CRYP_K1RR_b155_Values<CRYP::K1RR, 27, 1, WriteMode, CRYPK1RRBase> ;
    using b156 = CRYP_K1RR_b156_Values<CRYP::K1RR, 28, 1, WriteMode, CRYPK1RRBase> ;
    using b157 = CRYP_K1RR_b157_Values<CRYP::K1RR, 29, 1, WriteMode, CRYPK1RRBase> ;
    using b158 = CRYP_K1RR_b158_Values<CRYP::K1RR, 30, 1, WriteMode, CRYPK1RRBase> ;
    using b159 = CRYP_K1RR_b159_Values<CRYP::K1RR, 31, 1, WriteMode, CRYPK1RRBase> ;
    using FieldValues = CRYP_K1RR_b159_Values<CRYP::K1RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K1RRPack  = Register<0x5006002C, 32, WriteMode, CRYPK1RRBase, T...> ;

  struct CRYPK2LRBase {} ;

  struct K2LR : public RegisterBase<0x50060030, 32, WriteMode>
  {
    using b96 = CRYP_K2LR_b96_Values<CRYP::K2LR, 0, 1, WriteMode, CRYPK2LRBase> ;
    using b97 = CRYP_K2LR_b97_Values<CRYP::K2LR, 1, 1, WriteMode, CRYPK2LRBase> ;
    using b98 = CRYP_K2LR_b98_Values<CRYP::K2LR, 2, 1, WriteMode, CRYPK2LRBase> ;
    using b99 = CRYP_K2LR_b99_Values<CRYP::K2LR, 3, 1, WriteMode, CRYPK2LRBase> ;
    using b100 = CRYP_K2LR_b100_Values<CRYP::K2LR, 4, 1, WriteMode, CRYPK2LRBase> ;
    using b101 = CRYP_K2LR_b101_Values<CRYP::K2LR, 5, 1, WriteMode, CRYPK2LRBase> ;
    using b102 = CRYP_K2LR_b102_Values<CRYP::K2LR, 6, 1, WriteMode, CRYPK2LRBase> ;
    using b103 = CRYP_K2LR_b103_Values<CRYP::K2LR, 7, 1, WriteMode, CRYPK2LRBase> ;
    using b104 = CRYP_K2LR_b104_Values<CRYP::K2LR, 8, 1, WriteMode, CRYPK2LRBase> ;
    using b105 = CRYP_K2LR_b105_Values<CRYP::K2LR, 9, 1, WriteMode, CRYPK2LRBase> ;
    using b106 = CRYP_K2LR_b106_Values<CRYP::K2LR, 10, 1, WriteMode, CRYPK2LRBase> ;
    using b107 = CRYP_K2LR_b107_Values<CRYP::K2LR, 11, 1, WriteMode, CRYPK2LRBase> ;
    using b108 = CRYP_K2LR_b108_Values<CRYP::K2LR, 12, 1, WriteMode, CRYPK2LRBase> ;
    using b109 = CRYP_K2LR_b109_Values<CRYP::K2LR, 13, 1, WriteMode, CRYPK2LRBase> ;
    using b110 = CRYP_K2LR_b110_Values<CRYP::K2LR, 14, 1, WriteMode, CRYPK2LRBase> ;
    using b111 = CRYP_K2LR_b111_Values<CRYP::K2LR, 15, 1, WriteMode, CRYPK2LRBase> ;
    using b112 = CRYP_K2LR_b112_Values<CRYP::K2LR, 16, 1, WriteMode, CRYPK2LRBase> ;
    using b113 = CRYP_K2LR_b113_Values<CRYP::K2LR, 17, 1, WriteMode, CRYPK2LRBase> ;
    using b114 = CRYP_K2LR_b114_Values<CRYP::K2LR, 18, 1, WriteMode, CRYPK2LRBase> ;
    using b115 = CRYP_K2LR_b115_Values<CRYP::K2LR, 19, 1, WriteMode, CRYPK2LRBase> ;
    using b116 = CRYP_K2LR_b116_Values<CRYP::K2LR, 20, 1, WriteMode, CRYPK2LRBase> ;
    using b117 = CRYP_K2LR_b117_Values<CRYP::K2LR, 21, 1, WriteMode, CRYPK2LRBase> ;
    using b118 = CRYP_K2LR_b118_Values<CRYP::K2LR, 22, 1, WriteMode, CRYPK2LRBase> ;
    using b119 = CRYP_K2LR_b119_Values<CRYP::K2LR, 23, 1, WriteMode, CRYPK2LRBase> ;
    using b120 = CRYP_K2LR_b120_Values<CRYP::K2LR, 24, 1, WriteMode, CRYPK2LRBase> ;
    using b121 = CRYP_K2LR_b121_Values<CRYP::K2LR, 25, 1, WriteMode, CRYPK2LRBase> ;
    using b122 = CRYP_K2LR_b122_Values<CRYP::K2LR, 26, 1, WriteMode, CRYPK2LRBase> ;
    using b123 = CRYP_K2LR_b123_Values<CRYP::K2LR, 27, 1, WriteMode, CRYPK2LRBase> ;
    using b124 = CRYP_K2LR_b124_Values<CRYP::K2LR, 28, 1, WriteMode, CRYPK2LRBase> ;
    using b125 = CRYP_K2LR_b125_Values<CRYP::K2LR, 29, 1, WriteMode, CRYPK2LRBase> ;
    using b126 = CRYP_K2LR_b126_Values<CRYP::K2LR, 30, 1, WriteMode, CRYPK2LRBase> ;
    using b127 = CRYP_K2LR_b127_Values<CRYP::K2LR, 31, 1, WriteMode, CRYPK2LRBase> ;
    using FieldValues = CRYP_K2LR_b127_Values<CRYP::K2LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K2LRPack  = Register<0x50060030, 32, WriteMode, CRYPK2LRBase, T...> ;

  struct CRYPK2RRBase {} ;

  struct K2RR : public RegisterBase<0x50060034, 32, WriteMode>
  {
    using b64 = CRYP_K2RR_b64_Values<CRYP::K2RR, 0, 1, WriteMode, CRYPK2RRBase> ;
    using b65 = CRYP_K2RR_b65_Values<CRYP::K2RR, 1, 1, WriteMode, CRYPK2RRBase> ;
    using b66 = CRYP_K2RR_b66_Values<CRYP::K2RR, 2, 1, WriteMode, CRYPK2RRBase> ;
    using b67 = CRYP_K2RR_b67_Values<CRYP::K2RR, 3, 1, WriteMode, CRYPK2RRBase> ;
    using b68 = CRYP_K2RR_b68_Values<CRYP::K2RR, 4, 1, WriteMode, CRYPK2RRBase> ;
    using b69 = CRYP_K2RR_b69_Values<CRYP::K2RR, 5, 1, WriteMode, CRYPK2RRBase> ;
    using b70 = CRYP_K2RR_b70_Values<CRYP::K2RR, 6, 1, WriteMode, CRYPK2RRBase> ;
    using b71 = CRYP_K2RR_b71_Values<CRYP::K2RR, 7, 1, WriteMode, CRYPK2RRBase> ;
    using b72 = CRYP_K2RR_b72_Values<CRYP::K2RR, 8, 1, WriteMode, CRYPK2RRBase> ;
    using b73 = CRYP_K2RR_b73_Values<CRYP::K2RR, 9, 1, WriteMode, CRYPK2RRBase> ;
    using b74 = CRYP_K2RR_b74_Values<CRYP::K2RR, 10, 1, WriteMode, CRYPK2RRBase> ;
    using b75 = CRYP_K2RR_b75_Values<CRYP::K2RR, 11, 1, WriteMode, CRYPK2RRBase> ;
    using b76 = CRYP_K2RR_b76_Values<CRYP::K2RR, 12, 1, WriteMode, CRYPK2RRBase> ;
    using b77 = CRYP_K2RR_b77_Values<CRYP::K2RR, 13, 1, WriteMode, CRYPK2RRBase> ;
    using b78 = CRYP_K2RR_b78_Values<CRYP::K2RR, 14, 1, WriteMode, CRYPK2RRBase> ;
    using b79 = CRYP_K2RR_b79_Values<CRYP::K2RR, 15, 1, WriteMode, CRYPK2RRBase> ;
    using b80 = CRYP_K2RR_b80_Values<CRYP::K2RR, 16, 1, WriteMode, CRYPK2RRBase> ;
    using b81 = CRYP_K2RR_b81_Values<CRYP::K2RR, 17, 1, WriteMode, CRYPK2RRBase> ;
    using b82 = CRYP_K2RR_b82_Values<CRYP::K2RR, 18, 1, WriteMode, CRYPK2RRBase> ;
    using b83 = CRYP_K2RR_b83_Values<CRYP::K2RR, 19, 1, WriteMode, CRYPK2RRBase> ;
    using b84 = CRYP_K2RR_b84_Values<CRYP::K2RR, 20, 1, WriteMode, CRYPK2RRBase> ;
    using b85 = CRYP_K2RR_b85_Values<CRYP::K2RR, 21, 1, WriteMode, CRYPK2RRBase> ;
    using b86 = CRYP_K2RR_b86_Values<CRYP::K2RR, 22, 1, WriteMode, CRYPK2RRBase> ;
    using b87 = CRYP_K2RR_b87_Values<CRYP::K2RR, 23, 1, WriteMode, CRYPK2RRBase> ;
    using b88 = CRYP_K2RR_b88_Values<CRYP::K2RR, 24, 1, WriteMode, CRYPK2RRBase> ;
    using b89 = CRYP_K2RR_b89_Values<CRYP::K2RR, 25, 1, WriteMode, CRYPK2RRBase> ;
    using b90 = CRYP_K2RR_b90_Values<CRYP::K2RR, 26, 1, WriteMode, CRYPK2RRBase> ;
    using b91 = CRYP_K2RR_b91_Values<CRYP::K2RR, 27, 1, WriteMode, CRYPK2RRBase> ;
    using b92 = CRYP_K2RR_b92_Values<CRYP::K2RR, 28, 1, WriteMode, CRYPK2RRBase> ;
    using b93 = CRYP_K2RR_b93_Values<CRYP::K2RR, 29, 1, WriteMode, CRYPK2RRBase> ;
    using b94 = CRYP_K2RR_b94_Values<CRYP::K2RR, 30, 1, WriteMode, CRYPK2RRBase> ;
    using b95 = CRYP_K2RR_b95_Values<CRYP::K2RR, 31, 1, WriteMode, CRYPK2RRBase> ;
    using FieldValues = CRYP_K2RR_b95_Values<CRYP::K2RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K2RRPack  = Register<0x50060034, 32, WriteMode, CRYPK2RRBase, T...> ;

  struct CRYPK3LRBase {} ;

  struct K3LR : public RegisterBase<0x50060038, 32, WriteMode>
  {
    using b32 = CRYP_K3LR_b32_Values<CRYP::K3LR, 0, 1, WriteMode, CRYPK3LRBase> ;
    using b33 = CRYP_K3LR_b33_Values<CRYP::K3LR, 1, 1, WriteMode, CRYPK3LRBase> ;
    using b34 = CRYP_K3LR_b34_Values<CRYP::K3LR, 2, 1, WriteMode, CRYPK3LRBase> ;
    using b35 = CRYP_K3LR_b35_Values<CRYP::K3LR, 3, 1, WriteMode, CRYPK3LRBase> ;
    using b36 = CRYP_K3LR_b36_Values<CRYP::K3LR, 4, 1, WriteMode, CRYPK3LRBase> ;
    using b37 = CRYP_K3LR_b37_Values<CRYP::K3LR, 5, 1, WriteMode, CRYPK3LRBase> ;
    using b38 = CRYP_K3LR_b38_Values<CRYP::K3LR, 6, 1, WriteMode, CRYPK3LRBase> ;
    using b39 = CRYP_K3LR_b39_Values<CRYP::K3LR, 7, 1, WriteMode, CRYPK3LRBase> ;
    using b40 = CRYP_K3LR_b40_Values<CRYP::K3LR, 8, 1, WriteMode, CRYPK3LRBase> ;
    using b41 = CRYP_K3LR_b41_Values<CRYP::K3LR, 9, 1, WriteMode, CRYPK3LRBase> ;
    using b42 = CRYP_K3LR_b42_Values<CRYP::K3LR, 10, 1, WriteMode, CRYPK3LRBase> ;
    using b43 = CRYP_K3LR_b43_Values<CRYP::K3LR, 11, 1, WriteMode, CRYPK3LRBase> ;
    using b44 = CRYP_K3LR_b44_Values<CRYP::K3LR, 12, 1, WriteMode, CRYPK3LRBase> ;
    using b45 = CRYP_K3LR_b45_Values<CRYP::K3LR, 13, 1, WriteMode, CRYPK3LRBase> ;
    using b46 = CRYP_K3LR_b46_Values<CRYP::K3LR, 14, 1, WriteMode, CRYPK3LRBase> ;
    using b47 = CRYP_K3LR_b47_Values<CRYP::K3LR, 15, 1, WriteMode, CRYPK3LRBase> ;
    using b48 = CRYP_K3LR_b48_Values<CRYP::K3LR, 16, 1, WriteMode, CRYPK3LRBase> ;
    using b49 = CRYP_K3LR_b49_Values<CRYP::K3LR, 17, 1, WriteMode, CRYPK3LRBase> ;
    using b50 = CRYP_K3LR_b50_Values<CRYP::K3LR, 18, 1, WriteMode, CRYPK3LRBase> ;
    using b51 = CRYP_K3LR_b51_Values<CRYP::K3LR, 19, 1, WriteMode, CRYPK3LRBase> ;
    using b52 = CRYP_K3LR_b52_Values<CRYP::K3LR, 20, 1, WriteMode, CRYPK3LRBase> ;
    using b53 = CRYP_K3LR_b53_Values<CRYP::K3LR, 21, 1, WriteMode, CRYPK3LRBase> ;
    using b54 = CRYP_K3LR_b54_Values<CRYP::K3LR, 22, 1, WriteMode, CRYPK3LRBase> ;
    using b55 = CRYP_K3LR_b55_Values<CRYP::K3LR, 23, 1, WriteMode, CRYPK3LRBase> ;
    using b56 = CRYP_K3LR_b56_Values<CRYP::K3LR, 24, 1, WriteMode, CRYPK3LRBase> ;
    using b57 = CRYP_K3LR_b57_Values<CRYP::K3LR, 25, 1, WriteMode, CRYPK3LRBase> ;
    using b58 = CRYP_K3LR_b58_Values<CRYP::K3LR, 26, 1, WriteMode, CRYPK3LRBase> ;
    using b59 = CRYP_K3LR_b59_Values<CRYP::K3LR, 27, 1, WriteMode, CRYPK3LRBase> ;
    using b60 = CRYP_K3LR_b60_Values<CRYP::K3LR, 28, 1, WriteMode, CRYPK3LRBase> ;
    using b61 = CRYP_K3LR_b61_Values<CRYP::K3LR, 29, 1, WriteMode, CRYPK3LRBase> ;
    using b62 = CRYP_K3LR_b62_Values<CRYP::K3LR, 30, 1, WriteMode, CRYPK3LRBase> ;
    using b63 = CRYP_K3LR_b63_Values<CRYP::K3LR, 31, 1, WriteMode, CRYPK3LRBase> ;
    using FieldValues = CRYP_K3LR_b63_Values<CRYP::K3LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K3LRPack  = Register<0x50060038, 32, WriteMode, CRYPK3LRBase, T...> ;

  struct CRYPK3RRBase {} ;

  struct K3RR : public RegisterBase<0x5006003C, 32, WriteMode>
  {
    using b0 = CRYP_K3RR_b0_Values<CRYP::K3RR, 0, 1, WriteMode, CRYPK3RRBase> ;
    using b1 = CRYP_K3RR_b1_Values<CRYP::K3RR, 1, 1, WriteMode, CRYPK3RRBase> ;
    using b2 = CRYP_K3RR_b2_Values<CRYP::K3RR, 2, 1, WriteMode, CRYPK3RRBase> ;
    using b3 = CRYP_K3RR_b3_Values<CRYP::K3RR, 3, 1, WriteMode, CRYPK3RRBase> ;
    using b4 = CRYP_K3RR_b4_Values<CRYP::K3RR, 4, 1, WriteMode, CRYPK3RRBase> ;
    using b5 = CRYP_K3RR_b5_Values<CRYP::K3RR, 5, 1, WriteMode, CRYPK3RRBase> ;
    using b6 = CRYP_K3RR_b6_Values<CRYP::K3RR, 6, 1, WriteMode, CRYPK3RRBase> ;
    using b7 = CRYP_K3RR_b7_Values<CRYP::K3RR, 7, 1, WriteMode, CRYPK3RRBase> ;
    using b8 = CRYP_K3RR_b8_Values<CRYP::K3RR, 8, 1, WriteMode, CRYPK3RRBase> ;
    using b9 = CRYP_K3RR_b9_Values<CRYP::K3RR, 9, 1, WriteMode, CRYPK3RRBase> ;
    using b10 = CRYP_K3RR_b10_Values<CRYP::K3RR, 10, 1, WriteMode, CRYPK3RRBase> ;
    using b11 = CRYP_K3RR_b11_Values<CRYP::K3RR, 11, 1, WriteMode, CRYPK3RRBase> ;
    using b12 = CRYP_K3RR_b12_Values<CRYP::K3RR, 12, 1, WriteMode, CRYPK3RRBase> ;
    using b13 = CRYP_K3RR_b13_Values<CRYP::K3RR, 13, 1, WriteMode, CRYPK3RRBase> ;
    using b14 = CRYP_K3RR_b14_Values<CRYP::K3RR, 14, 1, WriteMode, CRYPK3RRBase> ;
    using b15 = CRYP_K3RR_b15_Values<CRYP::K3RR, 15, 1, WriteMode, CRYPK3RRBase> ;
    using b16 = CRYP_K3RR_b16_Values<CRYP::K3RR, 16, 1, WriteMode, CRYPK3RRBase> ;
    using b17 = CRYP_K3RR_b17_Values<CRYP::K3RR, 17, 1, WriteMode, CRYPK3RRBase> ;
    using b18 = CRYP_K3RR_b18_Values<CRYP::K3RR, 18, 1, WriteMode, CRYPK3RRBase> ;
    using b19 = CRYP_K3RR_b19_Values<CRYP::K3RR, 19, 1, WriteMode, CRYPK3RRBase> ;
    using b20 = CRYP_K3RR_b20_Values<CRYP::K3RR, 20, 1, WriteMode, CRYPK3RRBase> ;
    using b21 = CRYP_K3RR_b21_Values<CRYP::K3RR, 21, 1, WriteMode, CRYPK3RRBase> ;
    using b22 = CRYP_K3RR_b22_Values<CRYP::K3RR, 22, 1, WriteMode, CRYPK3RRBase> ;
    using b23 = CRYP_K3RR_b23_Values<CRYP::K3RR, 23, 1, WriteMode, CRYPK3RRBase> ;
    using b24 = CRYP_K3RR_b24_Values<CRYP::K3RR, 24, 1, WriteMode, CRYPK3RRBase> ;
    using b25 = CRYP_K3RR_b25_Values<CRYP::K3RR, 25, 1, WriteMode, CRYPK3RRBase> ;
    using b26 = CRYP_K3RR_b26_Values<CRYP::K3RR, 26, 1, WriteMode, CRYPK3RRBase> ;
    using b27 = CRYP_K3RR_b27_Values<CRYP::K3RR, 27, 1, WriteMode, CRYPK3RRBase> ;
    using b28 = CRYP_K3RR_b28_Values<CRYP::K3RR, 28, 1, WriteMode, CRYPK3RRBase> ;
    using b29 = CRYP_K3RR_b29_Values<CRYP::K3RR, 29, 1, WriteMode, CRYPK3RRBase> ;
    using b30 = CRYP_K3RR_b30_Values<CRYP::K3RR, 30, 1, WriteMode, CRYPK3RRBase> ;
    using b31 = CRYP_K3RR_b31_Values<CRYP::K3RR, 31, 1, WriteMode, CRYPK3RRBase> ;
    using FieldValues = CRYP_K3RR_b31_Values<CRYP::K3RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using K3RRPack  = Register<0x5006003C, 32, WriteMode, CRYPK3RRBase, T...> ;

  struct CRYPIV0LRBase {} ;

  struct IV0LR : public RegisterBase<0x50060040, 32, ReadWriteMode>
  {
    using IV31 = CRYP_IV0LR_IV31_Values<CRYP::IV0LR, 0, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV30 = CRYP_IV0LR_IV30_Values<CRYP::IV0LR, 1, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV29 = CRYP_IV0LR_IV29_Values<CRYP::IV0LR, 2, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV28 = CRYP_IV0LR_IV28_Values<CRYP::IV0LR, 3, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV27 = CRYP_IV0LR_IV27_Values<CRYP::IV0LR, 4, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV26 = CRYP_IV0LR_IV26_Values<CRYP::IV0LR, 5, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV25 = CRYP_IV0LR_IV25_Values<CRYP::IV0LR, 6, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV24 = CRYP_IV0LR_IV24_Values<CRYP::IV0LR, 7, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV23 = CRYP_IV0LR_IV23_Values<CRYP::IV0LR, 8, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV22 = CRYP_IV0LR_IV22_Values<CRYP::IV0LR, 9, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV21 = CRYP_IV0LR_IV21_Values<CRYP::IV0LR, 10, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV20 = CRYP_IV0LR_IV20_Values<CRYP::IV0LR, 11, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV19 = CRYP_IV0LR_IV19_Values<CRYP::IV0LR, 12, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV18 = CRYP_IV0LR_IV18_Values<CRYP::IV0LR, 13, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV17 = CRYP_IV0LR_IV17_Values<CRYP::IV0LR, 14, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV16 = CRYP_IV0LR_IV16_Values<CRYP::IV0LR, 15, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV15 = CRYP_IV0LR_IV15_Values<CRYP::IV0LR, 16, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV14 = CRYP_IV0LR_IV14_Values<CRYP::IV0LR, 17, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV13 = CRYP_IV0LR_IV13_Values<CRYP::IV0LR, 18, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV12 = CRYP_IV0LR_IV12_Values<CRYP::IV0LR, 19, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV11 = CRYP_IV0LR_IV11_Values<CRYP::IV0LR, 20, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV10 = CRYP_IV0LR_IV10_Values<CRYP::IV0LR, 21, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV9 = CRYP_IV0LR_IV9_Values<CRYP::IV0LR, 22, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV8 = CRYP_IV0LR_IV8_Values<CRYP::IV0LR, 23, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV7 = CRYP_IV0LR_IV7_Values<CRYP::IV0LR, 24, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV6 = CRYP_IV0LR_IV6_Values<CRYP::IV0LR, 25, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV5 = CRYP_IV0LR_IV5_Values<CRYP::IV0LR, 26, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV4 = CRYP_IV0LR_IV4_Values<CRYP::IV0LR, 27, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV3 = CRYP_IV0LR_IV3_Values<CRYP::IV0LR, 28, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV2 = CRYP_IV0LR_IV2_Values<CRYP::IV0LR, 29, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV1 = CRYP_IV0LR_IV1_Values<CRYP::IV0LR, 30, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using IV0 = CRYP_IV0LR_IV0_Values<CRYP::IV0LR, 31, 1, ReadWriteMode, CRYPIV0LRBase> ;
    using FieldValues = CRYP_IV0LR_IV0_Values<CRYP::IV0LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IV0LRPack  = Register<0x50060040, 32, ReadWriteMode, CRYPIV0LRBase, T...> ;

  struct CRYPIV0RRBase {} ;

  struct IV0RR : public RegisterBase<0x50060044, 32, ReadWriteMode>
  {
    using IV63 = CRYP_IV0RR_IV63_Values<CRYP::IV0RR, 0, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV62 = CRYP_IV0RR_IV62_Values<CRYP::IV0RR, 1, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV61 = CRYP_IV0RR_IV61_Values<CRYP::IV0RR, 2, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV60 = CRYP_IV0RR_IV60_Values<CRYP::IV0RR, 3, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV59 = CRYP_IV0RR_IV59_Values<CRYP::IV0RR, 4, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV58 = CRYP_IV0RR_IV58_Values<CRYP::IV0RR, 5, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV57 = CRYP_IV0RR_IV57_Values<CRYP::IV0RR, 6, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV56 = CRYP_IV0RR_IV56_Values<CRYP::IV0RR, 7, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV55 = CRYP_IV0RR_IV55_Values<CRYP::IV0RR, 8, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV54 = CRYP_IV0RR_IV54_Values<CRYP::IV0RR, 9, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV53 = CRYP_IV0RR_IV53_Values<CRYP::IV0RR, 10, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV52 = CRYP_IV0RR_IV52_Values<CRYP::IV0RR, 11, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV51 = CRYP_IV0RR_IV51_Values<CRYP::IV0RR, 12, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV50 = CRYP_IV0RR_IV50_Values<CRYP::IV0RR, 13, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV49 = CRYP_IV0RR_IV49_Values<CRYP::IV0RR, 14, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV48 = CRYP_IV0RR_IV48_Values<CRYP::IV0RR, 15, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV47 = CRYP_IV0RR_IV47_Values<CRYP::IV0RR, 16, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV46 = CRYP_IV0RR_IV46_Values<CRYP::IV0RR, 17, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV45 = CRYP_IV0RR_IV45_Values<CRYP::IV0RR, 18, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV44 = CRYP_IV0RR_IV44_Values<CRYP::IV0RR, 19, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV43 = CRYP_IV0RR_IV43_Values<CRYP::IV0RR, 20, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV42 = CRYP_IV0RR_IV42_Values<CRYP::IV0RR, 21, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV41 = CRYP_IV0RR_IV41_Values<CRYP::IV0RR, 22, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV40 = CRYP_IV0RR_IV40_Values<CRYP::IV0RR, 23, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV39 = CRYP_IV0RR_IV39_Values<CRYP::IV0RR, 24, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV38 = CRYP_IV0RR_IV38_Values<CRYP::IV0RR, 25, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV37 = CRYP_IV0RR_IV37_Values<CRYP::IV0RR, 26, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV36 = CRYP_IV0RR_IV36_Values<CRYP::IV0RR, 27, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV35 = CRYP_IV0RR_IV35_Values<CRYP::IV0RR, 28, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV34 = CRYP_IV0RR_IV34_Values<CRYP::IV0RR, 29, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV33 = CRYP_IV0RR_IV33_Values<CRYP::IV0RR, 30, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using IV32 = CRYP_IV0RR_IV32_Values<CRYP::IV0RR, 31, 1, ReadWriteMode, CRYPIV0RRBase> ;
    using FieldValues = CRYP_IV0RR_IV32_Values<CRYP::IV0RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IV0RRPack  = Register<0x50060044, 32, ReadWriteMode, CRYPIV0RRBase, T...> ;

  struct CRYPIV1LRBase {} ;

  struct IV1LR : public RegisterBase<0x50060048, 32, ReadWriteMode>
  {
    using IV95 = CRYP_IV1LR_IV95_Values<CRYP::IV1LR, 0, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV94 = CRYP_IV1LR_IV94_Values<CRYP::IV1LR, 1, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV93 = CRYP_IV1LR_IV93_Values<CRYP::IV1LR, 2, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV92 = CRYP_IV1LR_IV92_Values<CRYP::IV1LR, 3, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV91 = CRYP_IV1LR_IV91_Values<CRYP::IV1LR, 4, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV90 = CRYP_IV1LR_IV90_Values<CRYP::IV1LR, 5, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV89 = CRYP_IV1LR_IV89_Values<CRYP::IV1LR, 6, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV88 = CRYP_IV1LR_IV88_Values<CRYP::IV1LR, 7, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV87 = CRYP_IV1LR_IV87_Values<CRYP::IV1LR, 8, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV86 = CRYP_IV1LR_IV86_Values<CRYP::IV1LR, 9, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV85 = CRYP_IV1LR_IV85_Values<CRYP::IV1LR, 10, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV84 = CRYP_IV1LR_IV84_Values<CRYP::IV1LR, 11, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV83 = CRYP_IV1LR_IV83_Values<CRYP::IV1LR, 12, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV82 = CRYP_IV1LR_IV82_Values<CRYP::IV1LR, 13, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV81 = CRYP_IV1LR_IV81_Values<CRYP::IV1LR, 14, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV80 = CRYP_IV1LR_IV80_Values<CRYP::IV1LR, 15, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV79 = CRYP_IV1LR_IV79_Values<CRYP::IV1LR, 16, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV78 = CRYP_IV1LR_IV78_Values<CRYP::IV1LR, 17, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV77 = CRYP_IV1LR_IV77_Values<CRYP::IV1LR, 18, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV76 = CRYP_IV1LR_IV76_Values<CRYP::IV1LR, 19, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV75 = CRYP_IV1LR_IV75_Values<CRYP::IV1LR, 20, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV74 = CRYP_IV1LR_IV74_Values<CRYP::IV1LR, 21, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV73 = CRYP_IV1LR_IV73_Values<CRYP::IV1LR, 22, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV72 = CRYP_IV1LR_IV72_Values<CRYP::IV1LR, 23, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV71 = CRYP_IV1LR_IV71_Values<CRYP::IV1LR, 24, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV70 = CRYP_IV1LR_IV70_Values<CRYP::IV1LR, 25, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV69 = CRYP_IV1LR_IV69_Values<CRYP::IV1LR, 26, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV68 = CRYP_IV1LR_IV68_Values<CRYP::IV1LR, 27, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV67 = CRYP_IV1LR_IV67_Values<CRYP::IV1LR, 28, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV66 = CRYP_IV1LR_IV66_Values<CRYP::IV1LR, 29, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV65 = CRYP_IV1LR_IV65_Values<CRYP::IV1LR, 30, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using IV64 = CRYP_IV1LR_IV64_Values<CRYP::IV1LR, 31, 1, ReadWriteMode, CRYPIV1LRBase> ;
    using FieldValues = CRYP_IV1LR_IV64_Values<CRYP::IV1LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IV1LRPack  = Register<0x50060048, 32, ReadWriteMode, CRYPIV1LRBase, T...> ;

  struct CRYPIV1RRBase {} ;

  struct IV1RR : public RegisterBase<0x5006004C, 32, ReadWriteMode>
  {
    using IV127 = CRYP_IV1RR_IV127_Values<CRYP::IV1RR, 0, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV126 = CRYP_IV1RR_IV126_Values<CRYP::IV1RR, 1, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV125 = CRYP_IV1RR_IV125_Values<CRYP::IV1RR, 2, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV124 = CRYP_IV1RR_IV124_Values<CRYP::IV1RR, 3, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV123 = CRYP_IV1RR_IV123_Values<CRYP::IV1RR, 4, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV122 = CRYP_IV1RR_IV122_Values<CRYP::IV1RR, 5, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV121 = CRYP_IV1RR_IV121_Values<CRYP::IV1RR, 6, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV120 = CRYP_IV1RR_IV120_Values<CRYP::IV1RR, 7, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV119 = CRYP_IV1RR_IV119_Values<CRYP::IV1RR, 8, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV118 = CRYP_IV1RR_IV118_Values<CRYP::IV1RR, 9, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV117 = CRYP_IV1RR_IV117_Values<CRYP::IV1RR, 10, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV116 = CRYP_IV1RR_IV116_Values<CRYP::IV1RR, 11, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV115 = CRYP_IV1RR_IV115_Values<CRYP::IV1RR, 12, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV114 = CRYP_IV1RR_IV114_Values<CRYP::IV1RR, 13, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV113 = CRYP_IV1RR_IV113_Values<CRYP::IV1RR, 14, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV112 = CRYP_IV1RR_IV112_Values<CRYP::IV1RR, 15, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV111 = CRYP_IV1RR_IV111_Values<CRYP::IV1RR, 16, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV110 = CRYP_IV1RR_IV110_Values<CRYP::IV1RR, 17, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV109 = CRYP_IV1RR_IV109_Values<CRYP::IV1RR, 18, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV108 = CRYP_IV1RR_IV108_Values<CRYP::IV1RR, 19, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV107 = CRYP_IV1RR_IV107_Values<CRYP::IV1RR, 20, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV106 = CRYP_IV1RR_IV106_Values<CRYP::IV1RR, 21, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV105 = CRYP_IV1RR_IV105_Values<CRYP::IV1RR, 22, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV104 = CRYP_IV1RR_IV104_Values<CRYP::IV1RR, 23, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV103 = CRYP_IV1RR_IV103_Values<CRYP::IV1RR, 24, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV102 = CRYP_IV1RR_IV102_Values<CRYP::IV1RR, 25, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV101 = CRYP_IV1RR_IV101_Values<CRYP::IV1RR, 26, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV100 = CRYP_IV1RR_IV100_Values<CRYP::IV1RR, 27, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV99 = CRYP_IV1RR_IV99_Values<CRYP::IV1RR, 28, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV98 = CRYP_IV1RR_IV98_Values<CRYP::IV1RR, 29, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV97 = CRYP_IV1RR_IV97_Values<CRYP::IV1RR, 30, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using IV96 = CRYP_IV1RR_IV96_Values<CRYP::IV1RR, 31, 1, ReadWriteMode, CRYPIV1RRBase> ;
    using FieldValues = CRYP_IV1RR_IV96_Values<CRYP::IV1RR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IV1RRPack  = Register<0x5006004C, 32, ReadWriteMode, CRYPIV1RRBase, T...> ;

  struct CRYPCSGCMCCM0RBase {} ;

  struct CSGCMCCM0R : public RegisterBase<0x50060050, 32, ReadWriteMode>
  {
    using CSGCMCCM0RField = CRYP_CSGCMCCM0R_CSGCMCCM0R_Values<CRYP::CSGCMCCM0R, 0, 32, ReadWriteMode, CRYPCSGCMCCM0RBase> ;
    using FieldValues = CRYP_CSGCMCCM0R_CSGCMCCM0R_Values<CRYP::CSGCMCCM0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM0RPack  = Register<0x50060050, 32, ReadWriteMode, CRYPCSGCMCCM0RBase, T...> ;

  struct CRYPCSGCMCCM1RBase {} ;

  struct CSGCMCCM1R : public RegisterBase<0x50060054, 32, ReadWriteMode>
  {
    using CSGCMCCM1RField = CRYP_CSGCMCCM1R_CSGCMCCM1R_Values<CRYP::CSGCMCCM1R, 0, 32, ReadWriteMode, CRYPCSGCMCCM1RBase> ;
    using FieldValues = CRYP_CSGCMCCM1R_CSGCMCCM1R_Values<CRYP::CSGCMCCM1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM1RPack  = Register<0x50060054, 32, ReadWriteMode, CRYPCSGCMCCM1RBase, T...> ;

  struct CRYPCSGCMCCM2RBase {} ;

  struct CSGCMCCM2R : public RegisterBase<0x50060058, 32, ReadWriteMode>
  {
    using CSGCMCCM2RField = CRYP_CSGCMCCM2R_CSGCMCCM2R_Values<CRYP::CSGCMCCM2R, 0, 32, ReadWriteMode, CRYPCSGCMCCM2RBase> ;
    using FieldValues = CRYP_CSGCMCCM2R_CSGCMCCM2R_Values<CRYP::CSGCMCCM2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM2RPack  = Register<0x50060058, 32, ReadWriteMode, CRYPCSGCMCCM2RBase, T...> ;

  struct CRYPCSGCMCCM3RBase {} ;

  struct CSGCMCCM3R : public RegisterBase<0x5006005C, 32, ReadWriteMode>
  {
    using CSGCMCCM3RField = CRYP_CSGCMCCM3R_CSGCMCCM3R_Values<CRYP::CSGCMCCM3R, 0, 32, ReadWriteMode, CRYPCSGCMCCM3RBase> ;
    using FieldValues = CRYP_CSGCMCCM3R_CSGCMCCM3R_Values<CRYP::CSGCMCCM3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM3RPack  = Register<0x5006005C, 32, ReadWriteMode, CRYPCSGCMCCM3RBase, T...> ;

  struct CRYPCSGCMCCM4RBase {} ;

  struct CSGCMCCM4R : public RegisterBase<0x50060060, 32, ReadWriteMode>
  {
    using CSGCMCCM4RField = CRYP_CSGCMCCM4R_CSGCMCCM4R_Values<CRYP::CSGCMCCM4R, 0, 32, ReadWriteMode, CRYPCSGCMCCM4RBase> ;
    using FieldValues = CRYP_CSGCMCCM4R_CSGCMCCM4R_Values<CRYP::CSGCMCCM4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM4RPack  = Register<0x50060060, 32, ReadWriteMode, CRYPCSGCMCCM4RBase, T...> ;

  struct CRYPCSGCMCCM5RBase {} ;

  struct CSGCMCCM5R : public RegisterBase<0x50060064, 32, ReadWriteMode>
  {
    using CSGCMCCM5RField = CRYP_CSGCMCCM5R_CSGCMCCM5R_Values<CRYP::CSGCMCCM5R, 0, 32, ReadWriteMode, CRYPCSGCMCCM5RBase> ;
    using FieldValues = CRYP_CSGCMCCM5R_CSGCMCCM5R_Values<CRYP::CSGCMCCM5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM5RPack  = Register<0x50060064, 32, ReadWriteMode, CRYPCSGCMCCM5RBase, T...> ;

  struct CRYPCSGCMCCM6RBase {} ;

  struct CSGCMCCM6R : public RegisterBase<0x50060068, 32, ReadWriteMode>
  {
    using CSGCMCCM6RField = CRYP_CSGCMCCM6R_CSGCMCCM6R_Values<CRYP::CSGCMCCM6R, 0, 32, ReadWriteMode, CRYPCSGCMCCM6RBase> ;
    using FieldValues = CRYP_CSGCMCCM6R_CSGCMCCM6R_Values<CRYP::CSGCMCCM6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM6RPack  = Register<0x50060068, 32, ReadWriteMode, CRYPCSGCMCCM6RBase, T...> ;

  struct CRYPCSGCMCCM7RBase {} ;

  struct CSGCMCCM7R : public RegisterBase<0x5006006C, 32, ReadWriteMode>
  {
    using CSGCMCCM7RField = CRYP_CSGCMCCM7R_CSGCMCCM7R_Values<CRYP::CSGCMCCM7R, 0, 32, ReadWriteMode, CRYPCSGCMCCM7RBase> ;
    using FieldValues = CRYP_CSGCMCCM7R_CSGCMCCM7R_Values<CRYP::CSGCMCCM7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCMCCM7RPack  = Register<0x5006006C, 32, ReadWriteMode, CRYPCSGCMCCM7RBase, T...> ;

  struct CRYPCSGCM0RBase {} ;

  struct CSGCM0R : public RegisterBase<0x50060070, 32, ReadWriteMode>
  {
    using CSGCM0RField = CRYP_CSGCM0R_CSGCM0R_Values<CRYP::CSGCM0R, 0, 32, ReadWriteMode, CRYPCSGCM0RBase> ;
    using FieldValues = CRYP_CSGCM0R_CSGCM0R_Values<CRYP::CSGCM0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM0RPack  = Register<0x50060070, 32, ReadWriteMode, CRYPCSGCM0RBase, T...> ;

  struct CRYPCSGCM1RBase {} ;

  struct CSGCM1R : public RegisterBase<0x50060074, 32, ReadWriteMode>
  {
    using CSGCM1RField = CRYP_CSGCM1R_CSGCM1R_Values<CRYP::CSGCM1R, 0, 32, ReadWriteMode, CRYPCSGCM1RBase> ;
    using FieldValues = CRYP_CSGCM1R_CSGCM1R_Values<CRYP::CSGCM1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM1RPack  = Register<0x50060074, 32, ReadWriteMode, CRYPCSGCM1RBase, T...> ;

  struct CRYPCSGCM2RBase {} ;

  struct CSGCM2R : public RegisterBase<0x50060078, 32, ReadWriteMode>
  {
    using CSGCM2RField = CRYP_CSGCM2R_CSGCM2R_Values<CRYP::CSGCM2R, 0, 32, ReadWriteMode, CRYPCSGCM2RBase> ;
    using FieldValues = CRYP_CSGCM2R_CSGCM2R_Values<CRYP::CSGCM2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM2RPack  = Register<0x50060078, 32, ReadWriteMode, CRYPCSGCM2RBase, T...> ;

  struct CRYPCSGCM3RBase {} ;

  struct CSGCM3R : public RegisterBase<0x5006007C, 32, ReadWriteMode>
  {
    using CSGCM3RField = CRYP_CSGCM3R_CSGCM3R_Values<CRYP::CSGCM3R, 0, 32, ReadWriteMode, CRYPCSGCM3RBase> ;
    using FieldValues = CRYP_CSGCM3R_CSGCM3R_Values<CRYP::CSGCM3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM3RPack  = Register<0x5006007C, 32, ReadWriteMode, CRYPCSGCM3RBase, T...> ;

  struct CRYPCSGCM4RBase {} ;

  struct CSGCM4R : public RegisterBase<0x50060080, 32, ReadWriteMode>
  {
    using CSGCM4RField = CRYP_CSGCM4R_CSGCM4R_Values<CRYP::CSGCM4R, 0, 32, ReadWriteMode, CRYPCSGCM4RBase> ;
    using FieldValues = CRYP_CSGCM4R_CSGCM4R_Values<CRYP::CSGCM4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM4RPack  = Register<0x50060080, 32, ReadWriteMode, CRYPCSGCM4RBase, T...> ;

  struct CRYPCSGCM5RBase {} ;

  struct CSGCM5R : public RegisterBase<0x50060084, 32, ReadWriteMode>
  {
    using CSGCM5RField = CRYP_CSGCM5R_CSGCM5R_Values<CRYP::CSGCM5R, 0, 32, ReadWriteMode, CRYPCSGCM5RBase> ;
    using FieldValues = CRYP_CSGCM5R_CSGCM5R_Values<CRYP::CSGCM5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM5RPack  = Register<0x50060084, 32, ReadWriteMode, CRYPCSGCM5RBase, T...> ;

  struct CRYPCSGCM6RBase {} ;

  struct CSGCM6R : public RegisterBase<0x50060088, 32, ReadWriteMode>
  {
    using CSGCM6RField = CRYP_CSGCM6R_CSGCM6R_Values<CRYP::CSGCM6R, 0, 32, ReadWriteMode, CRYPCSGCM6RBase> ;
    using FieldValues = CRYP_CSGCM6R_CSGCM6R_Values<CRYP::CSGCM6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM6RPack  = Register<0x50060088, 32, ReadWriteMode, CRYPCSGCM6RBase, T...> ;

  struct CRYPCSGCM7RBase {} ;

  struct CSGCM7R : public RegisterBase<0x5006008C, 32, ReadWriteMode>
  {
    using CSGCM7RField = CRYP_CSGCM7R_CSGCM7R_Values<CRYP::CSGCM7R, 0, 32, ReadWriteMode, CRYPCSGCM7RBase> ;
    using FieldValues = CRYP_CSGCM7R_CSGCM7R_Values<CRYP::CSGCM7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSGCM7RPack  = Register<0x5006008C, 32, ReadWriteMode, CRYPCSGCM7RBase, T...> ;

} ;

#endif //#if !defined(CRYPREGISTERS_HPP)
