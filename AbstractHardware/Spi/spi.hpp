//
// Created by Sergey on 26.10.2019.
//

#ifndef REGISTERS_SPI_HPP
#define REGISTERS_SPI_HPP

#include <cstddef>  //for std::uint8_t

#include "susudefs.hpp"  //for __forceinline


template<typename SpiModule>
struct Spi
{
		__forceinline static void Start()
		{
				// no implementation for SPI
		}
		__forceinline static void Stop()
		{
				// no implementation for SPI
		}

  __forceinline static void WriteByte(std::uint8_t chByte)
  {
    while (SpiModule::SR::TXE::TxBufferNotEmpty::IsSet())
    {
    }
    SendByte(chByte);
    while (SpiModule::SR::BSY::Busy::IsSet())
    {
    }
  }

  static void WriteData(std::uint8_t *pData, size_t size)
  {
    for(size_t i = 0; i < size; ++i)
    {
      WriteByte(pData[i]);
    }
  }

  private:
    __forceinline void static SendByte(std::uint8_t chByte)
    {
      SpiModule::DR::Write(static_cast<typename SpiModule::DR::Type>(chByte)) ;
    }

};

#endif //REGISTERS_SPI_HPP
