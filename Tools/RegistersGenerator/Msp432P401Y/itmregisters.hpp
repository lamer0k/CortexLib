/*******************************************************************************
* Filename      : itmregisters.hpp
*
* Details       : ITM. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(ITMREGISTERS_HPP)
#define ITMREGISTERS_HPP

#include "itmbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ITM
{
  struct ITMITM_STIM0Base {} ;

  struct ITM_STIM0 : public RegisterBase<0xE0000000, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM0Pack  = Register<0xE0000000, 32, ReadWriteMode, ITMITM_STIM0Base, T...> ;

  struct ITMITM_STIM1Base {} ;

  struct ITM_STIM1 : public RegisterBase<0xE0000004, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM1Pack  = Register<0xE0000004, 32, ReadWriteMode, ITMITM_STIM1Base, T...> ;

  struct ITMITM_STIM2Base {} ;

  struct ITM_STIM2 : public RegisterBase<0xE0000008, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM2Pack  = Register<0xE0000008, 32, ReadWriteMode, ITMITM_STIM2Base, T...> ;

  struct ITMITM_STIM3Base {} ;

  struct ITM_STIM3 : public RegisterBase<0xE000000C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM3Pack  = Register<0xE000000C, 32, ReadWriteMode, ITMITM_STIM3Base, T...> ;

  struct ITMITM_STIM4Base {} ;

  struct ITM_STIM4 : public RegisterBase<0xE0000010, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM4Pack  = Register<0xE0000010, 32, ReadWriteMode, ITMITM_STIM4Base, T...> ;

  struct ITMITM_STIM5Base {} ;

  struct ITM_STIM5 : public RegisterBase<0xE0000014, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM5Pack  = Register<0xE0000014, 32, ReadWriteMode, ITMITM_STIM5Base, T...> ;

  struct ITMITM_STIM6Base {} ;

  struct ITM_STIM6 : public RegisterBase<0xE0000018, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM6Pack  = Register<0xE0000018, 32, ReadWriteMode, ITMITM_STIM6Base, T...> ;

  struct ITMITM_STIM7Base {} ;

  struct ITM_STIM7 : public RegisterBase<0xE000001C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM7Pack  = Register<0xE000001C, 32, ReadWriteMode, ITMITM_STIM7Base, T...> ;

  struct ITMITM_STIM8Base {} ;

  struct ITM_STIM8 : public RegisterBase<0xE0000020, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM8Pack  = Register<0xE0000020, 32, ReadWriteMode, ITMITM_STIM8Base, T...> ;

  struct ITMITM_STIM9Base {} ;

  struct ITM_STIM9 : public RegisterBase<0xE0000024, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM9Pack  = Register<0xE0000024, 32, ReadWriteMode, ITMITM_STIM9Base, T...> ;

  struct ITMITM_STIM10Base {} ;

  struct ITM_STIM10 : public RegisterBase<0xE0000028, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM10Pack  = Register<0xE0000028, 32, ReadWriteMode, ITMITM_STIM10Base, T...> ;

  struct ITMITM_STIM11Base {} ;

  struct ITM_STIM11 : public RegisterBase<0xE000002C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM11Pack  = Register<0xE000002C, 32, ReadWriteMode, ITMITM_STIM11Base, T...> ;

  struct ITMITM_STIM12Base {} ;

  struct ITM_STIM12 : public RegisterBase<0xE0000030, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM12Pack  = Register<0xE0000030, 32, ReadWriteMode, ITMITM_STIM12Base, T...> ;

  struct ITMITM_STIM13Base {} ;

  struct ITM_STIM13 : public RegisterBase<0xE0000034, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM13Pack  = Register<0xE0000034, 32, ReadWriteMode, ITMITM_STIM13Base, T...> ;

  struct ITMITM_STIM14Base {} ;

  struct ITM_STIM14 : public RegisterBase<0xE0000038, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM14Pack  = Register<0xE0000038, 32, ReadWriteMode, ITMITM_STIM14Base, T...> ;

  struct ITMITM_STIM15Base {} ;

  struct ITM_STIM15 : public RegisterBase<0xE000003C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM15Pack  = Register<0xE000003C, 32, ReadWriteMode, ITMITM_STIM15Base, T...> ;

  struct ITMITM_STIM16Base {} ;

  struct ITM_STIM16 : public RegisterBase<0xE0000040, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM16Pack  = Register<0xE0000040, 32, ReadWriteMode, ITMITM_STIM16Base, T...> ;

  struct ITMITM_STIM17Base {} ;

  struct ITM_STIM17 : public RegisterBase<0xE0000044, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM17Pack  = Register<0xE0000044, 32, ReadWriteMode, ITMITM_STIM17Base, T...> ;

  struct ITMITM_STIM18Base {} ;

  struct ITM_STIM18 : public RegisterBase<0xE0000048, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM18Pack  = Register<0xE0000048, 32, ReadWriteMode, ITMITM_STIM18Base, T...> ;

  struct ITMITM_STIM19Base {} ;

  struct ITM_STIM19 : public RegisterBase<0xE000004C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM19Pack  = Register<0xE000004C, 32, ReadWriteMode, ITMITM_STIM19Base, T...> ;

  struct ITMITM_STIM20Base {} ;

  struct ITM_STIM20 : public RegisterBase<0xE0000050, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM20Pack  = Register<0xE0000050, 32, ReadWriteMode, ITMITM_STIM20Base, T...> ;

  struct ITMITM_STIM21Base {} ;

  struct ITM_STIM21 : public RegisterBase<0xE0000054, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM21Pack  = Register<0xE0000054, 32, ReadWriteMode, ITMITM_STIM21Base, T...> ;

  struct ITMITM_STIM22Base {} ;

  struct ITM_STIM22 : public RegisterBase<0xE0000058, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM22Pack  = Register<0xE0000058, 32, ReadWriteMode, ITMITM_STIM22Base, T...> ;

  struct ITMITM_STIM23Base {} ;

  struct ITM_STIM23 : public RegisterBase<0xE000005C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM23Pack  = Register<0xE000005C, 32, ReadWriteMode, ITMITM_STIM23Base, T...> ;

  struct ITMITM_STIM24Base {} ;

  struct ITM_STIM24 : public RegisterBase<0xE0000060, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM24Pack  = Register<0xE0000060, 32, ReadWriteMode, ITMITM_STIM24Base, T...> ;

  struct ITMITM_STIM25Base {} ;

  struct ITM_STIM25 : public RegisterBase<0xE0000064, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM25Pack  = Register<0xE0000064, 32, ReadWriteMode, ITMITM_STIM25Base, T...> ;

  struct ITMITM_STIM26Base {} ;

  struct ITM_STIM26 : public RegisterBase<0xE0000068, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM26Pack  = Register<0xE0000068, 32, ReadWriteMode, ITMITM_STIM26Base, T...> ;

  struct ITMITM_STIM27Base {} ;

  struct ITM_STIM27 : public RegisterBase<0xE000006C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM27Pack  = Register<0xE000006C, 32, ReadWriteMode, ITMITM_STIM27Base, T...> ;

  struct ITMITM_STIM28Base {} ;

  struct ITM_STIM28 : public RegisterBase<0xE0000070, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM28Pack  = Register<0xE0000070, 32, ReadWriteMode, ITMITM_STIM28Base, T...> ;

  struct ITMITM_STIM29Base {} ;

  struct ITM_STIM29 : public RegisterBase<0xE0000074, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM29Pack  = Register<0xE0000074, 32, ReadWriteMode, ITMITM_STIM29Base, T...> ;

  struct ITMITM_STIM30Base {} ;

  struct ITM_STIM30 : public RegisterBase<0xE0000078, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM30Pack  = Register<0xE0000078, 32, ReadWriteMode, ITMITM_STIM30Base, T...> ;

  struct ITMITM_STIM31Base {} ;

  struct ITM_STIM31 : public RegisterBase<0xE000007C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ITM_STIM31Pack  = Register<0xE000007C, 32, ReadWriteMode, ITMITM_STIM31Base, T...> ;

  struct ITMITM_TERBase {} ;

  struct ITM_TER : public RegisterBase<0xE0000E00, 32, ReadWriteMode>
  {
    using STIMENA = ITM_ITM_TER_STIMENA_Values<ITM::ITM_TER, 0, 32, ReadWriteMode, ITMITM_TERBase> ;
  } ;

  template<typename... T> 
  using ITM_TERPack  = Register<0xE0000E00, 32, ReadWriteMode, ITMITM_TERBase, T...> ;

  struct ITMITM_TPRBase {} ;

  struct ITM_TPR : public RegisterBase<0xE0000E40, 32, ReadWriteMode>
  {
    using PRIVMASK = ITM_ITM_TPR_PRIVMASK_Values<ITM::ITM_TPR, 0, 4, ReadWriteMode, ITMITM_TPRBase> ;
  } ;

  template<typename... T> 
  using ITM_TPRPack  = Register<0xE0000E40, 32, ReadWriteMode, ITMITM_TPRBase, T...> ;

  struct ITMITM_TCRBase {} ;

  struct ITM_TCR : public RegisterBase<0xE0000E80, 32, ReadWriteMode>
  {
    using ITMENA = ITM_ITM_TCR_ITMENA_Values<ITM::ITM_TCR, 0, 1, ReadWriteMode, ITMITM_TCRBase> ;
    using TSENA = ITM_ITM_TCR_TSENA_Values<ITM::ITM_TCR, 1, 1, ReadWriteMode, ITMITM_TCRBase> ;
    using SYNCENA = ITM_ITM_TCR_SYNCENA_Values<ITM::ITM_TCR, 2, 1, ReadWriteMode, ITMITM_TCRBase> ;
    using DWTENA = ITM_ITM_TCR_DWTENA_Values<ITM::ITM_TCR, 3, 1, ReadWriteMode, ITMITM_TCRBase> ;
    using SWOENA = ITM_ITM_TCR_SWOENA_Values<ITM::ITM_TCR, 4, 1, ReadWriteMode, ITMITM_TCRBase> ;
    using TSPRESCALE = ITM_ITM_TCR_TSPRESCALE_Values<ITM::ITM_TCR, 8, 2, ReadWriteMode, ITMITM_TCRBase> ;
    using ATBID = ITM_ITM_TCR_ATBID_Values<ITM::ITM_TCR, 16, 7, ReadWriteMode, ITMITM_TCRBase> ;
    using BUSY = ITM_ITM_TCR_BUSY_Values<ITM::ITM_TCR, 23, 1, ReadWriteMode, ITMITM_TCRBase> ;
  } ;

  template<typename... T> 
  using ITM_TCRPack  = Register<0xE0000E80, 32, ReadWriteMode, ITMITM_TCRBase, T...> ;

  struct ITMITM_IWRBase {} ;

  struct ITM_IWR : public RegisterBase<0xE0000EF8, 32, WriteMode>
  {
    using ATVALIDM = ITM_ITM_IWR_ATVALIDM_Values<ITM::ITM_IWR, 0, 1, WriteMode, ITMITM_IWRBase> ;
  } ;

  template<typename... T> 
  using ITM_IWRPack  = Register<0xE0000EF8, 32, WriteMode, ITMITM_IWRBase, T...> ;

  struct ITMITM_IMCRBase {} ;

  struct ITM_IMCR : public RegisterBase<0xE0000F00, 32, ReadWriteMode>
  {
    using INTEGRATION = ITM_ITM_IMCR_INTEGRATION_Values<ITM::ITM_IMCR, 0, 1, ReadWriteMode, ITMITM_IMCRBase> ;
  } ;

  template<typename... T> 
  using ITM_IMCRPack  = Register<0xE0000F00, 32, ReadWriteMode, ITMITM_IMCRBase, T...> ;

  struct ITMITM_LARBase {} ;

  struct ITM_LAR : public RegisterBase<0xE0000FB0, 32, WriteMode>
  {
    using LOCK_ACCESS = ITM_ITM_LAR_LOCK_ACCESS_Values<ITM::ITM_LAR, 0, 32, WriteMode, ITMITM_LARBase> ;
  } ;

  template<typename... T> 
  using ITM_LARPack  = Register<0xE0000FB0, 32, WriteMode, ITMITM_LARBase, T...> ;

  struct ITMITM_LSRBase {} ;

  struct ITM_LSR : public RegisterBase<0xE0000FB4, 32, ReadMode>
  {
    using PRESENT = ITM_ITM_LSR_PRESENT_Values<ITM::ITM_LSR, 0, 1, ReadMode, ITMITM_LSRBase> ;
    using ACCESS = ITM_ITM_LSR_ACCESS_Values<ITM::ITM_LSR, 1, 1, ReadMode, ITMITM_LSRBase> ;
    using BYTEACC = ITM_ITM_LSR_BYTEACC_Values<ITM::ITM_LSR, 2, 1, ReadMode, ITMITM_LSRBase> ;
  } ;

  template<typename... T> 
  using ITM_LSRPack  = Register<0xE0000FB4, 32, ReadMode, ITMITM_LSRBase, T...> ;

} ;

#endif //#if !defined(ITMREGISTERS_HPP)
