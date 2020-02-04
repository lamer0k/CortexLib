/*******************************************************************************
* Filename      : mdrcrcve4registers.hpp
*
* Details       : CRC Controler. This header file is auto-generated for
*                 MDR1986VE4 device.
*
*
*******************************************************************************/

#if !defined(MDRCRCVE4REGISTERS_HPP)
#define MDRCRCVE4REGISTERS_HPP

#include "mdrcrcve4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDR_CRC_VE4
{
  struct MDR_CRC_VE4CTRLBase {} ;

  struct CTRL : public RegisterBase<0x40098000, 32, ReadWriteMode>
  {
    using CRCEn = MDR_CRC_VE4_CTRL_CRCEn_Values<MDR_CRC_VE4::CTRL, 0, 1, ReadWriteMode, MDR_CRC_VE4CTRLBase> ;
    using DataInv = MDR_CRC_VE4_CTRL_DataInv_Values<MDR_CRC_VE4::CTRL, 1, 1, ReadWriteMode, MDR_CRC_VE4CTRLBase> ;
    using DMA_En = MDR_CRC_VE4_CTRL_DMA_En_Values<MDR_CRC_VE4::CTRL, 2, 1, ReadWriteMode, MDR_CRC_VE4CTRLBase> ;
    using DL_Size = MDR_CRC_VE4_CTRL_DL_Size_Values<MDR_CRC_VE4::CTRL, 3, 2, ReadWriteMode, MDR_CRC_VE4CTRLBase> ;
    using DC_Size = MDR_CRC_VE4_CTRL_DC_Size_Values<MDR_CRC_VE4::CTRL, 5, 2, ReadWriteMode, MDR_CRC_VE4CTRLBase> ;
    using FieldValues = MDR_CRC_VE4_CTRL_DC_Size_Values<MDR_CRC_VE4::CTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRLPack  = Register<0x40098000, 32, ReadWriteMode, MDR_CRC_VE4CTRLBase, T...> ;

  struct MDR_CRC_VE4STATBase {} ;

  struct STAT : public RegisterBase<0x40098004, 32, ReadWriteMode>
  {
    using ConvComp = MDR_CRC_VE4_STAT_ConvComp_Values<MDR_CRC_VE4::STAT, 0, 1, ReadMode, MDR_CRC_VE4STATBase> ;
    using FIFO_Full = MDR_CRC_VE4_STAT_FIFO_Full_Values<MDR_CRC_VE4::STAT, 1, 1, ReadMode, MDR_CRC_VE4STATBase> ;
    using FIFO_Empty = MDR_CRC_VE4_STAT_FIFO_Empty_Values<MDR_CRC_VE4::STAT, 2, 1, ReadMode, MDR_CRC_VE4STATBase> ;
    using FIFO_Over = MDR_CRC_VE4_STAT_FIFO_Over_Values<MDR_CRC_VE4::STAT, 3, 1, ReadWriteMode, MDR_CRC_VE4STATBase> ;
    using FieldValues = MDR_CRC_VE4_STAT_FIFO_Over_Values<MDR_CRC_VE4::STAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STATPack  = Register<0x40098004, 32, ReadWriteMode, MDR_CRC_VE4STATBase, T...> ;

  struct MDR_CRC_VE4DATAIBase {} ;

  struct DATAI : public RegisterBase<0x40098008, 32, WriteMode>
  {
    using Value = MDR_CRC_VE4_DATAI_Value_Values<MDR_CRC_VE4::DATAI, 0, 32, WriteMode, MDR_CRC_VE4DATAIBase> ;
    using FieldValues = MDR_CRC_VE4_DATAI_Value_Values<MDR_CRC_VE4::DATAI, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DATAIPack  = Register<0x40098008, 32, WriteMode, MDR_CRC_VE4DATAIBase, T...> ;

  struct MDR_CRC_VE4CRC_VALBase {} ;

  struct CRC_VAL : public RegisterBase<0x4009800C, 32, ReadWriteMode>
  {
    using CRC_Out = MDR_CRC_VE4_CRC_VAL_CRC_Out_Values<MDR_CRC_VE4::CRC_VAL, 0, 16, ReadWriteMode, MDR_CRC_VE4CRC_VALBase> ;
    using FieldValues = MDR_CRC_VE4_CRC_VAL_CRC_Out_Values<MDR_CRC_VE4::CRC_VAL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC_VALPack  = Register<0x4009800C, 32, ReadWriteMode, MDR_CRC_VE4CRC_VALBase, T...> ;

  struct MDR_CRC_VE4CRC_POLBase {} ;

  struct CRC_POL : public RegisterBase<0x40098010, 32, ReadWriteMode>
  {
    using CRC_POLField = MDR_CRC_VE4_CRC_POL_CRC_POL_Values<MDR_CRC_VE4::CRC_POL, 0, 17, ReadWriteMode, MDR_CRC_VE4CRC_POLBase> ;
    using FieldValues = MDR_CRC_VE4_CRC_POL_CRC_POL_Values<MDR_CRC_VE4::CRC_POL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRC_POLPack  = Register<0x40098010, 32, ReadWriteMode, MDR_CRC_VE4CRC_POLBase, T...> ;

} ;

#endif //#if !defined(MDRCRCVE4REGISTERS_HPP)
