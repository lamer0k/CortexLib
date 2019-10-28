//
// Created by Sergey on 26.10.2019.
//

#ifndef REGISTERS_SPI_HPP
#define REGISTERS_SPI_HPP

#include <cstddef>  //for std::byte

#include "susudefs.hpp"  //for __forceinline


template<typename SpiModule>
struct Spi
{
  __forceinline static void WriteByte(std::byte byte)
  {
    while (SpiModule::SR::TXE::TxBufferNotEmpty::IsSet())
    {
    }
    SendByte(chByte);
  }

  static void ISpi::WriteData(std::byte *pData, size_t size)
  {
    for(size_t i = 0; i < size; ++i)
    {
      WriteByte(pData[i], size);
    }
  }

  private:
    __forceinline void static SendByte(std::byte chByte)
    {
      SpiModule::DR::Write(static_cast<SpiModule::DR::Type>(chByte)) ;
    }

};

#endif //REGISTERS_SPI_HPP
