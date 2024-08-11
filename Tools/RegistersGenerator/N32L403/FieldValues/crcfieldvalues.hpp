/*******************************************************************************
* Filename      : crcfieldvalues.hpp
*
* Details       : Enumerations related with CRC peripheral. This header file is
*                 auto-generated for N32L403 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC32DAT_CRC32DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC32IDAT_CRC32IDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC32CTRL_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CRC32CTRL_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CRC32CTRL_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC16CTRL_ENDHL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CRC16CTRL_ENDHL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CRC16CTRL_ENDHL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC16CTRL_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CRC_CRC16CTRL_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CRC_CRC16CTRL_CLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC16DAT_CRC16DAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_CRC16D_CRC16D_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CRC_LRC_LRCDAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

