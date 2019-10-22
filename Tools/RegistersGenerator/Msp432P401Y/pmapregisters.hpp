/*******************************************************************************
* Filename      : pmapregisters.hpp
*
* Details       : PMAP. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(PMAPREGISTERS_HPP)
#define PMAPREGISTERS_HPP

#include "pmapbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PMAP
{
  struct PMAPPMAPKEYIDBase {} ;

  struct PMAPKEYID : public RegisterBase<0x40005000, 16, ReadWriteMode>
  {
    using PMAPKEY = PMAP_PMAPKEYID_PMAPKEY_Values<PMAP::PMAPKEYID, 0, 16, ReadWriteMode, PMAPPMAPKEYIDBase> ;
  } ;

  template<typename... T> 
  using PMAPKEYIDPack  = Register<0x40005000, 16, ReadWriteMode, PMAPPMAPKEYIDBase, T...> ;

  struct PMAPPMAPCTLBase {} ;

  struct PMAPCTL : public RegisterBase<0x40005002, 16, ReadWriteMode>
  {
    using PMAPLOCKED = PMAP_PMAPCTL_PMAPLOCKED_Values<PMAP::PMAPCTL, 0, 1, ReadMode, PMAPPMAPCTLBase> ;
    using PMAPRECFG = PMAP_PMAPCTL_PMAPRECFG_Values<PMAP::PMAPCTL, 1, 1, ReadWriteMode, PMAPPMAPCTLBase> ;
  } ;

  template<typename... T> 
  using PMAPCTLPack  = Register<0x40005002, 16, ReadWriteMode, PMAPPMAPCTLBase, T...> ;

  struct PMAPP1MAP01Base {} ;

  struct P1MAP01 : public RegisterBase<0x40005008, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P1MAP01, 0, 16, ReadWriteMode, PMAPP1MAP01Base> ;
  } ;

  template<typename... T> 
  using P1MAP01Pack  = Register<0x40005008, 16, ReadWriteMode, PMAPP1MAP01Base, T...> ;

  struct PMAPP1MAP23Base {} ;

  struct P1MAP23 : public RegisterBase<0x4000500A, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P1MAP23, 0, 16, ReadWriteMode, PMAPP1MAP23Base> ;
  } ;

  template<typename... T> 
  using P1MAP23Pack  = Register<0x4000500A, 16, ReadWriteMode, PMAPP1MAP23Base, T...> ;

  struct PMAPP1MAP45Base {} ;

  struct P1MAP45 : public RegisterBase<0x4000500C, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P1MAP45, 0, 16, ReadWriteMode, PMAPP1MAP45Base> ;
  } ;

  template<typename... T> 
  using P1MAP45Pack  = Register<0x4000500C, 16, ReadWriteMode, PMAPP1MAP45Base, T...> ;

  struct PMAPP1MAP67Base {} ;

  struct P1MAP67 : public RegisterBase<0x4000500E, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P1MAP67, 0, 16, ReadWriteMode, PMAPP1MAP67Base> ;
  } ;

  template<typename... T> 
  using P1MAP67Pack  = Register<0x4000500E, 16, ReadWriteMode, PMAPP1MAP67Base, T...> ;

  struct PMAPP2MAP01Base {} ;

  struct P2MAP01 : public RegisterBase<0x40005010, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P2MAP01, 0, 16, ReadWriteMode, PMAPP2MAP01Base> ;
  } ;

  template<typename... T> 
  using P2MAP01Pack  = Register<0x40005010, 16, ReadWriteMode, PMAPP2MAP01Base, T...> ;

  struct PMAPP2MAP23Base {} ;

  struct P2MAP23 : public RegisterBase<0x40005012, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P2MAP23, 0, 16, ReadWriteMode, PMAPP2MAP23Base> ;
  } ;

  template<typename... T> 
  using P2MAP23Pack  = Register<0x40005012, 16, ReadWriteMode, PMAPP2MAP23Base, T...> ;

  struct PMAPP2MAP45Base {} ;

  struct P2MAP45 : public RegisterBase<0x40005014, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P2MAP45, 0, 16, ReadWriteMode, PMAPP2MAP45Base> ;
  } ;

  template<typename... T> 
  using P2MAP45Pack  = Register<0x40005014, 16, ReadWriteMode, PMAPP2MAP45Base, T...> ;

  struct PMAPP2MAP67Base {} ;

  struct P2MAP67 : public RegisterBase<0x40005016, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P2MAP67, 0, 16, ReadWriteMode, PMAPP2MAP67Base> ;
  } ;

  template<typename... T> 
  using P2MAP67Pack  = Register<0x40005016, 16, ReadWriteMode, PMAPP2MAP67Base, T...> ;

  struct PMAPP3MAP01Base {} ;

  struct P3MAP01 : public RegisterBase<0x40005018, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P3MAP01, 0, 16, ReadWriteMode, PMAPP3MAP01Base> ;
  } ;

  template<typename... T> 
  using P3MAP01Pack  = Register<0x40005018, 16, ReadWriteMode, PMAPP3MAP01Base, T...> ;

  struct PMAPP3MAP23Base {} ;

  struct P3MAP23 : public RegisterBase<0x4000501A, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P3MAP23, 0, 16, ReadWriteMode, PMAPP3MAP23Base> ;
  } ;

  template<typename... T> 
  using P3MAP23Pack  = Register<0x4000501A, 16, ReadWriteMode, PMAPP3MAP23Base, T...> ;

  struct PMAPP3MAP45Base {} ;

  struct P3MAP45 : public RegisterBase<0x4000501C, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P3MAP45, 0, 16, ReadWriteMode, PMAPP3MAP45Base> ;
  } ;

  template<typename... T> 
  using P3MAP45Pack  = Register<0x4000501C, 16, ReadWriteMode, PMAPP3MAP45Base, T...> ;

  struct PMAPP3MAP67Base {} ;

  struct P3MAP67 : public RegisterBase<0x4000501E, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P3MAP67, 0, 16, ReadWriteMode, PMAPP3MAP67Base> ;
  } ;

  template<typename... T> 
  using P3MAP67Pack  = Register<0x4000501E, 16, ReadWriteMode, PMAPP3MAP67Base, T...> ;

  struct PMAPP4MAP01Base {} ;

  struct P4MAP01 : public RegisterBase<0x40005020, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P4MAP01, 0, 16, ReadWriteMode, PMAPP4MAP01Base> ;
  } ;

  template<typename... T> 
  using P4MAP01Pack  = Register<0x40005020, 16, ReadWriteMode, PMAPP4MAP01Base, T...> ;

  struct PMAPP4MAP23Base {} ;

  struct P4MAP23 : public RegisterBase<0x40005022, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P4MAP23, 0, 16, ReadWriteMode, PMAPP4MAP23Base> ;
  } ;

  template<typename... T> 
  using P4MAP23Pack  = Register<0x40005022, 16, ReadWriteMode, PMAPP4MAP23Base, T...> ;

  struct PMAPP4MAP45Base {} ;

  struct P4MAP45 : public RegisterBase<0x40005024, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P4MAP45, 0, 16, ReadWriteMode, PMAPP4MAP45Base> ;
  } ;

  template<typename... T> 
  using P4MAP45Pack  = Register<0x40005024, 16, ReadWriteMode, PMAPP4MAP45Base, T...> ;

  struct PMAPP4MAP67Base {} ;

  struct P4MAP67 : public RegisterBase<0x40005026, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P4MAP67, 0, 16, ReadWriteMode, PMAPP4MAP67Base> ;
  } ;

  template<typename... T> 
  using P4MAP67Pack  = Register<0x40005026, 16, ReadWriteMode, PMAPP4MAP67Base, T...> ;

  struct PMAPP5MAP01Base {} ;

  struct P5MAP01 : public RegisterBase<0x40005028, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P5MAP01, 0, 16, ReadWriteMode, PMAPP5MAP01Base> ;
  } ;

  template<typename... T> 
  using P5MAP01Pack  = Register<0x40005028, 16, ReadWriteMode, PMAPP5MAP01Base, T...> ;

  struct PMAPP5MAP23Base {} ;

  struct P5MAP23 : public RegisterBase<0x4000502A, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P5MAP23, 0, 16, ReadWriteMode, PMAPP5MAP23Base> ;
  } ;

  template<typename... T> 
  using P5MAP23Pack  = Register<0x4000502A, 16, ReadWriteMode, PMAPP5MAP23Base, T...> ;

  struct PMAPP5MAP45Base {} ;

  struct P5MAP45 : public RegisterBase<0x4000502C, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P5MAP45, 0, 16, ReadWriteMode, PMAPP5MAP45Base> ;
  } ;

  template<typename... T> 
  using P5MAP45Pack  = Register<0x4000502C, 16, ReadWriteMode, PMAPP5MAP45Base, T...> ;

  struct PMAPP5MAP67Base {} ;

  struct P5MAP67 : public RegisterBase<0x4000502E, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P5MAP67, 0, 16, ReadWriteMode, PMAPP5MAP67Base> ;
  } ;

  template<typename... T> 
  using P5MAP67Pack  = Register<0x4000502E, 16, ReadWriteMode, PMAPP5MAP67Base, T...> ;

  struct PMAPP6MAP01Base {} ;

  struct P6MAP01 : public RegisterBase<0x40005030, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P6MAP01, 0, 16, ReadWriteMode, PMAPP6MAP01Base> ;
  } ;

  template<typename... T> 
  using P6MAP01Pack  = Register<0x40005030, 16, ReadWriteMode, PMAPP6MAP01Base, T...> ;

  struct PMAPP6MAP23Base {} ;

  struct P6MAP23 : public RegisterBase<0x40005032, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P6MAP23, 0, 16, ReadWriteMode, PMAPP6MAP23Base> ;
  } ;

  template<typename... T> 
  using P6MAP23Pack  = Register<0x40005032, 16, ReadWriteMode, PMAPP6MAP23Base, T...> ;

  struct PMAPP6MAP45Base {} ;

  struct P6MAP45 : public RegisterBase<0x40005034, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P6MAP45, 0, 16, ReadWriteMode, PMAPP6MAP45Base> ;
  } ;

  template<typename... T> 
  using P6MAP45Pack  = Register<0x40005034, 16, ReadWriteMode, PMAPP6MAP45Base, T...> ;

  struct PMAPP6MAP67Base {} ;

  struct P6MAP67 : public RegisterBase<0x40005036, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P6MAP67, 0, 16, ReadWriteMode, PMAPP6MAP67Base> ;
  } ;

  template<typename... T> 
  using P6MAP67Pack  = Register<0x40005036, 16, ReadWriteMode, PMAPP6MAP67Base, T...> ;

  struct PMAPP7MAP01Base {} ;

  struct P7MAP01 : public RegisterBase<0x40005038, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P7MAP01, 0, 16, ReadWriteMode, PMAPP7MAP01Base> ;
  } ;

  template<typename... T> 
  using P7MAP01Pack  = Register<0x40005038, 16, ReadWriteMode, PMAPP7MAP01Base, T...> ;

  struct PMAPP7MAP23Base {} ;

  struct P7MAP23 : public RegisterBase<0x4000503A, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P7MAP23, 0, 16, ReadWriteMode, PMAPP7MAP23Base> ;
  } ;

  template<typename... T> 
  using P7MAP23Pack  = Register<0x4000503A, 16, ReadWriteMode, PMAPP7MAP23Base, T...> ;

  struct PMAPP7MAP45Base {} ;

  struct P7MAP45 : public RegisterBase<0x4000503C, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P7MAP45, 0, 16, ReadWriteMode, PMAPP7MAP45Base> ;
  } ;

  template<typename... T> 
  using P7MAP45Pack  = Register<0x4000503C, 16, ReadWriteMode, PMAPP7MAP45Base, T...> ;

  struct PMAPP7MAP67Base {} ;

  struct P7MAP67 : public RegisterBase<0x4000503E, 16, ReadWriteMode>
  {
    using PMAPx = PMAP_PMAP_PMAPx_Values<PMAP::P7MAP67, 0, 16, ReadWriteMode, PMAPP7MAP67Base> ;
  } ;

  template<typename... T> 
  using P7MAP67Pack  = Register<0x4000503E, 16, ReadWriteMode, PMAPP7MAP67Base, T...> ;

} ;

#endif //#if !defined(PMAPREGISTERS_HPP)
