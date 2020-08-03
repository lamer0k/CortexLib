/*******************************************************************************
* Filename      : bkpregisters.hpp
*
* Details       : Backup registers. This header file is auto-generated for
*                 GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(BKPREGISTERS_HPP)
#define BKPREGISTERS_HPP

#include "bkpfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct BKP
{
  struct BKPDATA0Base {} ;

  struct DATA0 : public RegisterBase<0x40006C04, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA0_DATA_Values<BKP::DATA0, 0, 16, ReadWriteMode, BKPDATA0Base> ;
    using FieldValues = BKP_DATA0_DATA_Values<BKP::DATA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA0Pack  = Register<0x40006C04, 16, ReadWriteMode, BKPDATA0Base, T...> ;

  struct BKPDATA1Base {} ;

  struct DATA1 : public RegisterBase<0x40006C08, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA1_DATA_Values<BKP::DATA1, 0, 16, ReadWriteMode, BKPDATA1Base> ;
    using FieldValues = BKP_DATA1_DATA_Values<BKP::DATA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA1Pack  = Register<0x40006C08, 16, ReadWriteMode, BKPDATA1Base, T...> ;

  struct BKPDATA2Base {} ;

  struct DATA2 : public RegisterBase<0x40006C0C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA2_DATA_Values<BKP::DATA2, 0, 16, ReadWriteMode, BKPDATA2Base> ;
    using FieldValues = BKP_DATA2_DATA_Values<BKP::DATA2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA2Pack  = Register<0x40006C0C, 16, ReadWriteMode, BKPDATA2Base, T...> ;

  struct BKPDATA3Base {} ;

  struct DATA3 : public RegisterBase<0x40006C10, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA3_DATA_Values<BKP::DATA3, 0, 16, ReadWriteMode, BKPDATA3Base> ;
    using FieldValues = BKP_DATA3_DATA_Values<BKP::DATA3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA3Pack  = Register<0x40006C10, 16, ReadWriteMode, BKPDATA3Base, T...> ;

  struct BKPDATA4Base {} ;

  struct DATA4 : public RegisterBase<0x40006C14, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA4_DATA_Values<BKP::DATA4, 0, 16, ReadWriteMode, BKPDATA4Base> ;
    using FieldValues = BKP_DATA4_DATA_Values<BKP::DATA4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA4Pack  = Register<0x40006C14, 16, ReadWriteMode, BKPDATA4Base, T...> ;

  struct BKPDATA5Base {} ;

  struct DATA5 : public RegisterBase<0x40006C18, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA5_DATA_Values<BKP::DATA5, 0, 16, ReadWriteMode, BKPDATA5Base> ;
    using FieldValues = BKP_DATA5_DATA_Values<BKP::DATA5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA5Pack  = Register<0x40006C18, 16, ReadWriteMode, BKPDATA5Base, T...> ;

  struct BKPDATA6Base {} ;

  struct DATA6 : public RegisterBase<0x40006C1C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA6_DATA_Values<BKP::DATA6, 0, 16, ReadWriteMode, BKPDATA6Base> ;
    using FieldValues = BKP_DATA6_DATA_Values<BKP::DATA6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA6Pack  = Register<0x40006C1C, 16, ReadWriteMode, BKPDATA6Base, T...> ;

  struct BKPDATA7Base {} ;

  struct DATA7 : public RegisterBase<0x40006C20, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA7_DATA_Values<BKP::DATA7, 0, 16, ReadWriteMode, BKPDATA7Base> ;
    using FieldValues = BKP_DATA7_DATA_Values<BKP::DATA7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA7Pack  = Register<0x40006C20, 16, ReadWriteMode, BKPDATA7Base, T...> ;

  struct BKPDATA8Base {} ;

  struct DATA8 : public RegisterBase<0x40006C24, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA8_DATA_Values<BKP::DATA8, 0, 16, ReadWriteMode, BKPDATA8Base> ;
    using FieldValues = BKP_DATA8_DATA_Values<BKP::DATA8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA8Pack  = Register<0x40006C24, 16, ReadWriteMode, BKPDATA8Base, T...> ;

  struct BKPDATA9Base {} ;

  struct DATA9 : public RegisterBase<0x40006C28, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA9_DATA_Values<BKP::DATA9, 0, 16, ReadWriteMode, BKPDATA9Base> ;
    using FieldValues = BKP_DATA9_DATA_Values<BKP::DATA9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA9Pack  = Register<0x40006C28, 16, ReadWriteMode, BKPDATA9Base, T...> ;

  struct BKPDATA10Base {} ;

  struct DATA10 : public RegisterBase<0x40006C40, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA10_DATA_Values<BKP::DATA10, 0, 16, ReadWriteMode, BKPDATA10Base> ;
    using FieldValues = BKP_DATA10_DATA_Values<BKP::DATA10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA10Pack  = Register<0x40006C40, 16, ReadWriteMode, BKPDATA10Base, T...> ;

  struct BKPDATA11Base {} ;

  struct DATA11 : public RegisterBase<0x40006C44, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA11_DATA_Values<BKP::DATA11, 0, 16, ReadWriteMode, BKPDATA11Base> ;
    using FieldValues = BKP_DATA11_DATA_Values<BKP::DATA11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA11Pack  = Register<0x40006C44, 16, ReadWriteMode, BKPDATA11Base, T...> ;

  struct BKPDATA12Base {} ;

  struct DATA12 : public RegisterBase<0x40006C48, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA12_DATA_Values<BKP::DATA12, 0, 16, ReadWriteMode, BKPDATA12Base> ;
    using FieldValues = BKP_DATA12_DATA_Values<BKP::DATA12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA12Pack  = Register<0x40006C48, 16, ReadWriteMode, BKPDATA12Base, T...> ;

  struct BKPDATA13Base {} ;

  struct DATA13 : public RegisterBase<0x40006C4C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA13_DATA_Values<BKP::DATA13, 0, 16, ReadWriteMode, BKPDATA13Base> ;
    using FieldValues = BKP_DATA13_DATA_Values<BKP::DATA13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA13Pack  = Register<0x40006C4C, 16, ReadWriteMode, BKPDATA13Base, T...> ;

  struct BKPDATA14Base {} ;

  struct DATA14 : public RegisterBase<0x40006C50, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA14_DATA_Values<BKP::DATA14, 0, 16, ReadWriteMode, BKPDATA14Base> ;
    using FieldValues = BKP_DATA14_DATA_Values<BKP::DATA14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA14Pack  = Register<0x40006C50, 16, ReadWriteMode, BKPDATA14Base, T...> ;

  struct BKPDATA15Base {} ;

  struct DATA15 : public RegisterBase<0x40006C54, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA15_DATA_Values<BKP::DATA15, 0, 16, ReadWriteMode, BKPDATA15Base> ;
    using FieldValues = BKP_DATA15_DATA_Values<BKP::DATA15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA15Pack  = Register<0x40006C54, 16, ReadWriteMode, BKPDATA15Base, T...> ;

  struct BKPDATA16Base {} ;

  struct DATA16 : public RegisterBase<0x40006C58, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA16_DATA_Values<BKP::DATA16, 0, 16, ReadWriteMode, BKPDATA16Base> ;
    using FieldValues = BKP_DATA16_DATA_Values<BKP::DATA16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA16Pack  = Register<0x40006C58, 16, ReadWriteMode, BKPDATA16Base, T...> ;

  struct BKPDATA17Base {} ;

  struct DATA17 : public RegisterBase<0x40006C5C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA17_DATA_Values<BKP::DATA17, 0, 16, ReadWriteMode, BKPDATA17Base> ;
    using FieldValues = BKP_DATA17_DATA_Values<BKP::DATA17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA17Pack  = Register<0x40006C5C, 16, ReadWriteMode, BKPDATA17Base, T...> ;

  struct BKPDATA18Base {} ;

  struct DATA18 : public RegisterBase<0x40006C60, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA18_DATA_Values<BKP::DATA18, 0, 16, ReadWriteMode, BKPDATA18Base> ;
    using FieldValues = BKP_DATA18_DATA_Values<BKP::DATA18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA18Pack  = Register<0x40006C60, 16, ReadWriteMode, BKPDATA18Base, T...> ;

  struct BKPDATA19Base {} ;

  struct DATA19 : public RegisterBase<0x40006C64, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA19_DATA_Values<BKP::DATA19, 0, 16, ReadWriteMode, BKPDATA19Base> ;
    using FieldValues = BKP_DATA19_DATA_Values<BKP::DATA19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA19Pack  = Register<0x40006C64, 16, ReadWriteMode, BKPDATA19Base, T...> ;

  struct BKPDATA20Base {} ;

  struct DATA20 : public RegisterBase<0x40006C68, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA20_DATA_Values<BKP::DATA20, 0, 16, ReadWriteMode, BKPDATA20Base> ;
    using FieldValues = BKP_DATA20_DATA_Values<BKP::DATA20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA20Pack  = Register<0x40006C68, 16, ReadWriteMode, BKPDATA20Base, T...> ;

  struct BKPDATA21Base {} ;

  struct DATA21 : public RegisterBase<0x40006C6C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA21_DATA_Values<BKP::DATA21, 0, 16, ReadWriteMode, BKPDATA21Base> ;
    using FieldValues = BKP_DATA21_DATA_Values<BKP::DATA21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA21Pack  = Register<0x40006C6C, 16, ReadWriteMode, BKPDATA21Base, T...> ;

  struct BKPDATA22Base {} ;

  struct DATA22 : public RegisterBase<0x40006C70, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA22_DATA_Values<BKP::DATA22, 0, 16, ReadWriteMode, BKPDATA22Base> ;
    using FieldValues = BKP_DATA22_DATA_Values<BKP::DATA22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA22Pack  = Register<0x40006C70, 16, ReadWriteMode, BKPDATA22Base, T...> ;

  struct BKPDATA23Base {} ;

  struct DATA23 : public RegisterBase<0x40006C74, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA23_DATA_Values<BKP::DATA23, 0, 16, ReadWriteMode, BKPDATA23Base> ;
    using FieldValues = BKP_DATA23_DATA_Values<BKP::DATA23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA23Pack  = Register<0x40006C74, 16, ReadWriteMode, BKPDATA23Base, T...> ;

  struct BKPDATA24Base {} ;

  struct DATA24 : public RegisterBase<0x40006C78, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA24_DATA_Values<BKP::DATA24, 0, 16, ReadWriteMode, BKPDATA24Base> ;
    using FieldValues = BKP_DATA24_DATA_Values<BKP::DATA24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA24Pack  = Register<0x40006C78, 16, ReadWriteMode, BKPDATA24Base, T...> ;

  struct BKPDATA25Base {} ;

  struct DATA25 : public RegisterBase<0x40006C7C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA25_DATA_Values<BKP::DATA25, 0, 16, ReadWriteMode, BKPDATA25Base> ;
    using FieldValues = BKP_DATA25_DATA_Values<BKP::DATA25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA25Pack  = Register<0x40006C7C, 16, ReadWriteMode, BKPDATA25Base, T...> ;

  struct BKPDATA26Base {} ;

  struct DATA26 : public RegisterBase<0x40006C80, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA26_DATA_Values<BKP::DATA26, 0, 16, ReadWriteMode, BKPDATA26Base> ;
    using FieldValues = BKP_DATA26_DATA_Values<BKP::DATA26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA26Pack  = Register<0x40006C80, 16, ReadWriteMode, BKPDATA26Base, T...> ;

  struct BKPDATA27Base {} ;

  struct DATA27 : public RegisterBase<0x40006C84, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA27_DATA_Values<BKP::DATA27, 0, 16, ReadWriteMode, BKPDATA27Base> ;
    using FieldValues = BKP_DATA27_DATA_Values<BKP::DATA27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA27Pack  = Register<0x40006C84, 16, ReadWriteMode, BKPDATA27Base, T...> ;

  struct BKPDATA28Base {} ;

  struct DATA28 : public RegisterBase<0x40006C88, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA28_DATA_Values<BKP::DATA28, 0, 16, ReadWriteMode, BKPDATA28Base> ;
    using FieldValues = BKP_DATA28_DATA_Values<BKP::DATA28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA28Pack  = Register<0x40006C88, 16, ReadWriteMode, BKPDATA28Base, T...> ;

  struct BKPDATA29Base {} ;

  struct DATA29 : public RegisterBase<0x40006C8C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA29_DATA_Values<BKP::DATA29, 0, 16, ReadWriteMode, BKPDATA29Base> ;
    using FieldValues = BKP_DATA29_DATA_Values<BKP::DATA29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA29Pack  = Register<0x40006C8C, 16, ReadWriteMode, BKPDATA29Base, T...> ;

  struct BKPDATA30Base {} ;

  struct DATA30 : public RegisterBase<0x40006C90, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA30_DATA_Values<BKP::DATA30, 0, 16, ReadWriteMode, BKPDATA30Base> ;
    using FieldValues = BKP_DATA30_DATA_Values<BKP::DATA30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA30Pack  = Register<0x40006C90, 16, ReadWriteMode, BKPDATA30Base, T...> ;

  struct BKPDATA31Base {} ;

  struct DATA31 : public RegisterBase<0x40006C94, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA31_DATA_Values<BKP::DATA31, 0, 16, ReadWriteMode, BKPDATA31Base> ;
    using FieldValues = BKP_DATA31_DATA_Values<BKP::DATA31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA31Pack  = Register<0x40006C94, 16, ReadWriteMode, BKPDATA31Base, T...> ;

  struct BKPDATA32Base {} ;

  struct DATA32 : public RegisterBase<0x40006C98, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA32_DATA_Values<BKP::DATA32, 0, 16, ReadWriteMode, BKPDATA32Base> ;
    using FieldValues = BKP_DATA32_DATA_Values<BKP::DATA32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA32Pack  = Register<0x40006C98, 16, ReadWriteMode, BKPDATA32Base, T...> ;

  struct BKPDATA33Base {} ;

  struct DATA33 : public RegisterBase<0x40006C9C, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA33_DATA_Values<BKP::DATA33, 0, 16, ReadWriteMode, BKPDATA33Base> ;
    using FieldValues = BKP_DATA33_DATA_Values<BKP::DATA33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA33Pack  = Register<0x40006C9C, 16, ReadWriteMode, BKPDATA33Base, T...> ;

  struct BKPDATA34Base {} ;

  struct DATA34 : public RegisterBase<0x40006CA0, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA34_DATA_Values<BKP::DATA34, 0, 16, ReadWriteMode, BKPDATA34Base> ;
    using FieldValues = BKP_DATA34_DATA_Values<BKP::DATA34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA34Pack  = Register<0x40006CA0, 16, ReadWriteMode, BKPDATA34Base, T...> ;

  struct BKPDATA35Base {} ;

  struct DATA35 : public RegisterBase<0x40006CA4, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA35_DATA_Values<BKP::DATA35, 0, 16, ReadWriteMode, BKPDATA35Base> ;
    using FieldValues = BKP_DATA35_DATA_Values<BKP::DATA35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA35Pack  = Register<0x40006CA4, 16, ReadWriteMode, BKPDATA35Base, T...> ;

  struct BKPDATA36Base {} ;

  struct DATA36 : public RegisterBase<0x40006CA8, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA36_DATA_Values<BKP::DATA36, 0, 16, ReadWriteMode, BKPDATA36Base> ;
    using FieldValues = BKP_DATA36_DATA_Values<BKP::DATA36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA36Pack  = Register<0x40006CA8, 16, ReadWriteMode, BKPDATA36Base, T...> ;

  struct BKPDATA37Base {} ;

  struct DATA37 : public RegisterBase<0x40006CAC, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA37_DATA_Values<BKP::DATA37, 0, 16, ReadWriteMode, BKPDATA37Base> ;
    using FieldValues = BKP_DATA37_DATA_Values<BKP::DATA37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA37Pack  = Register<0x40006CAC, 16, ReadWriteMode, BKPDATA37Base, T...> ;

  struct BKPDATA38Base {} ;

  struct DATA38 : public RegisterBase<0x40006CB0, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA38_DATA_Values<BKP::DATA38, 0, 16, ReadWriteMode, BKPDATA38Base> ;
    using FieldValues = BKP_DATA38_DATA_Values<BKP::DATA38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA38Pack  = Register<0x40006CB0, 16, ReadWriteMode, BKPDATA38Base, T...> ;

  struct BKPDATA39Base {} ;

  struct DATA39 : public RegisterBase<0x40006CB4, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA39_DATA_Values<BKP::DATA39, 0, 16, ReadWriteMode, BKPDATA39Base> ;
    using FieldValues = BKP_DATA39_DATA_Values<BKP::DATA39, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA39Pack  = Register<0x40006CB4, 16, ReadWriteMode, BKPDATA39Base, T...> ;

  struct BKPDATA40Base {} ;

  struct DATA40 : public RegisterBase<0x40006CB8, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA40_DATA_Values<BKP::DATA40, 0, 16, ReadWriteMode, BKPDATA40Base> ;
    using FieldValues = BKP_DATA40_DATA_Values<BKP::DATA40, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA40Pack  = Register<0x40006CB8, 16, ReadWriteMode, BKPDATA40Base, T...> ;

  struct BKPDATA41Base {} ;

  struct DATA41 : public RegisterBase<0x40006CBC, 16, ReadWriteMode>
  {
    using DATA = BKP_DATA41_DATA_Values<BKP::DATA41, 0, 16, ReadWriteMode, BKPDATA41Base> ;
    using FieldValues = BKP_DATA41_DATA_Values<BKP::DATA41, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATA41Pack  = Register<0x40006CBC, 16, ReadWriteMode, BKPDATA41Base, T...> ;

  struct BKPOCTLBase {} ;

  struct OCTL : public RegisterBase<0x40006C2C, 16, ReadWriteMode>
  {
    using ROSEL = BKP_OCTL_ROSEL_Values<BKP::OCTL, 9, 1, ReadWriteMode, BKPOCTLBase> ;
    using ASOEN = BKP_OCTL_ASOEN_Values<BKP::OCTL, 8, 1, ReadWriteMode, BKPOCTLBase> ;
    using COEN = BKP_OCTL_COEN_Values<BKP::OCTL, 7, 1, ReadWriteMode, BKPOCTLBase> ;
    using RCCV = BKP_OCTL_RCCV_Values<BKP::OCTL, 0, 7, ReadWriteMode, BKPOCTLBase> ;
    using FieldValues = BKP_OCTL_RCCV_Values<BKP::OCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCTLPack  = Register<0x40006C2C, 16, ReadWriteMode, BKPOCTLBase, T...> ;

  struct BKPTPCTLBase {} ;

  struct TPCTL : public RegisterBase<0x40006C30, 16, ReadWriteMode>
  {
    using TPAL = BKP_TPCTL_TPAL_Values<BKP::TPCTL, 1, 1, ReadWriteMode, BKPTPCTLBase> ;
    using TPEN = BKP_TPCTL_TPEN_Values<BKP::TPCTL, 0, 1, ReadWriteMode, BKPTPCTLBase> ;
    using FieldValues = BKP_TPCTL_TPEN_Values<BKP::TPCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TPCTLPack  = Register<0x40006C30, 16, ReadWriteMode, BKPTPCTLBase, T...> ;

  struct BKPTPCSBase {} ;

  struct TPCS : public RegisterBase<0x40006C34, 16, ReadWriteMode>
  {
    using TIF = BKP_TPCS_TIF_Values<BKP::TPCS, 9, 1, ReadWriteMode, BKPTPCSBase> ;
    using TEF = BKP_TPCS_TEF_Values<BKP::TPCS, 8, 1, ReadWriteMode, BKPTPCSBase> ;
    using TPIE = BKP_TPCS_TPIE_Values<BKP::TPCS, 2, 1, ReadWriteMode, BKPTPCSBase> ;
    using TIR = BKP_TPCS_TIR_Values<BKP::TPCS, 1, 1, ReadWriteMode, BKPTPCSBase> ;
    using TER = BKP_TPCS_TER_Values<BKP::TPCS, 0, 1, ReadWriteMode, BKPTPCSBase> ;
    using FieldValues = BKP_TPCS_TER_Values<BKP::TPCS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TPCSPack  = Register<0x40006C34, 16, ReadWriteMode, BKPTPCSBase, T...> ;

} ;

#endif //#if !defined(BKPREGISTERS_HPP)
