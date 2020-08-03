/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for GD32VF103 device.
*
*
*******************************************************************************/

#if !defined(EXTIREGISTERS_HPP)
#define EXTIREGISTERS_HPP

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIINTENBase {} ;

  struct INTEN : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using INTEN0 = EXTI_INTEN_INTEN0_Values<EXTI::INTEN, 0, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN1 = EXTI_INTEN_INTEN1_Values<EXTI::INTEN, 1, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN2 = EXTI_INTEN_INTEN2_Values<EXTI::INTEN, 2, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN3 = EXTI_INTEN_INTEN3_Values<EXTI::INTEN, 3, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN4 = EXTI_INTEN_INTEN4_Values<EXTI::INTEN, 4, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN5 = EXTI_INTEN_INTEN5_Values<EXTI::INTEN, 5, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN6 = EXTI_INTEN_INTEN6_Values<EXTI::INTEN, 6, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN7 = EXTI_INTEN_INTEN7_Values<EXTI::INTEN, 7, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN8 = EXTI_INTEN_INTEN8_Values<EXTI::INTEN, 8, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN9 = EXTI_INTEN_INTEN9_Values<EXTI::INTEN, 9, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN10 = EXTI_INTEN_INTEN10_Values<EXTI::INTEN, 10, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN11 = EXTI_INTEN_INTEN11_Values<EXTI::INTEN, 11, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN12 = EXTI_INTEN_INTEN12_Values<EXTI::INTEN, 12, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN13 = EXTI_INTEN_INTEN13_Values<EXTI::INTEN, 13, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN14 = EXTI_INTEN_INTEN14_Values<EXTI::INTEN, 14, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN15 = EXTI_INTEN_INTEN15_Values<EXTI::INTEN, 15, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN16 = EXTI_INTEN_INTEN16_Values<EXTI::INTEN, 16, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN17 = EXTI_INTEN_INTEN17_Values<EXTI::INTEN, 17, 1, ReadWriteMode, EXTIINTENBase> ;
    using INTEN18 = EXTI_INTEN_INTEN18_Values<EXTI::INTEN, 18, 1, ReadWriteMode, EXTIINTENBase> ;
    using FieldValues = EXTI_INTEN_INTEN18_Values<EXTI::INTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using INTENPack  = Register<0x40010400, 32, ReadWriteMode, EXTIINTENBase, T...> ;

  struct EXTIEVENBase {} ;

  struct EVEN : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using EVEN0 = EXTI_EVEN_EVEN0_Values<EXTI::EVEN, 0, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN1 = EXTI_EVEN_EVEN1_Values<EXTI::EVEN, 1, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN2 = EXTI_EVEN_EVEN2_Values<EXTI::EVEN, 2, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN3 = EXTI_EVEN_EVEN3_Values<EXTI::EVEN, 3, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN4 = EXTI_EVEN_EVEN4_Values<EXTI::EVEN, 4, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN5 = EXTI_EVEN_EVEN5_Values<EXTI::EVEN, 5, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN6 = EXTI_EVEN_EVEN6_Values<EXTI::EVEN, 6, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN7 = EXTI_EVEN_EVEN7_Values<EXTI::EVEN, 7, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN8 = EXTI_EVEN_EVEN8_Values<EXTI::EVEN, 8, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN9 = EXTI_EVEN_EVEN9_Values<EXTI::EVEN, 9, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN10 = EXTI_EVEN_EVEN10_Values<EXTI::EVEN, 10, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN11 = EXTI_EVEN_EVEN11_Values<EXTI::EVEN, 11, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN12 = EXTI_EVEN_EVEN12_Values<EXTI::EVEN, 12, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN13 = EXTI_EVEN_EVEN13_Values<EXTI::EVEN, 13, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN14 = EXTI_EVEN_EVEN14_Values<EXTI::EVEN, 14, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN15 = EXTI_EVEN_EVEN15_Values<EXTI::EVEN, 15, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN16 = EXTI_EVEN_EVEN16_Values<EXTI::EVEN, 16, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN17 = EXTI_EVEN_EVEN17_Values<EXTI::EVEN, 17, 1, ReadWriteMode, EXTIEVENBase> ;
    using EVEN18 = EXTI_EVEN_EVEN18_Values<EXTI::EVEN, 18, 1, ReadWriteMode, EXTIEVENBase> ;
    using FieldValues = EXTI_EVEN_EVEN18_Values<EXTI::EVEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EVENPack  = Register<0x40010404, 32, ReadWriteMode, EXTIEVENBase, T...> ;

  struct EXTIRTENBase {} ;

  struct RTEN : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using RTEN0 = EXTI_RTEN_RTEN0_Values<EXTI::RTEN, 0, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN1 = EXTI_RTEN_RTEN1_Values<EXTI::RTEN, 1, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN2 = EXTI_RTEN_RTEN2_Values<EXTI::RTEN, 2, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN3 = EXTI_RTEN_RTEN3_Values<EXTI::RTEN, 3, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN4 = EXTI_RTEN_RTEN4_Values<EXTI::RTEN, 4, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN5 = EXTI_RTEN_RTEN5_Values<EXTI::RTEN, 5, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN6 = EXTI_RTEN_RTEN6_Values<EXTI::RTEN, 6, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN7 = EXTI_RTEN_RTEN7_Values<EXTI::RTEN, 7, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN8 = EXTI_RTEN_RTEN8_Values<EXTI::RTEN, 8, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN9 = EXTI_RTEN_RTEN9_Values<EXTI::RTEN, 9, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN10 = EXTI_RTEN_RTEN10_Values<EXTI::RTEN, 10, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN11 = EXTI_RTEN_RTEN11_Values<EXTI::RTEN, 11, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN12 = EXTI_RTEN_RTEN12_Values<EXTI::RTEN, 12, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN13 = EXTI_RTEN_RTEN13_Values<EXTI::RTEN, 13, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN14 = EXTI_RTEN_RTEN14_Values<EXTI::RTEN, 14, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN15 = EXTI_RTEN_RTEN15_Values<EXTI::RTEN, 15, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN16 = EXTI_RTEN_RTEN16_Values<EXTI::RTEN, 16, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN17 = EXTI_RTEN_RTEN17_Values<EXTI::RTEN, 17, 1, ReadWriteMode, EXTIRTENBase> ;
    using RTEN18 = EXTI_RTEN_RTEN18_Values<EXTI::RTEN, 18, 1, ReadWriteMode, EXTIRTENBase> ;
    using FieldValues = EXTI_RTEN_RTEN18_Values<EXTI::RTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTENPack  = Register<0x40010408, 32, ReadWriteMode, EXTIRTENBase, T...> ;

  struct EXTIFTENBase {} ;

  struct FTEN : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using FTEN0 = EXTI_FTEN_FTEN0_Values<EXTI::FTEN, 0, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN1 = EXTI_FTEN_FTEN1_Values<EXTI::FTEN, 1, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN2 = EXTI_FTEN_FTEN2_Values<EXTI::FTEN, 2, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN3 = EXTI_FTEN_FTEN3_Values<EXTI::FTEN, 3, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN4 = EXTI_FTEN_FTEN4_Values<EXTI::FTEN, 4, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN5 = EXTI_FTEN_FTEN5_Values<EXTI::FTEN, 5, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN6 = EXTI_FTEN_FTEN6_Values<EXTI::FTEN, 6, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN7 = EXTI_FTEN_FTEN7_Values<EXTI::FTEN, 7, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN8 = EXTI_FTEN_FTEN8_Values<EXTI::FTEN, 8, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN9 = EXTI_FTEN_FTEN9_Values<EXTI::FTEN, 9, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN10 = EXTI_FTEN_FTEN10_Values<EXTI::FTEN, 10, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN11 = EXTI_FTEN_FTEN11_Values<EXTI::FTEN, 11, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN12 = EXTI_FTEN_FTEN12_Values<EXTI::FTEN, 12, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN13 = EXTI_FTEN_FTEN13_Values<EXTI::FTEN, 13, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN14 = EXTI_FTEN_FTEN14_Values<EXTI::FTEN, 14, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN15 = EXTI_FTEN_FTEN15_Values<EXTI::FTEN, 15, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN16 = EXTI_FTEN_FTEN16_Values<EXTI::FTEN, 16, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN17 = EXTI_FTEN_FTEN17_Values<EXTI::FTEN, 17, 1, ReadWriteMode, EXTIFTENBase> ;
    using FTEN18 = EXTI_FTEN_FTEN18_Values<EXTI::FTEN, 18, 1, ReadWriteMode, EXTIFTENBase> ;
    using FieldValues = EXTI_FTEN_FTEN18_Values<EXTI::FTEN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTENPack  = Register<0x4001040C, 32, ReadWriteMode, EXTIFTENBase, T...> ;

  struct EXTISWIEVBase {} ;

  struct SWIEV : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using SWIEV0 = EXTI_SWIEV_SWIEV0_Values<EXTI::SWIEV, 0, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV1 = EXTI_SWIEV_SWIEV1_Values<EXTI::SWIEV, 1, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV2 = EXTI_SWIEV_SWIEV2_Values<EXTI::SWIEV, 2, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV3 = EXTI_SWIEV_SWIEV3_Values<EXTI::SWIEV, 3, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV4 = EXTI_SWIEV_SWIEV4_Values<EXTI::SWIEV, 4, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV5 = EXTI_SWIEV_SWIEV5_Values<EXTI::SWIEV, 5, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV6 = EXTI_SWIEV_SWIEV6_Values<EXTI::SWIEV, 6, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV7 = EXTI_SWIEV_SWIEV7_Values<EXTI::SWIEV, 7, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV8 = EXTI_SWIEV_SWIEV8_Values<EXTI::SWIEV, 8, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV9 = EXTI_SWIEV_SWIEV9_Values<EXTI::SWIEV, 9, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV10 = EXTI_SWIEV_SWIEV10_Values<EXTI::SWIEV, 10, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV11 = EXTI_SWIEV_SWIEV11_Values<EXTI::SWIEV, 11, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV12 = EXTI_SWIEV_SWIEV12_Values<EXTI::SWIEV, 12, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV13 = EXTI_SWIEV_SWIEV13_Values<EXTI::SWIEV, 13, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV14 = EXTI_SWIEV_SWIEV14_Values<EXTI::SWIEV, 14, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV15 = EXTI_SWIEV_SWIEV15_Values<EXTI::SWIEV, 15, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV16 = EXTI_SWIEV_SWIEV16_Values<EXTI::SWIEV, 16, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV17 = EXTI_SWIEV_SWIEV17_Values<EXTI::SWIEV, 17, 1, ReadWriteMode, EXTISWIEVBase> ;
    using SWIEV18 = EXTI_SWIEV_SWIEV18_Values<EXTI::SWIEV, 18, 1, ReadWriteMode, EXTISWIEVBase> ;
    using FieldValues = EXTI_SWIEV_SWIEV18_Values<EXTI::SWIEV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIEVPack  = Register<0x40010410, 32, ReadWriteMode, EXTISWIEVBase, T...> ;

  struct EXTIPDBase {} ;

  struct PD : public RegisterBase<0x40010414, 32, ReadWriteMode>
  {
    using PD0 = EXTI_PD_PD0_Values<EXTI::PD, 0, 1, ReadWriteMode, EXTIPDBase> ;
    using PD1 = EXTI_PD_PD1_Values<EXTI::PD, 1, 1, ReadWriteMode, EXTIPDBase> ;
    using PD2 = EXTI_PD_PD2_Values<EXTI::PD, 2, 1, ReadWriteMode, EXTIPDBase> ;
    using PD3 = EXTI_PD_PD3_Values<EXTI::PD, 3, 1, ReadWriteMode, EXTIPDBase> ;
    using PD4 = EXTI_PD_PD4_Values<EXTI::PD, 4, 1, ReadWriteMode, EXTIPDBase> ;
    using PD5 = EXTI_PD_PD5_Values<EXTI::PD, 5, 1, ReadWriteMode, EXTIPDBase> ;
    using PD6 = EXTI_PD_PD6_Values<EXTI::PD, 6, 1, ReadWriteMode, EXTIPDBase> ;
    using PD7 = EXTI_PD_PD7_Values<EXTI::PD, 7, 1, ReadWriteMode, EXTIPDBase> ;
    using PD8 = EXTI_PD_PD8_Values<EXTI::PD, 8, 1, ReadWriteMode, EXTIPDBase> ;
    using PD9 = EXTI_PD_PD9_Values<EXTI::PD, 9, 1, ReadWriteMode, EXTIPDBase> ;
    using PD10 = EXTI_PD_PD10_Values<EXTI::PD, 10, 1, ReadWriteMode, EXTIPDBase> ;
    using PD11 = EXTI_PD_PD11_Values<EXTI::PD, 11, 1, ReadWriteMode, EXTIPDBase> ;
    using PD12 = EXTI_PD_PD12_Values<EXTI::PD, 12, 1, ReadWriteMode, EXTIPDBase> ;
    using PD13 = EXTI_PD_PD13_Values<EXTI::PD, 13, 1, ReadWriteMode, EXTIPDBase> ;
    using PD14 = EXTI_PD_PD14_Values<EXTI::PD, 14, 1, ReadWriteMode, EXTIPDBase> ;
    using PD15 = EXTI_PD_PD15_Values<EXTI::PD, 15, 1, ReadWriteMode, EXTIPDBase> ;
    using PD16 = EXTI_PD_PD16_Values<EXTI::PD, 16, 1, ReadWriteMode, EXTIPDBase> ;
    using PD17 = EXTI_PD_PD17_Values<EXTI::PD, 17, 1, ReadWriteMode, EXTIPDBase> ;
    using PD18 = EXTI_PD_PD18_Values<EXTI::PD, 18, 1, ReadWriteMode, EXTIPDBase> ;
    using FieldValues = EXTI_PD_PD18_Values<EXTI::PD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDPack  = Register<0x40010414, 32, ReadWriteMode, EXTIPDBase, T...> ;

} ;

#endif //#if !defined(EXTIREGISTERS_HPP)
