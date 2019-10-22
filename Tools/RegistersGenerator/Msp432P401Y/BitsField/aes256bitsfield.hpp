/*******************************************************************************
* Filename      : aes256bitsfield.hpp
*
* Details       : Enumerations related with AES256 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(AES256ENUMS_HPP)
#define AES256ENUMS_HPP

#include "fieldvalue.hpp"     //for BitsField 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESOPx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESOPx_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESOPx_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using AESOPx_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using AESOPx_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESKLx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESKLx_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESKLx_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using AESKLx_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESCMx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESCMx_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESCMx_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
  using AESCMx_2 = BitsField<Reg, offset, size, AccessMode, BaseType, 2U> ;
  using AESCMx_3 = BitsField<Reg, offset, size, AccessMode, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESSWRST_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESSWRST_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESRDYIFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESRDYIFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESERRFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESERRFG_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESERRFG_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESRDYIE_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESRDYIE_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESCMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESCMEN_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESCMEN_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESACTL_AESBLKCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESBUSY_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESBUSY_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESKEYWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESKEYWR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESKEYWR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESDINWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESDINWR_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESDINWR_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESDOUTRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESDOUTRD_0 = BitsField<Reg, offset, size, AccessMode, BaseType, 0U> ;
  using AESDOUTRD_1 = BitsField<Reg, offset, size, AccessMode, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESKEYCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESDINCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESASTAT_AESDOUTCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESAKEY_AESKEYx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESADIN_AESDINx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESADOUT_AESDOUTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESAXDIN_AESXDINx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES_AESAXIN_AESXINx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(AES256ENUMS_HPP)
