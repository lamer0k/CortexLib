/*******************************************************************************
* Filename      : i2c3registers.hpp
*
* Details       : Inter-integrated circuit. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(I2C3REGISTERS_HPP)
#define I2C3REGISTERS_HPP

#include "i2c3bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct I2C3
{
  struct Cr1 : public RegisterBase<0x40005C00, 32, ReadWriteMode>
  {
    using Swrst = ICCrSwrstValues<I2C3::Cr1, 15, 1, ReadWriteMode, ICCrSwrstValuesBase> ;
    using Alert = ICCrAlertValues<I2C3::Cr1, 13, 1, ReadWriteMode, ICCrAlertValuesBase> ;
    using Pec = ICCrPecValues<I2C3::Cr1, 12, 1, ReadWriteMode, ICCrPecValuesBase> ;
    using Pos = ICCrPosValues<I2C3::Cr1, 11, 1, ReadWriteMode, ICCrPosValuesBase> ;
    using Ack = ICCrAckValues<I2C3::Cr1, 10, 1, ReadWriteMode, ICCrAckValuesBase> ;
    using Stop = ICCrStopValues<I2C3::Cr1, 9, 1, ReadWriteMode, ICCrStopValuesBase> ;
    using Start = ICCrStartValues<I2C3::Cr1, 8, 1, ReadWriteMode, ICCrStartValuesBase> ;
    using Nostretch = ICCrNostretchValues<I2C3::Cr1, 7, 1, ReadWriteMode, ICCrNostretchValuesBase> ;
    using Engc = ICCrEngcValues<I2C3::Cr1, 6, 1, ReadWriteMode, ICCrEngcValuesBase> ;
    using Enpec = ICCrEnpecValues<I2C3::Cr1, 5, 1, ReadWriteMode, ICCrEnpecValuesBase> ;
    using Enarp = ICCrEnarpValues<I2C3::Cr1, 4, 1, ReadWriteMode, ICCrEnarpValuesBase> ;
    using Smbtype = ICCrSmbtypeValues<I2C3::Cr1, 3, 1, ReadWriteMode, ICCrSmbtypeValuesBase> ;
    using Smbus = ICCrSmbusValues<I2C3::Cr1, 1, 1, ReadWriteMode, ICCrSmbusValuesBase> ;
    using Pe = ICCrPeValues<I2C3::Cr1, 0, 1, ReadWriteMode, ICCrPeValuesBase> ;
  } ;

  template<typename... T> 
  using Cr1Pack  = Register<0x40005C00, 32, ReadWriteMode, ICCrSwrstValuesBase, T...> ;

  struct Cr2 : public RegisterBase<0x40005C04, 32, ReadWriteMode>
  {
    using Last = ICCrLastValues<I2C3::Cr2, 12, 1, ReadWriteMode, ICCrLastValuesBase> ;
    using Dmaen = ICCrDmaenValues<I2C3::Cr2, 11, 1, ReadWriteMode, ICCrDmaenValuesBase> ;
    using Itbufen = ICCrItbufenValues<I2C3::Cr2, 10, 1, ReadWriteMode, ICCrItbufenValuesBase> ;
    using Itevten = ICCrItevtenValues<I2C3::Cr2, 9, 1, ReadWriteMode, ICCrItevtenValuesBase> ;
    using Iterren = ICCrIterrenValues<I2C3::Cr2, 8, 1, ReadWriteMode, ICCrIterrenValuesBase> ;
    using Freq = ReadWriteMode<I2C3::Cr2, 0, 6> ;
  } ;

  template<typename... T> 
  using Cr2Pack  = Register<0x40005C04, 32, ReadWriteMode, ICCrLastValuesBase, T...> ;

  struct Oar1 : public RegisterBase<0x40005C08, 32, ReadWriteMode>
  {
    using Addmode = ICOarAddmodeValues<I2C3::Oar1, 15, 1, ReadWriteMode, ICOarAddmodeValuesBase> ;
    using Add10 = ICOarAddValues<I2C3::Oar1, 8, 2, ReadWriteMode, ICOarAddValuesBase> ;
    using Add7 = ReadWriteMode<I2C3::Oar1, 1, 7> ;
    using Add0 = ICOarAddValues<I2C3::Oar1, 0, 1, ReadWriteMode, ICOarAddValuesBase> ;
  } ;

  template<typename... T> 
  using Oar1Pack  = Register<0x40005C08, 32, ReadWriteMode, ICOarAddmodeValuesBase, T...> ;

  struct Oar2 : public RegisterBase<0x40005C0C, 32, ReadWriteMode>
  {
    using Add2 = ReadWriteMode<I2C3::Oar2, 1, 7> ;
    using Endual = ICOarEndualValues<I2C3::Oar2, 0, 1, ReadWriteMode, ICOarEndualValuesBase> ;
  } ;

  template<typename... T> 
  using Oar2Pack  = Register<0x40005C0C, 32, ReadWriteMode, ICOarAddValuesBase, T...> ;

  struct Dr : public RegisterBase<0x40005C10, 32, ReadWriteMode>
  {
    using DrField = ReadWriteMode<I2C3::Dr, 0, 8> ;
  } ;

  template<typename... T> 
  using DrPack  = Register<0x40005C10, 32, ReadWriteMode, ICDrDrValuesBase, T...> ;

  struct Sr1 : public RegisterBase<0x40005C14, 32, ReadWriteMode>
  {
    using Smbalert = ICSrSmbalertValues<I2C3::Sr1, 15, 1, ReadWriteMode, ICSrSmbalertValuesBase> ;
    using Timeout = ICSrTimeoutValues<I2C3::Sr1, 14, 1, ReadWriteMode, ICSrTimeoutValuesBase> ;
    using Pecerr = ICSrPecerrValues<I2C3::Sr1, 12, 1, ReadWriteMode, ICSrPecerrValuesBase> ;
    using Ovr = ICSrOvrValues<I2C3::Sr1, 11, 1, ReadWriteMode, ICSrOvrValuesBase> ;
    using Af = ICSrAfValues<I2C3::Sr1, 10, 1, ReadWriteMode, ICSrAfValuesBase> ;
    using Arlo = ICSrArloValues<I2C3::Sr1, 9, 1, ReadWriteMode, ICSrArloValuesBase> ;
    using Berr = ICSrBerrValues<I2C3::Sr1, 8, 1, ReadWriteMode, ICSrBerrValuesBase> ;
    using Txe = ICSrTxeValues<I2C3::Sr1, 7, 1, ReadMode, ICSrTxeValuesBase> ;
    using Rxne = ICSrRxneValues<I2C3::Sr1, 6, 1, ReadMode, ICSrRxneValuesBase> ;
    using Stopf = ICSrStopfValues<I2C3::Sr1, 4, 1, ReadMode, ICSrStopfValuesBase> ;
    using Add10 = ICSrAddValues<I2C3::Sr1, 3, 1, ReadMode, ICSrAddValuesBase> ;
    using Btf = ICSrBtfValues<I2C3::Sr1, 2, 1, ReadMode, ICSrBtfValuesBase> ;
    using Addr = ICSrAddrValues<I2C3::Sr1, 1, 1, ReadMode, ICSrAddrValuesBase> ;
    using Sb = ICSrSbValues<I2C3::Sr1, 0, 1, ReadMode, ICSrSbValuesBase> ;
  } ;

  template<typename... T> 
  using Sr1Pack  = Register<0x40005C14, 32, ReadWriteMode, ICSrSmbalertValuesBase, T...> ;

  struct Sr2 : public RegisterBase<0x40005C18, 32, ReadMode>
  {
    using Pec = ReadMode<I2C3::Sr2, 8, 8> ;
    using Dualf = ICSrDualfValues<I2C3::Sr2, 7, 1, ReadMode, ICSrDualfValuesBase> ;
    using Smbhost = ICSrSmbhostValues<I2C3::Sr2, 6, 1, ReadMode, ICSrSmbhostValuesBase> ;
    using Smbdefault = ICSrSmbdefaultValues<I2C3::Sr2, 5, 1, ReadMode, ICSrSmbdefaultValuesBase> ;
    using Gencall = ICSrGencallValues<I2C3::Sr2, 4, 1, ReadMode, ICSrGencallValuesBase> ;
    using Tra = ICSrTraValues<I2C3::Sr2, 2, 1, ReadMode, ICSrTraValuesBase> ;
    using Busy = ICSrBusyValues<I2C3::Sr2, 1, 1, ReadMode, ICSrBusyValuesBase> ;
    using Msl = ICSrMslValues<I2C3::Sr2, 0, 1, ReadMode, ICSrMslValuesBase> ;
  } ;

  template<typename... T> 
  using Sr2Pack  = Register<0x40005C18, 32, ReadMode, ICSrPecValuesBase, T...> ;

  struct Ccr : public RegisterBase<0x40005C1C, 32, ReadWriteMode>
  {
    using FS = ICCcrFSValues<I2C3::Ccr, 15, 1, ReadWriteMode, ICCcrFSValuesBase> ;
    using Duty = ICCcrDutyValues<I2C3::Ccr, 14, 1, ReadWriteMode, ICCcrDutyValuesBase> ;
    using CcrField = ReadWriteMode<I2C3::Ccr, 0, 12> ;
  } ;

  template<typename... T> 
  using CcrPack  = Register<0x40005C1C, 32, ReadWriteMode, ICCcrFSValuesBase, T...> ;

  struct Trise : public RegisterBase<0x40005C20, 32, ReadWriteMode>
  {
    using TriseField = ReadWriteMode<I2C3::Trise, 0, 6> ;
  } ;

  template<typename... T> 
  using TrisePack  = Register<0x40005C20, 32, ReadWriteMode, ICTriseTriseValuesBase, T...> ;

} ;

#endif //#if !defined(I2C3REGISTERS_HPP)
